#include <com/sun/tools/javac/util/Options.h>

#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Runnable.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef XLINT
#undef XLINT_CUSTOM

using $Option = ::com::sun::tools::javac::main::Option;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $List = ::com::sun::tools::javac::util::List;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Options_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Options, serialVersionUID)},
	{"optionsKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/util/Options;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Options, optionsKey)},
	{"values", "Ljava/util/LinkedHashMap;", "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(Options, values)},
	{"listeners", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/lang/Runnable;>;", $PRIVATE, $field(Options, listeners)},
	{}
};

$MethodInfo _Options_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Options::*)($Context*)>(&Options::init$))},
	{"addListener", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBoolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"getBoolean", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/Options;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Options*(*)($Context*)>(&Options::instance))},
	{"isLintSet", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isSet", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isSet", "(Lcom/sun/tools/javac/main/Option;)Z", nullptr, $PUBLIC},
	{"isSet", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isUnset", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isUnset", "(Lcom/sun/tools/javac/main/Option;)Z", nullptr, $PUBLIC},
	{"isUnset", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"notifyListeners", "()V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"put", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"putAll", "(Lcom/sun/tools/javac/util/Options;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Options_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Options",
	"java.lang.Object",
	nullptr,
	_Options_FieldInfo_,
	_Options_MethodInfo_
};

$Object* allocate$Options($Class* clazz) {
	return $of($alloc(Options));
}

$Context$Key* Options::optionsKey = nullptr;

Options* Options::instance($Context* context) {
	$init(Options);
	$var(Options, instance, $cast(Options, $nc(context)->get(Options::optionsKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Options, context));
	}
	return instance;
}

void Options::init$($Context* context) {
	$set(this, listeners, $List::nil());
	$set(this, values, $new($LinkedHashMap));
	$nc(context)->put(Options::optionsKey, $of(this));
}

$String* Options::get($String* name) {
	return $cast($String, $nc(this->values)->get(name));
}

$String* Options::get($Option* option) {
	return $cast($String, $nc(this->values)->get($nc(option)->primaryName));
}

bool Options::getBoolean($String* name) {
	return getBoolean(name, false);
}

bool Options::getBoolean($String* name, bool defaultValue) {
	$var($String, value, get(name));
	return (value == nullptr) ? defaultValue : $Boolean::parseBoolean(value);
}

bool Options::isSet($String* name) {
	return ($nc(this->values)->get(name) != nullptr);
}

bool Options::isSet($Option* option) {
	return ($nc(this->values)->get($nc(option)->primaryName) != nullptr);
}

bool Options::isSet($Option* option, $String* value) {
	return ($nc(this->values)->get($$str({$nc(option)->primaryName, value})) != nullptr);
}

bool Options::isLintSet($String* s) {
	$init($Option);
	bool var$0 = isSet($Option::XLINT_CUSTOM, s);
	if (!var$0) {
		bool var$2 = isSet($Option::XLINT);
		bool var$1 = (var$2 || isSet($Option::XLINT_CUSTOM, "all"_s));
		var$0 = var$1 && isUnset($Option::XLINT_CUSTOM, $$str({"-"_s, s}));
	}
	return var$0;
}

bool Options::isUnset($String* name) {
	return ($nc(this->values)->get(name) == nullptr);
}

bool Options::isUnset($Option* option) {
	return ($nc(this->values)->get($nc(option)->primaryName) == nullptr);
}

bool Options::isUnset($Option* option, $String* value) {
	return ($nc(this->values)->get($$str({$nc(option)->primaryName, value})) == nullptr);
}

void Options::put($String* name, $String* value) {
	$nc(this->values)->put(name, value);
}

void Options::put($Option* option, $String* value) {
	$nc(this->values)->put($nc(option)->primaryName, value);
}

void Options::putAll(Options* options) {
	$nc(this->values)->putAll($nc(options)->values);
}

void Options::remove($String* name) {
	$nc(this->values)->remove(name);
}

$Set* Options::keySet() {
	return $nc(this->values)->keySet();
}

int32_t Options::size() {
	return $nc(this->values)->size();
}

void Options::addListener($Runnable* listener) {
	$set(this, listeners, $nc(this->listeners)->prepend(listener));
}

void Options::notifyListeners() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->listeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Runnable, r, $cast($Runnable, i$->next()));
			$nc(r)->run();
		}
	}
}

void Options::clear() {
	$nc(this->values)->clear();
	$set(this, listeners, $List::nil());
}

void clinit$Options($Class* class$) {
	$assignStatic(Options::optionsKey, $new($Context$Key));
}

Options::Options() {
}

$Class* Options::load$($String* name, bool initialize) {
	$loadClass(Options, name, initialize, &_Options_ClassInfo_, clinit$Options, allocate$Options);
	return class$;
}

$Class* Options::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com