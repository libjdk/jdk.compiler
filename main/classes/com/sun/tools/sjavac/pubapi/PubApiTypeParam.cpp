#include <com/sun/tools/sjavac/pubapi/PubApiTypeParam.h>

#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class PubApiTypeParam$$Lambda$encodeAsString : public $Function {
	$class(PubApiTypeParam$$Lambda$encodeAsString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* td) override {
		 return $of($TypeDesc::encodeAsString($cast($TypeDesc, td)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApiTypeParam$$Lambda$encodeAsString>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApiTypeParam$$Lambda$encodeAsString::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApiTypeParam$$Lambda$encodeAsString::*)()>(&PubApiTypeParam$$Lambda$encodeAsString::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApiTypeParam$$Lambda$encodeAsString::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApiTypeParam$$Lambda$encodeAsString",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApiTypeParam$$Lambda$encodeAsString::load$($String* name, bool initialize) {
	$loadClass(PubApiTypeParam$$Lambda$encodeAsString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApiTypeParam$$Lambda$encodeAsString::class$ = nullptr;

$FieldInfo _PubApiTypeParam_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PubApiTypeParam, serialVersionUID)},
	{"identifier", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PubApiTypeParam, identifier)},
	{"bounds", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;", $PRIVATE | $FINAL, $field(PubApiTypeParam, bounds)},
	{}
};

$MethodInfo _PubApiTypeParam_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;)V", $PUBLIC, $method(static_cast<void(PubApiTypeParam::*)($String*,$List*)>(&PubApiTypeParam::init$))},
	{"asString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PubApiTypeParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.pubapi.PubApiTypeParam",
	"java.lang.Object",
	"java.io.Serializable",
	_PubApiTypeParam_FieldInfo_,
	_PubApiTypeParam_MethodInfo_
};

$Object* allocate$PubApiTypeParam($Class* clazz) {
	return $of($alloc(PubApiTypeParam));
}

void PubApiTypeParam::init$($String* identifier, $List* bounds) {
	$set(this, identifier, identifier);
	$set(this, bounds, bounds);
}

bool PubApiTypeParam::equals(Object$* obj) {
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(PubApiTypeParam, other, $cast(PubApiTypeParam, obj));
	bool var$0 = $nc(this->identifier)->equals($nc(other)->identifier);
	return var$0 && $nc(this->bounds)->equals($nc(other)->bounds);
}

int32_t PubApiTypeParam::hashCode() {
	int32_t var$0 = $nc(this->identifier)->hashCode();
	return var$0 ^ $nc(this->bounds)->hashCode();
}

$String* PubApiTypeParam::asString() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->bounds)->isEmpty()) {
		return this->identifier;
	}
	$var($String, boundsStr, $cast($String, $nc($($nc($($nc(this->bounds)->stream()))->map(static_cast<$Function*>($$new(PubApiTypeParam$$Lambda$encodeAsString)))))->collect($($Collectors::joining(" & "_s)))));
	return $str({this->identifier, " extends "_s, boundsStr});
}

$String* PubApiTypeParam::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[id: %s, bounds: %s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$of(this->identifier),
		$of(this->bounds)
	}));
}

PubApiTypeParam::PubApiTypeParam() {
}

$Class* PubApiTypeParam::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PubApiTypeParam$$Lambda$encodeAsString::classInfo$.name)) {
			return PubApiTypeParam$$Lambda$encodeAsString::load$(name, initialize);
		}
	}
	$loadClass(PubApiTypeParam, name, initialize, &_PubApiTypeParam_ClassInfo_, allocate$PubApiTypeParam);
	return class$;
}

$Class* PubApiTypeParam::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com