#include <com/sun/tools/javac/api/JavacTrees$8.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef AUTHOR
#undef BLOCK
#undef CLASS
#undef COMMENT
#undef COMPILATION_UNIT
#undef DEPRECATED
#undef ENTITY
#undef ENUM
#undef ERRONEOUS
#undef ERROR
#undef IDENTIFIER
#undef INTERFACE
#undef MANDATORY_WARNING
#undef METHOD
#undef PARAM
#undef RECORD
#undef RETURN
#undef SEE
#undef SERIAL
#undef SERIAL_DATA
#undef SERIAL_FIELD
#undef SINCE
#undef TEXT
#undef THROWS
#undef UNKNOWN_BLOCK_TAG
#undef VARIABLE
#undef VERSION
#undef WARNING

using $DocTree$KindArray = $Array<::com::sun::source::doctree::DocTree$Kind>;
using $Tree$KindArray = $Array<::com::sun::source::tree::Tree$Kind>;
using $Diagnostic$KindArray = $Array<::javax::tools::Diagnostic$Kind>;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Diagnostic = ::javax::tools::Diagnostic;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTrees$8_FieldInfo_[] = {
	{"$SwitchMap$javax$tools$Diagnostic$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacTrees$8, $SwitchMap$javax$tools$Diagnostic$Kind)},
	{"$SwitchMap$com$sun$source$tree$Tree$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacTrees$8, $SwitchMap$com$sun$source$tree$Tree$Kind)},
	{"$SwitchMap$com$sun$source$doctree$DocTree$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacTrees$8, $SwitchMap$com$sun$source$doctree$DocTree$Kind)},
	{}
};

$EnclosingMethodInfo _JavacTrees$8_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTrees",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacTrees$8_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$8", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacTrees$8_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.api.JavacTrees$8",
	"java.lang.Object",
	nullptr,
	_JavacTrees$8_FieldInfo_,
	nullptr,
	nullptr,
	&_JavacTrees$8_EnclosingMethodInfo_,
	_JavacTrees$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$8($Class* clazz) {
	return $of($alloc(JavacTrees$8));
}

$ints* JavacTrees$8::$SwitchMap$javax$tools$Diagnostic$Kind = nullptr;
$ints* JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind = nullptr;
$ints* JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind = nullptr;

void clinit$JavacTrees$8($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JavacTrees$8::$SwitchMap$javax$tools$Diagnostic$Kind, $new($ints, $($Diagnostic$Kind::values())->length));
	{
		try {
			$nc(JavacTrees$8::$SwitchMap$javax$tools$Diagnostic$Kind)->set($Diagnostic$Kind::ERROR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$javax$tools$Diagnostic$Kind)->set($Diagnostic$Kind::WARNING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$javax$tools$Diagnostic$Kind)->set($Diagnostic$Kind::MANDATORY_WARNING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind, $new($ints, $($Tree$Kind::values())->length));
	{
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::COMPILATION_UNIT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::ANNOTATION_TYPE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::CLASS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::ENUM->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::INTERFACE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::RECORD->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::METHOD->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::VARIABLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->set($Tree$Kind::BLOCK->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind, $new($ints, $($DocTree$Kind::values())->length));
	{
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::TEXT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::ERRONEOUS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::IDENTIFIER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::PARAM->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::AUTHOR->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::DEPRECATED->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::RETURN->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::SEE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::SERIAL->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::SERIAL_DATA->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::SERIAL_FIELD->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::SINCE->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::THROWS->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::UNKNOWN_BLOCK_TAG->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::VERSION->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::ENTITY->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->set($DocTree$Kind::COMMENT->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacTrees$8::JavacTrees$8() {
}

$Class* JavacTrees$8::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$8, name, initialize, &_JavacTrees$8_ClassInfo_, clinit$JavacTrees$8, allocate$JavacTrees$8);
	return class$;
}

$Class* JavacTrees$8::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com