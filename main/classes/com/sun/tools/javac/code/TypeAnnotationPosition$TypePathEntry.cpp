#include <com/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry.h>

#include <com/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

#undef ARRAY
#undef INNER_TYPE
#undef TYPE_ARGUMENT
#undef WILDCARD

using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $TypeAnnotationPosition$TypePathEntryKind = ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _TypeAnnotationPosition$TypePathEntry_FieldInfo_[] = {
	{"bytesPerEntry", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeAnnotationPosition$TypePathEntry, bytesPerEntry)},
	{"tag", "Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotationPosition$TypePathEntry, tag)},
	{"arg", "I", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotationPosition$TypePathEntry, arg)},
	{"ARRAY", "Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TypeAnnotationPosition$TypePathEntry, ARRAY)},
	{"INNER_TYPE", "Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TypeAnnotationPosition$TypePathEntry, INNER_TYPE)},
	{"WILDCARD", "Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TypeAnnotationPosition$TypePathEntry, WILDCARD)},
	{}
};

$MethodInfo _TypeAnnotationPosition$TypePathEntry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;)V", nullptr, $PRIVATE, $method(static_cast<void(TypeAnnotationPosition$TypePathEntry::*)($TypeAnnotationPosition$TypePathEntryKind*)>(&TypeAnnotationPosition$TypePathEntry::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind;I)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotationPosition$TypePathEntry::*)($TypeAnnotationPosition$TypePathEntryKind*,int32_t)>(&TypeAnnotationPosition$TypePathEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fromBinary", "(II)Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition$TypePathEntry*(*)(int32_t,int32_t)>(&TypeAnnotationPosition$TypePathEntry::fromBinary))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TypeAnnotationPosition$TypePathEntry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntry", "com.sun.tools.javac.code.TypeAnnotationPosition", "TypePathEntry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TypeAnnotationPosition$TypePathEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntry",
	"java.lang.Object",
	nullptr,
	_TypeAnnotationPosition$TypePathEntry_FieldInfo_,
	_TypeAnnotationPosition$TypePathEntry_MethodInfo_,
	nullptr,
	nullptr,
	_TypeAnnotationPosition$TypePathEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeAnnotationPosition"
};

$Object* allocate$TypeAnnotationPosition$TypePathEntry($Class* clazz) {
	return $of($alloc(TypeAnnotationPosition$TypePathEntry));
}

TypeAnnotationPosition$TypePathEntry* TypeAnnotationPosition$TypePathEntry::ARRAY = nullptr;
TypeAnnotationPosition$TypePathEntry* TypeAnnotationPosition$TypePathEntry::INNER_TYPE = nullptr;
TypeAnnotationPosition$TypePathEntry* TypeAnnotationPosition$TypePathEntry::WILDCARD = nullptr;

void TypeAnnotationPosition$TypePathEntry::init$($TypeAnnotationPosition$TypePathEntryKind* tag) {
	$init($TypeAnnotationPosition$TypePathEntryKind);
	$Assert::check(tag == $TypeAnnotationPosition$TypePathEntryKind::ARRAY || tag == $TypeAnnotationPosition$TypePathEntryKind::INNER_TYPE || tag == $TypeAnnotationPosition$TypePathEntryKind::WILDCARD);
	$set(this, tag, tag);
	this->arg = 0;
}

void TypeAnnotationPosition$TypePathEntry::init$($TypeAnnotationPosition$TypePathEntryKind* tag, int32_t arg) {
	$init($TypeAnnotationPosition$TypePathEntryKind);
	$Assert::check(tag == $TypeAnnotationPosition$TypePathEntryKind::TYPE_ARGUMENT);
	$set(this, tag, tag);
	this->arg = arg;
}

TypeAnnotationPosition$TypePathEntry* TypeAnnotationPosition$TypePathEntry::fromBinary(int32_t tag, int32_t arg) {
	$init(TypeAnnotationPosition$TypePathEntry);
	$useLocalCurrentObjectStackCache();
	$init($TypeAnnotationPosition$TypePathEntryKind);
	$Assert::check(arg == 0 || tag == $TypeAnnotationPosition$TypePathEntryKind::TYPE_ARGUMENT->tag);
	switch (tag) {
	case 0:
		{
			return TypeAnnotationPosition$TypePathEntry::ARRAY;
		}
	case 1:
		{
			return TypeAnnotationPosition$TypePathEntry::INNER_TYPE;
		}
	case 2:
		{
			return TypeAnnotationPosition$TypePathEntry::WILDCARD;
		}
	case 3:
		{
			return $new(TypeAnnotationPosition$TypePathEntry, $TypeAnnotationPosition$TypePathEntryKind::TYPE_ARGUMENT, arg);
		}
	default:
		{
			$Assert::error($$str({"Invalid TypePathEntryKind tag: "_s, $$str(tag)}));
			return nullptr;
		}
	}
}

$String* TypeAnnotationPosition$TypePathEntry::toString() {
	$useLocalCurrentObjectStackCache();
	$init($TypeAnnotationPosition$TypePathEntryKind);
	return $str({$(this->tag->toString()), (this->tag == $TypeAnnotationPosition$TypePathEntryKind::TYPE_ARGUMENT ? ($$str({"("_s, $$str(this->arg), ")"_s})) : ""_s)});
}

bool TypeAnnotationPosition$TypePathEntry::equals(Object$* other) {
	$var(TypeAnnotationPosition$TypePathEntry, entry, nullptr);
	bool var$2 = $instanceOf(TypeAnnotationPosition$TypePathEntry, other);
	if (var$2) {
		$assign(entry, $cast(TypeAnnotationPosition$TypePathEntry, other));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && this->tag == $nc(entry)->tag;
	return var$0 && this->arg == entry->arg;
}

int32_t TypeAnnotationPosition$TypePathEntry::hashCode() {
	return this->tag->hashCode() * 17 + this->arg;
}

void clinit$TypeAnnotationPosition$TypePathEntry($Class* class$) {
	$init($TypeAnnotationPosition$TypePathEntryKind);
	$assignStatic(TypeAnnotationPosition$TypePathEntry::ARRAY, $new(TypeAnnotationPosition$TypePathEntry, $TypeAnnotationPosition$TypePathEntryKind::ARRAY));
	$assignStatic(TypeAnnotationPosition$TypePathEntry::INNER_TYPE, $new(TypeAnnotationPosition$TypePathEntry, $TypeAnnotationPosition$TypePathEntryKind::INNER_TYPE));
	$assignStatic(TypeAnnotationPosition$TypePathEntry::WILDCARD, $new(TypeAnnotationPosition$TypePathEntry, $TypeAnnotationPosition$TypePathEntryKind::WILDCARD));
}

TypeAnnotationPosition$TypePathEntry::TypeAnnotationPosition$TypePathEntry() {
}

$Class* TypeAnnotationPosition$TypePathEntry::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotationPosition$TypePathEntry, name, initialize, &_TypeAnnotationPosition$TypePathEntry_ClassInfo_, clinit$TypeAnnotationPosition$TypePathEntry, allocate$TypeAnnotationPosition$TypePathEntry);
	return class$;
}

$Class* TypeAnnotationPosition$TypePathEntry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com