#include <com/sun/tools/javac/comp/Attr$PostAttrAnalyzer.h>

#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef METHODDEF
#undef NOPOS
#undef TYPEIDENT
#undef VOID

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$PostAttrAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$PostAttrAnalyzer, this$0)},
	{}
};

$MethodInfo _Attr$PostAttrAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, 0, $method(static_cast<void(Attr$PostAttrAnalyzer::*)($Attr*)>(&Attr$PostAttrAnalyzer::init$))},
	{"dummyMethodType", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Attr$PostAttrAnalyzer::*)($JCTree$JCMethodDecl*)>(&Attr$PostAttrAnalyzer::dummyMethodType))},
	{"dummyMethodType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Attr$PostAttrAnalyzer::*)()>(&Attr$PostAttrAnalyzer::dummyMethodType))},
	{"initTypeIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(static_cast<void(Attr$PostAttrAnalyzer::*)($JCTree*)>(&Attr$PostAttrAnalyzer::initTypeIfNeeded))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attr$PostAttrAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer", "com.sun.tools.javac.comp.Attr", "PostAttrAnalyzer", 0},
	{}
};

$ClassInfo _Attr$PostAttrAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Attr$PostAttrAnalyzer_FieldInfo_,
	_Attr$PostAttrAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Attr$PostAttrAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$PostAttrAnalyzer($Class* clazz) {
	return $of($alloc(Attr$PostAttrAnalyzer));
}

void Attr$PostAttrAnalyzer::init$($Attr* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Attr$PostAttrAnalyzer::initTypeIfNeeded($JCTree* that) {
	if ($nc(that)->type == nullptr) {
		$init($JCTree$Tag);
		if (that->hasTag($JCTree$Tag::METHODDEF)) {
			$set(that, type, dummyMethodType($cast($JCTree$JCMethodDecl, that)));
		} else {
			$set(that, type, $nc(this->this$0->syms)->unknownType);
		}
	}
}

$Type* Attr$PostAttrAnalyzer::dummyMethodType($JCTree$JCMethodDecl* md) {
	$useLocalCurrentObjectStackCache();
	$var($Type, restype, $nc(this->this$0->syms)->unknownType);
	$init($JCTree$Tag);
	if (md != nullptr && md->restype != nullptr && $nc(md->restype)->hasTag($JCTree$Tag::TYPEIDENT)) {
		$var($JCTree$JCPrimitiveTypeTree, prim, $cast($JCTree$JCPrimitiveTypeTree, md->restype));
		$init($TypeTag);
		if ($nc(prim)->typetag == $TypeTag::VOID) {
			$assign(restype, $nc(this->this$0->syms)->voidType);
		}
	}
	$var($List, var$0, $List::nil());
	$var($Type, var$1, restype);
	return $new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this->this$0->syms)->methodClass);
}

$Type* Attr$PostAttrAnalyzer::dummyMethodType() {
	return dummyMethodType(nullptr);
}

void Attr$PostAttrAnalyzer::scan($JCTree* tree) {
	if (tree == nullptr) {
		return;
	}
	if ($instanceOf($JCTree$JCExpression, tree)) {
		initTypeIfNeeded(tree);
	}
	$TreeScanner::scan(tree);
}

void Attr$PostAttrAnalyzer::visitIdent($JCTree$JCIdent* that) {
	if ($nc(that)->sym == nullptr) {
		$set(that, sym, $nc(this->this$0->syms)->unknownSymbol);
	}
}

void Attr$PostAttrAnalyzer::visitSelect($JCTree$JCFieldAccess* that) {
	if ($nc(that)->sym == nullptr) {
		$set(that, sym, $nc(this->this$0->syms)->unknownSymbol);
	}
	$TreeScanner::visitSelect(that);
}

void Attr$PostAttrAnalyzer::visitClassDef($JCTree$JCClassDecl* that) {
	initTypeIfNeeded(that);
	if ($nc(that)->sym == nullptr) {
		$set(that, sym, $new($Symbol$ClassSymbol, 0, that->name, that->type, $nc(this->this$0->syms)->noSymbol));
	}
	$TreeScanner::visitClassDef(that);
}

