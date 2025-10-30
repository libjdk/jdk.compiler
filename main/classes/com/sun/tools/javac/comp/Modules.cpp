#include <com/sun/tools/javac/comp/Modules.h>

#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$ModuleResolutionFlags.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Modules$1.h>
#include <com/sun/tools/javac/comp/Modules$2.h>
#include <com/sun/tools/javac/comp/Modules$3.h>
#include <com/sun/tools/javac/comp/Modules$PackageNameFinder.h>
#include <com/sun/tools/javac/comp/Modules$UsesProvidesVisitor.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/jvm/JNIWriter.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
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
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef ADD_EXPORTS
#undef ADD_MODULES
#undef ADD_READS
#undef ALL_MODULE_PATH
#undef ALL_SYSTEM
#undef AUTOMATIC_MODULE
#undef CLASS
#undef CLASS_OUTPUT
#undef CLASS_PATH
#undef DO_NOT_RESOLVE_BY_DEFAULT
#undef ERR
#undef EXTRA
#undef IS_AUTOMATIC
#undef LIMIT_MODULES
#undef MODULES
#undef MODULE_SOURCE_PATH
#undef MODULE_VERSION
#undef OPTIONS
#undef PATCH_MODULE_PATH
#undef RELEASE
#undef REQUIRES
#undef SOURCE
#undef SOURCE_OUTPUT
#undef SOURCE_PATH
#undef SYSTEM_MODULE
#undef TRANSITIVE
#undef WARN_INCUBATING
#undef XLINT_CUSTOM

