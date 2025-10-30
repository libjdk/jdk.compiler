#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos.h>

#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef LEFT
#undef RIGHT

using $JCTree$JCOperatorExpression$OperandPosArray = $Array<::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos>;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCOperatorExpression$OperandPos_FieldInfo_[] = {
	{"LEFT", "Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCOperatorExpression$OperandPos, LEFT)},
	{"RIGHT", "Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCOperatorExpression$OperandPos, RIGHT)},
	{"$VALUES", "[Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$JCOperatorExpression$OperandPos, $VALUES)},
	{}
};

$MethodInfo _JCTree$JCOperatorExpression$OperandPos_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCOperatorExpression$OperandPosArray*(*)()>(&JCTree$JCOperatorExpression$OperandPos::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JCTree$JCOperatorExpression$OperandPos::*)($String*,int32_t)>(&JCTree$JCOperatorExpression$OperandPos::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JCTree$JCOperatorExpression$OperandPos*(*)($String*)>(&JCTree$JCOperatorExpression$OperandPos::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCOperatorExpression$OperandPosArray*(*)()>(&JCTree$JCOperatorExpression$OperandPos::values))},
	{}
};

$InnerClassInfo _JCTree$JCOperatorExpression$OperandPos_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "com.sun.tools.javac.tree.JCTree", "JCOperatorExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression$OperandPos", "com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "OperandPos", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCOperatorExpression$OperandPos_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.tree.JCTree$JCOperatorExpression$OperandPos",
	"java.lang.Enum",
	nullptr,
	_JCTree$JCOperatorExpression$OperandPos_FieldInfo_,
	_JCTree$JCOperatorExpression$OperandPos_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;>;",
	nullptr,
	_JCTree$JCOperatorExpression$OperandPos_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCOperatorExpression$OperandPos($Class* clazz) {
	return $of($alloc(JCTree$JCOperatorExpression$OperandPos));
}

JCTree$JCOperatorExpression$OperandPos* JCTree$JCOperatorExpression$OperandPos::LEFT = nullptr;
JCTree$JCOperatorExpression$OperandPos* JCTree$JCOperatorExpression$OperandPos::RIGHT = nullptr;
$JCTree$JCOperatorExpression$OperandPosArray* JCTree$JCOperatorExpression$OperandPos::$VALUES = nullptr;

$JCTree$JCOperatorExpression$OperandPosArray* JCTree$JCOperatorExpression$OperandPos::$values() {
	$init(JCTree$JCOperatorExpression$OperandPos);
	return $new($JCTree$JCOperatorExpression$OperandPosArray, {
		JCTree$JCOperatorExpression$OperandPos::LEFT,
		JCTree$JCOperatorExpression$OperandPos::RIGHT
	});
}

$JCTree$JCOperatorExpression$OperandPosArray* JCTree$JCOperatorExpression$OperandPos::values() {
	$init(JCTree$JCOperatorExpression$OperandPos);
	return $cast($JCTree$JCOperatorExpression$OperandPosArray, JCTree$JCOperatorExpression$OperandPos::$VALUES->clone());
}

JCTree$JCOperatorExpression$OperandPos* JCTree$JCOperatorExpression$OperandPos::valueOf($String* name) {
	$init(JCTree$JCOperatorExpression$OperandPos);
	return $cast(JCTree$JCOperatorExpression$OperandPos, $Enum::valueOf(JCTree$JCOperatorExpression$OperandPos::class$, name));
}

void JCTree$JCOperatorExpression$OperandPos::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JCTree$JCOperatorExpression$OperandPos($Class* class$) {
	$assignStatic(JCTree$JCOperatorExpression$OperandPos::LEFT, $new(JCTree$JCOperatorExpression$OperandPos, "LEFT"_s, 0));
	$assignStatic(JCTree$JCOperatorExpression$OperandPos::RIGHT, $new(JCTree$JCOperatorExpression$OperandPos, "RIGHT"_s, 1));
	$assignStatic(JCTree$JCOperatorExpression$OperandPos::$VALUES, JCTree$JCOperatorExpression$OperandPos::$values());
}

JCTree$JCOperatorExpression$OperandPos::JCTree$JCOperatorExpression$OperandPos() {
}

$Class* JCTree$JCOperatorExpression$OperandPos::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCOperatorExpression$OperandPos, name, initialize, &_JCTree$JCOperatorExpression$OperandPos_ClassInfo_, clinit$JCTree$JCOperatorExpression$OperandPos, allocate$JCTree$JCOperatorExpression$OperandPos);
	return class$;
}

$Class* JCTree$JCOperatorExpression$OperandPos::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com