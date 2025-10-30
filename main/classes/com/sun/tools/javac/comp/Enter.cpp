#include <com/sun/tools/javac/comp/Enter.h>

#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter$1.h>
#include <com/sun/tools/javac/comp/Enter$UnenterScanner.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/comp/Todo.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/main/Option$PkgInfo.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/DocCommentTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ALWAYS
#undef CLASS
#undef CLASSDEF
#undef ENUM
#undef INTERFACE
#undef NULL_COMPLETER
#undef PCK
#undef SOURCE
#undef TYP
#undef VAL_MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$NamedImportScope = ::com::sun::tools::javac::code::Scope$NamedImportScope;
using $Scope$StarImportScope = ::com::sun::tools::javac::code::Scope$StarImportScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Enter$1 = ::com::sun::tools::javac::comp::Enter$1;
using $Enter$UnenterScanner = ::com::sun::tools::javac::comp::Enter$UnenterScanner;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Todo = ::com::sun::tools::javac::comp::Todo;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $Option$PkgInfo = ::com::sun::tools::javac::main::Option$PkgInfo;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Enter$$Lambda$lambda$visitTopLevel$0 : public $Predicate {
	$class(Enter$$Lambda$lambda$visitTopLevel$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JCTree$JCCompilationUnit* tree) {
		$set(this, tree, tree);
	}
	virtual bool test(Object$* m) override {
		 return Enter::lambda$visitTopLevel$0(tree, $cast($Symbol$ModuleSymbol, m));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Enter$$Lambda$lambda$visitTopLevel$0>());
	}
	$JCTree$JCCompilationUnit* tree = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Enter$$Lambda$lambda$visitTopLevel$0::fieldInfos[2] = {
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC, $field(Enter$$Lambda$lambda$visitTopLevel$0, tree)},
	{}
};
$MethodInfo Enter$$Lambda$lambda$visitTopLevel$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $method(static_cast<void(Enter$$Lambda$lambda$visitTopLevel$0::*)($JCTree$JCCompilationUnit*)>(&Enter$$Lambda$lambda$visitTopLevel$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Enter$$Lambda$lambda$visitTopLevel$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Enter$$Lambda$lambda$visitTopLevel$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Enter$$Lambda$lambda$visitTopLevel$0::load$($String* name, bool initialize) {
	$loadClass(Enter$$Lambda$lambda$visitTopLevel$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Enter$$Lambda$lambda$visitTopLevel$0::class$ = nullptr;

class Enter$$Lambda$lambda$visitTopLevel$1$1 : public $Predicate {
	$class(Enter$$Lambda$lambda$visitTopLevel$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Enter* inst, $Map* visiblePackages, $JCTree$JCCompilationUnit* tree) {
		$set(this, inst$, inst);
		$set(this, visiblePackages, visiblePackages);
		$set(this, tree, tree);
	}
	virtual bool test(Object$* cand) override {
		 return $nc(inst$)->lambda$visitTopLevel$1(visiblePackages, tree, $cast($Symbol$ModuleSymbol, cand));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Enter$$Lambda$lambda$visitTopLevel$1$1>());
	}
	Enter* inst$ = nullptr;
	$Map* visiblePackages = nullptr;
	$JCTree$JCCompilationUnit* tree = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Enter$$Lambda$lambda$visitTopLevel$1$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Enter$$Lambda$lambda$visitTopLevel$1$1, inst$)},
	{"visiblePackages", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Enter$$Lambda$lambda$visitTopLevel$1$1, visiblePackages)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC, $field(Enter$$Lambda$lambda$visitTopLevel$1$1, tree)},
	{}
};
$MethodInfo Enter$$Lambda$lambda$visitTopLevel$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Enter;Ljava/util/Map;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $method(static_cast<void(Enter$$Lambda$lambda$visitTopLevel$1$1::*)(Enter*,$Map*,$JCTree$JCCompilationUnit*)>(&Enter$$Lambda$lambda$visitTopLevel$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Enter$$Lambda$lambda$visitTopLevel$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Enter$$Lambda$lambda$visitTopLevel$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Enter$$Lambda$lambda$visitTopLevel$1$1::load$($String* name, bool initialize) {
	$loadClass(Enter$$Lambda$lambda$visitTopLevel$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Enter$$Lambda$lambda$visitTopLevel$1$1::class$ = nullptr;

class Enter$$Lambda$toString$2 : public $Supplier {
	$class(Enter$$Lambda$toString$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Enter$$Lambda$toString$2>());
	}
	$Symbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Enter$$Lambda$toString$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Enter$$Lambda$toString$2, inst$)},
	{}
};
$MethodInfo Enter$$Lambda$toString$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Enter$$Lambda$toString$2::*)($Symbol*)>(&Enter$$Lambda$toString$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Enter$$Lambda$toString$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Enter$$Lambda$toString$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Enter$$Lambda$toString$2::load$($String* name, bool initialize) {
	$loadClass(Enter$$Lambda$toString$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Enter$$Lambda$toString$2::class$ = nullptr;

class Enter$$Lambda$lambda$visitClassDef$2$3 : public $Supplier {
	$class(Enter$$Lambda$lambda$visitClassDef$2$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol$ClassSymbol* c) {
		$set(this, c, c);
	}
	virtual $Object* get() override {
		 return $of(Enter::lambda$visitClassDef$2(c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Enter$$Lambda$lambda$visitClassDef$2$3>());
	}
	$Symbol$ClassSymbol* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Enter$$Lambda$lambda$visitClassDef$2$3::fieldInfos[2] = {
	{"c", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(Enter$$Lambda$lambda$visitClassDef$2$3, c)},
	{}
};
$MethodInfo Enter$$Lambda$lambda$visitClassDef$2$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Enter$$Lambda$lambda$visitClassDef$2$3::*)($Symbol$ClassSymbol*)>(&Enter$$Lambda$lambda$visitClassDef$2$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Enter$$Lambda$lambda$visitClassDef$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Enter$$Lambda$lambda$visitClassDef$2$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Enter$$Lambda$lambda$visitClassDef$2$3::load$($String* name, bool initialize) {
	$loadClass(Enter$$Lambda$lambda$visitClassDef$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Enter$$Lambda$lambda$visitClassDef$2$3::class$ = nullptr;

$FieldInfo _Enter_FieldInfo_[] = {
	{"enterKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Enter;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Enter, enterKey)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, 0, $field(Enter, annotate)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, 0, $field(Enter, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(Enter, syms)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, 0, $field(Enter, chk)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, 0, $field(Enter, make)},
	{"typeEnter", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, 0, $field(Enter, typeEnter)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(Enter, types)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, 0, $field(Enter, lint)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, 0, $field(Enter, names)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, 0, $field(Enter, fileManager)},
	{"pkginfoOpt", "Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, 0, $field(Enter, pkginfoOpt)},
	{"typeEnvs", "Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, 0, $field(Enter, typeEnvs)},
	{"modules", "Lcom/sun/tools/javac/comp/Modules;", nullptr, 0, $field(Enter, modules)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $field(Enter, diags)},
	{"todo", "Lcom/sun/tools/javac/comp/Todo;", nullptr, $PRIVATE | $FINAL, $field(Enter, todo)},
	{"uncompleted", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", 0, $field(Enter, uncompleted)},
	{"unfinishedModules", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", 0, $field(Enter, unfinishedModules)},
	{"predefClassDef", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PRIVATE, $field(Enter, predefClassDef)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PROTECTED, $field(Enter, env)},
	{"result", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Enter, result)},
	{"setPackageSymbols", "Lcom/sun/tools/javac/tree/TreeScanner;", nullptr, $PRIVATE | $FINAL, $field(Enter, setPackageSymbols)},
	{}
};

$MethodInfo _Enter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Enter::*)($Context*)>(&Enter::init$))},
	{"classEnter", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Type;", 0},
	{"classEnter", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"classEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"classNameMatchesFileName", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Symbol$ClassSymbol*,$Env*)>(&Enter::classNameMatchesFileName))},
	{"complete", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", $PUBLIC},
	{"duplicateClass", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PROTECTED},
	{"enterScope", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", 0},
	{"getClassEnv", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"getEnv", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"getEnvs", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PUBLIC},
	{"getTopLevelEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Enter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Enter*(*)($Context*)>(&Enter::instance))},
	{"lambda$visitClassDef$2", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Symbol$ClassSymbol*)>(&Enter::lambda$visitClassDef$2))},
	{"lambda$visitTopLevel$0", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCompilationUnit*,$Symbol$ModuleSymbol*)>(&Enter::lambda$visitTopLevel$0))},
	{"lambda$visitTopLevel$1", "(Ljava/util/Map;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Enter::*)($Map*,$JCTree$JCCompilationUnit*,$Symbol$ModuleSymbol*)>(&Enter::lambda$visitTopLevel$1))},
	{"main", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)V", $PUBLIC},
	{"moduleEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"newRound", "()V", nullptr, $PUBLIC},
	{"topLevelEnv", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0},
	{"unenter", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Enter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Enter$UnenterScanner", "com.sun.tools.javac.comp.Enter", "UnenterScanner", 0},
	{"com.sun.tools.javac.comp.Enter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Enter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Enter",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Enter_FieldInfo_,
	_Enter_MethodInfo_,
	nullptr,
	nullptr,
	_Enter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Enter$UnenterScanner,com.sun.tools.javac.comp.Enter$1"
};

$Object* allocate$Enter($Class* clazz) {
	return $of($alloc(Enter));
}

$Context$Key* Enter::enterKey = nullptr;

Enter* Enter::instance($Context* context) {
	$init(Enter);
	$var(Enter, instance, $cast(Enter, $nc(context)->get(Enter::enterKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Enter, context));
	}
	return instance;
}

void Enter::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$JCTree$Visitor::init$();
	$set(this, unfinishedModules, $new($ListBuffer));
	$set(this, setPackageSymbols, $new($Enter$1, this));
	$nc(context)->put(Enter::enterKey, $of(this));
	$set(this, log, $Log::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, typeEnter, $TypeEnter::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, lint, $Lint::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, modules, $Modules::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$var($JCTree$JCModifiers, var$0, $nc(this->make)->Modifiers(1));
	$var($Name, var$1, $nc($nc(this->syms)->predefClass)->name);
	$var($List, var$2, $List::nil());
	$var($List, var$3, $List::nil());
	$set(this, predefClassDef, $nc(this->make)->ClassDef(var$0, var$1, var$2, nullptr, var$3, $($List::nil())));
	$set($nc(this->predefClassDef), sym, $nc(this->syms)->predefClass);
	$set(this, todo, $Todo::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$var($Options, options, $Options::instance(context));
	$set(this, pkginfoOpt, $Option$PkgInfo::get(options));
	$set(this, typeEnvs, $TypeEnvs::instance(context));
}

$Env* Enter::getEnv($Symbol$TypeSymbol* sym) {
	return $nc(this->typeEnvs)->get(sym);
}

$Iterable* Enter::getEnvs() {
	return $nc(this->typeEnvs)->values();
}

$Env* Enter::getClassEnv($Symbol$TypeSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, getEnv(sym));
	if (localEnv == nullptr) {
		return nullptr;
	}
	$var($Env, lintEnv, localEnv);
	while ($nc(($cast($AttrContext, $nc(lintEnv)->info)))->lint == nullptr) {
		$assign(lintEnv, lintEnv->next);
	}
	$set($nc($cast($AttrContext, $nc(localEnv)->info)), lint, $nc($nc(($cast($AttrContext, $nc(lintEnv)->info)))->lint)->augment(static_cast<$Symbol*>(sym)));
	return localEnv;
}

$Env* Enter::classEnv($JCTree$JCClassDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(env)->dup(tree, $($nc(($cast($AttrContext, env->info)))->dup($($Scope$WriteableScope::create($nc(tree)->sym))))));
	$set($nc(localEnv), enclClass, tree);
	$set(localEnv, outer, env);
	$nc(($cast($AttrContext, localEnv->info)))->isSelfCall = false;
	$set($nc($cast($AttrContext, localEnv->info)), lint, nullptr);
	$nc(($cast($AttrContext, localEnv->info)))->isAnonymousDiamond = $TreeInfo::isDiamond(env->tree);
	return localEnv;
}

$Env* Enter::topLevelEnv($JCTree$JCCompilationUnit* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $new($Env, tree, $$new($AttrContext)));
	$set(localEnv, toplevel, tree);
	$set(localEnv, enclClass, this->predefClassDef);
	$set($nc(tree), toplevelScope, $Scope$WriteableScope::create(tree->packge));
	$set(tree, namedImportScope, $new($Scope$NamedImportScope, tree->packge));
	$set(tree, starImportScope, $new($Scope$StarImportScope, tree->packge));
	$set($nc($cast($AttrContext, localEnv->info)), scope, tree->toplevelScope);
	$set($nc($cast($AttrContext, localEnv->info)), lint, this->lint);
	return localEnv;
}

$Env* Enter::getTopLevelEnv($JCTree$JCCompilationUnit* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $new($Env, tree, $$new($AttrContext)));
	$set(localEnv, toplevel, tree);
	$set(localEnv, enclClass, this->predefClassDef);
	$set($nc($cast($AttrContext, localEnv->info)), scope, $nc(tree)->toplevelScope);
	$set($nc($cast($AttrContext, localEnv->info)), lint, this->lint);
	return localEnv;
}

$Scope$WriteableScope* Enter::enterScope($Env* env) {
	$init($JCTree$Tag);
	return ($nc($nc(env)->tree)->hasTag($JCTree$Tag::CLASSDEF)) ? $nc($nc(($cast($JCTree$JCClassDecl, $nc(env)->tree)))->sym)->members_field : $nc(($cast($AttrContext, env->info)))->scope;
}

$Env* Enter::moduleEnv($JCTree$JCModuleDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull($nc(tree)->sym);
	$var($Env, localEnv, $nc(env)->dup(tree, $($nc(($cast($AttrContext, env->info)))->dup($($Scope$WriteableScope::create($nc(tree)->sym))))));
	$set($nc(localEnv), enclClass, this->predefClassDef);
	$set(localEnv, outer, env);
	$nc(($cast($AttrContext, localEnv->info)))->isSelfCall = false;
	$set($nc($cast($AttrContext, localEnv->info)), lint, nullptr);
	return localEnv;
}

$Type* Enter::classEnter($JCTree* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->env);
	{
		$var($Throwable, var$0, nullptr);
		$var($Type, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$set(this, env, env);
				$nc(this->annotate)->blockAnnotations();
				$nc(tree)->accept(this);
				$assign(var$2, this->result);
				return$1 = true;
				goto $finally;
			} catch ($Symbol$CompletionFailure& ex) {
				$assign(var$2, $nc(this->chk)->completionError($($nc(tree)->pos()), ex));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->annotate)->unblockAnnotations();
			$set(this, env, prevEnv);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$List* Enter::classEnter($List* trees, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, ts, $new($ListBuffer));
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Type, t, classEnter($cast($JCTree, l->head), env));
			if (t != nullptr) {
				ts->append(t);
			}
		}
	}
	return ts->toList();
}

void Enter::visitTopLevel($JCTree$JCCompilationUnit* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc(tree)->sourcefile));
	bool addEnv = false;
	$init($JavaFileObject$Kind);
	bool isPkgInfo = $nc($nc(tree)->sourcefile)->isNameCompatible("package-info"_s, $JavaFileObject$Kind::SOURCE);
	if ($TreeInfo::isModuleInfo(tree)) {
		$var($JCTree$JCPackageDecl, pd, $cast($JCTree$JCPackageDecl, tree->getPackage()));
		if (pd != nullptr) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($(pd->pos()), $CompilerProperties$Errors::NoPkgInModuleInfoJava);
		}
		$set(tree, packge, $nc(this->syms)->rootPackage);
		$var($Env, topEnv, topLevelEnv(tree));
		classEnter(tree->defs, topEnv);
		$set($nc(tree->modle), usesProvidesCompleter, $nc(this->modules)->getUsesProvidesCompleter());
	} else {
		$var($JCTree$JCPackageDecl, pd, $cast($JCTree$JCPackageDecl, tree->getPackage()));
		if (pd != nullptr) {
			$set(tree, packge, ($set(pd, packge, $nc(this->syms)->enterPackage(tree->modle, $($TreeInfo::fullName(pd->pid))))));
			$nc(this->setPackageSymbols)->scan(static_cast<$JCTree*>(pd));
			$init($Option$PkgInfo);
			if ($nc(pd->annotations)->nonEmpty() || this->pkginfoOpt == $Option$PkgInfo::ALWAYS || tree->docComments != nullptr) {
				if (isPkgInfo) {
					addEnv = true;
				} else if ($nc(pd->annotations)->nonEmpty()) {
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($($nc(($cast($JCTree$JCAnnotation, $nc(pd->annotations)->head)))->pos()), $CompilerProperties$Errors::PkgAnnotationsSbInPackageInfoJava);
				}
			}
		} else {
			$set(tree, packge, $nc(tree->modle)->unnamedPackage);
		}
		$var($Map, visiblePackages, $nc(tree->modle)->visiblePackages);
		$var($Optional, dependencyWithPackage, $nc($($nc($($nc($($nc($($nc(this->syms)->listPackageModules($nc(tree->packge)->fullname)))->stream()))->filter(static_cast<$Predicate*>($$new(Enter$$Lambda$lambda$visitTopLevel$0, tree)))))->filter(static_cast<$Predicate*>($$new(Enter$$Lambda$lambda$visitTopLevel$1$1, this, visiblePackages, tree)))))->findAny());
		if ($nc(dependencyWithPackage)->isPresent()) {
			$nc(this->log)->error(static_cast<$JCDiagnostic$DiagnosticPosition*>(pd), $($CompilerProperties$Errors::PackageInOtherModule($cast($Symbol, $(dependencyWithPackage->get())))));
		}
		$nc(tree->packge)->complete();
		$var($Env, topEnv, topLevelEnv(tree));
		$var($Env, packageEnv, isPkgInfo ? $nc(topEnv)->dup(pd) : ($Env*)nullptr);
		if (isPkgInfo) {
			$var($Env, env0, $nc(this->typeEnvs)->get(tree->packge));
			if (env0 != nullptr) {
				$var($JCTree$JCCompilationUnit, tree0, env0->toplevel);
				if (!$nc(this->fileManager)->isSameFile(tree->sourcefile, $nc(tree0)->sourcefile)) {
					$var($JCDiagnostic$DiagnosticPosition, var$0, pd != nullptr ? $nc($nc(pd)->pid)->pos() : ($JCDiagnostic$DiagnosticPosition*)nullptr);
					$nc(this->log)->warning(var$0, $($CompilerProperties$Warnings::PkgInfoAlreadySeen(tree->packge)));
				}
			}
			$nc(this->typeEnvs)->put(tree->packge, packageEnv);
			$init($Kinds$Kind);
			{
				$var($Symbol, q, tree->packge);
				for (; q != nullptr && q->kind == $Kinds$Kind::PCK; $assign(q, $nc(q)->owner)) {
					q->flags_field |= 0x00800000;
				}
			}
			$var($Name, name, $nc(this->names)->package_info);
			$var($Symbol$ClassSymbol, c, $nc(this->syms)->enterClass(tree->modle, name, tree->packge));
			$set($nc(c), flatname, $nc(this->names)->fromString($$str({tree->packge, "."_s, name})));
			$set(c, sourcefile, tree->sourcefile);
			$init($Symbol$Completer);
			$set(c, completer, $Symbol$Completer::NULL_COMPLETER);
			$set(c, members_field, $Scope$WriteableScope::create(c));
			$set($nc(tree->packge), package_info, c);
			$set($nc(tree->packge), sourcefile, tree->sourcefile);
		}
		classEnter(tree->defs, topEnv);
		if (addEnv) {
			$nc(this->todo)->append(packageEnv);
		}
	}
	$nc(this->log)->useSource(prev);
	$set(this, result, nullptr);
}

void Enter::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, owner, $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner);
	$var($Scope$WriteableScope, enclScope, enterScope(this->env));
	$var($Symbol$ClassSymbol, c, nullptr);
	$init($Kinds$Kind);
	if ($nc(owner)->kind == $Kinds$Kind::PCK) {
		$var($Symbol$PackageSymbol, packge, $cast($Symbol$PackageSymbol, owner));
		{
			$var($Symbol, q, packge);
			for (; q != nullptr && q->kind == $Kinds$Kind::PCK; $assign(q, q->owner)) {
				q->flags_field |= 0x00800000;
			}
		}
		$assign(c, $nc(this->syms)->enterClass($nc($nc(this->env)->toplevel)->modle, $nc(tree)->name, packge));
		$nc($(packge->members()))->enterIfAbsent(c);
		if (((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)1)) != 0 && !classNameMatchesFileName(c, this->env)) {
			$init($Kinds$KindName);
			$Kinds$KindName* topElement = $Kinds$KindName::CLASS;
			if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)16384)) != 0) {
				topElement = $Kinds$KindName::ENUM;
			} else if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)512)) != 0) {
				topElement = $Kinds$KindName::INTERFACE;
			}
			$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
			$nc(this->log)->error(var$0, $($CompilerProperties$Errors::ClassPublicShouldBeInFile(topElement, tree->name)));
		}
	} else {
		bool var$1 = !$nc($nc(tree)->name)->isEmpty();
		if (var$1 && !$nc(this->chk)->checkUniqueClassName($(tree->pos()), tree->name, enclScope)) {
			$set(this, result, nullptr);
			return;
		}
		if (owner->kind == $Kinds$Kind::TYP) {
			$assign(c, $nc(this->syms)->enterClass($nc($nc(this->env)->toplevel)->modle, $nc(tree)->name, $cast($Symbol$TypeSymbol, owner)));
			if ($nc(c)->owner != owner) {
				if (c->name != $nc(tree)->name) {
					$var($JCDiagnostic$DiagnosticPosition, var$2, tree->pos());
					$nc(this->log)->error(var$2, $($CompilerProperties$Errors::SameBinaryName(c->name, tree->name)));
					$init($Type);
					$set(this, result, $nc(this->types)->createErrorType(tree->name, $cast($Symbol$TypeSymbol, owner), $Type::noType));
					$set(tree, sym, $cast($Symbol$ClassSymbol, $nc(this->result)->tsym));
					return;
				}
				$Assert::check($nc(owner->owner)->kind != $Kinds$Kind::TYP, static_cast<$Supplier*>($$new(Enter$$Lambda$toString$2, static_cast<$Symbol*>(owner))));
				$Assert::check($nc(c->owner)->kind == $Kinds$Kind::TYP, static_cast<$Supplier*>($$new(Enter$$Lambda$lambda$visitClassDef$2$3, c)));
				$var($Symbol$ClassSymbol, cowner, $cast($Symbol$ClassSymbol, c->owner));
				if ($nc(cowner)->members_field != nullptr) {
					$nc(cowner->members_field)->remove(c);
				}
				$set(c, owner, owner);
			}
			if (((int64_t)(owner->flags_field & (uint64_t)(int64_t)512)) != 0) {
				$nc($nc(tree)->mods)->flags |= 1 | 8;
			}
		} else {
			$assign(c, $nc(this->syms)->defineClass($nc(tree)->name, owner));
			$set($nc(c), flatname, $nc(this->chk)->localClassName(c));
			if (!$nc(c->name)->isEmpty()) {
				$nc(this->chk)->checkTransparentClass($($nc(tree)->pos()), c, $nc(($cast($AttrContext, $nc(this->env)->info)))->scope);
			}
		}
	}
	$set($nc(tree), sym, c);
	if ($nc(this->chk)->getCompiled(c) != nullptr) {
		duplicateClass($(tree->pos()), c);
		$init($Type);
		$set(this, result, $nc(this->types)->createErrorType(tree->name, $cast($Symbol$TypeSymbol, owner), $Type::noType));
		$set(tree, sym, $cast($Symbol$ClassSymbol, $nc(this->result)->tsym));
		return;
	}
	$nc(this->chk)->putCompiled(c);
	$nc(enclScope)->enter(c);
	$var($Env, localEnv, classEnv(tree, this->env));
	$nc(this->typeEnvs)->put(c, localEnv);
	$init($Symbol$Completer);
	$set($nc(c), completer, $Symbol$Completer::NULL_COMPLETER);
	c->flags_field = $nc(this->chk)->checkFlags($(tree->pos()), $nc(tree->mods)->flags, c, tree);
	$set(c, sourcefile, $nc($nc(this->env)->toplevel)->sourcefile);
	$set(c, members_field, $Scope$WriteableScope::create(c));
	c->clearAnnotationMetadata();
	$var($Type$ClassType, ct, $cast($Type$ClassType, c->type));
	if ($nc(owner)->kind != $Kinds$Kind::PCK && ((int64_t)(c->flags_field & (uint64_t)(int64_t)8)) == 0) {
		$var($Symbol, owner1, owner);
		$init($Kinds$KindSelector);
		while ($nc($nc(owner1)->kind)->matches($Kinds$KindSelector::VAL_MTH) && ((int64_t)(owner1->flags_field & (uint64_t)(int64_t)8)) == 0) {
			$assign(owner1, owner1->owner);
		}
		if ($nc(owner1)->kind == $Kinds$Kind::TYP) {
			$nc(ct)->setEnclosingType(owner1->type);
		}
	}
	$set($nc(ct), typarams_field, classEnter(tree->typarams, localEnv));
	$set(ct, allparams_field, nullptr);
	$set(c, completer, this->typeEnter);
	if (!c->isDirectlyOrIndirectlyLocal() && this->uncompleted != nullptr) {
		$nc(this->uncompleted)->append(c);
	}
	classEnter(tree->defs, localEnv);
	$set(this, result, c->type);
}