using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$ModuleResolutionFlags = ::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Modules$1 = ::com::sun::tools::javac::comp::Modules$1;
using $Modules$2 = ::com::sun::tools::javac::comp::Modules$2;
using $Modules$3 = ::com::sun::tools::javac::comp::Modules$3;
using $Modules$PackageNameFinder = ::com::sun::tools::javac::comp::Modules$PackageNameFinder;
using $Modules$UsesProvidesVisitor = ::com::sun::tools::javac::comp::Modules$UsesProvidesVisitor;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $JNIWriter = ::com::sun::tools::javac::jvm::JNIWriter;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
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
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Modules$$Lambda$lambda$static$17 : public $Predicate {
	$class(Modules$$Lambda$lambda$static$17, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* m) override {
		 return Modules::lambda$static$17($cast($Symbol$ModuleSymbol, m));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$static$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$static$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$static$17::*)()>(&Modules$$Lambda$lambda$static$17::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$static$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$static$17",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$static$17::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$static$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$static$17::class$ = nullptr;

class Modules$$Lambda$lambda$initModules$0$1 : public $Consumer {
	$class(Modules$$Lambda$lambda$initModules$0$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Modules* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* modules) override {
		$nc(inst$)->lambda$initModules$0($cast($Set, modules));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$initModules$0$1>());
	}
	Modules* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$initModules$0$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$initModules$0$1, inst$)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$initModules$0$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$initModules$0$1::*)(Modules*)>(&Modules$$Lambda$lambda$initModules$0$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$initModules$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$initModules$0$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$initModules$0$1::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$initModules$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$initModules$0$1::class$ = nullptr;

class Modules$$Lambda$lambda$enter$1$2 : public $Consumer {
	$class(Modules$$Lambda$lambda$enter$1$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* modules) override {
		Modules::lambda$enter$1($cast($Set, modules));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$enter$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$enter$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$enter$1$2::*)()>(&Modules$$Lambda$lambda$enter$1$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$enter$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$enter$1$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$enter$1$2::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$enter$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$enter$1$2::class$ = nullptr;

class Modules$$Lambda$lambda$setCompilationUnitModules$2$3 : public $Symbol$Completer {
	$class(Modules$$Lambda$lambda$setCompilationUnitModules$2$3, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$(Modules* inst) {
		$set(this, inst$, inst);
	}
	virtual void complete($Symbol* sym) override {
		$nc(inst$)->lambda$setCompilationUnitModules$2(sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setCompilationUnitModules$2$3>());
	}
	Modules* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$setCompilationUnitModules$2$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$setCompilationUnitModules$2$3, inst$)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$setCompilationUnitModules$2$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setCompilationUnitModules$2$3::*)(Modules*)>(&Modules$$Lambda$lambda$setCompilationUnitModules$2$3::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setCompilationUnitModules$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setCompilationUnitModules$2$3",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setCompilationUnitModules$2$3::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setCompilationUnitModules$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setCompilationUnitModules$2$3::class$ = nullptr;

class Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4 : public $Symbol$Completer {
	$class(Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$(Modules* inst) {
		$set(this, inst$, inst);
	}
	virtual void complete($Symbol* sym) override {
		$nc(inst$)->lambda$getUsesProvidesCompleter$4(sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4>());
	}
	Modules* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4, inst$)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::*)(Modules*)>(&Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$5$5 : public $Predicate {
	$class(Modules$$Lambda$lambda$setupAllModules$5$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Modules* inst, $Set* observable) {
		$set(this, inst$, inst);
		$set(this, observable, observable);
	}
	virtual bool test(Object$* sym) override {
		 return $nc(inst$)->lambda$setupAllModules$5(observable, $cast($Symbol$ModuleSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$5$5>());
	}
	Modules* inst$ = nullptr;
	$Set* observable = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$setupAllModules$5$5::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$setupAllModules$5$5, inst$)},
	{"observable", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$setupAllModules$5$5, observable)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$5$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$5$5::*)(Modules*,$Set*)>(&Modules$$Lambda$lambda$setupAllModules$5$5::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$5$5",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$5$5::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$5$5::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$6$6 : public $Predicate {
	$class(Modules$$Lambda$lambda$setupAllModules$6$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return Modules::lambda$setupAllModules$6($cast($Symbol$ModuleSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$6$6::*)()>(&Modules$$Lambda$lambda$setupAllModules$6$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$6$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$6$6::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$6$6::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$8$7 : public $Predicate {
	$class(Modules$$Lambda$lambda$setupAllModules$8$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return Modules::lambda$setupAllModules$8($cast($Symbol$ModuleSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$8$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$8$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$8$7::*)()>(&Modules$$Lambda$lambda$setupAllModules$8$7::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$8$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$8$7",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$8$7::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$8$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$8$7::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$10$8 : public $Predicate {
	$class(Modules$$Lambda$lambda$setupAllModules$10$8, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Modules* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* sym) override {
		 return $nc(inst$)->lambda$setupAllModules$10($cast($Symbol$ModuleSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$10$8>());
	}
	Modules* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$setupAllModules$10$8::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$setupAllModules$10$8, inst$)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$10$8::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$10$8::*)(Modules*)>(&Modules$$Lambda$lambda$setupAllModules$10$8::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$10$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$10$8",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$10$8::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$10$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$10$8::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$11$9 : public $Predicate {
	$class(Modules$$Lambda$lambda$setupAllModules$11$9, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return Modules::lambda$setupAllModules$11($cast($Symbol$ModuleSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$11$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$11$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$11$9::*)()>(&Modules$$Lambda$lambda$setupAllModules$11$9::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$11$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$11$9",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$11$9::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$11$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$11$9::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$12$10 : public $Predicate {
	$class(Modules$$Lambda$lambda$setupAllModules$12$10, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return Modules::lambda$setupAllModules$12($cast($Symbol$ModuleSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$12$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$12$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$12$10::*)()>(&Modules$$Lambda$lambda$setupAllModules$12$10::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$12$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$12$10",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$12$10::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$12$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$12$10::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$13$11 : public $Consumer {
	$class(Modules$$Lambda$lambda$setupAllModules$13$11, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Set* enabledRoot, $Set* observable) {
		$set(this, enabledRoot, enabledRoot);
		$set(this, observable, observable);
	}
	virtual void accept(Object$* sym) override {
		Modules::lambda$setupAllModules$13(enabledRoot, observable, $cast($Symbol$ModuleSymbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$13$11>());
	}
	$Set* enabledRoot = nullptr;
	$Set* observable = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$setupAllModules$13$11::fieldInfos[3] = {
	{"enabledRoot", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$setupAllModules$13$11, enabledRoot)},
	{"observable", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$setupAllModules$13$11, observable)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$13$11::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$13$11::*)($Set*,$Set*)>(&Modules$$Lambda$lambda$setupAllModules$13$11::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$13$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$13$11",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$13$11::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$13$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$13$11::class$ = nullptr;

class Modules$$Lambda$add$12 : public $Consumer {
	$class(Modules$$Lambda$add$12, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Set* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->add(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$add$12>());
	}
	$Set* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$add$12::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$add$12, inst$)},
	{}
};
$MethodInfo Modules$$Lambda$add$12::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$add$12::*)($Set*)>(&Modules$$Lambda$add$12::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$add$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$add$12",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$add$12::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$add$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$add$12::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$14$13 : public $Predicate {
	$class(Modules$$Lambda$lambda$setupAllModules$14$13, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* msym) override {
		 return Modules::lambda$setupAllModules$14($cast($Symbol$ModuleSymbol, msym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$14$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$14$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$14$13::*)()>(&Modules$$Lambda$lambda$setupAllModules$14$13::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$14$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$14$13",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$14$13::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$14$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$14$13::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$15$14 : public $Function {
	$class(Modules$$Lambda$lambda$setupAllModules$15$14, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* msym) override {
		 return $of(Modules::lambda$setupAllModules$15($cast($Symbol$ModuleSymbol, msym)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$15$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$15$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$15$14::*)()>(&Modules$$Lambda$lambda$setupAllModules$15$14::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$15$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$15$14",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$15$14::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$15$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$15$14::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$16$15 : public $Consumer {
	$class(Modules$$Lambda$lambda$setupAllModules$16$15, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Name* version) {
		$set(this, version, version);
	}
	virtual void accept(Object$* m) override {
		Modules::lambda$setupAllModules$16(version, $cast($Symbol$ModuleSymbol, m));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$16$15>());
	}
	$Name* version = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$setupAllModules$16$15::fieldInfos[2] = {
	{"version", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$setupAllModules$16$15, version)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$16$15::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$16$15::*)($Name*)>(&Modules$$Lambda$lambda$setupAllModules$16$15::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$16$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$16$15",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$16$15::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$16$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$16$15::class$ = nullptr;

class Modules$$Lambda$lambda$completeModule$18$16 : public $Symbol$Completer {
	$class(Modules$$Lambda$lambda$completeModule$18$16, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$(Modules* inst, $Symbol$ModuleSymbol* msym) {
		$set(this, inst$, inst);
		$set(this, msym, msym);
	}
	virtual void complete($Symbol* sym) override {
		$nc(inst$)->lambda$completeModule$18(msym, sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$completeModule$18$16>());
	}
	Modules* inst$ = nullptr;
	$Symbol$ModuleSymbol* msym = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$completeModule$18$16::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$completeModule$18$16, inst$)},
	{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$completeModule$18$16, msym)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$completeModule$18$16::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$completeModule$18$16::*)(Modules*,$Symbol$ModuleSymbol*)>(&Modules$$Lambda$lambda$completeModule$18$16::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$completeModule$18$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$completeModule$18$16",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$completeModule$18$16::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$completeModule$18$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$completeModule$18$16::class$ = nullptr;

class Modules$$Lambda$lambda$completeModule$19$17 : public $Supplier {
	$class(Modules$$Lambda$lambda$completeModule$19$17, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Directive$RequiresDirective* d) {
		$set(this, d, d);
	}
	virtual $Object* get() override {
		 return $of(Modules::lambda$completeModule$19(d));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$completeModule$19$17>());
	}
	$Directive$RequiresDirective* d = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$completeModule$19$17::fieldInfos[2] = {
	{"d", "Lcom/sun/tools/javac/code/Directive$RequiresDirective;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$completeModule$19$17, d)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$completeModule$19$17::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Directive$RequiresDirective;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$completeModule$19$17::*)($Directive$RequiresDirective*)>(&Modules$$Lambda$lambda$completeModule$19$17::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$completeModule$19$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$completeModule$19$17",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$completeModule$19$17::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$completeModule$19$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$completeModule$19$17::class$ = nullptr;

class Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18 : public $Supplier {
	$class(Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol$ModuleSymbol* current, $Symbol$ModuleSymbol* msym) {
		$set(this, current, current);
		$set(this, msym, msym);
	}
	virtual $Object* get() override {
		 return $of(Modules::lambda$retrieveRequiresTransitive$20(current, msym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18>());
	}
	$Symbol$ModuleSymbol* current = nullptr;
	$Symbol$ModuleSymbol* msym = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::fieldInfos[3] = {
	{"current", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18, current)},
	{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18, msym)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::*)($Symbol$ModuleSymbol*,$Symbol$ModuleSymbol*)>(&Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::class$ = nullptr;

class Modules$$Lambda$lambda$initVisiblePackages$21$19 : public $BiConsumer {
	$class(Modules$$Lambda$lambda$initVisiblePackages$21$19, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Modules* inst, $Symbol$ModuleSymbol* msym, $Map* seen) {
		$set(this, inst$, inst);
		$set(this, msym, msym);
		$set(this, seen, seen);
	}
	virtual void accept(Object$* exportsFrom, Object$* exports) override {
		$nc(inst$)->lambda$initVisiblePackages$21(msym, seen, $cast($Symbol$ModuleSymbol, exportsFrom), $cast($Set, exports));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$initVisiblePackages$21$19>());
	}
	Modules* inst$ = nullptr;
	$Symbol$ModuleSymbol* msym = nullptr;
	$Map* seen = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$lambda$initVisiblePackages$21$19::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$initVisiblePackages$21$19, inst$)},
	{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$initVisiblePackages$21$19, msym)},
	{"seen", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Modules$$Lambda$lambda$initVisiblePackages$21$19, seen)},
	{}
};
$MethodInfo Modules$$Lambda$lambda$initVisiblePackages$21$19::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$initVisiblePackages$21$19::*)(Modules*,$Symbol$ModuleSymbol*,$Map*)>(&Modules$$Lambda$lambda$initVisiblePackages$21$19::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$initVisiblePackages$21$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$initVisiblePackages$21$19",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$lambda$initVisiblePackages$21$19::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$initVisiblePackages$21$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$initVisiblePackages$21$19::class$ = nullptr;

class Modules$$Lambda$lambda$initAddExports$22$20 : public $Function {
	$class(Modules$$Lambda$lambda$initAddExports$22$20, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* _x) override {
		 return $of(Modules::lambda$initAddExports$22($cast($Symbol$ModuleSymbol, _x)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$initAddExports$22$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$initAddExports$22$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$initAddExports$22$20::*)()>(&Modules$$Lambda$lambda$initAddExports$22$20::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$initAddExports$22$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$initAddExports$22$20",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$initAddExports$22$20::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$initAddExports$22$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$initAddExports$22$20::class$ = nullptr;

class Modules$$Lambda$lambda$initAddReads$23$21 : public $Function {
	$class(Modules$$Lambda$lambda$initAddReads$23$21, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* m) override {
		 return $of(Modules::lambda$initAddReads$23($cast($Symbol$ModuleSymbol, m)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$initAddReads$23$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$initAddReads$23$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$initAddReads$23$21::*)()>(&Modules$$Lambda$lambda$initAddReads$23$21::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$initAddReads$23$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$initAddReads$23$21",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$initAddReads$23$21::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$initAddReads$23$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$initAddReads$23$21::class$ = nullptr;

class Modules$$Lambda$toString$22 : public $Supplier {
	$class(Modules$$Lambda$toString$22, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol$ModuleSymbol* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$toString$22>());
	}
	$Symbol$ModuleSymbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$$Lambda$toString$22::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$$Lambda$toString$22, inst$)},
	{}
};
$MethodInfo Modules$$Lambda$toString$22::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$toString$22::*)($Symbol$ModuleSymbol*)>(&Modules$$Lambda$toString$22::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$toString$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$toString$22",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Modules$$Lambda$toString$22::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$toString$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$toString$22::class$ = nullptr;

class Modules$$Lambda$lambda$setupAllModules$7$23 : public $Predicate {
	$class(Modules$$Lambda$lambda$setupAllModules$7$23, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return Modules::lambda$setupAllModules$7($cast($Directive$ExportsDirective, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$$Lambda$lambda$setupAllModules$7$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$$Lambda$lambda$setupAllModules$7$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$$Lambda$lambda$setupAllModules$7$23::*)()>(&Modules$$Lambda$lambda$setupAllModules$7$23::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$$Lambda$lambda$setupAllModules$7$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$$Lambda$lambda$setupAllModules$7$23",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Modules$$Lambda$lambda$setupAllModules$7$23::load$($String* name, bool initialize) {
	$loadClass(Modules$$Lambda$lambda$setupAllModules$7$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$$Lambda$lambda$setupAllModules$7$23::class$ = nullptr;

$FieldInfo _Modules_FieldInfo_[] = {
	{"ALL_SYSTEM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Modules, ALL_SYSTEM)},
	{"ALL_MODULE_PATH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Modules, ALL_MODULE_PATH)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Modules, log)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Modules, names)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Modules, syms)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE | $FINAL, $field(Modules, attr)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(Modules, chk)},
	{"deferredLintHandler", "Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $PRIVATE | $FINAL, $field(Modules, deferredLintHandler)},
	{"typeEnvs", "Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $PRIVATE | $FINAL, $field(Modules, typeEnvs)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Modules, types)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(Modules, fileManager)},
	{"moduleFinder", "Lcom/sun/tools/javac/code/ModuleFinder;", nullptr, $PRIVATE | $FINAL, $field(Modules, moduleFinder)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $FINAL, $field(Modules, source)},
	{"target", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $FINAL, $field(Modules, target)},
	{"allowModules", "Z", nullptr, $PRIVATE | $FINAL, $field(Modules, allowModules)},
	{"allowAccessIntoSystem", "Z", nullptr, $PRIVATE | $FINAL, $field(Modules, allowAccessIntoSystem)},
	{"multiModuleMode", "Z", nullptr, $PUBLIC | $FINAL, $field(Modules, multiModuleMode)},
	{"java_se", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(Modules, java_se)},
	{"java_", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(Modules, java_)},
	{"defaultModule", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, 0, $field(Modules, defaultModule)},
	{"addExportsOpt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Modules, addExportsOpt)},
	{"addExports", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$ExportsDirective;>;>;", $PRIVATE, $field(Modules, addExports)},
	{"addReadsOpt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Modules, addReadsOpt)},
	{"addReads", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$RequiresDirective;>;>;", $PRIVATE, $field(Modules, addReads)},
	{"addModsOpt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Modules, addModsOpt)},
	{"extraAddMods", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(Modules, extraAddMods)},
	{"limitModsOpt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Modules, limitModsOpt)},
	{"extraLimitMods", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(Modules, extraLimitMods)},
	{"moduleVersionOpt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Modules, moduleVersionOpt)},
	{"lintOptions", "Z", nullptr, $PRIVATE | $FINAL, $field(Modules, lintOptions)},
	{"rootModules", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE, $field(Modules, rootModules)},
	{"warnedMissing", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE | $FINAL, $field(Modules, warnedMissing)},
	{"findPackageInFile", "Lcom/sun/tools/javac/comp/Modules$PackageNameFinder;", nullptr, $PUBLIC, $field(Modules, findPackageInFile)},
	{"depth", "I", nullptr, 0, $field(Modules, depth)},
	{"inInitModules", "Z", nullptr, 0, $field(Modules, inInitModules)},
	{"mainCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PRIVATE | $FINAL, $field(Modules, mainCompleter)},
	{"allModules", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE, $field(Modules, allModules$)},
	{"IS_AUTOMATIC", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Modules, IS_AUTOMATIC)},
	{"requiresTransitiveCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;>;", $PRIVATE | $FINAL, $field(Modules, requiresTransitiveCache)},
	{}
};

$MethodInfo _Modules_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Modules::*)($Context*)>(&Modules::init$))},
	{"addExtraAddModules", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"addVisiblePackages", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Collection;)V", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Collection<Lcom/sun/tools/javac/code/Directive$ExportsDirective;>;)V", $PRIVATE, $method(static_cast<void(Modules::*)($Symbol$ModuleSymbol*,$Map*,$Symbol$ModuleSymbol*,$Collection*)>(&Modules::addVisiblePackages))},
	{"allModules", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC},
	{"checkCyclicDependencies", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)($JCTree$JCModuleDecl*)>(&Modules::checkCyclicDependencies))},
	{"checkNoAllModulePath", "()V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)()>(&Modules::checkNoAllModulePath))},
	{"checkSourceLocation", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)($JCTree$JCCompilationUnit*,$Symbol$ModuleSymbol*)>(&Modules::checkSourceLocation))},
	{"completeAutomaticModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)($Symbol$ModuleSymbol*)>(&Modules::completeAutomaticModule)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"completeModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)($Symbol$ModuleSymbol*)>(&Modules::completeModule))},
	{"computeTransitiveClosure", "(Ljava/util/Set;Ljava/util/Set;Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;Ljava/util/Set<+Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;)Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE, $method(static_cast<$Set*(Modules::*)($Set*,$Set*,$Set*)>(&Modules::computeTransitiveClosure))},
	{"enter", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", $PUBLIC},
	{"enter", "(Lcom/sun/tools/javac/util/List;Ljava/util/function/Consumer;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Ljava/util/function/Consumer<Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", $PRIVATE, $method(static_cast<bool(Modules::*)($List*,$Consumer*,$Symbol$ClassSymbol*)>(&Modules::enter))},
	{"enterModule", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/util/Set;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;)V", $PRIVATE, $method(static_cast<void(Modules::*)($JCTree$JCCompilationUnit*,$Symbol$ClassSymbol*,$Set*)>(&Modules::enterModule))},
	{"enterModules", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljava/util/Set;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE, $method(static_cast<$Set*(Modules::*)($List*,$Symbol$ClassSymbol*)>(&Modules::enterModules))},
	{"getCompleter", "()Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC},
	{"getDefaultModule", "()Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"getModuleLocation", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PRIVATE, $method(static_cast<$JavaFileManager$Location*(Modules::*)($JCTree$JCCompilationUnit*)>(&Modules::getModuleLocation)), "java.io.IOException"},
	{"getObservableModule", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"getRootModules", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC},
	{"getSourceCompleter", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PRIVATE, $method(static_cast<$Symbol$Completer*(Modules::*)($JCTree$JCCompilationUnit*)>(&Modules::getSourceCompleter))},
	{"getUnnamedModuleCompleter", "()Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PRIVATE, $method(static_cast<$Symbol$Completer*(Modules::*)()>(&Modules::getUnnamedModuleCompleter))},
	{"getUsesProvidesCompleter", "()Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC},
	{"initAddExports", "()V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)()>(&Modules::initAddExports))},
	{"initAddReads", "()V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)()>(&Modules::initAddReads))},
	{"initModules", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)V", $PUBLIC},
	{"initVisiblePackages", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Collection;)V", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Collection<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;)V", $PRIVATE, $method(static_cast<void(Modules::*)($Symbol$ModuleSymbol*,$Collection*)>(&Modules::initVisiblePackages))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Modules;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Modules*(*)($Context*)>(&Modules::instance))},
	{"isInModuleGraph", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PUBLIC},
	{"isKnownModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Set;)Z", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;)Z", $PRIVATE, $method(static_cast<bool(Modules::*)($Symbol$ModuleSymbol*,$Set*)>(&Modules::isKnownModule))},
	{"isRootModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PUBLIC},
	{"isValidName", "(Ljava/lang/CharSequence;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Modules::*)($CharSequence*)>(&Modules::isValidName))},
	{"lambda$completeModule$18", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Modules::*)($Symbol$ModuleSymbol*,$Symbol*)>(&Modules::lambda$completeModule$18)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"lambda$completeModule$19", "(Lcom/sun/tools/javac/code/Directive$RequiresDirective;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Directive$RequiresDirective*)>(&Modules::lambda$completeModule$19))},
	{"lambda$enter$1", "(Ljava/util/Set;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Set*)>(&Modules::lambda$enter$1))},
	{"lambda$getUsesProvidesCompleter$4", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Modules::*)($Symbol*)>(&Modules::lambda$getUsesProvidesCompleter$4)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"lambda$initAddExports$22", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/util/Set;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Set*(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$initAddExports$22))},
	{"lambda$initAddReads$23", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/util/Set;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Set*(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$initAddReads$23))},
	{"lambda$initModules$0", "(Ljava/util/Set;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Modules::*)($Set*)>(&Modules::lambda$initModules$0))},
	{"lambda$initVisiblePackages$21", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Map;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Set;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Modules::*)($Symbol$ModuleSymbol*,$Map*,$Symbol$ModuleSymbol*,$Set*)>(&Modules::lambda$initVisiblePackages$21))},
	{"lambda$retrieveRequiresTransitive$20", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Symbol$ModuleSymbol*,$Symbol$ModuleSymbol*)>(&Modules::lambda$retrieveRequiresTransitive$20))},
	{"lambda$setCompilationUnitModules$2", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Modules::*)($Symbol*)>(&Modules::lambda$setCompilationUnitModules$2)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"lambda$setupAllModules$10", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Modules::*)($Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$10))},
	{"lambda$setupAllModules$11", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$11))},
	{"lambda$setupAllModules$12", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$12))},
	{"lambda$setupAllModules$13", "(Ljava/util/Set;Ljava/util/Set;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Set*,$Set*,$Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$13))},
	{"lambda$setupAllModules$14", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$14))},
	{"lambda$setupAllModules$15", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$15))},
	{"lambda$setupAllModules$16", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Name*,$Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$16))},
	{"lambda$setupAllModules$5", "(Ljava/util/Set;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Modules::*)($Set*,$Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$5))},
	{"lambda$setupAllModules$6", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$6))},
	{"lambda$setupAllModules$7", "(Lcom/sun/tools/javac/code/Directive$ExportsDirective;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Directive$ExportsDirective*)>(&Modules::lambda$setupAllModules$7))},
	{"lambda$setupAllModules$8", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$setupAllModules$8))},
	{"lambda$static$17", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$ModuleSymbol*)>(&Modules::lambda$static$17))},
	{"modulesInitialized", "()Z", nullptr, $PUBLIC},
	{"newRound", "()V", nullptr, $PUBLIC},
	{"retrieveRequiresTransitive", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/util/Set;", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE, $method(static_cast<$Set*(Modules::*)($Symbol$ModuleSymbol*)>(&Modules::retrieveRequiresTransitive))},
	{"setCompilationUnitModules", "(Lcom/sun/tools/javac/util/List;Ljava/util/Set;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", $PRIVATE, $method(static_cast<void(Modules::*)($List*,$Set*,$Symbol$ClassSymbol*)>(&Modules::setCompilationUnitModules))},
	{"setupAllModules", "()V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)()>(&Modules::setupAllModules))},
	{"setupAutomaticModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules::*)($Symbol$ModuleSymbol*)>(&Modules::setupAutomaticModule)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"singleModuleOverride", "(Lcom/sun/tools/javac/util/List;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(Modules::*)($List*)>(&Modules::singleModuleOverride))},
	{"toString", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Modules::*)($Symbol$ModuleSymbol*)>(&Modules::toString))},
	{"toString", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/String;", nullptr, 0},
	{"toString", "(Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _Modules_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Modules$PackageNameFinder", "com.sun.tools.javac.comp.Modules", "PackageNameFinder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Modules$UsesProvidesVisitor", "com.sun.tools.javac.comp.Modules", "UsesProvidesVisitor", 0},
	{"com.sun.tools.javac.comp.Modules$ModuleVisitor", "com.sun.tools.javac.comp.Modules", "ModuleVisitor", 0},
	{"com.sun.tools.javac.comp.Modules$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Modules$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Modules$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Modules_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Modules",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Modules_FieldInfo_,
	_Modules_MethodInfo_,
	nullptr,
	nullptr,
	_Modules_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Modules$PackageNameFinder,com.sun.tools.javac.comp.Modules$UsesProvidesVisitor,com.sun.tools.javac.comp.Modules$ModuleVisitor,com.sun.tools.javac.comp.Modules$3,com.sun.tools.javac.comp.Modules$2,com.sun.tools.javac.comp.Modules$1"
};

$Object* allocate$Modules($Class* clazz) {
	return $of($alloc(Modules));
}

$String* Modules::ALL_SYSTEM = nullptr;
$String* Modules::ALL_MODULE_PATH = nullptr;
$Predicate* Modules::IS_AUTOMATIC = nullptr;

Modules* Modules::instance($Context* context) {
	$init(Modules);
	$var(Modules, instance, $cast(Modules, $nc(context)->get(Modules::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(Modules, context));
	}
	return instance;
}

void Modules::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$JCTree$Visitor::init$();
	$set(this, extraAddMods, $new($HashSet));
	$set(this, extraLimitMods, $new($HashSet));
	$set(this, rootModules, nullptr);
	$set(this, warnedMissing, $new($HashSet));
	this->depth = -1;
	$set(this, mainCompleter, $new($Modules$1, this));
	$set(this, requiresTransitiveCache, $new($HashMap));
	$nc(context)->put(Modules::class$, $of(this));
	$set(this, log, $Log::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, deferredLintHandler, $DeferredLintHandler::instance(context));
	$set(this, typeEnvs, $TypeEnvs::instance(context));
	$set(this, moduleFinder, $ModuleFinder::instance(context));
	$set(this, types, $Types::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, source, $Source::instance(context));
	$set(this, target, $Target::instance(context));
	$init($Source$Feature);
	this->allowModules = $Source$Feature::MODULES->allowedInSource(this->source);
	$var($Options, options, $Options::instance(context));
	$init($Option);
	this->allowAccessIntoSystem = $nc(options)->isUnset($Option::RELEASE);
	$init($Lint$LintCategory);
	this->lintOptions = options->isUnset($Option::XLINT_CUSTOM, $$str({"-"_s, $Lint$LintCategory::OPTIONS->option}));
	$init($StandardLocation);
	this->multiModuleMode = $nc(this->fileManager)->hasLocation($StandardLocation::MODULE_SOURCE_PATH);
	$var($ClassWriter, classWriter, $ClassWriter::instance(context));
	$nc(classWriter)->multiModuleMode = this->multiModuleMode;
	$var($JNIWriter, jniWriter, $JNIWriter::instance(context));
	$nc(jniWriter)->multiModuleMode = this->multiModuleMode;
	$set(this, java_se, $nc(this->names)->fromString("java.se"_s));
	$set(this, java_, $nc(this->names)->fromString("java."_s));
	$set(this, addExportsOpt, options->get($Option::ADD_EXPORTS));
	$set(this, addReadsOpt, options->get($Option::ADD_READS));
	$set(this, addModsOpt, options->get($Option::ADD_MODULES));
	$set(this, limitModsOpt, options->get($Option::LIMIT_MODULES));
	$set(this, moduleVersionOpt, options->get($Option::MODULE_VERSION));
}

void Modules::addExtraAddModules($StringArray* extras) {
	$nc(this->extraAddMods)->addAll($($Arrays::asList(extras)));
}

void Modules::initModules($List* trees) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(!this->inInitModules);
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->inInitModules = true;
			$Assert::checkNull(this->rootModules);
			enter(trees, static_cast<$Consumer*>($$new(Modules$$Lambda$lambda$initModules$0$1, this)), nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->inInitModules = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool Modules::enter($List* trees, $Symbol$ClassSymbol* c) {
	$Assert::check(this->rootModules != nullptr || this->inInitModules || !this->allowModules);
	return enter(trees, static_cast<$Consumer*>($$new(Modules$$Lambda$lambda$enter$1$2)), c);
}

bool Modules::enter($List* trees, $Consumer* init, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	if (!this->allowModules) {
		{
			$var($Iterator, i$, $nc(trees)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCompilationUnit, tree, $cast($JCTree$JCCompilationUnit, i$->next()));
				{
					$set($nc(tree), modle, $nc(this->syms)->noModule);
				}
			}
		}
		$set(this, defaultModule, $nc(this->syms)->noModule);
		return true;
	}
	int32_t startErrors = $nc(this->log)->nerrors;
	++this->depth;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($Set, roots, enterModules(trees, c));
				setCompilationUnitModules(trees, roots, c);
				$nc(init)->accept(roots);
				{
					$var($Iterator, i$, $nc(roots)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, i$->next()));
						{
							$nc(msym)->complete();
						}
					}
				}
			} catch ($Symbol$CompletionFailure& ex) {
				$nc(this->chk)->completionError(nullptr, ex);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			--this->depth;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return ($nc(this->log)->nerrors == startErrors);
}

$Symbol$Completer* Modules::getCompleter() {
	return this->mainCompleter;
}

$Symbol$ModuleSymbol* Modules::getDefaultModule() {
	return this->defaultModule;
}

bool Modules::modulesInitialized() {
	return this->allModules$ != nullptr;
}

$Set* Modules::enterModules($List* trees, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($Set, modules, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(trees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCompilationUnit, tree, $cast($JCTree$JCCompilationUnit, i$->next()));
			{
				$var($JavaFileObject, prev, $nc(this->log)->useSource($nc(tree)->sourcefile));
				{
					$var($Throwable, var$0, nullptr);
					try {
						enterModule(tree, c, modules);
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						$nc(this->log)->useSource(prev);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
	return modules;
}

void Modules::enterModule($JCTree$JCCompilationUnit* toplevel, $Symbol$ClassSymbol* c, $Set* modules) {
	$useLocalCurrentObjectStackCache();
	$init($JavaFileObject$Kind);
	bool isModuleInfo = $nc($nc(toplevel)->sourcefile)->isNameCompatible("module-info"_s, $JavaFileObject$Kind::SOURCE);
	bool isModuleDecl = toplevel->getModuleDecl() != nullptr;
	if (isModuleDecl) {
		$var($JCTree$JCModuleDecl, decl, toplevel->getModuleDecl());
		if (!isModuleInfo) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(decl)->pos()), $CompilerProperties$Errors::ModuleDeclSbInModuleInfoJava);
		}
		$var($Name, name, $TreeInfo::fullName($nc(decl)->qualId));
		$var($Symbol$ModuleSymbol, sym, nullptr);
		if (c != nullptr) {
			$assign(sym, $cast($Symbol$ModuleSymbol, c->owner));
			$Assert::checkNonNull($nc(sym)->name);
			$var($Name, treeName, $TreeInfo::fullName($nc(decl)->qualId));
			if ($nc(sym)->name != treeName) {
				$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(decl)->pos());
				$nc(this->log)->error(var$0, $($CompilerProperties$Errors::ModuleNameMismatch(name, sym->name)));
			}
		} else {
			$assign(sym, $nc(this->syms)->enterModule(name));
			if ($nc($nc(sym)->module_info)->sourcefile != nullptr && $nc(sym->module_info)->sourcefile != toplevel->sourcefile) {
				$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(decl)->pos());
				$nc(this->log)->error(var$1, $($CompilerProperties$Errors::DuplicateModule(sym)));
				return;
			}
		}
		$set($nc(sym), completer, getSourceCompleter(toplevel));
		$set($nc(sym->module_info), sourcefile, toplevel->sourcefile);
		$set($nc(decl), sym, sym);
		if (this->multiModuleMode || $nc(modules)->isEmpty()) {
			modules->add(sym);
		} else {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($(toplevel->pos()), $CompilerProperties$Errors::TooManyModules);
		}
		$var($Env, provisionalEnv, $new($Env, decl, nullptr));
		$set(provisionalEnv, toplevel, toplevel);
		$nc(this->typeEnvs)->put(sym, provisionalEnv);
	} else if (isModuleInfo) {
		if (this->multiModuleMode) {
			$var($JCTree, tree, $nc(toplevel->defs)->isEmpty() ? static_cast<$JCTree*>(toplevel) : $cast($JCTree, $nc(toplevel->defs)->head));
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::ExpectedModule);
		}
	}
}

void Modules::setCompilationUnitModules($List* trees, $Set* rootModules, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	if (this->multiModuleMode) {
		bool patchesAutomaticModules = false;
		{
			$var($Iterator, i$, $nc(trees)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCompilationUnit, tree, $cast($JCTree$JCCompilationUnit, i$->next()));
				{
					if ($nc($nc(tree)->defs)->isEmpty()) {
						$set(tree, modle, $nc(this->syms)->unnamedModule);
						continue;
					}
					$var($JavaFileObject, prev, $nc(this->log)->useSource($nc(tree)->sourcefile));
					{
						$var($Throwable, var$0, nullptr);
						try {
							try {
								$var($JavaFileManager$Location, msplocn, getModuleLocation(tree));
								$init($StandardLocation);
								$var($JavaFileManager$Location, plocn, $nc(this->fileManager)->hasLocation($StandardLocation::PATCH_MODULE_PATH) ? $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::PATCH_MODULE_PATH), $nc(tree)->sourcefile) : ($JavaFileManager$Location*)nullptr);
								if (plocn != nullptr) {
									$var($Name, name, $nc(this->names)->fromString($($nc(this->fileManager)->inferModuleName(plocn))));
									$var($Symbol$ModuleSymbol, msym, $nc(this->moduleFinder)->findModule(name));
									$set($nc(tree), modle, msym);
									$nc(rootModules)->add(msym);
									patchesAutomaticModules |= ((int64_t)($nc(msym)->flags_field & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0;
									if (msplocn != nullptr) {
										$var($Name, mspname, $nc(this->names)->fromString($($nc(this->fileManager)->inferModuleName(msplocn))));
										if (name != mspname) {
											$var($JCDiagnostic$DiagnosticPosition, var$1, tree->pos());
											$nc(this->log)->error(var$1, $($CompilerProperties$Errors::FilePatchedAndMsp(name, mspname)));
										}
									}
								} else if (msplocn != nullptr) {
									if ($nc(tree)->getModuleDecl() != nullptr) {
										$init($JavaFileObject$Kind);
										$var($JavaFileObject, canonical, $nc(this->fileManager)->getJavaFileForInput(msplocn, "module-info"_s, $JavaFileObject$Kind::SOURCE));
										if (canonical == nullptr || !$nc(this->fileManager)->isSameFile(canonical, tree->sourcefile)) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::ModuleNotFoundOnModuleSourcePath);
										}
									}
									$var($Name, name, $nc(this->names)->fromString($($nc(this->fileManager)->inferModuleName(msplocn))));
									$var($Symbol$ModuleSymbol, msym, nullptr);
									$var($JCTree$JCModuleDecl, decl, $nc(tree)->getModuleDecl());
									if (decl != nullptr) {
										$assign(msym, decl->sym);
										if ($nc(msym)->name != name) {
											$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(decl->qualId), $($CompilerProperties$Errors::ModuleNameMismatch(msym->name, name)));
										}
									} else {
										if ($cast($JCTree$JCPackageDecl, tree->getPackage()) == nullptr) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::UnnamedPkgNotAllowedNamedModules);
										}
										$assign(msym, $nc(this->syms)->enterModule(name));
									}
									if ($nc(msym)->sourceLocation == nullptr) {
										$set(msym, sourceLocation, msplocn);
										if ($nc(this->fileManager)->hasLocation($StandardLocation::PATCH_MODULE_PATH)) {
											$set(msym, patchLocation, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::PATCH_MODULE_PATH), $($nc(msym->name)->toString())));
										}
										if ($nc(this->fileManager)->hasLocation($StandardLocation::CLASS_OUTPUT)) {
											$var($JavaFileManager$Location, outputLocn, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::CLASS_OUTPUT), $($nc(msym->name)->toString())));
											if (msym->patchLocation == nullptr) {
												$set(msym, classLocation, outputLocn);
											} else {
												$set(msym, patchOutputLocation, outputLocn);
											}
										}
									}
									$set(tree, modle, msym);
									$nc(rootModules)->add(msym);
								} else if (c != nullptr && $nc($(c->packge()))->modle == $nc(this->syms)->unnamedModule) {
									$set($nc(tree), modle, $nc(this->syms)->unnamedModule);
								} else {
									if ($nc(tree)->getModuleDecl() != nullptr) {
										$init($CompilerProperties$Errors);
										$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::ModuleNotFoundOnModuleSourcePath);
									} else {
										$init($CompilerProperties$Errors);
										$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::NotInModuleOnModuleSourcePath);
									}
									$set($nc(tree), modle, $nc(this->syms)->errModule);
								}
							} catch ($IOException& e) {
								$throwNew($Error, static_cast<$Throwable*>(e));
							}
						} catch ($Throwable& var$2) {
							$assign(var$0, var$2);
						} /*finally*/ {
							$nc(this->log)->useSource(prev);
						}
						if (var$0 != nullptr) {
							$throw(var$0);
						}
					}
				}
			}
		}
		if (!patchesAutomaticModules) {
			checkNoAllModulePath();
		}
		if ($nc($nc(this->syms)->unnamedModule)->sourceLocation == nullptr) {
			$set($nc($nc(this->syms)->unnamedModule), completer, getUnnamedModuleCompleter());
			$init($StandardLocation);
			$set($nc($nc(this->syms)->unnamedModule), sourceLocation, $StandardLocation::SOURCE_PATH);
			$set($nc($nc(this->syms)->unnamedModule), classLocation, $StandardLocation::CLASS_PATH);
		}
		$set(this, defaultModule, $nc(this->syms)->unnamedModule);
	} else {
		$var($Symbol$ModuleSymbol, module, nullptr);
		if (this->defaultModule == nullptr) {
			$var($String, moduleOverride, singleModuleOverride(trees));
			switch ($nc(rootModules)->size()) {
			case 0:
				{
					try {
						$set(this, defaultModule, $nc(this->moduleFinder)->findSingleModule());
					} catch ($Symbol$CompletionFailure& cf) {
						$nc(this->chk)->completionError(nullptr, cf);
						$set(this, defaultModule, $nc(this->syms)->unnamedModule);
					}
					if (this->defaultModule == $nc(this->syms)->unnamedModule) {
						if (moduleOverride != nullptr) {
							$set(this, defaultModule, $nc(this->moduleFinder)->findModule($($nc(this->names)->fromString(moduleOverride))));
							$init($StandardLocation);
							$set($nc(this->defaultModule), patchOutputLocation, $StandardLocation::CLASS_OUTPUT);
							if (((int64_t)($nc(this->defaultModule)->flags_field & (uint64_t)$Flags::AUTOMATIC_MODULE)) == 0) {
								checkNoAllModulePath();
							}
						} else {
							$set($nc(this->defaultModule), completer, getUnnamedModuleCompleter());
							$init($StandardLocation);
							$set($nc(this->defaultModule), sourceLocation, $StandardLocation::SOURCE_PATH);
							$set($nc(this->defaultModule), classLocation, $StandardLocation::CLASS_PATH);
						}
					} else {
						checkNoAllModulePath();
						$nc(this->defaultModule)->complete();
						$set($nc(this->defaultModule), completer, static_cast<$Symbol$Completer*>($new(Modules$$Lambda$lambda$setCompilationUnitModules$2$3, this)));
						$init($StandardLocation);
						$set($nc(this->defaultModule), sourceLocation, $StandardLocation::SOURCE_PATH);
					}
					rootModules->add(this->defaultModule);
					break;
				}
			case 1:
				{
					checkNoAllModulePath();
					$set(this, defaultModule, $cast($Symbol$ModuleSymbol, $nc($(rootModules->iterator()))->next()));
					$init($StandardLocation);
					$set($nc(this->defaultModule), sourceLocation, $StandardLocation::SOURCE_PATH);
					$init($StandardLocation);
					if ($nc(this->fileManager)->hasLocation($StandardLocation::PATCH_MODULE_PATH)) {
						try {
							$set($nc(this->defaultModule), patchLocation, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::PATCH_MODULE_PATH), $($nc($nc(this->defaultModule)->name)->toString())));
						} catch ($IOException& ex) {
							$throwNew($Error, static_cast<$Throwable*>(ex));
						}
					}
					if ($nc(this->defaultModule)->patchLocation == nullptr) {
						$init($StandardLocation);
						$set($nc(this->defaultModule), classLocation, $StandardLocation::CLASS_OUTPUT);
					} else {
						$init($StandardLocation);
						$set($nc(this->defaultModule), patchOutputLocation, $StandardLocation::CLASS_OUTPUT);
					}
					break;
				}
			default:
				{
					$Assert::error("too many modules"_s);
				}
			}
		} else if ($nc(rootModules)->size() == 1) {
			$assign(module, $cast($Symbol$ModuleSymbol, $nc($(rootModules->iterator()))->next()));
			$nc(module)->complete();
			$set(module, completer, static_cast<$Symbol$Completer*>($new(Modules$$Lambda$lambda$setCompilationUnitModules$2$3, this)));
		} else {
			$Assert::check(rootModules->isEmpty());
			$Assert::checkNonNull(c);
			$assign(module, $nc($($nc(c)->packge()))->modle);
			rootModules->add(module);
		}
		if (this->defaultModule != $nc(this->syms)->unnamedModule) {
			$set($nc($nc(this->syms)->unnamedModule), completer, getUnnamedModuleCompleter());
			$init($StandardLocation);
			$set($nc($nc(this->syms)->unnamedModule), classLocation, $StandardLocation::CLASS_PATH);
		}
		if (module == nullptr) {
			$assign(module, this->defaultModule);
		}
		{
			$var($Iterator, i$, $nc(trees)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCompilationUnit, tree, $cast($JCTree$JCCompilationUnit, i$->next()));
				{
					$init($StandardLocation);
					if (this->defaultModule != $nc(this->syms)->unnamedModule && $equals($nc(this->defaultModule)->sourceLocation, $StandardLocation::SOURCE_PATH) && $nc(this->fileManager)->hasLocation($StandardLocation::SOURCE_PATH)) {
						checkSourceLocation(tree, module);
					}
					$set($nc(tree), modle, module);
				}
			}
		}
	}
}

void Modules::checkSourceLocation($JCTree$JCCompilationUnit* tree, $Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JavaFileObject, fo, $nc(tree)->sourcefile);
		if ($nc(this->fileManager)->contains($nc(msym)->sourceLocation, fo)) {
			return;
		}
		if ($nc(msym)->patchLocation != nullptr && $nc(this->fileManager)->contains(msym->patchLocation, fo)) {
			return;
		}
		$init($StandardLocation);
		if ($nc(this->fileManager)->hasLocation($StandardLocation::SOURCE_OUTPUT)) {
			if ($nc(this->fileManager)->contains($StandardLocation::SOURCE_OUTPUT, fo)) {
				return;
			}
		} else {
			if ($nc(this->fileManager)->contains($StandardLocation::CLASS_OUTPUT, fo)) {
				return;
			}
		}
	} catch ($IOException& e) {
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc(tree)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::FileSbOnSourceOrPatchPathForModule);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* Modules::singleModuleOverride($List* trees) {
	$useLocalCurrentObjectStackCache();
	$init($StandardLocation);
	if (!$nc(this->fileManager)->hasLocation($StandardLocation::PATCH_MODULE_PATH)) {
		return nullptr;
	}
	$var($Set, override$, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(trees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCompilationUnit, tree, $cast($JCTree$JCCompilationUnit, i$->next()));
			{
				$var($JavaFileObject, fo, $nc(tree)->sourcefile);
				try {
					$var($JavaFileManager$Location, loc, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::PATCH_MODULE_PATH), fo));
					if (loc != nullptr) {
						override$->add($($nc(this->fileManager)->inferModuleName(loc)));
					}
				} catch ($IOException& ex) {
					$throwNew($Error, static_cast<$Throwable*>(ex));
				}
			}
		}
	}
	switch (override$->size()) {
	case 0:
		{
			return nullptr;
		}
	case 1:
		{
			return $cast($String, $nc($(override$->iterator()))->next());
		}
	default:
		{
			$nc(this->log)->error($($CompilerProperties$Errors::TooManyPatchedModules(override$)));
			return nullptr;
		}
	}
}

