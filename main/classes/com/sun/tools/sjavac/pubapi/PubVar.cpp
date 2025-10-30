#include <com/sun/tools/sjavac/pubapi/PubVar.h>

#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

$FieldInfo _PubVar_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PubVar, serialVersionUID)},
	{"modifiers", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC | $FINAL, $field(PubVar, modifiers)},
	{"type", "Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC | $FINAL, $field(PubVar, type)},
	{"identifier", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(PubVar, identifier)},
	{"constValue", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PubVar, constValue)},
	{}
};

$MethodInfo _PubVar_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Lcom/sun/tools/sjavac/pubapi/TypeDesc;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;Lcom/sun/tools/sjavac/pubapi/TypeDesc;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(PubVar::*)($Set*,$TypeDesc*,$String*,$String*)>(&PubVar::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getConstValue", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC},
	{"getIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PubVar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.pubapi.PubVar",
	"java.lang.Object",
	"java.io.Serializable",
	_PubVar_FieldInfo_,
	_PubVar_MethodInfo_
};

$Object* allocate$PubVar($Class* clazz) {
	return $of($alloc(PubVar));
}

void PubVar::init$($Set* modifiers, $TypeDesc* type, $String* identifier, $String* constValue) {
	$set(this, modifiers, modifiers);
	$set(this, type, type);
	$set(this, identifier, identifier);
	$set(this, constValue, constValue);
}

$String* PubVar::getIdentifier() {
	return this->identifier;
}

bool PubVar::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(PubVar, other, $cast(PubVar, obj));
	bool var$2 = $nc(this->modifiers)->equals($nc(other)->modifiers);
	bool var$1 = var$2 && $nc(this->type)->equals($nc(other)->type);
	bool var$0 = var$1 && $nc(this->identifier)->equals($nc(other)->identifier);
	return var$0 && $nc($(getConstValue()))->equals($($nc(other)->getConstValue()));
}

int32_t PubVar::hashCode() {
	int32_t var$2 = $nc(this->modifiers)->hashCode();
	int32_t var$1 = var$2 ^ $nc(this->type)->hashCode();
	int32_t var$0 = var$1 ^ $nc(this->identifier)->hashCode();
	return var$0 ^ $nc($(getConstValue()))->hashCode();
}

$String* PubVar::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[modifiers: %s, type: %s, identifier: %s, constValue: %s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$of(this->modifiers),
		$of(this->type),
		$of(this->identifier),
		$of(this->constValue)
	}));
}

$Optional* PubVar::getConstValue() {
	return $Optional::ofNullable(this->constValue);
}

PubVar::PubVar() {
}

$Class* PubVar::load$($String* name, bool initialize) {
	$loadClass(PubVar, name, initialize, &_PubVar_ClassInfo_, allocate$PubVar);
	return class$;
}

$Class* PubVar::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com