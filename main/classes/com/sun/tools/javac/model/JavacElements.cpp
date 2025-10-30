#include <com/sun/tools/javac/model/JavacElements.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Directive$ExportsFlag.h>
#include <com/sun/tools/javac/code/Directive$OpensDirective.h>
#include <com/sun/tools/javac/code/Directive$OpensFlag.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/model/FilteredMemberList.h>
#include <com/sun/tools/javac/model/JavacElements$1.h>
#include <com/sun/tools/javac/model/JavacElements$1TS.h>
#include <com/sun/tools/javac/model/JavacElements$1Vis.h>
#include <com/sun/tools/javac/model/JavacElements$2Vis.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>
#include <com/sun/tools/javac/tree/DocCommentTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Constants.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/AnnotatedConstruct.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/lang/model/util/ElementFilter.h>
#include <javax/lang/model/util/Elements$Origin.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

#undef AUTOMATIC_MODULE
#undef CLASS
#undef CONSTRUCTOR
#undef ERR
#undef EXPLICIT
#undef GENERATEDCONSTR
#undef INSTANCE_INIT
#undef INTERFACE
#undef MANDATED
#undef MDL
#undef METHOD
#undef MODULE
#undef MODULES
#undef MTH
#undef NON_RECURSIVE
#undef STATIC_INIT
#undef SYNTHETIC

