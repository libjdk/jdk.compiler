#include <com/sun/tools/javac/api/BasicJavacTask.h>

#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/ParameterNameProvider.h>
#include <com/sun/source/util/Plugin.h>
#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/doclint/DocLint.h>
#include <com/sun/tools/javac/api/MultiTaskListener.h>
#include <com/sun/tools/javac/code/MissingInfoHandler.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/model/JavacTypes.h>
#include <com/sun/tools/javac/platform/PlatformDescription$PluginInfo.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/ModuleHelper.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/PropagatedException.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/Module.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/lang/model/util/Types.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $ParameterNameProvider = ::com::sun::source::util::ParameterNameProvider;
using $Plugin = ::com::sun::source::util::Plugin;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $DocLint = ::com::sun::tools::doclint::DocLint;
using $MultiTaskListener = ::com::sun::tools::javac::api::MultiTaskListener;
using $MissingInfoHandler = ::com::sun::tools::javac::code::MissingInfoHandler;
using $Type = ::com::sun::tools::javac::code::Type;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JavacTypes = ::com::sun::tools::javac::model::JavacTypes;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $PlatformDescription$PluginInfo = ::com::sun::tools::javac::platform::PlatformDescription$PluginInfo;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $ModuleHelper = ::com::sun::tools::javac::util::ModuleHelper;
using $Options = ::com::sun::tools::javac::util::Options;
using $PropagatedException = ::com::sun::tools::javac::util::PropagatedException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $1List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $Elements = ::javax::lang::model::util::Elements;
using $Types = ::javax::lang::model::util::Types;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class BasicJavacTask$$Lambda$lambda$initPlugins$0 : public $Function {
	$class(BasicJavacTask$$Lambda$lambda$initPlugins$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(BasicJavacTask::lambda$initPlugins$0($cast($Map$Entry, e)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicJavacTask$$Lambda$lambda$initPlugins$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicJavacTask$$Lambda$lambda$initPlugins$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicJavacTask$$Lambda$lambda$initPlugins$0::*)()>(&BasicJavacTask$$Lambda$lambda$initPlugins$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicJavacTask$$Lambda$lambda$initPlugins$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.BasicJavacTask$$Lambda$lambda$initPlugins$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* BasicJavacTask$$Lambda$lambda$initPlugins$0::load$($String* name, bool initialize) {
	$loadClass(BasicJavacTask$$Lambda$lambda$initPlugins$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicJavacTask$$Lambda$lambda$initPlugins$0::class$ = nullptr;

$FieldInfo _BasicJavacTask_FieldInfo_[] = {
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PROTECTED, $field(BasicJavacTask, context)},
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $PROTECTED, $field(BasicJavacTask, options)},
	{"taskListener", "Lcom/sun/source/util/TaskListener;", nullptr, $PRIVATE, $field(BasicJavacTask, taskListener)},
	{}
};

$MethodInfo _BasicJavacTask_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BasicJavacTask::*)($Context*,bool)>(&BasicJavacTask::init$))},
	{"addModules", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/lang/String;>;)V", $PUBLIC},
	{"addTaskListener", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC},
	{"analyze", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"generate", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getContext", "()Lcom/sun/tools/javac/util/Context;", nullptr, $PUBLIC},
	{"getElements", "()Ljavax/lang/model/util/Elements;", nullptr, $PUBLIC},
	{"getTaskListeners", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lcom/sun/source/util/TaskListener;>;", $PUBLIC},
	{"getTypeMirror", "(Ljava/lang/Iterable;)Ljavax/lang/model/type/TypeMirror;", "(Ljava/lang/Iterable<+Lcom/sun/source/tree/Tree;>;)Ljavax/lang/model/type/TypeMirror;", $PUBLIC},
	{"getTypes", "()Ljavax/lang/model/util/Types;", nullptr, $PUBLIC},
	{"initDocLint", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Ljava/lang/String;>;)V", $PUBLIC},
	{"initPlugin", "(Lcom/sun/source/util/Plugin;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(BasicJavacTask::*)($Plugin*,$StringArray*)>(&BasicJavacTask::initPlugin))},
	{"initPlugins", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/util/List<Ljava/lang/String;>;>;)V", $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavacTask*(*)($Context*)>(&BasicJavacTask::instance))},
	{"lambda$initPlugins$0", "(Ljava/util/Map$Entry;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Map$Entry*)>(&BasicJavacTask::lambda$initPlugins$0))},
	{"parse", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Lcom/sun/source/tree/CompilationUnitTree;>;", $PUBLIC},
	{"removeTaskListener", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC},
	{"setParameterNameProvider", "(Lcom/sun/source/util/ParameterNameProvider;)V", nullptr, $PUBLIC},
	{"setProcessors", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/annotation/processing/Processor;>;)V", $PUBLIC},
	{"setTaskListener", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicJavacTask_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.BasicJavacTask",
	"com.sun.source.util.JavacTask",
	nullptr,
	_BasicJavacTask_FieldInfo_,
	_BasicJavacTask_MethodInfo_
};

$Object* allocate$BasicJavacTask($Class* clazz) {
	return $of($alloc(BasicJavacTask));
}

$JavacTask* BasicJavacTask::instance($Context* context) {
	$init(BasicJavacTask);
	$load($JavacTask);
	$var($JavacTask, instance, $cast($JavacTask, $nc(context)->get($JavacTask::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(BasicJavacTask, context, true));
	}
	return instance;
}

void BasicJavacTask::init$($Context* c, bool register$) {
	$JavacTask::init$();
	$set(this, context, c);
	$set(this, options, $Options::instance(c));
	if (register$) {
		$load($JavacTask);
		$nc(this->context)->put($JavacTask::class$, $of(this));
	}
}

$Iterable* BasicJavacTask::parse() {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

$Iterable* BasicJavacTask::analyze() {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

$Iterable* BasicJavacTask::generate() {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

void BasicJavacTask::setTaskListener($TaskListener* tl) {
	$var($MultiTaskListener, mtl, $MultiTaskListener::instance(this->context));
	if (this->taskListener != nullptr) {
		$nc(mtl)->remove(this->taskListener);
	}
	if (tl != nullptr) {
		$nc(mtl)->add(tl);
	}
	$set(this, taskListener, tl);
}

void BasicJavacTask::addTaskListener($TaskListener* taskListener) {
	$var($MultiTaskListener, mtl, $MultiTaskListener::instance(this->context));
	$nc(mtl)->add(taskListener);
}

void BasicJavacTask::removeTaskListener($TaskListener* taskListener) {
	$var($MultiTaskListener, mtl, $MultiTaskListener::instance(this->context));
	$nc(mtl)->remove(taskListener);
}

void BasicJavacTask::setParameterNameProvider($ParameterNameProvider* handler) {
	$nc($($MissingInfoHandler::instance(this->context)))->setDelegate(handler);
}

$Collection* BasicJavacTask::getTaskListeners() {
	$var($MultiTaskListener, mtl, $MultiTaskListener::instance(this->context));
	return $nc(mtl)->getTaskListeners();
}

$TypeMirror* BasicJavacTask::getTypeMirror($Iterable* path) {
	$useLocalCurrentObjectStackCache();
	$var($Tree, last, nullptr);
	{
		$var($Iterator, i$, $nc(path)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Tree, node, $cast($Tree, i$->next()));
			{
				$assign(last, $cast($Tree, $Objects::requireNonNull(node)));
			}
		}
	}
	if (last == nullptr) {
		$throwNew($IllegalArgumentException, "empty path"_s);
	}
	return $nc(($cast($JCTree, last)))->type;
}

$Elements* BasicJavacTask::getElements() {
	if (this->context == nullptr) {
		$throwNew($IllegalStateException);
	}
	return $JavacElements::instance(this->context);
}

$Types* BasicJavacTask::getTypes() {
	if (this->context == nullptr) {
		$throwNew($IllegalStateException);
	}
	return $JavacTypes::instance(this->context);
}

void BasicJavacTask::addModules($Iterable* moduleNames) {
	$throwNew($IllegalStateException);
}

void BasicJavacTask::setProcessors($Iterable* processors) {
	$throwNew($IllegalStateException);
}

void BasicJavacTask::setLocale($Locale* locale) {
	$throwNew($IllegalStateException);
}

$Object* BasicJavacTask::call() {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

$Context* BasicJavacTask::getContext() {
	return this->context;
}

void BasicJavacTask::initPlugins($Set* pluginOpts) {
	$useLocalCurrentObjectStackCache();
	$load($PlatformDescription);
	$var($PlatformDescription, platformProvider, $cast($PlatformDescription, $nc(this->context)->get($PlatformDescription::class$)));
	if (platformProvider != nullptr) {
		{
			$var($Iterator, i$, $nc($(platformProvider->getPlugins()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($PlatformDescription$PluginInfo, pluginDesc, $cast($PlatformDescription$PluginInfo, i$->next()));
				{
					$var($1List, options, $nc($($nc($($nc($($nc($($nc(pluginDesc)->getOptions()))->entrySet()))->stream()))->map(static_cast<$Function*>($$new(BasicJavacTask$$Lambda$lambda$initPlugins$0)))))->toList());
					try {
						$var($Plugin, var$0, $cast($Plugin, pluginDesc->getPlugin()));
						initPlugin(var$0, $fcast($StringArray, $($nc(options)->toArray($$new($StringArray, options->size())))));
					} catch ($RuntimeException& ex) {
						$throwNew($PropagatedException, ex);
					}
				}
			}
		}
	}
	$var($Set, pluginsToCall, $new($LinkedHashSet, static_cast<$Collection*>(pluginOpts)));
	$var($JavacProcessingEnvironment, pEnv, $JavacProcessingEnvironment::instance(this->context));
	$load($Plugin);
	$var($ServiceLoader, sl, $nc(pEnv)->getServiceLoader($Plugin::class$));
	$var($Set, autoStart, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(sl)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Plugin, plugin, $cast($Plugin, i$->next()));
			{
				if ($nc(plugin)->autoStart()) {
					autoStart->add(plugin);
				}
				{
					$var($Iterator, i$, pluginsToCall->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($List, p, $cast($List, i$->next()));
						{
							if ($nc($($nc(plugin)->getName()))->equals($nc(p)->head)) {
								pluginsToCall->remove(p);
								autoStart->remove(plugin);
								try {
									initPlugin(plugin, $fcast($StringArray, $($nc($nc(p)->tail)->toArray($$new($StringArray, $nc(p->tail)->size())))));
								} catch ($RuntimeException& ex) {
									$throwNew($PropagatedException, ex);
								}
								break;
							}
						}
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, pluginsToCall->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, p, $cast($List, i$->next()));
			{
				$nc($($Log::instance(this->context)))->error($($CompilerProperties$Errors::PluginNotFound($cast($String, $nc(p)->head))));
			}
		}
	}
	{
		$var($Iterator, i$, autoStart->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Plugin, plugin, $cast($Plugin, i$->next()));
			{
				try {
					initPlugin(plugin, $$new($StringArray, 0));
				} catch ($RuntimeException& ex) {
					$throwNew($PropagatedException, ex);
				}
			}
		}
	}
}

void BasicJavacTask::initPlugin($Plugin* p, $StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Module, m, $nc($of(p))->getClass()->getModule());
	bool var$0 = $nc(m)->isNamed();
	if (var$0 && $nc(this->options)->isSet("accessInternalAPI"_s)) {
		$ModuleHelper::addExports($($of(this)->getClass()->getModule()), m);
	}
	p->init(this, args);
}

void BasicJavacTask::initDocLint($List* docLintOpts) {
	$useLocalCurrentObjectStackCache();
	if ($nc(docLintOpts)->isEmpty()) {
		return;
	}
	try {
		$nc($($DocLint::newDocLint()))->init(this, $fcast($StringArray, $($nc(docLintOpts)->toArray($$new($StringArray, docLintOpts->size())))));
		$nc($($JavaCompiler::instance(this->context)))->keepComments$ = true;
	} catch ($IllegalStateException& e) {
		$init($CompilerProperties$Warnings);
		$nc($($Log::instance(this->context)))->warning($CompilerProperties$Warnings::DoclintNotAvailable);
	}
}

$String* BasicJavacTask::lambda$initPlugins$0($Map$Entry* e) {
	$init(BasicJavacTask);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$cast($String, $($nc(e)->getKey())), "="_s}));
	return $concat(var$0, $cast($String, $(e->getValue())));
}

BasicJavacTask::BasicJavacTask() {
}

$Class* BasicJavacTask::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BasicJavacTask$$Lambda$lambda$initPlugins$0::classInfo$.name)) {
			return BasicJavacTask$$Lambda$lambda$initPlugins$0::load$(name, initialize);
		}
	}
	$loadClass(BasicJavacTask, name, initialize, &_BasicJavacTask_ClassInfo_, allocate$BasicJavacTask);
	return class$;
}

$Class* BasicJavacTask::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com