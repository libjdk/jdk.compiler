#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>

#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef EXPLICIT
#undef IMPLICIT

using $JCTree$JCLambda$ParameterKindArray = $Array<::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind>;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
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

$FieldInfo _JCTree$JCLambda$ParameterKind_FieldInfo_[] = {
	{"IMPLICIT", "Lcom/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCLambda$ParameterKind, IMPLICIT)},
	{"EXPLICIT", "Lcom/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCLambda$ParameterKind, EXPLICIT)},
	{"$VALUES", "[Lcom/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$JCLambda$ParameterKind, $VALUES)},
	{}
};

$MethodInfo _JCTree$JCLambda$ParameterKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCLambda$ParameterKindArray*(*)()>(&JCTree$JCLambda$ParameterKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JCTree$JCLambda$ParameterKind::*)($String*,int32_t)>(&JCTree$JCLambda$ParameterKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JCTree$JCLambda$ParameterKind*(*)($String*)>(&JCTree$JCLambda$ParameterKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCLambda$ParameterKindArray*(*)()>(&JCTree$JCLambda$ParameterKind::values))},
	{}
};

$InnerClassInfo _JCTree$JCLambda$ParameterKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCLambda$ParameterKind", "com.sun.tools.javac.tree.JCTree$JCLambda", "ParameterKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCLambda$ParameterKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.tree.JCTree$JCLambda$ParameterKind",
	"java.lang.Enum",
	nullptr,
	_JCTree$JCLambda$ParameterKind_FieldInfo_,
	_JCTree$JCLambda$ParameterKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind;>;",
	nullptr,
	_JCTree$JCLambda$ParameterKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCLambda$ParameterKind($Class* clazz) {
	return $of($alloc(JCTree$JCLambda$ParameterKind));
}

JCTree$JCLambda$ParameterKind* JCTree$JCLambda$ParameterKind::IMPLICIT = nullptr;
JCTree$JCLambda$ParameterKind* JCTree$JCLambda$ParameterKind::EXPLICIT = nullptr;
$JCTree$JCLambda$ParameterKindArray* JCTree$JCLambda$ParameterKind::$VALUES = nullptr;

$JCTree$JCLambda$ParameterKindArray* JCTree$JCLambda$ParameterKind::$values() {
	$init(JCTree$JCLambda$ParameterKind);
	return $new($JCTree$JCLambda$ParameterKindArray, {
		JCTree$JCLambda$ParameterKind::IMPLICIT,
		JCTree$JCLambda$ParameterKind::EXPLICIT
	});
}

$JCTree$JCLambda$ParameterKindArray* JCTree$JCLambda$ParameterKind::values() {
	$init(JCTree$JCLambda$ParameterKind);
	return $cast($JCTree$JCLambda$ParameterKindArray, JCTree$JCLambda$ParameterKind::$VALUES->clone());
}

JCTree$JCLambda$ParameterKind* JCTree$JCLambda$ParameterKind::valueOf($String* name) {
	$init(JCTree$JCLambda$ParameterKind);
	return $cast(JCTree$JCLambda$ParameterKind, $Enum::valueOf(JCTree$JCLambda$ParameterKind::class$, name));
}

void JCTree$JCLambda$ParameterKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JCTree$JCLambda$ParameterKind($Class* class$) {
	$assignStatic(JCTree$JCLambda$ParameterKind::IMPLICIT, $new(JCTree$JCLambda$ParameterKind, "IMPLICIT"_s, 0));
	$assignStatic(JCTree$JCLambda$ParameterKind::EXPLICIT, $new(JCTree$JCLambda$ParameterKind, "EXPLICIT"_s, 1));
	$assignStatic(JCTree$JCLambda$ParameterKind::$VALUES, JCTree$JCLambda$ParameterKind::$values());
}

JCTree$JCLambda$ParameterKind::JCTree$JCLambda$ParameterKind() {
}

$Class* JCTree$JCLambda$ParameterKind::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCLambda$ParameterKind, name, initialize, &_JCTree$JCLambda$ParameterKind_ClassInfo_, clinit$JCTree$JCLambda$ParameterKind, allocate$JCTree$JCLambda$ParameterKind);
	return class$;
}

$Class* JCTree$JCLambda$ParameterKind::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com