#include <com/sun/tools/javac/comp/ArgumentAttr$2.h>

#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EXPRESSION
#undef STATEMENT

using $LambdaExpressionTree$BodyKindArray = $Array<::com::sun::source::tree::LambdaExpressionTree$BodyKind>;
using $LambdaExpressionTree = ::com::sun::source::tree::LambdaExpressionTree;
using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
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
				namespace comp {

$FieldInfo _ArgumentAttr$2_FieldInfo_[] = {
	{"$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ArgumentAttr$2, $SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind)},
	{}
};

$EnclosingMethodInfo _ArgumentAttr$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.ArgumentAttr",
	nullptr,
	nullptr
};

$InnerClassInfo _ArgumentAttr$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ArgumentAttr$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.ArgumentAttr$2",
	"java.lang.Object",
	nullptr,
	_ArgumentAttr$2_FieldInfo_,
	nullptr,
	nullptr,
	&_ArgumentAttr$2_EnclosingMethodInfo_,
	_ArgumentAttr$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$2($Class* clazz) {
	return $of($alloc(ArgumentAttr$2));
}

$ints* ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind = nullptr;

void clinit$ArgumentAttr$2($Class* class$) {
	$assignStatic(ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind, $new($ints, $($LambdaExpressionTree$BodyKind::values())->length));
	{
		try {
			$nc(ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind)->set($LambdaExpressionTree$BodyKind::EXPRESSION->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind)->set($LambdaExpressionTree$BodyKind::STATEMENT->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ArgumentAttr$2::ArgumentAttr$2() {
}

$Class* ArgumentAttr$2::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$2, name, initialize, &_ArgumentAttr$2_ClassInfo_, clinit$ArgumentAttr$2, allocate$ArgumentAttr$2);
	return class$;
}

$Class* ArgumentAttr$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com