$JavaFileManager$Location* Modules::getModuleLocation($JCTree$JCCompilationUnit* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, fo, $nc(tree)->sourcefile);
	$init($StandardLocation);
	$var($JavaFileManager$Location, loc, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::MODULE_SOURCE_PATH), fo));
	if (loc == nullptr) {
		$var($JavaFileManager$Location, sourceOutput, $nc(this->fileManager)->hasLocation($StandardLocation::SOURCE_OUTPUT) ? static_cast<$JavaFileManager$Location*>($StandardLocation::SOURCE_OUTPUT) : static_cast<$JavaFileManager$Location*>($StandardLocation::CLASS_OUTPUT));
		$assign(loc, $nc(this->fileManager)->getLocationForModule(sourceOutput, fo));
	}
	return loc;
}

void Modules::checkNoAllModulePath() {
	$useLocalCurrentObjectStackCache();
	if (this->addModsOpt != nullptr && $nc($($Arrays::asList($($nc(this->addModsOpt)->split(","_s)))))->contains(Modules::ALL_MODULE_PATH)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($CompilerProperties$Errors::AddmodsAllModulePathInvalid);
	}
}

void Modules::setupAutomaticModule($Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ListBuffer, directives, $new($ListBuffer));
		$var($ListBuffer, exports, $new($ListBuffer));
		$var($Set, seenPackages, $new($HashSet));
		{
			$init($JavaFileObject$Kind);
			$var($Iterator, i$, $nc($($nc(this->fileManager)->list($nc(msym)->classLocation, ""_s, $($EnumSet::of($JavaFileObject$Kind::CLASS)), true)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JavaFileObject, clazz, $cast($JavaFileObject, i$->next()));
				{
					$var($String, binName, $nc(this->fileManager)->inferBinaryName($nc(msym)->classLocation, clazz));
					$var($String, pack, $nc(binName)->lastIndexOf((int32_t)u'.') != (-1) ? $nc(binName)->substring(0, binName->lastIndexOf((int32_t)u'.')) : ""_s);
					if (seenPackages->add(pack)) {
						$var($Directive$ExportsDirective, d, $new($Directive$ExportsDirective, $($nc(this->syms)->enterPackage(msym, $($nc(this->names)->fromString(pack)))), nullptr));
						directives->add(d);
						exports->add(d);
					}
				}
			}
		}
		$set($nc(msym), exports, exports->toList());
		$set(msym, provides, $List::nil());
		$set(msym, requires, $List::nil());
		$set(msym, uses, $List::nil());
		$set(msym, directives, directives->toList());
	} catch ($IOException& ex) {
		$throwNew($IllegalStateException, static_cast<$Throwable*>(ex));
	}
}

