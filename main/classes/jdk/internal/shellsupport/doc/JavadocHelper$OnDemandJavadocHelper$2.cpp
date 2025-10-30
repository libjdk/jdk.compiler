#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$2.h>

#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $SimpleJavaFileObject = ::javax::tools::SimpleJavaFileObject;
using $JavadocHelper$OnDemandJavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocHelper$OnDemandJavadocHelper$2_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$2, this$0)},
	{"val$javadoc", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$2, val$javadoc)},
	{}
};

$MethodInfo _JavadocHelper$OnDemandJavadocHelper$2_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;Ljava/net/URI;Ljavax/tools/JavaFileObject$Kind;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$2::*)($JavadocHelper$OnDemandJavadocHelper*,$URI*,$JavaFileObject$Kind*,$String*)>(&JavadocHelper$OnDemandJavadocHelper$2::init$))},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _JavadocHelper$OnDemandJavadocHelper$2_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper",
	"parseDocComment",
	"(Lcom/sun/source/util/JavacTask;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair;"
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper$2_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$2",
	"javax.tools.SimpleJavaFileObject",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$2_FieldInfo_,
	_JavadocHelper$OnDemandJavadocHelper$2_MethodInfo_,
	nullptr,
	&_JavadocHelper$OnDemandJavadocHelper$2_EnclosingMethodInfo_,
	_JavadocHelper$OnDemandJavadocHelper$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper$2($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper$2));
}

void JavadocHelper$OnDemandJavadocHelper$2::init$($JavadocHelper$OnDemandJavadocHelper* this$0, $URI* arg0, $JavaFileObject$Kind* arg1, $String* val$javadoc) {
	$set(this, this$0, this$0);
	$set(this, val$javadoc, val$javadoc);
	$SimpleJavaFileObject::init$(arg0, arg1);
}

$CharSequence* JavadocHelper$OnDemandJavadocHelper$2::getCharContent(bool ignoreEncodingErrors) {
	return $str({"<body>"_s, this->val$javadoc, "</body>"_s});
}

JavadocHelper$OnDemandJavadocHelper$2::JavadocHelper$OnDemandJavadocHelper$2() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$2::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$2, name, initialize, &_JavadocHelper$OnDemandJavadocHelper$2_ClassInfo_, allocate$JavadocHelper$OnDemandJavadocHelper$2);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$2::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk