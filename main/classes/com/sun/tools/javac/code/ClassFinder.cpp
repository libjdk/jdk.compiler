#include <com/sun/tools/javac/code/ClassFinder.h>

#include <com/sun/tools/javac/code/ClassFinder$1.h>
#include <com/sun/tools/javac/code/ClassFinder$2.h>
#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$ErrorScope.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/file/JRTIndex$CtSym.h>
#include <com/sun/tools/javac/file/JRTIndex.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/main/DelegatingJavaFileManager.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/element/Name.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS
#undef CLASS_PATH
#undef CLASS_READER
#undef DEFAULT
#undef NULL_COMPLETER
#undef PCK
#undef PLATFORM_CLASS_PATH
#undef SOURCE
#undef SOURCE_PATH
#undef TYP
#undef VERBOSE
#undef XXUSERPATHSFIRST

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ClassFinder$1 = ::com::sun::tools::javac::code::ClassFinder$1;
using $ClassFinder$2 = ::com::sun::tools::javac::code::ClassFinder$2;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ErrorScope = ::com::sun::tools::javac::code::Scope$ErrorScope;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $JRTIndex = ::com::sun::tools::javac::file::JRTIndex;
using $JRTIndex$CtSym = ::com::sun::tools::javac::file::JRTIndex$CtSym;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $DelegatingJavaFileManager = ::com::sun::tools::javac::main::DelegatingJavaFileManager;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $1Name = ::javax::lang::model::element::Name;
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
				namespace code {

class ClassFinder$$Lambda$complete : public $Symbol$Completer {
	$class(ClassFinder$$Lambda$complete, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$(ClassFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual void complete($Symbol* sym) override {
		$nc(inst$)->complete(sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$complete>());
	}
	ClassFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassFinder$$Lambda$complete::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$complete, inst$)},
	{}
};
$MethodInfo ClassFinder$$Lambda$complete::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/ClassFinder;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$complete::*)(ClassFinder*)>(&ClassFinder$$Lambda$complete::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$complete::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$complete",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* ClassFinder$$Lambda$complete::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$complete, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$complete::class$ = nullptr;

class ClassFinder$$Lambda$lambda$new$0$1 : public $Supplier {
	$class(ClassFinder$$Lambda$lambda$new$0$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(ClassFinder::lambda$new$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$lambda$new$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ClassFinder$$Lambda$lambda$new$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$lambda$new$0$1::*)()>(&ClassFinder$$Lambda$lambda$new$0$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$lambda$new$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$lambda$new$0$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* ClassFinder$$Lambda$lambda$new$0$1::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$lambda$new$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$lambda$new$0$1::class$ = nullptr;

class ClassFinder$$Lambda$lambda$complete$1$2 : public $Supplier {
	$class(ClassFinder$$Lambda$lambda$complete$1$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ClassFinder* inst, $IOException* ex) {
		$set(this, inst$, inst);
		$set(this, ex, ex);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$complete$1(ex));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$lambda$complete$1$2>());
	}
	ClassFinder* inst$ = nullptr;
	$IOException* ex = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassFinder$$Lambda$lambda$complete$1$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$complete$1$2, inst$)},
	{"ex", "Ljava/io/IOException;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$complete$1$2, ex)},
	{}
};
$MethodInfo ClassFinder$$Lambda$lambda$complete$1$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/ClassFinder;Ljava/io/IOException;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$lambda$complete$1$2::*)(ClassFinder*,$IOException*)>(&ClassFinder$$Lambda$lambda$complete$1$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$lambda$complete$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$lambda$complete$1$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ClassFinder$$Lambda$lambda$complete$1$2::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$lambda$complete$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$lambda$complete$1$2::class$ = nullptr;

class ClassFinder$$Lambda$lambda$fillIn$2$3 : public $Supplier {
	$class(ClassFinder$$Lambda$lambda$fillIn$2$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ClassFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$fillIn$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$lambda$fillIn$2$3>());
	}
	ClassFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassFinder$$Lambda$lambda$fillIn$2$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$fillIn$2$3, inst$)},
	{}
};
$MethodInfo ClassFinder$$Lambda$lambda$fillIn$2$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/ClassFinder;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$lambda$fillIn$2$3::*)(ClassFinder*)>(&ClassFinder$$Lambda$lambda$fillIn$2$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$lambda$fillIn$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$lambda$fillIn$2$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ClassFinder$$Lambda$lambda$fillIn$2$3::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$lambda$fillIn$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$lambda$fillIn$2$3::class$ = nullptr;

class ClassFinder$$Lambda$lambda$fillIn$3$4 : public $Predicate {
	$class(ClassFinder$$Lambda$lambda$fillIn$3$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return ClassFinder::lambda$fillIn$3($cast($Symbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$lambda$fillIn$3$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ClassFinder$$Lambda$lambda$fillIn$3$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$lambda$fillIn$3$4::*)()>(&ClassFinder$$Lambda$lambda$fillIn$3$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$lambda$fillIn$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$lambda$fillIn$3$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ClassFinder$$Lambda$lambda$fillIn$3$4::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$lambda$fillIn$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$lambda$fillIn$3$4::class$ = nullptr;

class ClassFinder$$Lambda$lambda$fillIn$4$5 : public $Consumer {
	$class(ClassFinder$$Lambda$lambda$fillIn$4$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* sym) override {
		ClassFinder::lambda$fillIn$4($cast($Symbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$lambda$fillIn$4$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ClassFinder$$Lambda$lambda$fillIn$4$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$lambda$fillIn$4$5::*)()>(&ClassFinder$$Lambda$lambda$fillIn$4$5::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$lambda$fillIn$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$lambda$fillIn$4$5",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* ClassFinder$$Lambda$lambda$fillIn$4$5::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$lambda$fillIn$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$lambda$fillIn$4$5::class$ = nullptr;

class ClassFinder$$Lambda$lambda$classFileNotFound$5$6 : public $Supplier {
	$class(ClassFinder$$Lambda$lambda$classFileNotFound$5$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ClassFinder* inst, $Symbol$ClassSymbol* c) {
		$set(this, inst$, inst);
		$set(this, c, c);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$classFileNotFound$5(c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$lambda$classFileNotFound$5$6>());
	}
	ClassFinder* inst$ = nullptr;
	$Symbol$ClassSymbol* c = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassFinder$$Lambda$lambda$classFileNotFound$5$6::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$classFileNotFound$5$6, inst$)},
	{"c", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$classFileNotFound$5$6, c)},
	{}
};
$MethodInfo ClassFinder$$Lambda$lambda$classFileNotFound$5$6::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/ClassFinder;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$lambda$classFileNotFound$5$6::*)(ClassFinder*,$Symbol$ClassSymbol*)>(&ClassFinder$$Lambda$lambda$classFileNotFound$5$6::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$lambda$classFileNotFound$5$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$lambda$classFileNotFound$5$6",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ClassFinder$$Lambda$lambda$classFileNotFound$5$6::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$lambda$classFileNotFound$5$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$lambda$classFileNotFound$5$6::class$ = nullptr;

class ClassFinder$$Lambda$lambda$loadClass$6$7 : public $Supplier {
	$class(ClassFinder$$Lambda$lambda$loadClass$6$7, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol$ModuleSymbol* msym, $Name* flatname) {
		$set(this, msym, msym);
		$set(this, flatname, flatname);
	}
	virtual $Object* get() override {
		 return $of(ClassFinder::lambda$loadClass$6(msym, flatname));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$lambda$loadClass$6$7>());
	}
	$Symbol$ModuleSymbol* msym = nullptr;
	$Name* flatname = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassFinder$$Lambda$lambda$loadClass$6$7::fieldInfos[3] = {
	{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$loadClass$6$7, msym)},
	{"flatname", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$loadClass$6$7, flatname)},
	{}
};
$MethodInfo ClassFinder$$Lambda$lambda$loadClass$6$7::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$lambda$loadClass$6$7::*)($Symbol$ModuleSymbol*,$Name*)>(&ClassFinder$$Lambda$lambda$loadClass$6$7::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$lambda$loadClass$6$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$lambda$loadClass$6$7",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ClassFinder$$Lambda$lambda$loadClass$6$7::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$lambda$loadClass$6$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$lambda$loadClass$6$7::class$ = nullptr;

class ClassFinder$$Lambda$toString$8 : public $Supplier {
	$class(ClassFinder$$Lambda$toString$8, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol$PackageSymbol* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$toString$8>());
	}
	$Symbol$PackageSymbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassFinder$$Lambda$toString$8::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$toString$8, inst$)},
	{}
};
$MethodInfo ClassFinder$$Lambda$toString$8::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$toString$8::*)($Symbol$PackageSymbol*)>(&ClassFinder$$Lambda$toString$8::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$toString$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$toString$8",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ClassFinder$$Lambda$toString$8::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$toString$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$toString$8::class$ = nullptr;

class ClassFinder$$Lambda$lambda$list$7$9 : public $Iterable {
	$class(ClassFinder$$Lambda$lambda$list$7$9, $NO_CLASS_INIT, $Iterable)
public:
	void init$(ClassFinder* inst, $Iterable* listed, $Symbol$PackageSymbol* p, $Set* kinds) {
		$set(this, inst$, inst);
		$set(this, listed, listed);
		$set(this, p, p);
		$set(this, kinds, kinds);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$list$7(listed, p, kinds);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$$Lambda$lambda$list$7$9>());
	}
	ClassFinder* inst$ = nullptr;
	$Iterable* listed = nullptr;
	$Symbol$PackageSymbol* p = nullptr;
	$Set* kinds = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassFinder$$Lambda$lambda$list$7$9::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$list$7$9, inst$)},
	{"listed", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$list$7$9, listed)},
	{"p", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$list$7$9, p)},
	{"kinds", "Ljava/util/Set;", nullptr, $PUBLIC, $field(ClassFinder$$Lambda$lambda$list$7$9, kinds)},
	{}
};
$MethodInfo ClassFinder$$Lambda$lambda$list$7$9::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/ClassFinder;Ljava/lang/Iterable;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$$Lambda$lambda$list$7$9::*)(ClassFinder*,$Iterable*,$Symbol$PackageSymbol*,$Set*)>(&ClassFinder$$Lambda$lambda$list$7$9::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$$Lambda$lambda$list$7$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$$Lambda$lambda$list$7$9",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* ClassFinder$$Lambda$lambda$list$7$9::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$$Lambda$lambda$list$7$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$$Lambda$lambda$list$7$9::class$ = nullptr;

$FieldInfo _ClassFinder_FieldInfo_[] = {
	{"classFinderKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/ClassFinder;>;", $PROTECTED | $STATIC | $FINAL, $staticField(ClassFinder, classFinderKey)},
	{"reader", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, 0, $field(ClassFinder, reader)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PRIVATE | $FINAL, $field(ClassFinder, annotate)},
	{"verbose", "Z", nullptr, 0, $field(ClassFinder, verbose)},
	{"cacheCompletionFailure", "Z", nullptr, $PRIVATE, $field(ClassFinder, cacheCompletionFailure)},
	{"preferSource", "Z", nullptr, $PROTECTED, $field(ClassFinder, preferSource)},
	{"userPathsFirst", "Z", nullptr, $PROTECTED, $field(ClassFinder, userPathsFirst)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(ClassFinder, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(ClassFinder, syms)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(ClassFinder, names)},
	{"completionFailureName", "Lcom/sun/tools/javac/util/Name;", nullptr, $FINAL, $field(ClassFinder, completionFailureName)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(ClassFinder, fileManager)},
	{"dependencies", "Lcom/sun/tools/javac/util/Dependencies;", nullptr, $PRIVATE | $FINAL, $field(ClassFinder, dependencies)},
	{"diagFactory", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $field(ClassFinder, diagFactory)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $FINAL, $field(ClassFinder, dcfh)},
	{"sourceCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC, $field(ClassFinder, sourceCompleter)},
	{"currentClassFile", "Ljavax/tools/JavaFileObject;", nullptr, $PROTECTED, $field(ClassFinder, currentClassFile)},
	{"currentOwner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PROTECTED, $field(ClassFinder, currentOwner)},
	{"profile", "Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PRIVATE | $FINAL, $field(ClassFinder, profile)},
	{"jrtIndex", "Lcom/sun/tools/javac/file/JRTIndex;", nullptr, $PRIVATE | $FINAL, $field(ClassFinder, jrtIndex)},
	{"thisCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PRIVATE | $FINAL, $field(ClassFinder, thisCompleter)},
	{"supplementaryFlags", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/Long;>;", $PRIVATE, $field(ClassFinder, supplementaryFlags)},
	{"cachedCompletionFailure", "Lcom/sun/tools/javac/code/Symbol$CompletionFailure;", nullptr, $PRIVATE | $FINAL, $field(ClassFinder, cachedCompletionFailure)},
	{"currentLoc", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PROTECTED, $field(ClassFinder, currentLoc)},
	{"verbosePath", "Z", nullptr, $PRIVATE, $field(ClassFinder, verbosePath)},
	{"preferCurrent", "Z", nullptr, $PRIVATE, $field(ClassFinder, preferCurrent)},
	{}
};

$MethodInfo _ClassFinder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(ClassFinder::*)($Context*)>(&ClassFinder::init$))},
	{"classFileNotFound", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/code/Symbol$CompletionFailure;", nullptr, $PRIVATE, $method(static_cast<$Symbol$CompletionFailure*(ClassFinder::*)($Symbol$ClassSymbol*)>(&ClassFinder::classFileNotFound))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassFinder::*)($Symbol*)>(&ClassFinder::complete)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"completeEnclosing", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassFinder::*)($Symbol$ClassSymbol*)>(&ClassFinder::completeEnclosing))},
	{"completeOwners", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassFinder::*)($Symbol*)>(&ClassFinder::completeOwners))},
	{"extraFileActions", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljavax/tools/JavaFileObject;)V", nullptr, $PROTECTED},
	{"fillIn", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"fillIn", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassFinder::*)($Symbol$PackageSymbol*)>(&ClassFinder::fillIn)), "java.io.IOException"},
	{"fillIn", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable;)V", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;)V", $PRIVATE, $method(static_cast<void(ClassFinder::*)($Symbol$PackageSymbol*,$JavaFileManager$Location*,$Iterable*)>(&ClassFinder::fillIn))},
	{"getCompleter", "()Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC},
	{"getPackageFileKinds", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Ljavax/tools/JavaFileObject$Kind;>;", $PROTECTED},
	{"getSupplementaryFlags", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)J", nullptr, 0},
	{"includeClassFile", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljavax/tools/JavaFileObject;)V", nullptr, $PROTECTED},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/ClassFinder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassFinder*(*)($Context*)>(&ClassFinder::instance))},
	{"lambda$classFileNotFound$5", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCDiagnostic*(ClassFinder::*)($Symbol$ClassSymbol*)>(&ClassFinder::lambda$classFileNotFound$5))},
	{"lambda$complete$1", "(Ljava/io/IOException;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCDiagnostic*(ClassFinder::*)($IOException*)>(&ClassFinder::lambda$complete$1))},
	{"lambda$fillIn$2", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCDiagnostic*(ClassFinder::*)()>(&ClassFinder::lambda$fillIn$2))},
	{"lambda$fillIn$3", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&ClassFinder::lambda$fillIn$3))},
	{"lambda$fillIn$4", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Symbol*)>(&ClassFinder::lambda$fillIn$4))},
	{"lambda$list$7", "(Ljava/lang/Iterable;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/util/Set;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(ClassFinder::*)($Iterable*,$Symbol$PackageSymbol*,$Set*)>(&ClassFinder::lambda$list$7))},
	{"lambda$loadClass$6", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Symbol$ModuleSymbol*,$Name*)>(&ClassFinder::lambda$loadClass$6))},
	{"lambda$new$0", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCDiagnostic*(*)()>(&ClassFinder::lambda$new$0))},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", 0, nullptr, "java.io.IOException"},
	{"loadClass", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"newCompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljava/util/function/Supplier;)Lcom/sun/tools/javac/code/Symbol$CompletionFailure;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/JCDiagnostic;>;)Lcom/sun/tools/javac/code/Symbol$CompletionFailure;", $PRIVATE, $method(static_cast<$Symbol$CompletionFailure*(ClassFinder::*)($Symbol$TypeSymbol*,$Supplier*)>(&ClassFinder::newCompletionFailure))},
	{"preferredFileObject", "(Ljavax/tools/JavaFileObject;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PROTECTED},
	{"scanModulePaths", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassFinder::*)($Symbol$PackageSymbol*,$Symbol$ModuleSymbol*)>(&ClassFinder::scanModulePaths)), "java.io.IOException"},
	{"scanPlatformPath", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassFinder::*)($Symbol$PackageSymbol*)>(&ClassFinder::scanPlatformPath)), "java.io.IOException"},
	{"scanUserPaths", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Z)V", nullptr, $PRIVATE, $method(static_cast<void(ClassFinder::*)($Symbol$PackageSymbol*,bool)>(&ClassFinder::scanUserPaths)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ClassFinder_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ClassFinder$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.ClassFinder$BadEnclosingMethodAttr", "com.sun.tools.javac.code.ClassFinder", "BadEnclosingMethodAttr", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.ClassFinder$BadClassFile", "com.sun.tools.javac.code.ClassFinder", "BadClassFile", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.ClassFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassFinder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.ClassFinder",
	"java.lang.Object",
	nullptr,
	_ClassFinder_FieldInfo_,
	_ClassFinder_MethodInfo_,
	nullptr,
	nullptr,
	_ClassFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ClassFinder$2,com.sun.tools.javac.code.ClassFinder$BadEnclosingMethodAttr,com.sun.tools.javac.code.ClassFinder$BadClassFile,com.sun.tools.javac.code.ClassFinder$1"
};

