#include <com/sun/source/tree/ModuleTree$ModuleKind.h>

#include <com/sun/source/tree/ModuleTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef OPEN
#undef STRONG

using $ModuleTree$ModuleKindArray = $Array<::com::sun::source::tree::ModuleTree$ModuleKind>;
using $ModuleTree = ::com::sun::source::tree::ModuleTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$FieldInfo _ModuleTree$ModuleKind_FieldInfo_[] = {
	{"OPEN", "Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleTree$ModuleKind, OPEN)},
	{"STRONG", "Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ModuleTree$ModuleKind, STRONG)},
	{"$VALUES", "[Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ModuleTree$ModuleKind, $VALUES)},
	{}
};

$MethodInfo _ModuleTree$ModuleKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ModuleTree$ModuleKindArray*(*)()>(&ModuleTree$ModuleKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ModuleTree$ModuleKind::*)($String*,int32_t)>(&ModuleTree$ModuleKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ModuleTree$ModuleKind*(*)($String*)>(&ModuleTree$ModuleKind::valueOf))},
	{"values", "()[Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ModuleTree$ModuleKindArray*(*)()>(&ModuleTree$ModuleKind::values))},
	{}
};

$InnerClassInfo _ModuleTree$ModuleKind_InnerClassesInfo_[] = {
	{"com.sun.source.tree.ModuleTree$ModuleKind", "com.sun.source.tree.ModuleTree", "ModuleKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleTree$ModuleKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.source.tree.ModuleTree$ModuleKind",
	"java.lang.Enum",
	nullptr,
	_ModuleTree$ModuleKind_FieldInfo_,
	_ModuleTree$ModuleKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/source/tree/ModuleTree$ModuleKind;>;",
	nullptr,
	_ModuleTree$ModuleKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.tree.ModuleTree"
};

$Object* allocate$ModuleTree$ModuleKind($Class* clazz) {
	return $of($alloc(ModuleTree$ModuleKind));
}

ModuleTree$ModuleKind* ModuleTree$ModuleKind::OPEN = nullptr;
ModuleTree$ModuleKind* ModuleTree$ModuleKind::STRONG = nullptr;
$ModuleTree$ModuleKindArray* ModuleTree$ModuleKind::$VALUES = nullptr;

$ModuleTree$ModuleKindArray* ModuleTree$ModuleKind::$values() {
	$init(ModuleTree$ModuleKind);
	return $new($ModuleTree$ModuleKindArray, {
		ModuleTree$ModuleKind::OPEN,
		ModuleTree$ModuleKind::STRONG
	});
}

$ModuleTree$ModuleKindArray* ModuleTree$ModuleKind::values() {
	$init(ModuleTree$ModuleKind);
	return $cast($ModuleTree$ModuleKindArray, ModuleTree$ModuleKind::$VALUES->clone());
}

ModuleTree$ModuleKind* ModuleTree$ModuleKind::valueOf($String* name) {
	$init(ModuleTree$ModuleKind);
	return $cast(ModuleTree$ModuleKind, $Enum::valueOf(ModuleTree$ModuleKind::class$, name));
}

void ModuleTree$ModuleKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ModuleTree$ModuleKind($Class* class$) {
	$assignStatic(ModuleTree$ModuleKind::OPEN, $new(ModuleTree$ModuleKind, "OPEN"_s, 0));
	$assignStatic(ModuleTree$ModuleKind::STRONG, $new(ModuleTree$ModuleKind, "STRONG"_s, 1));
	$assignStatic(ModuleTree$ModuleKind::$VALUES, ModuleTree$ModuleKind::$values());
}

ModuleTree$ModuleKind::ModuleTree$ModuleKind() {
}

$Class* ModuleTree$ModuleKind::load$($String* name, bool initialize) {
	$loadClass(ModuleTree$ModuleKind, name, initialize, &_ModuleTree$ModuleKind_ClassInfo_, clinit$ModuleTree$ModuleKind, allocate$ModuleTree$ModuleKind);
	return class$;
}

$Class* ModuleTree$ModuleKind::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com