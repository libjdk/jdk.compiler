#include <com/sun/tools/javac/main/Arguments.h>

#include <com/sun/tools/doclint/DocLint.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Arguments$1.h>
#include <com/sun/tools/javac/main/Arguments$2.h>
#include <com/sun/tools/javac/main/Arguments$3.h>
#include <com/sun/tools/javac/main/Arguments$ErrorMode.h>
#include <com/sun/tools/javac/main/Arguments$ErrorReporter.h>
#include <com/sun/tools/javac/main/DelegatingJavaFileManager.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <com/sun/tools/javac/platform/PlatformUtils.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/PropagatedException.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef ADD_EXPORTS
#undef ADD_MODULES
#undef ADD_OPENS
#undef ADD_READS
#undef ANNOTATION_PROCESSOR_MODULE_PATH
#undef ANNOTATION_PROCESSOR_PATH
#undef BOOT_CLASS_PATH
#undef CLASS
#undef CLASS_OUTPUT
#undef D
#undef DEFAULT
#undef DEFAULT_MODULE_FOR_CREATED_FILES
#undef DJAVA_ENDORSED_DIRS
#undef DJAVA_EXT_DIRS
#undef ENDORSEDDIRS
#undef EXTDIRS
#undef FULLVERSION
#undef H
#undef HELP
#undef HELP_LINT
#undef ILLEGAL_ARGUMENT
#undef ILLEGAL_STATE
#undef JAVAC
#undef JDK1_8
#undef JDK1_9
#undef JDK8
#undef LIMIT_MODULES
#undef LOG
#undef MIN
#undef MODULE
#undef MODULE_PATH
#undef MODULE_SOURCE_PATH
#undef NOTICE
#undef OPTIONS
#undef PARAMETERS
#undef PATCH_MODULE
#undef PATH
#undef PLUGIN
#undef PREVIEW
#undef PROC
#undef PROFILE
#undef RELEASE
#undef S
#undef SOURCE
#undef SOURCEFILE
#undef SOURCE_PATH
#undef SYSTEM
#undef TARGET
#undef UPGRADE_MODULE_PATH
#undef VERSION
#undef X
#undef XBOOTCLASSPATH
#undef XBOOTCLASSPATH_APPEND
#undef XBOOTCLASSPATH_PREPEND
#undef XCHECK_PACKAGE
#undef XDOCLINT
#undef XDOCLINT_CUSTOM
#undef XDOCLINT_PACKAGE
#undef XLINT_CUSTOM
#undef XMSGS_CUSTOM_PREFIX
#undef XMSGS_OPTION

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $DocLint = ::com::sun::tools::doclint::DocLint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Source = ::com::sun::tools::javac::code::Source;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Arguments$1 = ::com::sun::tools::javac::main::Arguments$1;
using $Arguments$2 = ::com::sun::tools::javac::main::Arguments$2;
using $Arguments$3 = ::com::sun::tools::javac::main::Arguments$3;
using $Arguments$ErrorMode = ::com::sun::tools::javac::main::Arguments$ErrorMode;
using $Arguments$ErrorReporter = ::com::sun::tools::javac::main::Arguments$ErrorReporter;
using $DelegatingJavaFileManager = ::com::sun::tools::javac::main::DelegatingJavaFileManager;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $OptionHelper$GrumpyHelper = ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $PlatformUtils = ::com::sun::tools::javac::platform::PlatformUtils;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $Options = ::com::sun::tools::javac::util::Options;
using $PropagatedException = ::com::sun::tools::javac::util::PropagatedException;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Stream = ::java::util::stream::Stream;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Arguments$$Lambda$lambda$handleReleaseOptions$0 : public $Arguments$ErrorReporter {
	$class(Arguments$$Lambda$lambda$handleReleaseOptions$0, $NO_CLASS_INIT, $Arguments$ErrorReporter)
public:
	void init$(Arguments* inst) {
		$set(this, inst$, inst);
	}
	virtual void report($Option* option) override {
		$nc(inst$)->lambda$handleReleaseOptions$0(option);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arguments$$Lambda$lambda$handleReleaseOptions$0>());
	}
	Arguments* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arguments$$Lambda$lambda$handleReleaseOptions$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Arguments$$Lambda$lambda$handleReleaseOptions$0, inst$)},
	{}
};
$MethodInfo Arguments$$Lambda$lambda$handleReleaseOptions$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Arguments;)V", nullptr, $PUBLIC, $method(static_cast<void(Arguments$$Lambda$lambda$handleReleaseOptions$0::*)(Arguments*)>(&Arguments$$Lambda$lambda$handleReleaseOptions$0::init$))},
	{"report", "(Lcom/sun/tools/javac/main/Option;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arguments$$Lambda$lambda$handleReleaseOptions$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Arguments$$Lambda$lambda$handleReleaseOptions$0",
	"java.lang.Object",
	"com.sun.tools.javac.main.Arguments$ErrorReporter",
	fieldInfos,
	methodInfos
};
$Class* Arguments$$Lambda$lambda$handleReleaseOptions$0::load$($String* name, bool initialize) {
	$loadClass(Arguments$$Lambda$lambda$handleReleaseOptions$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arguments$$Lambda$lambda$handleReleaseOptions$0::class$ = nullptr;

class Arguments$$Lambda$lambda$processArgs$1$1 : public $Predicate {
	$class(Arguments$$Lambda$lambda$processArgs$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Arguments* inst, $Set* allowableOpts, $OptionHelper* helper, bool allowOperands, bool checkFileManager) {
		$set(this, inst$, inst);
		$set(this, allowableOpts, allowableOpts);
		$set(this, helper, helper);
		this->allowOperands = allowOperands;
		this->checkFileManager = checkFileManager;
	}
	virtual bool test(Object$* extra) override {
		 return $nc(inst$)->lambda$processArgs$1(allowableOpts, helper, allowOperands, checkFileManager, $cast($Iterable, extra));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arguments$$Lambda$lambda$processArgs$1$1>());
	}
	Arguments* inst$ = nullptr;
	$Set* allowableOpts = nullptr;
	$OptionHelper* helper = nullptr;
	bool allowOperands = false;
	bool checkFileManager = false;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arguments$$Lambda$lambda$processArgs$1$1::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Arguments$$Lambda$lambda$processArgs$1$1, inst$)},
	{"allowableOpts", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Arguments$$Lambda$lambda$processArgs$1$1, allowableOpts)},
	{"helper", "Lcom/sun/tools/javac/main/OptionHelper;", nullptr, $PUBLIC, $field(Arguments$$Lambda$lambda$processArgs$1$1, helper)},
	{"allowOperands", "Z", nullptr, $PUBLIC, $field(Arguments$$Lambda$lambda$processArgs$1$1, allowOperands)},
	{"checkFileManager", "Z", nullptr, $PUBLIC, $field(Arguments$$Lambda$lambda$processArgs$1$1, checkFileManager)},
	{}
};
$MethodInfo Arguments$$Lambda$lambda$processArgs$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Arguments;Ljava/util/Set;Lcom/sun/tools/javac/main/OptionHelper;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(Arguments$$Lambda$lambda$processArgs$1$1::*)(Arguments*,$Set*,$OptionHelper*,bool,bool)>(&Arguments$$Lambda$lambda$processArgs$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arguments$$Lambda$lambda$processArgs$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Arguments$$Lambda$lambda$processArgs$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Arguments$$Lambda$lambda$processArgs$1$1::load$($String* name, bool initialize) {
	$loadClass(Arguments$$Lambda$lambda$processArgs$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arguments$$Lambda$lambda$processArgs$1$1::class$ = nullptr;

class Arguments$$Lambda$lambda$validate$2$2 : public $Arguments$ErrorReporter {
	$class(Arguments$$Lambda$lambda$validate$2$2, $NO_CLASS_INIT, $Arguments$ErrorReporter)
public:
	void init$(Arguments* inst, $Target* t) {
		$set(this, inst$, inst);
		$set(this, t, t);
	}
	virtual void report($Option* option) override {
		$nc(inst$)->lambda$validate$2(t, option);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arguments$$Lambda$lambda$validate$2$2>());
	}
	Arguments* inst$ = nullptr;
	$Target* t = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arguments$$Lambda$lambda$validate$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Arguments$$Lambda$lambda$validate$2$2, inst$)},
	{"t", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC, $field(Arguments$$Lambda$lambda$validate$2$2, t)},
	{}
};
$MethodInfo Arguments$$Lambda$lambda$validate$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Arguments;Lcom/sun/tools/javac/jvm/Target;)V", nullptr, $PUBLIC, $method(static_cast<void(Arguments$$Lambda$lambda$validate$2$2::*)(Arguments*,$Target*)>(&Arguments$$Lambda$lambda$validate$2$2::init$))},
	{"report", "(Lcom/sun/tools/javac/main/Option;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arguments$$Lambda$lambda$validate$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Arguments$$Lambda$lambda$validate$2$2",
	"java.lang.Object",
	"com.sun.tools.javac.main.Arguments$ErrorReporter",
	fieldInfos,
	methodInfos
};
$Class* Arguments$$Lambda$lambda$validate$2$2::load$($String* name, bool initialize) {
	$loadClass(Arguments$$Lambda$lambda$validate$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arguments$$Lambda$lambda$validate$2$2::class$ = nullptr;

class Arguments$$Lambda$isSet$3 : public $Predicate {
	$class(Arguments$$Lambda$isSet$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Options* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* option) override {
		 return $nc(inst$)->isSet($cast($Option, option));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arguments$$Lambda$isSet$3>());
	}
	$Options* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arguments$$Lambda$isSet$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Arguments$$Lambda$isSet$3, inst$)},
	{}
};
$MethodInfo Arguments$$Lambda$isSet$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Options;)V", nullptr, $PUBLIC, $method(static_cast<void(Arguments$$Lambda$isSet$3::*)($Options*)>(&Arguments$$Lambda$isSet$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arguments$$Lambda$isSet$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Arguments$$Lambda$isSet$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Arguments$$Lambda$isSet$3::load$($String* name, bool initialize) {
	$loadClass(Arguments$$Lambda$isSet$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arguments$$Lambda$isSet$3::class$ = nullptr;

class Arguments$$Lambda$report$4 : public $Consumer {
	$class(Arguments$$Lambda$report$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Arguments$ErrorReporter* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* o) override {
		$nc(inst$)->report($cast($Option, o));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arguments$$Lambda$report$4>());
	}
	$Arguments$ErrorReporter* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arguments$$Lambda$report$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Arguments$$Lambda$report$4, inst$)},
	{}
};
$MethodInfo Arguments$$Lambda$report$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Arguments$ErrorReporter;)V", nullptr, $PUBLIC, $method(static_cast<void(Arguments$$Lambda$report$4::*)($Arguments$ErrorReporter*)>(&Arguments$$Lambda$report$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arguments$$Lambda$report$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Arguments$$Lambda$report$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Arguments$$Lambda$report$4::load$($String* name, bool initialize) {
	$loadClass(Arguments$$Lambda$report$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arguments$$Lambda$report$4::class$ = nullptr;

$FieldInfo _Arguments_FieldInfo_[] = {
	{"argsKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/main/Arguments;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Arguments, argsKey)},
	{"ownName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Arguments, ownName)},
	{"classNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(Arguments, classNames)},
	{"files", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/file/Path;>;", $PRIVATE, $field(Arguments, files)},
	{"deferredFileManagerOptions", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/main/Option;Ljava/lang/String;>;", $PRIVATE, $field(Arguments, deferredFileManagerOptions)},
	{"fileObjects", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/JavaFileObject;>;", $PRIVATE, $field(Arguments, fileObjects)},
	{"emptyAllowed", "Z", nullptr, $PRIVATE, $field(Arguments, emptyAllowed)},
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $PRIVATE | $FINAL, $field(Arguments, options)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE, $field(Arguments, fileManager)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Arguments, log)},
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PRIVATE | $FINAL, $field(Arguments, context)},
	{"errorMode", "Lcom/sun/tools/javac/main/Arguments$ErrorMode;", nullptr, $PRIVATE, $field(Arguments, errorMode)},
	{"errors", "Z", nullptr, $PRIVATE, $field(Arguments, errors)},
	{"cmdLineHelper", "Lcom/sun/tools/javac/main/OptionHelper;", nullptr, $PRIVATE | $FINAL, $field(Arguments, cmdLineHelper)},
	{"apiHelper", "Lcom/sun/tools/javac/main/OptionHelper;", nullptr, $PRIVATE | $FINAL, $field(Arguments, apiHelper)},
	{}
};

$MethodInfo _Arguments_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Arguments::*)($Context*)>(&Arguments::init$))},
	{"allowEmpty", "()V", nullptr, $PUBLIC},
	{"checkDirectory", "(Lcom/sun/tools/javac/main/Option;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Arguments::*)($Option*)>(&Arguments::checkDirectory))},
	{"checkOptionAllowed", "(ZLcom/sun/tools/javac/main/Arguments$ErrorReporter;[Lcom/sun/tools/javac/main/Option;)V", nullptr, $TRANSIENT},
	{"doProcessArgs", "(Ljava/lang/Iterable;Ljava/util/Set;Lcom/sun/tools/javac/main/OptionHelper;ZZ)Z", "(Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;Lcom/sun/tools/javac/main/OptionHelper;ZZ)Z", $PRIVATE, $method(static_cast<bool(Arguments::*)($Iterable*,$Set*,$OptionHelper*,bool,bool)>(&Arguments::doProcessArgs))},
	{"error", "(Lcom/sun/tools/javac/main/Option$InvalidValueException;)V", nullptr, 0},
	{"getClassNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getDeferredFileManagerOptions", "()Ljava/util/Map;", "()Ljava/util/Map<Lcom/sun/tools/javac/main/Option;Ljava/lang/String;>;", $PUBLIC},
	{"getDocLintOpts", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getFileManager", "()Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE, $method(static_cast<$JavaFileManager*(Arguments::*)()>(&Arguments::getFileManager))},
	{"getFileObjects", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getPluginOpts", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{"handleReleaseOptions", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<Ljava/lang/Iterable<Ljava/lang/String;>;>;)Z", $PUBLIC},
	{"init", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<Ljava/lang/String;>;)V", $PUBLIC},
	{"init", "(Ljava/lang/String;Ljava/lang/Iterable;Ljava/lang/Iterable;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;)V", $PUBLIC},
	{"init", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/main/Arguments;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Arguments*(*)($Context*)>(&Arguments::instance))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"lambda$handleReleaseOptions$0", "(Lcom/sun/tools/javac/main/Option;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Arguments::*)($Option*)>(&Arguments::lambda$handleReleaseOptions$0))},
	{"lambda$processArgs$1", "(Ljava/util/Set;Lcom/sun/tools/javac/main/OptionHelper;ZZLjava/lang/Iterable;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Arguments::*)($Set*,$OptionHelper*,bool,bool,$Iterable*)>(&Arguments::lambda$processArgs$1))},
	{"lambda$validate$2", "(Lcom/sun/tools/javac/jvm/Target;Lcom/sun/tools/javac/main/Option;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Arguments::*)($Target*,$Option*)>(&Arguments::lambda$validate$2))},
	{"processArgs", "(Ljava/lang/Iterable;Ljava/util/Set;Lcom/sun/tools/javac/main/OptionHelper;ZZ)Z", "(Ljava/lang/Iterable<Ljava/lang/String;>;Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;Lcom/sun/tools/javac/main/OptionHelper;ZZ)Z", $PRIVATE, $method(static_cast<bool(Arguments::*)($Iterable*,$Set*,$OptionHelper*,bool,bool)>(&Arguments::processArgs))},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(Arguments::*)($JCDiagnostic$DiagnosticInfo*)>(&Arguments::report))},
	{"reportDiag", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)V", nullptr, 0},
	{"toList", "(Ljava/lang/Iterable;)Lcom/sun/tools/javac/util/ListBuffer;", "<T:Ljava/lang/Object;>(Ljava/lang/Iterable<+TT;>;)Lcom/sun/tools/javac/util/ListBuffer<TT;>;", 0},
	{"toSet", "(Ljava/lang/Iterable;)Ljava/util/Set;", "<T:Ljava/lang/Object;>(Ljava/lang/Iterable<+TT;>;)Ljava/util/Set<TT;>;", 0},
	{"validate", "()Z", nullptr, $PUBLIC},
	{"validateAddExports", "(Ljavax/lang/model/SourceVersion;)V", nullptr, $PRIVATE, $method(static_cast<void(Arguments::*)($SourceVersion*)>(&Arguments::validateAddExports))},
	{"validateAddModules", "(Ljavax/lang/model/SourceVersion;)V", nullptr, $PRIVATE, $method(static_cast<void(Arguments::*)($SourceVersion*)>(&Arguments::validateAddModules))},
	{"validateAddReads", "(Ljavax/lang/model/SourceVersion;)V", nullptr, $PRIVATE, $method(static_cast<void(Arguments::*)($SourceVersion*)>(&Arguments::validateAddReads))},
	{"validateDefaultModuleForCreatedFiles", "(Ljavax/lang/model/SourceVersion;)V", nullptr, $PRIVATE, $method(static_cast<void(Arguments::*)($SourceVersion*)>(&Arguments::validateDefaultModuleForCreatedFiles))},
	{"validateLimitModules", "(Ljavax/lang/model/SourceVersion;)V", nullptr, $PRIVATE, $method(static_cast<void(Arguments::*)($SourceVersion*)>(&Arguments::validateLimitModules))},
	{}
};

$InnerClassInfo _Arguments_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Arguments$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.main.Arguments$ErrorReporter", "com.sun.tools.javac.main.Arguments", "ErrorReporter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.main.Arguments$ErrorMode", "com.sun.tools.javac.main.Arguments", "ErrorMode", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Arguments$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.main.Arguments$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Arguments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.Arguments",
	"java.lang.Object",
	nullptr,
	_Arguments_FieldInfo_,
	_Arguments_MethodInfo_,
	nullptr,
	nullptr,
	_Arguments_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Arguments$3,com.sun.tools.javac.main.Arguments$ErrorReporter,com.sun.tools.javac.main.Arguments$ErrorMode,com.sun.tools.javac.main.Arguments$2,com.sun.tools.javac.main.Arguments$1"
};

