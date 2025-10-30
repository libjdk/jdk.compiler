#include <com/sun/tools/javac/processing/JavacFiler.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/processing/JavacFiler$1.h>
#include <com/sun/tools/javac/processing/JavacFiler$FilerInputFileObject.h>
#include <com/sun/tools/javac/processing/JavacFiler$FilerOutputFileObject.h>
#include <com/sun/tools/javac/processing/JavacFiler$FilerOutputJavaFileObject.h>
#include <com/sun/tools/javac/processing/JavacFiler$Tuple3.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <javax/annotation/processing/Filer.h>
#include <javax/annotation/processing/FilerException.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef ALREADY_OPENED
#undef CLASS
#undef CLASS_OUTPUT
#undef DEFAULT_MODULE_FOR_CREATED_FILES
#undef NOT_FOR_READING
#undef NOT_FOR_WRITING
#undef PKG_INFO
#undef PROCESSING
#undef SOURCE
#undef SOURCE_OUTPUT
#undef STDERR

using $ElementArray = $Array<::javax::lang::model::element::Element>;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Option = ::com::sun::tools::javac::main::Option;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JavacFiler$1 = ::com::sun::tools::javac::processing::JavacFiler$1;
using $JavacFiler$FilerInputFileObject = ::com::sun::tools::javac::processing::JavacFiler$FilerInputFileObject;
using $JavacFiler$FilerOutputFileObject = ::com::sun::tools::javac::processing::JavacFiler$FilerOutputFileObject;
using $JavacFiler$FilerOutputJavaFileObject = ::com::sun::tools::javac::processing::JavacFiler$FilerOutputJavaFileObject;
using $JavacFiler$Tuple3 = ::com::sun::tools::javac::processing::JavacFiler$Tuple3;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Closeable = ::java::io::Closeable;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Filer = ::javax::annotation::processing::Filer;
using $FilerException = ::javax::annotation::processing::FilerException;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacFiler$$Lambda$lambda$closeFileObject$0 : public $Function {
	$class(JavacFiler$$Lambda$lambda$closeFileObject$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* m) override {
		 return $of(JavacFiler::lambda$closeFileObject$0($cast($Symbol$ModuleSymbol, m)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFiler$$Lambda$lambda$closeFileObject$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacFiler$$Lambda$lambda$closeFileObject$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacFiler$$Lambda$lambda$closeFileObject$0::*)()>(&JavacFiler$$Lambda$lambda$closeFileObject$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFiler$$Lambda$lambda$closeFileObject$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.JavacFiler$$Lambda$lambda$closeFileObject$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacFiler$$Lambda$lambda$closeFileObject$0::load$($String* name, bool initialize) {
	$loadClass(JavacFiler$$Lambda$lambda$closeFileObject$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFiler$$Lambda$lambda$closeFileObject$0::class$ = nullptr;

$FieldInfo _JavacFiler_FieldInfo_[] = {
	{"ALREADY_OPENED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacFiler, ALREADY_OPENED)},
	{"NOT_FOR_READING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacFiler, NOT_FOR_READING)},
	{"NOT_FOR_WRITING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacFiler, NOT_FOR_WRITING)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, 0, $field(JavacFiler, fileManager)},
	{"elementUtils", "Lcom/sun/tools/javac/model/JavacElements;", nullptr, 0, $field(JavacFiler, elementUtils)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, 0, $field(JavacFiler, log)},
	{"modules", "Lcom/sun/tools/javac/comp/Modules;", nullptr, 0, $field(JavacFiler, modules)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, 0, $field(JavacFiler, names)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(JavacFiler, syms)},
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, 0, $field(JavacFiler, context)},
	{"lastRound", "Z", nullptr, 0, $field(JavacFiler, lastRound)},
	{"lint", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacFiler, lint)},
	{"initialInputs", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/FileObject;>;", $PRIVATE | $FINAL, $field(JavacFiler, initialInputs)},
	{"fileObjectHistory", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/FileObject;>;", $PRIVATE | $FINAL, $field(JavacFiler, fileObjectHistory)},
	{"openTypeNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JavacFiler, openTypeNames)},
	{"generatedSourceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacFiler, generatedSourceNames)},
	{"generatedClasses", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map<Ljava/lang/String;Ljavax/tools/JavaFileObject;>;>;", $PRIVATE | $FINAL, $field(JavacFiler, generatedClasses)},
	{"generatedSourceFileObjects", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/JavaFileObject;>;", $PRIVATE, $field(JavacFiler, generatedSourceFileObjects)},
	{"aggregateGeneratedSourceNames", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(JavacFiler, aggregateGeneratedSourceNames)},
	{"aggregateGeneratedClassNames", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(JavacFiler, aggregateGeneratedClassNames)},
	{"initialClassNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JavacFiler, initialClassNames)},
	{"defaultTargetModule", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JavacFiler, defaultTargetModule)},
	{}
};

$MethodInfo _JavacFiler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, 0, $method(static_cast<void(JavacFiler::*)($Context*)>(&JavacFiler::init$))},
	{"checkFileReopening", "(Ljavax/tools/FileObject;Z)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFiler::*)($FileObject*,bool)>(&JavacFiler::checkFileReopening)), "javax.annotation.processing.FilerException"},
	{"checkName", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFiler::*)($String*)>(&JavacFiler::checkName)), "javax.annotation.processing.FilerException"},
	{"checkName", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFiler::*)($String*,bool)>(&JavacFiler::checkName)), "javax.annotation.processing.FilerException"},
	{"checkNameAndExistence", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFiler::*)($Symbol$ModuleSymbol*,$String*,bool)>(&JavacFiler::checkNameAndExistence)), "javax.annotation.processing.FilerException"},
	{"checkOrInferModule", "(Ljava/lang/CharSequence;)Lcom/sun/tools/javac/util/Pair;", "(Ljava/lang/CharSequence;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Pair*(JavacFiler::*)($CharSequence*)>(&JavacFiler::checkOrInferModule)), "javax.annotation.processing.FilerException"},
	{"checkOrInferModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/CharSequence;Z)Lcom/sun/tools/javac/processing/JavacFiler$Tuple3;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/CharSequence;Z)Lcom/sun/tools/javac/processing/JavacFiler$Tuple3<Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$JavacFiler$Tuple3*(JavacFiler::*)($JavaFileManager$Location*,$CharSequence*,bool)>(&JavacFiler::checkOrInferModule)), "java.io.IOException"},
	{"clearRoundState", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavacFiler::*)()>(&JavacFiler::clearRoundState))},
	{"close", "()V", nullptr, $PUBLIC},
	{"closeFileObject", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Ljavax/tools/FileObject;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFiler::*)($Symbol$ModuleSymbol*,$String*,$FileObject*)>(&JavacFiler::closeFileObject))},
	{"containedInInitialInputs", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacFiler::*)($String*)>(&JavacFiler::containedInInitialInputs))},
	{"createClassFile", "(Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createResource", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/CharSequence;Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/FileObject;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createSourceFile", "(Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createSourceOrClassFile", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;ZLjava/lang/String;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(static_cast<$JavaFileObject*(JavacFiler::*)($Symbol$ModuleSymbol*,bool,$String*)>(&JavacFiler::createSourceOrClassFile)), "java.io.IOException"},
	{"displayState", "()V", nullptr, $PUBLIC},
	{"getGeneratedClasses", "()Ljava/util/Map;", "()Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map<Ljava/lang/String;Ljavax/tools/JavaFileObject;>;>;", $PUBLIC},
	{"getGeneratedSourceFileObjects", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getGeneratedSourceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getResource", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"inferModule", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$ModuleSymbol*(JavacFiler::*)($String*)>(&JavacFiler::inferModule))},
	{"isInFileObjectHistory", "(Ljavax/tools/FileObject;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacFiler::*)($FileObject*,bool)>(&JavacFiler::isInFileObjectHistory))},
	{"isPackageInfo", "(Ljava/lang/String;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacFiler::*)($String*,bool)>(&JavacFiler::isPackageInfo))},
	{"lambda$closeFileObject$0", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Map*(*)($Symbol$ModuleSymbol*)>(&JavacFiler::lambda$closeFileObject$0))},
	{"locationCheck", "(Ljavax/tools/JavaFileManager$Location;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFiler::*)($JavaFileManager$Location*)>(&JavacFiler::locationCheck))},
	{"newFiles", "()Z", nullptr, $PUBLIC},
	{"newRound", "()V", nullptr, $PUBLIC},
	{"setInitialState", "(Ljava/util/Collection;Ljava/util/Collection;)V", "(Ljava/util/Collection<+Ljavax/tools/JavaFileObject;>;Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC},
	{"setLastRound", "(Z)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"warnIfUnclosedFiles", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacFiler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacFiler$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.processing.JavacFiler$Tuple3", "com.sun.tools.javac.processing.JavacFiler", "Tuple3", $STATIC | $FINAL},
	{"com.sun.tools.javac.processing.JavacFiler$FilerWriter", "com.sun.tools.javac.processing.JavacFiler", "FilerWriter", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacFiler$FilerOutputStream", "com.sun.tools.javac.processing.JavacFiler", "FilerOutputStream", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacFiler$FilerInputJavaFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerInputJavaFileObject", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerInputFileObject", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacFiler$FilerOutputJavaFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerOutputJavaFileObject", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacFiler$FilerOutputFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerOutputFileObject", $PRIVATE},
	{}
};

$ClassInfo _JavacFiler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.processing.JavacFiler",
	"java.lang.Object",
	"javax.annotation.processing.Filer,java.io.Closeable",
	_JavacFiler_FieldInfo_,
	_JavacFiler_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFiler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacFiler$1,com.sun.tools.javac.processing.JavacFiler$Tuple3,com.sun.tools.javac.processing.JavacFiler$FilerWriter,com.sun.tools.javac.processing.JavacFiler$FilerOutputStream,com.sun.tools.javac.processing.JavacFiler$FilerInputJavaFileObject,com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject,com.sun.tools.javac.processing.JavacFiler$FilerOutputJavaFileObject,com.sun.tools.javac.processing.JavacFiler$FilerOutputFileObject"
};

$Object* allocate$JavacFiler($Class* clazz) {
	return $of($alloc(JavacFiler));
}

int32_t JavacFiler::hashCode() {
	 return this->$Filer::hashCode();
}

bool JavacFiler::equals(Object$* arg0) {
	 return this->$Filer::equals(arg0);
}

$Object* JavacFiler::clone() {
	 return this->$Filer::clone();
}

void JavacFiler::finalize() {
	this->$Filer::finalize();
}

$String* JavacFiler::ALREADY_OPENED = nullptr;
$String* JavacFiler::NOT_FOR_READING = nullptr;
$String* JavacFiler::NOT_FOR_WRITING = nullptr;

void JavacFiler::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, context, context);
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, $nc(context)->get($JavaFileManager::class$)));
	$set(this, elementUtils, $JavacElements::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, modules, $Modules::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, initialInputs, $Collections::synchronizedSet($$new($LinkedHashSet)));
	$set(this, fileObjectHistory, $Collections::synchronizedSet($$new($LinkedHashSet)));
	$set(this, generatedSourceNames, $Collections::synchronizedSet($$new($LinkedHashSet)));
	$set(this, generatedSourceFileObjects, $Collections::synchronizedSet($$new($LinkedHashSet)));
	$set(this, generatedClasses, $Collections::synchronizedMap($$new($LinkedHashMap)));
	$set(this, openTypeNames, $Collections::synchronizedSet($$new($LinkedHashSet)));
	$set(this, aggregateGeneratedSourceNames, $new($LinkedHashSet));
	$set(this, aggregateGeneratedClassNames, $new($LinkedHashSet));
	$set(this, initialClassNames, $new($LinkedHashSet));
	$init($Lint$LintCategory);
	this->lint = $nc(($($Lint::instance(context))))->isEnabled($Lint$LintCategory::PROCESSING);
	$var($Options, options, $Options::instance(context));
	$init($Option);
	$set(this, defaultTargetModule, $nc(options)->get($Option::DEFAULT_MODULE_FOR_CREATED_FILES));
}

$JavaFileObject* JavacFiler::createSourceFile($CharSequence* nameAndModule, $ElementArray* originatingElements) {
	$var($Pair, moduleAndClass, checkOrInferModule(nameAndModule));
	return createSourceOrClassFile($cast($Symbol$ModuleSymbol, $nc(moduleAndClass)->fst), true, $cast($String, moduleAndClass->snd));
}

$JavaFileObject* JavacFiler::createClassFile($CharSequence* nameAndModule, $ElementArray* originatingElements) {
	$var($Pair, moduleAndClass, checkOrInferModule(nameAndModule));
	return createSourceOrClassFile($cast($Symbol$ModuleSymbol, $nc(moduleAndClass)->fst), false, $cast($String, moduleAndClass->snd));
}

$Pair* JavacFiler::checkOrInferModule($CharSequence* moduleAndPkg) {
	$useLocalCurrentObjectStackCache();
	$var($String, moduleAndPkgString, $nc(moduleAndPkg)->toString());
	int32_t slash = $nc(moduleAndPkgString)->indexOf((int32_t)u'/');
	$var($String, module, nullptr);
	$var($String, pkg, nullptr);
	if (slash == (-1)) {
		int32_t lastDot = moduleAndPkgString->lastIndexOf((int32_t)u'.');
		$var($String, pack, lastDot != (-1) ? moduleAndPkgString->substring(0, lastDot) : ""_s);
		$var($Symbol$ModuleSymbol, msym, inferModule(pack));
		if (msym != nullptr) {
			return $Pair::of(msym, moduleAndPkgString);
		}
		if (this->defaultTargetModule == nullptr) {
			$throwNew($FilerException, "Cannot determine target module."_s);
		}
		$assign(module, this->defaultTargetModule);
		$assign(pkg, moduleAndPkgString);
	} else {
		$assign(module, moduleAndPkgString->substring(0, slash));
		$assign(pkg, moduleAndPkgString->substring(slash + 1));
	}
	$var($Symbol$ModuleSymbol, explicitModule, $nc(this->syms)->getModule($($nc(this->names)->fromString(module))));
	if (explicitModule == nullptr) {
		$throwNew($FilerException, $$str({"Module: "_s, module, " does not exist."_s}));
	}
	if (!$nc(this->modules)->isRootModule(explicitModule)) {
		$throwNew($FilerException, "Cannot write to the given module."_s);
	}
	return $Pair::of(explicitModule, pkg);
}

$JavaFileObject* JavacFiler::createSourceOrClassFile($Symbol$ModuleSymbol* mod, bool isSourceFile, $String* name) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(mod);
	if (this->lint) {
		int32_t periodIndex = $nc(name)->lastIndexOf("."_s);
		if (periodIndex != -1) {
			$var($String, base, name->substring(periodIndex));
			$var($String, extn, isSourceFile ? ".java"_s : ".class"_s);
			if (base->equals(extn)) {
				$nc(this->log)->warning($($CompilerProperties$Warnings::ProcSuspiciousClassName(name, extn)));
			}
		}
	}
	checkNameAndExistence(mod, name, isSourceFile);
	$init($StandardLocation);
	$var($JavaFileManager$Location, loc, isSourceFile ? static_cast<$JavaFileManager$Location*>($StandardLocation::SOURCE_OUTPUT) : static_cast<$JavaFileManager$Location*>($StandardLocation::CLASS_OUTPUT));
	if ($nc(this->modules)->multiModuleMode) {
		$assign(loc, $nc(this->fileManager)->getLocationForModule(loc, $($nc($nc(mod)->name)->toString())));
	}
	$init($JavaFileObject$Kind);
	$JavaFileObject$Kind* kind = (isSourceFile ? $JavaFileObject$Kind::SOURCE : $JavaFileObject$Kind::CLASS);
	$var($JavaFileObject, fileObject, $nc(this->fileManager)->getJavaFileForOutput(loc, name, kind, nullptr));
	checkFileReopening(fileObject, true);
	if (this->lastRound) {
		$nc(this->log)->warning($($CompilerProperties$Warnings::ProcFileCreateLastRound(name)));
	}
	if (isSourceFile) {
		$nc(this->aggregateGeneratedSourceNames)->add($($Pair::of(mod, name)));
	} else {
		$nc(this->aggregateGeneratedClassNames)->add($($Pair::of(mod, name)));
	}
	$nc(this->openTypeNames)->add(name);
	return $new($JavacFiler$FilerOutputJavaFileObject, this, mod, name, fileObject);
}

$FileObject* JavacFiler::createResource($JavaFileManager$Location* location$renamed, $CharSequence* moduleAndPkg, $CharSequence* relativeName, $ElementArray* originatingElements) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileManager$Location, location, location$renamed);
	$var($JavacFiler$Tuple3, locationModuleAndPackage, checkOrInferModule(location, moduleAndPkg, true));
	$assign(location, $cast($JavaFileManager$Location, $nc(locationModuleAndPackage)->a));
	$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, locationModuleAndPackage->b));
	$var($String, pkg, $cast($String, locationModuleAndPackage->c));
	locationCheck(location);
	$var($String, strPkg, $nc(pkg)->toString());
	if (strPkg->length() > 0) {
		checkName(strPkg);
	}
	$var($FileObject, fileObject, $nc(this->fileManager)->getFileForOutput(location, strPkg, $($nc(relativeName)->toString()), nullptr));
	checkFileReopening(fileObject, true);
	{
		$var($JavaFileObject, javaFileObject, nullptr);
		bool var$0 = $instanceOf($JavaFileObject, fileObject);
		if (var$0) {
			$assign(javaFileObject, $cast($JavaFileObject, fileObject));
			var$0 = true;
		}
		if (var$0) {
			return static_cast<$FileObject*>(static_cast<$ForwardingFileObject*>(static_cast<$JavacFiler$FilerOutputFileObject*>($new($JavacFiler$FilerOutputJavaFileObject, this, msym, nullptr, javaFileObject))));
		} else {
			return $new($JavacFiler$FilerOutputFileObject, this, msym, nullptr, fileObject);
		}
	}
}

void JavacFiler::locationCheck($JavaFileManager$Location* location) {
	{
		$StandardLocation* standardLocation = nullptr;
		bool var$0 = $instanceOf($StandardLocation, location);
		if (var$0) {
			standardLocation = $cast($StandardLocation, location);
			var$0 = true;
		}
		if (var$0) {
			if (!$nc(standardLocation)->isOutputLocation()) {
				$throwNew($IllegalArgumentException, $$str({"Resource creation not supported in location "_s, standardLocation}));
			}
		}
	}
}

$FileObject* JavacFiler::getResource($JavaFileManager$Location* location$renamed, $CharSequence* moduleAndPkg, $CharSequence* relativeName) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileManager$Location, location, location$renamed);
	$var($JavacFiler$Tuple3, locationModuleAndPackage, checkOrInferModule(location, moduleAndPkg, false));
	$assign(location, $cast($JavaFileManager$Location, $nc(locationModuleAndPackage)->a));
	$var($String, pkg, $cast($String, locationModuleAndPackage->c));
	if ($nc(pkg)->length() > 0) {
		checkName(pkg);
	}
	$var($FileObject, fileObject, nullptr);
	if ($nc(location)->isOutputLocation()) {
		$assign(fileObject, $nc(this->fileManager)->getFileForOutput(location, pkg, $($nc(relativeName)->toString()), nullptr));
	} else {
		$assign(fileObject, $nc(this->fileManager)->getFileForInput(location, pkg, $($nc(relativeName)->toString())));
	}
	if (fileObject == nullptr) {
		$var($String, name, ($nc(pkg)->length() == 0) ? $nc(relativeName)->toString() : ($str({pkg, "/"_s, relativeName})));
		$throwNew($FileNotFoundException, name);
	}
	checkFileReopening(fileObject, false);
	return $new($JavacFiler$FilerInputFileObject, this, fileObject);
}

$JavacFiler$Tuple3* JavacFiler::checkOrInferModule($JavaFileManager$Location* location, $CharSequence* moduleAndPkg, bool write) {
	$useLocalCurrentObjectStackCache();
	$var($String, moduleAndPkgString, $nc(moduleAndPkg)->toString());
	int32_t slash = $nc(moduleAndPkgString)->indexOf((int32_t)u'/');
	bool var$0 = $nc(location)->isModuleOrientedLocation();
	bool multiModuleLocation = var$0 || ($nc(this->modules)->multiModuleMode && $nc(location)->isOutputLocation());
	$var($String, module, nullptr);
	$var($String, pkg, nullptr);
	if (slash == (-1)) {
		if (!multiModuleLocation) {
			return $new($JavacFiler$Tuple3, location, $($nc(this->modules)->getDefaultModule()), moduleAndPkgString);
		}
		if (location->isOutputLocation()) {
			$var($Symbol$ModuleSymbol, msym, inferModule(moduleAndPkgString));
			if (msym != nullptr) {
				$var($JavaFileManager$Location, moduleLoc, $nc(this->fileManager)->getLocationForModule(location, $($nc(msym->name)->toString())));
				return $new($JavacFiler$Tuple3, moduleLoc, msym, moduleAndPkgString);
			}
		}
		if (this->defaultTargetModule == nullptr) {
			$throwNew($FilerException, "No module specified and the location is either a module-oriented location, or a multi-module output location."_s);
		}
		$assign(module, this->defaultTargetModule);
		$assign(pkg, moduleAndPkgString);
	} else {
		$assign(module, moduleAndPkgString->substring(0, slash));
		$assign(pkg, moduleAndPkgString->substring(slash + 1));
	}
	if (multiModuleLocation) {
		$var($Symbol$ModuleSymbol, explicitModule, $nc(this->syms)->getModule($($nc(this->names)->fromString(module))));
		if (explicitModule == nullptr) {
			$throwNew($FilerException, $$str({"Module: "_s, module, " does not exist."_s}));
		}
		if (write && !$nc(this->modules)->isRootModule(explicitModule)) {
			$throwNew($FilerException, "Cannot write to the given module."_s);
		}
		$var($JavaFileManager$Location, moduleLoc, $nc(this->fileManager)->getLocationForModule(location, module));
		return $new($JavacFiler$Tuple3, moduleLoc, explicitModule, pkg);
	} else {
		$throwNew($FilerException, "Module specified but the location is neither a module-oriented location, nor a multi-module output location."_s);
	}
}

$Symbol$ModuleSymbol* JavacFiler::inferModule($String* pkg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->modules)->getDefaultModule() == $nc(this->syms)->noModule) {
		return $nc(this->modules)->getDefaultModule();
	}
	$var($Set, rootModules, $nc(this->modules)->getRootModules());
	if ($nc(rootModules)->size() == 1) {
		return $cast($Symbol$ModuleSymbol, $nc($(rootModules->iterator()))->next());
	}
	$var($Symbol$PackageSymbol, pack, $cast($Symbol$PackageSymbol, $nc(this->elementUtils)->getPackageElement(pkg)));
	if (pack != nullptr && pack->modle != $nc(this->syms)->unnamedModule) {
		return pack->modle;
	}
	return nullptr;
}

void JavacFiler::checkName($String* name) {
	checkName(name, false);
}

void JavacFiler::checkName($String* name, bool allowUnnamedPackageInfo) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$SourceVersion::isName(name);
	if (var$0 && !isPackageInfo(name, allowUnnamedPackageInfo)) {
		if (this->lint) {
			$nc(this->log)->warning($($CompilerProperties$Warnings::ProcIllegalFileName(name)));
		}
		$throwNew($FilerException, $$str({"Illegal name "_s, name}));
	}
}

bool JavacFiler::isPackageInfo($String* name, bool allowUnnamedPackageInfo) {
	$useLocalCurrentObjectStackCache();
	$var($String, PKG_INFO, "package-info"_s);
	int32_t periodIndex = $nc(name)->lastIndexOf("."_s);
	if (periodIndex == -1) {
		return allowUnnamedPackageInfo ? name->equals(PKG_INFO) : false;
	} else {
		$var($String, prefix, name->substring(0, periodIndex));
		$var($String, simple, name->substring(periodIndex + 1));
		bool var$0 = $SourceVersion::isName(prefix);
		return var$0 && simple->equals(PKG_INFO);
	}
}

