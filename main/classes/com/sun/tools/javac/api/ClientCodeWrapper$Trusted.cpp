#include <com/sun/tools/javac/api/ClientCodeWrapper$Trusted.h>

#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <jcpp.h>

using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$NamedAttribute ClientCodeWrapper$Trusted_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute ClientCodeWrapper$Trusted_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute ClientCodeWrapper$Trusted_Attribute_var$1[] = {
	{"value", '[', ClientCodeWrapper$Trusted_Attribute_var$2},
	{}
};

$CompoundAttribute _ClientCodeWrapper$Trusted_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ClientCodeWrapper$Trusted_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", ClientCodeWrapper$Trusted_Attribute_var$1},
	{}
};

$InnerClassInfo _ClientCodeWrapper$Trusted_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$Trusted", "com.sun.tools.javac.api.ClientCodeWrapper", "Trusted", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _ClientCodeWrapper$Trusted_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"com.sun.tools.javac.api.ClientCodeWrapper$Trusted",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_ClientCodeWrapper$Trusted_InnerClassesInfo_,
	_ClientCodeWrapper$Trusted_Annotations_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper"
};

$Object* allocate$ClientCodeWrapper$Trusted($Class* clazz) {
	return $of($alloc(ClientCodeWrapper$Trusted));
}

$Class* ClientCodeWrapper$Trusted::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper$Trusted, name, initialize, &_ClientCodeWrapper$Trusted_ClassInfo_, allocate$ClientCodeWrapper$Trusted);
	return class$;
}

$Class* ClientCodeWrapper$Trusted::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com