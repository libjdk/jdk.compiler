#include <jdk/internal/shellsupport/doc/JavadocFormatter$3.h>

#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter.h>
#include <jcpp.h>

#undef BLOCKQUOTE
#undef DD
#undef DL
#undef DT
#undef IMG
#undef LI
#undef OL
#undef P
#undef PRE
#undef TABLE
#undef TD
#undef TH
#undef TR
#undef UL

using $JavadocFormatter$HtmlTagArray = $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JavadocFormatter = ::jdk::internal::shellsupport::doc::JavadocFormatter;
using $JavadocFormatter$HtmlTag = ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocFormatter$3_FieldInfo_[] = {
	{"$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavadocFormatter$3, $SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)},
	{}
};

$EnclosingMethodInfo _JavadocFormatter$3_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocFormatter",
	nullptr,
	nullptr
};

$InnerClassInfo _JavadocFormatter$3_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocFormatter$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavadocFormatter$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.internal.shellsupport.doc.JavadocFormatter$3",
	"java.lang.Object",
	nullptr,
	_JavadocFormatter$3_FieldInfo_,
	nullptr,
	nullptr,
	&_JavadocFormatter$3_EnclosingMethodInfo_,
	_JavadocFormatter$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocFormatter"
};

$Object* allocate$JavadocFormatter$3($Class* clazz) {
	return $of($alloc(JavadocFormatter$3));
}

$ints* JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag = nullptr;

void clinit$JavadocFormatter$3($Class* class$) {
	$assignStatic(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag, $new($ints, $($JavadocFormatter$HtmlTag::values())->length));
	{
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::P->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::BLOCKQUOTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::PRE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::UL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::OL->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::DL->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::LI->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::DT->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::DD->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::H1->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::H2->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::H3->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::H4->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::H5->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::H6->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::TABLE->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::TR->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::TH->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::TD->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->set($JavadocFormatter$HtmlTag::IMG->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavadocFormatter$3::JavadocFormatter$3() {
}

$Class* JavadocFormatter$3::load$($String* name, bool initialize) {
	$loadClass(JavadocFormatter$3, name, initialize, &_JavadocFormatter$3_ClassInfo_, clinit$JavadocFormatter$3, allocate$JavadocFormatter$3);
	return class$;
}

$Class* JavadocFormatter$3::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk