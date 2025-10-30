#include <com/sun/tools/javac/api/JavacTrees.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/tree/CatchTree.h>
#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/LineMap.h>
#include <com/sun/source/tree/MethodTree.h>
#include <com/sun/source/tree/Scope.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/DocSourcePositions.h>
#include <com/sun/source/util/DocTreeFactory.h>
#include <com/sun/source/util/DocTreePath.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <com/sun/source/util/DocTrees.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/SourcePositions.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/tools/javac/api/BasicJavacTask.h>
#include <com/sun/tools/javac/api/Entity.h>
#include <com/sun/tools/javac/api/JavacScope.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/api/JavacTrees$1.h>
#include <com/sun/tools/javac/api/JavacTrees$2.h>
#include <com/sun/tools/javac/api/JavacTrees$3.h>
#include <com/sun/tools/javac/api/JavacTrees$4.h>
#include <com/sun/tools/javac/api/JavacTrees$5.h>
#include <com/sun/tools/javac/api/JavacTrees$6.h>
#include <com/sun/tools/javac/api/JavacTrees$7.h>
#include <com/sun/tools/javac/api/JavacTrees$8.h>
#include <com/sun/tools/javac/api/JavacTrees$Copier.h>
#include <com/sun/tools/javac/api/JavacTrees$HtmlFileObject.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$UnionClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/MemberEnter.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/parser/ParserFactory.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>
#include <com/sun/tools/javac/tree/DCTree$DCParam.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocCommentTable.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Abort.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/BreakIterator.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef API
#undef CLASSDEF
#undef CONSTRUCTOR
#undef ERROR
#undef HTML
#undef IDENT
#undef METHOD
#undef MTH
#undef PCK
#undef SOURCE_PATH
#undef TYP
#undef UNATTRIBUTED
#undef UNION
#undef VAR

using $DocTreeArray = $Array<::com::sun::source::doctree::DocTree>;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $CatchTree = ::com::sun::source::tree::CatchTree;
using $ClassTree = ::com::sun::source::tree::ClassTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $MethodTree = ::com::sun::source::tree::MethodTree;
using $1Scope = ::com::sun::source::tree::Scope;
using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $DocSourcePositions = ::com::sun::source::util::DocSourcePositions;
using $DocTreeFactory = ::com::sun::source::util::DocTreeFactory;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $DocTrees = ::com::sun::source::util::DocTrees;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $SourcePositions = ::com::sun::source::util::SourcePositions;
using $TreePath = ::com::sun::source::util::TreePath;
using $BasicJavacTask = ::com::sun::tools::javac::api::BasicJavacTask;
using $Entity = ::com::sun::tools::javac::api::Entity;
using $JavacScope = ::com::sun::tools::javac::api::JavacScope;
using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $JavacTrees$1 = ::com::sun::tools::javac::api::JavacTrees$1;
using $JavacTrees$2 = ::com::sun::tools::javac::api::JavacTrees$2;
using $JavacTrees$3 = ::com::sun::tools::javac::api::JavacTrees$3;
using $JavacTrees$4 = ::com::sun::tools::javac::api::JavacTrees$4;
using $JavacTrees$5 = ::com::sun::tools::javac::api::JavacTrees$5;
using $JavacTrees$6 = ::com::sun::tools::javac::api::JavacTrees$6;
using $JavacTrees$7 = ::com::sun::tools::javac::api::JavacTrees$7;
using $JavacTrees$8 = ::com::sun::tools::javac::api::JavacTrees$8;
using $JavacTrees$Copier = ::com::sun::tools::javac::api::JavacTrees$Copier;
using $JavacTrees$HtmlFileObject = ::com::sun::tools::javac::api::JavacTrees$HtmlFileObject;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$NamedImportScope = ::com::sun::tools::javac::code::Scope$NamedImportScope;
using $Scope$StarImportScope = ::com::sun::tools::javac::code::Scope$StarImportScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$UnionClassType = ::com::sun::tools::javac::code::Type$UnionClassType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $MemberEnter = ::com::sun::tools::javac::comp::MemberEnter;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $ParserFactory = ::com::sun::tools::javac::parser::ParserFactory;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Notes = ::com::sun::tools::javac::resources::CompilerProperties$Notes;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $DCTree$DCIdentifier = ::com::sun::tools::javac::tree::DCTree$DCIdentifier;
using $DCTree$DCParam = ::com::sun::tools::javac::tree::DCTree$DCParam;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Abort = ::com::sun::tools::javac::util::Abort;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BreakIterator = ::java::text::BreakIterator;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $1Name = ::javax::lang::model::element::Name;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $ErrorType = ::javax::lang::model::type::ErrorType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;
using $FileObject = ::javax::tools::FileObject;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0 : public $Consumer {
	$class(JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(JavacTrees* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* c) override {
		$nc(inst$)->lambda$prepareFlatnameForClass$0($cast($Symbol$ClassSymbol, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0>());
	}
	JavacTrees* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0, inst$)},
	{}
};
$MethodInfo JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::*)(JavacTrees*)>(&JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::class$ = nullptr;

class JavacTrees$$Lambda$lambda$getOriginalType$1$1 : public $Function {
	$class(JavacTrees$$Lambda$lambda$getOriginalType$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(JavacTrees* inst, $Type$ClassType* classType) {
		$set(this, inst$, inst);
		$set(this, classType, classType);
	}
	virtual $Object* apply(Object$* tt) override {
		 return $of($nc(inst$)->lambda$getOriginalType$1(classType, $cast($Type, tt)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTrees$$Lambda$lambda$getOriginalType$1$1>());
	}
	JavacTrees* inst$ = nullptr;
	$Type$ClassType* classType = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacTrees$$Lambda$lambda$getOriginalType$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacTrees$$Lambda$lambda$getOriginalType$1$1, inst$)},
	{"classType", "Lcom/sun/tools/javac/code/Type$ClassType;", nullptr, $PUBLIC, $field(JavacTrees$$Lambda$lambda$getOriginalType$1$1, classType)},
	{}
};
$MethodInfo JavacTrees$$Lambda$lambda$getOriginalType$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;Lcom/sun/tools/javac/code/Type$ClassType;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacTrees$$Lambda$lambda$getOriginalType$1$1::*)(JavacTrees*,$Type$ClassType*)>(&JavacTrees$$Lambda$lambda$getOriginalType$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTrees$$Lambda$lambda$getOriginalType$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacTrees$$Lambda$lambda$getOriginalType$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JavacTrees$$Lambda$lambda$getOriginalType$1$1::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$$Lambda$lambda$getOriginalType$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTrees$$Lambda$lambda$getOriginalType$1$1::class$ = nullptr;

$FieldInfo _JavacTrees_FieldInfo_[] = {
	{"modules", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $PRIVATE, $field(JavacTrees, modules)},
	{"resolve", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE, $field(JavacTrees, resolve)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE, $field(JavacTrees, enter)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE, $field(JavacTrees, log)},
	{"memberEnter", "Lcom/sun/tools/javac/comp/MemberEnter;", nullptr, $PRIVATE, $field(JavacTrees, memberEnter)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE, $field(JavacTrees, attr)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE, $field(JavacTrees, chk)},
	{"treeMaker", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE, $field(JavacTrees, treeMaker)},
	{"elements", "Lcom/sun/tools/javac/model/JavacElements;", nullptr, $PRIVATE, $field(JavacTrees, elements)},
	{"javacTaskImpl", "Lcom/sun/tools/javac/api/JavacTaskImpl;", nullptr, $PRIVATE, $field(JavacTrees, javacTaskImpl)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE, $field(JavacTrees, names)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE, $field(JavacTrees, types)},
	{"docTreeMaker", "Lcom/sun/tools/javac/tree/DocTreeMaker;", nullptr, $PRIVATE, $field(JavacTrees, docTreeMaker)},
	{"breakIterator", "Ljava/text/BreakIterator;", nullptr, $PRIVATE, $field(JavacTrees, breakIterator)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE, $field(JavacTrees, fileManager)},
	{"parser", "Lcom/sun/tools/javac/parser/ParserFactory;", nullptr, $PRIVATE, $field(JavacTrees, parser)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE, $field(JavacTrees, syms)},
	{"extraType2OriginalMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;", $PRIVATE | $FINAL, $field(JavacTrees, extraType2OriginalMap)},
	{}
};

$MethodInfo _JavacTrees_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(JavacTrees::*)($Context*)>(&JavacTrees::init$))},
	{"asJavaFileObject", "(Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $STATIC, $method(static_cast<$JavaFileObject*(*)($FileObject*)>(&JavacTrees::asJavaFileObject))},
	{"attribExprToTree", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Ljava/util/Map;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $method(static_cast<$Env*(JavacTrees::*)($JCTree$JCExpression*,$Env*,$JCTree*,$Map*)>(&JavacTrees::attribExprToTree))},
	{"attribStatToTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Ljava/util/Map;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $method(static_cast<$Env*(JavacTrees::*)($JCTree*,$Env*,$JCTree*,$Map*)>(&JavacTrees::attribStatToTree))},
	{"attributeDocReference", "(Lcom/sun/source/util/TreePath;Lcom/sun/tools/javac/tree/DCTree$DCReference;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(JavacTrees::*)($TreePath*,$DCTree$DCReference*)>(&JavacTrees::attributeDocReference))},
	{"attributeParamIdentifier", "(Lcom/sun/source/util/TreePath;Lcom/sun/tools/javac/tree/DCTree$DCParam;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(JavacTrees::*)($TreePath*,$DCTree$DCParam*)>(&JavacTrees::attributeParamIdentifier))},
	{"checkHtmlKind", "(Ljavax/tools/FileObject;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FileObject*)>(&JavacTrees::checkHtmlKind))},
	{"checkHtmlKind", "(Ljavax/tools/FileObject;Ljavax/tools/JavaFileObject$Kind;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FileObject*,$JavaFileObject$Kind*)>(&JavacTrees::checkHtmlKind))},
	{"createCopier", "(Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/api/JavacTrees$Copier;", nullptr, $PROTECTED},
	{"findConstructor", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", 0},
	{"findField", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$VarSymbol*(JavacTrees::*)($Symbol$ClassSymbol*,$Name*)>(&JavacTrees::findField))},
	{"findMethod", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(JavacTrees::*)($Symbol$ClassSymbol*,$Name*,$List*)>(&JavacTrees::findMethod))},
	{"fixLocalClassNames", "(Ljava/util/Map;Lcom/sun/tools/javac/comp/Env;)V", "(Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(JavacTrees::*)($Map*,$Env*)>(&JavacTrees::fixLocalClassNames))},
	{"getAttrContext", "(Lcom/sun/source/util/TreePath;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/source/util/TreePath;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $method(static_cast<$Env*(JavacTrees::*)($TreePath*)>(&JavacTrees::getAttrContext))},
	{"getBreakIterator", "()Ljava/text/BreakIterator;", nullptr, $PUBLIC},
	{"getCharacters", "(Lcom/sun/source/doctree/EntityTree;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocComment", "(Lcom/sun/source/util/TreePath;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocCommentTree", "(Lcom/sun/source/util/TreePath;)Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC},
	{"getDocCommentTree", "(Ljavax/lang/model/element/Element;)Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC},
	{"getDocCommentTree", "(Ljavax/lang/model/element/Element;Ljava/lang/String;)Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDocCommentTree", "(Ljavax/tools/FileObject;)Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC},
	{"getDocTreeFactory", "()Lcom/sun/tools/javac/tree/DocTreeMaker;", nullptr, $PUBLIC},
	{"getDocTreePath", "(Ljavax/tools/FileObject;Ljavax/lang/model/element/PackageElement;)Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC},
	{"getElement", "(Lcom/sun/source/util/TreePath;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"getElement", "(Lcom/sun/source/util/DocTreePath;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC},
	{"getFirstSentence", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Ljava/util/List<Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getLastChild", "(Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/doctree/DocTree;", nullptr, $PRIVATE, $method(static_cast<$DocTree*(JavacTrees::*)($DocTree*)>(&JavacTrees::getLastChild))},
	{"getLub", "(Lcom/sun/source/tree/CatchTree;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC},
	{"getOriginalType", "(Ljavax/lang/model/type/ErrorType;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC},
	{"getPath", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC},
	{"getPath", "(Ljavax/lang/model/element/Element;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC},
	{"getPath", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC},
	{"getPath", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC},
	{"getScope", "(Lcom/sun/source/util/TreePath;)Lcom/sun/tools/javac/api/JavacScope;", nullptr, $PUBLIC},
	{"getSourcePositions", "()Lcom/sun/source/util/DocSourcePositions;", nullptr, $PUBLIC},
	{"getTree", "(Ljavax/lang/model/element/TypeElement;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PUBLIC},
	{"getTree", "(Ljavax/lang/model/element/ExecutableElement;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC},
	{"getTree", "(Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getTree", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getTree", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getType", "(Lcom/sun/source/util/DocTreePath;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC},
	{"getTypeMirror", "(Lcom/sun/source/util/TreePath;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC},
	{"hasParameterTypes", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PRIVATE, $method(static_cast<bool(JavacTrees::*)($Symbol$MethodSymbol*,$List*)>(&JavacTrees::hasParameterTypes))},
	{"init", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacTrees::*)($Context*)>(&JavacTrees::init))},
	{"instance", "(Ljavax/tools/JavaCompiler$CompilationTask;)Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacTrees*(*)($JavaCompiler$CompilationTask*)>(&JavacTrees::instance))},
	{"instance", "(Ljavax/annotation/processing/ProcessingEnvironment;)Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacTrees*(*)($ProcessingEnvironment*)>(&JavacTrees::instance))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacTrees*(*)($Context*)>(&JavacTrees::instance))},
	{"isAccessible", "(Lcom/sun/source/tree/Scope;Ljavax/lang/model/element/TypeElement;)Z", nullptr, $PUBLIC},
	{"isAccessible", "(Lcom/sun/source/tree/Scope;Ljavax/lang/model/element/Element;Ljavax/lang/model/type/DeclaredType;)Z", nullptr, $PUBLIC},
	{"lambda$getOriginalType$1", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(JavacTrees::*)($Type$ClassType*,$Type*)>(&JavacTrees::lambda$getOriginalType$1))},
	{"lambda$prepareFlatnameForClass$0", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JavacTrees::*)($Symbol$ClassSymbol*)>(&JavacTrees::lambda$prepareFlatnameForClass$0))},
	{"makeTreePath", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljavax/tools/JavaFileObject;Lcom/sun/source/doctree/DocCommentTree;)Lcom/sun/source/util/TreePath;", nullptr, $PRIVATE, $method(static_cast<$TreePath*(JavacTrees::*)($Symbol$PackageSymbol*,$JavaFileObject*,$DocCommentTree*)>(&JavacTrees::makeTreePath))},
	{"prepareFlatnameForClass", "(Lcom/sun/tools/javac/comp/Env;)Ljava/util/Map;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/util/Name;>;", $PRIVATE, $method(static_cast<$Map*(JavacTrees::*)($Env*)>(&JavacTrees::prepareFlatnameForClass))},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Lcom/sun/source/tree/Tree;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PUBLIC},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Lcom/sun/source/doctree/DocTree;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PUBLIC},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacTrees::*)($Diagnostic$Kind*,$CharSequence*,$JCDiagnostic$DiagnosticPosition*,$CompilationUnitTree*)>(&JavacTrees::printMessage))},
	{"searchField", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Name;Ljava/util/Set;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Name;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", $PRIVATE, $method(static_cast<$Symbol$VarSymbol*(JavacTrees::*)($Symbol$ClassSymbol*,$Name*,$Set*)>(&JavacTrees::searchField))},
	{"searchMethod", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Ljava/util/Set;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(JavacTrees::*)($Symbol$ClassSymbol*,$Name*,$List*,$Set*)>(&JavacTrees::searchMethod))},
	{"setBreakIterator", "(Ljava/text/BreakIterator;)V", nullptr, $PUBLIC},
	{"updateContext", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacTrees_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$8", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.api.JavacTrees$Copier", "com.sun.tools.javac.api.JavacTrees", "Copier", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.api.JavacTrees$HtmlFileObject", "com.sun.tools.javac.api.JavacTrees", "HtmlFileObject", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.api.JavacTrees$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTrees$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTrees$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTrees$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTrees$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTrees$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacTrees$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTrees_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees",
	"com.sun.source.util.DocTrees",
	nullptr,
	_JavacTrees_FieldInfo_,
	_JavacTrees_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTrees_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees$8,com.sun.tools.javac.api.JavacTrees$Copier,com.sun.tools.javac.api.JavacTrees$HtmlFileObject,com.sun.tools.javac.api.JavacTrees$5,com.sun.tools.javac.api.JavacTrees$7,com.sun.tools.javac.api.JavacTrees$6,com.sun.tools.javac.api.JavacTrees$4,com.sun.tools.javac.api.JavacTrees$3,com.sun.tools.javac.api.JavacTrees$2,com.sun.tools.javac.api.JavacTrees$1"
};

$Object* allocate$JavacTrees($Class* clazz) {
	return $of($alloc(JavacTrees));
}

JavacTrees* JavacTrees::instance($JavaCompiler$CompilationTask* task) {
	$init(JavacTrees);
	$useLocalCurrentObjectStackCache();
	$var($BasicJavacTask, basicJavacTask, nullptr);
	bool var$0 = $instanceOf($BasicJavacTask, task);
	if (var$0) {
		$assign(basicJavacTask, $cast($BasicJavacTask, task));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException);
	}
	return instance($($nc(basicJavacTask)->getContext()));
}

JavacTrees* JavacTrees::instance($ProcessingEnvironment* env) {
	$init(JavacTrees);
	$useLocalCurrentObjectStackCache();
	$var($JavacProcessingEnvironment, javacProcessingEnvironment, nullptr);
	bool var$0 = $instanceOf($JavacProcessingEnvironment, env);
	if (var$0) {
		$assign(javacProcessingEnvironment, $cast($JavacProcessingEnvironment, env));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException);
	}
	return instance($($nc(javacProcessingEnvironment)->getContext()));
}

JavacTrees* JavacTrees::instance($Context* context) {
	$init(JavacTrees);
	$var(JavacTrees, instance, $cast(JavacTrees, $nc(context)->get(JavacTrees::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(JavacTrees, context));
	}
	return instance;
}

void JavacTrees::init$($Context* context) {
	$DocTrees::init$();
	$set(this, extraType2OriginalMap, $new($WeakHashMap));
	$set(this, breakIterator, nullptr);
	$nc(context)->put(JavacTrees::class$, $of(this));
	init(context);
}

void JavacTrees::updateContext($Context* context) {
	init(context);
}

void JavacTrees::init($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, modules, $Modules::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, elements, $JavacElements::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, resolve, $Resolve::instance(context));
	$set(this, treeMaker, $TreeMaker::instance(context));
	$set(this, memberEnter, $MemberEnter::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, docTreeMaker, $DocTreeMaker::instance(context));
	$set(this, parser, $ParserFactory::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, $nc(context)->get($JavaFileManager::class$)));
	$load($JavacTask);
	$var($JavacTask, t, $cast($JavacTask, context->get($JavacTask::class$)));
	{
		$var($JavacTaskImpl, taskImpl, nullptr);
		bool var$0 = $instanceOf($JavacTaskImpl, t);
		if (var$0) {
			$assign(taskImpl, $cast($JavacTaskImpl, t));
			var$0 = true;
		}
		if (var$0) {
			$set(this, javacTaskImpl, taskImpl);
		}
	}
}

$BreakIterator* JavacTrees::getBreakIterator() {
	return this->breakIterator;
}

$SourcePositions* JavacTrees::getSourcePositions() {
	return $new($JavacTrees$1, this);
}

$DocTreeFactory* JavacTrees::getDocTreeFactory() {
	return this->docTreeMaker;
}

$DocTree* JavacTrees::getLastChild($DocTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($DocTreeArray, last, $new($DocTreeArray, {($DocTree*)nullptr}));
	$nc(tree)->accept($$new($JavacTrees$2, this, last), nullptr);
	return last->get(0);
}

$ClassTree* JavacTrees::getTree($TypeElement* element) {
	return $cast($JCTree$JCClassDecl, $cast($JCTree, getTree(static_cast<$Element*>(static_cast<$Parameterizable*>(element)))));
}

$MethodTree* JavacTrees::getTree($ExecutableElement* method) {
	return $cast($JCTree$JCMethodDecl, $cast($JCTree, getTree(static_cast<$Element*>(method))));
}

$Tree* JavacTrees::getTree($Element* element) {
	return getTree(element, nullptr);
}

$Tree* JavacTrees::getTree($Element* e, $AnnotationMirror* a) {
	return getTree(e, a, nullptr);
}

$Tree* JavacTrees::getTree($Element* e, $AnnotationMirror* a, $AnnotationValue* v) {
	$var($Pair, treeTopLevel, $nc(this->elements)->getTreeAndTopLevel(e, a, v));
	if (treeTopLevel == nullptr) {
		return nullptr;
	}
	return $cast($JCTree, $nc(treeTopLevel)->fst);
}

$TreePath* JavacTrees::getPath($CompilationUnitTree* unit, $Tree* node) {
	return $TreePath::getPath(unit, node);
}

$TreePath* JavacTrees::getPath($Element* e) {
	return getPath(e, nullptr, nullptr);
}

$TreePath* JavacTrees::getPath($Element* e, $AnnotationMirror* a) {
	return getPath(e, a, nullptr);
}

$TreePath* JavacTrees::getPath($Element* e, $AnnotationMirror* a, $AnnotationValue* v) {
	$var($Pair, treeTopLevel, $nc(this->elements)->getTreeAndTopLevel(e, a, v));
	if (treeTopLevel == nullptr) {
		return nullptr;
	}
	return $TreePath::getPath($cast($CompilationUnitTree, $nc(treeTopLevel)->snd), $cast($Tree, treeTopLevel->fst));
}

$Element* JavacTrees::getElement($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, $cast($JCTree, $nc(path)->getLeaf()));
	$var($Symbol, sym, $TreeInfo::symbolFor(tree));
	if (sym == nullptr) {
		{
			$var($TreePath, p, path);
			for (; p != nullptr; $assign(p, p->getParentPath())) {
				$var($JCTree, t, $cast($JCTree, $nc(p)->getLeaf()));
				$init($JCTree$Tag);
				if ($nc(t)->hasTag($JCTree$Tag::CLASSDEF)) {
					$var($JCTree$JCClassDecl, ct, $cast($JCTree$JCClassDecl, t));
					if (ct->sym != nullptr) {
						if (((int64_t)($nc(ct->sym)->flags_field & (uint64_t)(int64_t)$Flags::UNATTRIBUTED)) != 0) {
							$nc(this->attr)->attribClass($(ct->pos()), ct->sym);
							$assign(sym, $TreeInfo::symbolFor(tree));
						}
						break;
					}
				}
			}
		}
	}
	return sym;
}

$Element* JavacTrees::getElement($DocTreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($DocTree, tree, $nc(path)->getLeaf());
	{
		$var($DCTree$DCReference, dcReference, nullptr);
		bool var$0 = $instanceOf($DCTree$DCReference, tree);
		if (var$0) {
			$assign(dcReference, $cast($DCTree$DCReference, tree));
			var$0 = true;
		}
		if (var$0) {
			return attributeDocReference($(path->getTreePath()), dcReference);
		}
	}
	if ($instanceOf($DCTree$DCIdentifier, tree)) {
		{
			$var($DCTree$DCParam, dcParam, nullptr);
			$var($DocTree, patt17951$temp, $nc($(path->getParentPath()))->getLeaf());
			bool var$1 = $instanceOf($DCTree$DCParam, patt17951$temp);
			if (var$1) {
				$assign(dcParam, $cast($DCTree$DCParam, patt17951$temp));
				var$1 = true;
			}
			if (var$1) {
				return attributeParamIdentifier($(path->getTreePath()), dcParam);
			}
		}
	}
	return nullptr;
}

$TypeMirror* JavacTrees::getType($DocTreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($DocTree, tree, $nc(path)->getLeaf());
	{
		$var($DCTree$DCReference, dcReference, nullptr);
		bool var$0 = $instanceOf($DCTree$DCReference, tree);
		if (var$0) {
			$assign(dcReference, $cast($DCTree$DCReference, tree));
			var$0 = true;
		}
		if (var$0) {
			$var($JCTree, qexpr, $nc(dcReference)->qualifierExpression);
			if (qexpr != nullptr) {
				$var($Log$DeferredDiagnosticHandler, deferredDiagnosticHandler, $new($Log$DeferredDiagnosticHandler, this->log));
				{
					$var($Throwable, var$1, nullptr);
					$var($TypeMirror, var$3, nullptr);
					bool return$2 = false;
					try {
						try {
							$var($Env, env, getAttrContext($(path->getTreePath())));
							$var($Type, t, $nc(this->attr)->attribType(dcReference->qualifierExpression, env));
							if (t != nullptr && !t->isErroneous()) {
								$assign(var$3, t);
								return$2 = true;
								goto $finally;
							}
						} catch ($Abort& e) {
							$assign(var$3, nullptr);
							return$2 = true;
							goto $finally;
						}
					} catch ($Throwable& var$4) {
						$assign(var$1, var$4);
					} $finally: {
						$nc(this->log)->popDiagnosticHandler(deferredDiagnosticHandler);
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
					if (return$2) {
						return var$3;
					}
				}
			}
		}
	}
	$var($Element, e, getElement(path));
	return e == nullptr ? ($TypeMirror*)nullptr : $nc(e)->asType();
}

$1List* JavacTrees::getFirstSentence($1List* list) {
	return $nc(this->docTreeMaker)->getFirstSentence(list);
}

$Symbol* JavacTrees::attributeDocReference($TreePath* path, $DCTree$DCReference* ref) {
	$useLocalCurrentObjectStackCache();
	$var($Env, env, getAttrContext(path));
	if (env == nullptr) {
		return nullptr;
	}
	if ($nc(ref)->moduleName != nullptr && ref->qualifierExpression == nullptr && ref->memberName != nullptr) {
		return nullptr;
	}
	$var($Log$DeferredDiagnosticHandler, deferredDiagnosticHandler, $new($Log$DeferredDiagnosticHandler, this->log));
	{
		$var($Throwable, var$0, nullptr);
		$var($Symbol, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($Symbol$TypeSymbol, tsym, nullptr);
				$var($Name, memberName, nullptr);
				$var($Symbol$ModuleSymbol, mdlsym, nullptr);
				if ($nc(ref)->moduleName != nullptr) {
					$assign(mdlsym, $nc(this->modules)->modulesInitialized() ? $nc(this->modules)->getObservableModule($($nc(this->names)->fromString($($nc(ref->moduleName)->toString())))) : ($Symbol$ModuleSymbol*)nullptr);
					if (mdlsym == nullptr) {
						$assign(var$2, nullptr);
						return$1 = true;
						goto $finally;
					} else if (ref->qualifierExpression == nullptr) {
						$assign(var$2, mdlsym);
						return$1 = true;
						goto $finally;
					}
				} else {
					$assign(mdlsym, $nc(this->modules)->getDefaultModule());
				}
				if ($nc(ref)->qualifierExpression == nullptr) {
					$assign(tsym, $nc($nc(env)->enclClass)->sym);
					$assign(memberName, $cast($Name, ref->memberName));
				} else {
					$var($Type, t, ref->moduleName == nullptr ? $nc(this->attr)->attribType(ref->qualifierExpression, env) : ($Type*)nullptr);
					if (t == nullptr || $nc(t)->isErroneous()) {
						$var($JCTree$JCCompilationUnit, toplevel, $nc(this->treeMaker)->TopLevel($($List::nil())));
						$set($nc(toplevel), modle, mdlsym);
						$set(toplevel, packge, $nc(mdlsym)->unnamedPackage);
						$var($Symbol, sym, $nc(this->attr)->attribIdent(ref->qualifierExpression, toplevel));
						if (sym == nullptr) {
							$assign(var$2, nullptr);
							return$1 = true;
							goto $finally;
						}
						$nc(sym)->complete();
						$init($Kinds$Kind);
						if ((sym->kind == $Kinds$Kind::PCK || sym->kind == $Kinds$Kind::TYP) && sym->exists()) {
							$assign(tsym, $cast($Symbol$TypeSymbol, sym));
							$assign(memberName, $cast($Name, ref->memberName));
							if (sym->kind == $Kinds$Kind::PCK && memberName != nullptr) {
								$assign(var$2, nullptr);
								return$1 = true;
								goto $finally;
							}
						} else {
							if ($nc(this->modules)->modulesInitialized() && ref->moduleName == nullptr && ref->memberName == nullptr) {
								$var($Symbol$ModuleSymbol, moduleSymbol, $nc(this->modules)->getObservableModule($($nc(this->names)->fromString(ref->signature))));
								if (moduleSymbol != nullptr) {
									$assign(var$2, moduleSymbol);
									return$1 = true;
									goto $finally;
								}
							}
							$init($JCTree$Tag);
							if ($nc(ref->qualifierExpression)->hasTag($JCTree$Tag::IDENT) && ref->moduleName == nullptr && ref->memberName == nullptr) {
								$assign(tsym, $nc($nc(env)->enclClass)->sym);
								$assign(memberName, $nc(($cast($JCTree$JCIdent, ref->qualifierExpression)))->name);
							} else {
								$assign(var$2, nullptr);
								return$1 = true;
								goto $finally;
							}
						}
					} else {
						$var($Type, e, t);
						{
							$var($Type$ArrayType, arrayType, nullptr);
							while (true) {
								bool var$3 = $instanceOf($Type$ArrayType, e);
								if (var$3) {
									$assign(arrayType, $cast($Type$ArrayType, e));
									var$3 = true;
								}
								if (!(var$3)) {
									break;
								}
								{
									$assign(e, $nc(arrayType)->elemtype);
								}
							}
						}
						$assign(tsym, $nc(e)->tsym);
						$assign(memberName, $cast($Name, ref->memberName));
					}
				}
				if (memberName == nullptr) {
					$assign(var$2, tsym);
					return$1 = true;
					goto $finally;
				}
				$var($List, paramTypes, nullptr);
				if ($nc(ref)->paramTypes == nullptr) {
					$assign(paramTypes, nullptr);
				} else {
					$var($ListBuffer, lb, $new($ListBuffer));
					{
						$var($List, l, $cast($List, ref->paramTypes));
						for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
							$var($JCTree, tree, $cast($JCTree, l->head));
							$var($Type, t, $nc(this->attr)->attribType(tree, env));
							lb->add(t);
						}
					}
					$assign(paramTypes, lb->toList());
				}
				$var($Symbol$ClassSymbol, sym, $cast($Symbol$ClassSymbol, $nc($($nc(this->types)->skipTypeVars($nc(tsym)->type, false)))->tsym));
				$var($Symbol, msym, (memberName == $nc(sym)->name) ? static_cast<$Symbol*>(findConstructor(sym, paramTypes)) : static_cast<$Symbol*>(findMethod(sym, memberName, paramTypes)));
				if (paramTypes != nullptr) {
					$assign(var$2, msym);
					return$1 = true;
					goto $finally;
				}
				$var($Symbol$VarSymbol, vsym, ($nc(ref)->paramTypes != nullptr) ? ($Symbol$VarSymbol*)nullptr : findField(sym, memberName));
				bool var$4 = vsym != nullptr;
				if (var$4) {
					bool var$5 = msym == nullptr;
					if (!var$5) {
						$var($Type, var$6, $cast($Type, $nc($($nc(vsym)->enclClass()))->asType()));
						var$5 = $nc(this->types)->isSubtypeUnchecked(var$6, $($cast($Type, $nc($($nc(msym)->enclClass()))->asType())));
					}
					var$4 = (var$5);
				}
				if (var$4) {
					$assign(var$2, vsym);
					return$1 = true;
					goto $finally;
				} else {
					$assign(var$2, msym);
					return$1 = true;
					goto $finally;
				}
			} catch ($Abort& e) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			$nc(this->log)->popDiagnosticHandler(deferredDiagnosticHandler);
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

$Symbol* JavacTrees::attributeParamIdentifier($TreePath* path, $DCTree$DCParam* paramTag) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, javadocSymbol, $cast($Symbol, getElement(path)));
	if (javadocSymbol == nullptr) {
		return nullptr;
	}
	$ElementKind* kind = $nc(javadocSymbol)->getKind();
	$var($List, params, $List::nil());
	$init($ElementKind);
	if (kind == $ElementKind::METHOD || kind == $ElementKind::CONSTRUCTOR) {
		$var($Symbol$MethodSymbol, ee, $cast($Symbol$MethodSymbol, javadocSymbol));
		$assign(params, $nc(paramTag)->isTypeParameter() ? ee->getTypeParameters() : ee->getParameters());
	} else {
		bool var$1 = kind->isClass();
		if (var$1 || kind->isInterface()) {
			$var($Symbol$ClassSymbol, te, $cast($Symbol$ClassSymbol, javadocSymbol));
			$assign(params, $nc(paramTag)->isTypeParameter() ? te->getTypeParameters() : te->getRecordComponents());
		}
	}
	{
		$var($Iterator, i$, $nc(params)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, param, $cast($Symbol, i$->next()));
			{
				if ($equals($cast($Name, $nc(param)->getSimpleName()), $nc($($nc(paramTag)->getName()))->getName())) {
					return param;
				}
			}
		}
	}
	return nullptr;
}

$Symbol$VarSymbol* JavacTrees::findField($Symbol$ClassSymbol* tsym, $Name* fieldName) {
	return searchField(tsym, fieldName, $$new($HashSet));
}

$Symbol$VarSymbol* JavacTrees::searchField($Symbol$ClassSymbol* tsym, $Name* fieldName, $Set* searched) {
	$useLocalCurrentObjectStackCache();
	if ($nc(searched)->contains(tsym)) {
		return nullptr;
	}
	$nc(searched)->add(tsym);
	{
		$var($Iterator, i$, $nc($($nc($($nc(tsym)->members()))->getSymbolsByName(fieldName)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::VAR) {
					return $cast($Symbol$VarSymbol, sym);
				}
			}
		}
	}
	$var($Symbol$ClassSymbol, encl, $nc(tsym->owner)->enclClass());
	if (encl != nullptr) {
		$var($Symbol$VarSymbol, vsym, searchField(encl, fieldName, searched));
		if (vsym != nullptr) {
			return vsym;
		}
	}
	$var($Type, superclass, tsym->getSuperclass());
	if ($nc(superclass)->tsym != nullptr) {
		$var($Symbol$VarSymbol, vsym, searchField($cast($Symbol$ClassSymbol, superclass->tsym), fieldName, searched));
		if (vsym != nullptr) {
			return vsym;
		}
	}
	$var($List, intfs, tsym->getInterfaces());
	{
		$var($List, l, intfs);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Type, intf, $cast($Type, l->head));
			if ($nc(intf)->isErroneous()) {
				continue;
			}
			$var($Symbol$VarSymbol, vsym, searchField($cast($Symbol$ClassSymbol, $nc(intf)->tsym), fieldName, searched));
			if (vsym != nullptr) {
				return vsym;
			}
		}
	}
	return nullptr;
}

$Symbol$MethodSymbol* JavacTrees::findConstructor($Symbol$ClassSymbol* tsym, $List* paramTypes) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc($($nc(tsym)->members()))->getSymbolsByName($nc(this->names)->init)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::MTH) {
					if (hasParameterTypes($cast($Symbol$MethodSymbol, sym), paramTypes)) {
						return $cast($Symbol$MethodSymbol, sym);
					}
				}
			}
		}
	}
	return nullptr;
}

$Symbol$MethodSymbol* JavacTrees::findMethod($Symbol$ClassSymbol* tsym, $Name* methodName, $List* paramTypes) {
	return searchMethod(tsym, methodName, paramTypes, $$new($HashSet));
}

$Symbol$MethodSymbol* JavacTrees::searchMethod($Symbol$ClassSymbol* tsym, $Name* methodName, $List* paramTypes, $Set* searched) {
	$useLocalCurrentObjectStackCache();
	if (methodName == $nc(this->names)->init) {
		return nullptr;
	}
	if ($nc(searched)->contains(tsym)) {
		return nullptr;
	}
	$nc(searched)->add(tsym);
	if (paramTypes == nullptr) {
		$var($Symbol$MethodSymbol, lastFound, nullptr);
		{
			$var($Iterator, i$, $nc($($nc($($nc(tsym)->members()))->getSymbolsByName(methodName)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc(sym)->kind == $Kinds$Kind::MTH) {
						if (sym->name == methodName) {
							$assign(lastFound, $cast($Symbol$MethodSymbol, sym));
						}
					}
				}
			}
		}
		if (lastFound != nullptr) {
			return lastFound;
		}
	} else {
		{
			$var($Iterator, i$, $nc($($nc($($nc(tsym)->members()))->getSymbolsByName(methodName)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if (sym != nullptr && sym->kind == $Kinds$Kind::MTH) {
						if (hasParameterTypes($cast($Symbol$MethodSymbol, sym), paramTypes)) {
							return $cast($Symbol$MethodSymbol, sym);
						}
					}
				}
			}
		}
	}
	$var($Type, superclass, $nc(tsym)->getSuperclass());
	if ($nc(superclass)->tsym != nullptr) {
		$var($Symbol$MethodSymbol, msym, searchMethod($cast($Symbol$ClassSymbol, superclass->tsym), methodName, paramTypes, searched));
		if (msym != nullptr) {
			return msym;
		}
	}
	$var($List, intfs, tsym->getInterfaces());
	{
		$var($List, l, intfs);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Type, intf, $cast($Type, l->head));
			if ($nc(intf)->isErroneous()) {
				continue;
			}
			$var($Symbol$MethodSymbol, msym, searchMethod($cast($Symbol$ClassSymbol, $nc(intf)->tsym), methodName, paramTypes, searched));
			if (msym != nullptr) {
				return msym;
			}
		}
	}
	$var($Symbol$ClassSymbol, encl, $nc(tsym->owner)->enclClass());
	if (encl != nullptr) {
		$var($Symbol$MethodSymbol, msym, searchMethod(encl, methodName, paramTypes, searched));
		if (msym != nullptr) {
			return msym;
		}
	}
	return nullptr;
}

