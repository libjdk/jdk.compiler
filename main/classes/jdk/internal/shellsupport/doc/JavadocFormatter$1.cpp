#include <jdk/internal/shellsupport/doc/JavadocFormatter$1.h>

#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter.h>
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
using $JavadocFormatter = ::jdk::internal::shellsupport::doc::JavadocFormatter;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocFormatter$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/shellsupport/doc/JavadocFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocFormatter$1, this$0)},
	{"val$javadoc", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocFormatter$1, val$javadoc)},
	{}
};

$MethodInfo _JavadocFormatter$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocFormatter;Ljava/net/URI;Ljavax/tools/JavaFileObject$Kind;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JavadocFormatter$1::*)($JavadocFormatter*,$URI*,$JavaFileObject$Kind*,$String*)>(&JavadocFormatter$1::init$))},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _JavadocFormatter$1_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocFormatter",
	"formatJavadoc",
	"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;"
};

$InnerClassInfo _JavadocFormatter$1_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocFormatter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocFormatter$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocFormatter$1",
	"javax.tools.SimpleJavaFileObject",
	nullptr,
	_JavadocFormatter$1_FieldInfo_,
	_JavadocFormatter$1_MethodInfo_,
	nullptr,
	&_JavadocFormatter$1_EnclosingMethodInfo_,
	_JavadocFormatter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocFormatter"
};

$Object* allocate$JavadocFormatter$1($Class* clazz) {
	return $of($alloc(JavadocFormatter$1));
}

void JavadocFormatter$1::init$($JavadocFormatter* this$0, $URI* arg0, $JavaFileObject$Kind* arg1, $String* val$javadoc) {
	$set(this, this$0, this$0);
	$set(this, val$javadoc, val$javadoc);
	$SimpleJavaFileObject::init$(arg0, arg1);
}

$CharSequence* JavadocFormatter$1::getCharContent(bool ignoreEncodingErrors) {
	return $str({"<body>"_s, this->val$javadoc, "</body>"_s});
}

JavadocFormatter$1::JavadocFormatter$1() {
}

$Class* JavadocFormatter$1::load$($String* name, bool initialize) {
	$loadClass(JavadocFormatter$1, name, initialize, &_JavadocFormatter$1_ClassInfo_, allocate$JavadocFormatter$1);
	return class$;
}

$Class* JavadocFormatter$1::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk