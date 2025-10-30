#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$1.h>

#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/TreeScanner.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <jcpp.h>

#undef CLASS
#undef TYP

using $ClassTree = ::com::sun::source::tree::ClassTree;
using $Tree = ::com::sun::source::tree::Tree;
using $TreeScanner = ::com::sun::source::util::TreeScanner;
using $JavacTaskPool$ReusableContext = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTaskPool$ReusableContext$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTaskPool$ReusableContext$1, this$0)},
	{}
};

$MethodInfo _JavacTaskPool$ReusableContext$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext;)V", nullptr, 0, $method(static_cast<void(JavacTaskPool$ReusableContext$1::*)($JavacTaskPool$ReusableContext*)>(&JavacTaskPool$ReusableContext$1::init$))},
	{"isCoreClass", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacTaskPool$ReusableContext$1::*)($Symbol*)>(&JavacTaskPool$ReusableContext$1::isCoreClass))},
	{"scan", "(Lcom/sun/source/tree/Tree;Lcom/sun/tools/javac/code/Symtab;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"supertype", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(JavacTaskPool$ReusableContext$1::*)($Symbol*)>(&JavacTaskPool$ReusableContext$1::supertype))},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Lcom/sun/tools/javac/code/Symtab;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavacTaskPool$ReusableContext$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacTaskPool$ReusableContext$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTaskPool$ReusableContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$1",
	"com.sun.source.util.TreeScanner",
	nullptr,
	_JavacTaskPool$ReusableContext$1_FieldInfo_,
	_JavacTaskPool$ReusableContext$1_MethodInfo_,
	"Lcom/sun/source/util/TreeScanner<Ljava/lang/Void;Lcom/sun/tools/javac/code/Symtab;>;",
	&_JavacTaskPool$ReusableContext$1_EnclosingMethodInfo_,
	_JavacTaskPool$ReusableContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskPool"
};

$Object* allocate$JavacTaskPool$ReusableContext$1($Class* clazz) {
	return $of($alloc(JavacTaskPool$ReusableContext$1));
}

void JavacTaskPool$ReusableContext$1::init$($JavacTaskPool$ReusableContext* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

$Void* JavacTaskPool$ReusableContext$1::scan($Tree* tree, $Symtab* syms) {
	{
		$var($JCTree$LetExpr, letExpr, nullptr);
		bool var$0 = $instanceOf($JCTree$LetExpr, tree);
		if (var$0) {
			$assign(letExpr, $cast($JCTree$LetExpr, tree));
			var$0 = true;
		}
		if (var$0) {
			scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(letExpr)->defs))), $of(syms));
			scan(static_cast<$Tree*>(static_cast<$JCTree*>(static_cast<$JCTree$JCCaseLabel*>($nc(letExpr)->expr))), syms);
			return nullptr;
		} else {
			return $cast($Void, $TreeScanner::scan(tree, $of(syms)));
		}
	}
}

$Void* JavacTaskPool$ReusableContext$1::visitClass($ClassTree* node, $Symtab* syms) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $nc(($cast($JCTree$JCClassDecl, node)))->sym);
	if (sym != nullptr) {
		$var($Symbol$ModuleSymbol, var$0, $nc($(sym->packge()))->modle);
		$nc(syms)->removeClass(var$0, $(sym->flatName()));
		$var($Type, sup, supertype(sym));
		bool var$1 = isCoreClass(sym);
		$init($Kinds$Kind);
		if (var$1 || (sup != nullptr && isCoreClass(sup->tsym) && $nc(sup->tsym)->kind != $Kinds$Kind::TYP)) {
			this->this$0->polluted = true;
		}
	}
	return $cast($Void, $TreeScanner::visitClass(node, syms));
}

bool JavacTaskPool$ReusableContext$1::isCoreClass($Symbol* s) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc(s)->flatName()))->toString()))->startsWith("java."_s);
}

$Type* JavacTaskPool$ReusableContext$1::supertype($Symbol* s) {
	$init($TypeTag);
	if ($nc(s)->type == nullptr || !$nc($nc(s)->type)->hasTag($TypeTag::CLASS)) {
		return nullptr;
	} else {
		$var($Type$ClassType, ct, $cast($Type$ClassType, s->type));
		return $nc(ct)->supertype_field;
	}
}

$Object* JavacTaskPool$ReusableContext$1::visitClass($ClassTree* node, Object$* syms) {
	return $of(this->visitClass(node, $cast($Symtab, syms)));
}

$Object* JavacTaskPool$ReusableContext$1::scan($Tree* tree, Object$* syms) {
	return $of(this->scan(tree, $cast($Symtab, syms)));
}

JavacTaskPool$ReusableContext$1::JavacTaskPool$ReusableContext$1() {
}

$Class* JavacTaskPool$ReusableContext$1::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$ReusableContext$1, name, initialize, &_JavacTaskPool$ReusableContext$1_ClassInfo_, allocate$JavacTaskPool$ReusableContext$1);
	return class$;
}

$Class* JavacTaskPool$ReusableContext$1::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com