bool JavacTrees::hasParameterTypes($Symbol$MethodSymbol* method, $List* paramTypes) {
	$useLocalCurrentObjectStackCache();
	if (paramTypes == nullptr) {
		return true;
	}
	int32_t var$0 = $nc($($nc(method)->params()))->size();
	if (var$0 != $nc(paramTypes)->size()) {
		return false;
	}
	$var($List, methodParamTypes, $nc($($cast($Type, $nc(method)->asType())))->getParameterTypes());
	bool var$1 = !$Type::isErroneous(paramTypes);
	if (var$1 && $nc(this->types)->isSubtypes(paramTypes, methodParamTypes)) {
		return true;
	}
	$assign(methodParamTypes, $nc(this->types)->erasureRecursive(methodParamTypes));
	return $nc(this->types)->isSameTypes(paramTypes, methodParamTypes);
}

$TypeMirror* JavacTrees::getTypeMirror($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($Tree, t, $nc(path)->getLeaf());
	$var($Type, ty, $nc(($cast($JCTree, t)))->type);
	return ty == nullptr ? ($TypeMirror*)nullptr : static_cast<$TypeMirror*>($nc(ty)->stripMetadataIfNeeded());
}

$1Scope* JavacTrees::getScope($TreePath* path) {
	return $JavacScope::create($(getAttrContext(path)));
}

