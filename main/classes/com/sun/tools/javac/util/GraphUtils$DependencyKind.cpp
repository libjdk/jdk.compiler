#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>

#include <com/sun/tools/javac/util/GraphUtils.h>
#include <jcpp.h>

using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$InnerClassInfo _GraphUtils$DependencyKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.GraphUtils$DependencyKind", "com.sun.tools.javac.util.GraphUtils", "DependencyKind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphUtils$DependencyKind_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.GraphUtils$DependencyKind",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GraphUtils$DependencyKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.GraphUtils"
};

$Object* allocate$GraphUtils$DependencyKind($Class* clazz) {
	return $of($alloc(GraphUtils$DependencyKind));
}

$Class* GraphUtils$DependencyKind::load$($String* name, bool initialize) {
	$loadClass(GraphUtils$DependencyKind, name, initialize, &_GraphUtils$DependencyKind_ClassInfo_, allocate$GraphUtils$DependencyKind);
	return class$;
}

$Class* GraphUtils$DependencyKind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com