#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT
#undef MANDATORY
#undef NOTE
#undef RECOVERABLE
#undef WARNING

using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $BasicDiagnosticFormatter = ::com::sun::tools::javac::util::BasicDiagnosticFormatter;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $Options = ::com::sun::tools::javac::util::Options;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class JCDiagnostic$Factory$$Lambda$lambda$new$0 : public $Runnable {
	$class(JCDiagnostic$Factory$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JCDiagnostic$Factory* inst, $Options* options) {
		$set(this, inst$, inst);
		$set(this, options, options);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0(options);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JCDiagnostic$Factory$$Lambda$lambda$new$0>());
	}
	JCDiagnostic$Factory* inst$ = nullptr;
	$Options* options = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JCDiagnostic$Factory$$Lambda$lambda$new$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JCDiagnostic$Factory$$Lambda$lambda$new$0, inst$)},
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $PUBLIC, $field(JCDiagnostic$Factory$$Lambda$lambda$new$0, options)},
	{}
};
$MethodInfo JCDiagnostic$Factory$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/util/Options;)V", nullptr, $PUBLIC, $method(static_cast<void(JCDiagnostic$Factory$$Lambda$lambda$new$0::*)(JCDiagnostic$Factory*,$Options*)>(&JCDiagnostic$Factory$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JCDiagnostic$Factory$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.JCDiagnostic$Factory$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JCDiagnostic$Factory$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$Factory$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JCDiagnostic$Factory$$Lambda$lambda$new$0::class$ = nullptr;

class JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1 : public $Function {
	$class(JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(JCDiagnostic$Factory* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* o) override {
		 return $nc(inst$)->lambda$normalize$1(o);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1>());
	}
	JCDiagnostic$Factory* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1, inst$)},
	{}
};
$MethodInfo JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$Factory;)V", nullptr, $PUBLIC, $method(static_cast<void(JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::*)(JCDiagnostic$Factory*)>(&JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::class$ = nullptr;