$String* JavacTrees::getDocComment($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($CompilationUnitTree, t, $nc(path)->getCompilationUnit());
	$var($Tree, leaf, path->getLeaf());
	{
		$var($JCTree$JCCompilationUnit, compilationUnit, nullptr);
		$var($JCTree, tree, nullptr);
		bool var$1 = $instanceOf($JCTree$JCCompilationUnit, t);
		if (var$1) {
			$assign(compilationUnit, $cast($JCTree$JCCompilationUnit, t));
			var$1 = true;
		}
		bool var$0 = var$1;
		if (var$0) {
			bool var$2 = $instanceOf($JCTree, leaf);
			if (var$2) {
				$assign(tree, $cast($JCTree, leaf));
				var$2 = true;
			}
			var$0 = var$2;
		}
		if (var$0) {
			if ($nc(compilationUnit)->docComments != nullptr) {
				return $nc(compilationUnit->docComments)->getCommentText(tree);
			}
		}
	}
	return nullptr;
}

$DocCommentTree* JavacTrees::getDocCommentTree($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($CompilationUnitTree, t, $nc(path)->getCompilationUnit());
	$var($Tree, leaf, path->getLeaf());
	{
		$var($JCTree$JCCompilationUnit, compilationUnit, nullptr);
		$var($JCTree, tree, nullptr);
		bool var$1 = $instanceOf($JCTree$JCCompilationUnit, t);
		if (var$1) {
			$assign(compilationUnit, $cast($JCTree$JCCompilationUnit, t));
			var$1 = true;
		}
		bool var$0 = var$1;
		if (var$0) {
			bool var$2 = $instanceOf($JCTree, leaf);
			if (var$2) {
				$assign(tree, $cast($JCTree, leaf));
				var$2 = true;
			}
			var$0 = var$2;
		}
		if (var$0) {
			if ($nc(compilationUnit)->docComments != nullptr) {
				return $nc(compilationUnit->docComments)->getCommentTree(tree);
			}
		}
	}
	return nullptr;
}

