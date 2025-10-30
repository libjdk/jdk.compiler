#include <com/sun/tools/javac/util/Context$Key.h>

#include <com/sun/tools/javac/util/Context.h>
#include <jcpp.h>

using $Context = ::com::sun::tools::javac::util::Context;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Context$Key_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Context$Key::*)()>(&Context$Key::init$))},
	{}
};

$InnerClassInfo _Context$Key_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Context$Key", "com.sun.tools.javac.util.Context", "Key", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Context$Key_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Context$Key",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Context$Key_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Context$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Context"
};

$Object* allocate$Context$Key($Class* clazz) {
	return $of($alloc(Context$Key));
}

void Context$Key::init$() {
}

Context$Key::Context$Key() {
}

$Class* Context$Key::load$($String* name, bool initialize) {
	$loadClass(Context$Key, name, initialize, &_Context$Key_ClassInfo_, allocate$Context$Key);
	return class$;
}

$Class* Context$Key::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com