void JavacFiler::checkNameAndExistence($Symbol$ModuleSymbol* mod, $String* typename$, bool allowUnnamedPackageInfo) {
	$useLocalCurrentObjectStackCache();
	checkName(typename$, allowUnnamedPackageInfo);
	$var($Symbol$ClassSymbol, existing, $cast($Symbol$ClassSymbol, $nc(this->elementUtils)->getTypeElement(typename$)));
	bool var$2 = $nc(this->aggregateGeneratedSourceNames)->contains($($Pair::of(mod, typename$)));
	bool var$1 = var$2 || $nc(this->aggregateGeneratedClassNames)->contains($($Pair::of(mod, typename$)));
	bool var$0 = var$1 || $nc(this->initialClassNames)->contains(typename$);
	bool alreadySeen = var$0 || containedInInitialInputs(typename$);
	if (alreadySeen) {
		if (this->lint) {
			$nc(this->log)->warning($($CompilerProperties$Warnings::ProcTypeRecreate(typename$)));
		}
		$throwNew($FilerException, $$str({"Attempt to recreate a file for type "_s, typename$}));
	}
	if (this->lint && existing != nullptr) {
		$nc(this->log)->warning($($CompilerProperties$Warnings::ProcTypeAlreadyExists(typename$)));
	}
	bool var$3 = !$nc(mod)->isUnnamed();
	if (var$3 && !$nc(typename$)->contains("."_s)) {
		$throwNew($FilerException, $$str({"Attempt to create a type in unnamed package of a named module: "_s, typename$}));
	}
}

