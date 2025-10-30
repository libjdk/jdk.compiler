#include <com/sun/tools/javac/util/Dependencies$DummyDependencies.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Context = ::com::sun::tools::javac::util::Context;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Dependencies$DummyDependencies_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PRIVATE, $method(static_cast<void(Dependencies$DummyDependencies::*)($Context*)>(&Dependencies$DummyDependencies::init$))},
	{"pop", "()V", nullptr, $PUBLIC},
	{"push", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Dependencies$DummyDependencies_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$DummyDependencies", "com.sun.tools.javac.util.Dependencies", "DummyDependencies", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Dependencies$DummyDependencies_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.Dependencies$DummyDependencies",
	"com.sun.tools.javac.util.Dependencies",
	nullptr,
	nullptr,
	_Dependencies$DummyDependencies_MethodInfo_,
	nullptr,
	nullptr,
	_Dependencies$DummyDependencies_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies"
};

$Object* allocate$Dependencies$DummyDependencies($Class* clazz) {
	return $of($alloc(Dependencies$DummyDependencies));
}

void Dependencies$DummyDependencies::init$($Context* context) {
	$Dependencies::init$(context);
}

void Dependencies$DummyDependencies::push($Symbol$ClassSymbol* s, $Dependencies$CompletionCause* phase) {
}

void Dependencies$DummyDependencies::pop() {
}

Dependencies$DummyDependencies::Dependencies$DummyDependencies() {
}

$Class* Dependencies$DummyDependencies::load$($String* name, bool initialize) {
	$loadClass(Dependencies$DummyDependencies, name, initialize, &_Dependencies$DummyDependencies_ClassInfo_, allocate$Dependencies$DummyDependencies);
	return class$;
}

$Class* Dependencies$DummyDependencies::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com