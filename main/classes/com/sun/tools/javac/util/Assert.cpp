#include <com/sun/tools/javac/util/Assert.h>

#include <java/lang/AssertionError.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Supplier = ::java::util::function::Supplier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Assert_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Assert::*)()>(&Assert::init$))},
	{"check", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&Assert::check))},
	{"check", "(ZI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,int32_t)>(&Assert::check))},
	{"check", "(ZJ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,int64_t)>(&Assert::check))},
	{"check", "(ZLjava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,Object$*)>(&Assert::check))},
	{"check", "(ZLjava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,$String*)>(&Assert::check))},
	{"check", "(ZLjava/util/function/Supplier;)V", "(ZLjava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,$Supplier*)>(&Assert::check))},
	{"checkNonNull", "(Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&Assert::checkNonNull))},
	{"checkNonNull", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$String*)>(&Assert::checkNonNull))},
	{"checkNonNull", "(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;Ljava/util/function/Supplier<Ljava/lang/String;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Supplier*)>(&Assert::checkNonNull))},
	{"checkNull", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*)>(&Assert::checkNull))},
	{"checkNull", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*,Object$*)>(&Assert::checkNull))},
	{"checkNull", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*,$String*)>(&Assert::checkNull))},
	{"checkNull", "(Ljava/lang/Object;Ljava/util/function/Supplier;)V", "(Ljava/lang/Object;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*,$Supplier*)>(&Assert::checkNull))},
	{"error", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Assert::error))},
	{"error", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Assert::error))},
	{}
};

$ClassInfo _Assert_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Assert",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Assert_MethodInfo_
};

$Object* allocate$Assert($Class* clazz) {
	return $of($alloc(Assert));
}

void Assert::check(bool cond) {
	if (!cond) {
		error();
	}
}

void Assert::checkNull(Object$* o) {
	if (o != nullptr) {
		error();
	}
}

$Object* Assert::checkNonNull(Object$* t) {
	if (t == nullptr) {
		error();
	}
	return $of(t);
}

void Assert::check(bool cond, int32_t value) {
	if (!cond) {
		error($($String::valueOf(value)));
	}
}

void Assert::check(bool cond, int64_t value) {
	if (!cond) {
		error($($String::valueOf(value)));
	}
}

void Assert::check(bool cond, Object$* value) {
	if (!cond) {
		error($($String::valueOf(value)));
	}
}

void Assert::check(bool cond, $String* msg) {
	if (!cond) {
		error(msg);
	}
}

void Assert::check(bool cond, $Supplier* msg) {
	if (!cond) {
		error($cast($String, $($nc(msg)->get())));
	}
}

void Assert::checkNull(Object$* o, Object$* value) {
	if (o != nullptr) {
		error($($String::valueOf(value)));
	}
}

void Assert::checkNull(Object$* o, $String* msg) {
	if (o != nullptr) {
		error(msg);
	}
}

void Assert::checkNull(Object$* o, $Supplier* msg) {
	if (o != nullptr) {
		error($cast($String, $($nc(msg)->get())));
	}
}

$Object* Assert::checkNonNull(Object$* t, $String* msg) {
	if (t == nullptr) {
		error(msg);
	}
	return $of(t);
}

$Object* Assert::checkNonNull(Object$* t, $Supplier* msg) {
	if (t == nullptr) {
		error($cast($String, $($nc(msg)->get())));
	}
	return $of(t);
}

void Assert::error() {
	$throwNew($AssertionError);
}

void Assert::error($String* msg) {
	$throwNew($AssertionError, $of(msg));
}

void Assert::init$() {
}

Assert::Assert() {
}

$Class* Assert::load$($String* name, bool initialize) {
	$loadClass(Assert, name, initialize, &_Assert_ClassInfo_, allocate$Assert);
	return class$;
}

$Class* Assert::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com