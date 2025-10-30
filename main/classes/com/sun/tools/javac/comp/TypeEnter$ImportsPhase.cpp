#include <com/sun/tools/javac/comp/TypeEnter$ImportsPhase.h>

#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Scope$ImportFilter.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Todo.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$HierarchyPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/FatalError.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/BiConsumer.h>
#include <jcpp.h>

#undef CLASS
#undef DEPRECATION
#undef IMPORTS_PHASE
#undef PCK
#undef PREVIEW
#undef RECOVERABLE
#undef REMOVAL
#undef TOPLEVEL
#undef TYP

using $Lint$LintCategoryArray = $Array<::com::sun::tools::javac::code::Lint$LintCategory>;
using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ImportFilter = ::com::sun::tools::javac::code::Scope$ImportFilter;
using $Scope$NamedImportScope = ::com::sun::tools::javac::code::Scope$NamedImportScope;
using $Scope$StarImportScope = ::com::sun::tools::javac::code::Scope$StarImportScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Todo = ::com::sun::tools::javac::comp::Todo;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$AbstractHeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase;
using $TypeEnter$HierarchyPhase = ::com::sun::tools::javac::comp::TypeEnter$HierarchyPhase;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $FatalError = ::com::sun::tools::javac::util::FatalError;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $BiConsumer = ::java::util::function::BiConsumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TypeEnter$ImportsPhase$$Lambda$lambda$new$0 : public $BiConsumer {
	$class(TypeEnter$ImportsPhase$$Lambda$lambda$new$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(TypeEnter$ImportsPhase* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* imp, Object$* cf) override {
		$nc(inst$)->lambda$new$0($cast($JCTree$JCImport, imp), $cast($Symbol$CompletionFailure, cf));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$ImportsPhase$$Lambda$lambda$new$0>());
	}
	TypeEnter$ImportsPhase* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$ImportsPhase$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeEnter$ImportsPhase$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo TypeEnter$ImportsPhase$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$ImportsPhase;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$ImportsPhase$$Lambda$lambda$new$0::*)(TypeEnter$ImportsPhase*)>(&TypeEnter$ImportsPhase$$Lambda$lambda$new$0::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$ImportsPhase$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$ImportsPhase$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$ImportsPhase$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$ImportsPhase$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$ImportsPhase$$Lambda$lambda$new$0::class$ = nullptr;

class TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1 : public $Scope$ImportFilter {
	$class(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1, $NO_CLASS_INIT, $Scope$ImportFilter)
public:
	void init$(TypeEnter$ImportsPhase* inst, $Symbol$PackageSymbol* packge) {
		$set(this, inst$, inst);
		$set(this, packge, packge);
	}
	virtual bool accepts($Scope* origin, $Symbol* sym) override {
		 return $nc(inst$)->lambda$resolveImports$1(packge, origin, sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1>());
	}
	TypeEnter$ImportsPhase* inst$ = nullptr;
	$Symbol$PackageSymbol* packge = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1, inst$)},
	{"packge", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1, packge)},
	{}
};
$MethodInfo TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$ImportsPhase;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::*)(TypeEnter$ImportsPhase*,$Symbol$PackageSymbol*)>(&TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::init$))},
	{"accepts", "(Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1",
	"java.lang.Object",
	"com.sun.tools.javac.code.Scope$ImportFilter",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::class$ = nullptr;

class TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2 : public $Scope$ImportFilter {
	$class(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2, $NO_CLASS_INIT, $Scope$ImportFilter)
public:
	void init$(TypeEnter$ImportsPhase* inst, $Symbol$PackageSymbol* packge) {
		$set(this, inst$, inst);
		$set(this, packge, packge);
	}
	virtual bool accepts($Scope* origin, $Symbol* sym) override {
		 return $nc(inst$)->lambda$resolveImports$2(packge, origin, sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2>());
	}
	TypeEnter$ImportsPhase* inst$ = nullptr;
	$Symbol$PackageSymbol* packge = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2, inst$)},
	{"packge", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2, packge)},
	{}
};
$MethodInfo TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$ImportsPhase;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::*)(TypeEnter$ImportsPhase*,$Symbol$PackageSymbol*)>(&TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::init$))},
	{"accepts", "(Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2",
	"java.lang.Object",
	"com.sun.tools.javac.code.Scope$ImportFilter",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::class$ = nullptr;

$FieldInfo _TypeEnter$ImportsPhase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$ImportsPhase, this$0)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(TypeEnter$ImportsPhase, env)},
	{"staticImportFilter", "Lcom/sun/tools/javac/code/Scope$ImportFilter;", nullptr, 0, $field(TypeEnter$ImportsPhase, staticImportFilter)},
	{"typeImportFilter", "Lcom/sun/tools/javac/code/Scope$ImportFilter;", nullptr, 0, $field(TypeEnter$ImportsPhase, typeImportFilter)},
	{"cfHandler", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;>;", 0, $field(TypeEnter$ImportsPhase, cfHandler)},
	{}
};

$MethodInfo _TypeEnter$ImportsPhase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$ImportsPhase::*)($TypeEnter*)>(&TypeEnter$ImportsPhase::init$))},
	{"attribImportType", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Type;", 0, $method(static_cast<$Type*(TypeEnter$ImportsPhase::*)($JCTree*,$Env*)>(&TypeEnter$ImportsPhase::attribImportType))},
	{"checkClassPackageClash", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PRIVATE, $method(static_cast<void(TypeEnter$ImportsPhase::*)($JCTree$JCPackageDecl*)>(&TypeEnter$ImportsPhase::checkClassPackageClash))},
	{"doImport", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", nullptr, $PRIVATE, $method(static_cast<void(TypeEnter$ImportsPhase::*)($JCTree$JCImport*)>(&TypeEnter$ImportsPhase::doImport))},
	{"importAll", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(TypeEnter$ImportsPhase::*)($JCTree$JCImport*,$Symbol$TypeSymbol*,$Env*)>(&TypeEnter$ImportsPhase::importAll))},
	{"importNamed", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", $PRIVATE, $method(static_cast<void(TypeEnter$ImportsPhase::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*,$Env*,$JCTree$JCImport*)>(&TypeEnter$ImportsPhase::importNamed))},
	{"importNamedStatic", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(TypeEnter$ImportsPhase::*)($JCTree$JCImport*,$Symbol$TypeSymbol*,$Name*,$Env*)>(&TypeEnter$ImportsPhase::importNamedStatic))},
	{"importStaticAll", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(TypeEnter$ImportsPhase::*)($JCTree$JCImport*,$Symbol$TypeSymbol*,$Env*)>(&TypeEnter$ImportsPhase::importStaticAll))},
	{"lambda$new$0", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TypeEnter$ImportsPhase::*)($JCTree$JCImport*,$Symbol$CompletionFailure*)>(&TypeEnter$ImportsPhase::lambda$new$0))},
	{"lambda$resolveImports$1", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(TypeEnter$ImportsPhase::*)($Symbol$PackageSymbol*,$Scope*,$Symbol*)>(&TypeEnter$ImportsPhase::lambda$resolveImports$1))},
	{"lambda$resolveImports$2", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(TypeEnter$ImportsPhase::*)($Symbol$PackageSymbol*,$Scope*,$Symbol*)>(&TypeEnter$ImportsPhase::lambda$resolveImports$2))},
	{"resolveImports", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(TypeEnter$ImportsPhase::*)($JCTree$JCCompilationUnit*,$Env*)>(&TypeEnter$ImportsPhase::resolveImports))},
	{"runPhase", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{}
};

