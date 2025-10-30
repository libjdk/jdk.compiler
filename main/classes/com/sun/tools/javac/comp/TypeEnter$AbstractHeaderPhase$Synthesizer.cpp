#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer.h>

#include <com/sun/tools/javac/code/Scope$ErrorScope.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer$1.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer$2.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef ERROR

using $Scope$ErrorScope = ::com::sun::tools::javac::code::Scope$ErrorScope;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$AbstractHeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase;
using $TypeEnter$AbstractHeaderPhase$Synthesizer$1 = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase$Synthesizer$1;
using $TypeEnter$AbstractHeaderPhase$Synthesizer$2 = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase$Synthesizer$2;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
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

$FieldInfo _TypeEnter$AbstractHeaderPhase$Synthesizer_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$Synthesizer, this$1)},
	{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, 0, $field(TypeEnter$AbstractHeaderPhase$Synthesizer, msym)},
	{"originalType", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(TypeEnter$AbstractHeaderPhase$Synthesizer, originalType)},
	{"interfaceExpected", "Z", nullptr, 0, $field(TypeEnter$AbstractHeaderPhase$Synthesizer, interfaceExpected)},
	{"synthesizedSymbols", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", 0, $field(TypeEnter$AbstractHeaderPhase$Synthesizer, synthesizedSymbols)},
	{"result", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(TypeEnter$AbstractHeaderPhase$Synthesizer, result)},
	{}
};

$MethodInfo _TypeEnter$AbstractHeaderPhase$Synthesizer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Type;Z)V", nullptr, 0, $method(static_cast<void(TypeEnter$AbstractHeaderPhase$Synthesizer::*)($TypeEnter$AbstractHeaderPhase*,$Symbol$ModuleSymbol*,$Type*,bool)>(&TypeEnter$AbstractHeaderPhase$Synthesizer::init$))},
	{"synthesizeClass", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0},
	{"synthesizeTyparams", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;I)V", nullptr, 0},
	{"visit", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"visit", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TypeEnter$AbstractHeaderPhase$Synthesizer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer", "com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "Synthesizer", $PRIVATE},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TypeEnter$AbstractHeaderPhase$Synthesizer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_TypeEnter$AbstractHeaderPhase$Synthesizer_FieldInfo_,
	_TypeEnter$AbstractHeaderPhase$Synthesizer_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$AbstractHeaderPhase$Synthesizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$AbstractHeaderPhase$Synthesizer($Class* clazz) {
	return $of($alloc(TypeEnter$AbstractHeaderPhase$Synthesizer));
}

void TypeEnter$AbstractHeaderPhase$Synthesizer::init$($TypeEnter$AbstractHeaderPhase* this$1, $Symbol$ModuleSymbol* msym, $Type* originalType, bool interfaceExpected) {
	$set(this, this$1, this$1);
	$JCTree$Visitor::init$();
	$set(this, synthesizedSymbols, $List::nil());
	$set(this, msym, msym);
	$set(this, originalType, originalType);
	this->interfaceExpected = interfaceExpected;
}

$Type* TypeEnter$AbstractHeaderPhase$Synthesizer::visit($JCTree* tree) {
	$nc(tree)->accept(this);
	return this->result;
}

$List* TypeEnter$AbstractHeaderPhase$Synthesizer::visit($List* trees) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, lb, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(trees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, t, $cast($JCTree, i$->next()));
			lb->append($(visit(t)));
		}
	}
	return lb->toList();
}

void TypeEnter$AbstractHeaderPhase$Synthesizer::visitTree($JCTree* tree) {
	$set(this, result, $nc($nc(this->this$1->this$0)->syms)->errType);
}

void TypeEnter$AbstractHeaderPhase$Synthesizer::visitIdent($JCTree$JCIdent* tree) {
	$init($TypeTag);
	if (!$nc($nc(tree)->type)->hasTag($TypeTag::ERROR)) {
		$set(this, result, tree->type);
	} else {
		$set(this, result, $nc($(synthesizeClass(tree->name, $nc(this->msym)->unnamedPackage)))->type);
	}
}