$DocCommentTree* JavacTrees::getDocCommentTree($Element* e) {
	$var($TreePath, path, getPath(e));
	if (path == nullptr) {
		return nullptr;
	}
	return getDocCommentTree(path);
}

$DocCommentTree* JavacTrees::getDocCommentTree($Element* e, $String* relativeFileName) {
	$useLocalCurrentObjectStackCache();
	$var($PackageElement, pkg, $nc(this->elements)->getPackageOf(e));
	$init($StandardLocation);
	$var($FileObject, fileForInput, $nc(this->fileManager)->getFileForInput($StandardLocation::SOURCE_PATH, $($nc($of($($nc(pkg)->getQualifiedName())))->toString()), relativeFileName));
	if (fileForInput == nullptr) {
		$throwNew($FileNotFoundException, relativeFileName);
	}
	return getDocCommentTree(fileForInput);
}

bool JavacTrees::isAccessible($1Scope* scope, $TypeElement* type) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, classSymbol, nullptr);
	$var($JavacScope, javacScope, nullptr);
	bool var$2 = $instanceOf($JavacScope, scope);
	if (var$2) {
		$assign(javacScope, $cast($JavacScope, scope));
		var$2 = true;
	}
	bool var$1 = (var$2);
	if (var$1) {
		bool var$3 = $instanceOf($Symbol$ClassSymbol, type);
		if (var$3) {
			$assign(classSymbol, $cast($Symbol$ClassSymbol, type));
			var$3 = true;
		}
		var$1 = (var$3);
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->resolve)->isAccessible($nc(javacScope)->env, static_cast<$Symbol$TypeSymbol*>(classSymbol), true);
}