void Modules::completeAutomaticModule($Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, directives, $new($ListBuffer));
	directives->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(msym)->directives)));
	$var($ListBuffer, requires, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($(allModules()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ModuleSymbol, ms, $cast($Symbol$ModuleSymbol, i$->next()));
			{
				if (ms == $nc(this->syms)->unnamedModule || ms == msym) {
					continue;
				}
				$init($Directive$RequiresFlag);
				$var($Set, flags, ((int64_t)($nc(ms)->flags_field & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0 ? static_cast<$Set*>($EnumSet::of($Directive$RequiresFlag::TRANSITIVE)) : static_cast<$Set*>($EnumSet::noneOf($Directive$RequiresFlag::class$)));
				$var($Directive$RequiresDirective, d, $new($Directive$RequiresDirective, ms, flags));
				directives->add(d);
				requires->add(d);
			}
		}
	}
	$var($Directive$RequiresDirective, requiresUnnamed, $new($Directive$RequiresDirective, $nc(this->syms)->unnamedModule));
	directives->add(requiresUnnamed);
	requires->add(requiresUnnamed);
	$set($nc(msym), requires, requires->toList());
	$set(msym, directives, directives->toList());
}

$Symbol$Completer* Modules::getSourceCompleter($JCTree$JCCompilationUnit* tree) {
	return $new($Modules$2, this, tree);
}

bool Modules::isRootModule($Symbol$ModuleSymbol* module) {
	$Assert::checkNonNull(this->rootModules);
	return $nc(this->rootModules)->contains(module);
}

$Set* Modules::getRootModules() {
	$Assert::checkNonNull(this->rootModules);
	return this->rootModules;
}

$Symbol$Completer* Modules::getUsesProvidesCompleter() {
	return static_cast<$Symbol$Completer*>($new(Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4, this));
}

$Set* Modules::allModules() {
	$Assert::checkNonNull(this->allModules$);
	return this->allModules$;
}

void Modules::setupAllModules() {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(this->rootModules);
	$Assert::checkNull(this->allModules$);
	$var($Set, observable, nullptr);
	if (this->limitModsOpt == nullptr && $nc(this->extraLimitMods)->isEmpty()) {
		$assign(observable, nullptr);
	} else {
		$var($Set, limitMods, $new($HashSet));
		if (this->limitModsOpt != nullptr) {
			{
				$var($StringArray, arr$, $nc(this->limitModsOpt)->split(","_s));
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, limit, arr$->get(i$));
					{
						if (!isValidName(limit)) {
							continue;
						}
						limitMods->add($($nc(this->syms)->enterModule($($nc(this->names)->fromString(limit)))));
					}
				}
			}
		}
		{
			$var($Iterator, i$, $nc(this->extraLimitMods)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, limit, $cast($String, i$->next()));
				{
					limitMods->add($($nc(this->syms)->enterModule($($nc(this->names)->fromString(limit)))));
				}
			}
		}
		$assign(observable, computeTransitiveClosure(limitMods, this->rootModules, nullptr));
		$nc(observable)->addAll(this->rootModules);
		if (this->lintOptions) {
			{
				$var($Iterator, i$, limitMods->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, i$->next()));
					{
						if (!observable->contains(msym)) {
							$init($Lint$LintCategory);
							$init($Option);
							$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $($CompilerProperties$Warnings::ModuleForOptionNotFound($Option::LIMIT_MODULES, msym)));
						}
					}
				}
			}
		}
	}
	$var($Predicate, observablePred, static_cast<$Predicate*>($new(Modules$$Lambda$lambda$setupAllModules$5$5, this, observable)));
	$var($Predicate, systemModulePred, static_cast<$Predicate*>($new(Modules$$Lambda$lambda$setupAllModules$6$6)));
	$var($Set, enabledRoot, $new($LinkedHashSet));
	if ($nc(this->rootModules)->contains($nc(this->syms)->unnamedModule)) {
		$var($Predicate, jdkModulePred, nullptr);
		if (this->target->allApiModulesAreRoots()) {
			$assign(jdkModulePred, static_cast<$Predicate*>($new(Modules$$Lambda$lambda$setupAllModules$8$7)));
		} else {
			$var($Symbol$ModuleSymbol, javaSE, $nc(this->syms)->getModule(this->java_se));
			if (javaSE != nullptr && (observable == nullptr || $nc(observable)->contains(javaSE))) {
				$assign(jdkModulePred, static_cast<$Predicate*>($new(Modules$$Lambda$lambda$setupAllModules$10$8, this)));
				enabledRoot->add(javaSE);
			} else {
				$assign(jdkModulePred, static_cast<$Predicate*>($new(Modules$$Lambda$lambda$setupAllModules$11$9)));
			}
		}
		$var($Predicate, noIncubatorPred, static_cast<$Predicate*>($new(Modules$$Lambda$lambda$setupAllModules$12$10)));
		{
			$var($Iterator, i$, $$new($HashSet, $($nc(this->syms)->getAllModules()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$ModuleSymbol, sym, $cast($Symbol$ModuleSymbol, i$->next()));
				{
					try {
						bool var$2 = $nc(systemModulePred)->test(sym);
						bool var$1 = var$2 && $nc(observablePred)->test(sym);
						bool var$0 = var$1 && $nc(jdkModulePred)->test(sym);
						if (var$0 && $nc(noIncubatorPred)->test(sym)) {
							enabledRoot->add(sym);
						}
					} catch ($Symbol$CompletionFailure& ex) {
						$nc(this->chk)->completionError(nullptr, ex);
					}
				}
			}
		}
	}
	enabledRoot->addAll(this->rootModules);
	if (this->addModsOpt != nullptr || !$nc(this->extraAddMods)->isEmpty()) {
		$var($Set, fullAddMods, $new($HashSet));
		fullAddMods->addAll(this->extraAddMods);
		if (this->addModsOpt != nullptr) {
			fullAddMods->addAll($($Arrays::asList($($nc(this->addModsOpt)->split(","_s)))));
		}
		{
			$var($Iterator, i$, fullAddMods->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, added, $cast($String, i$->next()));
				{
					$var($Stream, modules, nullptr);
					{
						$var($String, s55512$, added);
						int32_t tmp55512$ = -1;
						switch ($nc(s55512$)->hashCode()) {
						case (int32_t)0xC0F7CFFB:
							{
								if (s55512$->equals("ALL-SYSTEM"_s)) {
									tmp55512$ = 0;
								}
								break;
							}
						case 0x3FCA5C9A:
							{
								if (s55512$->equals("ALL-MODULE-PATH"_s)) {
									tmp55512$ = 1;
								}
								break;
							}
						}
						switch (tmp55512$) {
						case 0:
							{
								$assign(modules, $nc($($$new($HashSet, $($nc(this->syms)->getAllModules()))->stream()))->filter($($nc(systemModulePred)->and$(observablePred))));
								break;
							}
						case 1:
							{
								$assign(modules, $nc($($$new($HashSet, $($nc(this->syms)->getAllModules()))->stream()))->filter($($nc($($nc(systemModulePred)->negate()))->and$(observablePred))));
								break;
							}
						default:
							{
								if (!isValidName(added)) {
									continue;
								}
								$assign(modules, $Stream::of($($of($nc(this->syms)->enterModule($($nc(this->names)->fromString(added)))))));
								break;
							}
						}
					}
					$nc(modules)->forEach(static_cast<$Consumer*>($$new(Modules$$Lambda$lambda$setupAllModules$13$11, enabledRoot, observable)));
				}
			}
		}
	}
	$var($Set, result, computeTransitiveClosure(enabledRoot, this->rootModules, observable));
	$nc(result)->add($nc(this->syms)->unnamedModule);
	bool hasAutomatic = $nc($(result->stream()))->anyMatch(Modules::IS_AUTOMATIC);
	if (hasAutomatic) {
		$nc($($nc($($nc($($nc(this->syms)->getAllModules()))->stream()))->filter(Modules::IS_AUTOMATIC)))->forEach(static_cast<$Consumer*>($$new(Modules$$Lambda$add$12, static_cast<$Set*>(result))));
	}
	$var($String, incubatingModules, $cast($String, $nc($($nc($($nc($(result->stream()))->filter(static_cast<$Predicate*>($$new(Modules$$Lambda$lambda$setupAllModules$14$13)))))->map(static_cast<$Function*>($$new(Modules$$Lambda$lambda$setupAllModules$15$14)))))->collect($($Collectors::joining(","_s)))));
	if (!$nc(incubatingModules)->isEmpty()) {
		$nc(this->log)->warning($($CompilerProperties$Warnings::IncubatingModules(incubatingModules)));
	}
	$set(this, allModules$, result);
	if (this->moduleVersionOpt != nullptr) {
		$var($Name, version, $nc(this->names)->fromString(this->moduleVersionOpt));
		$nc(this->rootModules)->forEach(static_cast<$Consumer*>($$new(Modules$$Lambda$lambda$setupAllModules$16$15, version)));
	}
}

