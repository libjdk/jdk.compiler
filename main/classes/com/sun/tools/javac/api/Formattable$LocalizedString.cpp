#include <com/sun/tools/javac/api/Formattable$LocalizedString.h>

#include <com/sun/tools/javac/api/Messages.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Formattable = ::com::sun::tools::javac::api::Formattable;
using $Messages = ::com::sun::tools::javac::api::Messages;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _Formattable$LocalizedString_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, 0, $field(Formattable$LocalizedString, key)},
	{}
};

$MethodInfo _Formattable$LocalizedString_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Formattable$LocalizedString::*)($String*)>(&Formattable$LocalizedString::init$))},
	{"getKind", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Ljava/util/Locale;Lcom/sun/tools/javac/api/Messages;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Formattable$LocalizedString_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.Formattable$LocalizedString", "com.sun.tools.javac.api.Formattable", "LocalizedString", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Formattable$LocalizedString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.Formattable$LocalizedString",
	"java.lang.Object",
	"com.sun.tools.javac.api.Formattable",
	_Formattable$LocalizedString_FieldInfo_,
	_Formattable$LocalizedString_MethodInfo_,
	nullptr,
	nullptr,
	_Formattable$LocalizedString_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.Formattable"
};

$Object* allocate$Formattable$LocalizedString($Class* clazz) {
	return $of($alloc(Formattable$LocalizedString));
}

void Formattable$LocalizedString::init$($String* key) {
	$set(this, key, key);
}

$String* Formattable$LocalizedString::toString($Locale* l, $Messages* messages) {
	return $nc(messages)->getLocalizedString(l, this->key, $$new($ObjectArray, 0));
}

$String* Formattable$LocalizedString::getKind() {
	return "LocalizedString"_s;
}

$String* Formattable$LocalizedString::toString() {
	return this->key;
}

Formattable$LocalizedString::Formattable$LocalizedString() {
}

$Class* Formattable$LocalizedString::load$($String* name, bool initialize) {
	$loadClass(Formattable$LocalizedString, name, initialize, &_Formattable$LocalizedString_ClassInfo_, allocate$Formattable$LocalizedString);
	return class$;
}

$Class* Formattable$LocalizedString::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com