using $SetArray = $Array<::java::util::Set>;
using $ElementArray = $Array<::javax::lang::model::element::Element>;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Directive$ExportsFlag = ::com::sun::tools::javac::code::Directive$ExportsFlag;
using $Directive$OpensDirective = ::com::sun::tools::javac::code::Directive$OpensDirective;
using $Directive$OpensFlag = ::com::sun::tools::javac::code::Directive$OpensFlag;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $FilteredMemberList = ::com::sun::tools::javac::model::FilteredMemberList;
using $JavacElements$1 = ::com::sun::tools::javac::model::JavacElements$1;
using $JavacElements$1TS = ::com::sun::tools::javac::model::JavacElements$1TS;
using $JavacElements$1Vis = ::com::sun::tools::javac::model::JavacElements$1Vis;
using $JavacElements$2Vis = ::com::sun::tools::javac::model::JavacElements$2Vis;
using $PrintingProcessor$PrintingElementVisitor = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor;
using $CompilerProperties$Notes = ::com::sun::tools::javac::resources::CompilerProperties$Notes;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Constants = ::com::sun::tools::javac::util::Constants;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $AnnotatedConstruct = ::javax::lang::model::AnnotatedConstruct;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;
using $1Name = ::javax::lang::model::element::Name;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $AbstractElementVisitor6 = ::javax::lang::model::util::AbstractElementVisitor6;
using $ElementFilter = ::javax::lang::model::util::ElementFilter;
using $Elements = ::javax::lang::model::util::Elements;
using $Elements$Origin = ::javax::lang::model::util::Elements$Origin;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class JavacElements$$Lambda$lambda$unboundNameToSymbol$2 : public $Function {
	$class(JavacElements$$Lambda$lambda$unboundNameToSymbol$2, $NO_CLASS_INIT, $Function)
public:
	void init$(JavacElements* inst, $String* nameStr, $Class* clazz, $String* methodName) {
		$set(this, inst$, inst);
		$set(this, nameStr, nameStr);
		this->clazz = clazz;
		$set(this, methodName, methodName);
	}
	virtual $Object* apply(Object$* p) override {
		 return $of($nc(inst$)->lambda$unboundNameToSymbol$2(nameStr, clazz, methodName, $cast($Pair, p)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacElements$$Lambda$lambda$unboundNameToSymbol$2>());
	}
	JavacElements* inst$ = nullptr;
	$String* nameStr = nullptr;
	$Class* clazz = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacElements$$Lambda$lambda$unboundNameToSymbol$2::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacElements$$Lambda$lambda$unboundNameToSymbol$2, inst$)},
	{"nameStr", "Ljava/lang/String;", nullptr, $PUBLIC, $field(JavacElements$$Lambda$lambda$unboundNameToSymbol$2, nameStr)},
	{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(JavacElements$$Lambda$lambda$unboundNameToSymbol$2, clazz)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(JavacElements$$Lambda$lambda$unboundNameToSymbol$2, methodName)},
	{}
};
$MethodInfo JavacElements$$Lambda$lambda$unboundNameToSymbol$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/model/JavacElements;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacElements$$Lambda$lambda$unboundNameToSymbol$2::*)(JavacElements*,$String*,$Class*,$String*)>(&JavacElements$$Lambda$lambda$unboundNameToSymbol$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacElements$$Lambda$lambda$unboundNameToSymbol$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.model.JavacElements$$Lambda$lambda$unboundNameToSymbol$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JavacElements$$Lambda$lambda$unboundNameToSymbol$2::load$($String* name, bool initialize) {
	$loadClass(JavacElements$$Lambda$lambda$unboundNameToSymbol$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacElements$$Lambda$lambda$unboundNameToSymbol$2::class$ = nullptr;

class JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1 : public $Function {
	$class(JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(JavacElements::lambda$unboundNameToSymbol$0($cast($Symbol, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1::*)()>(&JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.model.JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1::load$($String* name, bool initialize) {
	$loadClass(JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1::class$ = nullptr;

class JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2 : public $Function {
	$class(JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* m) override {
		 return $of(JavacElements::lambda$unboundNameToSymbol$1($cast($Symbol$ModuleSymbol, m)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2::*)()>(&JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.model.JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2::load$($String* name, bool initialize) {
	$loadClass(JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2::class$ = nullptr;

$FieldInfo _JavacElements_FieldInfo_[] = {
	{"javaCompiler", "Lcom/sun/tools/javac/main/JavaCompiler;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, javaCompiler)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, syms)},
	{"modules", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, modules)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, names)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, types)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, enter)},
	{"resolve", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, resolve)},
	{"javacTaskImpl", "Lcom/sun/tools/javac/api/JavacTaskImpl;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, javacTaskImpl)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(JavacElements, log)},
	{"allowModules", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacElements, allowModules)},
	{"alreadyWarnedDuplicates", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JavacElements, alreadyWarnedDuplicates)},
	{"resultCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Pair<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/Optional<Lcom/sun/tools/javac/code/Symbol;>;>;", $PRIVATE | $FINAL, $field(JavacElements, resultCache)},
	{}
};

$MethodInfo _JavacElements_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(JavacElements::*)($Context*)>(&JavacElements::init$))},
	{"addMembers", "(Lcom/sun/tools/javac/code/Scope$WriteableScope;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacElements::*)($Scope$WriteableScope*,$Type*)>(&JavacElements::addMembers))},
	{"cast", "(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/Object;)TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Class*,Object$*)>(&JavacElements::cast))},
	{"containsAnnoOfType", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;Lcom/sun/tools/javac/code/Type;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($List*,$Type*)>(&JavacElements::containsAnnoOfType))},
	{"doGetElement", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/Class;)Lcom/sun/tools/javac/code/Symbol;", "<S:Lcom/sun/tools/javac/code/Symbol;>(Ljavax/lang/model/element/ModuleElement;Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/Class<TS;>;)TS;", $PRIVATE, $method(static_cast<$Symbol*(JavacElements::*)($ModuleElement*,$String*,$CharSequence*,$Class*)>(&JavacElements::doGetElement))},
	{"doGetPackageElement", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/CharSequence;)Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$PackageSymbol*(JavacElements::*)($ModuleElement*,$CharSequence*)>(&JavacElements::doGetPackageElement))},
	{"doGetTypeElement", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/CharSequence;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$ClassSymbol*(JavacElements::*)($ModuleElement*,$CharSequence*)>(&JavacElements::doGetTypeElement))},
	{"ensureEntered", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacElements::*)($String*)>(&JavacElements::ensureEntered))},
	{"getAllAnnotationMirrors", "(Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/util/List;", "(Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PUBLIC},
	{"getAllMembers", "(Ljavax/lang/model/element/TypeElement;)Lcom/sun/tools/javac/model/FilteredMemberList;", nullptr, $PUBLIC},
	{"getAllModuleElements", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljavax/lang/model/element/ModuleElement;>;", $PUBLIC},
	{"getBinaryName", "(Ljavax/lang/model/element/TypeElement;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getConstantExpression", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocComment", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getElementValuesWithDefaults", "(Ljavax/lang/model/element/AnnotationMirror;)Ljava/util/Map;", "(Ljavax/lang/model/element/AnnotationMirror;)Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;", $PUBLIC},
	{"getEnterEnv", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $method(static_cast<$Env*(JavacElements::*)($Symbol*)>(&JavacElements::getEnterEnv))},
	{"getModuleElement", "(Ljava/lang/CharSequence;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"getModuleOf", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/ModuleElement;", nullptr, $PUBLIC},
	{"getName", "(Ljava/lang/CharSequence;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getOrigin", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC},
	{"getOrigin", "(Ljavax/lang/model/AnnotatedConstruct;Ljavax/lang/model/element/AnnotationMirror;)Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC},
	{"getOrigin", "(Ljavax/lang/model/element/ModuleElement;Ljavax/lang/model/element/ModuleElement$Directive;)Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC},
	{"getPackageElement", "(Ljava/lang/CharSequence;)Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"getPackageElement", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/CharSequence;)Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"getPackageOf", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/PackageElement;", nullptr, $PUBLIC},
	{"getTree", "(Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getTreeAndTopLevel", "(Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/util/Pair;", "(Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", $PRIVATE, $method(static_cast<$Pair*(JavacElements::*)($Element*)>(&JavacElements::getTreeAndTopLevel))},
	{"getTreeAndTopLevel", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)Lcom/sun/tools/javac/util/Pair;", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;", $PUBLIC},
	{"getTypeElement", "(Ljava/lang/CharSequence;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"getTypeElement", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/CharSequence;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"hides", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/Element;)Z", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/model/JavacElements;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacElements*(*)($Context*)>(&JavacElements::instance))},
	{"isAutomaticModule", "(Ljavax/lang/model/element/ModuleElement;)Z", nullptr, $PUBLIC},
	{"isDeprecated", "(Ljavax/lang/model/element/Element;)Z", nullptr, $PUBLIC},
	{"isFunctionalInterface", "(Ljavax/lang/model/element/TypeElement;)Z", nullptr, $PUBLIC},
	{"isInherited", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacElements::*)($Type*)>(&JavacElements::isInherited))},
	{"lambda$unboundNameToSymbol$0", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$ModuleSymbol*(*)($Symbol*)>(&JavacElements::lambda$unboundNameToSymbol$0))},
	{"lambda$unboundNameToSymbol$1", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Symbol$ModuleSymbol*)>(&JavacElements::lambda$unboundNameToSymbol$1))},
	{"lambda$unboundNameToSymbol$2", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Lcom/sun/tools/javac/util/Pair;)Ljava/util/Optional;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Optional*(JavacElements::*)($String*,$Class*,$String*,$Pair*)>(&JavacElements::lambda$unboundNameToSymbol$2))},
	{"matchAnnoToTree", "(Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/Element;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $method(static_cast<$JCTree*(JavacElements::*)($AnnotationMirror*,$Element*,$JCTree*)>(&JavacElements::matchAnnoToTree))},
	{"matchAnnoToTree", "(Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/tree/JCTree;", $PRIVATE, $method(static_cast<$JCTree*(JavacElements::*)($Attribute$Compound*,$List*,$List*)>(&JavacElements::matchAnnoToTree))},
	{"matchAttributeToTree", "(Lcom/sun/tools/javac/code/Attribute;Lcom/sun/tools/javac/code/Attribute;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $method(static_cast<$JCTree*(JavacElements::*)($Attribute*,$Attribute*,$JCTree*)>(&JavacElements::matchAttributeToTree))},
	{"nameToSymbol", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Ljava/lang/Class;)Lcom/sun/tools/javac/code/Symbol;", "<S:Lcom/sun/tools/javac/code/Symbol;>(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Ljava/lang/Class<TS;>;)TS;", $PRIVATE, $method(static_cast<$Symbol*(JavacElements::*)($Symbol$ModuleSymbol*,$String*,$Class*)>(&JavacElements::nameToSymbol))},
	{"newRound", "()V", nullptr, $PUBLIC},
	{"overrides", "(Ljavax/lang/model/element/ExecutableElement;Ljavax/lang/model/element/ExecutableElement;Ljavax/lang/model/element/TypeElement;)Z", nullptr, $PUBLIC},
	{"printElements", "(Ljava/io/Writer;[Ljavax/lang/model/element/Element;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"scanForAssign", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(JavacElements::*)($Symbol$MethodSymbol*,$JCTree*)>(&JavacElements::scanForAssign))},
	{"unboundNameToSymbol", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Lcom/sun/tools/javac/code/Symbol;", "<S:Lcom/sun/tools/javac/code/Symbol;>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class<TS;>;)TS;", $PRIVATE, $method(static_cast<$Symbol*(JavacElements::*)($String*,$String*,$Class*)>(&JavacElements::unboundNameToSymbol))},
	{}
};

$InnerClassInfo _JavacElements_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.JavacElements$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.model.JavacElements$1TS", nullptr, "TS", 0},
	{"com.sun.tools.javac.model.JavacElements$2Vis", nullptr, "Vis", 0},
	{"com.sun.tools.javac.model.JavacElements$1Vis", nullptr, "Vis", 0},
	{}
};

$ClassInfo _JavacElements_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.model.JavacElements",
	"java.lang.Object",
	"javax.lang.model.util.Elements",
	_JavacElements_FieldInfo_,
	_JavacElements_MethodInfo_,
	nullptr,
	nullptr,
	_JavacElements_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.JavacElements$1,com.sun.tools.javac.model.JavacElements$1TS,com.sun.tools.javac.model.JavacElements$2Vis,com.sun.tools.javac.model.JavacElements$1Vis"
};

