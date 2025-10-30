#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableJavaCompiler.h>

#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $JavacTaskPool$ReusableContext = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler : public $Context$Factory {
	$class(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$() {
	}
	virtual $Object* make($Context* context) override {
		 return $of($new(JavacTaskPool$ReusableContext$ReusableJavaCompiler, context));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::*)()>(&JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::init$))},
	{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler",
	"java.lang.Object",
	"com.sun.tools.javac.util.Context$Factory",
	nullptr,
	methodInfos
};
$Class* JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::class$ = nullptr;

$FieldInfo _JavacTaskPool$ReusableContext$ReusableJavaCompiler_FieldInfo_[] = {
	{"factory", "Lcom/sun/tools/javac/util/Context$Factory;", "Lcom/sun/tools/javac/util/Context$Factory<Lcom/sun/tools/javac/main/JavaCompiler;>;", $STATIC | $FINAL, $staticField(JavacTaskPool$ReusableContext$ReusableJavaCompiler, factory)},
	{}
};

$MethodInfo _JavacTaskPool$ReusableContext$ReusableJavaCompiler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, 0, $method(static_cast<void(JavacTaskPool$ReusableContext$ReusableJavaCompiler::*)($Context*)>(&JavacTaskPool$ReusableContext$ReusableJavaCompiler::init$))},
	{"checkReusable", "()V", nullptr, $PROTECTED},
	{"clear", "()V", nullptr, 0},
	{"close", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacTaskPool$ReusableContext$ReusableJavaCompiler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler", "com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "ReusableJavaCompiler", $STATIC},
	{}
};

$ClassInfo _JavacTaskPool$ReusableContext$ReusableJavaCompiler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler",
	"com.sun.tools.javac.main.JavaCompiler",
	nullptr,
	_JavacTaskPool$ReusableContext$ReusableJavaCompiler_FieldInfo_,
	_JavacTaskPool$ReusableContext$ReusableJavaCompiler_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTaskPool$ReusableContext$ReusableJavaCompiler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskPool"
};

$Object* allocate$JavacTaskPool$ReusableContext$ReusableJavaCompiler($Class* clazz) {
	return $of($alloc(JavacTaskPool$ReusableContext$ReusableJavaCompiler));
}

$Context$Factory* JavacTaskPool$ReusableContext$ReusableJavaCompiler::factory = nullptr;

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::init$($Context* context) {
	$JavaCompiler::init$(context);
}

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::close() {
}

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::clear() {
	newRound();
}

void JavacTaskPool$ReusableContext$ReusableJavaCompiler::checkReusable() {
}

void clinit$JavacTaskPool$ReusableContext$ReusableJavaCompiler($Class* class$) {
	$assignStatic(JavacTaskPool$ReusableContext$ReusableJavaCompiler::factory, static_cast<$Context$Factory*>($new(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler)));
}

JavacTaskPool$ReusableContext$ReusableJavaCompiler::JavacTaskPool$ReusableContext$ReusableJavaCompiler() {
}

$Class* JavacTaskPool$ReusableContext$ReusableJavaCompiler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::classInfo$.name)) {
			return JavacTaskPool$ReusableContext$ReusableJavaCompiler$$Lambda$ReusableJavaCompiler::load$(name, initialize);
		}
	}
	$loadClass(JavacTaskPool$ReusableContext$ReusableJavaCompiler, name, initialize, &_JavacTaskPool$ReusableContext$ReusableJavaCompiler_ClassInfo_, clinit$JavacTaskPool$ReusableContext$ReusableJavaCompiler, allocate$JavacTaskPool$ReusableContext$ReusableJavaCompiler);
	return class$;
}

$Class* JavacTaskPool$ReusableContext$ReusableJavaCompiler::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com