bool JavacFiler::containedInInitialInputs($String* typename$) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, sourceFile, nullptr);
	$var($Symbol$ClassSymbol, existingClass, $cast($Symbol$ClassSymbol, $nc(this->elementUtils)->getTypeElement(typename$)));
	if (existingClass != nullptr) {
		$assign(sourceFile, existingClass->sourcefile);
	} else if ($nc(typename$)->endsWith(".package-info"_s)) {
		int32_t var$0 = typename$->length();
		$var($String, targetName, typename$->substring(0, var$0 - ".package-info"_s->length()));
		$var($Symbol$PackageSymbol, existingPackage, $cast($Symbol$PackageSymbol, $nc(this->elementUtils)->getPackageElement(targetName)));
		if (existingPackage != nullptr) {
			$assign(sourceFile, existingPackage->sourcefile);
		}
	}
	return (sourceFile == nullptr) ? false : $nc(this->initialInputs)->contains(sourceFile);
}

void JavacFiler::checkFileReopening($FileObject* fileObject, bool forWriting) {
	$useLocalCurrentObjectStackCache();
	if (isInFileObjectHistory(fileObject, forWriting)) {
		if (this->lint) {
			$nc(this->log)->warning($($CompilerProperties$Warnings::ProcFileReopening($($nc(fileObject)->getName()))));
		}
		$throwNew($FilerException, $$str({"Attempt to reopen a file for path "_s, $($nc(fileObject)->getName())}));
	}
	if (forWriting) {
		$nc(this->fileObjectHistory)->add(fileObject);
	}
}