$Object* allocate$JavacElements($Class* clazz) {
	return $of($alloc(JavacElements));
}

JavacElements* JavacElements::instance($Context* context) {
	$init(JavacElements);
	$var(JavacElements, instance, $cast(JavacElements, $nc(context)->get(JavacElements::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(JavacElements, context));
	}
	return instance;
}

void JavacElements::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, alreadyWarnedDuplicates, $new($HashSet));
	$set(this, resultCache, $new($HashMap));
	$nc(context)->put(JavacElements::class$, $of(this));
	$set(this, javaCompiler, $JavaCompiler::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, modules, $Modules::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, resolve, $Resolve::instance(context));
	$load($JavacTask);
	$var($JavacTask, t, $cast($JavacTask, context->get($JavacTask::class$)));
	$var($JavacTaskImpl, taskImpl, nullptr);
	bool var$0 = $instanceOf($JavacTaskImpl, t);
	if (var$0) {
		$assign(taskImpl, $cast($JavacTaskImpl, t));
		var$0 = true;
	}
	$set(this, javacTaskImpl, var$0 ? taskImpl : ($JavacTaskImpl*)nullptr);
	$set(this, log, $Log::instance(context));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowModules = $Source$Feature::MODULES->allowedInSource(source);
}

$Set* JavacElements::getAllModuleElements() {
	if (this->allowModules) {
		return $Collections::unmodifiableSet($($nc(this->modules)->allModules()));
	} else {
		return $Collections::emptySet();
	}
}

$ModuleElement* JavacElements::getModuleElement($CharSequence* name) {
	$useLocalCurrentObjectStackCache();
	ensureEntered("getModuleElement"_s);
	if ($nc(this->modules)->getDefaultModule() == $nc(this->syms)->noModule) {
		return nullptr;
	}
	$var($String, strName, $nc(name)->toString());
	if ($nc(strName)->equals(""_s)) {
		return $as($ModuleElement, $nc(this->syms)->unnamedModule);
	}
	return $as($ModuleElement, $nc(this->modules)->getObservableModule($($nc(this->names)->fromString(strName))));
}

$PackageElement* JavacElements::getPackageElement($CharSequence* name) {
	return $as($PackageElement, doGetPackageElement(nullptr, name));
}