bool Modules::isInModuleGraph($Symbol$ModuleSymbol* msym) {
	return this->allModules$ == nullptr || $nc(this->allModules$)->contains(msym);
}

$Set* Modules::computeTransitiveClosure($Set* base, $Set* rootModules, $Set* observable) {
	$useLocalCurrentObjectStackCache();
	$var($List, primaryTodo, $List::nil());
	$var($List, secondaryTodo, $List::nil());
	{
		$var($Iterator, i$, $nc(base)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ModuleSymbol, ms, $cast($Symbol$ModuleSymbol, i$->next()));
			{
				if ($nc(rootModules)->contains(ms)) {
					$assign(primaryTodo, $nc(primaryTodo)->prepend(ms));
				} else {
					$assign(secondaryTodo, $nc(secondaryTodo)->prepend(ms));
				}
			}
		}
	}
	$var($Set, result, $new($LinkedHashSet));
	result->add($nc(this->syms)->java_base);
	while (true) {
		bool var$0 = $nc(primaryTodo)->nonEmpty();
		if (!(var$0 || $nc(secondaryTodo)->nonEmpty())) {
			break;
		}
		{
			try {
				$var($Symbol$ModuleSymbol, current, nullptr);
				bool isPrimaryTodo = false;
				if ($nc(primaryTodo)->nonEmpty()) {
					$assign(current, $cast($Symbol$ModuleSymbol, primaryTodo->head));
					$assign(primaryTodo, primaryTodo->tail);
					isPrimaryTodo = true;
				} else {
					$assign(current, $cast($Symbol$ModuleSymbol, secondaryTodo->head));
					$assign(secondaryTodo, secondaryTodo->tail);
					isPrimaryTodo = false;
				}
				if (observable != nullptr && !observable->contains(current)) {
					continue;
				}
				if (!result->add(current) || current == $nc(this->syms)->unnamedModule || (((int64_t)($nc(current)->flags_field & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0)) {
					continue;
				}
				$nc(current)->complete();
				$init($Kinds$Kind);
				bool var$1 = current->kind == $Kinds$Kind::ERR && (isPrimaryTodo || base->contains(current));
				if (var$1 && $nc(this->warnedMissing)->add(current)) {
					$nc(this->log)->error($($CompilerProperties$Errors::ModuleNotFound(current)));
				}
				{
					$var($Iterator, i$, $nc(current->requires)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Directive$RequiresDirective, rd, $cast($Directive$RequiresDirective, i$->next()));
						{
							if ($nc(rd)->module == $nc(this->syms)->java_base) {
								continue;
							}
							bool var$2 = ($nc(rd)->isTransitive() && isPrimaryTodo);
							if (var$2 || $nc(rootModules)->contains(current)) {
								$assign(primaryTodo, $nc(primaryTodo)->prepend($nc(rd)->module));
							} else {
								$assign(secondaryTodo, $nc(secondaryTodo)->prepend($nc(rd)->module));
							}
						}
					}
				}
			} catch ($Symbol$CompletionFailure& ex) {
				$nc(this->chk)->completionError(nullptr, ex);
			}
		}
	}
	return result;
}

