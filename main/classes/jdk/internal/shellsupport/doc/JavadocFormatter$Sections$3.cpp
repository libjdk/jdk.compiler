#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections$3.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections.h>
#include <jcpp.h>

#undef RETURN

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavadocFormatter$Sections = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$MethodInfo _JavadocFormatter$Sections$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(JavadocFormatter$Sections$3::*)($String*,int32_t)>(&JavadocFormatter$Sections$3::init$))},
	{"matches", "(Lcom/sun/source/doctree/DocTree;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavadocFormatter$Sections$3_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocFormatter$Sections",
	nullptr,
	nullptr
};

$InnerClassInfo _JavadocFormatter$Sections$3_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections", "jdk.internal.shellsupport.doc.JavadocFormatter", "Sections", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _JavadocFormatter$Sections$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$3",
	"jdk.internal.shellsupport.doc.JavadocFormatter$Sections",
	nullptr,
	nullptr,
	_JavadocFormatter$Sections$3_MethodInfo_,
	nullptr,
	&_JavadocFormatter$Sections$3_EnclosingMethodInfo_,
	_JavadocFormatter$Sections$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocFormatter"
};

$Object* allocate$JavadocFormatter$Sections$3($Class* clazz) {
	return $of($alloc(JavadocFormatter$Sections$3));
}

void JavadocFormatter$Sections$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavadocFormatter$Sections::init$($enum$name, $enum$ordinal);
}

bool JavadocFormatter$Sections$3::matches($DocTree* t) {
	$init($DocTree$Kind);
	return $nc(t)->getKind() == $DocTree$Kind::RETURN;
}

JavadocFormatter$Sections$3::JavadocFormatter$Sections$3() {
}

$Class* JavadocFormatter$Sections$3::load$($String* name, bool initialize) {
	$loadClass(JavadocFormatter$Sections$3, name, initialize, &_JavadocFormatter$Sections$3_ClassInfo_, allocate$JavadocFormatter$Sections$3);
	return class$;
}

$Class* JavadocFormatter$Sections$3::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk