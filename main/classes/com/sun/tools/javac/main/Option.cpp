#include <com/sun/tools/javac/main/Option.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/main/Option$1.h>
#include <com/sun/tools/javac/main/Option$10.h>
#include <com/sun/tools/javac/main/Option$11.h>
#include <com/sun/tools/javac/main/Option$12.h>
#include <com/sun/tools/javac/main/Option$13.h>
#include <com/sun/tools/javac/main/Option$14.h>
#include <com/sun/tools/javac/main/Option$15.h>
#include <com/sun/tools/javac/main/Option$16.h>
#include <com/sun/tools/javac/main/Option$17.h>
#include <com/sun/tools/javac/main/Option$18.h>
#include <com/sun/tools/javac/main/Option$19.h>
#include <com/sun/tools/javac/main/Option$2.h>
#include <com/sun/tools/javac/main/Option$20.h>
#include <com/sun/tools/javac/main/Option$21.h>
#include <com/sun/tools/javac/main/Option$22.h>
#include <com/sun/tools/javac/main/Option$23.h>
#include <com/sun/tools/javac/main/Option$24.h>
#include <com/sun/tools/javac/main/Option$25.h>
#include <com/sun/tools/javac/main/Option$26.h>
#include <com/sun/tools/javac/main/Option$27.h>
#include <com/sun/tools/javac/main/Option$28.h>
#include <com/sun/tools/javac/main/Option$29.h>
#include <com/sun/tools/javac/main/Option$3.h>
#include <com/sun/tools/javac/main/Option$30.h>
#include <com/sun/tools/javac/main/Option$31.h>
#include <com/sun/tools/javac/main/Option$32.h>
#include <com/sun/tools/javac/main/Option$33.h>
#include <com/sun/tools/javac/main/Option$34.h>
#include <com/sun/tools/javac/main/Option$35.h>
#include <com/sun/tools/javac/main/Option$36.h>
#include <com/sun/tools/javac/main/Option$37.h>
#include <com/sun/tools/javac/main/Option$38.h>
#include <com/sun/tools/javac/main/Option$39.h>
#include <com/sun/tools/javac/main/Option$4.h>
#include <com/sun/tools/javac/main/Option$40.h>
#include <com/sun/tools/javac/main/Option$5.h>
#include <com/sun/tools/javac/main/Option$6.h>
#include <com/sun/tools/javac/main/Option$7.h>
#include <com/sun/tools/javac/main/Option$8.h>
#include <com/sun/tools/javac/main/Option$9.h>
#include <com/sun/tools/javac/main/Option$ArgKind.h>
#include <com/sun/tools/javac/main/Option$ChoiceKind.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/EnumSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef A
#undef ADD_EXPORTS
#undef ADD_MODULES
#undef ADD_OPENS
#undef ADD_READS
#undef ADJACENT
#undef ANYOF
#undef AT
#undef BASIC
#undef BOOT_CLASS_PATH
#undef CLASS_PATH
#undef COMPACT_FORMAT
#undef D
#undef DEBUG
#undef DEFAULT_MAX_LINE_LENGTH
#undef DEFAULT_MODULE_FOR_CREATED_FILES
#undef DEFAULT_SYNOPSIS_WIDTH
#undef DEPRECATION
#undef DIAGS
#undef DJAVA_ENDORSED_DIRS
#undef DJAVA_EXT_DIRS
#undef DOE
#undef ENCODING
#undef ENDORSEDDIRS
#undef EXTDIRS
#undef EXTENDED
#undef FILEMANAGER
#undef FULLVERSION
#undef G
#undef G_CUSTOM
#undef G_NONE
#undef H
#undef HELP
#undef HELP_LINT
#undef HIDDEN
#undef IMPLICIT
#undef INFO
#undef INHERIT_RUNTIME_ENVIRONMENT
#undef J
#undef JAVAC
#undef LARGE_INDENT
#undef LIMIT_MODULES
#undef MODULE
#undef MODULE_PATH
#undef MODULE_SOURCE_PATH
#undef MODULE_VERSION
#undef MOREINFO
#undef MULTIRELEASE
#undef NONE
#undef NOWARN
#undef O
#undef ONEOF
#undef PARAMETERS
#undef PATCH_MODULE
#undef PLUGIN
#undef PREVIEW
#undef PRINTSOURCE
#undef PROC
#undef PROCESSOR
#undef PROCESSOR_MODULE_PATH
#undef PROCESSOR_PATH
#undef PROFILE
#undef PROMPT
#undef RELEASE
#undef REQUIRED
#undef S
#undef SHOULDSTOP
#undef SMALL_INDENT
#undef SOURCE
#undef SOURCEFILE
#undef SOURCE_PATH
#undef STANDARD
#undef STDOUT
#undef SYSTEM
#undef TARGET
#undef UPGRADE_MODULE_PATH
#undef VERBOSE
#undef VERSION
#undef WARNUNCHECKED
#undef WERROR
#undef X
#undef XBOOTCLASSPATH
#undef XBOOTCLASSPATH_APPEND
#undef XBOOTCLASSPATH_PREPEND
#undef XD
#undef XDIAGS
#undef XDOCLINT
#undef XDOCLINT_CUSTOM
#undef XDOCLINT_PACKAGE
#undef XJCOV
#undef XLINT
#undef XLINT_CUSTOM
#undef XMAXERRS
#undef XMAXWARNS
#undef XPKGINFO
#undef XPREFER
#undef XPRINT
#undef XPRINTPROCESSORINFO
#undef XPRINTROUNDS
#undef XSTDOUT
#undef XXUSERPATHSFIRST

using $Lint$LintCategoryArray = $Array<::com::sun::tools::javac::code::Lint$LintCategory>;
using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Option$1 = ::com::sun::tools::javac::main::Option$1;
using $Option$10 = ::com::sun::tools::javac::main::Option$10;
using $Option$11 = ::com::sun::tools::javac::main::Option$11;
using $Option$12 = ::com::sun::tools::javac::main::Option$12;
using $Option$13 = ::com::sun::tools::javac::main::Option$13;
using $Option$14 = ::com::sun::tools::javac::main::Option$14;
using $Option$15 = ::com::sun::tools::javac::main::Option$15;
using $Option$16 = ::com::sun::tools::javac::main::Option$16;
using $Option$17 = ::com::sun::tools::javac::main::Option$17;
using $Option$18 = ::com::sun::tools::javac::main::Option$18;
using $Option$19 = ::com::sun::tools::javac::main::Option$19;
using $Option$2 = ::com::sun::tools::javac::main::Option$2;
using $Option$20 = ::com::sun::tools::javac::main::Option$20;
using $Option$21 = ::com::sun::tools::javac::main::Option$21;
using $Option$22 = ::com::sun::tools::javac::main::Option$22;
using $Option$23 = ::com::sun::tools::javac::main::Option$23;
using $Option$24 = ::com::sun::tools::javac::main::Option$24;
using $Option$25 = ::com::sun::tools::javac::main::Option$25;
using $Option$26 = ::com::sun::tools::javac::main::Option$26;
using $Option$27 = ::com::sun::tools::javac::main::Option$27;
using $Option$28 = ::com::sun::tools::javac::main::Option$28;
using $Option$29 = ::com::sun::tools::javac::main::Option$29;
using $Option$3 = ::com::sun::tools::javac::main::Option$3;
using $Option$30 = ::com::sun::tools::javac::main::Option$30;
using $Option$31 = ::com::sun::tools::javac::main::Option$31;
using $Option$32 = ::com::sun::tools::javac::main::Option$32;
using $Option$33 = ::com::sun::tools::javac::main::Option$33;
using $Option$34 = ::com::sun::tools::javac::main::Option$34;
using $Option$35 = ::com::sun::tools::javac::main::Option$35;
using $Option$36 = ::com::sun::tools::javac::main::Option$36;
using $Option$37 = ::com::sun::tools::javac::main::Option$37;
using $Option$38 = ::com::sun::tools::javac::main::Option$38;
using $Option$39 = ::com::sun::tools::javac::main::Option$39;
using $Option$4 = ::com::sun::tools::javac::main::Option$4;
using $Option$40 = ::com::sun::tools::javac::main::Option$40;
using $Option$5 = ::com::sun::tools::javac::main::Option$5;
using $Option$6 = ::com::sun::tools::javac::main::Option$6;
using $Option$7 = ::com::sun::tools::javac::main::Option$7;
using $Option$8 = ::com::sun::tools::javac::main::Option$8;
using $Option$9 = ::com::sun::tools::javac::main::Option$9;
using $Option$ArgKind = ::com::sun::tools::javac::main::Option$ArgKind;
using $Option$ChoiceKind = ::com::sun::tools::javac::main::Option$ChoiceKind;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $EnumSet = ::java::util::EnumSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$$Lambda$lambda$showHelp$0 : public $Predicate {
	$class(Option$$Lambda$lambda$showHelp$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Option$OptionKind* kind) {
		$set(this, kind, kind);
	}
	virtual bool test(Object$* o) override {
		 return Option::lambda$showHelp$0(kind, $cast(Option, o));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$$Lambda$lambda$showHelp$0>());
	}
	$Option$OptionKind* kind = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Option$$Lambda$lambda$showHelp$0::fieldInfos[2] = {
	{"kind", "Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC, $field(Option$$Lambda$lambda$showHelp$0, kind)},
	{}
};
$MethodInfo Option$$Lambda$lambda$showHelp$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Option$OptionKind;)V", nullptr, $PUBLIC, $method(static_cast<void(Option$$Lambda$lambda$showHelp$0::*)($Option$OptionKind*)>(&Option$$Lambda$lambda$showHelp$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$$Lambda$lambda$showHelp$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$$Lambda$lambda$showHelp$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Option$$Lambda$lambda$showHelp$0::load$($String* name, bool initialize) {
	$loadClass(Option$$Lambda$lambda$showHelp$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$$Lambda$lambda$showHelp$0::class$ = nullptr;

class Option$$Lambda$lambda$showHelp$1$1 : public $Consumer {
	$class(Option$$Lambda$lambda$showHelp$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Log* log) {
		$set(this, log, log);
	}
	virtual void accept(Object$* o) override {
		Option::lambda$showHelp$1(log, $cast(Option, o));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$$Lambda$lambda$showHelp$1$1>());
	}
	$Log* log = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Option$$Lambda$lambda$showHelp$1$1::fieldInfos[2] = {
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC, $field(Option$$Lambda$lambda$showHelp$1$1, log)},
	{}
};
$MethodInfo Option$$Lambda$lambda$showHelp$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PUBLIC, $method(static_cast<void(Option$$Lambda$lambda$showHelp$1$1::*)($Log*)>(&Option$$Lambda$lambda$showHelp$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$$Lambda$lambda$showHelp$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$$Lambda$lambda$showHelp$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Option$$Lambda$lambda$showHelp$1$1::load$($String* name, bool initialize) {
	$loadClass(Option$$Lambda$lambda$showHelp$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$$Lambda$lambda$showHelp$1$1::class$ = nullptr;

class Option$$Lambda$lambda$help$2$2 : public $Function {
	$class(Option$$Lambda$lambda$help$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$(Option* inst, $Log* log) {
		$set(this, inst$, inst);
		$set(this, log, log);
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($nc(inst$)->lambda$help$2(log, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$$Lambda$lambda$help$2$2>());
	}
	Option* inst$ = nullptr;
	$Log* log = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Option$$Lambda$lambda$help$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Option$$Lambda$lambda$help$2$2, inst$)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC, $field(Option$$Lambda$lambda$help$2$2, log)},
	{}
};
$MethodInfo Option$$Lambda$lambda$help$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Option;Lcom/sun/tools/javac/util/Log;)V", nullptr, $PUBLIC, $method(static_cast<void(Option$$Lambda$lambda$help$2$2::*)(Option*,$Log*)>(&Option$$Lambda$lambda$help$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$$Lambda$lambda$help$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$$Lambda$lambda$help$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Option$$Lambda$lambda$help$2$2::load$($String* name, bool initialize) {
	$loadClass(Option$$Lambda$lambda$help$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$$Lambda$lambda$help$2$2::class$ = nullptr;

class Option$$Lambda$lambda$getOptions$3$3 : public $Predicate {
	$class(Option$$Lambda$lambda$getOptions$3$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Option$OptionGroup* group) {
		$set(this, group, group);
	}
	virtual bool test(Object$* o) override {
		 return Option::lambda$getOptions$3(group, $cast(Option, o));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$$Lambda$lambda$getOptions$3$3>());
	}
	$Option$OptionGroup* group = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Option$$Lambda$lambda$getOptions$3$3::fieldInfos[2] = {
	{"group", "Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PUBLIC, $field(Option$$Lambda$lambda$getOptions$3$3, group)},
	{}
};
$MethodInfo Option$$Lambda$lambda$getOptions$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PUBLIC, $method(static_cast<void(Option$$Lambda$lambda$getOptions$3$3::*)($Option$OptionGroup*)>(&Option$$Lambda$lambda$getOptions$3$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$$Lambda$lambda$getOptions$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$$Lambda$lambda$getOptions$3$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Option$$Lambda$lambda$getOptions$3$3::load$($String* name, bool initialize) {
	$loadClass(Option$$Lambda$lambda$getOptions$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$$Lambda$lambda$getOptions$3$3::class$ = nullptr;

class Option$$Lambda$lambda$getOptions$4$4 : public $Supplier {
	$class(Option$$Lambda$lambda$getOptions$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(Option::lambda$getOptions$4());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$$Lambda$lambda$getOptions$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Option$$Lambda$lambda$getOptions$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Option$$Lambda$lambda$getOptions$4$4::*)()>(&Option$$Lambda$lambda$getOptions$4$4::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$$Lambda$lambda$getOptions$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$$Lambda$lambda$getOptions$4$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* Option$$Lambda$lambda$getOptions$4$4::load$($String* name, bool initialize) {
	$loadClass(Option$$Lambda$lambda$getOptions$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$$Lambda$lambda$getOptions$4$4::class$ = nullptr;

$FieldInfo _Option_FieldInfo_[] = {
	{"G", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, G)},
	{"G_NONE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, G_NONE)},
	{"G_CUSTOM", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, G_CUSTOM)},
	{"XLINT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XLINT)},
	{"XLINT_CUSTOM", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XLINT_CUSTOM)},
	{"XDOCLINT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XDOCLINT)},
	{"XDOCLINT_CUSTOM", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XDOCLINT_CUSTOM)},
	{"XDOCLINT_PACKAGE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XDOCLINT_PACKAGE)},
	{"NOWARN", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, NOWARN)},
	{"VERBOSE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, VERBOSE)},
	{"DEPRECATION", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, DEPRECATION)},
	{"CLASS_PATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, CLASS_PATH)},
	{"SOURCE_PATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SOURCE_PATH)},
	{"MODULE_SOURCE_PATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, MODULE_SOURCE_PATH)},
	{"MODULE_PATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, MODULE_PATH)},
	{"UPGRADE_MODULE_PATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, UPGRADE_MODULE_PATH)},
	{"SYSTEM", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SYSTEM)},
	{"PATCH_MODULE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PATCH_MODULE)},
	{"BOOT_CLASS_PATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, BOOT_CLASS_PATH)},
	{"XBOOTCLASSPATH_PREPEND", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XBOOTCLASSPATH_PREPEND)},
	{"XBOOTCLASSPATH_APPEND", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XBOOTCLASSPATH_APPEND)},
	{"XBOOTCLASSPATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XBOOTCLASSPATH)},
	{"EXTDIRS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, EXTDIRS)},
	{"DJAVA_EXT_DIRS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, DJAVA_EXT_DIRS)},
	{"ENDORSEDDIRS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, ENDORSEDDIRS)},
	{"DJAVA_ENDORSED_DIRS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, DJAVA_ENDORSED_DIRS)},
	{"PROC", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PROC)},
	{"PROCESSOR", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PROCESSOR)},
	{"PROCESSOR_PATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PROCESSOR_PATH)},
	{"PROCESSOR_MODULE_PATH", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PROCESSOR_MODULE_PATH)},
	{"PARAMETERS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PARAMETERS)},
	{"D", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, D)},
	{"S", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, S)},
	{"H", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, H)},
	{"IMPLICIT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, IMPLICIT)},
	{"ENCODING", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, ENCODING)},
	{"SOURCE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SOURCE)},
	{"TARGET", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, TARGET)},
	{"RELEASE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, RELEASE)},
	{"PREVIEW", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PREVIEW)},
	{"PROFILE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PROFILE)},
	{"VERSION", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, VERSION)},
	{"FULLVERSION", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, FULLVERSION)},
	{"HELP", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, HELP)},
	{"A", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, A)},
	{"DEFAULT_MODULE_FOR_CREATED_FILES", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, DEFAULT_MODULE_FOR_CREATED_FILES)},
	{"X", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, X)},
	{"HELP_LINT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, HELP_LINT)},
	{"J", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, J)},
	{"MOREINFO", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, MOREINFO)},
	{"WERROR", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, WERROR)},
	{"PROMPT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PROMPT)},
	{"DOE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, DOE)},
	{"PRINTSOURCE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PRINTSOURCE)},
	{"WARNUNCHECKED", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, WARNUNCHECKED)},
	{"XMAXERRS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XMAXERRS)},
	{"XMAXWARNS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XMAXWARNS)},
	{"XSTDOUT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XSTDOUT)},
	{"XPRINT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XPRINT)},
	{"XPRINTROUNDS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XPRINTROUNDS)},
	{"XPRINTPROCESSORINFO", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XPRINTPROCESSORINFO)},
	{"XPREFER", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XPREFER)},
	{"XXUSERPATHSFIRST", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XXUSERPATHSFIRST)},
	{"XPKGINFO", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XPKGINFO)},
	{"O", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, O)},
	{"XJCOV", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XJCOV)},
	{"PLUGIN", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, PLUGIN)},
	{"XDIAGS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XDIAGS)},
	{"DEBUG", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, DEBUG)},
	{"SHOULDSTOP", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SHOULDSTOP)},
	{"DIAGS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, DIAGS)},
	{"XD", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, XD)},
	{"ADD_EXPORTS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, ADD_EXPORTS)},
	{"ADD_OPENS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, ADD_OPENS)},
	{"ADD_READS", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, ADD_READS)},
	{"MODULE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, MODULE)},
	{"ADD_MODULES", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, ADD_MODULES)},
	{"LIMIT_MODULES", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, LIMIT_MODULES)},
	{"MODULE_VERSION", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, MODULE_VERSION)},
	{"AT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, AT)},
	{"SOURCEFILE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, SOURCEFILE)},
	{"MULTIRELEASE", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, MULTIRELEASE)},
	{"INHERIT_RUNTIME_ENVIRONMENT", "Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option, INHERIT_RUNTIME_ENVIRONMENT)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/Option;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option, $VALUES)},
	{"primaryName", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Option, primaryName)},
	{"names", "[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Option, names)},
	{"argsNameKey", "Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $field(Option, argsNameKey)},
	{"descrKey", "Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $field(Option, descrKey)},
	{"kind", "Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PRIVATE | $FINAL, $field(Option, kind)},
	{"group", "Lcom/sun/tools/javac/main/Option$OptionGroup;", nullptr, $PRIVATE | $FINAL, $field(Option, group)},
	{"argKind", "Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PRIVATE | $FINAL, $field(Option, argKind)},
	{"choiceKind", "Lcom/sun/tools/javac/main/Option$ChoiceKind;", nullptr, $PRIVATE | $FINAL, $field(Option, choiceKind)},
	{"choices", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(Option, choices)},
	{"SMALL_INDENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Option, SMALL_INDENT)},
	{"LARGE_INDENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Option, LARGE_INDENT)},
	{"DEFAULT_SYNOPSIS_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Option, DEFAULT_SYNOPSIS_WIDTH)},
	{"DEFAULT_MAX_LINE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Option, DEFAULT_MAX_LINE_LENGTH)},
	{"COMPACT_FORMAT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Option, COMPACT_FORMAT)},
	{}
};

$MethodInfo _Option_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/Option;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OptionArray*(*)()>(&Option::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", $PRIVATE, $method(static_cast<void(Option::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", $PRIVATE, $method(static_cast<void(Option::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ArgKind*)>(&Option::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", $PRIVATE, $method(static_cast<void(Option::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", $PRIVATE, $method(static_cast<void(Option::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ArgKind*)>(&Option::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ChoiceKind;Ljava/util/Set;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ChoiceKind;Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(Option::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ChoiceKind*,$Set*)>(&Option::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ChoiceKind;[Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ChoiceKind;[Ljava/lang/String;)V", $PRIVATE | $TRANSIENT, $method(static_cast<void(Option::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ChoiceKind*,$StringArray*)>(&Option::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ChoiceKind;Ljava/util/Set;Lcom/sun/tools/javac/main/Option$ArgKind;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ChoiceKind;Ljava/util/Set<Ljava/lang/String;>;Lcom/sun/tools/javac/main/Option$ArgKind;)V", $PRIVATE, $method(static_cast<void(Option::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ChoiceKind*,$Set*,$Option$ArgKind*)>(&Option::init$))},
	{"findSeparator", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&Option::findSeparator))},
	{"getArgKind", "()Lcom/sun/tools/javac/main/Option$ArgKind;", nullptr, $PUBLIC},
	{"getJavaCompilerOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;", $STATIC, $method(static_cast<$Set*(*)()>(&Option::getJavaCompilerOptions))},
	{"getJavacFileManagerOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&Option::getJavacFileManagerOptions))},
	{"getJavacToolOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&Option::getJavacToolOptions))},
	{"getKind", "()Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC},
	{"getOptions", "(Lcom/sun/tools/javac/main/Option$OptionGroup;)Ljava/util/Set;", "(Lcom/sun/tools/javac/main/Option$OptionGroup;)Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($Option$OptionGroup*)>(&Option::getOptions))},
	{"getPattern", "()Ljava/util/regex/Pattern;", nullptr, $PUBLIC},
	{"getPrimaryName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXLintChoices", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)()>(&Option::getXLintChoices))},
	{"handleOption", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/util/Iterator;)V", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/util/Iterator<Ljava/lang/String;>;)V", $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{"hasArg", "()Z", nullptr, $PUBLIC},
	{"hasSeparateArg", "()Z", nullptr, $PUBLIC},
	{"help", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PROTECTED},
	{"help", "(Lcom/sun/tools/javac/util/Log;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"helpSynopsis", "(Ljava/lang/String;Lcom/sun/tools/javac/util/Log;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Option::*)($String*,$Log*)>(&Option::helpSynopsis))},
	{"lambda$getOptions$3", "(Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Option$OptionGroup*,Option*)>(&Option::lambda$getOptions$3))},
	{"lambda$getOptions$4", "()Ljava/util/EnumSet;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$EnumSet*(*)()>(&Option::lambda$getOptions$4))},
	{"lambda$help$2", "(Lcom/sun/tools/javac/util/Log;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(Option::*)($Log*,$String*)>(&Option::lambda$help$2))},
	{"lambda$showHelp$0", "(Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Option$OptionKind*,Option*)>(&Option::lambda$showHelp$0))},
	{"lambda$showHelp$1", "(Lcom/sun/tools/javac/util/Log;Lcom/sun/tools/javac/main/Option;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Log*,Option*)>(&Option::lambda$showHelp$1))},
	{"lookup", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option*(*)($String*)>(&Option::lookup))},
	{"lookup", "(Ljava/lang/String;Ljava/util/Set;)Lcom/sun/tools/javac/main/Option;", "(Ljava/lang/String;Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;)Lcom/sun/tools/javac/main/Option;", $PUBLIC | $STATIC, $method(static_cast<Option*(*)($String*,$Set*)>(&Option::lookup))},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"matches", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Option::*)($String*,$String*)>(&Option::matches))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{"showHelp", "(Lcom/sun/tools/javac/util/Log;Lcom/sun/tools/javac/main/Option$OptionKind;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Log*,$Option$OptionKind*)>(&Option::showHelp))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Option*(*)($String*)>(&Option::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OptionArray*(*)()>(&Option::values))},
	{}
};

$InnerClassInfo _Option_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$41", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.main.Option$PkgInfo", "com.sun.tools.javac.main.Option", "PkgInfo", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$HiddenGroup", "com.sun.tools.javac.main.Option", "HiddenGroup", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$ChoiceKind", "com.sun.tools.javac.main.Option", "ChoiceKind", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$OptionGroup", "com.sun.tools.javac.main.Option", "OptionGroup", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$OptionKind", "com.sun.tools.javac.main.Option", "OptionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$ArgKind", "com.sun.tools.javac.main.Option", "ArgKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$InvalidValueException", "com.sun.tools.javac.main.Option", "InvalidValueException", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.main.Option$40", nullptr, nullptr, 0},
	{"com.sun.tools.javac.main.Option$39", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$38", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$37", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$36", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$35", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$34", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$33", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$32", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$31", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$30", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$29", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$28", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$27", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$26", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$25", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$24", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$23", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$22", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$21", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$20", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$19", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$18", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$17", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$16", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$15", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$14", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$13", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$12", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$11", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$10", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$9", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$8", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$7", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$6", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$5", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$4", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$3", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.main.Option$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option",
	"java.lang.Enum",
	nullptr,
	_Option_FieldInfo_,
	_Option_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option;>;",
	nullptr,
	_Option_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option$41,com.sun.tools.javac.main.Option$PkgInfo,com.sun.tools.javac.main.Option$HiddenGroup,com.sun.tools.javac.main.Option$ChoiceKind,com.sun.tools.javac.main.Option$OptionGroup,com.sun.tools.javac.main.Option$OptionKind,com.sun.tools.javac.main.Option$ArgKind,com.sun.tools.javac.main.Option$InvalidValueException,com.sun.tools.javac.main.Option$40,com.sun.tools.javac.main.Option$39,com.sun.tools.javac.main.Option$38,com.sun.tools.javac.main.Option$37,com.sun.tools.javac.main.Option$36,com.sun.tools.javac.main.Option$35,com.sun.tools.javac.main.Option$34,com.sun.tools.javac.main.Option$33,com.sun.tools.javac.main.Option$32,com.sun.tools.javac.main.Option$31,com.sun.tools.javac.main.Option$30,com.sun.tools.javac.main.Option$29,com.sun.tools.javac.main.Option$28,com.sun.tools.javac.main.Option$27,com.sun.tools.javac.main.Option$26,com.sun.tools.javac.main.Option$25,com.sun.tools.javac.main.Option$24,com.sun.tools.javac.main.Option$23,com.sun.tools.javac.main.Option$22,com.sun.tools.javac.main.Option$21,com.sun.tools.javac.main.Option$20,com.sun.tools.javac.main.Option$19,com.sun.tools.javac.main.Option$18,com.sun.tools.javac.main.Option$17,com.sun.tools.javac.main.Option$16,com.sun.tools.javac.main.Option$15,com.sun.tools.javac.main.Option$14,com.sun.tools.javac.main.Option$13,com.sun.tools.javac.main.Option$12,com.sun.tools.javac.main.Option$11,com.sun.tools.javac.main.Option$10,com.sun.tools.javac.main.Option$9,com.sun.tools.javac.main.Option$8,com.sun.tools.javac.main.Option$7,com.sun.tools.javac.main.Option$6,com.sun.tools.javac.main.Option$5,com.sun.tools.javac.main.Option$4,com.sun.tools.javac.main.Option$3,com.sun.tools.javac.main.Option$2,com.sun.tools.javac.main.Option$1"
};

$Object* allocate$Option($Class* clazz) {
	return $of($alloc(Option));
}

Option* Option::G = nullptr;
Option* Option::G_NONE = nullptr;
Option* Option::G_CUSTOM = nullptr;
Option* Option::XLINT = nullptr;
Option* Option::XLINT_CUSTOM = nullptr;
Option* Option::XDOCLINT = nullptr;
Option* Option::XDOCLINT_CUSTOM = nullptr;
Option* Option::XDOCLINT_PACKAGE = nullptr;
Option* Option::NOWARN = nullptr;
Option* Option::VERBOSE = nullptr;
Option* Option::DEPRECATION = nullptr;
Option* Option::CLASS_PATH = nullptr;
Option* Option::SOURCE_PATH = nullptr;
Option* Option::MODULE_SOURCE_PATH = nullptr;
Option* Option::MODULE_PATH = nullptr;
Option* Option::UPGRADE_MODULE_PATH = nullptr;
Option* Option::SYSTEM = nullptr;
Option* Option::PATCH_MODULE = nullptr;
Option* Option::BOOT_CLASS_PATH = nullptr;
Option* Option::XBOOTCLASSPATH_PREPEND = nullptr;
Option* Option::XBOOTCLASSPATH_APPEND = nullptr;
Option* Option::XBOOTCLASSPATH = nullptr;
Option* Option::EXTDIRS = nullptr;
Option* Option::DJAVA_EXT_DIRS = nullptr;
Option* Option::ENDORSEDDIRS = nullptr;
Option* Option::DJAVA_ENDORSED_DIRS = nullptr;
Option* Option::PROC = nullptr;
Option* Option::PROCESSOR = nullptr;
Option* Option::PROCESSOR_PATH = nullptr;
Option* Option::PROCESSOR_MODULE_PATH = nullptr;
Option* Option::PARAMETERS = nullptr;
Option* Option::D = nullptr;
Option* Option::S = nullptr;
Option* Option::H = nullptr;
Option* Option::IMPLICIT = nullptr;
Option* Option::ENCODING = nullptr;
Option* Option::SOURCE = nullptr;
Option* Option::TARGET = nullptr;
Option* Option::RELEASE = nullptr;
Option* Option::PREVIEW = nullptr;
Option* Option::PROFILE = nullptr;
Option* Option::VERSION = nullptr;
Option* Option::FULLVERSION = nullptr;
Option* Option::HELP = nullptr;
Option* Option::A = nullptr;
Option* Option::DEFAULT_MODULE_FOR_CREATED_FILES = nullptr;
Option* Option::X = nullptr;
Option* Option::HELP_LINT = nullptr;
Option* Option::J = nullptr;
Option* Option::MOREINFO = nullptr;
Option* Option::WERROR = nullptr;
Option* Option::PROMPT = nullptr;
Option* Option::DOE = nullptr;
Option* Option::PRINTSOURCE = nullptr;
Option* Option::WARNUNCHECKED = nullptr;
Option* Option::XMAXERRS = nullptr;
Option* Option::XMAXWARNS = nullptr;
Option* Option::XSTDOUT = nullptr;
Option* Option::XPRINT = nullptr;
Option* Option::XPRINTROUNDS = nullptr;
Option* Option::XPRINTPROCESSORINFO = nullptr;
Option* Option::XPREFER = nullptr;
Option* Option::XXUSERPATHSFIRST = nullptr;
Option* Option::XPKGINFO = nullptr;
Option* Option::O = nullptr;
Option* Option::XJCOV = nullptr;
Option* Option::PLUGIN = nullptr;
Option* Option::XDIAGS = nullptr;
Option* Option::DEBUG = nullptr;
Option* Option::SHOULDSTOP = nullptr;
Option* Option::DIAGS = nullptr;
Option* Option::XD = nullptr;
Option* Option::ADD_EXPORTS = nullptr;
Option* Option::ADD_OPENS = nullptr;
Option* Option::ADD_READS = nullptr;
Option* Option::MODULE = nullptr;
Option* Option::ADD_MODULES = nullptr;
Option* Option::LIMIT_MODULES = nullptr;
Option* Option::MODULE_VERSION = nullptr;
Option* Option::AT = nullptr;
Option* Option::SOURCEFILE = nullptr;
Option* Option::MULTIRELEASE = nullptr;
Option* Option::INHERIT_RUNTIME_ENVIRONMENT = nullptr;
$OptionArray* Option::$VALUES = nullptr;
$String* Option::SMALL_INDENT = nullptr;
$String* Option::LARGE_INDENT = nullptr;
$String* Option::COMPACT_FORMAT = nullptr;

$OptionArray* Option::$values() {
	$init(Option);
	return $new($OptionArray, {
		Option::G,
		Option::G_NONE,
		Option::G_CUSTOM,
		Option::XLINT,
		Option::XLINT_CUSTOM,
		Option::XDOCLINT,
		Option::XDOCLINT_CUSTOM,
		Option::XDOCLINT_PACKAGE,
		Option::NOWARN,
		Option::VERBOSE,
		Option::DEPRECATION,
		Option::CLASS_PATH,
		Option::SOURCE_PATH,
		Option::MODULE_SOURCE_PATH,
		Option::MODULE_PATH,
		Option::UPGRADE_MODULE_PATH,
		Option::SYSTEM,
		Option::PATCH_MODULE,
		Option::BOOT_CLASS_PATH,
		Option::XBOOTCLASSPATH_PREPEND,
		Option::XBOOTCLASSPATH_APPEND,
		Option::XBOOTCLASSPATH,
		Option::EXTDIRS,
		Option::DJAVA_EXT_DIRS,
		Option::ENDORSEDDIRS,
		Option::DJAVA_ENDORSED_DIRS,
		Option::PROC,
		Option::PROCESSOR,
		Option::PROCESSOR_PATH,
		Option::PROCESSOR_MODULE_PATH,
		Option::PARAMETERS,
		Option::D,
		Option::S,
		Option::H,
		Option::IMPLICIT,
		Option::ENCODING,
		Option::SOURCE,
		Option::TARGET,
		Option::RELEASE,
		Option::PREVIEW,
		Option::PROFILE,
		Option::VERSION,
		Option::FULLVERSION,
		Option::HELP,
		Option::A,
		Option::DEFAULT_MODULE_FOR_CREATED_FILES,
		Option::X,
		Option::HELP_LINT,
		Option::J,
		Option::MOREINFO,
		Option::WERROR,
		Option::PROMPT,
		Option::DOE,
		Option::PRINTSOURCE,
		Option::WARNUNCHECKED,
		Option::XMAXERRS,
		Option::XMAXWARNS,
		Option::XSTDOUT,
		Option::XPRINT,
		Option::XPRINTROUNDS,
		Option::XPRINTPROCESSORINFO,
		Option::XPREFER,
		Option::XXUSERPATHSFIRST,
		Option::XPKGINFO,
		Option::O,
		Option::XJCOV,
		Option::PLUGIN,
		Option::XDIAGS,
		Option::DEBUG,
		Option::SHOULDSTOP,
		Option::DIAGS,
		Option::XD,
		Option::ADD_EXPORTS,
		Option::ADD_OPENS,
		Option::ADD_READS,
		Option::MODULE,
		Option::ADD_MODULES,
		Option::LIMIT_MODULES,
		Option::MODULE_VERSION,
		Option::AT,
		Option::SOURCEFILE,
		Option::MULTIRELEASE,
		Option::INHERIT_RUNTIME_ENVIRONMENT
	});
}

$OptionArray* Option::values() {
	$init(Option);
	return $cast($OptionArray, Option::$VALUES->clone());
}

Option* Option::valueOf($String* name) {
	$init(Option);
	return $cast(Option, $Enum::valueOf(Option::class$, name));
}

Option* Option::lookup($String* arg) {
	$init(Option);
	return lookup(arg, $($EnumSet::allOf(Option::class$)));
}

Option* Option::lookup($String* arg, $Set* options) {
	$init(Option);
	{
		$var($Iterator, i$, $nc(options)->iterator());
		for (; $nc(i$)->hasNext();) {
			Option* option = $cast(Option, i$->next());
			{
				if ($nc(option)->matches(arg)) {
					return option;
				}
			}
		}
	}
	return nullptr;
}

void Option::showHelp($Log* log, $Option$OptionKind* kind) {
	$init(Option);
	$useLocalCurrentObjectStackCache();
	$var($Comparator, comp, $new($Option$40));
	$nc($($nc($($nc($($nc($(getJavaCompilerOptions()))->stream()))->filter(static_cast<$Predicate*>($$new(Option$$Lambda$lambda$showHelp$0, kind)))))->sorted(comp)))->forEach(static_cast<$Consumer*>($$new(Option$$Lambda$lambda$showHelp$1$1, log)));
}

void Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$init($Option$ArgKind);
	Option::init$($enum$name, $enum$ordinal, text, nullptr, descrKey, kind, group, nullptr, nullptr, $Option$ArgKind::NONE);
}

void Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ArgKind* argKind) {
	Option::init$($enum$name, $enum$ordinal, text, nullptr, descrKey, kind, group, nullptr, nullptr, argKind);
}

void Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$init($Option$ArgKind);
	Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group, nullptr, nullptr, $Option$ArgKind::REQUIRED);
}

void Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ArgKind* ak) {
	Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group, nullptr, nullptr, ak);
}

void Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ChoiceKind* choiceKind, $Set* choices) {
	$init($Option$ArgKind);
	Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group, choiceKind, choices, $Option$ArgKind::REQUIRED);
}

void Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ChoiceKind* choiceKind, $StringArray* choices) {
	$useLocalCurrentObjectStackCache();
	$init($Option$ArgKind);
	Option::init$($enum$name, $enum$ordinal, text, nullptr, descrKey, kind, group, choiceKind, $$new($LinkedHashSet, $(static_cast<$Collection*>($Arrays::asList(choices)))), $Option$ArgKind::REQUIRED);
}

void Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ChoiceKind* choiceKind, $Set* choices, $Option$ArgKind* argKind) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, names, $($nc(text)->trim())->split("\\s+"_s));
	$Assert::check($nc(this->names)->length >= 1);
	$set(this, primaryName, $nc(this->names)->get(0));
	$set(this, argsNameKey, argsNameKey);
	$set(this, descrKey, descrKey);
	$set(this, kind, kind);
	$set(this, group, group);
	$set(this, choiceKind, choiceKind);
	$set(this, choices, choices);
	$set(this, argKind, argKind);
}

$String* Option::getPrimaryName() {
	return this->primaryName;
}

$Option$OptionKind* Option::getKind() {
	return this->kind;
}

$Option$ArgKind* Option::getArgKind() {
	return this->argKind;
}

bool Option::hasArg() {
	$init($Option$ArgKind);
	return (this->argKind != $Option$ArgKind::NONE);
}

bool Option::hasSeparateArg() {
	$init($Option$ArgKind);
	bool var$1 = getArgKind() == $Option$ArgKind::REQUIRED;
	bool var$0 = var$1 && !$nc(this->primaryName)->endsWith(":"_s);
	return var$0 && !$nc(this->primaryName)->endsWith("="_s);
}

bool Option::matches($String* option) {
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, this->names);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				if (matches(option, name)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool Option::matches($String* option, $String* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->startsWith("--"_s)) {
		bool var$0 = $nc(option)->equals(name);
		if (!var$0) {
			bool var$1 = hasArg();
			var$0 = var$1 && $nc(option)->startsWith($$str({name, "="_s}));
		}
		return var$0;
	}
	$init($Option$ArgKind);
	bool var$2 = (this->argKind == $Option$ArgKind::ADJACENT) || $nc(name)->endsWith(":"_s);
	bool hasSuffix = var$2 || $nc(name)->endsWith("="_s);
	if (!hasSuffix) {
		return $nc(option)->equals(name);
	}
	if (!$nc(option)->startsWith(name)) {
		return false;
	}
	if (this->choices != nullptr) {
		$var($String, arg, $nc(option)->substring(name->length()));
		$init($Option$ChoiceKind);
		if (this->choiceKind == $Option$ChoiceKind::ONEOF) {
			return $nc(this->choices)->contains(arg);
		} else {
			{
				$var($StringArray, arr$, arg->split(",+"_s));
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, a, arr$->get(i$));
					{
						if (!$nc(this->choices)->contains(a)) {
							return false;
						}
					}
				}
			}
		}
	}
	return true;
}

void Option::handleOption($OptionHelper* helper, $String* arg, $Iterator* rest) {
	$useLocalCurrentObjectStackCache();
	if (hasArg()) {
		$var($String, option, nullptr);
		$var($String, operand, nullptr);
		int32_t sep = findSeparator(arg);
		$init($Option$ArgKind);
		if (getArgKind() == $Option$ArgKind::ADJACENT) {
			$assign(option, this->primaryName);
			$assign(operand, $nc(arg)->substring($nc(this->primaryName)->length()));
		} else if (sep > 0) {
			$assign(option, $nc(arg)->substring(0, sep));
			$assign(operand, arg->substring(sep + 1));
		} else {
			if (!$nc(rest)->hasNext()) {
				$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::ReqArg(this->primaryName)))));
			}
			$assign(option, arg);
			$assign(operand, $cast($String, $nc(rest)->next()));
		}
		process(helper, option, operand);
	} else {
		process(helper, arg);
	}
}

void Option::process($OptionHelper* helper, $String* option) {
	$init($Option$ArgKind);
	if (this->argKind == $Option$ArgKind::NONE) {
		process(helper, this->primaryName, option);
	} else {
		int32_t sep = findSeparator(option);
		process(helper, this->primaryName, $($nc(option)->substring(sep + 1)));
	}
}

void Option::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if (this->choices != nullptr) {
		$init($Option$ChoiceKind);
		if (this->choiceKind == $Option$ChoiceKind::ONEOF) {
			{
				$var($Iterator, i$, $nc(this->choices)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, s, $cast($String, i$->next()));
					$nc(helper)->remove($$str({this->primaryName, s}));
				}
			}
			$var($String, opt, $str({this->primaryName, arg}));
			$nc(helper)->put(opt, opt);
			$var($String, nm, $nc(this->primaryName)->substring(0, $nc(this->primaryName)->length() - 1));
			helper->put(nm, arg);
		} else {
			{
				$var($StringArray, arr$, $nc(arg)->split(",+"_s));
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, a, arr$->get(i$));
					{
						$var($String, opt, $str({this->primaryName, a}));
						$nc(helper)->put(opt, opt);
					}
				}
			}
		}
	}
	$nc(helper)->put(this->primaryName, arg);
	$init($Option$OptionGroup);
	if (this->group == $Option$OptionGroup::FILEMANAGER) {
		helper->handleFileManagerOption(this, arg);
	}
}

$Pattern* Option::getPattern() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t Option::findSeparator($String* word) {
	$init(Option);
	for (int32_t i = 0; i < $nc(word)->length(); ++i) {
		switch (word->charAt(i)) {
		case u':':
			{}
		case u'=':
			{
				return i;
			}
		}
	}
	return -1;
}

void Option::help($Log* log) {
	$useLocalCurrentObjectStackCache();
	$init($Log$PrefixKind);
	help(log, $($nc(log)->localize($Log$PrefixKind::JAVAC, this->descrKey, $$new($ObjectArray, 0))));
}

void Option::help($Log* log, $String* descr) {
	$useLocalCurrentObjectStackCache();
	$var($String, synopses, $cast($String, $nc($($nc($($Arrays::stream(this->names)))->map(static_cast<$Function*>($$new(Option$$Lambda$lambda$help$2$2, this, log)))))->collect($($Collectors::joining(", "_s)))));
	bool var$1 = $nc(synopses)->length() < Option::DEFAULT_SYNOPSIS_WIDTH;
	bool var$0 = var$1 && !$nc(descr)->contains("\n"_s);
	if (var$0) {
		int32_t var$2 = $nc(Option::SMALL_INDENT)->length() + Option::DEFAULT_SYNOPSIS_WIDTH + 1;
		var$0 = (var$2 + descr->length() <= Option::DEFAULT_MAX_LINE_LENGTH);
	}
	if (var$0) {
		$init($Log$WriterKind);
		$nc(log)->printRawLines($Log$WriterKind::STDOUT, $($String::format(Option::COMPACT_FORMAT, $$new($ObjectArray, {
			$of(synopses),
			$of(descr)
		}))));
		return;
	}
	if ($nc(synopses)->length() <= Option::DEFAULT_MAX_LINE_LENGTH) {
		$init($Log$WriterKind);
		$nc(log)->printRawLines($Log$WriterKind::STDOUT, $$str({Option::SMALL_INDENT, synopses}));
	} else {
		{
			$var($StringArray, arr$, this->names);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, name, arr$->get(i$));
				{
					$init($Log$WriterKind);
					$nc(log)->printRawLines($Log$WriterKind::STDOUT, $$str({Option::SMALL_INDENT, $(helpSynopsis(name, log))}));
				}
			}
		}
	}
	$init($Log$WriterKind);
	$nc(log)->printRawLines($Log$WriterKind::STDOUT, $$str({Option::LARGE_INDENT, $($nc(descr)->replace(static_cast<$CharSequence*>("\n"_s), static_cast<$CharSequence*>($$str({"\n"_s, Option::LARGE_INDENT}))))}));
}

$String* Option::helpSynopsis($String* name, $Log* log) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(name);
	if (this->argsNameKey == nullptr) {
		if (this->choices != nullptr) {
			if (!$nc(name)->endsWith(":"_s)) {
				sb->append(" "_s);
			}
			$var($String, sep, "{"_s);
			{
				$var($Iterator, i$, $nc(this->choices)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, choice, $cast($String, i$->next()));
					{
						sb->append(sep);
						sb->append(choice);
						$assign(sep, ","_s);
					}
				}
			}
			sb->append("}"_s);
		}
	} else {
		$init($Option$ArgKind);
		if (!$nc(name)->matches(".*[=:]$"_s) && this->argKind != $Option$ArgKind::ADJACENT) {
			sb->append(" "_s);
		}
		$init($Log$PrefixKind);
		sb->append($($nc(log)->localize($Log$PrefixKind::JAVAC, this->argsNameKey, $$new($ObjectArray, 0))));
	}
	return sb->toString();
}

