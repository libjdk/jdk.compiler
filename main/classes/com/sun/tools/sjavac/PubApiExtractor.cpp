#include <com/sun/tools/sjavac/PubApiExtractor.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/api/JavacTool.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/sjavac/comp/PubapiVisitor.h>
#include <com/sun/tools/sjavac/comp/SmartFileManager.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Iterable.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $JavacTask = ::com::sun::source::util::JavacTask;
using $JavacTool = ::com::sun::tools::javac::api::JavacTool;
using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Context = ::com::sun::tools::javac::util::Context;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $PubapiVisitor = ::com::sun::tools::sjavac::comp::PubapiVisitor;
using $SmartFileManager = ::com::sun::tools::sjavac::comp::SmartFileManager;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Element = ::javax::lang::model::element::Element;
using $AbstractElementVisitor6 = ::javax::lang::model::util::AbstractElementVisitor6;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$FieldInfo _PubApiExtractor_FieldInfo_[] = {
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $FINAL, $field(PubApiExtractor, context)},
	{"task", "Ljavax/tools/JavaCompiler$CompilationTask;", nullptr, $FINAL, $field(PubApiExtractor, task)},
	{"fileManager", "Lcom/sun/tools/sjavac/comp/SmartFileManager;", nullptr, $FINAL, $field(PubApiExtractor, fileManager)},
	{}
};

$MethodInfo _PubApiExtractor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC, $method(static_cast<void(PubApiExtractor::*)($Options*)>(&PubApiExtractor::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPubApi", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PubApiExtractor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.PubApiExtractor",
	"java.lang.Object",
	nullptr,
	_PubApiExtractor_FieldInfo_,
	_PubApiExtractor_MethodInfo_
};

$Object* allocate$PubApiExtractor($Class* clazz) {
	return $of($alloc(PubApiExtractor));
}

void PubApiExtractor::init$($Options* options) {
	$useLocalCurrentObjectStackCache();
	$var($JavacTool, compiler, $JavacTool::create());
	$set(this, fileManager, $new($SmartFileManager, $($nc(compiler)->getStandardFileManager(nullptr, nullptr, nullptr))));
	$set(this, context, $new($Context));
	$var($StringArray, args, $nc(options)->prepJavacArgs());
	$var($Writer, var$0, static_cast<$Writer*>($new($PrintWriter, static_cast<$OutputStream*>($System::err))));
	$var($JavaFileManager, var$1, static_cast<$JavaFileManager*>(this->fileManager));
	$set(this, task, $nc(compiler)->getTask(var$0, var$1, nullptr, $($Arrays::asList(args)), nullptr, nullptr, this->context));
	$JavaCompiler::instance(this->context);
}

$PubApi* PubApiExtractor::getPubApi($String* fullyQualifiedClassName) {
	$useLocalCurrentObjectStackCache();
	$var($Symtab, syms, $Symtab::instance(this->context));
	$var($ClassFinder, cr, $ClassFinder::instance(this->context));
	$var($Names, ns, $Names::instance(this->context));
	$var($Name, n, $nc(ns)->fromString(fullyQualifiedClassName));
	$var($Symbol$ClassSymbol, cs, $nc(cr)->loadClass($($nc(syms)->inferModule($($Convert::packagePart(n)))), n));
	$var($PubapiVisitor, v, $new($PubapiVisitor));
	v->visit(static_cast<$Element*>(static_cast<$Symbol*>(static_cast<$Symbol$TypeSymbol*>(cs))));
	return v->getCollectedPubApi();
}

void PubApiExtractor::close() {
	$nc(this->fileManager)->close();
}

PubApiExtractor::PubApiExtractor() {
}

$Class* PubApiExtractor::load$($String* name, bool initialize) {
	$loadClass(PubApiExtractor, name, initialize, &_PubApiExtractor_ClassInfo_, allocate$PubApiExtractor);
	return class$;
}

$Class* PubApiExtractor::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com