$FieldInfo _JCDiagnostic$Factory_FieldInfo_[] = {
	{"diagnosticFactoryKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/util/JCDiagnostic$Factory;>;", $PROTECTED | $STATIC | $FINAL, $staticField(JCDiagnostic$Factory, diagnosticFactoryKey)},
	{"formatter", "Lcom/sun/tools/javac/api/DiagnosticFormatter;", "Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;", 0, $field(JCDiagnostic$Factory, formatter)},
	{"prefix", "Ljava/lang/String;", nullptr, $FINAL, $field(JCDiagnostic$Factory, prefix)},
	{"defaultErrorFlags", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;>;", $FINAL, $field(JCDiagnostic$Factory, defaultErrorFlags)},
	{}
};

$MethodInfo _JCDiagnostic$Factory_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(JCDiagnostic$Factory::*)($Context*)>(&JCDiagnostic$Factory::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/JavacMessages;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JCDiagnostic$Factory::*)($JavacMessages*,$String*)>(&JCDiagnostic$Factory::init$))},
	{"create", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $TRANSIENT},
	{"create", "(Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"create", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/code/Lint$LintCategory;Ljava/util/Set;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/code/Lint$LintCategory;Ljava/util/Set<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;>;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", $PUBLIC | $TRANSIENT},
	{"create", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Ljava/util/Set;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Ljava/util/Set<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;>;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Lcom/sun/tools/javac/util/JCDiagnostic;", $PUBLIC},
	{"error", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $TRANSIENT},
	{"error", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"errorKey", "(Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $TRANSIENT},
	{"fragment", "(Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $TRANSIENT},
	{"fragment", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"fragmentKey", "(Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $TRANSIENT},
	{"initOptions", "(Lcom/sun/tools/javac/util/Options;)V", nullptr, $PRIVATE, $method(static_cast<void(JCDiagnostic$Factory::*)($Options*)>(&JCDiagnostic$Factory::initOptions))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JCDiagnostic$Factory*(*)($Context*)>(&JCDiagnostic$Factory::instance))},
	{"lambda$new$0", "(Lcom/sun/tools/javac/util/Options;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JCDiagnostic$Factory::*)($Options*)>(&JCDiagnostic$Factory::lambda$new$0))},
	{"lambda$normalize$1", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(JCDiagnostic$Factory::*)(Object$*)>(&JCDiagnostic$Factory::lambda$normalize$1))},
	{"mandatoryNote", "(Lcom/sun/tools/javac/util/DiagnosticSource;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $TRANSIENT},
	{"mandatoryNote", "(Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$Note;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"mandatoryWarning", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $TRANSIENT},
	{"mandatoryWarning", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"normalize", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;", nullptr, 0},
	{"note", "(Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $TRANSIENT},
	{"note", "(Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Note;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"noteKey", "(Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $TRANSIENT},
	{"warning", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $TRANSIENT},
	{"warning", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"warningKey", "(Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $TRANSIENT},
	{}
};

$InnerClassInfo _JCDiagnostic$Factory_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$Factory", "com.sun.tools.javac.util.JCDiagnostic", "Factory", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCDiagnostic$Factory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.JCDiagnostic$Factory",
	"java.lang.Object",
	nullptr,
	_JCDiagnostic$Factory_FieldInfo_,
	_JCDiagnostic$Factory_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$Factory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$Factory($Class* clazz) {
	return $of($alloc(JCDiagnostic$Factory));
}

$Context$Key* JCDiagnostic$Factory::diagnosticFactoryKey = nullptr;

JCDiagnostic$Factory* JCDiagnostic$Factory::instance($Context* context) {
	$init(JCDiagnostic$Factory);
	$var(JCDiagnostic$Factory, instance, $cast(JCDiagnostic$Factory, $nc(context)->get(JCDiagnostic$Factory::diagnosticFactoryKey)));
	if (instance == nullptr) {
		$assign(instance, $new(JCDiagnostic$Factory, context));
	}
	return instance;
}

void JCDiagnostic$Factory::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	JCDiagnostic$Factory::init$($($JavacMessages::instance(context)), "compiler"_s);
	$nc(context)->put(JCDiagnostic$Factory::diagnosticFactoryKey, $of(this));
	$var($Options, options, $Options::instance(context));
	initOptions(options);
	$nc(options)->addListener(static_cast<$Runnable*>($$new(JCDiagnostic$Factory$$Lambda$lambda$new$0, this, options)));
}

void JCDiagnostic$Factory::initOptions($Options* options) {
	if ($nc(options)->isSet("onlySyntaxErrorsUnrecoverable"_s)) {
		$init($JCDiagnostic$DiagnosticFlag);
		$nc(this->defaultErrorFlags)->add($JCDiagnostic$DiagnosticFlag::RECOVERABLE);
	}
}

void JCDiagnostic$Factory::init$($JavacMessages* messages, $String* prefix) {
	$set(this, prefix, prefix);
	$set(this, formatter, $new($BasicDiagnosticFormatter, messages));
	$init($JCDiagnostic$DiagnosticFlag);
	$set(this, defaultErrorFlags, $EnumSet::of($JCDiagnostic$DiagnosticFlag::MANDATORY));
}

$JCDiagnostic* JCDiagnostic$Factory::error($JCDiagnostic$DiagnosticFlag* flag, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args) {
	return error(flag, source, pos, $(errorKey(key, args)));
}

$JCDiagnostic* JCDiagnostic$Factory::error($JCDiagnostic$DiagnosticFlag* flag, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Error* errorKey) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic, diag, create(($Lint$LintCategory*)nullptr, $(static_cast<$Set*>($EnumSet::copyOf(static_cast<$Collection*>(this->defaultErrorFlags)))), source, pos, static_cast<$JCDiagnostic$DiagnosticInfo*>(errorKey)));
	if (flag != nullptr) {
		$nc(diag)->setFlag(flag);
	}
	return diag;
}

$JCDiagnostic* JCDiagnostic$Factory::mandatoryWarning($Lint$LintCategory* lc, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args) {
	return mandatoryWarning(lc, source, pos, $(warningKey(key, args)));
}

$JCDiagnostic* JCDiagnostic$Factory::mandatoryWarning($Lint$LintCategory* lc, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warningKey) {
	$init($JCDiagnostic$DiagnosticFlag);
	return create(lc, $(static_cast<$Set*>($EnumSet::of($JCDiagnostic$DiagnosticFlag::MANDATORY))), source, pos, static_cast<$JCDiagnostic$DiagnosticInfo*>(warningKey));
}

$JCDiagnostic* JCDiagnostic$Factory::warning($Lint$LintCategory* lc, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args) {
	return warning(lc, source, pos, $(warningKey(key, args)));
}

$JCDiagnostic* JCDiagnostic$Factory::warning($Lint$LintCategory* lc, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warningKey) {
	$load($JCDiagnostic$DiagnosticFlag);
	return create(lc, $(static_cast<$Set*>($EnumSet::noneOf($JCDiagnostic$DiagnosticFlag::class$))), source, pos, static_cast<$JCDiagnostic$DiagnosticInfo*>(warningKey));
}

$JCDiagnostic* JCDiagnostic$Factory::mandatoryNote($DiagnosticSource* source, $String* key, $ObjectArray* args) {
	return mandatoryNote(source, $(noteKey(key, args)));
}

$JCDiagnostic* JCDiagnostic$Factory::mandatoryNote($DiagnosticSource* source, $JCDiagnostic$Note* noteKey) {
	$init($JCDiagnostic$DiagnosticFlag);
	return create(($Lint$LintCategory*)nullptr, $(static_cast<$Set*>($EnumSet::of($JCDiagnostic$DiagnosticFlag::MANDATORY))), source, ($JCDiagnostic$DiagnosticPosition*)nullptr, static_cast<$JCDiagnostic$DiagnosticInfo*>(noteKey));
}

$JCDiagnostic* JCDiagnostic$Factory::note($DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args) {
	return note(source, pos, $(noteKey(key, args)));
}

$JCDiagnostic* JCDiagnostic$Factory::note($DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Note* noteKey) {
	$load($JCDiagnostic$DiagnosticFlag);
	return create(($Lint$LintCategory*)nullptr, $(static_cast<$Set*>($EnumSet::noneOf($JCDiagnostic$DiagnosticFlag::class$))), source, pos, static_cast<$JCDiagnostic$DiagnosticInfo*>(noteKey));
}

$JCDiagnostic* JCDiagnostic$Factory::fragment($String* key, $ObjectArray* args) {
	return fragment($(fragmentKey(key, args)));
}

$JCDiagnostic* JCDiagnostic$Factory::fragment($JCDiagnostic$Fragment* fragmentKey) {
	$load($JCDiagnostic$DiagnosticFlag);
	return create(($Lint$LintCategory*)nullptr, $(static_cast<$Set*>($EnumSet::noneOf($JCDiagnostic$DiagnosticFlag::class$))), ($DiagnosticSource*)nullptr, ($JCDiagnostic$DiagnosticPosition*)nullptr, static_cast<$JCDiagnostic$DiagnosticInfo*>(fragmentKey));
}

$JCDiagnostic* JCDiagnostic$Factory::create($JCDiagnostic$DiagnosticType* kind, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$load($JCDiagnostic$DiagnosticFlag);
	$var($Set, var$0, static_cast<$Set*>($EnumSet::noneOf($JCDiagnostic$DiagnosticFlag::class$)));
	$var($DiagnosticSource, var$1, source);
	$var($JCDiagnostic$DiagnosticPosition, var$2, pos);
	return create(($Lint$LintCategory*)nullptr, var$0, var$1, var$2, $($JCDiagnostic$DiagnosticInfo::of(kind, this->prefix, key, args)));
}

$JCDiagnostic* JCDiagnostic$Factory::create($DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$DiagnosticInfo* diagnosticInfo) {
	$load($JCDiagnostic$DiagnosticFlag);
	return create(($Lint$LintCategory*)nullptr, $(static_cast<$Set*>($EnumSet::noneOf($JCDiagnostic$DiagnosticFlag::class$))), source, pos, diagnosticInfo);
}

$JCDiagnostic* JCDiagnostic$Factory::create($JCDiagnostic$DiagnosticType* kind, $Lint$LintCategory* lc, $Set* flags, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args) {
	return create(lc, flags, source, pos, $($JCDiagnostic$DiagnosticInfo::of(kind, this->prefix, key, args)));
}

$JCDiagnostic* JCDiagnostic$Factory::create($Lint$LintCategory* lc, $Set* flags, $DiagnosticSource* source, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$DiagnosticInfo* diagnosticInfo) {
	return $new($JCDiagnostic, this->formatter, $(normalize(diagnosticInfo)), lc, flags, source, pos);
}

$JCDiagnostic$DiagnosticInfo* JCDiagnostic$Factory::normalize($JCDiagnostic$DiagnosticInfo* diagnosticInfo) {
	$useLocalCurrentObjectStackCache();
	return $JCDiagnostic$DiagnosticInfo::of($nc(diagnosticInfo)->type, diagnosticInfo->prefix, diagnosticInfo->code, $($nc($($nc($($Stream::of(diagnosticInfo->args)))->map(static_cast<$Function*>($$new(JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1, this)))))->toArray()));
}

$JCDiagnostic$Error* JCDiagnostic$Factory::errorKey($String* code, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	return $cast($JCDiagnostic$Error, $JCDiagnostic$DiagnosticInfo::of($JCDiagnostic$DiagnosticType::ERROR, this->prefix, code, args));
}

$JCDiagnostic$Warning* JCDiagnostic$Factory::warningKey($String* code, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	return $cast($JCDiagnostic$Warning, $JCDiagnostic$DiagnosticInfo::of($JCDiagnostic$DiagnosticType::WARNING, this->prefix, code, args));
}

$JCDiagnostic$Note* JCDiagnostic$Factory::noteKey($String* code, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	return $cast($JCDiagnostic$Note, $JCDiagnostic$DiagnosticInfo::of($JCDiagnostic$DiagnosticType::NOTE, this->prefix, code, args));
}

$JCDiagnostic$Fragment* JCDiagnostic$Factory::fragmentKey($String* code, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	return $cast($JCDiagnostic$Fragment, $JCDiagnostic$DiagnosticInfo::of($JCDiagnostic$DiagnosticType::FRAGMENT, this->prefix, code, args));
}

$Object* JCDiagnostic$Factory::lambda$normalize$1(Object$* o) {
	$var($JCDiagnostic$Fragment, frag, nullptr);
	bool var$0 = $instanceOf($JCDiagnostic$Fragment, o);
	if (var$0) {
		$assign(frag, $cast($JCDiagnostic$Fragment, o));
		var$0 = true;
	}
	return $of((var$0) ? $of(fragment(frag)) : $of(o));
}

void JCDiagnostic$Factory::lambda$new$0($Options* options) {
	initOptions(options);
}

void clinit$JCDiagnostic$Factory($Class* class$) {
	$assignStatic(JCDiagnostic$Factory::diagnosticFactoryKey, $new($Context$Key));
}

JCDiagnostic$Factory::JCDiagnostic$Factory() {
}

$Class* JCDiagnostic$Factory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JCDiagnostic$Factory$$Lambda$lambda$new$0::classInfo$.name)) {
			return JCDiagnostic$Factory$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::classInfo$.name)) {
			return JCDiagnostic$Factory$$Lambda$lambda$normalize$1$1::load$(name, initialize);
		}
	}
	$loadClass(JCDiagnostic$Factory, name, initialize, &_JCDiagnostic$Factory_ClassInfo_, clinit$JCDiagnostic$Factory, allocate$JCDiagnostic$Factory);
	return class$;
}

$Class* JCDiagnostic$Factory::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com