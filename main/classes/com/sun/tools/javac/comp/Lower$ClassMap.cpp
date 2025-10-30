#include <com/sun/tools/javac/comp/Lower$ClassMap.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Lower$ClassMap_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$ClassMap, this$0)},
	{}
};

$MethodInfo _Lower$ClassMap_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;)V", nullptr, 0, $method(static_cast<void(Lower$ClassMap::*)($Lower*)>(&Lower$ClassMap::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Lower$ClassMap_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$ClassMap", "com.sun.tools.javac.comp.Lower", "ClassMap", 0},
	{}
};

$ClassInfo _Lower$ClassMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Lower$ClassMap",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Lower$ClassMap_FieldInfo_,
	_Lower$ClassMap_MethodInfo_,
	nullptr,
	nullptr,
	_Lower$ClassMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$ClassMap($Class* clazz) {
	return $of($alloc(Lower$ClassMap));
}

void Lower$ClassMap::init$($Lower* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Lower$ClassMap::visitClassDef($JCTree$JCClassDecl* tree) {
	$nc(this->this$0->classdefs)->put($nc(tree)->sym, tree);
	$TreeScanner::visitClassDef(tree);
}

Lower$ClassMap::Lower$ClassMap() {
}

$Class* Lower$ClassMap::load$($String* name, bool initialize) {
	$loadClass(Lower$ClassMap, name, initialize, &_Lower$ClassMap_ClassInfo_, allocate$Lower$ClassMap);
	return class$;
}

$Class* Lower$ClassMap::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com