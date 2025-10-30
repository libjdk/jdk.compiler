#include <com/sun/tools/javac/tree/DocPretty$1.h>

#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/tools/javac/tree/DocPretty.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef DOUBLE
#undef EMPTY
#undef SINGLE
#undef UNQUOTED

using $AttributeTree$ValueKindArray = $Array<::com::sun::source::doctree::AttributeTree$ValueKind>;
using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $DocPretty = ::com::sun::tools::javac::tree::DocPretty;
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

$FieldInfo _DocPretty$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocPretty$1, $SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind)},
	{}
};

$EnclosingMethodInfo _DocPretty$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.DocPretty",
	nullptr,
	nullptr
};

$InnerClassInfo _DocPretty$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DocPretty$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DocPretty$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.tree.DocPretty$1",
	"java.lang.Object",
	nullptr,
	_DocPretty$1_FieldInfo_,
	nullptr,
	nullptr,
	&_DocPretty$1_EnclosingMethodInfo_,
	_DocPretty$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DocPretty"
};

$Object* allocate$DocPretty$1($Class* clazz) {
	return $of($alloc(DocPretty$1));
}

$ints* DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind = nullptr;

void clinit$DocPretty$1($Class* class$) {
	$assignStatic(DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind, $new($ints, $($AttributeTree$ValueKind::values())->length));
	{
		try {
			$nc(DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind)->set($AttributeTree$ValueKind::EMPTY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind)->set($AttributeTree$ValueKind::UNQUOTED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind)->set($AttributeTree$ValueKind::SINGLE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind)->set($AttributeTree$ValueKind::DOUBLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DocPretty$1::DocPretty$1() {
}

$Class* DocPretty$1::load$($String* name, bool initialize) {
	$loadClass(DocPretty$1, name, initialize, &_DocPretty$1_ClassInfo_, clinit$DocPretty$1, allocate$DocPretty$1);
	return class$;
}

$Class* DocPretty$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com