$Object* allocate$ClassFinder($Class* clazz) {
	return $of($alloc(ClassFinder));
}

$Context$Key* ClassFinder::classFinderKey = nullptr;

$Symbol$Completer* ClassFinder::getCompleter() {
	return this->thisCompleter;
}

ClassFinder* ClassFinder::instance($Context* context) {
	$init(ClassFinder);
	$var(ClassFinder, instance, $cast(ClassFinder, $nc(context)->get(ClassFinder::classFinderKey)));
	if (instance == nullptr) {
		$assign(instance, $new(ClassFinder, context));
	}
	return instance;
}

void ClassFinder::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$init($Symbol$Completer);
	$set(this, sourceCompleter, $Symbol$Completer::NULL_COMPLETER);
	$set(this, currentClassFile, nullptr);
	$set(this, currentOwner, nullptr);
	$set(this, thisCompleter, static_cast<$Symbol$Completer*>($new(ClassFinder$$Lambda$complete, this)));
	this->verbosePath = true;
	$nc(context)->put(ClassFinder::classFinderKey, $of(this));
	$set(this, reader, $ClassReader::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, dependencies, $Dependencies::instance(context));
	if (this->fileManager == nullptr) {
		$throwNew($AssertionError, $of("FileManager initialization error"_s));
	}
	$set(this, diagFactory, $JCDiagnostic$Factory::instance(context));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, annotate, $Annotate::instance(context));
	$var($Options, options, $Options::instance(context));
	$init($Option);
	this->verbose = $nc(options)->isSet($Option::VERBOSE);
	this->cacheCompletionFailure = options->isUnset("dev"_s);
	this->preferSource = "source"_s->equals($(options->get("-Xprefer"_s)));
	this->userPathsFirst = options->isSet($Option::XXUSERPATHSFIRST);
	$set(this, completionFailureName, options->isSet("failcomplete"_s) ? $nc(this->names)->fromString($(options->get("failcomplete"_s))) : ($Name*)nullptr);
	bool useCtProps = false;
	$var($JavaFileManager, fm, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	{
		$var($DelegatingJavaFileManager, delegatingJavaFileManager, nullptr);
		bool var$0 = $instanceOf($DelegatingJavaFileManager, fm);
		if (var$0) {
			$assign(delegatingJavaFileManager, $cast($DelegatingJavaFileManager, fm));
			var$0 = true;
		}
		if (var$0) {
			$assign(fm, $nc(delegatingJavaFileManager)->getBaseFileManager());
		}
	}
	{
		$var($JavacFileManager, javacFileManager, nullptr);
		bool var$1 = $instanceOf($JavacFileManager, fm);
		if (var$1) {
			$assign(javacFileManager, $cast($JavacFileManager, fm));
			var$1 = true;
		}
		if (var$1) {
			bool var$2 = $nc(javacFileManager)->isDefaultBootClassPath();
			useCtProps = var$2 && javacFileManager->isSymbolFileEnabled();
		} else if ($nc($($nc($of(fm))->getClass()->getName()))->equals("com.sun.tools.sjavac.comp.SmartFileManager"_s)) {
			useCtProps = !options->isSet("ignore.symbol.file"_s);
		} else {
			useCtProps = false;
		}
	}
	$set(this, jrtIndex, useCtProps && $JRTIndex::isAvailable() ? $JRTIndex::getSharedInstance() : ($JRTIndex*)nullptr);
	$set(this, profile, $Profile::instance(context));
	$set(this, cachedCompletionFailure, $new($Symbol$CompletionFailure, nullptr, static_cast<$Supplier*>($$new(ClassFinder$$Lambda$lambda$new$0$1)), this->dcfh));
	$nc(this->cachedCompletionFailure)->setStackTrace($$new($StackTraceElementArray, 0));
}