$Object* allocate$Arguments($Class* clazz) {
	return $of($alloc(Arguments));
}

$Context$Key* Arguments::argsKey = nullptr;

Arguments* Arguments::instance($Context* context) {
	$init(Arguments);
	$var(Arguments, instance, $cast(Arguments, $nc(context)->get(Arguments::argsKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Arguments, context));
	}
	return instance;
}

void Arguments::init$($Context* context) {
	$set(this, cmdLineHelper, $new($Arguments$1, this));
	$set(this, apiHelper, $new($Arguments$2, this, nullptr));
	$nc(context)->put(Arguments::argsKey, $of(this));
	$set(this, options, $Options::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, context, context);
}

void Arguments::init($String* ownName, $Iterable* args) {
	$useLocalCurrentObjectStackCache();
	$set(this, ownName, ownName);
	$init($Arguments$ErrorMode);
	$set(this, errorMode, $Arguments$ErrorMode::LOG);
	$set(this, files, $new($LinkedHashSet));
	$set(this, deferredFileManagerOptions, $new($LinkedHashMap));
	$set(this, fileObjects, nullptr);
	$set(this, classNames, $new($LinkedHashSet));
	processArgs(args, $($Option::getJavaCompilerOptions()), this->cmdLineHelper, true, false);
	if (this->errors) {
		$init($Log$PrefixKind);
		$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.usage"_s, $$new($ObjectArray, {$of(ownName)}));
	}
}