$Symbol$ModuleSymbol* Modules::getObservableModule($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ModuleSymbol, mod, $nc(this->syms)->getModule(name));
	if ($nc($(allModules()))->contains(mod)) {
		return mod;
	}
	return nullptr;
}

$Symbol$Completer* Modules::getUnnamedModuleCompleter() {
	$nc(this->moduleFinder)->findAllModules();
	return $new($Modules$3, this);
}

void Modules::completeModule($Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	if (this->inInitModules) {
		$set($nc(msym), completer, static_cast<$Symbol$Completer*>($new(Modules$$Lambda$lambda$completeModule$18$16, this, msym)));
		return;
	}
	if (((int64_t)($nc(msym)->flags_field & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0) {
		completeAutomaticModule(msym);
	}
	$Assert::checkNonNull($nc(msym)->requires);
	initAddReads();
	$set($nc(msym), requires, $nc(msym->requires)->appendList($($List::from($cast($Iterable, $($nc(this->addReads)->getOrDefault(msym, $($Collections::emptySet()))))))));
	$var($List, requires, msym->requires);
	while ($nc(requires)->nonEmpty()) {
		if (!$nc($(allModules()))->contains($nc(($cast($Directive$RequiresDirective, requires->head)))->module)) {
			$var($Env, env, $nc(this->typeEnvs)->get(msym));
			if (env != nullptr) {
				$var($JavaFileObject, origSource, $nc(this->log)->useSource($nc(env->toplevel)->sourcefile));
				{
					$var($Throwable, var$0, nullptr);
					try {
						$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(env->tree), $($CompilerProperties$Errors::ModuleNotFound($nc(($cast($Directive$RequiresDirective, requires->head)))->module)));
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						$nc(this->log)->useSource(origSource);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			} else {
				$Assert::check(((int64_t)(msym->flags() & (uint64_t)$Flags::AUTOMATIC_MODULE)) == 0);
			}
			$set(msym, requires, $List::filter(msym->requires, $cast($Directive$RequiresDirective, requires->head)));
		}
		$assign(requires, requires->tail);
	}
	$var($Set, readable, $new($LinkedHashSet));
	$var($Set, requiresTransitive, $new($HashSet));
	{
		$var($Iterator, i$, $nc(msym->requires)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$RequiresDirective, d, $cast($Directive$RequiresDirective, i$->next()));
			{
				$nc($nc(d)->module)->complete();
				readable->add(d->module);
				$var($Set, s, retrieveRequiresTransitive(d->module));
				$Assert::checkNonNull($of(s), static_cast<$Supplier*>($$new(Modules$$Lambda$lambda$completeModule$19$17, d)));
				readable->addAll(s);
				$init($Directive$RequiresFlag);
				if ($nc(d->flags)->contains($Directive$RequiresFlag::TRANSITIVE)) {
					requiresTransitive->add(d->module);
					requiresTransitive->addAll(s);
				}
			}
		}
	}
	$nc(this->requiresTransitiveCache)->put(msym, requiresTransitive);
	initVisiblePackages(msym, readable);
	{
		$var($Iterator, i$, $nc(msym->exports)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$ExportsDirective, d, $cast($Directive$ExportsDirective, i$->next()));
			{
				if ($nc(d)->packge != nullptr) {
					$set($nc(d->packge), modle, msym);
				}
			}
		}
	}
}

$Set* Modules::retrieveRequiresTransitive($Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	$var($Set, requiresTransitive, $cast($Set, $nc(this->requiresTransitiveCache)->get(msym)));
	if (requiresTransitive == nullptr) {
		$assign(requiresTransitive, $new($HashSet));
		$var($Set, seen, $new($HashSet));
		$var($List, todo, $List::of(msym));
		while ($nc(todo)->nonEmpty()) {
			$var($Symbol$ModuleSymbol, current, $cast($Symbol$ModuleSymbol, todo->head));
			$assign(todo, todo->tail);
			if (!seen->add(current)) {
				continue;
			}
			requiresTransitive->add(current);
			$nc(current)->complete();
			$var($Iterable, requires, nullptr);
			if (current != $nc(this->syms)->unnamedModule) {
				$Assert::checkNonNull($of(current->requires), static_cast<$Supplier*>($$new(Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18, current, msym)));
				$assign(requires, static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(current->requires))));
				{
					$var($Iterator, i$, $nc(requires)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Directive$RequiresDirective, rd, $cast($Directive$RequiresDirective, i$->next()));
						{
							if ($nc(rd)->isTransitive()) {
								$assign(todo, $nc(todo)->prepend(rd->module));
							}
						}
					}
				}
			} else {
				{
					$var($Iterator, i$, $nc($(allModules()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol$ModuleSymbol, mod, $cast($Symbol$ModuleSymbol, i$->next()));
						{
							$assign(todo, $nc(todo)->prepend(mod));
						}
					}
				}
			}
		}
		requiresTransitive->remove(msym);
	}
	return requiresTransitive;
}