$Set* Option::getXLintChoices() {
	$init(Option);
	$useLocalCurrentObjectStackCache();
	$var($Set, choices, $new($LinkedHashSet));
	choices->add("all"_s);
	{
		$var($Lint$LintCategoryArray, arr$, $Lint$LintCategory::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Lint$LintCategory* c = arr$->get(i$);
			{
				choices->add($nc(c)->option);
				choices->add($$str({"-"_s, $nc(c)->option}));
			}
		}
	}
	choices->add("none"_s);
	return choices;
}

$Set* Option::getJavaCompilerOptions() {
	$init(Option);
	return $EnumSet::allOf(Option::class$);
}

$Set* Option::getJavacFileManagerOptions() {
	$init(Option);
	$init($Option$OptionGroup);
	return getOptions($Option$OptionGroup::FILEMANAGER);
}

$Set* Option::getJavacToolOptions() {
	$init(Option);
	$init($Option$OptionGroup);
	return getOptions($Option$OptionGroup::BASIC);
}

$Set* Option::getOptions($Option$OptionGroup* group) {
	$init(Option);
	$useLocalCurrentObjectStackCache();
	return $cast($Set, $nc($($nc($($Arrays::stream($(Option::values()))))->filter(static_cast<$Predicate*>($$new(Option$$Lambda$lambda$getOptions$3$3, group)))))->collect($($Collectors::toCollection(static_cast<$Supplier*>($$new(Option$$Lambda$lambda$getOptions$4$4))))));
}