void Arguments::init($String* ownName, $Iterable* options, $Iterable* classNames, $Iterable* files) {
	$useLocalCurrentObjectStackCache();
	$set(this, ownName, ownName);
	$set(this, classNames, toSet(classNames));
	$set(this, fileObjects, toSet(files));
	$set(this, files, nullptr);
	$init($Arguments$ErrorMode);
	$set(this, errorMode, $Arguments$ErrorMode::ILLEGAL_ARGUMENT);
	if (options != nullptr) {
		$var($Iterable, var$0, static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(toList(options))))));
		processArgs(var$0, $($Option::getJavacToolOptions()), this->apiHelper, false, true);
	}
	$set(this, errorMode, $Arguments$ErrorMode::ILLEGAL_STATE);
}

void Arguments::init($String* ownName) {
	$set(this, ownName, ownName);
	$init($Arguments$ErrorMode);
	$set(this, errorMode, $Arguments$ErrorMode::LOG);
}

$Set* Arguments::getFileObjects() {
	$useLocalCurrentObjectStackCache();
	if (this->fileObjects == nullptr) {
		$set(this, fileObjects, $new($LinkedHashSet));
	}
	if (this->files != nullptr) {
		$var($JavacFileManager, jfm, $cast($JavacFileManager, getFileManager()));
		{
			$var($Iterator, i$, $nc($($nc(jfm)->getJavaFileObjectsFromPaths(static_cast<$Collection*>(this->files))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JavaFileObject, fo, $cast($JavaFileObject, i$->next()));
				$nc(this->fileObjects)->add(fo);
			}
		}
	}
	return this->fileObjects;
}

$Set* Arguments::getClassNames() {
	return this->classNames;
}

bool Arguments::handleReleaseOptions($Predicate* additionalOptions) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, platformString, $nc(this->options)->get($Option::RELEASE));
	checkOptionAllowed(platformString == nullptr, static_cast<$Arguments$ErrorReporter*>($$new(Arguments$$Lambda$lambda$handleReleaseOptions$0, this)), $$new($OptionArray, {
		$Option::BOOT_CLASS_PATH,
		$Option::XBOOTCLASSPATH,
		$Option::XBOOTCLASSPATH_APPEND,
		$Option::XBOOTCLASSPATH_PREPEND,
		$Option::ENDORSEDDIRS,
		$Option::DJAVA_ENDORSED_DIRS,
		$Option::EXTDIRS,
		$Option::DJAVA_EXT_DIRS,
		$Option::SOURCE,
		$Option::TARGET,
		$Option::SYSTEM,
		$Option::UPGRADE_MODULE_PATH
	}));
	if (platformString != nullptr) {
		$var($PlatformDescription, platformDescription, $PlatformUtils::lookupPlatformDescription(platformString));
		if (platformDescription == nullptr) {
			reportDiag($($CompilerProperties$Errors::UnsupportedReleaseVersion(platformString)));
			return false;
		}
		$nc(this->options)->put($Option::SOURCE, $($nc(platformDescription)->getSourceVersion()));
		$nc(this->options)->put($Option::TARGET, $($nc(platformDescription)->getTargetVersion()));
		$nc(this->context)->put($PlatformDescription::class$, $of(platformDescription));
		if (!$nc(additionalOptions)->test($($nc(platformDescription)->getAdditionalOptions()))) {
			return false;
		}
		$var($JavaFileManager, platformFM, $nc(platformDescription)->getFileManager());
		$DelegatingJavaFileManager::installReleaseFileManager(this->context, platformFM, $(getFileManager()));
	}
	return true;
}

bool Arguments::processArgs($Iterable* args, $Set* allowableOpts, $OptionHelper* helper, bool allowOperands, bool checkFileManager) {
	if (!doProcessArgs(args, allowableOpts, helper, allowOperands, checkFileManager)) {
		return false;
	}
	if (!handleReleaseOptions(static_cast<$Predicate*>($$new(Arguments$$Lambda$lambda$processArgs$1$1, this, allowableOpts, helper, allowOperands, checkFileManager)))) {
		return false;
	}
	$nc(this->options)->notifyListeners();
	return true;
}

bool Arguments::doProcessArgs($Iterable* args, $Set* allowableOpts, $OptionHelper* helper, bool allowOperands, bool checkFileManager) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileManager, fm, checkFileManager ? getFileManager() : ($JavaFileManager*)nullptr);
	$var($Iterator, argIter, $nc(args)->iterator());
	while ($nc(argIter)->hasNext()) {
		$var($String, arg, $cast($String, argIter->next()));
		if ($nc(arg)->isEmpty()) {
			reportDiag($($CompilerProperties$Errors::InvalidFlag(arg)));
			return false;
		}
		$Option* option = nullptr;
		if ($nc(arg)->startsWith("-"_s)) {
			option = $Option::lookup(arg, allowableOpts);
		} else {
			$init($Option);
			if (allowOperands && $Option::SOURCEFILE->matches(arg)) {
				option = $Option::SOURCEFILE;
			}
		}
		if (option != nullptr) {
			try {
				option->handleOption(helper, arg, argIter);
			} catch ($Option$InvalidValueException& e) {
				error(e);
				return false;
			}
			continue;
		}
		if (fm != nullptr && fm->handleOption(arg, argIter)) {
			continue;
		}
		reportDiag($($CompilerProperties$Errors::InvalidFlag(arg)));
		return false;
	}
	return true;
}