bool JavacTrees::isAccessible($1Scope* scope, $Element* member, $DeclaredType* type) {
	$useLocalCurrentObjectStackCache();
	$var($Type, codeType, nullptr);
	$var($Symbol, symbol, nullptr);
	$var($JavacScope, javacScope, nullptr);
	bool var$3 = $instanceOf($JavacScope, scope);
	if (var$3) {
		$assign(javacScope, $cast($JavacScope, scope));
		var$3 = true;
	}
	bool var$2 = (var$3);
	if (var$2) {
		bool var$4 = $instanceOf($Symbol, member);
		if (var$4) {
			$assign(symbol, $cast($Symbol, member));
			var$4 = true;
		}
		var$2 = (var$4);
	}
	bool var$1 = var$2;
	if (var$1) {
		bool var$5 = $instanceOf($Type, type);
		if (var$5) {
			$assign(codeType, $cast($Type, type));
			var$5 = true;
		}
		var$1 = (var$5);
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->resolve)->isAccessible($nc(javacScope)->env, codeType, symbol, true);
}

$Env* JavacTrees::getAttrContext($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JCTree, $($nc(path)->getLeaf())))) {
		$throwNew($IllegalArgumentException);
	}
	if (this->javacTaskImpl != nullptr) {
		$nc(this->javacTaskImpl)->enter(nullptr);
	}
	$var($JCTree$JCCompilationUnit, unit, $cast($JCTree$JCCompilationUnit, $nc(path)->getCompilationUnit()));
	$var($JavacTrees$Copier, copier, createCopier($($nc(this->treeMaker)->forToplevel(unit))));
	$var($Env, env, nullptr);
	$var($JCTree$JCMethodDecl, method, nullptr);
	$var($JCTree$JCVariableDecl, field, nullptr);
	$var($List, l, $List::nil());
	$var($TreePath, p, path);
	while (p != nullptr) {
		$assign(l, $nc(l)->prepend($(p->getLeaf())));
		$assign(p, p->getParentPath());
	}
	for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
		$var($Tree, tree, $cast($Tree, l->head));
		$init($JavacTrees$8);
		switch ($nc($JavacTrees$8::$SwitchMap$com$sun$source$tree$Tree$Kind)->get($nc(($($nc(tree)->getKind())))->ordinal())) {
		case 1:
			{
				$assign(env, $nc(this->enter)->getTopLevelEnv($cast($JCTree$JCCompilationUnit, tree)));
				break;
			}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{}
		case 5:
			{}
		case 6:
			{
				$assign(env, $nc(this->enter)->getClassEnv($nc(($cast($JCTree$JCClassDecl, tree)))->sym));
				if (env == nullptr) {
					return nullptr;
				}
				break;
			}
		case 7:
			{
				$assign(method, $cast($JCTree$JCMethodDecl, tree));
				$assign(env, $nc(this->memberEnter)->getMethodEnv(method, env));
				break;
			}
		case 8:
			{
				$assign(field, $cast($JCTree$JCVariableDecl, tree));
				break;
			}
		case 9:
			{
				{
					if (method != nullptr) {
						{
							$var($Throwable, var$0, nullptr);
							try {
								$Assert::check($equals(method->body, tree));
								$set(method, body, $cast($JCTree$JCBlock, $nc(copier)->copy($cast($JCTree$JCBlock, tree), $cast($JCTree, $(path->getLeaf())))));
								$assign(env, attribStatToTree(method->body, env, copier->leafCopy, copier->copiedClasses));
							} catch ($Throwable& var$1) {
								$assign(var$0, var$1);
							} /*finally*/ {
								$set(method, body, $cast($JCTree$JCBlock, tree));
							}
							if (var$0 != nullptr) {
								$throw(var$0);
							}
						}
					} else {
						$var($JCTree$JCBlock, body, $cast($JCTree$JCBlock, $nc(copier)->copy($cast($JCTree$JCBlock, tree), $cast($JCTree, $(path->getLeaf())))));
						$assign(env, attribStatToTree(body, env, copier->leafCopy, copier->copiedClasses));
					}
					return env;
				}
			}
		default:
			{
				if (field != nullptr && $equals($cast($JCTree$JCExpression, field->getInitializer()), tree)) {
					$assign(env, $nc(this->memberEnter)->getInitEnv(field, env));
					$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, $nc(copier)->copy($cast($JCTree$JCExpression, tree), $cast($JCTree, $(path->getLeaf())))));
					$assign(env, attribExprToTree(expr, env, copier->leafCopy, copier->copiedClasses));
					return env;
				}
			}
		}
	}
	return (field != nullptr) ? $nc(this->memberEnter)->getInitEnv(field, env) : env;
}