int64_t ClassFinder::getSupplementaryFlags($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	if (this->jrtIndex == nullptr || !$nc(this->jrtIndex)->isInJRT($nc(c)->classfile) || $nc(c)->name == $nc(this->names)->module_info) {
		return 0;
	}
	if (this->supplementaryFlags == nullptr) {
		$set(this, supplementaryFlags, $new($HashMap));
	}
	$var($Long, flags, $cast($Long, $nc(this->supplementaryFlags)->get($($nc(c)->packge()))));
	if (flags == nullptr) {
		int64_t newFlags = 0;
		try {
			$var($JRTIndex$CtSym, ctSym, $nc(this->jrtIndex)->getCtSym($($nc($($nc(c)->packge()))->flatName())));
			$init($Profile);
			$Profile* minProfile = $Profile::DEFAULT;
			if ($nc(ctSym)->proprietary) {
				newFlags |= 0x0000004000000000;
			}
			if ($nc(ctSym)->minProfile != nullptr) {
				minProfile = $Profile::lookup(ctSym->minProfile);
			}
			if (this->profile != $Profile::DEFAULT && $nc(minProfile)->value > this->profile->value) {
				newFlags |= 0x0000200000000000;
			}
		} catch ($IOException& ignore) {
		}
		$var($Object, var$0, $of($nc(c)->packge()));
		$nc(this->supplementaryFlags)->put(var$0, $assign(flags, $Long::valueOf(newFlags)));
	}
	return $nc(flags)->longValue();
}

