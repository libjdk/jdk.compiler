#include <com/sun/tools/javac/api/JavacTaskPool$Worker.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/api/JavacTaskPool.h>
#include <jcpp.h>

using $JavacTask = ::com::sun::source::util::JavacTask;
using $JavacTaskPool = ::com::sun::tools::javac::api::JavacTaskPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$MethodInfo _JavacTaskPool$Worker_MethodInfo_[] = {
	{"withTask", "(Lcom/sun/source/util/JavacTask;)Ljava/lang/Object;", "(Lcom/sun/source/util/JavacTask;)TZ;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavacTaskPool$Worker_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskPool$Worker", "com.sun.tools.javac.api.JavacTaskPool", "Worker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacTaskPool$Worker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.api.JavacTaskPool$Worker",
	nullptr,
	nullptr,
	nullptr,
	_JavacTaskPool$Worker_MethodInfo_,
	"<Z:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_JavacTaskPool$Worker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskPool"
};

$Object* allocate$JavacTaskPool$Worker($Class* clazz) {
	return $of($alloc(JavacTaskPool$Worker));
}

$Class* JavacTaskPool$Worker::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$Worker, name, initialize, &_JavacTaskPool$Worker_ClassInfo_, allocate$JavacTaskPool$Worker);
	return class$;
}

$Class* JavacTaskPool$Worker::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com