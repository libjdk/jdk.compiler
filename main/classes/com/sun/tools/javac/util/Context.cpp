#include <com/sun/tools/javac/util/Context.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Context_FieldInfo_[] = {
	{"ht", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Context$Key<*>;Ljava/lang/Object;>;", $PROTECTED | $FINAL, $field(Context, ht)},
	{"ft", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Context$Key<*>;Lcom/sun/tools/javac/util/Context$Factory<*>;>;", $PRIVATE | $FINAL, $field(Context, ft)},
	{"kt", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Lcom/sun/tools/javac/util/Context$Key<*>;>;", $PRIVATE | $FINAL, $field(Context, kt)},
	{}
};

$MethodInfo _Context_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Context::*)()>(&Context::init$))},
	{"checkState", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Map*)>(&Context::checkState))},
	{"dump", "()V", nullptr, $PUBLIC},
	{"get", "(Lcom/sun/tools/javac/util/Context$Key;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/Context$Key<TT;>;)TT;", $PUBLIC},
	{"get", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{"key", "(Ljava/lang/Class;)Lcom/sun/tools/javac/util/Context$Key;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Lcom/sun/tools/javac/util/Context$Key<TT;>;", $PROTECTED},
	{"put", "(Lcom/sun/tools/javac/util/Context$Key;Lcom/sun/tools/javac/util/Context$Factory;)V", "<T:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/Context$Key<TT;>;Lcom/sun/tools/javac/util/Context$Factory<TT;>;)V", $PUBLIC},
	{"put", "(Lcom/sun/tools/javac/util/Context$Key;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/Context$Key<TT;>;TT;)V", $PUBLIC},
	{"put", "(Ljava/lang/Class;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;TT;)V", $PUBLIC},
	{"put", "(Ljava/lang/Class;Lcom/sun/tools/javac/util/Context$Factory;)V", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Lcom/sun/tools/javac/util/Context$Factory<TT;>;)V", $PUBLIC},
	{"uncheckedCast", "(Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;)TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&Context::uncheckedCast))},
	{}
};

$InnerClassInfo _Context_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Context$Factory", "com.sun.tools.javac.util.Context", "Factory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.util.Context$Key", "com.sun.tools.javac.util.Context", "Key", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Context_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Context",
	"java.lang.Object",
	nullptr,
	_Context_FieldInfo_,
	_Context_MethodInfo_,
	nullptr,
	nullptr,
	_Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Context$Factory,com.sun.tools.javac.util.Context$Key"
};

$Object* allocate$Context($Class* clazz) {
	return $of($alloc(Context));
}

void Context::put($Context$Key* key, $Context$Factory* fac) {
	checkState(this->ht);
	$var($Object, old, $nc(this->ht)->put(key, fac));
	if (old != nullptr) {
		$throwNew($AssertionError, $of("duplicate context value"_s));
	}
	checkState(this->ft);
	$nc(this->ft)->put(key, fac);
}

void Context::put($Context$Key* key, Object$* data) {
	if ($instanceOf($Context$Factory, data)) {
		$throwNew($AssertionError, $of("T extends Context.Factory"_s));
	}
	checkState(this->ht);
	$var($Object, old, $nc(this->ht)->put(key, data));
	if (old != nullptr && !($instanceOf($Context$Factory, old)) && !$equals(old, data) && data != nullptr) {
		$throwNew($AssertionError, $of("duplicate context value"_s));
	}
}

$Object* Context::get($Context$Key* key) {
	$useLocalCurrentObjectStackCache();
	checkState(this->ht);
	$var($Object, o, $nc(this->ht)->get(key));
	{
		$var($Context$Factory, fac, nullptr);
		bool var$0 = $instanceOf($Context$Factory, o);
		if (var$0) {
			$assign(fac, $cast($Context$Factory, o));
			var$0 = true;
		}
		if (var$0) {
			$assign(o, $nc(fac)->make(this));
			if ($instanceOf($Context$Factory, o)) {
				$throwNew($AssertionError, $of("T extends Context.Factory"_s));
			}
			$Assert::check($equals($nc(this->ht)->get(key), o));
		}
	}
	return $of(Context::uncheckedCast(o));
}

void Context::init$() {
	$set(this, ht, $new($HashMap));
	$set(this, ft, $new($HashMap));
	$set(this, kt, $new($HashMap));
}

$Context$Key* Context::key($Class* clss) {
	$useLocalCurrentObjectStackCache();
	checkState(this->kt);
	$var($Context$Key, k, $cast($Context$Key, uncheckedCast($($nc(this->kt)->get(clss)))));
	if (k == nullptr) {
		$assign(k, $new($Context$Key));
		$nc(this->kt)->put(clss, k);
	}
	return k;
}

$Object* Context::get($Class* clazz) {
	return $of(get($(key(clazz))));
}

void Context::put($Class* clazz, Object$* data) {
	put($(key(clazz)), data);
}

void Context::put($Class* clazz, $Context$Factory* fac) {
	put($(key(clazz)), fac);
}

$Object* Context::uncheckedCast(Object$* o) {
	return $of(o);
}

void Context::dump() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->ht)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, value, i$->next());
			$nc($System::err)->println(value == nullptr ? ($Object*)nullptr : $of($nc($of(value))->getClass()));
		}
	}
}

void Context::checkState($Map* t) {
	if (t == nullptr) {
		$throwNew($IllegalStateException);
	}
}

Context::Context() {
}

$Class* Context::load$($String* name, bool initialize) {
	$loadClass(Context, name, initialize, &_Context_ClassInfo_, allocate$Context);
	return class$;
}

$Class* Context::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com