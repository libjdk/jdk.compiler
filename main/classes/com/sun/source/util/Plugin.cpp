#include <com/sun/source/util/Plugin.h>

#include <com/sun/source/util/JavacTask.h>
#include <jcpp.h>

using $JavacTask = ::com::sun::source::util::JavacTask;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _Plugin_MethodInfo_[] = {
	{"autoStart", "()Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"init", "(Lcom/sun/source/util/JavacTask;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{}
};

$ClassInfo _Plugin_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.util.Plugin",
	nullptr,
	nullptr,
	nullptr,
	_Plugin_MethodInfo_
};

$Object* allocate$Plugin($Class* clazz) {
	return $of($alloc(Plugin));
}

bool Plugin::autoStart() {
	return false;
}

$Class* Plugin::load$($String* name, bool initialize) {
	$loadClass(Plugin, name, initialize, &_Plugin_ClassInfo_, allocate$Plugin);
	return class$;
}

$Class* Plugin::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com