bool Enter::classNameMatchesFileName($Symbol$ClassSymbol* c, $Env* env) {
	$init(Enter);
	$init($JavaFileObject$Kind);
	return $nc($nc($nc(env)->toplevel)->sourcefile)->isNameCompatible($($nc($nc(c)->name)->toString()), $JavaFileObject$Kind::SOURCE);
}

void Enter::duplicateClass($JCDiagnostic$DiagnosticPosition* pos, $Symbol$ClassSymbol* c) {
	$nc(this->log)->error(pos, $($CompilerProperties$Errors::DuplicateClass($nc(c)->fullname)));
}

void Enter::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type$TypeVar, a, ($nc(tree)->type != nullptr) ? $cast($Type$TypeVar, $nc(tree)->type) : $new($Type$TypeVar, tree->name, $nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->owner, $nc(this->syms)->botType));
	$set(tree, type, a);
	if ($nc(this->chk)->checkUnique($(tree->pos()), $nc(a)->tsym, $nc(($cast($AttrContext, $nc(this->env)->info)))->scope)) {
		$nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->enter($nc(a)->tsym);
	}
	$set(this, result, a);
}

void Enter::visitModuleDef($JCTree$JCModuleDecl* tree) {
	$var($Env, moduleEnv, this->moduleEnv(tree, this->env));
	$nc(this->typeEnvs)->put($nc(tree)->sym, moduleEnv);
	if ($nc(this->modules)->isInModuleGraph($nc(tree)->sym)) {
		$nc(this->todo)->append(moduleEnv);
	}
}

