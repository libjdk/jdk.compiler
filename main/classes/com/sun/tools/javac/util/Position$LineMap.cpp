#include <com/sun/tools/javac/util/Position$LineMap.h>

#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

using $LineMap = ::com::sun::source::tree::LineMap;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Position$LineMap_MethodInfo_[] = {
	{"getColumnNumber", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineNumber", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPosition", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartPosition", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Position$LineMap_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Position$LineMap", "com.sun.tools.javac.util.Position", "LineMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Position$LineMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.Position$LineMap",
	nullptr,
	"com.sun.source.tree.LineMap",
	nullptr,
	_Position$LineMap_MethodInfo_,
	nullptr,
	nullptr,
	_Position$LineMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Position"
};

$Object* allocate$Position$LineMap($Class* clazz) {
	return $of($alloc(Position$LineMap));
}

$Class* Position$LineMap::load$($String* name, bool initialize) {
	$loadClass(Position$LineMap, name, initialize, &_Position$LineMap_ClassInfo_, allocate$Position$LineMap);
	return class$;
}

$Class* Position$LineMap::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com