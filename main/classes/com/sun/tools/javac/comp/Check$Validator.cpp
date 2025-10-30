#include <com/sun/tools/javac/comp/Check$Validator.h>

#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef CLASS
#undef SELECT
#undef VOID

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Check$Validator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$Validator, this$0)},
	{"checkRaw", "Z", nullptr, 0, $field(Check$Validator, checkRaw)},
	{"isOuter", "Z", nullptr, 0, $field(Check$Validator, isOuter)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(Check$Validator, env)},
	{}
};

$MethodInfo _Check$Validator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $method(static_cast<void(Check$Validator::*)($Check*,$Env*)>(&Check$Validator::init$))},
	{"validateTree", "(Lcom/sun/tools/javac/tree/JCTree;ZZ)V", nullptr, $PUBLIC},
	{"validateTrees", "(Lcom/sun/tools/javac/util/List;ZZ)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;ZZ)V", $PUBLIC},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSelectInternal", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Check$Validator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$Validator", "com.sun.tools.javac.comp.Check", "Validator", 0},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Check$Validator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$Validator",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Check$Validator_FieldInfo_,
	_Check$Validator_MethodInfo_,
	nullptr,
	nullptr,
	_Check$Validator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$Validator($Class* clazz) {
	return $of($alloc(Check$Validator));
}

void Check$Validator::init$($Check* this$0, $Env* env) {
	$set(this, this$0, this$0);
	$JCTree$Visitor::init$();
	$set(this, env, env);
}

void Check$Validator::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	validateTree($nc(tree)->elemtype, this->checkRaw, this->isOuter);
}

void Check$Validator::visitTypeApply($JCTree$JCTypeApply* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc($nc(tree)->type)->hasTag($TypeTag::CLASS)) {
		$var($List, args, tree->arguments);
		$var($List, forms, $nc($nc($nc(tree->type)->tsym)->type)->getTypeArguments());
		$var($Type, incompatibleArg, this->this$0->firstIncompatibleTypeArg(tree->type));
		if (incompatibleArg != nullptr) {
			{
				$var($Iterator, i$, $nc(tree->arguments)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree, arg, $cast($JCTree, i$->next()));
					{
						if ($nc(arg)->type == incompatibleArg) {
							$nc(this->this$0->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(arg), $($CompilerProperties$Errors::NotWithinBounds(incompatibleArg, $cast($Type, $nc(forms)->head))));
						}
						$assign(forms, $nc(forms)->tail);
					}
				}
			}
		}
		$assign(forms, $nc($nc($nc(tree->type)->tsym)->type)->getTypeArguments());
		bool is_java_lang_Class = $nc($nc(tree->type)->tsym)->flatName() == $nc(this->this$0->names)->java_lang_Class;
		while (true) {
			bool var$0 = $nc(args)->nonEmpty();
			if (!(var$0 && $nc(forms)->nonEmpty())) {
				break;
			}
			{
				validateTree($cast($JCTree, args->head), !(this->isOuter && is_java_lang_Class), false);
				$assign(args, args->tail);
				$assign(forms, forms->tail);
			}
		}
		if ($nc($($nc(tree->type)->getEnclosingType()))->isRaw()) {
			$init($CompilerProperties$Errors);
			$nc(this->this$0->log)->error($(tree->pos()), $CompilerProperties$Errors::ImproperlyFormedTypeInnerRawParam);
		}
		$init($JCTree$Tag);
		if ($nc(tree->clazz)->hasTag($JCTree$Tag::SELECT)) {
			visitSelectInternal($cast($JCTree$JCFieldAccess, tree->clazz));
		}
	}
}

void Check$Validator::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	validateTrees($nc(tree)->bounds, true, this->isOuter);
	this->this$0->checkClassBounds($($nc(tree)->pos()), tree->type);
}

void Check$Validator::visitWildcard($JCTree$JCWildcard* tree) {
	if ($nc(tree)->inner != nullptr) {
		validateTree(tree->inner, true, this->isOuter);
	}
}

void Check$Validator::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc($nc(tree)->type)->hasTag($TypeTag::CLASS)) {
		visitSelectInternal(tree);
		bool var$0 = $nc($nc(tree->selected)->type)->isParameterized();
		if (var$0 && $nc($($nc($nc($nc(tree->type)->tsym)->type)->getTypeArguments()))->nonEmpty()) {
			$init($CompilerProperties$Errors);
			$nc(this->this$0->log)->error($(tree->pos()), $CompilerProperties$Errors::ImproperlyFormedTypeParamMissing);
		}
	}
}

void Check$Validator::visitSelectInternal($JCTree$JCFieldAccess* tree) {
	bool var$0 = $nc($nc($nc(tree)->type)->tsym)->isStatic();
	if (var$0 && $nc($nc(tree->selected)->type)->isParameterized()) {
		$init($CompilerProperties$Errors);
		$nc(this->this$0->log)->error($(tree->pos()), $CompilerProperties$Errors::CantSelectStaticClassFromParamType);
	} else {
		$nc(tree->selected)->accept(this);
	}
}

void Check$Validator::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	$nc($nc(tree)->underlyingType)->accept(this);
}

void Check$Validator::visitTypeIdent($JCTree$JCPrimitiveTypeTree* that) {
	$init($TypeTag);
	if ($nc($nc(that)->type)->hasTag($TypeTag::VOID)) {
		$init($CompilerProperties$Errors);
		$nc(this->this$0->log)->error($(that->pos()), $CompilerProperties$Errors::VoidNotAllowedHere);
	}
	$JCTree$Visitor::visitTypeIdent(that);
}

void Check$Validator::visitTree($JCTree* tree) {
}

void Check$Validator::validateTree($JCTree* tree, bool checkRaw, bool isOuter) {
	$useLocalCurrentObjectStackCache();
	if (tree != nullptr) {
		bool prevCheckRaw = this->checkRaw;
		this->checkRaw = checkRaw;
		this->isOuter = isOuter;
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					tree->accept(this);
					if (checkRaw) {
						this->this$0->checkRaw(tree, this->env);
					}
				} catch ($Symbol$CompletionFailure& ex) {
					this->this$0->completionError($(tree->pos()), ex);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->checkRaw = prevCheckRaw;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Check$Validator::validateTrees($List* trees, bool checkRaw, bool isOuter) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			validateTree($cast($JCTree, l->head), checkRaw, isOuter);
		}
	}
}

Check$Validator::Check$Validator() {
}

$Class* Check$Validator::load$($String* name, bool initialize) {
	$loadClass(Check$Validator, name, initialize, &_Check$Validator_ClassInfo_, allocate$Check$Validator);
	return class$;
}

$Class* Check$Validator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com