$InnerClassInfo _TypeEnter$ImportsPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$ImportsPhase", "com.sun.tools.javac.comp.TypeEnter", "ImportsPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$Phase", "com.sun.tools.javac.comp.TypeEnter", "Phase", $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$ImportsPhase_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$ImportsPhase",
	"com.sun.tools.javac.comp.TypeEnter$Phase",
	nullptr,
	_TypeEnter$ImportsPhase_FieldInfo_,
	_TypeEnter$ImportsPhase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$ImportsPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$ImportsPhase($Class* clazz) {
	return $of($alloc(TypeEnter$ImportsPhase));
}

void TypeEnter$ImportsPhase::init$($TypeEnter* this$0) {
	$set(this, this$0, this$0);
	$init($Dependencies$CompletionCause);
	$TypeEnter$Phase::init$(this$0, $Dependencies$CompletionCause::IMPORTS_PHASE, $$new($TypeEnter$HierarchyPhase, this$0));
	$set(this, cfHandler, static_cast<$BiConsumer*>($new(TypeEnter$ImportsPhase$$Lambda$lambda$new$0, this)));
}

void TypeEnter$ImportsPhase::runPhase($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	$var($Symbol$ClassSymbol, sym, $nc(tree)->sym);
	$init($Kinds$Kind);
	if ($nc($nc(sym)->owner)->kind == $Kinds$Kind::PCK) {
		$init($JCTree$Tag);
		resolveImports(env->toplevel, $(env->enclosing($JCTree$Tag::TOPLEVEL)));
		$nc(this->this$0->todo)->append(env);
	}
	if ($nc($nc(sym)->owner)->kind == $Kinds$Kind::TYP) {
		$nc(sym->owner)->complete();
	}
}

void TypeEnter$ImportsPhase::resolveImports($JCTree$JCCompilationUnit* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(tree)->starImportScope)->isFilled()) {
		return;
	}
	$var($Scope$ImportFilter, prevStaticImportFilter, this->staticImportFilter);
	$var($Scope$ImportFilter, prevTypeImportFilter, this->typeImportFilter);
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->this$0->deferredLintHandler)->immediate());
	$var($Lint, prevLint, $nc(this->this$0->chk)->setLint(this->this$0->lint));
	$var($Env, prevEnv, this->env);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, env, env);
			$var($Symbol$PackageSymbol, packge, $nc($nc(env)->toplevel)->packge);
			$set(this, staticImportFilter, static_cast<$Scope$ImportFilter*>($new(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1, this, packge)));
			$set(this, typeImportFilter, static_cast<$Scope$ImportFilter*>($new(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2, this, packge)));
			$var($Symbol$PackageSymbol, javaLang, $nc(this->this$0->syms)->enterPackage($nc(this->this$0->syms)->java_base, $nc(this->this$0->names)->java_lang));
			bool var$1 = $nc($($nc(javaLang)->members()))->isEmpty();
			if (var$1 && !javaLang->exists()) {
				$init($CompilerProperties$Fragments);
				$throwNew($FatalError, $($nc(this->this$0->diags)->fragment($CompilerProperties$Fragments::FatalErrNoJavaLang)));
			}
			importAll($($nc($($nc(this->this$0->make)->at($($nc(tree)->pos()))))->Import($($nc(this->this$0->make)->QualIdent(javaLang)), false)), javaLang, env);
			$var($JCTree$JCModuleDecl, decl, $nc(tree)->getModuleDecl());
			if ($cast($JCTree$JCPackageDecl, tree->getPackage()) != nullptr && decl == nullptr) {
				checkClassPackageClash($($cast($JCTree$JCPackageDecl, tree->getPackage())));
			}
			{
				$var($Iterator, i$, $nc($($cast($List, tree->getImports())))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCImport, imp, $cast($JCTree$JCImport, i$->next()));
					{
						doImport(imp);
					}
				}
			}
			if (decl != nullptr) {
				this->this$0->markDeprecated(decl->sym, $nc(decl->mods)->annotations, env);
				$nc(this->this$0->annotate)->annotateLater($nc(decl->mods)->annotations, env, $nc(env->toplevel)->modle, nullptr);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$set(this, env, prevEnv);
			$nc(this->this$0->chk)->setLint(prevLint);
			$nc(this->this$0->deferredLintHandler)->setPos(prevLintPos);
			$set(this, staticImportFilter, prevStaticImportFilter);
			$set(this, typeImportFilter, prevTypeImportFilter);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TypeEnter$ImportsPhase::checkClassPackageClash($JCTree$JCPackageDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->pid != nullptr) {
		$var($Symbol, p, $nc($nc(this->env)->toplevel)->packge);
		while (!$equals($nc(p)->owner, $nc(this->this$0->syms)->rootPackage)) {
			$nc(p->owner)->complete();
			$var($Symbol$PackageSymbol, pack, $nc(this->this$0->syms)->lookupPackage($nc($nc(this->env)->toplevel)->modle, $($nc(p->owner)->getQualifiedName())));
			if ($nc(this->this$0->syms)->getClass($nc(pack)->modle, $(p->getQualifiedName())) != nullptr) {
				$nc(this->this$0->log)->error(tree->pos$, $($CompilerProperties$Errors::PkgClashesWithClassOfSameName(p)));
			}
			$assign(p, p->owner);
		}
	}
	$nc(this->this$0->annotate)->annotateLater($nc(tree)->annotations, this->env, $nc($nc(this->env)->toplevel)->packge, nullptr);
}

void TypeEnter$ImportsPhase::doImport($JCTree$JCImport* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCFieldAccess, imp, $cast($JCTree$JCFieldAccess, $nc(tree)->qualid));
	$var($Name, name, $TreeInfo::name(imp));
	$var($Env, localEnv, $nc(this->env)->dup(tree));
	$var($Symbol$TypeSymbol, p, $nc($($nc(this->this$0->attr)->attribImportQualifier(tree, localEnv)))->tsym);
	if (name == $nc(this->this$0->names)->asterisk) {
		$nc(this->this$0->chk)->checkCanonical($nc(imp)->selected);
		if (tree->staticImport) {
			importStaticAll(tree, p, this->env);
		} else {
			importAll(tree, p, this->env);
		}
	} else if (tree->staticImport) {
		importNamedStatic(tree, p, name, localEnv);
		$nc(this->this$0->chk)->checkCanonical($nc(imp)->selected);
	} else {
		$var($Type, importedType, attribImportType(imp, localEnv));
		$var($Type, originalType, $nc(importedType)->getOriginalType());
		$init($TypeTag);
		$var($Symbol$TypeSymbol, c, $nc(originalType)->hasTag($TypeTag::CLASS) ? $nc(originalType)->tsym : importedType->tsym);
		$nc(this->this$0->chk)->checkCanonical(imp);
		importNamed($(tree->pos()), c, this->env, tree);
	}
}

