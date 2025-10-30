#include <Javac.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/main/Main.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::javac::main::Main;
using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Javac_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Javac::*)()>(&Javac::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&Javac::main)), "java.io.IOException"},
	{}
};

$ClassInfo _Javac_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Javac",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Javac_MethodInfo_
};

$Object* allocate$Javac($Class* clazz) {
	return $of($alloc(Javac));
}

void Javac::init$() {
}

void Javac::main($StringArray* args) {
	$var($Main, myMain, $new($Main, "javac"_s));
	myMain->compile(args);
}

Javac::Javac() {
}

$Class* Javac::load$($String* name, bool initialize) {
	$loadClass(Javac, name, initialize, &_Javac_ClassInfo_, allocate$Javac);
	return class$;
}

$Class* Javac::class$ = nullptr;