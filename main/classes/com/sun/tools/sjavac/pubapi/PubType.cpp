#include <com/sun/tools/sjavac/pubapi/PubType.h>

#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

$FieldInfo _PubType_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PubType, serialVersionUID)},
	{"modifiers", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC | $FINAL, $field(PubType, modifiers)},
	{"fqName", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(PubType, fqName)},
	{"pubApi", "Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PUBLIC | $FINAL, $field(PubType, pubApi)},
	{}
};

$MethodInfo _PubType_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;)V", "(Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;)V", $PUBLIC, $method(static_cast<void(PubType::*)($Set*,$String*,$PubApi*)>(&PubType::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFqName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PubType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.pubapi.PubType",
	"java.lang.Object",
	"java.io.Serializable",
	_PubType_FieldInfo_,
	_PubType_MethodInfo_
};

$Object* allocate$PubType($Class* clazz) {
	return $of($alloc(PubType));
}

void PubType::init$($Set* modifiers, $String* fqName, $PubApi* pubApi) {
	$set(this, modifiers, modifiers);
	$set(this, fqName, fqName);
	$set(this, pubApi, pubApi);
}

$String* PubType::getFqName() {
	return $nc(this->fqName)->toString();
}

bool PubType::equals(Object$* obj) {
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(PubType, other, $cast(PubType, obj));
	bool var$1 = $nc(this->modifiers)->equals($nc(other)->modifiers);
	bool var$0 = var$1 && $nc(this->fqName)->equals($nc(other)->fqName);
	return var$0 && $nc(this->pubApi)->equals($nc(other)->pubApi);
}

int32_t PubType::hashCode() {
	int32_t var$1 = $nc(this->modifiers)->hashCode();
	int32_t var$0 = var$1 ^ $nc(this->fqName)->hashCode();
	return var$0 ^ $nc(this->pubApi)->hashCode();
}

$String* PubType::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[modifiers: %s, fqName: %s, pubApi: %s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$of(this->modifiers),
		$of(this->fqName),
		$of(this->pubApi)
	}));
}

PubType::PubType() {
}

$Class* PubType::load$($String* name, bool initialize) {
	$loadClass(PubType, name, initialize, &_PubType_ClassInfo_, allocate$PubType);
	return class$;
}

$Class* PubType::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com