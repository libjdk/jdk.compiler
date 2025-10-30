#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>

#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef POLY
#undef STANDALONE

using $JCTree$JCPolyExpression$PolyKindArray = $Array<::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind>;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
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

$FieldInfo _JCTree$JCPolyExpression$PolyKind_FieldInfo_[] = {
	{"STANDALONE", "Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCPolyExpression$PolyKind, STANDALONE)},
	{"POLY", "Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCPolyExpression$PolyKind, POLY)},
	{"$VALUES", "[Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$JCPolyExpression$PolyKind, $VALUES)},
	{}
};

$MethodInfo _JCTree$JCPolyExpression$PolyKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCPolyExpression$PolyKindArray*(*)()>(&JCTree$JCPolyExpression$PolyKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JCTree$JCPolyExpression$PolyKind::*)($String*,int32_t)>(&JCTree$JCPolyExpression$PolyKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JCTree$JCPolyExpression$PolyKind*(*)($String*)>(&JCTree$JCPolyExpression$PolyKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCPolyExpression$PolyKindArray*(*)()>(&JCTree$JCPolyExpression$PolyKind::values))},
	{}
};

$InnerClassInfo _JCTree$JCPolyExpression$PolyKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression$PolyKind", "com.sun.tools.javac.tree.JCTree$JCPolyExpression", "PolyKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCPolyExpression$PolyKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.tree.JCTree$JCPolyExpression$PolyKind",
	"java.lang.Enum",
	nullptr,
	_JCTree$JCPolyExpression$PolyKind_FieldInfo_,
	_JCTree$JCPolyExpression$PolyKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;>;",
	nullptr,
	_JCTree$JCPolyExpression$PolyKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCPolyExpression$PolyKind($Class* clazz) {
	return $of($alloc(JCTree$JCPolyExpression$PolyKind));
}

JCTree$JCPolyExpression$PolyKind* JCTree$JCPolyExpression$PolyKind::STANDALONE = nullptr;
JCTree$JCPolyExpression$PolyKind* JCTree$JCPolyExpression$PolyKind::POLY = nullptr;
$JCTree$JCPolyExpression$PolyKindArray* JCTree$JCPolyExpression$PolyKind::$VALUES = nullptr;

$JCTree$JCPolyExpression$PolyKindArray* JCTree$JCPolyExpression$PolyKind::$values() {
	$init(JCTree$JCPolyExpression$PolyKind);
	return $new($JCTree$JCPolyExpression$PolyKindArray, {
		JCTree$JCPolyExpression$PolyKind::STANDALONE,
		JCTree$JCPolyExpression$PolyKind::POLY
	});
}

$JCTree$JCPolyExpression$PolyKindArray* JCTree$JCPolyExpression$PolyKind::values() {
	$init(JCTree$JCPolyExpression$PolyKind);
	return $cast($JCTree$JCPolyExpression$PolyKindArray, JCTree$JCPolyExpression$PolyKind::$VALUES->clone());
}

JCTree$JCPolyExpression$PolyKind* JCTree$JCPolyExpression$PolyKind::valueOf($String* name) {
	$init(JCTree$JCPolyExpression$PolyKind);
	return $cast(JCTree$JCPolyExpression$PolyKind, $Enum::valueOf(JCTree$JCPolyExpression$PolyKind::class$, name));
}

void JCTree$JCPolyExpression$PolyKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JCTree$JCPolyExpression$PolyKind($Class* class$) {
	$assignStatic(JCTree$JCPolyExpression$PolyKind::STANDALONE, $new(JCTree$JCPolyExpression$PolyKind, "STANDALONE"_s, 0));
	$assignStatic(JCTree$JCPolyExpression$PolyKind::POLY, $new(JCTree$JCPolyExpression$PolyKind, "POLY"_s, 1));
	$assignStatic(JCTree$JCPolyExpression$PolyKind::$VALUES, JCTree$JCPolyExpression$PolyKind::$values());
}

JCTree$JCPolyExpression$PolyKind::JCTree$JCPolyExpression$PolyKind() {
}

$Class* JCTree$JCPolyExpression$PolyKind::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCPolyExpression$PolyKind, name, initialize, &_JCTree$JCPolyExpression$PolyKind_ClassInfo_, clinit$JCTree$JCPolyExpression$PolyKind, allocate$JCTree$JCPolyExpression$PolyKind);
	return class$;
}

$Class* JCTree$JCPolyExpression$PolyKind::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com