bool Arguments::validate() {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileManager, fm, getFileManager());
	$init($Option);
	if ($nc(this->options)->isSet($Option::MODULE)) {
		$init($StandardLocation);
		if (!$nc(fm)->hasLocation($StandardLocation::CLASS_OUTPUT)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($CompilerProperties$Errors::OutputDirMustBeSpecifiedWithDashMOption);
		} else {
			if (!fm->hasLocation($StandardLocation::MODULE_SOURCE_PATH)) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($CompilerProperties$Errors::ModulesourcepathMustBeSpecifiedWithDashMOption);
			} else {
				$var($1List, modules, $Arrays::asList($($nc($($nc(this->options)->get($Option::MODULE)))->split(","_s))));
				try {
					{
						$var($Iterator, i$, $nc(modules)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, module, $cast($String, i$->next()));
							{
								$var($JavaFileManager$Location, sourceLoc, fm->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::MODULE_SOURCE_PATH), module));
								if (sourceLoc == nullptr) {
									$nc(this->log)->error($($CompilerProperties$Errors::ModuleNotFoundInModuleSourcePath(module)));
								} else {
									$var($JavaFileManager$Location, classLoc, fm->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::CLASS_OUTPUT), module));
									{
										$init($JavaFileObject$Kind);
										$var($Iterator, i$, $nc($(fm->list(sourceLoc, ""_s, $($EnumSet::of($JavaFileObject$Kind::SOURCE)), true)))->iterator());
										for (; $nc(i$)->hasNext();) {
											$var($JavaFileObject, file, $cast($JavaFileObject, i$->next()));
											{
												$var($String, className, fm->inferBinaryName(sourceLoc, file));
												$var($JavaFileObject, classFile, fm->getJavaFileForInput(classLoc, className, $JavaFileObject$Kind::CLASS));
												bool var$0 = classFile == nullptr;
												if (!var$0) {
													int64_t var$1 = $nc(classFile)->getLastModified();
													var$0 = var$1 < $nc(file)->getLastModified();
												}
												if (var$0) {
													if (this->fileObjects == nullptr) {
														$set(this, fileObjects, $new($HashSet));
													}
													$nc(this->fileObjects)->add(file);
												}
											}
										}
									}
								}
							}
						}
					}
				} catch ($IOException& ex) {
					$init($Log$PrefixKind);
					$nc(this->log)->printLines($Log$PrefixKind::JAVAC, "msg.io"_s, $$new($ObjectArray, 0));
					$init($Log$WriterKind);
					ex->printStackTrace($($nc(this->log)->getWriter($Log$WriterKind::NOTICE)));
					return false;
				}
			}
		}
	}
	if (isEmpty()) {
		bool var$6 = $nc(this->options)->isSet($Option::HELP);
		bool var$5 = var$6 || $nc(this->options)->isSet($Option::X);
		bool var$4 = var$5 || $nc(this->options)->isSet($Option::HELP_LINT);
		bool var$3 = var$4 || $nc(this->options)->isSet($Option::VERSION);
		bool var$2 = var$3 || $nc(this->options)->isSet($Option::FULLVERSION);
		if (var$2 || $nc(this->options)->isSet($Option::MODULE)) {
			return true;
		}
		if (!this->emptyAllowed) {
			if (!this->errors) {
				if ($JavaCompiler::explicitAnnotationProcessingRequested(this->options)) {
					$init($CompilerProperties$Errors);
					reportDiag($CompilerProperties$Errors::NoSourceFilesClasses);
				} else {
					$init($CompilerProperties$Errors);
					reportDiag($CompilerProperties$Errors::NoSourceFiles);
				}
			}
			return false;
		}
	}
	if (!checkDirectory($Option::D)) {
		return false;
	}
	if (!checkDirectory($Option::S)) {
		return false;
	}
	if (!checkDirectory($Option::H)) {
		return false;
	}
	{
		$var($StandardJavaFileManager, standardJavaFileManager, nullptr);
		bool var$7 = $instanceOf($StandardJavaFileManager, fm);
		if (var$7) {
			$assign(standardJavaFileManager, $cast($StandardJavaFileManager, fm));
			var$7 = true;
		}
		if (var$7) {
			$init($StandardLocation);
			if ($nc(standardJavaFileManager)->hasLocation($StandardLocation::CLASS_OUTPUT)) {
				$var($Path, outDir, $cast($Path, $nc($($nc($(standardJavaFileManager->getLocationAsPaths($StandardLocation::CLASS_OUTPUT)))->iterator()))->next()));
				if (standardJavaFileManager->hasLocation($StandardLocation::MODULE_SOURCE_PATH)) {
					if ($Files::exists($($nc(outDir)->resolve("module-info.class"_s)), $$new($LinkOptionArray, 0))) {
						$nc(this->log)->error($($CompilerProperties$Errors::MultiModuleOutdirCannotBeExplodedModule(outDir)));
					}
				} else {
					$init($Lint$LintCategory);
					bool lintPaths = $nc(this->options)->isUnset($Option::XLINT_CUSTOM, $$str({"-"_s, $Lint$LintCategory::PATH->option}));
					if (lintPaths) {
						$var($Path, outDirParent, $nc(outDir)->getParent());
						if (outDirParent != nullptr && $Files::exists($(outDirParent->resolve("module-info.class"_s)), $$new($LinkOptionArray, 0))) {
							$nc(this->log)->warning($Lint$LintCategory::PATH, $($CompilerProperties$Warnings::OutdirIsInExplodedModule(outDir)));
						}
					}
				}
			}
		}
	}
	$var($String, sourceString, $nc(this->options)->get($Option::SOURCE));
	$init($Source);
	$Source* source = (sourceString != nullptr) ? $Source::lookup(sourceString) : $Source::DEFAULT;
	$var($String, targetString, $nc(this->options)->get($Option::TARGET));
	$init($Target);
	$Target* target = (targetString != nullptr) ? $Target::lookup(targetString) : $Target::DEFAULT;
	if ($Character::isDigit($nc($nc(target)->name$)->charAt(0))) {
		if ($nc(target)->compareTo($(static_cast<$Enum*>($nc(source)->requiredTarget()))) < 0) {
			if (targetString != nullptr) {
				if (sourceString == nullptr) {
					reportDiag($($CompilerProperties$Warnings::TargetDefaultSourceConflict(targetString, $($nc(source)->requiredTarget()))));
				} else {
					reportDiag($($CompilerProperties$Warnings::SourceTargetConflict(sourceString, $($nc(source)->requiredTarget()))));
				}
				return false;
			} else {
				target = $nc(source)->requiredTarget();
				$nc(this->options)->put("-target"_s, target->name$);
			}
		}
	}
	if ($nc(this->options)->isSet($Option::PREVIEW)) {
		if (sourceString == nullptr) {
			$init($CompilerProperties$Errors);
			report($CompilerProperties$Errors::PreviewWithoutSourceOrRelease);
			return false;
		} else {
			if (source != $Source::DEFAULT) {
				report($($CompilerProperties$Errors::PreviewNotLatest(sourceString, $Source::DEFAULT)));
				return false;
			}
		}
	}
	$var($String, profileString, $nc(this->options)->get($Option::PROFILE));
	if (profileString != nullptr) {
		$Profile* profile = $Profile::lookup(profileString);
		bool var$8 = $nc(target)->compareTo(static_cast<$Enum*>($Target::JDK1_8)) <= 0;
		if (var$8 && !$nc(profile)->isValid(target)) {
			reportDiag($($CompilerProperties$Warnings::ProfileTargetConflict(profile, target)));
		}
		if ($nc(this->options)->get($Option::BOOT_CLASS_PATH) != nullptr) {
			$init($CompilerProperties$Errors);
			reportDiag($CompilerProperties$Errors::ProfileBootclasspathConflict);
		}
	}
	bool var$9 = $nc(this->options)->isSet($Option::SOURCE_PATH);
	if (var$9 && $nc(this->options)->isSet($Option::MODULE_SOURCE_PATH)) {
		$init($CompilerProperties$Errors);
		reportDiag($CompilerProperties$Errors::SourcepathModulesourcepathConflict);
	}
	$init($Lint$LintCategory);
	bool lintOptions = $nc(this->options)->isUnset($Option::XLINT_CUSTOM, $$str({"-"_s, $Lint$LintCategory::OPTIONS->option}));
	bool var$10 = lintOptions && $nc(source)->compareTo(static_cast<$Enum*>($Source::DEFAULT)) < 0;
	if (var$10 && !$nc(this->options)->isSet($Option::RELEASE)) {
		{
			$var($BaseFileManager, baseFileManager, nullptr);
			bool var$11 = $instanceOf($BaseFileManager, fm);
			if (var$11) {
				$assign(baseFileManager, $cast($BaseFileManager, fm));
				var$11 = true;
			}
			if (var$11) {
				if (source->compareTo(static_cast<$Enum*>($Source::JDK8)) <= 0) {
					if ($nc(baseFileManager)->isDefaultBootClassPath()) {
						$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $($CompilerProperties$Warnings::SourceNoBootclasspath(source->name$)));
					}
				} else if ($nc(baseFileManager)->isDefaultSystemModulesPath()) {
					$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $($CompilerProperties$Warnings::SourceNoSystemModulesPath(source->name$)));
				}
			}
		}
	}
	bool obsoleteOptionFound = false;
	if ($nc(source)->compareTo(static_cast<$Enum*>($Source::MIN)) < 0) {
		$nc(this->log)->error($($CompilerProperties$Errors::OptionRemovedSource(source->name$, $Source::MIN->name$)));
	} else {
		if (source == $Source::MIN && lintOptions) {
			$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $($CompilerProperties$Warnings::OptionObsoleteSource(source->name$)));
			obsoleteOptionFound = true;
		}
	}
	if ($nc(target)->compareTo(static_cast<$Enum*>($Target::MIN)) < 0) {
		$nc(this->log)->error($($CompilerProperties$Errors::OptionRemovedTarget(target, $Target::MIN)));
	} else {
		if (target == $Target::MIN && lintOptions) {
			$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $($CompilerProperties$Warnings::OptionObsoleteTarget(target)));
			obsoleteOptionFound = true;
		}
	}
	$Target* t = target;
	bool var$12 = t->compareTo(static_cast<$Enum*>($Target::JDK1_8)) <= 0;
	checkOptionAllowed(var$12, static_cast<$Arguments$ErrorReporter*>($$new(Arguments$$Lambda$lambda$validate$2$2, this, t)), $$new($OptionArray, {
		$Option::BOOT_CLASS_PATH,
		$Option::XBOOTCLASSPATH_PREPEND,
		$Option::XBOOTCLASSPATH,
		$Option::XBOOTCLASSPATH_APPEND,
		$Option::ENDORSEDDIRS,
		$Option::DJAVA_ENDORSED_DIRS,
		$Option::EXTDIRS,
		$Option::DJAVA_EXT_DIRS,
		$Option::PROFILE
	}));
	bool var$13 = t->compareTo(static_cast<$Enum*>($Target::JDK1_9)) >= 0;
	checkOptionAllowed(var$13, static_cast<$Arguments$ErrorReporter*>($$new(Arguments$$Lambda$lambda$validate$2$2, this, t)), $$new($OptionArray, {
		$Option::MODULE_SOURCE_PATH,
		$Option::UPGRADE_MODULE_PATH,
		$Option::SYSTEM,
		$Option::MODULE_PATH,
		$Option::ADD_MODULES,
		$Option::ADD_EXPORTS,
		$Option::ADD_OPENS,
		$Option::ADD_READS,
		$Option::LIMIT_MODULES,
		$Option::PATCH_MODULE
	}));
	bool var$14 = lintOptions && $nc(this->options)->isSet($Option::PARAMETERS);
	if (var$14 && !$nc(target)->hasMethodParameters()) {
		$nc(this->log)->warning($($CompilerProperties$Warnings::OptionParametersUnsupported(target, $Target::JDK1_8)));
	}
	$init($StandardLocation);
	if ($nc(fm)->hasLocation($StandardLocation::MODULE_SOURCE_PATH)) {
		bool var$15 = !$nc(this->options)->isSet($Option::PROC, "only"_s);
		if (var$15 && !fm->hasLocation($StandardLocation::CLASS_OUTPUT)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($CompilerProperties$Errors::NoOutputDir);
		}
	}
	bool var$16 = $nc(fm)->hasLocation($StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH);
	if (var$16 && fm->hasLocation($StandardLocation::ANNOTATION_PROCESSOR_PATH)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($CompilerProperties$Errors::ProcessorpathNoProcessormodulepath);
	}
	if (obsoleteOptionFound && lintOptions) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $CompilerProperties$Warnings::OptionObsoleteSuppression);
	}
	$SourceVersion* sv = $Source::toSourceVersion(source);
	validateAddExports(sv);
	validateAddModules(sv);
	validateAddReads(sv);
	validateLimitModules(sv);
	validateDefaultModuleForCreatedFiles(sv);
	if (lintOptions && $nc(this->options)->isSet($Option::ADD_OPENS)) {
		$init($CompilerProperties$Warnings);
		$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $CompilerProperties$Warnings::AddopensIgnored);
	}
	return !this->errors && ($nc(this->log)->nerrors == 0);
}

