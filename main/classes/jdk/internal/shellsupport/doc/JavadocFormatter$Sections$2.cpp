#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections$2.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections.h>
#include <jcpp.h>

#undef PARAM

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavadocFormatter$Sections = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$MethodInfo _JavadocFormatter$Sections$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(JavadocFormatter$Sections$2::*)($String*,int32_t)>(&JavadocFormatter$Sections$2::init$))},
	{"matches", "(Lcom/sun/source/doctree/DocTree;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavadocFormatter$Sections$2_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocFormatter$Sections",
	nullptr,
	nullptr
};

$InnerClassInfo _JavadocFormatter$Sections$2_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections", "jdk.internal.shellsupport.doc.JavadocFormatter", "Sections", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _JavadocFormatter$Sections$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.shellsupport.doc.JavadocFormatter$Sections$2",
	"jdk.internal.shellsupport.doc.JavadocFormatter$Sections",
	nullptr,
	nullptr,
	_JavadocFormatter$Sections$2_MethodInfo_,
	nullptr,
	&_JavadocFormatter$Sections$2_EnclosingMethodInfo_,
	_JavadocFormatter$Sections$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocFormatter"
};

$Object* allocate$JavadocFormatter$Sections$2($Class* clazz) {
	return $of($alloc(JavadocFormatter$Sections$2));
}

void JavadocFormatter$Sections$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavadocFormatter$Sections::init$($enum$name, $enum$ordinal);
}

bool JavadocFormatter$Sections$2::matches($DocTree* t) {
	$init($DocTree$Kind);
	bool var$0 = $nc(t)->getKind() == $DocTree$Kind::PARAM;
	return var$0 && !$nc(($cast($ParamTree, t)))->isTypeParameter();
}

JavadocFormatter$Sections$2::JavadocFormatter$Sections$2() {
}

$Class* JavadocFormatter$Sections$2::load$($String* name, bool initialize) {
	$loadClass(JavadocFormatter$Sections$2, name, initialize, &_JavadocFormatter$Sections$2_ClassInfo_, allocate$JavadocFormatter$Sections$2);
	return class$;
}

$Class* JavadocFormatter$Sections$2::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk