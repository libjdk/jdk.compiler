#include <com/sun/tools/javac/api/JavacTaskPool.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/api/BasicJavacTask.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext.h>
#include <com/sun/tools/javac/api/JavacTaskPool$Worker.h>
#include <com/sun/tools/javac/api/JavacTool.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayDeque.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Deque.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Queue.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaFileManager.h>
#include <jcpp.h>

#undef EMPTY_QUEUE

using $JavacTask = ::com::sun::source::util::JavacTask;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $BasicJavacTask = ::com::sun::tools::javac::api::BasicJavacTask;
using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $JavacTaskPool$ReusableContext = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext;
using $JavacTaskPool$Worker = ::com::sun::tools::javac::api::JavacTaskPool$Worker;
using $JavacTool = ::com::sun::tools::javac::api::JavacTool;
using $Context = ::com::sun::tools::javac::util::Context;
using $Log = ::com::sun::tools::javac::util::Log;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayDeque = ::java::util::ArrayDeque;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Deque = ::java::util::Deque;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Queue = ::java::util::Queue;
using $Spliterator = ::java::util::Spliterator;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTaskPool$$Lambda$ArrayList : public $Supplier {
	$class(JavacTaskPool$$Lambda$ArrayList, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($ArrayList));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskPool$$Lambda$ArrayList>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacTaskPool$$Lambda$ArrayList::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskPool$$Lambda$ArrayList::*)()>(&JavacTaskPool$$Lambda$ArrayList::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskPool$$Lambda$ArrayList::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskPool$$Lambda$ArrayList",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* JavacTaskPool$$Lambda$ArrayList::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$$Lambda$ArrayList, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskPool$$Lambda$ArrayList::class$ = nullptr;

class JavacTaskPool$$Lambda$stream$1 : public $Function {
	$class(JavacTaskPool$$Lambda$stream$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Collection, inst$)->stream());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskPool$$Lambda$stream$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacTaskPool$$Lambda$stream$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskPool$$Lambda$stream$1::*)()>(&JavacTaskPool$$Lambda$stream$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskPool$$Lambda$stream$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskPool$$Lambda$stream$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacTaskPool$$Lambda$stream$1::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$$Lambda$stream$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskPool$$Lambda$stream$1::class$ = nullptr;

class JavacTaskPool$$Lambda$lambda$getTask$0$2 : public $Comparator {
	$class(JavacTaskPool$$Lambda$lambda$getTask$0$2, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* c1, Object$* c2) override {
		 return JavacTaskPool::lambda$getTask$0($cast($JavacTaskPool$ReusableContext, c1), $cast($JavacTaskPool$ReusableContext, c2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskPool$$Lambda$lambda$getTask$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacTaskPool$$Lambda$lambda$getTask$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskPool$$Lambda$lambda$getTask$0$2::*)()>(&JavacTaskPool$$Lambda$lambda$getTask$0$2::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskPool$$Lambda$lambda$getTask$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskPool$$Lambda$lambda$getTask$0$2",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	methodInfos
};
$Class* JavacTaskPool$$Lambda$lambda$getTask$0$2::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$$Lambda$lambda$getTask$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskPool$$Lambda$lambda$getTask$0$2::class$ = nullptr;

class JavacTaskPool$$Lambda$lambda$getTask$1$3 : public $Function {
	$class(JavacTaskPool$$Lambda$lambda$getTask$1$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* x) override {
		 return $of(JavacTaskPool::lambda$getTask$1($cast($List, x)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskPool$$Lambda$lambda$getTask$1$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacTaskPool$$Lambda$lambda$getTask$1$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskPool$$Lambda$lambda$getTask$1$3::*)()>(&JavacTaskPool$$Lambda$lambda$getTask$1$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskPool$$Lambda$lambda$getTask$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskPool$$Lambda$lambda$getTask$1$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacTaskPool$$Lambda$lambda$getTask$1$3::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$$Lambda$lambda$getTask$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskPool$$Lambda$lambda$getTask$1$3::class$ = nullptr;

$FieldInfo _JavacTaskPool_FieldInfo_[] = {
	{"systemProvider", "Lcom/sun/tools/javac/api/JavacTool;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacTaskPool, systemProvider)},
	{"EMPTY_QUEUE", "Ljava/util/Queue;", "Ljava/util/Queue<Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavacTaskPool, EMPTY_QUEUE)},
	{"maxPoolSize", "I", nullptr, $PRIVATE | $FINAL, $field(JavacTaskPool, maxPoolSize)},
	{"options2Contexts", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/List<Ljava/lang/String;>;Ljava/util/Queue<Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext;>;>;", $PRIVATE | $FINAL, $field(JavacTaskPool, options2Contexts)},
	{"id", "I", nullptr, $PRIVATE, $field(JavacTaskPool, id)},
	{"statReused", "I", nullptr, $PRIVATE, $field(JavacTaskPool, statReused)},
	{"statNew", "I", nullptr, $PRIVATE, $field(JavacTaskPool, statNew)},
	{"statPolluted", "I", nullptr, $PRIVATE, $field(JavacTaskPool, statPolluted)},
	{"statRemoved", "I", nullptr, $PRIVATE, $field(JavacTaskPool, statRemoved)},
	{}
};

$MethodInfo _JavacTaskPool_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskPool::*)(int32_t)>(&JavacTaskPool::init$))},
	{"cacheSize", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(JavacTaskPool::*)()>(&JavacTaskPool::cacheSize))},
	{"getTask", "(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener;Ljava/lang/Iterable;Ljava/lang/Iterable;Ljava/lang/Iterable;Lcom/sun/tools/javac/api/JavacTaskPool$Worker;)Ljava/lang/Object;", "<Z:Ljava/lang/Object;>(Ljava/io/Writer;Ljavax/tools/JavaFileManager;Ljavax/tools/DiagnosticListener<-Ljavax/tools/JavaFileObject;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;Lcom/sun/tools/javac/api/JavacTaskPool$Worker<TZ;>;)TZ;", $PUBLIC},
	{"lambda$getTask$0", "(Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext;Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($JavacTaskPool$ReusableContext*,$JavacTaskPool$ReusableContext*)>(&JavacTaskPool::lambda$getTask$0))},
	{"lambda$getTask$1", "(Ljava/util/List;)Ljava/util/Queue;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Queue*(*)($List*)>(&JavacTaskPool::lambda$getTask$1))},
	{"printStatistics", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacTaskPool_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$Worker", "com.sun.tools.javac.api.JavacTaskPool", "Worker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacTaskPool_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskPool",
	"java.lang.Object",
	nullptr,
	_JavacTaskPool_FieldInfo_,
	_JavacTaskPool_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTaskPool_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext,com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog,com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$1,com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler,com.sun.tools.javac.api.JavacTaskPool$ReusableContext$1,com.sun.tools.javac.api.JavacTaskPool$Worker"
};

$Object* allocate$JavacTaskPool($Class* clazz) {
	return $of($alloc(JavacTaskPool));
}

$JavacTool* JavacTaskPool::systemProvider = nullptr;
$Queue* JavacTaskPool::EMPTY_QUEUE = nullptr;

void JavacTaskPool::init$(int32_t maxPoolSize) {
	$set(this, options2Contexts, $new($HashMap));
	this->statReused = 0;
	this->statNew = 0;
	this->statPolluted = 0;
	this->statRemoved = 0;
	this->maxPoolSize = maxPoolSize;
}

$Object* JavacTaskPool::getTask($Writer* out, $JavaFileManager* fileManager, $DiagnosticListener* diagnosticListener, $Iterable* options, $Iterable* classes, $Iterable* compilationUnits, $JavacTaskPool$Worker* worker) {
	$useLocalCurrentObjectStackCache();
	$var($List, opts, $cast($List, $nc($($StreamSupport::stream($($nc(options)->spliterator()), false)))->collect($($Collectors::toCollection(static_cast<$Supplier*>($$new(JavacTaskPool$$Lambda$ArrayList)))))));
	$var($JavacTaskPool$ReusableContext, ctx, nullptr);
	$synchronized(this) {
		$var($Queue, cached, $cast($Queue, $nc(this->options2Contexts)->getOrDefault(opts, JavacTaskPool::EMPTY_QUEUE)));
		if ($nc(cached)->isEmpty()) {
			$assign(ctx, $new($JavacTaskPool$ReusableContext, opts));
			++this->statNew;
		} else {
			$assign(ctx, $cast($JavacTaskPool$ReusableContext, cached->remove()));
			++this->statReused;
		}
	}
	++$nc(ctx)->useCount;
	$var($JavacTaskImpl, task, $cast($JavacTaskImpl, $nc(JavacTaskPool::systemProvider)->getTask(out, fileManager, diagnosticListener, opts, classes, compilationUnits, ctx)));
	$nc(task)->addTaskListener(ctx);
	if (out != nullptr) {
		$nc($($Log::instance(ctx)))->setWriters($$new($PrintWriter, out, true));
	}
	$var($Object, result, $nc(worker)->withTask(task));
	ctx->clear();
	if (ctx->polluted) {
		++this->statPolluted;
	} else {
		task->cleanup();
		$synchronized(this) {
			while (cacheSize() + 1 > this->maxPoolSize) {
				$var($JavacTaskPool$ReusableContext, toRemove, $cast($JavacTaskPool$ReusableContext, $nc($($nc($($nc($($nc($($nc($($nc(this->options2Contexts)->values()))->stream()))->flatMap(static_cast<$Function*>($$new(JavacTaskPool$$Lambda$stream$1)))))->sorted(static_cast<$Comparator*>($$new(JavacTaskPool$$Lambda$lambda$getTask$0$2)))))->findFirst()))->get()));
				$nc(($cast($Queue, $($nc(this->options2Contexts)->get($nc(toRemove)->arguments)))))->remove(toRemove);
				++this->statRemoved;
			}
			$nc(($cast($Queue, $($nc(this->options2Contexts)->computeIfAbsent(ctx->arguments, static_cast<$Function*>($$new(JavacTaskPool$$Lambda$lambda$getTask$1$3)))))))->add(ctx);
			ctx->timeStamp = this->id++;
		}
	}
	return $of(result);
}

int64_t JavacTaskPool::cacheSize() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc($($nc(this->options2Contexts)->values()))->stream()))->flatMap(static_cast<$Function*>($$new(JavacTaskPool$$Lambda$stream$1)))))->count();
}

void JavacTaskPool::printStatistics($PrintStream* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->println($$str({$$str(this->statReused), " reused Contexts"_s}));
	out->println($$str({$$str(this->statNew), " newly created Contexts"_s}));
	out->println($$str({$$str(this->statPolluted), " polluted Contexts"_s}));
	out->println($$str({$$str(this->statRemoved), " removed Contexts"_s}));
}

$Queue* JavacTaskPool::lambda$getTask$1($List* x) {
	$init(JavacTaskPool);
	return $new($ArrayDeque);
}

int32_t JavacTaskPool::lambda$getTask$0($JavacTaskPool$ReusableContext* c1, $JavacTaskPool$ReusableContext* c2) {
	$init(JavacTaskPool);
	return $nc(c1)->timeStamp < $nc(c2)->timeStamp ? -1 : 1;
}

void clinit$JavacTaskPool($Class* class$) {
	$assignStatic(JavacTaskPool::systemProvider, $JavacTool::create());
	$assignStatic(JavacTaskPool::EMPTY_QUEUE, $new($ArrayDeque, 0));
}

JavacTaskPool::JavacTaskPool() {
}

$Class* JavacTaskPool::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacTaskPool$$Lambda$ArrayList::classInfo$.name)) {
			return JavacTaskPool$$Lambda$ArrayList::load$(name, initialize);
		}
		if (name->equals(JavacTaskPool$$Lambda$stream$1::classInfo$.name)) {
			return JavacTaskPool$$Lambda$stream$1::load$(name, initialize);
		}
		if (name->equals(JavacTaskPool$$Lambda$lambda$getTask$0$2::classInfo$.name)) {
			return JavacTaskPool$$Lambda$lambda$getTask$0$2::load$(name, initialize);
		}
		if (name->equals(JavacTaskPool$$Lambda$lambda$getTask$1$3::classInfo$.name)) {
			return JavacTaskPool$$Lambda$lambda$getTask$1$3::load$(name, initialize);
		}
	}
	$loadClass(JavacTaskPool, name, initialize, &_JavacTaskPool_ClassInfo_, clinit$JavacTaskPool, allocate$JavacTaskPool);
	return class$;
}

$Class* JavacTaskPool::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com