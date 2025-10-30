#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ARRAY_CTOR
#undef BOUND
#undef IMPLICIT_INNER
#undef INVOKE
#undef NEW
#undef STATIC
#undef SUPER
#undef TOPLEVEL
#undef UNBOUND

using $JCTree$JCMemberReference$ReferenceKindArray = $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind>;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
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

$FieldInfo _JCTree$JCMemberReference$ReferenceKind_FieldInfo_[] = {
	{"SUPER", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$ReferenceKind, SUPER)},
	{"UNBOUND", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$ReferenceKind, UNBOUND)},
	{"STATIC", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$ReferenceKind, STATIC)},
	{"BOUND", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$ReferenceKind, BOUND)},
	{"IMPLICIT_INNER", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$ReferenceKind, IMPLICIT_INNER)},
	{"TOPLEVEL", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$ReferenceKind, TOPLEVEL)},
	{"ARRAY_CTOR", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$JCMemberReference$ReferenceKind, ARRAY_CTOR)},
	{"$VALUES", "[Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$JCMemberReference$ReferenceKind, $VALUES)},
	{"mode", "Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $FINAL, $field(JCTree$JCMemberReference$ReferenceKind, mode)},
	{"unbound", "Z", nullptr, $FINAL, $field(JCTree$JCMemberReference$ReferenceKind, unbound)},
	{}
};

$MethodInfo _JCTree$JCMemberReference$ReferenceKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCMemberReference$ReferenceKindArray*(*)()>(&JCTree$JCMemberReference$ReferenceKind::$values))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/source/tree/MemberReferenceTree$ReferenceMode;Z)V", "(Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;Z)V", $PRIVATE, $method(static_cast<void(JCTree$JCMemberReference$ReferenceKind::*)($String*,int32_t,$MemberReferenceTree$ReferenceMode*,bool)>(&JCTree$JCMemberReference$ReferenceKind::init$))},
	{"isUnbound", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(JCTree$JCMemberReference$ReferenceKind::*)()>(&JCTree$JCMemberReference$ReferenceKind::isUnbound))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JCTree$JCMemberReference$ReferenceKind*(*)($String*)>(&JCTree$JCMemberReference$ReferenceKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCMemberReference$ReferenceKindArray*(*)()>(&JCTree$JCMemberReference$ReferenceKind::values))},
	{}
};

$InnerClassInfo _JCTree$JCMemberReference$ReferenceKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference", "com.sun.tools.javac.tree.JCTree", "JCMemberReference", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference$ReferenceKind", "com.sun.tools.javac.tree.JCTree$JCMemberReference", "ReferenceKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCMemberReference$ReferenceKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.tree.JCTree$JCMemberReference$ReferenceKind",
	"java.lang.Enum",
	nullptr,
	_JCTree$JCMemberReference$ReferenceKind_FieldInfo_,
	_JCTree$JCMemberReference$ReferenceKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;>;",
	nullptr,
	_JCTree$JCMemberReference$ReferenceKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCMemberReference$ReferenceKind($Class* clazz) {
	return $of($alloc(JCTree$JCMemberReference$ReferenceKind));
}

JCTree$JCMemberReference$ReferenceKind* JCTree$JCMemberReference$ReferenceKind::SUPER = nullptr;
JCTree$JCMemberReference$ReferenceKind* JCTree$JCMemberReference$ReferenceKind::UNBOUND = nullptr;
JCTree$JCMemberReference$ReferenceKind* JCTree$JCMemberReference$ReferenceKind::STATIC = nullptr;
JCTree$JCMemberReference$ReferenceKind* JCTree$JCMemberReference$ReferenceKind::BOUND = nullptr;
JCTree$JCMemberReference$ReferenceKind* JCTree$JCMemberReference$ReferenceKind::IMPLICIT_INNER = nullptr;
JCTree$JCMemberReference$ReferenceKind* JCTree$JCMemberReference$ReferenceKind::TOPLEVEL = nullptr;
JCTree$JCMemberReference$ReferenceKind* JCTree$JCMemberReference$ReferenceKind::ARRAY_CTOR = nullptr;
$JCTree$JCMemberReference$ReferenceKindArray* JCTree$JCMemberReference$ReferenceKind::$VALUES = nullptr;