void ClassFinder::complete($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::TYP) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, sym));
				$init($Dependencies$CompletionCause);
				$nc(this->dependencies)->push(c, $Dependencies$CompletionCause::CLASS_READER);
				$nc(this->annotate)->blockAnnotations();
				$set(c, members_field, $new($Scope$ErrorScope, c));
				completeOwners(c->owner);
				completeEnclosing(c);
				fillIn(c);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->annotate)->unblockAnnotationsNoFlush();
				$nc(this->dependencies)->pop();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		if (sym->kind == $Kinds$Kind::PCK) {
			$var($Symbol$PackageSymbol, p, $cast($Symbol$PackageSymbol, sym));
			try {
				fillIn(p);
			} catch ($IOException& ex) {
				$throw($($$new($Symbol$CompletionFailure, sym, static_cast<$Supplier*>($$new(ClassFinder$$Lambda$lambda$complete$1$2, this, ex)), this->dcfh)->initCause(ex)));
			}
		}
	}
	if (!$nc(this->reader)->filling) {
		$nc(this->annotate)->flush();
	}
}

void ClassFinder::completeOwners($Symbol* o) {
	$init($Kinds$Kind);
	if ($nc(o)->kind != $Kinds$Kind::PCK) {
		completeOwners(o->owner);
	}
	$nc(o)->complete();
}