$Type* TypeEnter$ImportsPhase::attribImportType($JCTree* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(this->this$0->completionEnabled);
	$init($Lint$LintCategory);
	$var($Lint, prevLint, $nc(this->this$0->chk)->setLint(this->this$0->allowDeprecationOnImport ? this->this$0->lint : $($nc(this->this$0->lint)->suppress($$new($Lint$LintCategoryArray, {
		$Lint$LintCategory::DEPRECATION,
		$Lint$LintCategory::REMOVAL,
		$Lint$LintCategory::PREVIEW
	})))));
	{
		$var($Throwable, var$0, nullptr);
		$var($Type, var$2, nullptr);
		bool return$1 = false;
		try {
			this->this$0->completionEnabled = false;
			$assign(var$2, $nc(this->this$0->attr)->attribType(tree, env));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			this->this$0->completionEnabled = true;
			$nc(this->this$0->chk)->setLint(prevLint);
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

void TypeEnter$ImportsPhase::importAll($JCTree$JCImport* imp, $Symbol$TypeSymbol* tsym, $Env* env) {
	$nc($nc($nc(env)->toplevel)->starImportScope)->importAll(this->this$0->types, $($nc(tsym)->members()), this->typeImportFilter, imp, this->cfHandler);
}

void TypeEnter$ImportsPhase::importStaticAll($JCTree$JCImport* imp, $Symbol$TypeSymbol* tsym, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Scope$StarImportScope, toScope, $nc($nc(env)->toplevel)->starImportScope);
	$var($Symbol$TypeSymbol, origin, tsym);
	$nc(toScope)->importAll(this->this$0->types, $($nc(origin)->members()), this->staticImportFilter, imp, this->cfHandler);
}

void TypeEnter$ImportsPhase::importNamedStatic($JCTree$JCImport* imp, $Symbol$TypeSymbol* tsym, $Name* name, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(tsym)->kind != $Kinds$Kind::TYP) {
		$init($JCDiagnostic$DiagnosticFlag);
		$init($CompilerProperties$Errors);
		$nc(this->this$0->log)->error($JCDiagnostic$DiagnosticFlag::RECOVERABLE, $($nc(imp)->pos()), $CompilerProperties$Errors::StaticImpOnlyClassesAndInterfaces);
		return;
	}
	$var($Scope$NamedImportScope, toScope, $nc($nc(env)->toplevel)->namedImportScope);
	$var($Scope, originMembers, $nc(tsym)->members());
	$set($nc(imp), importScope, $nc(toScope)->importByName(this->this$0->types, originMembers, name, this->staticImportFilter, imp, this->cfHandler));
}

void TypeEnter$ImportsPhase::importNamed($JCDiagnostic$DiagnosticPosition* pos, $Symbol* tsym, $Env* env, $JCTree$JCImport* imp) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(tsym)->kind == $Kinds$Kind::TYP) {
		$var($Scope, var$0, static_cast<$Scope*>($nc(tsym->owner)->members()));
		$set($nc(imp), importScope, $nc($nc($nc(env)->toplevel)->namedImportScope)->importType(var$0, $($nc(tsym->owner)->members()), tsym));
	}
}

bool TypeEnter$ImportsPhase::lambda$resolveImports$2($Symbol$PackageSymbol* packge, $Scope* origin, $Symbol* sym) {
	$init($Kinds$Kind);
	return $nc(sym)->kind == $Kinds$Kind::TYP && $nc(this->this$0->chk)->importAccessible(sym, packge);
}

bool TypeEnter$ImportsPhase::lambda$resolveImports$1($Symbol$PackageSymbol* packge, $Scope* origin, $Symbol* sym) {
	bool var$1 = $nc(sym)->isStatic();
	bool var$0 = var$1 && $nc(this->this$0->chk)->importAccessible(sym, packge);
	return var$0 && sym->isMemberOf($cast($Symbol$TypeSymbol, $nc(origin)->owner), this->this$0->types);
}

void TypeEnter$ImportsPhase::lambda$new$0($JCTree$JCImport* imp, $Symbol$CompletionFailure* cf) {
	$nc(this->this$0->chk)->completionError($($nc(imp)->pos()), cf);
}

TypeEnter$ImportsPhase::TypeEnter$ImportsPhase() {
}

$Class* TypeEnter$ImportsPhase::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TypeEnter$ImportsPhase$$Lambda$lambda$new$0::classInfo$.name)) {
			return TypeEnter$ImportsPhase$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::classInfo$.name)) {
			return TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$1$1::load$(name, initialize);
		}
		if (name->equals(TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::classInfo$.name)) {
			return TypeEnter$ImportsPhase$$Lambda$lambda$resolveImports$2$2::load$(name, initialize);
		}
	}
	$loadClass(TypeEnter$ImportsPhase, name, initialize, &_TypeEnter$ImportsPhase_ClassInfo_, allocate$TypeEnter$ImportsPhase);
	return class$;
}

$Class* TypeEnter$ImportsPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com