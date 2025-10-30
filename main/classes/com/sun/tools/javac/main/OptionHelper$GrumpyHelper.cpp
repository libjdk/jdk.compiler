#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>

#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $Option = ::com::sun::tools::javac::main::Option;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _OptionHelper$GrumpyHelper_FieldInfo_[] = {
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(OptionHelper$GrumpyHelper, log)},
	{}
};

$MethodInfo _OptionHelper$GrumpyHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PUBLIC, $method(static_cast<void(OptionHelper$GrumpyHelper::*)($Log*)>(&OptionHelper$GrumpyHelper::init$))},
	{"addClassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addFile", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC},
	{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLog", "()Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC},
	{"getOwnName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"handleFileManagerOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _OptionHelper$GrumpyHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.OptionHelper$GrumpyHelper", "com.sun.tools.javac.main.OptionHelper", "GrumpyHelper", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _OptionHelper$GrumpyHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.OptionHelper$GrumpyHelper",
	"com.sun.tools.javac.main.OptionHelper",
	nullptr,
	_OptionHelper$GrumpyHelper_FieldInfo_,
	_OptionHelper$GrumpyHelper_MethodInfo_,
	nullptr,
	nullptr,
	_OptionHelper$GrumpyHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.OptionHelper"
};

$Object* allocate$OptionHelper$GrumpyHelper($Class* clazz) {
	return $of($alloc(OptionHelper$GrumpyHelper));
}

void OptionHelper$GrumpyHelper::init$($Log* log) {
	$OptionHelper::init$();
	$set(this, log, log);
}

$Log* OptionHelper$GrumpyHelper::getLog() {
	return this->log;
}

$String* OptionHelper$GrumpyHelper::getOwnName() {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

$String* OptionHelper$GrumpyHelper::get($Option* option) {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

void OptionHelper$GrumpyHelper::put($String* name, $String* value) {
	$throwNew($IllegalArgumentException);
}

void OptionHelper$GrumpyHelper::remove($String* name) {
	$throwNew($IllegalArgumentException);
}

bool OptionHelper$GrumpyHelper::handleFileManagerOption($Option* option, $String* value) {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

void OptionHelper$GrumpyHelper::addFile($Path* p) {
	$throwNew($IllegalArgumentException, $($nc(p)->toString()));
}

void OptionHelper$GrumpyHelper::addClassName($String* s) {
	$throwNew($IllegalArgumentException, s);
}

OptionHelper$GrumpyHelper::OptionHelper$GrumpyHelper() {
}

$Class* OptionHelper$GrumpyHelper::load$($String* name, bool initialize) {
	$loadClass(OptionHelper$GrumpyHelper, name, initialize, &_OptionHelper$GrumpyHelper_ClassInfo_, allocate$OptionHelper$GrumpyHelper);
	return class$;
}

$Class* OptionHelper$GrumpyHelper::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com