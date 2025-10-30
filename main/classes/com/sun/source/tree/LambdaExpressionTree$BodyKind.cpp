#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>

#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef EXPRESSION
#undef STATEMENT

using $LambdaExpressionTree$BodyKindArray = $Array<::com::sun::source::tree::LambdaExpressionTree$BodyKind>;
using $LambdaExpressionTree = ::com::sun::source::tree::LambdaExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$FieldInfo _LambdaExpressionTree$BodyKind_FieldInfo_[] = {
	{"EXPRESSION", "Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaExpressionTree$BodyKind, EXPRESSION)},
	{"STATEMENT", "Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LambdaExpressionTree$BodyKind, STATEMENT)},
	{"$VALUES", "[Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaExpressionTree$BodyKind, $VALUES)},
	{}
};

$MethodInfo _LambdaExpressionTree$BodyKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LambdaExpressionTree$BodyKindArray*(*)()>(&LambdaExpressionTree$BodyKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(LambdaExpressionTree$BodyKind::*)($String*,int32_t)>(&LambdaExpressionTree$BodyKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LambdaExpressionTree$BodyKind*(*)($String*)>(&LambdaExpressionTree$BodyKind::valueOf))},
	{"values", "()[Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LambdaExpressionTree$BodyKindArray*(*)()>(&LambdaExpressionTree$BodyKind::values))},
	{}
};

$InnerClassInfo _LambdaExpressionTree$BodyKind_InnerClassesInfo_[] = {
	{"com.sun.source.tree.LambdaExpressionTree$BodyKind", "com.sun.source.tree.LambdaExpressionTree", "BodyKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LambdaExpressionTree$BodyKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.source.tree.LambdaExpressionTree$BodyKind",
	"java.lang.Enum",
	nullptr,
	_LambdaExpressionTree$BodyKind_FieldInfo_,
	_LambdaExpressionTree$BodyKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;>;",
	nullptr,
	_LambdaExpressionTree$BodyKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.tree.LambdaExpressionTree"
};

$Object* allocate$LambdaExpressionTree$BodyKind($Class* clazz) {
	return $of($alloc(LambdaExpressionTree$BodyKind));
}

LambdaExpressionTree$BodyKind* LambdaExpressionTree$BodyKind::EXPRESSION = nullptr;
LambdaExpressionTree$BodyKind* LambdaExpressionTree$BodyKind::STATEMENT = nullptr;
$LambdaExpressionTree$BodyKindArray* LambdaExpressionTree$BodyKind::$VALUES = nullptr;

$LambdaExpressionTree$BodyKindArray* LambdaExpressionTree$BodyKind::$values() {
	$init(LambdaExpressionTree$BodyKind);
	return $new($LambdaExpressionTree$BodyKindArray, {
		LambdaExpressionTree$BodyKind::EXPRESSION,
		LambdaExpressionTree$BodyKind::STATEMENT
	});
}

$LambdaExpressionTree$BodyKindArray* LambdaExpressionTree$BodyKind::values() {
	$init(LambdaExpressionTree$BodyKind);
	return $cast($LambdaExpressionTree$BodyKindArray, LambdaExpressionTree$BodyKind::$VALUES->clone());
}

LambdaExpressionTree$BodyKind* LambdaExpressionTree$BodyKind::valueOf($String* name) {
	$init(LambdaExpressionTree$BodyKind);
	return $cast(LambdaExpressionTree$BodyKind, $Enum::valueOf(LambdaExpressionTree$BodyKind::class$, name));
}

void LambdaExpressionTree$BodyKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$LambdaExpressionTree$BodyKind($Class* class$) {
	$assignStatic(LambdaExpressionTree$BodyKind::EXPRESSION, $new(LambdaExpressionTree$BodyKind, "EXPRESSION"_s, 0));
	$assignStatic(LambdaExpressionTree$BodyKind::STATEMENT, $new(LambdaExpressionTree$BodyKind, "STATEMENT"_s, 1));
	$assignStatic(LambdaExpressionTree$BodyKind::$VALUES, LambdaExpressionTree$BodyKind::$values());
}

LambdaExpressionTree$BodyKind::LambdaExpressionTree$BodyKind() {
}

$Class* LambdaExpressionTree$BodyKind::load$($String* name, bool initialize) {
	$loadClass(LambdaExpressionTree$BodyKind, name, initialize, &_LambdaExpressionTree$BodyKind_ClassInfo_, clinit$LambdaExpressionTree$BodyKind, allocate$LambdaExpressionTree$BodyKind);
	return class$;
}

$Class* LambdaExpressionTree$BodyKind::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com