void Enter::visitTree($JCTree* tree) {
	$set(this, result, nullptr);
}

void Enter::main($List* trees) {
	complete(trees, nullptr);
}

void Enter::complete($List* trees, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$nc(this->annotate)->blockAnnotations();
	$var($ListBuffer, prevUncompleted, this->uncompleted);
	if ($nc(this->typeEnter)->completionEnabled) {
		$set(this, uncompleted, $new($ListBuffer));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			classEnter(trees, ($Env*)nullptr);
			if ($nc(this->typeEnter)->completionEnabled) {
				while ($nc(this->uncompleted)->nonEmpty()) {
					$var($Symbol$ClassSymbol, clazz, $cast($Symbol$ClassSymbol, $nc(this->uncompleted)->next()));
					if (c == nullptr || c == clazz || prevUncompleted == nullptr) {
						$nc(clazz)->complete();
					} else {
						$nc(prevUncompleted)->append(clazz);
					}
				}
				if (!$nc(this->modules)->modulesInitialized()) {
					{
						$var($Iterator, i$, $nc(trees)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JCTree$JCCompilationUnit, cut, $cast($JCTree$JCCompilationUnit, i$->next()));
							{
								if ($nc(cut)->getModuleDecl() != nullptr) {
									$nc(this->unfinishedModules)->append(cut);
								} else {
									$nc(this->typeEnter)->ensureImportsChecked($($List::of(cut)));
								}
							}
						}
					}
				} else {
					$nc(this->typeEnter)->ensureImportsChecked($($nc(this->unfinishedModules)->toList()));
					$nc(this->unfinishedModules)->clear();
					$nc(this->typeEnter)->ensureImportsChecked(trees);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, uncompleted, prevUncompleted);
			$nc(this->annotate)->unblockAnnotations();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Enter::newRound() {
	$nc(this->typeEnvs)->clear();
}

void Enter::unenter($JCTree$JCCompilationUnit* topLevel, $JCTree* tree) {
	$$new($Enter$UnenterScanner, this, $nc(topLevel)->modle)->scan(tree);
}

$String* Enter::lambda$visitClassDef$2($Symbol$ClassSymbol* c) {
	$init(Enter);
	return $nc($nc(c)->owner)->toString();
}

bool Enter::lambda$visitTopLevel$1($Map* visiblePackages, $JCTree$JCCompilationUnit* tree, $Symbol$ModuleSymbol* cand) {
	return $equals($nc(visiblePackages)->get($nc($nc(tree)->packge)->fullname), $nc(this->syms)->getPackage(cand, $nc($nc(tree)->packge)->fullname));
}

bool Enter::lambda$visitTopLevel$0($JCTree$JCCompilationUnit* tree, $Symbol$ModuleSymbol* m) {
	$init(Enter);
	return m != $nc(tree)->modle;
}

void clinit$Enter($Class* class$) {
	$assignStatic(Enter::enterKey, $new($Context$Key));
}

Enter::Enter() {
}

$Class* Enter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Enter$$Lambda$lambda$visitTopLevel$0::classInfo$.name)) {
			return Enter$$Lambda$lambda$visitTopLevel$0::load$(name, initialize);
		}
		if (name->equals(Enter$$Lambda$lambda$visitTopLevel$1$1::classInfo$.name)) {
			return Enter$$Lambda$lambda$visitTopLevel$1$1::load$(name, initialize);
		}
		if (name->equals(Enter$$Lambda$toString$2::classInfo$.name)) {
			return Enter$$Lambda$toString$2::load$(name, initialize);
		}
		if (name->equals(Enter$$Lambda$lambda$visitClassDef$2$3::classInfo$.name)) {
			return Enter$$Lambda$lambda$visitClassDef$2$3::load$(name, initialize);
		}
	}
	$loadClass(Enter, name, initialize, &_Enter_ClassInfo_, clinit$Enter, allocate$Enter);
	return class$;
}

$Class* Enter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com