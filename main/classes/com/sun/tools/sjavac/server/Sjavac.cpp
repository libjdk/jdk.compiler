#include <com/sun/tools/sjavac/server/Sjavac.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <jcpp.h>

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$MethodInfo _Sjavac_MethodInfo_[] = {
	{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $ABSTRACT},
	{"shutdown", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Sjavac_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.sjavac.server.Sjavac",
	nullptr,
	nullptr,
	nullptr,
	_Sjavac_MethodInfo_
};

$Object* allocate$Sjavac($Class* clazz) {
	return $of($alloc(Sjavac));
}

$Class* Sjavac::load$($String* name, bool initialize) {
	$loadClass(Sjavac, name, initialize, &_Sjavac_ClassInfo_, allocate$Sjavac);
	return class$;
}

$Class* Sjavac::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com