$PackageElement* JavacElements::getPackageElement($ModuleElement* module, $CharSequence* name) {
	$nc($of(module))->getClass();
	return $as($PackageElement, doGetPackageElement(module, name));
}

$Symbol$PackageSymbol* JavacElements::doGetPackageElement($ModuleElement* module, $CharSequence* name) {
	ensureEntered("getPackageElement"_s);
	$load($Symbol$PackageSymbol);
	return $cast($Symbol$PackageSymbol, doGetElement(module, "getPackageElement"_s, name, $Symbol$PackageSymbol::class$));
}

$TypeElement* JavacElements::getTypeElement($CharSequence* name) {
	return $as($TypeElement, doGetTypeElement(nullptr, name));
}

$TypeElement* JavacElements::getTypeElement($ModuleElement* module, $CharSequence* name) {
	$nc($of(module))->getClass();
	return $as($TypeElement, doGetTypeElement(module, name));
}

$Symbol$ClassSymbol* JavacElements::doGetTypeElement($ModuleElement* module, $CharSequence* name) {
	ensureEntered("getTypeElement"_s);
	$load($Symbol$ClassSymbol);
	return $cast($Symbol$ClassSymbol, doGetElement(module, "getTypeElement"_s, name, $Symbol$ClassSymbol::class$));
}

$Symbol* JavacElements::doGetElement($ModuleElement* module, $String* methodName, $CharSequence* name, $Class* clazz) {
	$var($String, strName, $nc(name)->toString());
	bool var$0 = !$SourceVersion::isName(strName);
	$load($Symbol$ClassSymbol);
	if (var$0 && (!$nc(strName)->isEmpty() || clazz == $Symbol$ClassSymbol::class$)) {
		return nullptr;
	}
	if (module == nullptr) {
		return unboundNameToSymbol(methodName, strName, clazz);
	} else {
		return nameToSymbol($cast($Symbol$ModuleSymbol, module), strName, clazz);
	}
}

$Symbol* JavacElements::unboundNameToSymbol($String* methodName, $String* nameStr, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->modules)->getDefaultModule() == $nc(this->syms)->noModule) {
		return nameToSymbol($nc(this->syms)->noModule, nameStr, clazz);
	}
	$var($Object, var$0, $of($Pair::of(methodName, nameStr)));
	return $cast($Symbol, $nc(($cast($Optional, $($nc(this->resultCache)->computeIfAbsent(var$0, static_cast<$Function*>($$new(JavacElements$$Lambda$lambda$unboundNameToSymbol$2, this, nameStr, clazz, methodName)))))))->orElse(nullptr));
}

$Symbol* JavacElements::nameToSymbol($Symbol$ModuleSymbol* module, $String* nameStr, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, $nc(this->names)->fromString(nameStr));
	$load($Symbol$ClassSymbol);
	$var($Symbol, sym, (clazz == $Symbol$ClassSymbol::class$) ? static_cast<$Symbol*>($nc(this->syms)->getClass(module, name)) : static_cast<$Symbol*>($nc(this->syms)->lookupPackage(module, name)));
	try {
		if (sym == nullptr) {
			$assign(sym, $nc(this->javaCompiler)->resolveIdent(module, nameStr));
		}
		if ($nc(clazz)->isInstance(sym)) {
			$nc(sym)->complete();
			$init($Kinds$Kind);
			bool var$0 = sym->kind != $Kinds$Kind::ERR && sym->exists();
			if (var$0 && $nc($of(name))->equals($(sym->getQualifiedName()))) {
				return $cast($Symbol, clazz->cast(sym));
			}
		}
		return nullptr;
	} catch ($Symbol$CompletionFailure& cf) {
		$nc(cf->dcfh)->handleAPICompletionFailure(cf);
		return nullptr;
	}
	$shouldNotReachHere();
}

$JCTree* JavacElements::matchAnnoToTree($AnnotationMirror* findme, $Element* e, $JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol);
	$var($Symbol, sym, $cast($Symbol, cast($Symbol::class$, e)));
	{
	}
	$var($JavacElements$1Vis, vis, $new($JavacElements$1Vis, this));
	$nc(tree)->accept(vis);
	if (vis->result == nullptr) {
		return nullptr;
	}
	$var($List, annos, $cast($List, $nc(sym)->getAnnotationMirrors()));
	$load($Attribute$Compound);
	return matchAnnoToTree($cast($Attribute$Compound, $(cast($Attribute$Compound::class$, findme))), annos, vis->result);
}

$JCTree* JavacElements::matchAnnoToTree($Attribute$Compound* findme, $List* annos, $List* trees) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(annos)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, anno, $cast($Attribute$Compound, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(trees)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCTree$JCAnnotation, tree, $cast($JCTree$JCAnnotation, i$->next()));
						{
							if ($nc($nc(tree)->type)->tsym != $nc($nc(anno)->type)->tsym) {
								continue;
							}
							$var($JCTree, match, matchAttributeToTree(findme, anno, tree));
							if (match != nullptr) {
								return match;
							}
						}
					}
				}
			}
		}
	}
	return nullptr;
}

$JCTree* JavacElements::matchAttributeToTree($Attribute* findme, $Attribute* attr, $JCTree* tree) {
	if (attr == findme) {
		return tree;
	}
	{
	}
	$var($JavacElements$2Vis, vis, $new($JavacElements$2Vis, this, tree, findme));
	$nc(attr)->accept(vis);
	return vis->result;
}

