#include <com/sun/source/tree/CaseTree$CaseKind.h>

#include <com/sun/source/tree/CaseTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef RULE
#undef STATEMENT

using $CaseTree$CaseKindArray = $Array<::com::sun::source::tree::CaseTree$CaseKind>;
using $CaseTree = ::com::sun::source::tree::CaseTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$FieldInfo _CaseTree$CaseKind_FieldInfo_[] = {
	{"STATEMENT", "Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CaseTree$CaseKind, STATEMENT)},
	{"RULE", "Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CaseTree$CaseKind, RULE)},
	{"$VALUES", "[Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CaseTree$CaseKind, $VALUES)},
	{}
};

$MethodInfo _CaseTree$CaseKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CaseTree$CaseKindArray*(*)()>(&CaseTree$CaseKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CaseTree$CaseKind::*)($String*,int32_t)>(&CaseTree$CaseKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CaseTree$CaseKind*(*)($String*)>(&CaseTree$CaseKind::valueOf))},
	{"values", "()[Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CaseTree$CaseKindArray*(*)()>(&CaseTree$CaseKind::values))},
	{}
};

$InnerClassInfo _CaseTree$CaseKind_InnerClassesInfo_[] = {
	{"com.sun.source.tree.CaseTree$CaseKind", "com.sun.source.tree.CaseTree", "CaseKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CaseTree$CaseKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.source.tree.CaseTree$CaseKind",
	"java.lang.Enum",
	nullptr,
	_CaseTree$CaseKind_FieldInfo_,
	_CaseTree$CaseKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/source/tree/CaseTree$CaseKind;>;",
	nullptr,
	_CaseTree$CaseKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.tree.CaseTree"
};

$Object* allocate$CaseTree$CaseKind($Class* clazz) {
	return $of($alloc(CaseTree$CaseKind));
}

CaseTree$CaseKind* CaseTree$CaseKind::STATEMENT = nullptr;
CaseTree$CaseKind* CaseTree$CaseKind::RULE = nullptr;
$CaseTree$CaseKindArray* CaseTree$CaseKind::$VALUES = nullptr;

$CaseTree$CaseKindArray* CaseTree$CaseKind::$values() {
	$init(CaseTree$CaseKind);
	return $new($CaseTree$CaseKindArray, {
		CaseTree$CaseKind::STATEMENT,
		CaseTree$CaseKind::RULE
	});
}

$CaseTree$CaseKindArray* CaseTree$CaseKind::values() {
	$init(CaseTree$CaseKind);
	return $cast($CaseTree$CaseKindArray, CaseTree$CaseKind::$VALUES->clone());
}

CaseTree$CaseKind* CaseTree$CaseKind::valueOf($String* name) {
	$init(CaseTree$CaseKind);
	return $cast(CaseTree$CaseKind, $Enum::valueOf(CaseTree$CaseKind::class$, name));
}

void CaseTree$CaseKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CaseTree$CaseKind($Class* class$) {
	$assignStatic(CaseTree$CaseKind::STATEMENT, $new(CaseTree$CaseKind, "STATEMENT"_s, 0));
	$assignStatic(CaseTree$CaseKind::RULE, $new(CaseTree$CaseKind, "RULE"_s, 1));
	$assignStatic(CaseTree$CaseKind::$VALUES, CaseTree$CaseKind::$values());
}

CaseTree$CaseKind::CaseTree$CaseKind() {
}

$Class* CaseTree$CaseKind::load$($String* name, bool initialize) {
	$loadClass(CaseTree$CaseKind, name, initialize, &_CaseTree$CaseKind_ClassInfo_, clinit$CaseTree$CaseKind, allocate$CaseTree$CaseKind);
	return class$;
}

$Class* CaseTree$CaseKind::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com