void TypeEnter$AbstractHeaderPhase$Synthesizer::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if (!$nc($nc(tree)->type)->hasTag($TypeTag::ERROR)) {
		$set(this, result, tree->type);
	} else {
		$var($Type, selectedType, nullptr);
		bool prev = this->interfaceExpected;
		{
			$var($Throwable, var$0, nullptr);
			try {
				this->interfaceExpected = false;
				$assign(selectedType, visit(static_cast<$JCTree*>(tree->selected)));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->interfaceExpected = prev;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		$var($Symbol$ClassSymbol, c, synthesizeClass(tree->name, $nc(selectedType)->tsym));
		$set(this, result, $nc(c)->type);
	}
}

void TypeEnter$AbstractHeaderPhase$Synthesizer::visitTypeApply($JCTree$JCTypeApply* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if (!$nc($nc(tree)->type)->hasTag($TypeTag::ERROR)) {
		$set(this, result, tree->type);
	} else {
		$var($Type$ClassType, clazzType, $cast($Type$ClassType, visit(static_cast<$JCTree*>(tree->clazz))));
		if ($nc(this->synthesizedSymbols)->contains($nc(clazzType)->tsym)) {
			synthesizeTyparams($cast($Symbol$ClassSymbol, $nc(clazzType)->tsym), $nc(tree->arguments)->size());
		}
		$var($List, actuals, visit(tree->arguments));
		$set(this, result, $new($TypeEnter$AbstractHeaderPhase$Synthesizer$1, this, tree->type, $nc(clazzType)->tsym, actuals));
	}
}

$Symbol$ClassSymbol* TypeEnter$AbstractHeaderPhase$Synthesizer::synthesizeClass($Name* name, $Symbol* owner) {
	int32_t flags = this->interfaceExpected ? 512 : 0;
	$var($Symbol$ClassSymbol, c, $new($Symbol$ClassSymbol, flags, name, owner));
	$set(c, members_field, $new($Scope$ErrorScope, c));
	$set(c, type, $new($TypeEnter$AbstractHeaderPhase$Synthesizer$2, this, this->originalType, c));
	$set(this, synthesizedSymbols, $nc(this->synthesizedSymbols)->prepend(c));
	return c;
}

void TypeEnter$AbstractHeaderPhase$Synthesizer::synthesizeTyparams($Symbol$ClassSymbol* sym, int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(sym)->type));
	$Assert::check($nc($nc(ct)->typarams_field)->isEmpty());
	if (n == 1) {
		$var($Type$TypeVar, v, $new($Type$TypeVar, $($nc($nc(this->this$1->this$0)->names)->fromString("T"_s)), static_cast<$Symbol*>(sym), $nc($nc(this->this$1->this$0)->syms)->botType));
		$set($nc(ct), typarams_field, $nc(ct->typarams_field)->prepend(v));
	} else {
		for (int32_t i = n; i > 0; --i) {
			$var($Type$TypeVar, v, $new($Type$TypeVar, $($nc($nc(this->this$1->this$0)->names)->fromString($$str({"T"_s, $$str(i)}))), static_cast<$Symbol*>(sym), $nc($nc(this->this$1->this$0)->syms)->botType));
			$set($nc(ct), typarams_field, $nc(ct->typarams_field)->prepend(v));
		}
	}
}

TypeEnter$AbstractHeaderPhase$Synthesizer::TypeEnter$AbstractHeaderPhase$Synthesizer() {
}

$Class* TypeEnter$AbstractHeaderPhase$Synthesizer::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$AbstractHeaderPhase$Synthesizer, name, initialize, &_TypeEnter$AbstractHeaderPhase$Synthesizer_ClassInfo_, allocate$TypeEnter$AbstractHeaderPhase$Synthesizer);
	return class$;
}

$Class* TypeEnter$AbstractHeaderPhase$Synthesizer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com