$JCTree$JCExpression* JavacElements::scanForAssign($Symbol$MethodSymbol* sym, $JCTree* tree) {
	{
	}
	$var($JavacElements$1TS, scanner, $new($JavacElements$1TS, this, tree, sym));
	$nc(tree)->accept(scanner);
	return scanner->result;
}

$JCTree* JavacElements::getTree($Element* e) {
	$var($Pair, treeTop, getTreeAndTopLevel(e));
	return (treeTop != nullptr) ? $cast($JCTree, $nc(treeTop)->fst) : ($JCTree*)nullptr;
}

$String* JavacElements::getDocComment($Element* e) {
	$useLocalCurrentObjectStackCache();
	$var($Pair, treeTop, getTreeAndTopLevel(e));
	if (treeTop == nullptr) {
		return nullptr;
	}
	$var($JCTree, tree, $cast($JCTree, $nc(treeTop)->fst));
	$var($JCTree$JCCompilationUnit, toplevel, $cast($JCTree$JCCompilationUnit, treeTop->snd));
	if ($nc(toplevel)->docComments == nullptr) {
		return nullptr;
	}
	return $nc($nc(toplevel)->docComments)->getCommentText(tree);
}

$PackageElement* JavacElements::getPackageOf($Element* e) {
	$init($ElementKind);
	if ($nc(e)->getKind() == $ElementKind::MODULE) {
		return nullptr;
	} else {
		$load($Symbol);
		return $as($PackageElement, $nc(($cast($Symbol, $(cast($Symbol::class$, e)))))->packge());
	}
}

$ModuleElement* JavacElements::getModuleOf($Element* e) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol);
	$var($Symbol, sym, $cast($Symbol, cast($Symbol::class$, e)));
	if ($nc(this->modules)->getDefaultModule() == $nc(this->syms)->noModule) {
		return nullptr;
	}
	$init($Kinds$Kind);
	return ($nc(sym)->kind == $Kinds$Kind::MDL) ? ($cast($ModuleElement, e)) : $as($ModuleElement, $nc($($nc(sym)->packge()))->modle);
}

bool JavacElements::isDeprecated($Element* e) {
	$load($Symbol);
	$var($Symbol, sym, $cast($Symbol, cast($Symbol::class$, e)));
	$nc(sym)->apiComplete();
	return sym->isDeprecated();
}

$Elements$Origin* JavacElements::getOrigin($Element* e) {
	$load($Symbol);
	$var($Symbol, sym, $cast($Symbol, cast($Symbol::class$, e)));
	if (((int64_t)($nc(sym)->flags() & (uint64_t)$Flags::GENERATEDCONSTR)) != 0) {
		$init($Elements$Origin);
		return $Elements$Origin::MANDATED;
	}
	if (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)$Flags::MANDATED)) != 0) {
		$init($Elements$Origin);
		return $Elements$Origin::MANDATED;
	}
	$init($Elements$Origin);
	return $Elements$Origin::EXPLICIT;
}

$Elements$Origin* JavacElements::getOrigin($AnnotatedConstruct* c, $AnnotationMirror* a) {
	$load($Attribute$Compound);
	$var($Attribute$Compound, ac, $cast($Attribute$Compound, cast($Attribute$Compound::class$, a)));
	if ($nc(ac)->isSynthesized()) {
		$init($Elements$Origin);
		return $Elements$Origin::MANDATED;
	}
	$init($Elements$Origin);
	return $Elements$Origin::EXPLICIT;
}

$Elements$Origin* JavacElements::getOrigin($ModuleElement* m, $ModuleElement$Directive* directive) {
	$useLocalCurrentObjectStackCache();
	$init($JavacElements$1);
	{
		$var($Directive$RequiresDirective, rd, nullptr)
		$var($Directive$ExportsDirective, ed, nullptr)
		$var($Directive$OpensDirective, od, nullptr)
		switch ($nc($JavacElements$1::$SwitchMap$javax$lang$model$element$ModuleElement$DirectiveKind)->get($nc(($($nc(directive)->getKind())))->ordinal())) {
		case 1:
			{
				$load($Directive$RequiresDirective);
				$assign(rd, $cast($Directive$RequiresDirective, cast($Directive$RequiresDirective::class$, directive)));
				$init($Directive$RequiresFlag);
				if ($nc($nc(rd)->flags)->contains($Directive$RequiresFlag::MANDATED)) {
					$init($Elements$Origin);
					return $Elements$Origin::MANDATED;
				}
				$init($Directive$RequiresFlag);
				if ($nc($nc(rd)->flags)->contains($Directive$RequiresFlag::SYNTHETIC)) {
					$init($Elements$Origin);
					return $Elements$Origin::SYNTHETIC;
				}
				$init($Elements$Origin);
				return $Elements$Origin::EXPLICIT;
			}
		case 2:
			{
				$load($Directive$ExportsDirective);
				$assign(ed, $cast($Directive$ExportsDirective, cast($Directive$ExportsDirective::class$, directive)));
				$init($Directive$ExportsFlag);
				if ($nc($nc(ed)->flags)->contains($Directive$ExportsFlag::MANDATED)) {
					$init($Elements$Origin);
					return $Elements$Origin::MANDATED;
				}
				$init($Directive$ExportsFlag);
				if ($nc($nc(ed)->flags)->contains($Directive$ExportsFlag::SYNTHETIC)) {
					$init($Elements$Origin);
					return $Elements$Origin::SYNTHETIC;
				}
				$init($Elements$Origin);
				return $Elements$Origin::EXPLICIT;
			}
		case 3:
			{
				$load($Directive$OpensDirective);
				$assign(od, $cast($Directive$OpensDirective, cast($Directive$OpensDirective::class$, directive)));
				$init($Directive$OpensFlag);
				if ($nc($nc(od)->flags)->contains($Directive$OpensFlag::MANDATED)) {
					$init($Elements$Origin);
					return $Elements$Origin::MANDATED;
				}
				$init($Directive$OpensFlag);
				if ($nc($nc(od)->flags)->contains($Directive$OpensFlag::SYNTHETIC)) {
					$init($Elements$Origin);
					return $Elements$Origin::SYNTHETIC;
				}
				$init($Elements$Origin);
				return $Elements$Origin::EXPLICIT;
			}
		}
	}
	$init($Elements$Origin);
	return $Elements$Origin::EXPLICIT;
}

$1Name* JavacElements::getBinaryName($TypeElement* type) {
	$load($Symbol$TypeSymbol);
	return $nc(($cast($Symbol$TypeSymbol, $(cast($Symbol$TypeSymbol::class$, type)))))->flatName();
}

$Map* JavacElements::getElementValuesWithDefaults($AnnotationMirror* a) {
	$useLocalCurrentObjectStackCache();
	$load($Attribute$Compound);
	$var($Attribute$Compound, anno, $cast($Attribute$Compound, cast($Attribute$Compound::class$, a)));
	$var($DeclaredType, annotype, $nc(a)->getAnnotationType());
	$var($Map, valmap, $nc(anno)->getElementValues());
	{
		$var($Iterator, i$, $nc($($ElementFilter::methodsIn($(static_cast<$Iterable*>($nc($($nc(annotype)->asElement()))->getEnclosedElements())))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ExecutableElement, ex, $cast($ExecutableElement, i$->next()));
			{
				$var($Symbol$MethodSymbol, meth, $cast($Symbol$MethodSymbol, ex));
				$var($Attribute, defaultValue, $nc(meth)->getDefaultValue());
				if (defaultValue != nullptr && !$nc(valmap)->containsKey(meth)) {
					valmap->put(meth, defaultValue);
				}
			}
		}
	}
	return valmap;
}

$1List* JavacElements::getAllMembers($TypeElement* element) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol);
	$var($Symbol, sym, $cast($Symbol, cast($Symbol::class$, element)));
	$var($Scope$WriteableScope, scope, $nc($($nc(sym)->members()))->dupUnshared());
	$var($List, closure, $nc(this->types)->closure($($cast($Type, sym->asType()))));
	{
		$var($Iterator, i$, $nc(closure)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			addMembers(scope, t);
		}
	}
	return $new($FilteredMemberList, scope);
}

void JavacElements::addMembers($Scope$WriteableScope* scope, $Type* type) {
	$useLocalCurrentObjectStackCache();
	bool members$continue = false;
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc($($nc($($nc(type)->asElement()))->members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, e, $cast($Symbol, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc(scope)->getSymbolsByName($($cast($Name, $nc(e)->getSimpleName())))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, overrider, $cast($Symbol, i$->next()));
						{
							if ($nc(overrider)->kind == $nc(e)->kind && ((int64_t)(overrider->flags() & (uint64_t)(int64_t)$Flags::SYNTHETIC)) == 0) {
								$init($ElementKind);
								bool var$0 = overrider->getKind() == $ElementKind::METHOD;
								if (var$0 && overrides($cast($ExecutableElement, overrider), $cast($ExecutableElement, e), $cast($TypeElement, $(type->asElement())))) {
									members$continue = true;
									break;
								}
							}
						}
					}
					if (members$continue) {
						members$continue = false;
						continue;
					}
				}
				bool derived = $cast($Symbol, $nc(e)->getEnclosingElement()) != scope->owner;
				$ElementKind* kind = e->getKind();
				$init($ElementKind);
				bool initializer = kind == $ElementKind::CONSTRUCTOR || kind == $ElementKind::INSTANCE_INIT || kind == $ElementKind::STATIC_INIT;
				if (!derived || (!initializer && e->isInheritedIn(scope->owner, this->types))) {
					scope->enter(e);
				}
			}
		}
	}
}

$1List* JavacElements::getAllAnnotationMirrors($Element* e) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol);
	$var($Symbol, sym, $cast($Symbol, cast($Symbol::class$, e)));
	$var($List, annos, $cast($List, $nc(sym)->getAnnotationMirrors()));
	$init($ElementKind);
	while (sym->getKind() == $ElementKind::CLASS) {
		$var($Type, sup, $nc(($cast($Symbol$ClassSymbol, sym)))->getSuperclass());
		$init($TypeTag);
		bool var$0 = !$nc(sup)->hasTag($TypeTag::CLASS);
		if (var$0 || $nc(sup)->isErroneous() || $nc(sup)->tsym == $nc($nc(this->syms)->objectType)->tsym) {
			break;
		}
		$assign(sym, $nc(sup)->tsym);
		$var($List, oldAnnos, annos);
		$var($List, newAnnos, $cast($List, $nc(sym)->getAnnotationMirrors()));
		{
			$var($Iterator, i$, $nc(newAnnos)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$Compound, anno, $cast($Attribute$Compound, i$->next()));
				{
					bool var$1 = isInherited($nc(anno)->type);
					if (var$1 && !containsAnnoOfType(oldAnnos, $nc(anno)->type)) {
						$assign(annos, $nc(annos)->prepend(anno));
					}
				}
			}
		}
	}
	return annos;
}

