#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$MethodInfo _JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::*)()>(&JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isModuleOrientedLocation", "()Z", nullptr, $PUBLIC},
	{"isOutputLocation", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager",
	nullptr,
	nullptr
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager", "jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "PatchModuleFileManager", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1", nullptr, nullptr, 0},
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1",
	"java.lang.Object",
	"javax.tools.JavaFileManager$Location",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_MethodInfo_,
	nullptr,
	&_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_EnclosingMethodInfo_,
	_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1));
}

void JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::init$() {
}

$String* JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::getName() {
	return "PATCH_LOCATION"_s;
}

bool JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::isOutputLocation() {
	return false;
}

bool JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::isModuleOrientedLocation() {
	return false;
}

JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1, name, initialize, &_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_ClassInfo_, allocate$JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk