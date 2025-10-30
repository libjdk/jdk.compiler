#include <com/sun/tools/javac/tree/DocTreeMaker$2.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef END_ELEMENT
#undef RETURN
#undef START_ELEMENT
#undef SUMMARY
#undef TEXT

using $DocTree$KindArray = $Array<::com::sun::source::doctree::DocTree$Kind>;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DocTreeMaker$2_FieldInfo_[] = {
	{"$SwitchMap$com$sun$source$doctree$DocTree$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocTreeMaker$2, $SwitchMap$com$sun$source$doctree$DocTree$Kind)},
	{}
};

$EnclosingMethodInfo _DocTreeMaker$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.DocTreeMaker",
	nullptr,
	nullptr
};

$InnerClassInfo _DocTreeMaker$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DocTreeMaker$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DocTreeMaker$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.tree.DocTreeMaker$2",
	"java.lang.Object",
	nullptr,
	_DocTreeMaker$2_FieldInfo_,
	nullptr,
	nullptr,
	&_DocTreeMaker$2_EnclosingMethodInfo_,
	_DocTreeMaker$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DocTreeMaker"
};

$Object* allocate$DocTreeMaker$2($Class* clazz) {
	return $of($alloc(DocTreeMaker$2));
}

$ints* DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind = nullptr;

void clinit$DocTreeMaker$2($Class* class$) {
	$assignStatic(DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind, $new($ints, $($DocTree$Kind::values())->length));
	{
		try {
			$nc(DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::RETURN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::SUMMARY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::TEXT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::START_ELEMENT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::END_ELEMENT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DocTreeMaker$2::DocTreeMaker$2() {
}

$Class* DocTreeMaker$2::load$($String* name, bool initialize) {
	$loadClass(DocTreeMaker$2, name, initialize, &_DocTreeMaker$2_ClassInfo_, clinit$DocTreeMaker$2, allocate$DocTreeMaker$2);
	return class$;
}

$Class* DocTreeMaker$2::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com