bool JavacElements::isInherited($Type* annotype) {
	return $nc($nc(annotype)->tsym)->attribute($nc($nc(this->syms)->inheritedType)->tsym) != nullptr;
}

bool JavacElements::containsAnnoOfType($List* annos, $Type* type) {
	$init(JavacElements);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(annos)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, anno, $cast($Attribute$Compound, i$->next()));
			{
				if ($nc($nc(anno)->type)->tsym == $nc(type)->tsym) {
					return true;
				}
			}
		}
	}
	return false;
}

bool JavacElements::hides($Element* hiderEl, $Element* hideeEl) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol);
	$var($Symbol, hider, $cast($Symbol, cast($Symbol::class$, hiderEl)));
	$var($Symbol, hidee, $cast($Symbol, cast($Symbol::class$, hideeEl)));
	if (hider == hidee || $nc(hider)->kind != $nc(hidee)->kind || $nc(hider)->name != $nc(hidee)->name) {
		return false;
	}
	$init($Kinds$Kind);
	if ($nc(hider)->kind == $Kinds$Kind::MTH) {
		bool var$0 = !hider->isStatic();
		if (var$0 || !$nc(this->types)->isSubSignature(hider->type, $nc(hidee)->type)) {
			return false;
		}
	}
	$var($Symbol$ClassSymbol, hiderClass, $nc($nc(hider)->owner)->enclClass());
	$var($Symbol$ClassSymbol, hideeClass, $nc($nc(hidee)->owner)->enclClass());
	if (hiderClass == nullptr || hideeClass == nullptr || !$nc(hiderClass)->isSubClass(hideeClass, this->types)) {
		return false;
	}
	return hidee->isAccessibleIn(hiderClass, this->types);
}

bool JavacElements::overrides($ExecutableElement* riderEl, $ExecutableElement* rideeEl, $TypeElement* typeEl) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol$MethodSymbol);
	$var($Symbol$MethodSymbol, rider, $cast($Symbol$MethodSymbol, cast($Symbol$MethodSymbol::class$, riderEl)));
	$var($Symbol$MethodSymbol, ridee, $cast($Symbol$MethodSymbol, cast($Symbol$MethodSymbol::class$, rideeEl)));
	$load($Symbol$ClassSymbol);
	$var($Symbol$ClassSymbol, origin, $cast($Symbol$ClassSymbol, cast($Symbol$ClassSymbol::class$, typeEl)));
	bool var$1 = $nc(rider)->name == $nc(ridee)->name && rider != ridee && !rider->isStatic();
	bool var$0 = var$1 && ridee->isMemberOf(origin, this->types);
	return var$0 && rider->overrides(ridee, origin, this->types, false);
}

$String* JavacElements::getConstantExpression(Object$* value) {
	return $Constants::format(value);
}

void JavacElements::printElements($Writer* w, $ElementArray* elements) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ElementArray, arr$, elements);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Element, element, arr$->get(i$));
			$nc(($cast($PrintingProcessor$PrintingElementVisitor, $(($$new($PrintingProcessor$PrintingElementVisitor, w, this))->visit(element)))))->flush();
		}
	}
}

$1Name* JavacElements::getName($CharSequence* cs) {
	return $nc(this->names)->fromString($($nc(cs)->toString()));
}

bool JavacElements::isFunctionalInterface($TypeElement* element) {
	$init($ElementKind);
	if ($nc(element)->getKind() != $ElementKind::INTERFACE) {
		return false;
	} else {
		$load($Symbol$TypeSymbol);
		$var($Symbol$TypeSymbol, tsym, $cast($Symbol$TypeSymbol, cast($Symbol$TypeSymbol::class$, element)));
		return $nc(this->types)->isFunctionalInterface(tsym);
	}
}

bool JavacElements::isAutomaticModule($ModuleElement* module) {
	$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, module));
	return ((int64_t)($nc(msym)->flags() & (uint64_t)$Flags::AUTOMATIC_MODULE)) != 0;
}

$Pair* JavacElements::getTreeAndTopLevel($Element* e) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol);
	$var($Symbol, sym, $cast($Symbol, cast($Symbol::class$, e)));
	$var($Env, enterEnv, getEnterEnv(sym));
	if (enterEnv == nullptr) {
		return nullptr;
	}
	$var($JCTree, tree, $TreeInfo::declarationFor(sym, $nc(enterEnv)->tree));
	if (tree == nullptr || $nc(enterEnv)->toplevel == nullptr) {
		return nullptr;
	}
	return $new($Pair, tree, $nc(enterEnv)->toplevel);
}