$EnumSet* Option::lambda$getOptions$4() {
	$init(Option);
	return $EnumSet::noneOf(Option::class$);
}

bool Option::lambda$getOptions$3($Option$OptionGroup* group, Option* o) {
	$init(Option);
	return $nc(o)->group == group;
}

$String* Option::lambda$help$2($Log* log, $String* s) {
	return helpSynopsis(s, log);
}

void Option::lambda$showHelp$1($Log* log, Option* o) {
	$init(Option);
	$nc(o)->help(log);
}

bool Option::lambda$showHelp$0($Option$OptionKind* kind, Option* o) {
	$init(Option);
	return $nc(o)->kind == kind;
}

void clinit$Option($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Option::SMALL_INDENT, "  "_s);
	$assignStatic(Option::LARGE_INDENT, "        "_s);
	$assignStatic(Option::COMPACT_FORMAT, $str({Option::SMALL_INDENT, "%-"_s, $$str(Option::DEFAULT_SYNOPSIS_WIDTH), "s %s"_s}));
	$init($Option$OptionKind);
	$init($Option$OptionGroup);
	$assignStatic(Option::G, $new(Option, "G"_s, 0, "-g"_s, "opt.g"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::G_NONE, $new($Option$1, "G_NONE"_s, 1, "-g:none"_s, "opt.g.none"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$init($Option$ChoiceKind);
	$assignStatic(Option::G_CUSTOM, $new(Option, "G_CUSTOM"_s, 2, "-g:"_s, "opt.g.lines.vars.source"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC, $Option$ChoiceKind::ANYOF, $$new($StringArray, {
		"lines"_s,
		"vars"_s,
		"source"_s
	})));
	$assignStatic(Option::XLINT, $new(Option, "XLINT"_s, 3, "-Xlint"_s, "opt.Xlint"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XLINT_CUSTOM, $new(Option, "XLINT_CUSTOM"_s, 4, "-Xlint:"_s, "opt.arg.Xlint"_s, "opt.Xlint.custom"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC, $Option$ChoiceKind::ANYOF, $(Option::getXLintChoices())));
	$assignStatic(Option::XDOCLINT, $new(Option, "XDOCLINT"_s, 5, "-Xdoclint"_s, "opt.Xdoclint"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XDOCLINT_CUSTOM, $new($Option$2, "XDOCLINT_CUSTOM"_s, 6, "-Xdoclint:"_s, "opt.Xdoclint.subopts"_s, "opt.Xdoclint.custom"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XDOCLINT_PACKAGE, $new($Option$3, "XDOCLINT_PACKAGE"_s, 7, "-Xdoclint/package:"_s, "opt.Xdoclint.package.args"_s, "opt.Xdoclint.package.desc"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::NOWARN, $new($Option$4, "NOWARN"_s, 8, "-nowarn"_s, "opt.nowarn"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::VERBOSE, $new(Option, "VERBOSE"_s, 9, "-verbose"_s, "opt.verbose"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::DEPRECATION, $new($Option$5, "DEPRECATION"_s, 10, "-deprecation"_s, "opt.deprecation"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::CLASS_PATH, $new(Option, "CLASS_PATH"_s, 11, "--class-path -classpath -cp"_s, "opt.arg.path"_s, "opt.classpath"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::SOURCE_PATH, $new(Option, "SOURCE_PATH"_s, 12, "--source-path -sourcepath"_s, "opt.arg.path"_s, "opt.sourcepath"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::MODULE_SOURCE_PATH, $new($Option$6, "MODULE_SOURCE_PATH"_s, 13, "--module-source-path"_s, "opt.arg.mspath"_s, "opt.modulesourcepath"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::MODULE_PATH, $new(Option, "MODULE_PATH"_s, 14, "--module-path -p"_s, "opt.arg.path"_s, "opt.modulepath"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::UPGRADE_MODULE_PATH, $new(Option, "UPGRADE_MODULE_PATH"_s, 15, "--upgrade-module-path"_s, "opt.arg.path"_s, "opt.upgrademodulepath"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::SYSTEM, $new(Option, "SYSTEM"_s, 16, "--system"_s, "opt.arg.jdk"_s, "opt.system"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::PATCH_MODULE, $new($Option$7, "PATCH_MODULE"_s, 17, "--patch-module"_s, "opt.arg.patch"_s, "opt.patch"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::BOOT_CLASS_PATH, $new($Option$8, "BOOT_CLASS_PATH"_s, 18, "--boot-class-path -bootclasspath"_s, "opt.arg.path"_s, "opt.bootclasspath"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::XBOOTCLASSPATH_PREPEND, $new(Option, "XBOOTCLASSPATH_PREPEND"_s, 19, "-Xbootclasspath/p:"_s, "opt.arg.path"_s, "opt.Xbootclasspath.p"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::XBOOTCLASSPATH_APPEND, $new(Option, "XBOOTCLASSPATH_APPEND"_s, 20, "-Xbootclasspath/a:"_s, "opt.arg.path"_s, "opt.Xbootclasspath.a"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::XBOOTCLASSPATH, $new($Option$9, "XBOOTCLASSPATH"_s, 21, "-Xbootclasspath:"_s, "opt.arg.path"_s, "opt.bootclasspath"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::EXTDIRS, $new(Option, "EXTDIRS"_s, 22, "-extdirs"_s, "opt.arg.dirs"_s, "opt.extdirs"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::DJAVA_EXT_DIRS, $new($Option$10, "DJAVA_EXT_DIRS"_s, 23, "-Djava.ext.dirs="_s, "opt.arg.dirs"_s, "opt.extdirs"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::ENDORSEDDIRS, $new(Option, "ENDORSEDDIRS"_s, 24, "-endorseddirs"_s, "opt.arg.dirs"_s, "opt.endorseddirs"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::DJAVA_ENDORSED_DIRS, $new($Option$11, "DJAVA_ENDORSED_DIRS"_s, 25, "-Djava.endorsed.dirs="_s, "opt.arg.dirs"_s, "opt.endorseddirs"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::PROC, $new(Option, "PROC"_s, 26, "-proc:"_s, "opt.proc.none.only"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC, $Option$ChoiceKind::ONEOF, $$new($StringArray, {
		"none"_s,
		"only"_s
	})));
	$assignStatic(Option::PROCESSOR, $new(Option, "PROCESSOR"_s, 27, "-processor"_s, "opt.arg.class.list"_s, "opt.processor"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::PROCESSOR_PATH, $new(Option, "PROCESSOR_PATH"_s, 28, "--processor-path -processorpath"_s, "opt.arg.path"_s, "opt.processorpath"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::PROCESSOR_MODULE_PATH, $new(Option, "PROCESSOR_MODULE_PATH"_s, 29, "--processor-module-path"_s, "opt.arg.path"_s, "opt.processormodulepath"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::PARAMETERS, $new(Option, "PARAMETERS"_s, 30, "-parameters"_s, "opt.parameters"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::D, $new(Option, "D"_s, 31, "-d"_s, "opt.arg.directory"_s, "opt.d"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::S, $new(Option, "S"_s, 32, "-s"_s, "opt.arg.directory"_s, "opt.sourceDest"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::H, $new(Option, "H"_s, 33, "-h"_s, "opt.arg.directory"_s, "opt.headerDest"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::IMPLICIT, $new(Option, "IMPLICIT"_s, 34, "-implicit:"_s, "opt.implicit"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC, $Option$ChoiceKind::ONEOF, $$new($StringArray, {
		"none"_s,
		"class"_s
	})));
	$assignStatic(Option::ENCODING, $new(Option, "ENCODING"_s, 35, "-encoding"_s, "opt.arg.encoding"_s, "opt.encoding"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::SOURCE, $new($Option$12, "SOURCE"_s, 36, "--source -source"_s, "opt.arg.release"_s, "opt.source"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::TARGET, $new($Option$13, "TARGET"_s, 37, "--target -target"_s, "opt.arg.release"_s, "opt.target"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::RELEASE, $new($Option$14, "RELEASE"_s, 38, "--release"_s, "opt.arg.release"_s, "opt.release"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::PREVIEW, $new(Option, "PREVIEW"_s, 39, "--enable-preview"_s, "opt.preview"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::PROFILE, $new($Option$15, "PROFILE"_s, 40, "-profile"_s, "opt.arg.profile"_s, "opt.profile"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::VERSION, $new($Option$16, "VERSION"_s, 41, "--version -version"_s, "opt.version"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::INFO));
	$assignStatic(Option::FULLVERSION, $new($Option$17, "FULLVERSION"_s, 42, "--full-version -fullversion"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::INFO));
	$assignStatic(Option::HELP, $new($Option$18, "HELP"_s, 43, "--help -help -?"_s, "opt.help"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::INFO));
	$init($Option$ArgKind);
	$assignStatic(Option::A, $new($Option$19, "A"_s, 44, "-A"_s, "opt.arg.key.equals.value"_s, "opt.A"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC, $Option$ArgKind::ADJACENT));
	$assignStatic(Option::DEFAULT_MODULE_FOR_CREATED_FILES, $new($Option$20, "DEFAULT_MODULE_FOR_CREATED_FILES"_s, 45, "--default-module-for-created-files"_s, "opt.arg.default.module.for.created.files"_s, "opt.default.module.for.created.files"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::X, $new($Option$21, "X"_s, 46, "--help-extra -X"_s, "opt.X"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::INFO));
	$assignStatic(Option::HELP_LINT, $new($Option$22, "HELP_LINT"_s, 47, "--help-lint"_s, "opt.help.lint"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::INFO));
	$assignStatic(Option::J, $new($Option$23, "J"_s, 48, "-J"_s, "opt.arg.flag"_s, "opt.J"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::INFO, $Option$ArgKind::ADJACENT));
	$assignStatic(Option::MOREINFO, $new($Option$24, "MOREINFO"_s, 49, "-moreinfo"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::WERROR, $new(Option, "WERROR"_s, 50, "-Werror"_s, "opt.Werror"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::PROMPT, $new(Option, "PROMPT"_s, 51, "-prompt"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::DOE, $new(Option, "DOE"_s, 52, "-doe"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::PRINTSOURCE, $new(Option, "PRINTSOURCE"_s, 53, "-printsource"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::WARNUNCHECKED, $new($Option$25, "WARNUNCHECKED"_s, 54, "-warnunchecked"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XMAXERRS, $new(Option, "XMAXERRS"_s, 55, "-Xmaxerrs"_s, "opt.arg.number"_s, "opt.maxerrs"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XMAXWARNS, $new(Option, "XMAXWARNS"_s, 56, "-Xmaxwarns"_s, "opt.arg.number"_s, "opt.maxwarns"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XSTDOUT, $new($Option$26, "XSTDOUT"_s, 57, "-Xstdout"_s, "opt.arg.file"_s, "opt.Xstdout"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::INFO));
	$assignStatic(Option::XPRINT, $new(Option, "XPRINT"_s, 58, "-Xprint"_s, "opt.print"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XPRINTROUNDS, $new(Option, "XPRINTROUNDS"_s, 59, "-XprintRounds"_s, "opt.printRounds"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XPRINTPROCESSORINFO, $new(Option, "XPRINTPROCESSORINFO"_s, 60, "-XprintProcessorInfo"_s, "opt.printProcessorInfo"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XPREFER, $new(Option, "XPREFER"_s, 61, "-Xprefer:"_s, "opt.prefer"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC, $Option$ChoiceKind::ONEOF, $$new($StringArray, {
		"source"_s,
		"newer"_s
	})));
	$assignStatic(Option::XXUSERPATHSFIRST, $new(Option, "XXUSERPATHSFIRST"_s, 62, "-XXuserPathsFirst"_s, "opt.userpathsfirst"_s, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XPKGINFO, $new(Option, "XPKGINFO"_s, 63, "-Xpkginfo:"_s, "opt.pkginfo"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC, $Option$ChoiceKind::ONEOF, $$new($StringArray, {
		"always"_s,
		"legacy"_s,
		"nonempty"_s
	})));
	$assignStatic(Option::O, $new(Option, "O"_s, 64, "-O"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XJCOV, $new(Option, "XJCOV"_s, 65, "-Xjcov"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::PLUGIN, $new($Option$27, "PLUGIN"_s, 66, "-Xplugin:"_s, "opt.arg.plugin"_s, "opt.plugin"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::XDIAGS, $new(Option, "XDIAGS"_s, 67, "-Xdiags:"_s, "opt.diags"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC, $Option$ChoiceKind::ONEOF, $$new($StringArray, {
		"compact"_s,
		"verbose"_s
	})));
	$assignStatic(Option::DEBUG, $new($Option$28, "DEBUG"_s, 68, "--debug"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC, $Option$ArgKind::REQUIRED));
	$assignStatic(Option::SHOULDSTOP, $new($Option$29, "SHOULDSTOP"_s, 69, "--should-stop"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC, $Option$ArgKind::REQUIRED));
	$assignStatic(Option::DIAGS, $new($Option$30, "DIAGS"_s, 70, "--diags"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC, $Option$ArgKind::REQUIRED));
	$assignStatic(Option::XD, $new($Option$31, "XD"_s, 71, "-XD"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::ADD_EXPORTS, $new($Option$32, "ADD_EXPORTS"_s, 72, "--add-exports"_s, "opt.arg.addExports"_s, "opt.addExports"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::ADD_OPENS, $new(Option, "ADD_OPENS"_s, 73, "--add-opens"_s, ($String*)nullptr, ($String*)nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::ADD_READS, $new($Option$33, "ADD_READS"_s, 74, "--add-reads"_s, "opt.arg.addReads"_s, "opt.addReads"_s, $Option$OptionKind::EXTENDED, $Option$OptionGroup::BASIC));
	$assignStatic(Option::MODULE, $new(Option, "MODULE"_s, 75, "--module -m"_s, "opt.arg.m"_s, "opt.m"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::ADD_MODULES, $new($Option$34, "ADD_MODULES"_s, 76, "--add-modules"_s, "opt.arg.addmods"_s, "opt.addmods"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::LIMIT_MODULES, $new($Option$35, "LIMIT_MODULES"_s, 77, "--limit-modules"_s, "opt.arg.limitmods"_s, "opt.limitmods"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::MODULE_VERSION, $new($Option$36, "MODULE_VERSION"_s, 78, "--module-version"_s, "opt.arg.module.version"_s, "opt.module.version"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::BASIC));
	$assignStatic(Option::AT, $new($Option$37, "AT"_s, 79, "@"_s, "opt.arg.file"_s, "opt.AT"_s, $Option$OptionKind::STANDARD, $Option$OptionGroup::INFO, $Option$ArgKind::ADJACENT));
	$assignStatic(Option::SOURCEFILE, $new($Option$38, "SOURCEFILE"_s, 80, "sourcefile"_s, nullptr, $Option$OptionKind::HIDDEN, $Option$OptionGroup::INFO));
	$assignStatic(Option::MULTIRELEASE, $new(Option, "MULTIRELEASE"_s, 81, "--multi-release"_s, "opt.arg.multi-release"_s, "opt.multi-release"_s, $Option$OptionKind::HIDDEN, $Option$OptionGroup::FILEMANAGER));
	$assignStatic(Option::INHERIT_RUNTIME_ENVIRONMENT, $new($Option$39, "INHERIT_RUNTIME_ENVIRONMENT"_s, 82, "--inherit-runtime-environment"_s, "opt.inherit_runtime_environment"_s, $Option$OptionKind::HIDDEN, $Option$OptionGroup::BASIC));
	$assignStatic(Option::$VALUES, Option::$values());
}

Option::Option() {
}

$Class* Option::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Option$$Lambda$lambda$showHelp$0::classInfo$.name)) {
			return Option$$Lambda$lambda$showHelp$0::load$(name, initialize);
		}
		if (name->equals(Option$$Lambda$lambda$showHelp$1$1::classInfo$.name)) {
			return Option$$Lambda$lambda$showHelp$1$1::load$(name, initialize);
		}
		if (name->equals(Option$$Lambda$lambda$help$2$2::classInfo$.name)) {
			return Option$$Lambda$lambda$help$2$2::load$(name, initialize);
		}
		if (name->equals(Option$$Lambda$lambda$getOptions$3$3::classInfo$.name)) {
			return Option$$Lambda$lambda$getOptions$3$3::load$(name, initialize);
		}
		if (name->equals(Option$$Lambda$lambda$getOptions$4$4::classInfo$.name)) {
			return Option$$Lambda$lambda$getOptions$4$4::load$(name, initialize);
		}
	}
	$loadClass(Option, name, initialize, &_Option_ClassInfo_, clinit$Option, allocate$Option);
	return class$;
}

$Class* Option::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com