void ClassFinder::completeEnclosing($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc($nc(c)->owner)->kind == $Kinds$Kind::PCK) {
		$var($Symbol, owner, c->owner);
		{
			$var($Iterator, i$, $nc($($Convert::enclosingCandidates($($Convert::shortName(c->name)))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Name, name, $cast($Name, i$->next()));
				{
					$var($Symbol, encl, $nc($($nc(owner)->members()))->findFirst(name));
					if (encl == nullptr) {
						$var($Symbol$ModuleSymbol, var$0, $nc($(c->packge()))->modle);
						$assign(encl, $nc(this->syms)->getClass(var$0, $($Symbol$TypeSymbol::formFlatName(name, owner))));
					}
					if (encl != nullptr) {
						encl->complete();
					}
				}
			}
		}
	}
}

void ClassFinder::fillIn($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	if (this->completionFailureName == $nc(c)->fullname) {
		$throwNew($Symbol$CompletionFailure, c, static_cast<$Supplier*>($$new(ClassFinder$$Lambda$lambda$fillIn$2$3, this)), this->dcfh);
	}
	$set(this, currentOwner, c);
	$var($JavaFileObject, classfile, $nc(c)->classfile);
	if (classfile != nullptr) {
		$var($JavaFileObject, previousClassFile, this->currentClassFile);
		$var($Symbol, prevOwner, c->owner);
		$var($Name, prevName, c->fullname);
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if ($nc(this->reader)->filling) {
						$Assert::error($$str({"Filling "_s, $(classfile->toUri()), " during "_s, previousClassFile}));
					}
					$set(this, currentClassFile, classfile);
					if (this->verbose) {
						$nc(this->log)->printVerbose("loading"_s, $$new($ObjectArray, {$($of($nc(this->currentClassFile)->getName()))}));
					}
					$init($JavaFileObject$Kind);
					if (classfile->getKind() == $JavaFileObject$Kind::CLASS) {
						$nc(this->reader)->readClassFile(c);
						c->flags_field |= getSupplementaryFlags(c);
					} else if (!$nc(this->sourceCompleter)->isTerminal()) {
						$nc(this->sourceCompleter)->complete(c);
					} else {
						$throwNew($IllegalStateException, $$str({"Source completer required to read "_s, $(classfile->toUri())}));
					}
				} catch ($ClassFinder$BadClassFile& cf) {
					$set(c, owner, prevOwner);
					$nc($($nc(c->members_field)->getSymbols(static_cast<$Predicate*>($$new(ClassFinder$$Lambda$lambda$fillIn$3$4)))))->forEach(static_cast<$Consumer*>($$new(ClassFinder$$Lambda$lambda$fillIn$4$5)));
					$set(c, fullname, prevName);
					$set(c, name, $Convert::shortName(prevName));
					c->reset();
					$throw(cf);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this, currentClassFile, previousClassFile);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$throw($(classFileNotFound(c)));
	}
}

$Symbol$CompletionFailure* ClassFinder::classFileNotFound($Symbol$ClassSymbol* c) {
	return newCompletionFailure(c, static_cast<$Supplier*>($$new(ClassFinder$$Lambda$lambda$classFileNotFound$5$6, this, c)));
}

$Symbol$CompletionFailure* ClassFinder::newCompletionFailure($Symbol$TypeSymbol* c, $Supplier* diag) {
	if (!this->cacheCompletionFailure) {
		return $new($Symbol$CompletionFailure, c, diag, this->dcfh);
	} else {
		$var($Symbol$CompletionFailure, result, this->cachedCompletionFailure);
		$set($nc(result), sym, c);
		result->resetDiagnostic(diag);
		return result;
	}
}

