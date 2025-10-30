#include <com/sun/tools/javac/parser/DocCommentParser$26.h>

#include <com/sun/tools/javac/parser/DocCommentParser$Phase.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BLOCK
#undef BODY
#undef INLINE
#undef PREAMBLE
#undef REMOVE_ALL
#undef REMOVE_FIRST_SPACE
#undef RETAIN_ALL

using $DocCommentParser$PhaseArray = $Array<::com::sun::tools::javac::parser::DocCommentParser$Phase>;
using $DocCommentParser$TagParser$KindArray = $Array<::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind>;
using $DocCommentParser$WhitespaceRetentionPolicyArray = $Array<::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy>;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$Phase = ::com::sun::tools::javac::parser::DocCommentParser$Phase;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DocCommentParser$WhitespaceRetentionPolicy = ::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy;
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
				namespace parser {

$FieldInfo _DocCommentParser$26_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$TagParser$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocCommentParser$26, $SwitchMap$com$sun$tools$javac$parser$DocCommentParser$TagParser$Kind)},
	{"$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$WhitespaceRetentionPolicy", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocCommentParser$26, $SwitchMap$com$sun$tools$javac$parser$DocCommentParser$WhitespaceRetentionPolicy)},
	{"$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$Phase", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DocCommentParser$26, $SwitchMap$com$sun$tools$javac$parser$DocCommentParser$Phase)},
	{}
};

$EnclosingMethodInfo _DocCommentParser$26_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.DocCommentParser",
	nullptr,
	nullptr
};

$InnerClassInfo _DocCommentParser$26_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$26", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DocCommentParser$26_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.parser.DocCommentParser$26",
	"java.lang.Object",
	nullptr,
	_DocCommentParser$26_FieldInfo_,
	nullptr,
	nullptr,
	&_DocCommentParser$26_EnclosingMethodInfo_,
	_DocCommentParser$26_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$26($Class* clazz) {
	return $of($alloc(DocCommentParser$26));
}

$ints* DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$TagParser$Kind = nullptr;
$ints* DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$WhitespaceRetentionPolicy = nullptr;
$ints* DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$Phase = nullptr;

void clinit$DocCommentParser$26($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$TagParser$Kind, $new($ints, $($DocCommentParser$TagParser$Kind::values())->length));
	{
		try {
			$nc(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$TagParser$Kind)->set($DocCommentParser$TagParser$Kind::BLOCK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$TagParser$Kind)->set($DocCommentParser$TagParser$Kind::INLINE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$WhitespaceRetentionPolicy, $new($ints, $($DocCommentParser$WhitespaceRetentionPolicy::values())->length));
	{
		try {
			$nc(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$WhitespaceRetentionPolicy)->set($DocCommentParser$WhitespaceRetentionPolicy::REMOVE_ALL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$WhitespaceRetentionPolicy)->set($DocCommentParser$WhitespaceRetentionPolicy::REMOVE_FIRST_SPACE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$WhitespaceRetentionPolicy)->set($DocCommentParser$WhitespaceRetentionPolicy::RETAIN_ALL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$Phase, $new($ints, $($DocCommentParser$Phase::values())->length));
	{
		try {
			$nc(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$Phase)->set($DocCommentParser$Phase::PREAMBLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$Phase)->set($DocCommentParser$Phase::BODY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DocCommentParser$26::DocCommentParser$26() {
}

$Class* DocCommentParser$26::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$26, name, initialize, &_DocCommentParser$26_ClassInfo_, clinit$DocCommentParser$26, allocate$DocCommentParser$26);
	return class$;
}

$Class* DocCommentParser$26::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com