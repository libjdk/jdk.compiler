#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog.h>

#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog$1.h>
#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/DiagnosticListener.h>
#include <jcpp.h>

using $JavacTaskPool$ReusableContext = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext;
using $JavacTaskPool$ReusableContext$ReusableLog$1 = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$ReusableLog$1;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $Log = ::com::sun::tools::javac::util::Log;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog : public $Context$Factory {
	$class(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$() {
	}
	virtual $Object* make($Context* context) override {
		 return $of($new(JavacTaskPool$ReusableContext$ReusableLog, context));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::*)()>(&JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::init$))},
	{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog",
	"java.lang.Object",
	"com.sun.tools.javac.util.Context$Factory",
	nullptr,
	methodInfos
};
$Class* JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::class$ = nullptr;

$FieldInfo _JavacTaskPool$ReusableContext$ReusableLog_FieldInfo_[] = {
	{"factory", "Lcom/sun/tools/javac/util/Context$Factory;", "Lcom/sun/tools/javac/util/Context$Factory<Lcom/sun/tools/javac/util/Log;>;", $STATIC | $FINAL, $staticField(JavacTaskPool$ReusableContext$ReusableLog, factory)},
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, 0, $field(JavacTaskPool$ReusableContext$ReusableLog, context)},
	{}
};

$MethodInfo _JavacTaskPool$ReusableContext$ReusableLog_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, 0, $method(static_cast<void(JavacTaskPool$ReusableContext$ReusableLog::*)($Context*)>(&JavacTaskPool$ReusableContext$ReusableLog::init$))},
	{"clear", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _JavacTaskPool$ReusableContext$ReusableLog_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog", "com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "ReusableLog", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTaskPool$ReusableContext$ReusableLog_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog",
	"com.sun.tools.javac.util.Log",
	nullptr,
	_JavacTaskPool$ReusableContext$ReusableLog_FieldInfo_,
	_JavacTaskPool$ReusableContext$ReusableLog_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTaskPool$ReusableContext$ReusableLog_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskPool"
};

$Object* allocate$JavacTaskPool$ReusableContext$ReusableLog($Class* clazz) {
	return $of($alloc(JavacTaskPool$ReusableContext$ReusableLog));
}

$Context$Factory* JavacTaskPool$ReusableContext$ReusableLog::factory = nullptr;

void JavacTaskPool$ReusableContext$ReusableLog::init$($Context* context) {
	$Log::init$(context);
	$set(this, context, context);
}

void JavacTaskPool$ReusableContext$ReusableLog::clear() {
	$nc(this->recorded)->clear();
	$nc(this->sourceMap)->clear();
	this->nerrors = 0;
	this->nwarnings = 0;
	$set(this, diagListener, $new($JavacTaskPool$ReusableContext$ReusableLog$1, this));
}

void clinit$JavacTaskPool$ReusableContext$ReusableLog($Class* class$) {
	$assignStatic(JavacTaskPool$ReusableContext$ReusableLog::factory, static_cast<$Context$Factory*>($new(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog)));
}

JavacTaskPool$ReusableContext$ReusableLog::JavacTaskPool$ReusableContext$ReusableLog() {
}

$Class* JavacTaskPool$ReusableContext$ReusableLog::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::classInfo$.name)) {
			return JavacTaskPool$ReusableContext$ReusableLog$$Lambda$ReusableLog::load$(name, initialize);
		}
	}
	$loadClass(JavacTaskPool$ReusableContext$ReusableLog, name, initialize, &_JavacTaskPool$ReusableContext$ReusableLog_ClassInfo_, clinit$JavacTaskPool$ReusableContext$ReusableLog, allocate$JavacTaskPool$ReusableContext$ReusableLog);
	return class$;
}

$Class* JavacTaskPool$ReusableContext$ReusableLog::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com