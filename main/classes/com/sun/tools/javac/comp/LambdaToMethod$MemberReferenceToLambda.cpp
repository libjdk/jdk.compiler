#include <com/sun/tools/javac/comp/LambdaToMethod$MemberReferenceToLambda.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/comp/TransTypes.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ARRAY_CTOR
#undef INTERSECTION
#undef INVOKE
#undef TYPEVAR

using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $LambdaToMethod$1 = ::com::sun::tools::javac::comp::LambdaToMethod$1;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
using $TransTypes = ::com::sun::tools::javac::comp::TransTypes;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$MemberReferenceToLambda_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/LambdaToMethod;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$MemberReferenceToLambda, this$0)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod$MemberReferenceToLambda, tree)},
	{"localContext", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext;", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod$MemberReferenceToLambda, localContext)},
	{"owner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod$MemberReferenceToLambda, owner)},
	{"args", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PRIVATE | $FINAL, $field(LambdaToMethod$MemberReferenceToLambda, args)},
	{"params", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", $PRIVATE | $FINAL, $field(LambdaToMethod$MemberReferenceToLambda, params)},
	{"receiverExpression", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $field(LambdaToMethod$MemberReferenceToLambda, receiverExpression)},
	{}
};

$MethodInfo _LambdaToMethod$MemberReferenceToLambda_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$MemberReferenceToLambda::*)($LambdaToMethod*,$JCTree$JCMemberReference*,$LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext*,$Symbol*)>(&LambdaToMethod$MemberReferenceToLambda::init$))},
	{"addParameter", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$VarSymbol*(LambdaToMethod$MemberReferenceToLambda::*)($String*,$Type*,bool)>(&LambdaToMethod$MemberReferenceToLambda::addParameter))},
	{"addParametersReturnReceiver", "()Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, 0},
	{"expressionInvoke", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod$MemberReferenceToLambda::*)($Symbol$VarSymbol*)>(&LambdaToMethod$MemberReferenceToLambda::expressionInvoke))},
	{"expressionNew", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod$MemberReferenceToLambda::*)()>(&LambdaToMethod$MemberReferenceToLambda::expressionNew))},
	{"getReceiverExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"lambda", "()Lcom/sun/tools/javac/tree/JCTree$JCLambda;", nullptr, 0},
	{"makeReceiver", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod$MemberReferenceToLambda::*)($Symbol$VarSymbol*)>(&LambdaToMethod$MemberReferenceToLambda::makeReceiver))},
	{}
};

$InnerClassInfo _LambdaToMethod$MemberReferenceToLambda_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$MemberReferenceToLambda", "com.sun.tools.javac.comp.LambdaToMethod", "MemberReferenceToLambda", $PRIVATE},
	{}
};

$ClassInfo _LambdaToMethod$MemberReferenceToLambda_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$MemberReferenceToLambda",
	"java.lang.Object",
	nullptr,
	_LambdaToMethod$MemberReferenceToLambda_FieldInfo_,
	_LambdaToMethod$MemberReferenceToLambda_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaToMethod$MemberReferenceToLambda_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$MemberReferenceToLambda($Class* clazz) {
	return $of($alloc(LambdaToMethod$MemberReferenceToLambda));
}

void LambdaToMethod$MemberReferenceToLambda::init$($LambdaToMethod* this$0, $JCTree$JCMemberReference* tree, $LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext* localContext, $Symbol* owner) {
	$set(this, this$0, this$0);
	$set(this, args, $new($ListBuffer));
	$set(this, params, $new($ListBuffer));
	$set(this, receiverExpression, nullptr);
	$set(this, tree, tree);
	$set(this, localContext, localContext);
	$set(this, owner, owner);
}

