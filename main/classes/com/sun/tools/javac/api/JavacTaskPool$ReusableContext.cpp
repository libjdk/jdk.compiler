#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext.h>

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/source/util/TreeScanner.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$1.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableJavaCompiler.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog.h>
#include <com/sun/tools/javac/api/JavacTaskPool.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/api/MultiTaskListener.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/CompileStates.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef PARSE
#undef PATCH_MODULE_PATH

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $TreeScanner = ::com::sun::source::util::TreeScanner;
using $JavacTaskPool = ::com::sun::tools::javac::api::JavacTaskPool;
using $JavacTaskPool$ReusableContext$1 = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$1;
using $JavacTaskPool$ReusableContext$ReusableJavaCompiler = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$ReusableJavaCompiler;
using $JavacTaskPool$ReusableContext$ReusableLog = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$ReusableLog;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $MultiTaskListener = ::com::sun::tools::javac::api::MultiTaskListener;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Check = ::com::sun::tools::javac::comp::Check;
using $CompileStates = ::com::sun::tools::javac::comp::CompileStates;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Log = ::com::sun::tools::javac::util::Log;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTaskPool$ReusableContext_FieldInfo_[] = {
	{"roots", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/source/tree/CompilationUnitTree;>;", 0, $field(JavacTaskPool$ReusableContext, roots)},
	{"arguments", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(JavacTaskPool$ReusableContext, arguments)},
	{"polluted", "Z", nullptr, 0, $field(JavacTaskPool$ReusableContext, polluted)},
	{"useCount", "I", nullptr, 0, $field(JavacTaskPool$ReusableContext, useCount)},
	{"timeStamp", "J", nullptr, 0, $field(JavacTaskPool$ReusableContext, timeStamp)},
	{"pollutionScanner", "Lcom/sun/source/util/TreeScanner;", "Lcom/sun/source/util/TreeScanner<Ljava/lang/Void;Lcom/sun/tools/javac/code/Symtab;>;", 0, $field(JavacTaskPool$ReusableContext, pollutionScanner)},
	{}
};

$MethodInfo _JavacTaskPool$ReusableContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", 0, $method(static_cast<void(JavacTaskPool$ReusableContext::*)($List*)>(&JavacTaskPool$ReusableContext::init$))},
	{"clear", "()V", nullptr, 0},
	{"drop", "(Lcom/sun/tools/javac/util/Context$Key;)V", "<T:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/Context$Key<TT;>;)V", 0},
	{"drop", "(Ljava/lang/Class;)V", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)V", 0},
	{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{"started", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacTaskPool$ReusableContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog", "com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "ReusableLog", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler", "com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "ReusableJavaCompiler", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTaskPool$ReusableContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext",
	"com.sun.tools.javac.util.Context",
	"com.sun.source.util.TaskListener",
	_JavacTaskPool$ReusableContext_FieldInfo_,
	_JavacTaskPool$ReusableContext_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTaskPool$ReusableContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskPool"
};

$Object* allocate$JavacTaskPool$ReusableContext($Class* clazz) {
	return $of($alloc(JavacTaskPool$ReusableContext));
}

int32_t JavacTaskPool$ReusableContext::hashCode() {
	 return this->$Context::hashCode();
}

bool JavacTaskPool$ReusableContext::equals(Object$* arg0) {
	 return this->$Context::equals(arg0);
}

$Object* JavacTaskPool$ReusableContext::clone() {
	 return this->$Context::clone();
}

$String* JavacTaskPool$ReusableContext::toString() {
	 return this->$Context::toString();
}

void JavacTaskPool$ReusableContext::finalize() {
	this->$Context::finalize();
}

void JavacTaskPool$ReusableContext::init$($List* arguments) {
	$Context::init$();
	$set(this, roots, $new($HashSet));
	this->polluted = false;
	$set(this, pollutionScanner, $new($JavacTaskPool$ReusableContext$1, this));
	$set(this, arguments, arguments);
	$init($Log);
	$init($JavacTaskPool$ReusableContext$ReusableLog);
	put($Log::logKey, $JavacTaskPool$ReusableContext$ReusableLog::factory);
	$init($JavaCompiler);
	$init($JavacTaskPool$ReusableContext$ReusableJavaCompiler);
	put($JavaCompiler::compilerKey, $JavacTaskPool$ReusableContext$ReusableJavaCompiler::factory);
}

void JavacTaskPool$ReusableContext::clear() {
	$useLocalCurrentObjectStackCache();
	$load($JavaFileManager);
	$init($StandardLocation);
	this->polluted |= $nc(($cast($JavaFileManager, $(get($JavaFileManager::class$)))))->hasLocation($StandardLocation::PATCH_MODULE_PATH);
	$init($Arguments);
	drop($Arguments::argsKey);
	$load($DiagnosticListener);
	drop($DiagnosticListener::class$);
	$init($Log);
	drop($Log::outKey);
	drop($Log::errKey);
	drop($JavaFileManager::class$);
	$load($JavacTask);
	drop($JavacTask::class$);
	$load($JavacTrees);
	drop($JavacTrees::class$);
	$load($JavacElements);
	drop($JavacElements::class$);
	$load($PlatformDescription);
	drop($PlatformDescription::class$);
	if ($instanceOf($JavacTaskPool$ReusableContext$ReusableLog, $($nc(this->ht)->get($Log::logKey)))) {
		$nc(($cast($JavacTaskPool$ReusableContext$ReusableLog, $($Log::instance(this)))))->clear();
		$nc($($Enter::instance(this)))->newRound();
		$nc(($cast($JavacTaskPool$ReusableContext$ReusableJavaCompiler, $($JavacTaskPool$ReusableContext$ReusableJavaCompiler::instance(this)))))->clear();
		$nc($($Types::instance(this)))->newRound();
		$nc($($Check::instance(this)))->newRound();
		$nc($($Check::instance(this)))->clear();
		$nc($($Preview::instance(this)))->clear();
		$nc($($Modules::instance(this)))->newRound();
		$nc($($Annotate::instance(this)))->newRound();
		$nc($($CompileStates::instance(this)))->clear();
		$nc($($MultiTaskListener::instance(this)))->clear();
		$nc($($Options::instance(this)))->clear();
		$var($Symtab, syms, $Symtab::instance(this));
		$nc(this->pollutionScanner)->scan(static_cast<$Iterable*>(this->roots), $of(syms));
		$nc(this->roots)->clear();
	}
}

void JavacTaskPool$ReusableContext::finished($TaskEvent* e) {
	$init($TaskEvent$Kind);
	if ($nc(e)->getKind() == $TaskEvent$Kind::PARSE) {
		$nc(this->roots)->add($(e->getCompilationUnit()));
	}
}

void JavacTaskPool$ReusableContext::started($TaskEvent* e) {
}

void JavacTaskPool$ReusableContext::drop($Context$Key* k) {
	$nc(this->ht)->remove(k);
}

void JavacTaskPool$ReusableContext::drop($Class* c) {
	$nc(this->ht)->remove($(key(c)));
}

JavacTaskPool$ReusableContext::JavacTaskPool$ReusableContext() {
}

$Class* JavacTaskPool$ReusableContext::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$ReusableContext, name, initialize, &_JavacTaskPool$ReusableContext_ClassInfo_, allocate$JavacTaskPool$ReusableContext);
	return class$;
}

$Class* JavacTaskPool$ReusableContext::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com