$Symbol$ClassSymbol* ClassFinder::loadClass($Symbol$ModuleSymbol* msym, $Name* flatname) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(msym);
	$var($Name, packageName, $Convert::packagePart(flatname));
	$var($Symbol$PackageSymbol, ps, $nc(this->syms)->lookupPackage(msym, packageName));
	$Assert::checkNonNull($of($nc(ps)->modle), static_cast<$Supplier*>($$new(ClassFinder$$Lambda$lambda$loadClass$6$7, msym, flatname)));
	bool absent = $nc(this->syms)->getClass($nc(ps)->modle, flatname) == nullptr;
	$var($Symbol$ClassSymbol, c, $nc(this->syms)->enterClass($nc(ps)->modle, flatname));
	if ($nc(c)->members_field == nullptr) {
		try {
			c->complete();
		} catch ($Symbol$CompletionFailure& ex) {
			if (absent) {
				$nc(this->syms)->removeClass($nc(ps)->modle, flatname);
				$nc(ex->dcfh)->classSymbolRemoved(c);
			}
			$throw(ex);
		}
	}
	return c;
}

void ClassFinder::includeClassFile($Symbol$PackageSymbol* p, $JavaFileObject* file) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)($nc(p)->flags_field & (uint64_t)(int64_t)0x00800000)) == 0) {
		$init($Kinds$Kind);
		{
			$var($Symbol, q, p);
			for (; q != nullptr && q->kind == $Kinds$Kind::PCK; $assign(q, q->owner)) {
				q->flags_field |= 0x00800000;
			}
		}
	}
	$JavaFileObject$Kind* kind = $nc(file)->getKind();
	int32_t seen = 0;
	$init($JavaFileObject$Kind);
	if (kind == $JavaFileObject$Kind::CLASS) {
		seen = 0x02000000;
	} else {
		seen = 0x04000000;
	}
	$var($String, binaryName, $nc(this->fileManager)->inferBinaryName(this->currentLoc, file));
	int32_t lastDot = $nc(binaryName)->lastIndexOf("."_s);
	$var($Name, classname, $nc(this->names)->fromString($(binaryName->substring(lastDot + 1))));
	bool isPkgInfo = classname == $nc(this->names)->package_info;
	$var($Symbol$ClassSymbol, c, isPkgInfo ? $nc(p)->package_info : $cast($Symbol$ClassSymbol, $nc(p->members_field)->findFirst(classname)));
	if (c == nullptr) {
		$assign(c, $nc(this->syms)->enterClass(p->modle, classname, p));
		if ($nc(c)->classfile == nullptr) {
			$set(c, classfile, file);
		}
		if (isPkgInfo) {
			$set(p, package_info, c);
		} else if ($equals($nc(c)->owner, p)) {
			$nc(p->members_field)->enter(c);
		}
	} else if (!this->preferCurrent && $nc(c)->classfile != nullptr && ((int64_t)(c->flags_field & (uint64_t)(int64_t)seen)) == 0) {
		if (((int64_t)(c->flags_field & (uint64_t)(int64_t)(0x02000000 | 0x04000000))) != 0) {
			$set(c, classfile, preferredFileObject(file, c->classfile));
		}
	}
	$nc(c)->flags_field |= seen;
}

$JavaFileObject* ClassFinder::preferredFileObject($JavaFileObject* a, $JavaFileObject* b) {
	if (this->preferSource) {
		$init($JavaFileObject$Kind);
		return ($nc(a)->getKind() == $JavaFileObject$Kind::SOURCE) ? a : b;
	} else {
		int64_t adate = $nc(a)->getLastModified();
		int64_t bdate = $nc(b)->getLastModified();
		return (adate > bdate) ? a : b;
	}
}

$EnumSet* ClassFinder::getPackageFileKinds() {
	$init($JavaFileObject$Kind);
	return $EnumSet::of(static_cast<$Enum*>($JavaFileObject$Kind::CLASS), static_cast<$Enum*>($JavaFileObject$Kind::SOURCE));
}

void ClassFinder::extraFileActions($Symbol$PackageSymbol* pack, $JavaFileObject* fe) {
}

void ClassFinder::fillIn($Symbol$PackageSymbol* p) {
	$useLocalCurrentObjectStackCache();
	if ($nc(p)->members_field == nullptr) {
		$set(p, members_field, $Scope$WriteableScope::create(p));
	}
	$var($Symbol$ModuleSymbol, msym, $nc(p)->modle);
	$Assert::checkNonNull($of(msym), static_cast<$Supplier*>($$new(ClassFinder$$Lambda$toString$8, static_cast<$Symbol$PackageSymbol*>(p))));
	$nc(msym)->complete();
	if (msym == $nc(this->syms)->noModule) {
		this->preferCurrent = false;
		if (this->userPathsFirst) {
			scanUserPaths(p, true);
			this->preferCurrent = true;
			scanPlatformPath(p);
		} else {
			scanPlatformPath(p);
			scanUserPaths(p, true);
		}
	} else {
		$init($StandardLocation);
		if ($equals(msym->classLocation, $StandardLocation::CLASS_PATH)) {
			scanUserPaths(p, $equals(msym->sourceLocation, $StandardLocation::SOURCE_PATH));
		} else {
			scanModulePaths(p, msym);
		}
	}
}