$Env* JavacTrees::attribStatToTree($JCTree* stat, $Env* env, $JCTree* tree, $Map* copiedClasses) {
	$var($Env, result, $nc(this->attr)->attribStatToTree(stat, env, tree));
	fixLocalClassNames(copiedClasses, env);
	return result;
}

$Env* JavacTrees::attribExprToTree($JCTree$JCExpression* expr, $Env* env, $JCTree* tree, $Map* copiedClasses) {
	$var($Env, result, $nc(this->attr)->attribExprToTree(expr, env, tree));
	fixLocalClassNames(copiedClasses, env);
	return result;
}

void JavacTrees::fixLocalClassNames($Map* copiedClasses, $Env* lastEnv) {
	$useLocalCurrentObjectStackCache();
	$var($Map, flatnameForClass, nullptr);
	{
		$var($Iterator, i$, $nc($($nc(copiedClasses)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				if ($nc(($cast($JCTree$JCClassDecl, $($nc(e)->getKey()))))->sym != nullptr) {
					$var($Name, origName, nullptr);
					if ($nc(($cast($JCTree$JCClassDecl, $(e->getValue()))))->sym != nullptr) {
						$assign(origName, $nc($nc(($cast($JCTree$JCClassDecl, $(e->getValue()))))->sym)->flatname);
					} else {
						if (flatnameForClass == nullptr) {
							$assign(flatnameForClass, prepareFlatnameForClass(lastEnv));
						}
						$assign(origName, $cast($Name, $nc(flatnameForClass)->get($(e->getValue()))));
					}
					if (origName != nullptr) {
						$set($nc($nc(($cast($JCTree$JCClassDecl, $(e->getKey()))))->sym), flatname, origName);
					}
				}
			}
		}
	}
}

$Map* JavacTrees::prepareFlatnameForClass($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Map, flatNameForClass, $new($HashMap));
	$var($Symbol, enclClass, $nc($nc(env)->enclClass)->sym);
	if (enclClass != nullptr && ((int64_t)(enclClass->flags_field & (uint64_t)(int64_t)$Flags::UNATTRIBUTED)) != 0) {
		$var($ListBuffer, toClear, $new($ListBuffer));
		$$new($JavacTrees$3, this, toClear, flatNameForClass)->scan(static_cast<$JCTree*>(env->enclClass));
		$nc($(toClear->stream()))->forEach(static_cast<$Consumer*>($$new(JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0, this)));
	}
	return flatNameForClass;
}

$JavaFileObject* JavacTrees::asJavaFileObject($FileObject* fileObject) {
	$init(JavacTrees);
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, jfo, nullptr);
	{
		$var($JavaFileObject, javaFileObject, nullptr);
		bool var$0 = $instanceOf($JavaFileObject, fileObject);
		if (var$0) {
			$assign(javaFileObject, $cast($JavaFileObject, fileObject));
			var$0 = true;
		}
		if (var$0) {
			$init($JavaFileObject$Kind);
			checkHtmlKind(fileObject, $JavaFileObject$Kind::HTML);
			return javaFileObject;
		}
	}
	checkHtmlKind(fileObject);
	$assign(jfo, $new($JavacTrees$HtmlFileObject, fileObject));
	return jfo;
}

void JavacTrees::checkHtmlKind($FileObject* fileObject) {
	$init(JavacTrees);
	$useLocalCurrentObjectStackCache();
	checkHtmlKind(fileObject, $($BaseFileManager::getKind($($nc(fileObject)->getName()))));
}

void JavacTrees::checkHtmlKind($FileObject* fileObject, $JavaFileObject$Kind* kind) {
	$init(JavacTrees);
	$useLocalCurrentObjectStackCache();
	$init($JavaFileObject$Kind);
	if (kind != $JavaFileObject$Kind::HTML) {
		$throwNew($IllegalArgumentException, $$str({"HTML file expected:"_s, $($nc(fileObject)->getName())}));
	}
}