void Arguments::validateAddExports($SourceVersion* sv) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, addExports, $nc(this->options)->get($Option::ADD_EXPORTS));
	if (addExports != nullptr) {
		$var($Pattern, p, $Option::ADD_EXPORTS->getPattern());
		{
			$var($StringArray, arr$, addExports->split($cstr({'\0'})));
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, e, arr$->get(i$));
				{
					$var($Matcher, m, $nc(p)->matcher(e));
					if ($nc(m)->matches()) {
						$var($String, sourceModuleName, m->group(1));
						if (!$SourceVersion::isName(sourceModuleName, sv)) {
							$nc(this->log)->warning($($CompilerProperties$Warnings::BadNameForOption($Option::ADD_EXPORTS, sourceModuleName)));
						}
						$var($String, sourcePackageName, m->group(2));
						if (!$SourceVersion::isName(sourcePackageName, sv)) {
							$nc(this->log)->warning($($CompilerProperties$Warnings::BadNameForOption($Option::ADD_EXPORTS, sourcePackageName)));
						}
						$var($String, targetNames, m->group(3));
						{
							$var($StringArray, arr$, $nc(targetNames)->split(","_s));
							int32_t len$ = arr$->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($String, targetName, arr$->get(i$));
								{
									{
										$var($String, s27201$, targetName);
										int32_t tmp27201$ = -1;
										switch ($nc(s27201$)->hashCode()) {
										case 0:
											{
												if (s27201$->equals(""_s)) {
													tmp27201$ = 0;
												}
												break;
											}
										case (int32_t)0xB4BA5BD4:
											{
												if (s27201$->equals("ALL-UNNAMED"_s)) {
													tmp27201$ = 1;
												}
												break;
											}
										}
										switch (tmp27201$) {
										case 0:
											{}
										case 1:
											{
												break;
											}
										default:
											{
												if (!$SourceVersion::isName(targetName, sv)) {
													$nc(this->log)->warning($($CompilerProperties$Warnings::BadNameForOption($Option::ADD_EXPORTS, targetName)));
												}
												break;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void Arguments::validateAddReads($SourceVersion* sv) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, addReads, $nc(this->options)->get($Option::ADD_READS));
	if (addReads != nullptr) {
		$var($Pattern, p, $Option::ADD_READS->getPattern());
		{
			$var($StringArray, arr$, addReads->split($cstr({'\0'})));
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, e, arr$->get(i$));
				{
					$var($Matcher, m, $nc(p)->matcher(e));
					if ($nc(m)->matches()) {
						$var($String, sourceName, m->group(1));
						if (!$SourceVersion::isName(sourceName, sv)) {
							$nc(this->log)->warning($($CompilerProperties$Warnings::BadNameForOption($Option::ADD_READS, sourceName)));
						}
						$var($String, targetNames, m->group(2));
						{
							$var($StringArray, arr$, $nc(targetNames)->split(","_s, -1));
							int32_t len$ = arr$->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($String, targetName, arr$->get(i$));
								{
									{
										$var($String, s28948$, targetName);
										int32_t tmp28948$ = -1;
										switch ($nc(s28948$)->hashCode()) {
										case 0:
											{
												if (s28948$->equals(""_s)) {
													tmp28948$ = 0;
												}
												break;
											}
										case (int32_t)0xB4BA5BD4:
											{
												if (s28948$->equals("ALL-UNNAMED"_s)) {
													tmp28948$ = 1;
												}
												break;
											}
										}
										switch (tmp28948$) {
										case 0:
											{}
										case 1:
											{
												break;
											}
										default:
											{
												if (!$SourceVersion::isName(targetName, sv)) {
													$nc(this->log)->warning($($CompilerProperties$Warnings::BadNameForOption($Option::ADD_READS, targetName)));
												}
												break;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void Arguments::validateAddModules($SourceVersion* sv) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, addModules, $nc(this->options)->get($Option::ADD_MODULES));
	if (addModules != nullptr) {
		{
			$var($StringArray, arr$, addModules->split(","_s));
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, moduleName, arr$->get(i$));
				{
					{
						$var($String, s30167$, moduleName);
						int32_t tmp30167$ = -1;
						switch ($nc(s30167$)->hashCode()) {
						case 0:
							{
								if (s30167$->equals(""_s)) {
									tmp30167$ = 0;
								}
								break;
							}
						case (int32_t)0xC0F7CFFB:
							{
								if (s30167$->equals("ALL-SYSTEM"_s)) {
									tmp30167$ = 1;
								}
								break;
							}
						case 0x3FCA5C9A:
							{
								if (s30167$->equals("ALL-MODULE-PATH"_s)) {
									tmp30167$ = 2;
								}
								break;
							}
						}
						switch (tmp30167$) {
						case 0:
							{}
						case 1:
							{}
						case 2:
							{
								break;
							}
						default:
							{
								if (!$SourceVersion::isName(moduleName, sv)) {
									$nc(this->log)->error($($CompilerProperties$Errors::BadNameForOption($Option::ADD_MODULES, moduleName)));
								}
								break;
							}
						}
					}
				}
			}
		}
	}
}

void Arguments::validateLimitModules($SourceVersion* sv) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, limitModules, $nc(this->options)->get($Option::LIMIT_MODULES));
	if (limitModules != nullptr) {
		{
			$var($StringArray, arr$, limitModules->split(","_s));
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, moduleName, arr$->get(i$));
				{
					{
						$var($String, s31321$, moduleName);
						int32_t tmp31321$ = -1;
						switch ($nc(s31321$)->hashCode()) {
						case 0:
							{
								if (s31321$->equals(""_s)) {
									tmp31321$ = 0;
								}
								break;
							}
						}
						switch (tmp31321$) {
						case 0:
							{
								break;
							}
						default:
							{
								if (!$SourceVersion::isName(moduleName, sv)) {
									$nc(this->log)->error($($CompilerProperties$Errors::BadNameForOption($Option::LIMIT_MODULES, moduleName)));
								}
								break;
							}
						}
					}
				}
			}
		}
	}
}

void Arguments::validateDefaultModuleForCreatedFiles($SourceVersion* sv) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, moduleName, $nc(this->options)->get($Option::DEFAULT_MODULE_FOR_CREATED_FILES));
	if (moduleName != nullptr) {
		if (!$SourceVersion::isName(moduleName, sv)) {
			$nc(this->log)->error($($CompilerProperties$Errors::BadNameForOption($Option::DEFAULT_MODULE_FOR_CREATED_FILES, moduleName)));
		}
	}
}

bool Arguments::isEmpty() {
	bool var$1 = ((this->files == nullptr) || $nc(this->files)->isEmpty());
	bool var$0 = var$1 && ((this->fileObjects == nullptr) || $nc(this->fileObjects)->isEmpty());
	return var$0 && (this->classNames == nullptr || $nc(this->classNames)->isEmpty());
}

void Arguments::allowEmpty() {
	this->emptyAllowed = true;
}

$Map* Arguments::getDeferredFileManagerOptions() {
	return this->deferredFileManagerOptions;
}

$Set* Arguments::getPluginOpts() {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, plugins, $nc(this->options)->get($Option::PLUGIN));
	if (plugins == nullptr) {
		return $Collections::emptySet();
	}
	$var($Set, pluginOpts, $new($LinkedHashSet));
	{
		$var($StringArray, arr$, $nc(plugins)->split("\\x00"_s));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, plugin, arr$->get(i$));
			{
				pluginOpts->add($($List::from($($nc(plugin)->split("\\s+"_s)))));
			}
		}
	}
	return $Collections::unmodifiableSet(pluginOpts);
}

$List* Arguments::getDocLintOpts() {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, xdoclint, $nc(this->options)->get($Option::XDOCLINT));
	$var($String, xdoclintCustom, $nc(this->options)->get($Option::XDOCLINT_CUSTOM));
	if (xdoclint == nullptr && xdoclintCustom == nullptr) {
		return $List::nil();
	}
	$var($Set, doclintOpts, $new($LinkedHashSet));
	if (xdoclint != nullptr) {
		$init($DocLint);
		doclintOpts->add($DocLint::XMSGS_OPTION);
	}
	if (xdoclintCustom != nullptr) {
		{
			$var($StringArray, arr$, xdoclintCustom->split("\\s+"_s));
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, s, arr$->get(i$));
				{
					if ($nc(s)->isEmpty()) {
						continue;
					}
					$init($DocLint);
					doclintOpts->add($$str({$DocLint::XMSGS_CUSTOM_PREFIX, s}));
				}
			}
		}
	}
	$init($DocLint);
	if (doclintOpts->equals($($Collections::singleton($$str({$DocLint::XMSGS_CUSTOM_PREFIX, "none"_s}))))) {
		return $List::nil();
	}
	$var($String, checkPackages, $nc(this->options)->get($Option::XDOCLINT_PACKAGE));
	if (checkPackages != nullptr) {
		doclintOpts->add($$str({$DocLint::XCHECK_PACKAGE, checkPackages}));
	}
	return $List::from($fcast($StringArray, $(doclintOpts->toArray($$new($StringArray, doclintOpts->size())))));
}

