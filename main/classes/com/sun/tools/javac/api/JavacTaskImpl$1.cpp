#include <com/sun/tools/javac/api/JavacTaskImpl$1.h>

#include <com/sun/tools/javac/api/JavacTaskImpl$Filter.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Queue.h>
#include <jcpp.h>

using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $JavacTaskImpl$Filter = ::com::sun::tools::javac::api::JavacTaskImpl$Filter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Queue = ::java::util::Queue;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTaskImpl$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTaskImpl;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTaskImpl$1, this$0)},
	{"val$results", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTaskImpl$1, val$results)},
	{}
};

$MethodInfo _JavacTaskImpl$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskImpl;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(static_cast<void(JavacTaskImpl$1::*)($JavacTaskImpl*,$ListBuffer*)>(&JavacTaskImpl$1::init$))},
	{"process", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacTaskImpl$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTaskImpl",
	"analyze",
	"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
};

$InnerClassInfo _JavacTaskImpl$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskImpl$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTaskImpl$Filter", "com.sun.tools.javac.api.JavacTaskImpl", "Filter", $ABSTRACT},
	{}
};

$ClassInfo _JavacTaskImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskImpl$1",
	"com.sun.tools.javac.api.JavacTaskImpl$Filter",
	nullptr,
	_JavacTaskImpl$1_FieldInfo_,
	_JavacTaskImpl$1_MethodInfo_,
	nullptr,
	&_JavacTaskImpl$1_EnclosingMethodInfo_,
	_JavacTaskImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskImpl"
};

$Object* allocate$JavacTaskImpl$1($Class* clazz) {
	return $of($alloc(JavacTaskImpl$1));
}

void JavacTaskImpl$1::init$($JavacTaskImpl* this$0, $ListBuffer* val$results) {
	$set(this, this$0, this$0);
	$set(this, val$results, val$results);
	$JavacTaskImpl$Filter::init$(this$0);
}

void JavacTaskImpl$1::process($Env* env) {
	$useLocalCurrentObjectStackCache();
	this->this$0->handleFlowResults($($nc(this->this$0->compiler)->flow($($nc(this->this$0->compiler)->attribute(env)))), this->val$results);
}

JavacTaskImpl$1::JavacTaskImpl$1() {
}

$Class* JavacTaskImpl$1::load$($String* name, bool initialize) {
	$loadClass(JavacTaskImpl$1, name, initialize, &_JavacTaskImpl$1_ClassInfo_, allocate$JavacTaskImpl$1);
	return class$;
}

$Class* JavacTaskImpl$1::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com