void ClassFinder::scanModulePaths($Symbol$PackageSymbol* p, $Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	$var($Set, kinds, getPackageFileKinds());
	$var($Set, classKinds, $EnumSet::copyOf(static_cast<$Collection*>(kinds)));
	$init($JavaFileObject$Kind);
	$nc(classKinds)->remove($JavaFileObject$Kind::SOURCE);
	bool wantClassFiles = !classKinds->isEmpty();
	$var($Set, sourceKinds, $EnumSet::copyOf(static_cast<$Collection*>(kinds)));
	$nc(sourceKinds)->remove($JavaFileObject$Kind::CLASS);
	bool wantSourceFiles = !sourceKinds->isEmpty();
	$var($String, packageName, $nc($nc(p)->fullname)->toString());
	$var($JavaFileManager$Location, classLocn, $nc(msym)->classLocation);
	$var($JavaFileManager$Location, sourceLocn, msym->sourceLocation);
	$var($JavaFileManager$Location, patchLocn, msym->patchLocation);
	$var($JavaFileManager$Location, patchOutLocn, msym->patchOutputLocation);
	bool prevPreferCurrent = this->preferCurrent;
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->preferCurrent = false;
			if (wantClassFiles && (patchOutLocn != nullptr)) {
				fillIn(p, patchOutLocn, $(list(patchOutLocn, p, packageName, classKinds)));
			}
			if ((wantClassFiles || wantSourceFiles) && (patchLocn != nullptr)) {
				$var($Set, combined, $EnumSet::noneOf($JavaFileObject$Kind::class$));
				$nc(combined)->addAll(classKinds);
				combined->addAll(sourceKinds);
				fillIn(p, patchLocn, $(list(patchLocn, p, packageName, combined)));
			}
			this->preferCurrent = true;
			if (wantClassFiles && (classLocn != nullptr)) {
				fillIn(p, classLocn, $(list(classLocn, p, packageName, classKinds)));
			}
			if (wantSourceFiles && (sourceLocn != nullptr)) {
				fillIn(p, sourceLocn, $(list(sourceLocn, p, packageName, sourceKinds)));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->preferCurrent = prevPreferCurrent;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ClassFinder::scanUserPaths($Symbol$PackageSymbol* p, bool includeSourcePath) {
	$useLocalCurrentObjectStackCache();
	$var($Set, kinds, getPackageFileKinds());
	$var($Set, classKinds, $EnumSet::copyOf(static_cast<$Collection*>(kinds)));
	$init($JavaFileObject$Kind);
	$nc(classKinds)->remove($JavaFileObject$Kind::SOURCE);
	bool wantClassFiles = !classKinds->isEmpty();
	$var($Set, sourceKinds, $EnumSet::copyOf(static_cast<$Collection*>(kinds)));
	$nc(sourceKinds)->remove($JavaFileObject$Kind::CLASS);
	bool wantSourceFiles = !sourceKinds->isEmpty();
	$init($StandardLocation);
	bool haveSourcePath = includeSourcePath && $nc(this->fileManager)->hasLocation($StandardLocation::SOURCE_PATH);
	if (this->verbose && this->verbosePath) {
		this->verbosePath = false;
		{
			$var($StandardJavaFileManager, standardJavaFileManager, nullptr);
			$var($JavaFileManager, patt24619$temp, this->fileManager);
			bool var$0 = $instanceOf($StandardJavaFileManager, patt24619$temp);
			if (var$0) {
				$assign(standardJavaFileManager, $cast($StandardJavaFileManager, patt24619$temp));
				var$0 = true;
			}
			if (var$0) {
				if (haveSourcePath && wantSourceFiles) {
					$var($List, path, $List::nil());
					{
						$var($Iterator, i$, $nc($($nc(standardJavaFileManager)->getLocationAsPaths($StandardLocation::SOURCE_PATH)))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, sourcePath, $cast($Path, i$->next()));
							{
								$assign(path, $nc(path)->prepend(sourcePath));
							}
						}
					}
					$nc(this->log)->printVerbose("sourcepath"_s, $$new($ObjectArray, {$($of($nc($($nc(path)->reverse()))->toString()))}));
				} else if (wantSourceFiles) {
					$var($List, path, $List::nil());
					{
						$var($Iterator, i$, $nc($($nc(standardJavaFileManager)->getLocationAsPaths($StandardLocation::CLASS_PATH)))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, classPath, $cast($Path, i$->next()));
							{
								$assign(path, $nc(path)->prepend(classPath));
							}
						}
					}
					$nc(this->log)->printVerbose("sourcepath"_s, $$new($ObjectArray, {$($of($nc($($nc(path)->reverse()))->toString()))}));
				}
				if (wantClassFiles) {
					$var($List, path, $List::nil());
					{
						$var($Iterator, i$, $nc($($nc(standardJavaFileManager)->getLocationAsPaths($StandardLocation::PLATFORM_CLASS_PATH)))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, platformPath, $cast($Path, i$->next()));
							{
								$assign(path, $nc(path)->prepend(platformPath));
							}
						}
					}
					{
						$var($Iterator, i$, $nc($(standardJavaFileManager->getLocationAsPaths($StandardLocation::CLASS_PATH)))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, classPath, $cast($Path, i$->next()));
							{
								$assign(path, $nc(path)->prepend(classPath));
							}
						}
					}
					$nc(this->log)->printVerbose("classpath"_s, $$new($ObjectArray, {$($of($nc($($nc(path)->reverse()))->toString()))}));
				}
			}
		}
	}
	$var($String, packageName, $nc($nc(p)->fullname)->toString());
	if (wantSourceFiles && !haveSourcePath) {
		fillIn(p, $StandardLocation::CLASS_PATH, $(list($StandardLocation::CLASS_PATH, p, packageName, kinds)));
	} else {
		if (wantClassFiles) {
			fillIn(p, $StandardLocation::CLASS_PATH, $(list($StandardLocation::CLASS_PATH, p, packageName, classKinds)));
		}
		if (wantSourceFiles) {
			fillIn(p, $StandardLocation::SOURCE_PATH, $(list($StandardLocation::SOURCE_PATH, p, packageName, sourceKinds)));
		}
	}
}

void ClassFinder::scanPlatformPath($Symbol$PackageSymbol* p) {
	$useLocalCurrentObjectStackCache();
	$init($StandardLocation);
	$var($JavaFileManager$Location, var$0, static_cast<$JavaFileManager$Location*>($StandardLocation::PLATFORM_CLASS_PATH));
	$var($Symbol$PackageSymbol, var$1, p);
	$var($String, var$2, $nc($nc(p)->fullname)->toString());
	$init($JavaFileObject$Kind);
	fillIn(p, $StandardLocation::PLATFORM_CLASS_PATH, $(list(var$0, var$1, var$2, $($EnumSet::of($JavaFileObject$Kind::CLASS)))));
}

