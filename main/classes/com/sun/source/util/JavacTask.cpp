#include <com/sun/source/util/JavacTask.h>

#include <com/sun/source/util/ParameterNameProvider.h>
#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/api/BasicJavacTask.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/lang/Iterable.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/lang/model/util/Types.h>
#include <jcpp.h>

using $ParameterNameProvider = ::com::sun::source::util::ParameterNameProvider;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $BasicJavacTask = ::com::sun::tools::javac::api::BasicJavacTask;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $Context = ::com::sun::tools::javac::util::Context;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $Elements = ::javax::lang::model::util::Elements;
using $Types = ::javax::lang::model::util::Types;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _JavacTask_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacTask::*)()>(&JavacTask::init$))},
	{"addTaskListener", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"analyze", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"generate", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getElements", "()Ljavax/lang/model/util/Elements;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeMirror", "(Ljava/lang/Iterable;)Ljavax/lang/model/type/TypeMirror;", "(Ljava/lang/Iterable<+Lcom/sun/source/tree/Tree;>;)Ljavax/lang/model/type/TypeMirror;", $PUBLIC | $ABSTRACT},
	{"getTypes", "()Ljavax/lang/model/util/Types;", nullptr, $PUBLIC | $ABSTRACT},
	{"instance", "(Ljavax/annotation/processing/ProcessingEnvironment;)Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacTask*(*)($ProcessingEnvironment*)>(&JavacTask::instance))},
	{"parse", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Lcom/sun/source/tree/CompilationUnitTree;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"removeTaskListener", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setParameterNameProvider", "(Lcom/sun/source/util/ParameterNameProvider;)V", nullptr, $PUBLIC},
	{"setTaskListener", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavacTask_InnerClassesInfo_[] = {
	{"javax.tools.JavaCompiler$CompilationTask", "javax.tools.JavaCompiler", "CompilationTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacTask_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.source.util.JavacTask",
	"java.lang.Object",
	"javax.tools.JavaCompiler$CompilationTask",
	nullptr,
	_JavacTask_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTask_InnerClassesInfo_
};

$Object* allocate$JavacTask($Class* clazz) {
	return $of($alloc(JavacTask));
}

void JavacTask::init$() {
}

JavacTask* JavacTask::instance($ProcessingEnvironment* processingEnvironment) {
	$init(JavacTask);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc($of(processingEnvironment))->getClass()->getName()))->equals("com.sun.tools.javac.processing.JavacProcessingEnvironment"_s)) {
		$throwNew($IllegalArgumentException);
	}
	$var($Context, c, $nc(($cast($JavacProcessingEnvironment, processingEnvironment)))->getContext());
	$var(JavacTask, t, $cast(JavacTask, $nc(c)->get(JavacTask::class$)));
	return (t != nullptr) ? t : static_cast<JavacTask*>($new($BasicJavacTask, c, true));
}

void JavacTask::setParameterNameProvider($ParameterNameProvider* provider) {
}

JavacTask::JavacTask() {
}

$Class* JavacTask::load$($String* name, bool initialize) {
	$loadClass(JavacTask, name, initialize, &_JavacTask_ClassInfo_, allocate$JavacTask);
	return class$;
}

$Class* JavacTask::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com