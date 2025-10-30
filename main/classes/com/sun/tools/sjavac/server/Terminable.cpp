#include <com/sun/tools/sjavac/server/Terminable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$MethodInfo _Terminable_MethodInfo_[] = {
	{"shutdown", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Terminable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.sjavac.server.Terminable",
	nullptr,
	nullptr,
	nullptr,
	_Terminable_MethodInfo_
};

$Object* allocate$Terminable($Class* clazz) {
	return $of($alloc(Terminable));
}

$Class* Terminable::load$($String* name, bool initialize) {
	$loadClass(Terminable, name, initialize, &_Terminable_ClassInfo_, allocate$Terminable);
	return class$;
}

$Class* Terminable::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com