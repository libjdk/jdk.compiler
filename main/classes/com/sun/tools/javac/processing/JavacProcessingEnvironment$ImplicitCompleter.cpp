#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ImplicitCompleter.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$ImplicitCompleter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacProcessingEnvironment$ImplicitCompleter, this$0)},
	{"topLevel", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PRIVATE | $FINAL, $field(JavacProcessingEnvironment$ImplicitCompleter, topLevel)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$ImplicitCompleter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$ImplicitCompleter::*)($JavacProcessingEnvironment*,$JCTree$JCCompilationUnit*)>(&JavacProcessingEnvironment$ImplicitCompleter::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$ImplicitCompleter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ImplicitCompleter", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ImplicitCompleter", 0},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacProcessingEnvironment$ImplicitCompleter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$ImplicitCompleter",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	_JavacProcessingEnvironment$ImplicitCompleter_FieldInfo_,
	_JavacProcessingEnvironment$ImplicitCompleter_MethodInfo_,
	nullptr,
	nullptr,
	_JavacProcessingEnvironment$ImplicitCompleter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$ImplicitCompleter($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$ImplicitCompleter));
}

void JavacProcessingEnvironment$ImplicitCompleter::init$($JavacProcessingEnvironment* this$0, $JCTree$JCCompilationUnit* topLevel) {
	$set(this, this$0, this$0);
	$set(this, topLevel, topLevel);
}

void JavacProcessingEnvironment$ImplicitCompleter::complete($Symbol* sym) {
	$nc(this->this$0->compiler)->readSourceFile(this->topLevel, $cast($Symbol$ClassSymbol, sym));
}

JavacProcessingEnvironment$ImplicitCompleter::JavacProcessingEnvironment$ImplicitCompleter() {
}

$Class* JavacProcessingEnvironment$ImplicitCompleter::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$ImplicitCompleter, name, initialize, &_JavacProcessingEnvironment$ImplicitCompleter_ClassInfo_, allocate$JavacProcessingEnvironment$ImplicitCompleter);
	return class$;
}

$Class* JavacProcessingEnvironment$ImplicitCompleter::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com