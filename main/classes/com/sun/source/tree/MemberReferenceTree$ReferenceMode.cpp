#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>

#include <com/sun/source/tree/MemberReferenceTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INVOKE
#undef NEW

using $MemberReferenceTree$ReferenceModeArray = $Array<::com::sun::source::tree::MemberReferenceTree$ReferenceMode>;
using $MemberReferenceTree = ::com::sun::source::tree::MemberReferenceTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$FieldInfo _MemberReferenceTree$ReferenceMode_FieldInfo_[] = {
	{"INVOKE", "Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberReferenceTree$ReferenceMode, INVOKE)},
	{"NEW", "Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberReferenceTree$ReferenceMode, NEW)},
	{"$VALUES", "[Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberReferenceTree$ReferenceMode, $VALUES)},
	{}
};

$MethodInfo _MemberReferenceTree$ReferenceMode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MemberReferenceTree$ReferenceModeArray*(*)()>(&MemberReferenceTree$ReferenceMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MemberReferenceTree$ReferenceMode::*)($String*,int32_t)>(&MemberReferenceTree$ReferenceMode::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MemberReferenceTree$ReferenceMode*(*)($String*)>(&MemberReferenceTree$ReferenceMode::valueOf))},
	{"values", "()[Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MemberReferenceTree$ReferenceModeArray*(*)()>(&MemberReferenceTree$ReferenceMode::values))},
	{}
};

$InnerClassInfo _MemberReferenceTree$ReferenceMode_InnerClassesInfo_[] = {
	{"com.sun.source.tree.MemberReferenceTree$ReferenceMode", "com.sun.source.tree.MemberReferenceTree", "ReferenceMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MemberReferenceTree$ReferenceMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.source.tree.MemberReferenceTree$ReferenceMode",
	"java.lang.Enum",
	nullptr,
	_MemberReferenceTree$ReferenceMode_FieldInfo_,
	_MemberReferenceTree$ReferenceMode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;>;",
	nullptr,
	_MemberReferenceTree$ReferenceMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.tree.MemberReferenceTree"
};

$Object* allocate$MemberReferenceTree$ReferenceMode($Class* clazz) {
	return $of($alloc(MemberReferenceTree$ReferenceMode));
}

MemberReferenceTree$ReferenceMode* MemberReferenceTree$ReferenceMode::INVOKE = nullptr;
MemberReferenceTree$ReferenceMode* MemberReferenceTree$ReferenceMode::NEW = nullptr;
$MemberReferenceTree$ReferenceModeArray* MemberReferenceTree$ReferenceMode::$VALUES = nullptr;

$MemberReferenceTree$ReferenceModeArray* MemberReferenceTree$ReferenceMode::$values() {
	$init(MemberReferenceTree$ReferenceMode);
	return $new($MemberReferenceTree$ReferenceModeArray, {
		MemberReferenceTree$ReferenceMode::INVOKE,
		MemberReferenceTree$ReferenceMode::NEW
	});
}

$MemberReferenceTree$ReferenceModeArray* MemberReferenceTree$ReferenceMode::values() {
	$init(MemberReferenceTree$ReferenceMode);
	return $cast($MemberReferenceTree$ReferenceModeArray, MemberReferenceTree$ReferenceMode::$VALUES->clone());
}

MemberReferenceTree$ReferenceMode* MemberReferenceTree$ReferenceMode::valueOf($String* name) {
	$init(MemberReferenceTree$ReferenceMode);
	return $cast(MemberReferenceTree$ReferenceMode, $Enum::valueOf(MemberReferenceTree$ReferenceMode::class$, name));
}

void MemberReferenceTree$ReferenceMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$MemberReferenceTree$ReferenceMode($Class* class$) {
	$assignStatic(MemberReferenceTree$ReferenceMode::INVOKE, $new(MemberReferenceTree$ReferenceMode, "INVOKE"_s, 0));
	$assignStatic(MemberReferenceTree$ReferenceMode::NEW, $new(MemberReferenceTree$ReferenceMode, "NEW"_s, 1));
	$assignStatic(MemberReferenceTree$ReferenceMode::$VALUES, MemberReferenceTree$ReferenceMode::$values());
}

MemberReferenceTree$ReferenceMode::MemberReferenceTree$ReferenceMode() {
}

$Class* MemberReferenceTree$ReferenceMode::load$($String* name, bool initialize) {
	$loadClass(MemberReferenceTree$ReferenceMode, name, initialize, &_MemberReferenceTree$ReferenceMode_ClassInfo_, clinit$MemberReferenceTree$ReferenceMode, allocate$MemberReferenceTree$ReferenceMode);
	return class$;
}

$Class* MemberReferenceTree$ReferenceMode::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com