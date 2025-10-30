#include <com/sun/tools/javac/code/Attribute$Compound.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/CharSequence.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <jcpp.h>

#undef UNKNOWN

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;
using $1Name = ::javax::lang::model::element::Name;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Attribute$Compound_FieldInfo_[] = {
	{"values", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;", $PUBLIC | $FINAL, $field(Attribute$Compound, values)},
	{"position", "Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC, $field(Attribute$Compound, position)},
	{"synthesized", "Z", nullptr, $PRIVATE, $field(Attribute$Compound, synthesized)},
	{}
};

$MethodInfo _Attribute$Compound_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", $PUBLIC, $method(static_cast<void(Attribute$Compound::*)($Type*,$List*,$TypeAnnotationPosition*)>(&Attribute$Compound::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;)V", $PUBLIC, $method(static_cast<void(Attribute$Compound::*)($Type*,$List*)>(&Attribute$Compound::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getAnnotationType", "()Ljavax/lang/model/type/DeclaredType;", nullptr, $PUBLIC},
	{"getElemPair", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;", $PRIVATE, $method(static_cast<$Pair*(Attribute$Compound::*)($Name*)>(&Attribute$Compound::getElemPair))},
	{"getElementValues", "()Ljava/util/Map;", "()Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;", $PUBLIC},
	{"getFirstEmbeddedTC", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PRIVATE, $method(static_cast<Attribute$Compound*(Attribute$Compound::*)()>(&Attribute$Compound::getFirstEmbeddedTC))},
	{"getPosition", "()Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC},
	{"getValue", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC},
	{"hasUnknownPosition", "()Z", nullptr, $PUBLIC},
	{"isContainerTypeCompound", "()Z", nullptr, $PUBLIC},
	{"isSynthesized", "()Z", nullptr, $PUBLIC},
	{"member", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Attribute;", nullptr, $PUBLIC},
	{"setSynthesized", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryFixPosition", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attribute$Compound_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$Compound", "com.sun.tools.javac.code.Attribute", "Compound", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute$Compound_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Attribute$Compound",
	"com.sun.tools.javac.code.Attribute",
	"javax.lang.model.element.AnnotationMirror",
	_Attribute$Compound_FieldInfo_,
	_Attribute$Compound_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$Compound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$Compound($Class* clazz) {
	return $of($alloc(Attribute$Compound));
}

int32_t Attribute$Compound::hashCode() {
	 return this->$Attribute::hashCode();
}

bool Attribute$Compound::equals(Object$* arg0) {
	 return this->$Attribute::equals(arg0);
}

$Object* Attribute$Compound::clone() {
	 return this->$Attribute::clone();
}

void Attribute$Compound::finalize() {
	this->$Attribute::finalize();
}

bool Attribute$Compound::isSynthesized() {
	return this->synthesized;
}

void Attribute$Compound::setSynthesized(bool synthesized) {
	this->synthesized = synthesized;
}

void Attribute$Compound::init$($Type* type, $List* values, $TypeAnnotationPosition* position) {
	$Attribute::init$(type);
	this->synthesized = false;
	$set(this, values, values);
	$set(this, position, position);
}

void Attribute$Compound::init$($Type* type, $List* values) {
	Attribute$Compound::init$(type, values, nullptr);
}

$TypeAnnotationPosition* Attribute$Compound::getPosition() {
	$useLocalCurrentObjectStackCache();
	if (hasUnknownPosition()) {
		if ($nc(this->values)->size() != 0) {
			$var($Name, valueName, $nc($nc($nc($nc(($cast($Symbol$MethodSymbol, $nc(($cast($Pair, $nc(this->values)->head)))->fst)))->name)->table)->names)->value);
			$var($Pair, res, getElemPair(valueName));
			$set(this, position, res == nullptr ? ($TypeAnnotationPosition*)nullptr : $nc(($cast($Attribute, $nc(res)->snd)))->getPosition());
		}
	}
	return this->position;
}

bool Attribute$Compound::isContainerTypeCompound() {
	bool var$0 = isSynthesized();
	if (var$0 && $nc(this->values)->size() == 1) {
		return getFirstEmbeddedTC() != nullptr;
	}
	return false;
}

Attribute$Compound* Attribute$Compound::getFirstEmbeddedTC() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->values)->size() == 1) {
		$var($Pair, val, $cast($Pair, $nc(this->values)->get(0)));
		{
			$var($Attribute$Array, arr, nullptr);
			$var($Attribute$TypeCompound, compound, nullptr);
			bool var$1 = $nc($($cast($Name, $nc(($cast($Symbol$MethodSymbol, $nc(val)->fst)))->getSimpleName())))->contentEquals("value"_s);
			if (var$1) {
				$var($Object, patt7548$temp, val->snd);
				bool var$2 = $instanceOf($Attribute$Array, patt7548$temp);
				if (var$2) {
					$assign(arr, $cast($Attribute$Array, patt7548$temp));
					var$2 = true;
				}
				var$1 = var$2;
			}
			bool var$0 = var$1 && $nc($nc(arr)->values)->length != 0;
			if (var$0) {
				$var($Attribute, patt7660$temp, $nc(arr->values)->get(0));
				bool var$3 = $instanceOf($Attribute$TypeCompound, patt7660$temp);
				if (var$3) {
					$assign(compound, $cast($Attribute$TypeCompound, patt7660$temp));
					var$3 = true;
				}
				var$0 = var$3;
			}
			if (var$0) {
				return compound;
			}
		}
	}
	return nullptr;
}

bool Attribute$Compound::tryFixPosition() {
	if (!isContainerTypeCompound()) {
		return false;
	}
	$var(Attribute$Compound, from, getFirstEmbeddedTC());
	$init($TargetType);
	if (from != nullptr && from->position != nullptr && $nc(from->position)->type != $TargetType::UNKNOWN) {
		$set(this, position, from->position);
		return true;
	}
	return false;
}

bool Attribute$Compound::hasUnknownPosition() {
	$init($TargetType);
	return $nc(this->position)->type == $TargetType::UNKNOWN;
}

void Attribute$Compound::accept($Attribute$Visitor* v) {
	$nc(v)->visitCompound(this);
}

$String* Attribute$Compound::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("@"_s);
	buf->append($of(this->type));
	int32_t len = $nc(this->values)->length();
	if (len > 0) {
		buf->append(u'(');
		bool first = true;
		{
			$var($Iterator, i$, $nc(this->values)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Pair, value, $cast($Pair, i$->next()));
				{
					if (!first) {
						buf->append(", "_s);
					}
					first = false;
					$var($Name, name, $nc(($cast($Symbol$MethodSymbol, $nc(value)->fst)))->name);
					if (len > 1 || name != $nc($nc($nc(name)->table)->names)->value) {
						buf->append(static_cast<$CharSequence*>(name));
						buf->append(u'=');
					}
					buf->append(value->snd);
				}
			}
		}
		buf->append(u')');
	}
	return buf->toString();
}

$Attribute* Attribute$Compound::member($Name* member) {
	$var($Pair, res, getElemPair(member));
	return res == nullptr ? ($Attribute*)nullptr : $cast($Attribute, $nc(res)->snd);
}

$Pair* Attribute$Compound::getElemPair($Name* member) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->values)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, pair, $cast($Pair, i$->next()));
			if ($nc(($cast($Symbol$MethodSymbol, $nc(pair)->fst)))->name == member) {
				return pair;
			}
		}
	}
	return nullptr;
}

$Object* Attribute$Compound::getValue() {
	return $of(this);
}

$Object* Attribute$Compound::accept($AnnotationValueVisitor* v, Object$* p) {
	return $of($nc(v)->visitAnnotation(this, p));
}

$DeclaredType* Attribute$Compound::getAnnotationType() {
	return $cast($DeclaredType, this->type);
}

$Map* Attribute$Compound::getElementValues() {
	$useLocalCurrentObjectStackCache();
	$var($Map, valmap, $new($LinkedHashMap));
	{
		$var($Iterator, i$, $nc(this->values)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, value, $cast($Pair, i$->next()));
			valmap->put($cast($Symbol$MethodSymbol, $nc(value)->fst), $cast($Attribute, value->snd));
		}
	}
	return valmap;
}

Attribute$Compound::Attribute$Compound() {
}

$Class* Attribute$Compound::load$($String* name, bool initialize) {
	$loadClass(Attribute$Compound, name, initialize, &_Attribute$Compound_ClassInfo_, allocate$Attribute$Compound);
	return class$;
}

$Class* Attribute$Compound::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com