void Attr$PostAttrAnalyzer::visitMethodDef($JCTree$JCMethodDecl* that) {
	initTypeIfNeeded(that);
	if ($nc(that)->sym == nullptr) {
		$set(that, sym, $new($Symbol$MethodSymbol, 0, that->name, that->type, $nc(this->this$0->syms)->noSymbol));
	}
	$TreeScanner::visitMethodDef(that);
}

void Attr$PostAttrAnalyzer::visitVarDef($JCTree$JCVariableDecl* that) {
	initTypeIfNeeded(that);
	if ($nc(that)->sym == nullptr) {
		$set(that, sym, $new($Symbol$VarSymbol, 0, that->name, that->type, $nc(this->this$0->syms)->noSymbol));
		$nc(that->sym)->adr = 0;
	}
	if ($nc(that)->vartype == nullptr) {
		$set(that, vartype, $nc($($nc(this->this$0->make)->at($Position::NOPOS)))->Erroneous());
	}
	$TreeScanner::visitVarDef(that);
}

void Attr$PostAttrAnalyzer::visitBindingPattern($JCTree$JCBindingPattern* that) {
	if ($nc($nc(that)->var)->sym == nullptr) {
		$set($nc(that->var), sym, $new($Symbol$BindingSymbol, 0, $nc(that->var)->name, $nc(that->var)->type, $nc(this->this$0->syms)->noSymbol));
		$nc($nc(that->var)->sym)->adr = 0;
	}
	$TreeScanner::visitBindingPattern(that);
}

void Attr$PostAttrAnalyzer::visitNewClass($JCTree$JCNewClass* that) {
	if ($nc(that)->constructor == nullptr) {
		$set(that, constructor, $new($Symbol$MethodSymbol, 0, $nc(this->this$0->names)->init, $(dummyMethodType()), $nc(this->this$0->syms)->noSymbol));
	}
	if ($nc(that)->constructorType == nullptr) {
		$set(that, constructorType, $nc(this->this$0->syms)->unknownType);
	}
	$TreeScanner::visitNewClass(that);
}

void Attr$PostAttrAnalyzer::visitAssignop($JCTree$JCAssignOp* that) {
	if ($nc(that)->operator$ == nullptr) {
		$set(that, operator$, $new($Symbol$OperatorSymbol, $nc(this->this$0->names)->empty, $(dummyMethodType()), -1, $nc(this->this$0->syms)->noSymbol));
	}
	$TreeScanner::visitAssignop(that);
}

void Attr$PostAttrAnalyzer::visitBinary($JCTree$JCBinary* that) {
	if ($nc(that)->operator$ == nullptr) {
		$set(that, operator$, $new($Symbol$OperatorSymbol, $nc(this->this$0->names)->empty, $(dummyMethodType()), -1, $nc(this->this$0->syms)->noSymbol));
	}
	$TreeScanner::visitBinary(that);
}

void Attr$PostAttrAnalyzer::visitUnary($JCTree$JCUnary* that) {
	if ($nc(that)->operator$ == nullptr) {
		$set(that, operator$, $new($Symbol$OperatorSymbol, $nc(this->this$0->names)->empty, $(dummyMethodType()), -1, $nc(this->this$0->syms)->noSymbol));
	}
	$TreeScanner::visitUnary(that);
}

void Attr$PostAttrAnalyzer::visitReference($JCTree$JCMemberReference* that) {
	$TreeScanner::visitReference(that);
	if ($nc(that)->sym == nullptr) {
		$set(that, sym, $new($Symbol$MethodSymbol, 0, $nc(this->this$0->names)->empty, $(dummyMethodType()), $nc(this->this$0->syms)->noSymbol));
	}
}

Attr$PostAttrAnalyzer::Attr$PostAttrAnalyzer() {
}

$Class* Attr$PostAttrAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Attr$PostAttrAnalyzer, name, initialize, &_Attr$PostAttrAnalyzer_ClassInfo_, allocate$Attr$PostAttrAnalyzer);
	return class$;
}

$Class* Attr$PostAttrAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com