void Modules::initVisiblePackages($Symbol$ModuleSymbol* msym, $Collection* readable) {
	$useLocalCurrentObjectStackCache();
	initAddExports();
	$set($nc(msym), visiblePackages, $new($LinkedHashMap));
	$set(msym, readModules, $new($HashSet, readable));
	$var($Map, seen, $new($HashMap));
	{
		$var($Iterator, i$, $nc(readable)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ModuleSymbol, rm, $cast($Symbol$ModuleSymbol, i$->next()));
			{
				if (rm == $nc(this->syms)->unnamedModule) {
					continue;
				}
				addVisiblePackages(msym, seen, rm, static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(rm)->exports)));
			}
		}
	}
	$nc(this->addExports)->forEach(static_cast<$BiConsumer*>($$new(Modules$$Lambda$lambda$initVisiblePackages$21$19, this, msym, seen)));
}

void Modules::addVisiblePackages($Symbol$ModuleSymbol* msym, $Map* seenPackages, $Symbol$ModuleSymbol* exportsFrom, $Collection* exports) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(exports)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$ExportsDirective, d, $cast($Directive$ExportsDirective, i$->next()));
			{
				if ($nc(d)->modules == nullptr || $nc($nc(d)->modules)->contains(msym)) {
					$var($Name, packageName, $nc(d->packge)->fullname);
					$var($Symbol$ModuleSymbol, previousModule, $cast($Symbol$ModuleSymbol, $nc(seenPackages)->get(packageName)));
					if (previousModule != nullptr && previousModule != exportsFrom) {
						$var($Env, env, $nc(this->typeEnvs)->get(msym));
						$var($JavaFileObject, origSource, env != nullptr ? $nc(this->log)->useSource($nc($nc(env)->toplevel)->sourcefile) : ($JavaFileObject*)nullptr);
						$var($JCDiagnostic$DiagnosticPosition, pos, env != nullptr ? $nc($nc(env)->tree)->pos() : ($JCDiagnostic$DiagnosticPosition*)nullptr);
						{
							$var($Throwable, var$0, nullptr);
							try {
								if ($nc(msym)->isUnnamed()) {
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::PackageClashFromRequiresInUnnamed(packageName, previousModule, exportsFrom)));
								} else {
									$nc(this->log)->error(pos, $($CompilerProperties$Errors::PackageClashFromRequires(msym, packageName, previousModule, exportsFrom)));
								}
							} catch ($Throwable& var$1) {
								$assign(var$0, var$1);
							} /*finally*/ {
								if (env != nullptr) {
									$nc(this->log)->useSource(origSource);
								}
							}
							if (var$0 != nullptr) {
								$throw(var$0);
							}
						}
						continue;
					}
					seenPackages->put(packageName, exportsFrom);
					$nc($nc(msym)->visiblePackages)->put($nc(d->packge)->fullname, d->packge);
				}
			}
		}
	}
}

void Modules::initAddExports() {
	$useLocalCurrentObjectStackCache();
	if (this->addExports != nullptr) {
		return;
	}
	$set(this, addExports, $new($LinkedHashMap));
	$var($Set, unknownModules, $new($HashSet));
	if (this->addExportsOpt == nullptr) {
		return;
	}
	$var($Pattern, ep, $Pattern::compile("([^/]+)/([^=]+)=(.*)"_s));
	{
		$var($StringArray, arr$, $nc(this->addExportsOpt)->split($cstr({'\0', '+'})));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				if ($nc(s)->isEmpty()) {
					continue;
				}
				$var($Matcher, em, $nc(ep)->matcher(s));
				if (!$nc(em)->matches()) {
					continue;
				}
				$var($String, moduleName, $nc(em)->group(1));
				$var($String, packageName, em->group(2));
				$var($String, targetNames, em->group(3));
				if (!isValidName(moduleName)) {
					continue;
				}
				$var($Symbol$ModuleSymbol, msym, $nc(this->syms)->enterModule($($nc(this->names)->fromString(moduleName))));
				if (!isKnownModule(msym, unknownModules)) {
					continue;
				}
				if (!isValidName(packageName)) {
					continue;
				}
				if (!this->allowAccessIntoSystem && ((int64_t)($nc(msym)->flags() & (uint64_t)$Flags::SYSTEM_MODULE)) != 0) {
					$nc(this->log)->error($($CompilerProperties$Errors::AddExportsWithRelease(msym)));
					continue;
				}
				$var($Symbol$PackageSymbol, p, $nc(this->syms)->enterPackage(msym, $($nc(this->names)->fromString(packageName))));
				$set($nc(p), modle, msym);
				$var($List, targetModules, $List::nil());
				{
					$var($StringArray, arr$, $nc(targetNames)->split("[ ,]+"_s));
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($String, toModule, arr$->get(i$));
						{
							$var($Symbol$ModuleSymbol, m, nullptr);
							if ($nc(toModule)->equals("ALL-UNNAMED"_s)) {
								$assign(m, $nc(this->syms)->unnamedModule);
							} else {
								if (!isValidName(toModule)) {
									continue;
								}
								$assign(m, $nc(this->syms)->enterModule($($nc(this->names)->fromString(toModule))));
								if (!isKnownModule(m, unknownModules)) {
									continue;
								}
							}
							$assign(targetModules, $nc(targetModules)->prepend(m));
						}
					}
				}
				$var($Set, extra, $cast($Set, $nc(this->addExports)->computeIfAbsent(msym, static_cast<$Function*>($$new(Modules$$Lambda$lambda$initAddExports$22$20)))));
				$var($Directive$ExportsDirective, d, $new($Directive$ExportsDirective, p, targetModules));
				$nc(extra)->add(d);
			}
		}
	}
}

bool Modules::isKnownModule($Symbol$ModuleSymbol* msym, $Set* unknownModules) {
	if ($nc(this->allModules$)->contains(msym)) {
		return true;
	}
	if (!$nc(unknownModules)->contains(msym)) {
		if (this->lintOptions) {
			$init($Lint$LintCategory);
			$init($Option);
			$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $($CompilerProperties$Warnings::ModuleForOptionNotFound($Option::ADD_EXPORTS, msym)));
		}
		unknownModules->add(msym);
	}
	return false;
}

void Modules::initAddReads() {
	$useLocalCurrentObjectStackCache();
	if (this->addReads != nullptr) {
		return;
	}
	$set(this, addReads, $new($LinkedHashMap));
	if (this->addReadsOpt == nullptr) {
		return;
	}
	$var($Pattern, rp, $Pattern::compile("([^=]+)=(.*)"_s));
	{
		$var($StringArray, arr$, $nc(this->addReadsOpt)->split($cstr({'\0', '+'})));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				if ($nc(s)->isEmpty()) {
					continue;
				}
				$var($Matcher, rm, $nc(rp)->matcher(s));
				if (!$nc(rm)->matches()) {
					continue;
				}
				$var($String, sourceName, $nc(rm)->group(1));
				$var($String, targetNames, rm->group(2));
				if (!isValidName(sourceName)) {
					continue;
				}
				$var($Symbol$ModuleSymbol, msym, $nc(this->syms)->enterModule($($nc(this->names)->fromString(sourceName))));
				if (!$nc(this->allModules$)->contains(msym)) {
					if (this->lintOptions) {
						$init($Option);
						$nc(this->log)->warning($($CompilerProperties$Warnings::ModuleForOptionNotFound($Option::ADD_READS, msym)));
					}
					continue;
				}
				if (!this->allowAccessIntoSystem && ((int64_t)($nc(msym)->flags() & (uint64_t)$Flags::SYSTEM_MODULE)) != 0) {
					$nc(this->log)->error($($CompilerProperties$Errors::AddReadsWithRelease(msym)));
					continue;
				}
				{
					$var($StringArray, arr$, $nc(targetNames)->split("[ ,]+"_s, -1));
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($String, targetName, arr$->get(i$));
						{
							$var($Symbol$ModuleSymbol, targetModule, nullptr);
							if ($nc(targetName)->equals("ALL-UNNAMED"_s)) {
								$assign(targetModule, $nc(this->syms)->unnamedModule);
							} else {
								if (!isValidName(targetName)) {
									continue;
								}
								$assign(targetModule, $nc(this->syms)->enterModule($($nc(this->names)->fromString(targetName))));
								if (!$nc(this->allModules$)->contains(targetModule)) {
									if (this->lintOptions) {
										$init($Lint$LintCategory);
										$init($Option);
										$nc(this->log)->warning($Lint$LintCategory::OPTIONS, $($CompilerProperties$Warnings::ModuleForOptionNotFound($Option::ADD_READS, targetModule)));
									}
									continue;
								}
							}
							$init($Directive$RequiresFlag);
							$nc(($cast($Set, $($nc(this->addReads)->computeIfAbsent(msym, static_cast<$Function*>($$new(Modules$$Lambda$lambda$initAddReads$23$21)))))))->add($$new($Directive$RequiresDirective, targetModule, $($EnumSet::of($Directive$RequiresFlag::EXTRA))));
						}
					}
				}
			}
		}
	}
}

