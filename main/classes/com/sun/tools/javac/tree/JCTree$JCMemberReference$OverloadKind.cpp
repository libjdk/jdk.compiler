#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>

#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ERROR
#undef OVERLOADED
#undef UNOVERLOADED

using $JCTree$JCMemberReference$OverloadKindArray = $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind>;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
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

$FieldInfo _JCTree$JCMemberReference$OverloadKind_FieldInfo_[] = {
	{"OVERLOADED", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$OverloadKind, OVERLOADED)},
	{"UNOVERLOADED", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$OverloadKind, UNOVERLOADED)},
	{"ERROR", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$OverloadKind, ERROR)},
	{"$VALUES", "[Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$JCMemberReference$OverloadKind, $VALUES)},
	{}
};

$MethodInfo _JCTree$JCMemberReference$OverloadKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCMemberReference$OverloadKindArray*(*)()>(&JCTree$JCMemberReference$OverloadKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JCTree$JCMemberReference$OverloadKind::*)($String*,int32_t)>(&JCTree$JCMemberReference$OverloadKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JCTree$JCMemberReference$OverloadKind*(*)($String*)>(&JCTree$JCMemberReference$OverloadKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCMemberReference$OverloadKindArray*(*)()>(&JCTree$JCMemberReference$OverloadKind::values))},
	{}
};

$InnerClassInfo _JCTree$JCMemberReference$OverloadKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference", "com.sun.tools.javac.tree.JCTree", "JCMemberReference", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference$OverloadKind", "com.sun.tools.javac.tree.JCTree$JCMemberReference", "OverloadKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCMemberReference$OverloadKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.tree.JCTree$JCMemberReference$OverloadKind",
	"java.lang.Enum",
	nullptr,
	_JCTree$JCMemberReference$OverloadKind_FieldInfo_,
	_JCTree$JCMemberReference$OverloadKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;>;",
	nullptr,
	_JCTree$JCMemberReference$OverloadKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCMemberReference$OverloadKind($Class* clazz) {
	return $of($alloc(JCTree$JCMemberReference$OverloadKind));
}

JCTree$JCMemberReference$OverloadKind* JCTree$JCMemberReference$OverloadKind::OVERLOADED = nullptr;
JCTree$JCMemberReference$OverloadKind* JCTree$JCMemberReference$OverloadKind::UNOVERLOADED = nullptr;
JCTree$JCMemberReference$OverloadKind* JCTree$JCMemberReference$OverloadKind::ERROR = nullptr;
$JCTree$JCMemberReference$OverloadKindArray* JCTree$JCMemberReference$OverloadKind::$VALUES = nullptr;

$JCTree$JCMemberReference$OverloadKindArray* JCTree$JCMemberReference$OverloadKind::$values() {
	$init(JCTree$JCMemberReference$OverloadKind);
	return $new($JCTree$JCMemberReference$OverloadKindArray, {
		JCTree$JCMemberReference$OverloadKind::OVERLOADED,
		JCTree$JCMemberReference$OverloadKind::UNOVERLOADED,
		JCTree$JCMemberReference$OverloadKind::ERROR
	});
}

$JCTree$JCMemberReference$OverloadKindArray* JCTree$JCMemberReference$OverloadKind::values() {
	$init(JCTree$JCMemberReference$OverloadKind);
	return $cast($JCTree$JCMemberReference$OverloadKindArray, JCTree$JCMemberReference$OverloadKind::$VALUES->clone());
}

JCTree$JCMemberReference$OverloadKind* JCTree$JCMemberReference$OverloadKind::valueOf($String* name) {
	$init(JCTree$JCMemberReference$OverloadKind);
	return $cast(JCTree$JCMemberReference$OverloadKind, $Enum::valueOf(JCTree$JCMemberReference$OverloadKind::class$, name));
}

void JCTree$JCMemberReference$OverloadKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JCTree$JCMemberReference$OverloadKind($Class* class$) {
	$assignStatic(JCTree$JCMemberReference$OverloadKind::OVERLOADED, $new(JCTree$JCMemberReference$OverloadKind, "OVERLOADED"_s, 0));
	$assignStatic(JCTree$JCMemberReference$OverloadKind::UNOVERLOADED, $new(JCTree$JCMemberReference$OverloadKind, "UNOVERLOADED"_s, 1));
	$assignStatic(JCTree$JCMemberReference$OverloadKind::ERROR, $new(JCTree$JCMemberReference$OverloadKind, "ERROR"_s, 2));
	$assignStatic(JCTree$JCMemberReference$OverloadKind::$VALUES, JCTree$JCMemberReference$OverloadKind::$values());
}

JCTree$JCMemberReference$OverloadKind::JCTree$JCMemberReference$OverloadKind() {
}

$Class* JCTree$JCMemberReference$OverloadKind::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCMemberReference$OverloadKind, name, initialize, &_JCTree$JCMemberReference$OverloadKind_ClassInfo_, clinit$JCTree$JCMemberReference$OverloadKind, allocate$JCTree$JCMemberReference$OverloadKind);
	return class$;
}

$Class* JCTree$JCMemberReference$OverloadKind::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com