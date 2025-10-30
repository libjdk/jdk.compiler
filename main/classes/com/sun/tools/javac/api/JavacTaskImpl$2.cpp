#include <com/sun/tools/javac/api/JavacTaskImpl$2.h>

#include <com/sun/tools/javac/api/JavacTaskImpl$Filter.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/AbstractQueue.h>
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
using $AbstractQueue = ::java::util::AbstractQueue;
using $Queue = ::java::util::Queue;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTaskImpl$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTaskImpl;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTaskImpl$2, this$0)},
	{"val$results", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTaskImpl$2, val$results)},
	{}
};

$MethodInfo _JavacTaskImpl$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskImpl;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(static_cast<void(JavacTaskImpl$2::*)($JavacTaskImpl*,$ListBuffer*)>(&JavacTaskImpl$2::init$))},
	{"process", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacTaskImpl$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTaskImpl",
	"generate",
	"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
};

$InnerClassInfo _JavacTaskImpl$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskImpl$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTaskImpl$Filter", "com.sun.tools.javac.api.JavacTaskImpl", "Filter", $ABSTRACT},
	{}
};

$ClassInfo _JavacTaskImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTaskImpl$2",
	"com.sun.tools.javac.api.JavacTaskImpl$Filter",
	nullptr,
	_JavacTaskImpl$2_FieldInfo_,
	_JavacTaskImpl$2_MethodInfo_,
	nullptr,
	&_JavacTaskImpl$2_EnclosingMethodInfo_,
	_JavacTaskImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskImpl"
};

$Object* allocate$JavacTaskImpl$2($Class* clazz) {
	return $of($alloc(JavacTaskImpl$2));
}

void JavacTaskImpl$2::init$($JavacTaskImpl* this$0, $ListBuffer* val$results) {
	$set(this, this$0, this$0);
	$set(this, val$results, val$results);
	$JavacTaskImpl$Filter::init$(this$0);
}

void JavacTaskImpl$2::process($Env* env) {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->compiler)->generate($($nc(this->this$0->compiler)->desugar($($ListBuffer::of(env)))), this->val$results);
}

JavacTaskImpl$2::JavacTaskImpl$2() {
}

$Class* JavacTaskImpl$2::load$($String* name, bool initialize) {
	$loadClass(JavacTaskImpl$2, name, initialize, &_JavacTaskImpl$2_ClassInfo_, allocate$JavacTaskImpl$2);
	return class$;
}

$Class* JavacTaskImpl$2::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com