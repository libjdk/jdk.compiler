#include <com/sun/source/tree/LineMap.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _LineMap_MethodInfo_[] = {
	{"getColumnNumber", "(J)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineNumber", "(J)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getPosition", "(JJ)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartPosition", "(J)J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LineMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.LineMap",
	nullptr,
	nullptr,
	nullptr,
	_LineMap_MethodInfo_
};

$Object* allocate$LineMap($Class* clazz) {
	return $of($alloc(LineMap));
}

$Class* LineMap::load$($String* name, bool initialize) {
	$loadClass(LineMap, name, initialize, &_LineMap_ClassInfo_, allocate$LineMap);
	return class$;
}

$Class* LineMap::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com