#include <com/sun/source/doctree/AttributeTree$ValueKind.h>

#include <com/sun/source/doctree/AttributeTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DOUBLE
#undef EMPTY
#undef SINGLE
#undef UNQUOTED

using $AttributeTree$ValueKindArray = $Array<::com::sun::source::doctree::AttributeTree$ValueKind>;
using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$FieldInfo _AttributeTree$ValueKind_FieldInfo_[] = {
	{"EMPTY", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AttributeTree$ValueKind, EMPTY)},
	{"UNQUOTED", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AttributeTree$ValueKind, UNQUOTED)},
	{"SINGLE", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AttributeTree$ValueKind, SINGLE)},
	{"DOUBLE", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AttributeTree$ValueKind, DOUBLE)},
	{"$VALUES", "[Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AttributeTree$ValueKind, $VALUES)},
	{}
};

$MethodInfo _AttributeTree$ValueKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AttributeTree$ValueKindArray*(*)()>(&AttributeTree$ValueKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(AttributeTree$ValueKind::*)($String*,int32_t)>(&AttributeTree$ValueKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AttributeTree$ValueKind*(*)($String*)>(&AttributeTree$ValueKind::valueOf))},
	{"values", "()[Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AttributeTree$ValueKindArray*(*)()>(&AttributeTree$ValueKind::values))},
	{}
};

$InnerClassInfo _AttributeTree$ValueKind_InnerClassesInfo_[] = {
	{"com.sun.source.doctree.AttributeTree$ValueKind", "com.sun.source.doctree.AttributeTree", "ValueKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AttributeTree$ValueKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.source.doctree.AttributeTree$ValueKind",
	"java.lang.Enum",
	nullptr,
	_AttributeTree$ValueKind_FieldInfo_,
	_AttributeTree$ValueKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/source/doctree/AttributeTree$ValueKind;>;",
	nullptr,
	_AttributeTree$ValueKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.doctree.AttributeTree"
};

$Object* allocate$AttributeTree$ValueKind($Class* clazz) {
	return $of($alloc(AttributeTree$ValueKind));
}

AttributeTree$ValueKind* AttributeTree$ValueKind::EMPTY = nullptr;
AttributeTree$ValueKind* AttributeTree$ValueKind::UNQUOTED = nullptr;
AttributeTree$ValueKind* AttributeTree$ValueKind::SINGLE = nullptr;
AttributeTree$ValueKind* AttributeTree$ValueKind::DOUBLE = nullptr;
$AttributeTree$ValueKindArray* AttributeTree$ValueKind::$VALUES = nullptr;

$AttributeTree$ValueKindArray* AttributeTree$ValueKind::$values() {
	$init(AttributeTree$ValueKind);
	return $new($AttributeTree$ValueKindArray, {
		AttributeTree$ValueKind::EMPTY,
		AttributeTree$ValueKind::UNQUOTED,
		AttributeTree$ValueKind::SINGLE,
		AttributeTree$ValueKind::DOUBLE
	});
}

$AttributeTree$ValueKindArray* AttributeTree$ValueKind::values() {
	$init(AttributeTree$ValueKind);
	return $cast($AttributeTree$ValueKindArray, AttributeTree$ValueKind::$VALUES->clone());
}

AttributeTree$ValueKind* AttributeTree$ValueKind::valueOf($String* name) {
	$init(AttributeTree$ValueKind);
	return $cast(AttributeTree$ValueKind, $Enum::valueOf(AttributeTree$ValueKind::class$, name));
}

void AttributeTree$ValueKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AttributeTree$ValueKind($Class* class$) {
	$assignStatic(AttributeTree$ValueKind::EMPTY, $new(AttributeTree$ValueKind, "EMPTY"_s, 0));
	$assignStatic(AttributeTree$ValueKind::UNQUOTED, $new(AttributeTree$ValueKind, "UNQUOTED"_s, 1));
	$assignStatic(AttributeTree$ValueKind::SINGLE, $new(AttributeTree$ValueKind, "SINGLE"_s, 2));
	$assignStatic(AttributeTree$ValueKind::DOUBLE, $new(AttributeTree$ValueKind, "DOUBLE"_s, 3));
	$assignStatic(AttributeTree$ValueKind::$VALUES, AttributeTree$ValueKind::$values());
}

AttributeTree$ValueKind::AttributeTree$ValueKind() {
}

$Class* AttributeTree$ValueKind::load$($String* name, bool initialize) {
	$loadClass(AttributeTree$ValueKind, name, initialize, &_AttributeTree$ValueKind_ClassInfo_, clinit$AttributeTree$ValueKind, allocate$AttributeTree$ValueKind);
	return class$;
}

$Class* AttributeTree$ValueKind::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com