void ClassFinder::fillIn($Symbol$PackageSymbol* p, $JavaFileManager$Location* location, $Iterable* files) {
	$useLocalCurrentObjectStackCache();
	$set(this, currentLoc, location);
	{
		$var($Iterator, i$, $nc(files)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavaFileObject, fo, $cast($JavaFileObject, i$->next()));
			{
				$init($ClassFinder$2);
				switch ($nc($ClassFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind)->get($nc(($($nc(fo)->getKind())))->ordinal())) {
				case 1:
					{
						extraFileActions(p, fo);
						break;
					}
				case 2:
					{}
				case 3:
					{
						{
							$var($String, binaryName, $nc(this->fileManager)->inferBinaryName(this->currentLoc, fo));
							$var($String, simpleName, $nc(binaryName)->substring(binaryName->lastIndexOf("."_s) + 1));
							bool var$0 = $SourceVersion::isIdentifier(simpleName);
							if (var$0 || simpleName->equals("package-info"_s)) {
								includeClassFile(p, fo);
							}
							break;
						}
					}
				default:
					{
						extraFileActions(p, fo);
						break;
					}
				}
			}
		}
	}
}

$Iterable* ClassFinder::list($JavaFileManager$Location* location, $Symbol$PackageSymbol* p, $String* packageName, $Set* kinds) {
	$useLocalCurrentObjectStackCache();
	$load($JavaFileObject$Kind);
	$var($Iterable, listed, $nc(this->fileManager)->list(location, packageName, $($EnumSet::allOf($JavaFileObject$Kind::class$)), false));
	return static_cast<$Iterable*>($new(ClassFinder$$Lambda$lambda$list$7$9, this, listed, p, kinds));
}

$Iterator* ClassFinder::lambda$list$7($Iterable* listed, $Symbol$PackageSymbol* p, $Set* kinds) {
	return $new($ClassFinder$1, this, listed, p, kinds);
}

$String* ClassFinder::lambda$loadClass$6($Symbol$ModuleSymbol* msym, $Name* flatname) {
	$init(ClassFinder);
	return $str({"msym="_s, msym, "; flatName="_s, flatname});
}

$JCDiagnostic* ClassFinder::lambda$classFileNotFound$5($Symbol$ClassSymbol* c) {
	return $nc(this->diagFactory)->fragment($($CompilerProperties$Fragments::ClassFileNotFound($nc(c)->flatname)));
}

void ClassFinder::lambda$fillIn$4($Symbol* sym) {
	$init(ClassFinder);
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, csym, $cast($Symbol$ClassSymbol, sym));
	$set($nc(csym), owner, $nc(sym)->packge());
	$nc($($nc(csym->owner)->members()))->enter(sym);
	$set(csym, fullname, sym->flatName());
	$set(csym, name, $Convert::shortName($(sym->flatName())));
	csym->reset();
}

bool ClassFinder::lambda$fillIn$3($Symbol* sym) {
	$init(ClassFinder);
	$init($Kinds$Kind);
	return $nc(sym)->kind == $Kinds$Kind::TYP;
}

$JCDiagnostic* ClassFinder::lambda$fillIn$2() {
	$init($CompilerProperties$Fragments);
	return $nc(this->diagFactory)->fragment($CompilerProperties$Fragments::UserSelectedCompletionFailure);
}

$JCDiagnostic* ClassFinder::lambda$complete$1($IOException* ex) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->diagFactory)->fragment($($CompilerProperties$Fragments::ExceptionMessage($($nc(ex)->getLocalizedMessage()))));
}

$JCDiagnostic* ClassFinder::lambda$new$0() {
	$init(ClassFinder);
	return nullptr;
}

void clinit$ClassFinder($Class* class$) {
	$assignStatic(ClassFinder::classFinderKey, $new($Context$Key));
}

ClassFinder::ClassFinder() {
}

$Class* ClassFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassFinder$$Lambda$complete::classInfo$.name)) {
			return ClassFinder$$Lambda$complete::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$lambda$new$0$1::classInfo$.name)) {
			return ClassFinder$$Lambda$lambda$new$0$1::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$lambda$complete$1$2::classInfo$.name)) {
			return ClassFinder$$Lambda$lambda$complete$1$2::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$lambda$fillIn$2$3::classInfo$.name)) {
			return ClassFinder$$Lambda$lambda$fillIn$2$3::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$lambda$fillIn$3$4::classInfo$.name)) {
			return ClassFinder$$Lambda$lambda$fillIn$3$4::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$lambda$fillIn$4$5::classInfo$.name)) {
			return ClassFinder$$Lambda$lambda$fillIn$4$5::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$lambda$classFileNotFound$5$6::classInfo$.name)) {
			return ClassFinder$$Lambda$lambda$classFileNotFound$5$6::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$lambda$loadClass$6$7::classInfo$.name)) {
			return ClassFinder$$Lambda$lambda$loadClass$6$7::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$toString$8::classInfo$.name)) {
			return ClassFinder$$Lambda$toString$8::load$(name, initialize);
		}
		if (name->equals(ClassFinder$$Lambda$lambda$list$7$9::classInfo$.name)) {
			return ClassFinder$$Lambda$lambda$list$7$9::load$(name, initialize);
		}
	}
	$loadClass(ClassFinder, name, initialize, &_ClassFinder_ClassInfo_, clinit$ClassFinder, allocate$ClassFinder);
	return class$;
}

$Class* ClassFinder::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com