$Pair* JavacElements::getTreeAndTopLevel($Element* e, $AnnotationMirror* a, $AnnotationValue* v) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		return nullptr;
	}
	$var($Pair, elemTreeTop, getTreeAndTopLevel(e));
	if (elemTreeTop == nullptr) {
		return nullptr;
	}
	if (a == nullptr) {
		return elemTreeTop;
	}
	$var($JCTree, annoTree, matchAnnoToTree(a, e, $cast($JCTree, $nc(elemTreeTop)->fst)));
	if (annoTree == nullptr) {
		return elemTreeTop;
	}
	if (v == nullptr) {
		return $new($Pair, annoTree, $cast($JCTree$JCCompilationUnit, $nc(elemTreeTop)->snd));
	}
	$load($Attribute);
	$var($Attribute, var$0, $cast($Attribute, cast($Attribute::class$, v)));
	$var($JCTree, valueTree, matchAttributeToTree(var$0, $cast($Attribute, $(cast($Attribute::class$, a))), annoTree));
	if (valueTree == nullptr) {
		return $new($Pair, annoTree, $cast($JCTree$JCCompilationUnit, $nc(elemTreeTop)->snd));
	}
	return $new($Pair, valueTree, $cast($JCTree$JCCompilationUnit, $nc(elemTreeTop)->snd));
}

$Env* JavacElements::getEnterEnv($Symbol* sym) {
	$var($Symbol$TypeSymbol, ts, nullptr);
	$init($JavacElements$1);
	switch ($nc($JavacElements$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
	case 1:
		{
			$assign(ts, $cast($Symbol$PackageSymbol, sym));
			break;
		}
	case 2:
		{
			$assign(ts, $cast($Symbol$ModuleSymbol, sym));
			break;
		}
	default:
		{
			$assign(ts, sym->enclClass());
		}
	}
	return (ts != nullptr) ? $nc(this->enter)->getEnv(ts) : ($Env*)nullptr;
}

void JavacElements::ensureEntered($String* methodName) {
	if (this->javacTaskImpl != nullptr) {
		$nc(this->javacTaskImpl)->ensureEntered();
	}
	if (!$nc(this->javaCompiler)->isEnterDone()) {
		$throwNew($IllegalStateException, $$str({"Cannot use Elements."_s, methodName, " before the TaskEvent.Kind.ENTER finished event."_s}));
	}
}

$Object* JavacElements::cast($Class* clazz, Object$* o) {
	$init(JavacElements);
	if (!$nc(clazz)->isInstance(o)) {
		$throwNew($IllegalArgumentException, $($nc($of(o))->toString()));
	}
	return $of($nc(clazz)->cast(o));
}

void JavacElements::newRound() {
	$nc(this->resultCache)->clear();
}

$Optional* JavacElements::lambda$unboundNameToSymbol$2($String* nameStr, $Class* clazz, $String* methodName, $Pair* p) {
	$useLocalCurrentObjectStackCache();
	$var($Set, found, $new($LinkedHashSet));
	$var($Set, allModules, $new($HashSet, $(static_cast<$Collection*>($nc(this->modules)->allModules()))));
	allModules->removeAll($($nc(this->modules)->getRootModules()));
	{
		$var($Iterator, i$, $nc($($Arrays::asList($$new($SetArray, {
			$($nc(this->modules)->getRootModules()),
			allModules
		}))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Set, modules, $cast($Set, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(modules)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, i$->next()));
						{
							$var($Symbol, sym, nameToSymbol(msym, nameStr, clazz));
							if (sym == nullptr) {
								continue;
							}
							$load($Symbol$ClassSymbol);
							if (clazz == $Symbol$ClassSymbol::class$) {
								found->add(sym);
							} else {
								$load($Symbol$PackageSymbol);
								if (clazz == $Symbol$PackageSymbol::class$) {
									if (!$nc($($nc(sym)->members()))->isEmpty() || $nc(($cast($Symbol$PackageSymbol, sym)))->package_info != nullptr) {
										found->add(sym);
									}
								}
							}
						}
					}
				}
				if (found->size() == 1) {
					return $Optional::of($cast($Symbol, $($nc($(found->iterator()))->next())));
				} else if (found->size() > 1) {
					if ($nc(this->alreadyWarnedDuplicates)->add($$str({methodName, ":"_s, nameStr}))) {
						$var($String, moduleNames, $cast($String, $nc($($nc($($nc($(found->stream()))->map(static_cast<$Function*>($$new(JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1)))))->map(static_cast<$Function*>($$new(JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2)))))->collect($($Collectors::joining(", "_s)))));
						$nc(this->log)->note($($CompilerProperties$Notes::MultipleElements(methodName, nameStr, moduleNames)));
					}
					return $Optional::empty();
				} else {
				}
			}
		}
	}
	return $Optional::empty();
}

$String* JavacElements::lambda$unboundNameToSymbol$1($Symbol$ModuleSymbol* m) {
	$init(JavacElements);
	return $nc(m)->toString();
}

$Symbol$ModuleSymbol* JavacElements::lambda$unboundNameToSymbol$0($Symbol* s) {
	$init(JavacElements);
	return $nc($($nc(s)->packge()))->modle;
}

JavacElements::JavacElements() {
}

$Class* JavacElements::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacElements$$Lambda$lambda$unboundNameToSymbol$2::classInfo$.name)) {
			return JavacElements$$Lambda$lambda$unboundNameToSymbol$2::load$(name, initialize);
		}
		if (name->equals(JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1::classInfo$.name)) {
			return JavacElements$$Lambda$lambda$unboundNameToSymbol$0$1::load$(name, initialize);
		}
		if (name->equals(JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2::classInfo$.name)) {
			return JavacElements$$Lambda$lambda$unboundNameToSymbol$1$2::load$(name, initialize);
		}
	}
	$loadClass(JavacElements, name, initialize, &_JavacElements_ClassInfo_, allocate$JavacElements);
	return class$;
}

$Class* JavacElements::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com