#include <jdk/internal/shellsupport/doc/JavadocHelper$1.h>

#include <javax/lang/model/element/Element.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::lang::model::element::Element;
using $JavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$MethodInfo _JavadocHelper$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavadocHelper$1::*)()>(&JavadocHelper$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getResolvedDocComment", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getSourceElement", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _JavadocHelper$1_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocHelper",
	"create",
	"(Lcom/sun/source/util/JavacTask;Ljava/util/Collection;)Ljdk/internal/shellsupport/doc/JavadocHelper;"
};

$InnerClassInfo _JavadocHelper$1_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$1",
	"jdk.internal.shellsupport.doc.JavadocHelper",
	nullptr,
	nullptr,
	_JavadocHelper$1_MethodInfo_,
	nullptr,
	&_JavadocHelper$1_EnclosingMethodInfo_,
	_JavadocHelper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$1($Class* clazz) {
	return $of($alloc(JavadocHelper$1));
}

void JavadocHelper$1::init$() {
	$JavadocHelper::init$();
}

$String* JavadocHelper$1::getResolvedDocComment($Element* forElement) {
	return nullptr;
}

$Element* JavadocHelper$1::getSourceElement($Element* forElement) {
	return forElement;
}

void JavadocHelper$1::close() {
}

JavadocHelper$1::JavadocHelper$1() {
}

$Class* JavadocHelper$1::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$1, name, initialize, &_JavadocHelper$1_ClassInfo_, allocate$JavadocHelper$1);
	return class$;
}

$Class* JavadocHelper$1::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk