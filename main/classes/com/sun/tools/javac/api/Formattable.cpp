#include <com/sun/tools/javac/api/Formattable.h>

#include <com/sun/tools/javac/api/Messages.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Messages = ::com::sun::tools::javac::api::Messages;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$MethodInfo _Formattable_MethodInfo_[] = {
	{"getKind", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "(Ljava/util/Locale;Lcom/sun/tools/javac/api/Messages;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Formattable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.Formattable$LocalizedString", "com.sun.tools.javac.api.Formattable", "LocalizedString", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Formattable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.api.Formattable",
	nullptr,
	nullptr,
	nullptr,
	_Formattable_MethodInfo_,
	nullptr,
	nullptr,
	_Formattable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.Formattable$LocalizedString"
};

$Object* allocate$Formattable($Class* clazz) {
	return $of($alloc(Formattable));
}

$Class* Formattable::load$($String* name, bool initialize) {
	$loadClass(Formattable, name, initialize, &_Formattable_ClassInfo_, allocate$Formattable);
	return class$;
}

$Class* Formattable::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com