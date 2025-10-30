#include <com/sun/tools/javac/util/Dependencies.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies$DummyDependencies.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $Dependencies$DummyDependencies = ::com::sun::tools::javac::util::Dependencies$DummyDependencies;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Dependencies_FieldInfo_[] = {
	{"dependenciesKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/util/Dependencies;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Dependencies, dependenciesKey)},
	{}
};

$MethodInfo _Dependencies_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Dependencies::*)($Context*)>(&Dependencies::init$))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/Dependencies;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Dependencies*(*)($Context*)>(&Dependencies::instance))},
	{"pop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"push", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Dependencies_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$DummyDependencies", "com.sun.tools.javac.util.Dependencies", "DummyDependencies", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$CompletionCause", "com.sun.tools.javac.util.Dependencies", "CompletionCause", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Dependencies_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.Dependencies",
	"java.lang.Object",
	nullptr,
	_Dependencies_FieldInfo_,
	_Dependencies_MethodInfo_,
	nullptr,
	nullptr,
	_Dependencies_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies$DummyDependencies,com.sun.tools.javac.util.Dependencies$GraphDependencies,com.sun.tools.javac.util.Dependencies$GraphDependencies$FilterVisitor,com.sun.tools.javac.util.Dependencies$GraphDependencies$PruneVisitor,com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode,com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode$Kind,com.sun.tools.javac.util.Dependencies$GraphDependencies$Node,com.sun.tools.javac.util.Dependencies$GraphDependencies$DependenciesMode,com.sun.tools.javac.util.Dependencies$CompletionCause"
};

$Object* allocate$Dependencies($Class* clazz) {
	return $of($alloc(Dependencies));
}

$Context$Key* Dependencies::dependenciesKey = nullptr;

Dependencies* Dependencies::instance($Context* context) {
	$init(Dependencies);
	$var(Dependencies, instance, $cast(Dependencies, $nc(context)->get(Dependencies::dependenciesKey)));
	if (instance == nullptr) {
		$assign(instance, $new($Dependencies$DummyDependencies, context));
	}
	return instance;
}

void Dependencies::init$($Context* context) {
	$nc(context)->put(Dependencies::dependenciesKey, $of(this));
}

void clinit$Dependencies($Class* class$) {
	$assignStatic(Dependencies::dependenciesKey, $new($Context$Key));
}

Dependencies::Dependencies() {
}

$Class* Dependencies::load$($String* name, bool initialize) {
	$loadClass(Dependencies, name, initialize, &_Dependencies_ClassInfo_, clinit$Dependencies, allocate$Dependencies);
	return class$;
}

$Class* Dependencies::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com