#include <com/sun/tools/javac/api/Messages.h>

#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$MethodInfo _Messages_MethodInfo_[] = {
	{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.util.MissingResourceException"},
	{"getLocalizedString", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{}
};

$ClassInfo _Messages_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.api.Messages",
	nullptr,
	nullptr,
	nullptr,
	_Messages_MethodInfo_
};

$Object* allocate$Messages($Class* clazz) {
	return $of($alloc(Messages));
}

$Class* Messages::load$($String* name, bool initialize) {
	$loadClass(Messages, name, initialize, &_Messages_ClassInfo_, allocate$Messages);
	return class$;
}

$Class* Messages::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com