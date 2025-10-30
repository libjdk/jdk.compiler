#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject.h>

#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/ForwardingJavaFileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef OTHER

using $JDKPlatformProvider$PlatformDescriptionImpl = ::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;
using $ForwardingJavaFileObject = ::javax::tools::ForwardingJavaFileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

$MethodInfo _JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileObject;)V", nullptr, $PUBLIC, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::*)($JavaFileObject*)>(&JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::init$))},
	{"getDelegate", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl", "com.sun.tools.javac.platform.JDKPlatformProvider", "PlatformDescriptionImpl", $STATIC},
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject", "com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl", "SigJavaFileObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject",
	"javax.tools.ForwardingJavaFileObject",
	nullptr,
	nullptr,
	_JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_MethodInfo_,
	"Ljavax/tools/ForwardingJavaFileObject<Ljavax/tools/JavaFileObject;>;",
	nullptr,
	_JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.JDKPlatformProvider"
};

$Object* allocate$JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject($Class* clazz) {
	return $of($alloc(JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject));
}

void JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::init$($JavaFileObject* fileObject) {
	$ForwardingJavaFileObject::init$(fileObject);
}

$JavaFileObject$Kind* JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::getKind() {
	$init($JavaFileObject$Kind);
	return $JavaFileObject$Kind::CLASS;
}

bool JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	$init($JavaFileObject$Kind);
	return $ForwardingJavaFileObject::isNameCompatible($$str({simpleName, ".sig"_s}), $JavaFileObject$Kind::OTHER);
}

$JavaFileObject* JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::getDelegate() {
	return $cast($JavaFileObject, this->fileObject);
}

JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject() {
}

$Class* JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::load$($String* name, bool initialize) {
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject, name, initialize, &_JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_ClassInfo_, allocate$JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject);
	return class$;
}

$Class* JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com