$JCTree$JCMemberReference$ReferenceKindArray* JCTree$JCMemberReference$ReferenceKind::$values() {
	$init(JCTree$JCMemberReference$ReferenceKind);
	return $new($JCTree$JCMemberReference$ReferenceKindArray, {
		JCTree$JCMemberReference$ReferenceKind::SUPER,
		JCTree$JCMemberReference$ReferenceKind::UNBOUND,
		JCTree$JCMemberReference$ReferenceKind::STATIC,
		JCTree$JCMemberReference$ReferenceKind::BOUND,
		JCTree$JCMemberReference$ReferenceKind::IMPLICIT_INNER,
		JCTree$JCMemberReference$ReferenceKind::TOPLEVEL,
		JCTree$JCMemberReference$ReferenceKind::ARRAY_CTOR
	});
}

$JCTree$JCMemberReference$ReferenceKindArray* JCTree$JCMemberReference$ReferenceKind::values() {
	$init(JCTree$JCMemberReference$ReferenceKind);
	return $cast($JCTree$JCMemberReference$ReferenceKindArray, JCTree$JCMemberReference$ReferenceKind::$VALUES->clone());
}

JCTree$JCMemberReference$ReferenceKind* JCTree$JCMemberReference$ReferenceKind::valueOf($String* name) {
	$init(JCTree$JCMemberReference$ReferenceKind);
	return $cast(JCTree$JCMemberReference$ReferenceKind, $Enum::valueOf(JCTree$JCMemberReference$ReferenceKind::class$, name));
}

void JCTree$JCMemberReference$ReferenceKind::init$($String* $enum$name, int32_t $enum$ordinal, $MemberReferenceTree$ReferenceMode* mode, bool unbound) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, mode, mode);
	this->unbound = unbound;
}

bool JCTree$JCMemberReference$ReferenceKind::isUnbound() {
	return this->unbound;
}

void clinit$JCTree$JCMemberReference$ReferenceKind($Class* class$) {
	$init($MemberReferenceTree$ReferenceMode);
	$assignStatic(JCTree$JCMemberReference$ReferenceKind::SUPER, $new(JCTree$JCMemberReference$ReferenceKind, "SUPER"_s, 0, $MemberReferenceTree$ReferenceMode::INVOKE, false));
	$assignStatic(JCTree$JCMemberReference$ReferenceKind::UNBOUND, $new(JCTree$JCMemberReference$ReferenceKind, "UNBOUND"_s, 1, $MemberReferenceTree$ReferenceMode::INVOKE, true));
	$assignStatic(JCTree$JCMemberReference$ReferenceKind::STATIC, $new(JCTree$JCMemberReference$ReferenceKind, "STATIC"_s, 2, $MemberReferenceTree$ReferenceMode::INVOKE, false));
	$assignStatic(JCTree$JCMemberReference$ReferenceKind::BOUND, $new(JCTree$JCMemberReference$ReferenceKind, "BOUND"_s, 3, $MemberReferenceTree$ReferenceMode::INVOKE, false));
	$assignStatic(JCTree$JCMemberReference$ReferenceKind::IMPLICIT_INNER, $new(JCTree$JCMemberReference$ReferenceKind, "IMPLICIT_INNER"_s, 4, $MemberReferenceTree$ReferenceMode::NEW, false));
	$assignStatic(JCTree$JCMemberReference$ReferenceKind::TOPLEVEL, $new(JCTree$JCMemberReference$ReferenceKind, "TOPLEVEL"_s, 5, $MemberReferenceTree$ReferenceMode::NEW, false));
	$assignStatic(JCTree$JCMemberReference$ReferenceKind::ARRAY_CTOR, $new(JCTree$JCMemberReference$ReferenceKind, "ARRAY_CTOR"_s, 6, $MemberReferenceTree$ReferenceMode::NEW, false));
	$assignStatic(JCTree$JCMemberReference$ReferenceKind::$VALUES, JCTree$JCMemberReference$ReferenceKind::$values());
}

JCTree$JCMemberReference$ReferenceKind::JCTree$JCMemberReference$ReferenceKind() {
}

$Class* JCTree$JCMemberReference$ReferenceKind::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCMemberReference$ReferenceKind, name, initialize, &_JCTree$JCMemberReference$ReferenceKind_ClassInfo_, clinit$JCTree$JCMemberReference$ReferenceKind, allocate$JCTree$JCMemberReference$ReferenceKind);
	return class$;
}

$Class* JCTree$JCMemberReference$ReferenceKind::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com