void Modules::checkCyclicDependencies($JCTree$JCModuleDecl* mod) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(mod)->directives)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCDirective, d, $cast($JCTree$JCDirective, i$->next()));
			{
				$var($JCTree$JCRequires, rd, nullptr);
				$init($JCTree$Tag);
				if (!$nc(d)->hasTag($JCTree$Tag::REQUIRES) || $nc(($assign(rd, $cast($JCTree$JCRequires, d))))->directive == nullptr) {
					continue;
				}
				$var($Set, nonSyntheticDeps, $new($HashSet));
				$var($List, queue, $List::of($nc($nc(rd)->directive)->module));
				while ($nc(queue)->nonEmpty()) {
					$var($Symbol$ModuleSymbol, current, $cast($Symbol$ModuleSymbol, queue->head));
					$assign(queue, queue->tail);
					if (!nonSyntheticDeps->add(current)) {
						continue;
					}
					$nc(current)->complete();
					if (((int64_t)(current->flags() & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0) {
						continue;
					}
					$Assert::checkNonNull($of(current->requires), static_cast<$Supplier*>($$new(Modules$$Lambda$toString$22, static_cast<$Symbol$ModuleSymbol*>(current))));
					{
						$var($Iterator, i$, $nc(current->requires)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Directive$RequiresDirective, dep, $cast($Directive$RequiresDirective, i$->next()));
							{
								$init($Directive$RequiresFlag);
								if (!$nc($nc(dep)->flags)->contains($Directive$RequiresFlag::EXTRA)) {
									$assign(queue, $nc(queue)->prepend(dep->module));
								}
							}
						}
					}
				}
				if (nonSyntheticDeps->contains(mod->sym)) {
					$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(rd)->moduleName)->pos());
					$nc(this->log)->error(var$0, $($CompilerProperties$Errors::CyclicRequires($nc(rd->directive)->module)));
				}
			}
		}
	}
}

bool Modules::isValidName($CharSequence* name) {
	return $SourceVersion::isName(name, $($Source::toSourceVersion(this->source)));
}

$String* Modules::toString($Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$9, $$str({$nc(msym)->name, "[kind:"_s, msym->kind, ";locn:"_s}));
	$var($String, var$8, $$concat(var$9, $(toString(msym->sourceLocation))));
	$var($String, var$7, $$concat(var$8, ","));
	$var($String, var$6, $$concat(var$7, $(toString(msym->classLocation))));
	$var($String, var$5, $$concat(var$6, ";info:"));
	$var($String, var$4, $$concat(var$5, $(toString($nc(msym->module_info)->sourcefile))));
	$var($String, var$3, $$concat(var$4, ","));
	$var($String, var$2, $$concat(var$3, $(toString($nc(msym->module_info)->classfile))));
	$var($String, var$1, $$concat(var$2, ","));
	$var($String, var$0, $$concat(var$1, $nc(msym->module_info)->completer));
	return $concat(var$0, "]");
}

$String* Modules::toString($JavaFileManager$Location* locn) {
	return (locn == nullptr) ? "--"_s : $nc(locn)->getName();
}

$String* Modules::toString($JavaFileObject* fo) {
	return (fo == nullptr) ? "--"_s : $nc(fo)->getName();
}

void Modules::newRound() {
	$set(this, allModules$, nullptr);
	$set(this, rootModules, nullptr);
	$set(this, defaultModule, nullptr);
	$nc(this->warnedMissing)->clear();
}

$Set* Modules::lambda$initAddReads$23($Symbol$ModuleSymbol* m) {
	$init(Modules);
	return $new($HashSet);
}

$Set* Modules::lambda$initAddExports$22($Symbol$ModuleSymbol* _x) {
	$init(Modules);
	return $new($LinkedHashSet);
}

void Modules::lambda$initVisiblePackages$21($Symbol$ModuleSymbol* msym, $Map* seen, $Symbol$ModuleSymbol* exportsFrom, $Set* exports) {
	if ($nc($nc(msym)->readModules)->contains(exportsFrom)) {
		addVisiblePackages(msym, seen, exportsFrom, exports);
	}
}

$String* Modules::lambda$retrieveRequiresTransitive$20($Symbol$ModuleSymbol* current, $Symbol$ModuleSymbol* msym) {
	$init(Modules);
	return $str({current, ".requires == null; "_s, msym});
}

$String* Modules::lambda$completeModule$19($Directive$RequiresDirective* d) {
	$init(Modules);
	return $str({"no entry in cache for "_s, $nc(d)->module});
}

void Modules::lambda$completeModule$18($Symbol$ModuleSymbol* msym, $Symbol* sym) {
	completeModule(msym);
}

bool Modules::lambda$static$17($Symbol$ModuleSymbol* m) {
	$init(Modules);
	return ((int64_t)($nc(m)->flags_field & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0;
}

void Modules::lambda$setupAllModules$16($Name* version, $Symbol$ModuleSymbol* m) {
	$init(Modules);
	$set($nc(m), version, version);
}

$String* Modules::lambda$setupAllModules$15($Symbol$ModuleSymbol* msym) {
	$init(Modules);
	return $nc($nc(msym)->name)->toString();
}

bool Modules::lambda$setupAllModules$14($Symbol$ModuleSymbol* msym) {
	$init(Modules);
	$init($Symbol$ModuleResolutionFlags);
	return $nc($nc(msym)->resolutionFlags)->contains($Symbol$ModuleResolutionFlags::WARN_INCUBATING);
}

void Modules::lambda$setupAllModules$13($Set* enabledRoot, $Set* observable, $Symbol$ModuleSymbol* sym) {
	$init(Modules);
	$nc(enabledRoot)->add(sym);
	if (observable != nullptr) {
		observable->add(sym);
	}
}

bool Modules::lambda$setupAllModules$12($Symbol$ModuleSymbol* sym) {
	$init(Modules);
	$nc(sym)->complete();
	$init($Symbol$ModuleResolutionFlags);
	return !$nc(sym->resolutionFlags)->contains($Symbol$ModuleResolutionFlags::DO_NOT_RESOLVE_BY_DEFAULT);
}

bool Modules::lambda$setupAllModules$11($Symbol$ModuleSymbol* sym) {
	$init(Modules);
	return true;
}

bool Modules::lambda$setupAllModules$10($Symbol$ModuleSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$nc(sym)->complete();
	bool var$0 = !$nc(sym->name)->startsWith(this->java_);
	return var$0 && $nc($($nc(sym->exports)->stream()))->anyMatch(static_cast<$Predicate*>($$new(Modules$$Lambda$lambda$setupAllModules$7$23)));
}

bool Modules::lambda$setupAllModules$8($Symbol$ModuleSymbol* sym) {
	$init(Modules);
	$useLocalCurrentObjectStackCache();
	$nc(sym)->complete();
	return $nc($($nc(sym->exports)->stream()))->anyMatch(static_cast<$Predicate*>($$new(Modules$$Lambda$lambda$setupAllModules$7$23)));
}

bool Modules::lambda$setupAllModules$7($Directive$ExportsDirective* e) {
	$init(Modules);
	return $nc(e)->modules == nullptr;
}

bool Modules::lambda$setupAllModules$6($Symbol$ModuleSymbol* sym) {
	$init(Modules);
	return ((int64_t)($nc(sym)->flags() & (uint64_t)$Flags::SYSTEM_MODULE)) != 0;
}

bool Modules::lambda$setupAllModules$5($Set* observable, $Symbol$ModuleSymbol* sym) {
	$init($Kinds$Kind);
	return (observable == nullptr) ? ($nc($($nc(this->moduleFinder)->findModule(sym)))->kind != $Kinds$Kind::ERR) : $nc(observable)->contains(sym);
}

void Modules::lambda$getUsesProvidesCompleter$4($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, sym));
	$nc(msym)->complete();
	$var($Env, env, $nc(this->typeEnvs)->get(msym));
	$var($Modules$UsesProvidesVisitor, v, $new($Modules$UsesProvidesVisitor, this, msym, env));
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc(env)->toplevel)->sourcefile));
	$var($JCTree$JCModuleDecl, decl, $nc($nc(env)->toplevel)->getModuleDecl());
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->deferredLintHandler)->setPos($($nc(decl)->pos())));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(decl)->accept(v);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->log)->useSource(prev);
			$nc(this->deferredLintHandler)->setPos(prevLintPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Modules::lambda$setCompilationUnitModules$2($Symbol* sym) {
	completeModule($cast($Symbol$ModuleSymbol, sym));
}

void Modules::lambda$enter$1($Set* modules) {
	$init(Modules);
}

void Modules::lambda$initModules$0($Set* modules) {
	$Assert::checkNull(this->rootModules);
	$Assert::checkNull(this->allModules$);
	$set(this, rootModules, modules);
	setupAllModules();
	$Assert::checkNonNull(this->allModules$);
	this->inInitModules = false;
}

void clinit$Modules($Class* class$) {
	$assignStatic(Modules::ALL_SYSTEM, "ALL-SYSTEM"_s);
	$assignStatic(Modules::ALL_MODULE_PATH, "ALL-MODULE-PATH"_s);
	$assignStatic(Modules::IS_AUTOMATIC, static_cast<$Predicate*>($new(Modules$$Lambda$lambda$static$17)));
}

Modules::Modules() {
}

$Class* Modules::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Modules$$Lambda$lambda$static$17::classInfo$.name)) {
			return Modules$$Lambda$lambda$static$17::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$initModules$0$1::classInfo$.name)) {
			return Modules$$Lambda$lambda$initModules$0$1::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$enter$1$2::classInfo$.name)) {
			return Modules$$Lambda$lambda$enter$1$2::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setCompilationUnitModules$2$3::classInfo$.name)) {
			return Modules$$Lambda$lambda$setCompilationUnitModules$2$3::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::classInfo$.name)) {
			return Modules$$Lambda$lambda$getUsesProvidesCompleter$4$4::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$5$5::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$5$5::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$6$6::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$6$6::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$8$7::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$8$7::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$10$8::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$10$8::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$11$9::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$11$9::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$12$10::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$12$10::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$13$11::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$13$11::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$add$12::classInfo$.name)) {
			return Modules$$Lambda$add$12::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$14$13::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$14$13::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$15$14::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$15$14::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$16$15::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$16$15::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$completeModule$18$16::classInfo$.name)) {
			return Modules$$Lambda$lambda$completeModule$18$16::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$completeModule$19$17::classInfo$.name)) {
			return Modules$$Lambda$lambda$completeModule$19$17::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::classInfo$.name)) {
			return Modules$$Lambda$lambda$retrieveRequiresTransitive$20$18::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$initVisiblePackages$21$19::classInfo$.name)) {
			return Modules$$Lambda$lambda$initVisiblePackages$21$19::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$initAddExports$22$20::classInfo$.name)) {
			return Modules$$Lambda$lambda$initAddExports$22$20::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$initAddReads$23$21::classInfo$.name)) {
			return Modules$$Lambda$lambda$initAddReads$23$21::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$toString$22::classInfo$.name)) {
			return Modules$$Lambda$toString$22::load$(name, initialize);
		}
		if (name->equals(Modules$$Lambda$lambda$setupAllModules$7$23::classInfo$.name)) {
			return Modules$$Lambda$lambda$setupAllModules$7$23::load$(name, initialize);
		}
	}
	$loadClass(Modules, name, initialize, &_Modules_ClassInfo_, clinit$Modules, allocate$Modules);
	return class$;
}

$Class* Modules::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com