bool Arguments::checkDirectory($Option* option) {
	$useLocalCurrentObjectStackCache();
	$var($String, value, $nc(this->options)->get(option));
	if (value == nullptr) {
		return true;
	}
	$var($Path, file, $Paths::get(value, $$new($StringArray, 0)));
	bool var$0 = $Files::exists(file, $$new($LinkOptionArray, 0));
	if (var$0 && !$Files::isDirectory(file, $$new($LinkOptionArray, 0))) {
		reportDiag($($CompilerProperties$Errors::FileNotDirectory(value)));
		return false;
	}
	return true;
}

void Arguments::checkOptionAllowed(bool allowed, $Arguments$ErrorReporter* r, $OptionArray* opts) {
	$useLocalCurrentObjectStackCache();
	if (!allowed) {
		$nc($($nc($($Stream::of(opts)))->filter(static_cast<$Predicate*>($$new(Arguments$$Lambda$isSet$3, static_cast<$Options*>($nc(this->options)))))))->forEach(static_cast<$Consumer*>($$new(Arguments$$Lambda$report$4, static_cast<$Arguments$ErrorReporter*>($nc(r)))));
	}
}

void Arguments::reportDiag($JCDiagnostic$DiagnosticInfo* diag) {
	$useLocalCurrentObjectStackCache();
	this->errors = true;
	$init($Arguments$3);
	switch ($nc($Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode)->get($nc((this->errorMode))->ordinal())) {
	case 1:
		{
			{
				$var($String, msg, $nc(this->log)->localize(diag));
				$throwNew($PropagatedException, $$new($IllegalArgumentException, msg));
			}
		}
	case 2:
		{
			{
				$var($String, msg, $nc(this->log)->localize(diag));
				$throwNew($PropagatedException, $$new($IllegalStateException, msg));
			}
		}
	case 3:
		{
			report(diag);
		}
	}
}