$JCTree$JCLambda* LambdaToMethod$MemberReferenceToLambda::lambda() {
	$useLocalCurrentObjectStackCache();
	int32_t prevPos = $nc(this->this$0->make)->pos;
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree$JCLambda, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(this->this$0->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(this->tree));
			$var($Symbol$VarSymbol, rcvr, addParametersReturnReceiver());
			$init($MemberReferenceTree$ReferenceMode);
			$var($JCTree$JCExpression, expr, ($nc(this->tree)->getMode() == $MemberReferenceTree$ReferenceMode::INVOKE) ? expressionInvoke(rcvr) : expressionNew());
			$var($JCTree$JCLambda, slam, $nc(this->this$0->make)->Lambda($($nc(this->params)->toList()), expr));
			$set($nc(slam), target, $nc(this->tree)->target);
			$set(slam, type, $nc(this->tree)->type);
			slam->pos$ = $nc(this->tree)->pos$;
			$assign(var$2, slam);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->this$0->make)->at(prevPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Symbol$VarSymbol* LambdaToMethod$MemberReferenceToLambda::addParametersReturnReceiver() {
	$useLocalCurrentObjectStackCache();
	$var($Type, samDesc, $nc(this->localContext)->bridgedRefSig());
	$var($List, samPTypes, $nc(samDesc)->getParameterTypes());
	$var($List, descPTypes, $nc($($nc(this->tree)->getDescriptorType(this->this$0->types)))->getParameterTypes());
	$var($Symbol$VarSymbol, rcvr, nullptr);
	$init($LambdaToMethod$1);
	switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->get($nc(($nc(this->tree)->kind))->ordinal())) {
	case 3:
		{
			$assign(rcvr, addParameter("rec$"_s, $nc($($cast($JCTree$JCExpression, $nc(this->tree)->getQualifierExpression())))->type, false));
			$set(this, receiverExpression, $nc(this->this$0->attr)->makeNullCheck($($cast($JCTree$JCExpression, $nc(this->tree)->getQualifierExpression()))));
			break;
		}
	case 4:
		{
			$assign(rcvr, addParameter("rec$"_s, $cast($Type, $nc($(samDesc->getParameterTypes()))->head), false));
			$assign(samPTypes, $nc(samPTypes)->tail);
			$assign(descPTypes, $nc(descPTypes)->tail);
			break;
		}
	default:
		{
			$assign(rcvr, nullptr);
			break;
		}
	}
	$var($List, implPTypes, $nc($nc($nc(this->tree)->sym)->type)->getParameterTypes());
	int32_t implSize = $nc(implPTypes)->size();
	int32_t samSize = $nc(samPTypes)->size();
	int32_t last = $nc(this->localContext)->needsVarArgsConversion() ? implSize - 1 : implSize;
	bool checkForIntersection = $nc(this->tree)->varargsElement != nullptr || implSize == $nc(descPTypes)->size();
	for (int32_t i = 0; implPTypes->nonEmpty() && i < last; ++i) {
		$var($Type, parmType, $cast($Type, implPTypes->head));
		if (checkForIntersection) {
			$init($TypeKind);
			if ($nc(($cast($Type, descPTypes->head)))->getKind() == $TypeKind::INTERSECTION) {
				$assign(parmType, $cast($Type, samPTypes->head));
			}
			if ($nc(($cast($Type, descPTypes->head)))->getKind() == $TypeKind::TYPEVAR) {
				$var($Type$TypeVar, tv, $cast($Type$TypeVar, descPTypes->head));
				if ($nc($($nc(tv)->getUpperBound()))->getKind() == $TypeKind::INTERSECTION) {
					$assign(parmType, $cast($Type, samPTypes->head));
				}
			}
		}
		addParameter($$str({"x$"_s, $$str(i)}), parmType, true);
		$assign(implPTypes, implPTypes->tail);
		$assign(samPTypes, samPTypes->tail);
		$assign(descPTypes, descPTypes->tail);
	}
	for (int32_t i = last; i < samSize; ++i) {
		addParameter($$str({"xva$"_s, $$str(i)}), $nc(this->tree)->varargsElement, true);
	}
	return rcvr;
}

$JCTree$JCExpression* LambdaToMethod$MemberReferenceToLambda::getReceiverExpression() {
	return this->receiverExpression;
}

$JCTree$JCExpression* LambdaToMethod$MemberReferenceToLambda::makeReceiver($Symbol$VarSymbol* rcvr) {
	$useLocalCurrentObjectStackCache();
	if (rcvr == nullptr) {
		return nullptr;
	}
	$var($JCTree$JCExpression, rcvrExpr, $nc(this->this$0->make)->Ident(static_cast<$Symbol*>(rcvr)));
	bool protAccess = this->this$0->isProtectedInSuperClassOfEnclosingClassInOtherPackage($nc(this->tree)->sym, this->owner);
	$var($Type, rcvrType, $nc(this->tree)->ownerAccessible && !protAccess ? $nc($($nc($nc(this->tree)->sym)->enclClass()))->type : $nc($nc(this->tree)->expr)->type);
	if (rcvrType == $nc($nc(this->this$0->syms)->arrayClass)->type) {
		$assign(rcvrType, $nc($($cast($JCTree$JCExpression, $nc(this->tree)->getQualifierExpression())))->type);
	}
	if (!$nc($nc($nc(rcvr)->type)->tsym)->isSubClass($nc(rcvrType)->tsym, this->this$0->types)) {
		$assign(rcvrExpr, $nc($($nc(this->this$0->make)->TypeCast($(static_cast<$JCTree*>($nc(this->this$0->make)->Type(rcvrType))), rcvrExpr)))->setType(rcvrType));
	}
	return rcvrExpr;
}

