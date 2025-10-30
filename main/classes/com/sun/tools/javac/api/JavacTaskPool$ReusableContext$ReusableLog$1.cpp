#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog$1.h>

#include <com/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog.h>
#include <com/sun/tools/javac/util/Context.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/DiagnosticListener.h>
#include <jcpp.h>

using $JavacTaskPool$ReusableContext$ReusableLog = ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext$ReusableLog;
using $Context = ::com::sun::tools::javac::util::Context;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Diagnostic = ::javax::tools::Diagnostic;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTaskPool$ReusableContext$ReusableLog$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTaskPool$ReusableContext$ReusableLog$1, this$0)},
	{"cachedListener", "Ljavax/tools/DiagnosticListener;", "Ljavax/tools/DiagnosticListener<Ljavax/tools/JavaFileObject;>;", 0, $field(JavacTaskPool$ReusableContext$ReusableLog$1, cachedListener)},
	{}
};

$MethodInfo _JavacTaskPool$ReusableContext$ReusableLog$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskPool$ReusableContext$ReusableLog;)V", nullptr, 0, $method(static_cast<void(JavacTaskPool$ReusableContext$ReusableLog$1::*)($JavacTaskPool$ReusableContext$ReusableLog*)>(&JavacTaskPool$ReusableContext$ReusableLog$1::init$))},
	{"report", "(Ljavax/tools/Diagnostic;)V", "(Ljavax/tools/Diagnostic<+Ljavax/tools/JavaFileObject;>;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacTaskPool$ReusableContext$ReusableLog$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog",
	"clear",
	"()V"
};

$InnerClassInfo _JavacTaskPool$ReusableContext$ReusableLog$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "com.sun.tools.javac.api.JavacTaskPool", "ReusableContext", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog", "com.sun.tools.javac.api.JavacTaskPool$ReusableContext", "ReusableLog", $STATIC},
	{"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTaskPool$ReusableContext$ReusableLog$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog$1",
	"java.lang.Object",
	"javax.tools.DiagnosticListener",
	_JavacTaskPool$ReusableContext$ReusableLog$1_FieldInfo_,
	_JavacTaskPool$ReusableContext$ReusableLog$1_MethodInfo_,
	"Ljava/lang/Object;Ljavax/tools/DiagnosticListener<Ljavax/tools/JavaFileObject;>;",
	&_JavacTaskPool$ReusableContext$ReusableLog$1_EnclosingMethodInfo_,
	_JavacTaskPool$ReusableContext$ReusableLog$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskPool"
};

$Object* allocate$JavacTaskPool$ReusableContext$ReusableLog$1($Class* clazz) {
	return $of($alloc(JavacTaskPool$ReusableContext$ReusableLog$1));
}

void JavacTaskPool$ReusableContext$ReusableLog$1::init$($JavacTaskPool$ReusableContext$ReusableLog* this$0) {
	$set(this, this$0, this$0);
}

void JavacTaskPool$ReusableContext$ReusableLog$1::report($Diagnostic* diagnostic) {
	if (this->cachedListener == nullptr) {
		$load($DiagnosticListener);
		$set(this, cachedListener, $cast($DiagnosticListener, $nc(this->this$0->context)->get($DiagnosticListener::class$)));
	}
	$nc(this->cachedListener)->report(diagnostic);
}

JavacTaskPool$ReusableContext$ReusableLog$1::JavacTaskPool$ReusableContext$ReusableLog$1() {
}

$Class* JavacTaskPool$ReusableContext$ReusableLog$1::load$($String* name, bool initialize) {
	$loadClass(JavacTaskPool$ReusableContext$ReusableLog$1, name, initialize, &_JavacTaskPool$ReusableContext$ReusableLog$1_ClassInfo_, allocate$JavacTaskPool$ReusableContext$ReusableLog$1);
	return class$;
}

$Class* JavacTaskPool$ReusableContext$ReusableLog$1::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com