#include <com/sun/tools/javac/code/TypeMetadata.h>

#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef EMPTY

using $TypeMetadata$Entry = ::com::sun::tools::javac::code::TypeMetadata$Entry;
using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumMap = ::java::util::EnumMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _TypeMetadata_FieldInfo_[] = {
	{"EMPTY", "Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TypeMetadata, EMPTY)},
	{"contents", "Ljava/util/EnumMap;", "Ljava/util/EnumMap<Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;Lcom/sun/tools/javac/code/TypeMetadata$Entry;>;", $PRIVATE | $FINAL, $field(TypeMetadata, contents)},
	{}
};

$MethodInfo _TypeMetadata_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TypeMetadata::*)()>(&TypeMetadata::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeMetadata::*)($TypeMetadata$Entry*)>(&TypeMetadata::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeMetadata::*)(TypeMetadata*)>(&TypeMetadata::init$))},
	{"add", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;Lcom/sun/tools/javac/code/TypeMetadata$Entry;)V", nullptr, $PRIVATE, $method(static_cast<void(TypeMetadata::*)($TypeMetadata$Entry$Kind*,$TypeMetadata$Entry*)>(&TypeMetadata::add))},
	{"combine", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry;)Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC},
	{"combineAll", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC},
	{"get", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;)Lcom/sun/tools/javac/code/TypeMetadata$Entry;", nullptr, $PUBLIC},
	{"without", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;)Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TypeMetadata_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeMetadata$Annotations", "com.sun.tools.javac.code.TypeMetadata", "Annotations", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.TypeMetadata$Entry", "com.sun.tools.javac.code.TypeMetadata", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TypeMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.TypeMetadata",
	"java.lang.Object",
	nullptr,
	_TypeMetadata_FieldInfo_,
	_TypeMetadata_MethodInfo_,
	nullptr,
	nullptr,
	_TypeMetadata_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeMetadata$Annotations,com.sun.tools.javac.code.TypeMetadata$Entry,com.sun.tools.javac.code.TypeMetadata$Entry$Kind"
};

$Object* allocate$TypeMetadata($Class* clazz) {
	return $of($alloc(TypeMetadata));
}

TypeMetadata* TypeMetadata::EMPTY = nullptr;

void TypeMetadata::init$() {
	$load($TypeMetadata$Entry$Kind);
	$set(this, contents, $new($EnumMap, $TypeMetadata$Entry$Kind::class$));
}

void TypeMetadata::init$($TypeMetadata$Entry* elem) {
	TypeMetadata::init$();
	$Assert::checkNonNull(elem);
	$nc(this->contents)->put($(static_cast<$Enum*>($nc(elem)->kind())), $of(elem));
}

void TypeMetadata::init$(TypeMetadata* other) {
	$Assert::checkNonNull(other);
	$set(this, contents, $cast($EnumMap, $nc($nc(other)->contents)->clone()));
}

TypeMetadata* TypeMetadata::combine($TypeMetadata$Entry* elem) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(elem);
	$var(TypeMetadata, out, $new(TypeMetadata, this));
	$TypeMetadata$Entry$Kind* key = $nc(elem)->kind();
	if ($nc(this->contents)->containsKey(key)) {
		out->add(key, $($nc(($cast($TypeMetadata$Entry, $($nc(this->contents)->get(key)))))->combine(elem)));
	} else {
		out->add(key, elem);
	}
	return out;
}

TypeMetadata* TypeMetadata::combineAll(TypeMetadata* other) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(other);
	$var(TypeMetadata, out, $new(TypeMetadata));
	$var($Set, keys, $new($HashSet, $(static_cast<$Collection*>($nc(this->contents)->keySet()))));
	keys->addAll($($nc($nc(other)->contents)->keySet()));
	{
		$var($Iterator, i$, keys->iterator());
		for (; $nc(i$)->hasNext();) {
			$TypeMetadata$Entry$Kind* key = $cast($TypeMetadata$Entry$Kind, i$->next());
			{
				if ($nc(this->contents)->containsKey(key)) {
					if ($nc($nc(other)->contents)->containsKey(key)) {
						out->add(key, $($nc(($cast($TypeMetadata$Entry, $($nc(this->contents)->get(key)))))->combine($cast($TypeMetadata$Entry, $($nc(other->contents)->get(key))))));
					} else {
						out->add(key, $cast($TypeMetadata$Entry, $($nc(this->contents)->get(key))));
					}
				} else if ($nc($nc(other)->contents)->containsKey(key)) {
					out->add(key, $cast($TypeMetadata$Entry, $($nc(other->contents)->get(key))));
				}
			}
		}
	}
	return out;
}

TypeMetadata* TypeMetadata::without($TypeMetadata$Entry$Kind* kind) {
	if (this == TypeMetadata::EMPTY || $nc(this->contents)->get(kind) == nullptr) {
		return this;
	}
	$var(TypeMetadata, out, $new(TypeMetadata, this));
	$nc(out->contents)->remove(kind);
	return $nc(out->contents)->isEmpty() ? TypeMetadata::EMPTY : out;
}

$TypeMetadata$Entry* TypeMetadata::get($TypeMetadata$Entry$Kind* kind) {
	return $cast($TypeMetadata$Entry, $nc(this->contents)->get(kind));
}

void TypeMetadata::add($TypeMetadata$Entry$Kind* kind, $TypeMetadata$Entry* elem) {
	$nc(this->contents)->put(static_cast<$Enum*>(kind), $of(elem));
}

void clinit$TypeMetadata($Class* class$) {
	$assignStatic(TypeMetadata::EMPTY, $new(TypeMetadata));
}

TypeMetadata::TypeMetadata() {
}

$Class* TypeMetadata::load$($String* name, bool initialize) {
	$loadClass(TypeMetadata, name, initialize, &_TypeMetadata_ClassInfo_, clinit$TypeMetadata, allocate$TypeMetadata);
	return class$;
}

$Class* TypeMetadata::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com