bool JavacFiler::isInFileObjectHistory($FileObject* fileObject, bool forWriting) {
	$useLocalCurrentObjectStackCache();
	if (forWriting) {
		{
			$var($Iterator, i$, $nc(this->initialInputs)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($FileObject, veteran, $cast($FileObject, i$->next()));
				{
					try {
						if ($nc(this->fileManager)->isSameFile(veteran, fileObject)) {
							return true;
						}
					} catch ($IllegalArgumentException& e) {
					}
				}
			}
		}
		{
			$var($Iterator, i$, $nc(this->initialClassNames)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, className, $cast($String, i$->next()));
				{
					try {
						$var($Symbol$ClassSymbol, existing, $cast($Symbol$ClassSymbol, $nc(this->elementUtils)->getTypeElement(className)));
						bool var$0 = existing != nullptr;
						if (var$0) {
							bool var$1 = (existing->sourcefile != nullptr && $nc(this->fileManager)->isSameFile(existing->sourcefile, fileObject));
							var$0 = (var$1 || (existing->classfile != nullptr && $nc(this->fileManager)->isSameFile(existing->classfile, fileObject)));
						}
						if (var$0) {
							return true;
						}
					} catch ($IllegalArgumentException& e) {
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->fileObjectHistory)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileObject, veteran, $cast($FileObject, i$->next()));
			{
				if ($nc(this->fileManager)->isSameFile(veteran, fileObject)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool JavacFiler::newFiles() {
	bool var$0 = (!$nc(this->generatedSourceNames)->isEmpty());
	return var$0 || (!$nc(this->generatedClasses)->isEmpty());
}

$Set* JavacFiler::getGeneratedSourceNames() {
	return this->generatedSourceNames;
}

$Set* JavacFiler::getGeneratedSourceFileObjects() {
	return this->generatedSourceFileObjects;
}

$Map* JavacFiler::getGeneratedClasses() {
	return this->generatedClasses;
}

void JavacFiler::warnIfUnclosedFiles() {
	if (!$nc(this->openTypeNames)->isEmpty()) {
		$nc(this->log)->warning($($CompilerProperties$Warnings::ProcUnclosedTypeFiles(this->openTypeNames)));
	}
}

void JavacFiler::newRound() {
	clearRoundState();
}

void JavacFiler::setLastRound(bool lastRound) {
	this->lastRound = lastRound;
}

void JavacFiler::setInitialState($Collection* initialInputs, $Collection* initialClassNames) {
	$nc(this->initialInputs)->addAll(initialInputs);
	$nc(this->initialClassNames)->addAll(initialClassNames);
}

void JavacFiler::close() {
	clearRoundState();
	$nc(this->initialClassNames)->clear();
	$nc(this->initialInputs)->clear();
	$nc(this->fileObjectHistory)->clear();
	$nc(this->openTypeNames)->clear();
	$nc(this->aggregateGeneratedSourceNames)->clear();
	$nc(this->aggregateGeneratedClassNames)->clear();
}

void JavacFiler::clearRoundState() {
	$nc(this->generatedSourceNames)->clear();
	$nc(this->generatedSourceFileObjects)->clear();
	$nc(this->generatedClasses)->clear();
}

void JavacFiler::displayState() {
	$useLocalCurrentObjectStackCache();
	$init($Log);
	$init($Log$WriterKind);
	$var($PrintWriter, xout, $nc(($cast($Log, $($nc(this->context)->get($Log::logKey)))))->getWriter($Log$WriterKind::STDERR));
	$nc(xout)->println($$str({"File Object History : "_s, this->fileObjectHistory}));
	xout->println($$str({"Open Type Names     : "_s, this->openTypeNames}));
	xout->println($$str({"Gen. Src Names      : "_s, this->generatedSourceNames}));
	xout->println($$str({"Gen. Cls Names      : "_s, $($nc(this->generatedClasses)->keySet())}));
	xout->println($$str({"Agg. Gen. Src Names : "_s, this->aggregateGeneratedSourceNames}));
	xout->println($$str({"Agg. Gen. Cls Names : "_s, this->aggregateGeneratedClassNames}));
}

$String* JavacFiler::toString() {
	return "javac Filer"_s;
}

void JavacFiler::closeFileObject($Symbol$ModuleSymbol* mod, $String* typeName, $FileObject* fileObject) {
	$useLocalCurrentObjectStackCache();
	if (typeName != nullptr) {
		$var($JavaFileObject, javaFileObject, nullptr);
		bool var$0 = $instanceOf($JavaFileObject, fileObject);
		if (var$0) {
			$assign(javaFileObject, $cast($JavaFileObject, fileObject));
			var$0 = true;
		}
		if (!(var$0)) {
			$throwNew($AssertionError, $of($$str({"JavaFileObject not found for "_s, fileObject})));
		}
		$init($JavacFiler$1);
		switch ($nc($JavacFiler$1::$SwitchMap$javax$tools$JavaFileObject$Kind)->get($nc(($($nc(javaFileObject)->getKind())))->ordinal())) {
		case 1:
			{
				$nc(this->generatedSourceNames)->add(typeName);
				$nc(this->generatedSourceFileObjects)->add(javaFileObject);
				$nc(this->openTypeNames)->remove(typeName);
				break;
			}
		case 2:
			{
				$nc(($cast($Map, $($nc(this->generatedClasses)->computeIfAbsent(mod, static_cast<$Function*>($$new(JavacFiler$$Lambda$lambda$closeFileObject$0)))))))->put(typeName, javaFileObject);
				$nc(this->openTypeNames)->remove(typeName);
				break;
			}
		default:
			{
				break;
			}
		}
	}
}

$Map* JavacFiler::lambda$closeFileObject$0($Symbol$ModuleSymbol* m) {
	$init(JavacFiler);
	return $Collections::synchronizedMap($$new($LinkedHashMap));
}

JavacFiler::JavacFiler() {
}

void clinit$JavacFiler($Class* class$) {
	$assignStatic(JavacFiler::ALREADY_OPENED, "Output stream or writer has already been opened."_s);
	$assignStatic(JavacFiler::NOT_FOR_READING, "FileObject was not opened for reading."_s);
	$assignStatic(JavacFiler::NOT_FOR_WRITING, "FileObject was not opened for writing."_s);
}

$Class* JavacFiler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacFiler$$Lambda$lambda$closeFileObject$0::classInfo$.name)) {
			return JavacFiler$$Lambda$lambda$closeFileObject$0::load$(name, initialize);
		}
	}
	$loadClass(JavacFiler, name, initialize, &_JavacFiler_ClassInfo_, clinit$JavacFiler, allocate$JavacFiler);
	return class$;
}

$Class* JavacFiler::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com