$DocCommentTree* JavacTrees::getDocCommentTree($FileObject* fileObject) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, jfo, asJavaFileObject(fileObject));
	$var($DiagnosticSource, diagSource, $new($DiagnosticSource, jfo, this->log));
	$var($Tokens$Comment, comment, $new($JavacTrees$4, this, fileObject));
	return $$new($DocCommentParser, this->parser, diagSource, comment, true)->parse();
}

$DocTreePath* JavacTrees::getDocTreePath($FileObject* fileObject, $PackageElement* packageElement) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, jfo, asJavaFileObject(fileObject));
	$var($DocCommentTree, docCommentTree, getDocCommentTree(static_cast<$FileObject*>(jfo)));
	if (docCommentTree == nullptr) {
		return nullptr;
	}
	$var($TreePath, treePath, makeTreePath($cast($Symbol$PackageSymbol, packageElement), jfo, docCommentTree));
	return $new($DocTreePath, treePath, docCommentTree);
}

void JavacTrees::setBreakIterator($BreakIterator* breakiterator) {
	$set(this, breakIterator, breakiterator);
}

$String* JavacTrees::getCharacters($EntityTree* tree) {
	return $Entity::getCharacters(tree);
}

$JavacTrees$Copier* JavacTrees::createCopier($TreeMaker* maker) {
	return $new($JavacTrees$Copier, maker);
}

$TypeMirror* JavacTrees::getOriginalType($ErrorType* errorType) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Type$ErrorType, targetErrorType, nullptr);
		bool var$0 = $instanceOf($Type$ErrorType, errorType);
		if (var$0) {
			$assign(targetErrorType, $cast($Type$ErrorType, errorType));
			var$0 = true;
		}
		if (var$0) {
			return $nc(targetErrorType)->getOriginalType();
		}
	}
	{
		$var($Type$ClassType, classType, nullptr);
		bool var$1 = $instanceOf($Type$ClassType, errorType);
		if (var$1) {
			$assign(classType, $cast($Type$ClassType, errorType));
			var$1 = true;
		}
		$init($TypeKind);
		if (var$1 && $nc(errorType)->getKind() == $TypeKind::ERROR) {
			return $cast($TypeMirror, $nc(this->extraType2OriginalMap)->computeIfAbsent(classType, static_cast<$Function*>($$new(JavacTrees$$Lambda$lambda$getOriginalType$1$1, this, classType))));
		}
	}
	$init($Type);
	return static_cast<$TypeMirror*>(static_cast<$Type*>($Type::noType));
}

void JavacTrees::printMessage($Diagnostic$Kind* kind, $CharSequence* msg, $Tree* t, $CompilationUnitTree* root) {
	printMessage(kind, msg, $($nc(($cast($JCTree, t)))->pos()), root);
}

void JavacTrees::printMessage($Diagnostic$Kind* kind, $CharSequence* msg, $DocTree* t, $DocCommentTree* c, $CompilationUnitTree* root) {
	printMessage(kind, msg, $($nc(($cast($DCTree, t)))->pos($cast($DCTree$DCDocComment, c))), root);
}

void JavacTrees::printMessage($Diagnostic$Kind* kind, $CharSequence* msg, $JCDiagnostic$DiagnosticPosition* pos$renamed, $CompilationUnitTree* root) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, pos, pos$renamed);
	$var($JavaFileObject, oldSource, nullptr);
	$var($JavaFileObject, newSource, nullptr);
	$assign(newSource, $nc(root)->getSourceFile());
	if (newSource == nullptr) {
		$assign(pos, nullptr);
	} else {
		$assign(oldSource, $nc(this->log)->useSource(newSource));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($JavacTrees$8);
			switch ($nc($JavacTrees$8::$SwitchMap$javax$tools$Diagnostic$Kind)->get($nc((kind))->ordinal())) {
			case 1:
				{
					$init($JCDiagnostic$DiagnosticFlag);
					$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::API, pos, $($CompilerProperties$Errors::ProcMessager($($nc(msg)->toString()))));
					break;
				}
			case 2:
				{
					$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::ProcMessager($($nc(msg)->toString()))));
					break;
				}
			case 3:
				{
					$nc(this->log)->mandatoryWarning(pos, $($CompilerProperties$Warnings::ProcMessager($($nc(msg)->toString()))));
					break;
				}
			default:
				{
					$nc(this->log)->note(pos, $($CompilerProperties$Notes::ProcMessager($($nc(msg)->toString()))));
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (oldSource != nullptr) {
				$nc(this->log)->useSource(oldSource);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$TypeMirror* JavacTrees::getLub($CatchTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCCatch, ct, $cast($JCTree$JCCatch, tree));
	$var($JCTree$JCVariableDecl, v, $nc(ct)->param);
	$init($TypeKind);
	if ($nc(v)->type != nullptr && $nc(v->type)->getKind() == $TypeKind::UNION) {
		$var($Type$UnionClassType, ut, $cast($Type$UnionClassType, v->type));
		return $nc(ut)->getLub();
	} else {
		return v->type;
	}
}

$TreePath* JavacTrees::makeTreePath($Symbol$PackageSymbol* psym, $JavaFileObject* jfo, $DocCommentTree* dcTree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCCompilationUnit, jcCompilationUnit, $new($JavacTrees$6, this, $($List::nil()), jfo));
	$set(jcCompilationUnit, docComments, $new($JavacTrees$7, this, dcTree));
	$set(jcCompilationUnit, lineMap, $cast($Position$LineMap, jcCompilationUnit->getLineMap()));
	$set(jcCompilationUnit, modle, $nc(psym)->modle);
	$set(jcCompilationUnit, sourcefile, jfo);
	$set(jcCompilationUnit, namedImportScope, $new($Scope$NamedImportScope, psym));
	$set(jcCompilationUnit, packge, psym);
	$set(jcCompilationUnit, starImportScope, $new($Scope$StarImportScope, psym));
	$set(jcCompilationUnit, toplevelScope, $Scope$WriteableScope::create(psym));
	return $new($TreePath, jcCompilationUnit);
}

$Type* JavacTrees::lambda$getOriginalType$1($Type$ClassType* classType, $Type* tt) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, $nc(classType)->getEnclosingType());
	$var($List, var$1, classType->typarams_field);
	$var($Symbol$TypeSymbol, var$2, classType->tsym);
	return $new($JavacTrees$5, this, var$0, var$1, var$2, $(classType->getMetadata()), classType);
}

void JavacTrees::lambda$prepareFlatnameForClass$0($Symbol$ClassSymbol* c) {
	$nc(this->chk)->clearLocalClassNameIndexes(c);
	$nc(this->chk)->removeCompiled(c);
}

JavacTrees::JavacTrees() {
}

$Class* JavacTrees::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::classInfo$.name)) {
			return JavacTrees$$Lambda$lambda$prepareFlatnameForClass$0::load$(name, initialize);
		}
		if (name->equals(JavacTrees$$Lambda$lambda$getOriginalType$1$1::classInfo$.name)) {
			return JavacTrees$$Lambda$lambda$getOriginalType$1$1::load$(name, initialize);
		}
	}
	$loadClass(JavacTrees, name, initialize, &_JavacTrees_ClassInfo_, allocate$JavacTrees);
	return class$;
}

$Class* JavacTrees::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com