$JCTree$JCExpression* LambdaToMethod$MemberReferenceToLambda::expressionInvoke($Symbol$VarSymbol* rcvr) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, qualifier, (rcvr != nullptr) ? makeReceiver(rcvr) : $cast($JCTree$JCExpression, $nc(this->tree)->getQualifierExpression()));
	$var($JCTree$JCFieldAccess, select, $nc(this->this$0->make)->Select(qualifier, $nc($nc(this->tree)->sym)->name));
	$set($nc(select), sym, $nc(this->tree)->sym);
	$set(select, type, $nc($nc(this->tree)->sym)->erasure(this->this$0->types));
	$var($List, var$0, $List::nil());
	$var($JCTree$JCExpression, var$1, static_cast<$JCTree$JCExpression*>(select));
	$var($JCTree$JCExpression, apply, $nc($($nc(this->this$0->make)->Apply(var$0, var$1, $(this->this$0->convertArgs($nc(this->tree)->sym, $($nc(this->args)->toList()), $nc(this->tree)->varargsElement)))))->setType($($nc($($nc($nc(this->tree)->sym)->erasure(this->this$0->types)))->getReturnType())));
	$assign(apply, $nc(this->this$0->transTypes)->coerce(this->this$0->attrEnv, apply, $($nc(this->this$0->types)->erasure($($nc($nc(($cast($JCTree$JCMemberReference, $nc(this->localContext)->tree)))->referentType)->getReturnType())))));
	this->this$0->setVarargsIfNeeded(apply, $nc(this->tree)->varargsElement);
	return apply;
}

$JCTree$JCExpression* LambdaToMethod$MemberReferenceToLambda::expressionNew() {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$JCMemberReference$ReferenceKind);
	if ($nc(this->tree)->kind == $JCTree$JCMemberReference$ReferenceKind::ARRAY_CTOR) {
		$var($JCTree$JCExpression, var$0, $nc(this->this$0->make)->Type($($nc(this->this$0->types)->elemtype($nc($($cast($JCTree$JCExpression, $nc(this->tree)->getQualifierExpression())))->type))));
		$var($JCTree$JCNewArray, newArr, $nc(this->this$0->make)->NewArray(var$0, $($List::of($($nc(this->this$0->make)->Ident($cast($JCTree$JCVariableDecl, $($nc(this->params)->first())))))), nullptr));
		$set($nc(newArr), type, $nc($($cast($JCTree$JCExpression, $nc(this->tree)->getQualifierExpression())))->type);
		return newArr;
	} else {
		$var($List, var$1, $List::nil());
		$var($JCTree$JCExpression, var$2, $nc(this->this$0->make)->Type($nc($($cast($JCTree$JCExpression, $nc(this->tree)->getQualifierExpression())))->type));
		$var($JCTree$JCNewClass, newClass, $nc(this->this$0->make)->NewClass(nullptr, var$1, var$2, $(this->this$0->convertArgs($nc(this->tree)->sym, $($nc(this->args)->toList()), $nc(this->tree)->varargsElement)), nullptr));
		$set($nc(newClass), constructor, $nc(this->tree)->sym);
		$set(newClass, constructorType, $nc($nc(this->tree)->sym)->erasure(this->this$0->types));
		$set(newClass, type, $nc($($cast($JCTree$JCExpression, $nc(this->tree)->getQualifierExpression())))->type);
		this->this$0->setVarargsIfNeeded(newClass, $nc(this->tree)->varargsElement);
		return newClass;
	}
}

$Symbol$VarSymbol* LambdaToMethod$MemberReferenceToLambda::addParameter($String* name, $Type* p, bool genArg) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$VarSymbol, vsym, $new($Symbol$VarSymbol, (int64_t)0x0000000200000000 | 4096, $($nc(this->this$0->names)->fromString(name)), p, this->owner));
	vsym->pos = $nc(this->tree)->pos$;
	$nc(this->params)->append($($nc(this->this$0->make)->VarDef(vsym, nullptr)));
	if (genArg) {
		$nc(this->args)->append($($nc(this->this$0->make)->Ident(static_cast<$Symbol*>(vsym))));
	}
	return vsym;
}

LambdaToMethod$MemberReferenceToLambda::LambdaToMethod$MemberReferenceToLambda() {
}

$Class* LambdaToMethod$MemberReferenceToLambda::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$MemberReferenceToLambda, name, initialize, &_LambdaToMethod$MemberReferenceToLambda_ClassInfo_, allocate$LambdaToMethod$MemberReferenceToLambda);
	return class$;
}

$Class* LambdaToMethod$MemberReferenceToLambda::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com