void Arguments::error($Option$InvalidValueException* f) {
	$useLocalCurrentObjectStackCache();
	$var($String, msg, $nc(f)->getMessage());
	this->errors = true;
	$init($Arguments$3);
	switch ($nc($Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode)->get($nc((this->errorMode))->ordinal())) {
	case 1:
		{
			{
				$throwNew($PropagatedException, $$new($IllegalArgumentException, msg, $(f->getCause())));
			}
		}
	case 2:
		{
			{
				$throwNew($PropagatedException, $$new($IllegalStateException, msg, $(f->getCause())));
			}
		}
	case 3:
		{
			$nc(this->log)->printRawLines(msg);
		}
	}
}

void Arguments::report($JCDiagnostic$DiagnosticInfo* diag) {
	$useLocalCurrentObjectStackCache();
	{
		$var($JCDiagnostic$Error, errorDiag, nullptr);
		$var($JCDiagnostic$Warning, warningDiag, nullptr);
		bool var$0 = $instanceOf($JCDiagnostic$Error, diag);
		if (var$0) {
			$assign(errorDiag, $cast($JCDiagnostic$Error, diag));
			var$0 = true;
		}
		if (var$0) {
			$nc(this->log)->error(errorDiag);
		} else {
			bool var$2 = $instanceOf($JCDiagnostic$Warning, diag);
			if (var$2) {
				$assign(warningDiag, $cast($JCDiagnostic$Warning, diag));
				var$2 = true;
			}
			if (var$2) {
				$nc(this->log)->warning(warningDiag);
			}
		}
	}
}

$JavaFileManager* Arguments::getFileManager() {
	if (this->fileManager == nullptr) {
		$load($JavaFileManager);
		$set(this, fileManager, $cast($JavaFileManager, $nc(this->context)->get($JavaFileManager::class$)));
	}
	return this->fileManager;
}

$ListBuffer* Arguments::toList($Iterable* items) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, list, $new($ListBuffer));
	if (items != nullptr) {
		{
			$var($Iterator, i$, items->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, item, i$->next());
				{
					list->add(item);
				}
			}
		}
	}
	return list;
}

$Set* Arguments::toSet($Iterable* items) {
	$useLocalCurrentObjectStackCache();
	$var($Set, set, $new($LinkedHashSet));
	if (items != nullptr) {
		{
			$var($Iterator, i$, items->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, item, i$->next());
				{
					set->add(item);
				}
			}
		}
	}
	return set;
}

void Arguments::lambda$validate$2($Target* t, $Option* option) {
	reportDiag($($CompilerProperties$Errors::OptionNotAllowedWithTarget(option, t)));
}

bool Arguments::lambda$processArgs$1($Set* allowableOpts, $OptionHelper* helper, bool allowOperands, bool checkFileManager, $Iterable* extra) {
	return doProcessArgs(extra, allowableOpts, helper, allowOperands, checkFileManager);
}

void Arguments::lambda$handleReleaseOptions$0($Option* option) {
	reportDiag($($CompilerProperties$Errors::ReleaseBootclasspathConflict(option)));
}

void clinit$Arguments($Class* class$) {
	$assignStatic(Arguments::argsKey, $new($Context$Key));
}

Arguments::Arguments() {
}

$Class* Arguments::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Arguments$$Lambda$lambda$handleReleaseOptions$0::classInfo$.name)) {
			return Arguments$$Lambda$lambda$handleReleaseOptions$0::load$(name, initialize);
		}
		if (name->equals(Arguments$$Lambda$lambda$processArgs$1$1::classInfo$.name)) {
			return Arguments$$Lambda$lambda$processArgs$1$1::load$(name, initialize);
		}
		if (name->equals(Arguments$$Lambda$lambda$validate$2$2::classInfo$.name)) {
			return Arguments$$Lambda$lambda$validate$2$2::load$(name, initialize);
		}
		if (name->equals(Arguments$$Lambda$isSet$3::classInfo$.name)) {
			return Arguments$$Lambda$isSet$3::load$(name, initialize);
		}
		if (name->equals(Arguments$$Lambda$report$4::classInfo$.name)) {
			return Arguments$$Lambda$report$4::load$(name, initialize);
		}
	}
	$loadClass(Arguments, name, initialize, &_Arguments_ClassInfo_, clinit$Arguments, allocate$Arguments);
	return class$;
}

$Class* Arguments::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com