#include <com/sun/tools/javac/api/JavacTrees$3.h>

#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef TYP

using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Check = ::com::sun::tools::javac::comp::Check;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTrees$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$3, this$0)},
	{"val$flatNameForClass", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$3, val$flatNameForClass)},
	{"val$toClear", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$3, val$toClear)},
	{"owner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(JavacTrees$3, owner)},
	{"localContext", "Z", nullptr, 0, $field(JavacTrees$3, localContext)},
	{}
};

$MethodInfo _JavacTrees$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;Lcom/sun/tools/javac/util/ListBuffer;Ljava/util/Map;)V", nullptr, 0, $method(static_cast<void(JavacTrees$3::*)($JavacTrees*,$ListBuffer*,$Map*)>(&JavacTrees$3::init$))},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacTrees$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTrees",
	"prepareFlatnameForClass",
	"(Lcom/sun/tools/javac/comp/Env;)Ljava/util/Map;"
};

$InnerClassInfo _JavacTrees$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTrees$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees$3",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_JavacTrees$3_FieldInfo_,
	_JavacTrees$3_MethodInfo_,
	nullptr,
	&_JavacTrees$3_EnclosingMethodInfo_,
	_JavacTrees$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$3($Class* clazz) {
	return $of($alloc(JavacTrees$3));
}

void JavacTrees$3::init$($JavacTrees* this$0, $ListBuffer* val$toClear, $Map* val$flatNameForClass) {
	$set(this, this$0, this$0);
	$set(this, val$toClear, val$toClear);
	$set(this, val$flatNameForClass, val$flatNameForClass);
	$TreeScanner::init$();
}

void JavacTrees$3::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, prevOwner, this->owner);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Symbol$ClassSymbol, c, nullptr);
			if ($nc(tree)->sym != nullptr) {
				$assign(c, tree->sym);
			} else {
				$assign(c, $nc(this->this$0->syms)->defineClass(tree->name, this->owner));
				$init($Kinds$Kind);
				if ($nc(this->owner)->kind != $Kinds$Kind::TYP) {
					$set($nc(c), flatname, $nc(this->this$0->chk)->localClassName(c));
					$nc(this->this$0->chk)->putCompiled(c);
					$nc(this->val$toClear)->add(c);
				}
				$nc(this->val$flatNameForClass)->put(tree, $nc(c)->flatname);
			}
			$set(this, owner, c);
			$TreeScanner::visitClassDef(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, owner, prevOwner);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JavacTrees$3::visitBlock($JCTree$JCBlock* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, prevOwner, this->owner);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Type);
			$set(this, owner, $new($Symbol$MethodSymbol, 0, $nc(this->this$0->names)->empty, $Type::noType, this->owner));
			$TreeScanner::visitBlock(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, owner, prevOwner);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JavacTrees$3::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, prevOwner, this->owner);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Type);
			$set(this, owner, $new($Symbol$MethodSymbol, 0, $nc(this->this$0->names)->empty, $Type::noType, this->owner));
			$TreeScanner::visitVarDef(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, owner, prevOwner);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

JavacTrees$3::JavacTrees$3() {
}

$Class* JavacTrees$3::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$3, name, initialize, &_JavacTrees$3_ClassInfo_, allocate$JavacTrees$3);
	return class$;
}

$Class* JavacTrees$3::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com