#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$Frame.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$MemberReferenceToLambda.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/comp/Lower$BasicFreeVarCollector.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CAPTURED_OUTER_THIS
#undef CAPTURED_THIS
#undef CAPTURED_VAR
#undef CLASSDEF
#undef LAMBDA
#undef LOCAL_VAR
#undef MTH
#undef NONE
#undef PARAM
#undef TYP
#undef VAR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $LambdaToMethod$1 = ::com::sun::tools::javac::comp::LambdaToMethod$1;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$1 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$1;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$Frame = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$Frame;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
using $LambdaToMethod$LambdaSymbolKind = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind;
using $LambdaToMethod$MemberReferenceToLambda = ::com::sun::tools::javac::comp::LambdaToMethod$MemberReferenceToLambda;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Lower$BasicFreeVarCollector = ::com::sun::tools::javac::comp::Lower$BasicFreeVarCollector;
using $CompilerProperties$Notes = ::com::sun::tools::javac::resources::CompilerProperties$Notes;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/LambdaToMethod;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor, this$0)},
	{"frameStack", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$Frame;>;", $PRIVATE, $field(LambdaToMethod$LambdaAnalyzerPreprocessor, frameStack)},
	{"lambdaCount", "I", nullptr, $PRIVATE, $field(LambdaToMethod$LambdaAnalyzerPreprocessor, lambdaCount)},
	{"typesUnderConstruction", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE, $field(LambdaToMethod$LambdaAnalyzerPreprocessor, typesUnderConstruction)},
	{"syntheticMethodNameCounts", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter;", nullptr, $PRIVATE, $field(LambdaToMethod$LambdaAnalyzerPreprocessor, syntheticMethodNameCounts)},
	{"localClassDefs", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;", $PRIVATE, $field(LambdaToMethod$LambdaAnalyzerPreprocessor, localClassDefs)},
	{"clinits", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(LambdaToMethod$LambdaAnalyzerPreprocessor, clinits)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod;)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor::*)($LambdaToMethod*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::init$))},
	{"analyzeAndPreprocessClass", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCClassDecl*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)($JCTree$JCClassDecl*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::analyzeAndPreprocessClass))},
	{"analyzeLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor::*)($JCTree$JCLambda*,$JCTree$JCExpression*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::analyzeLambda))},
	{"analyzeLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Ljava/lang/String;)Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;", nullptr, $PRIVATE, $method(static_cast<$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)($JCTree$JCLambda*,$String*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::analyzeLambda))},
	{"captureLocalClassDefs", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;)V", nullptr, 0},
	{"capturedDecl", "(ILcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $method(static_cast<$JCTree*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)(int32_t,$Symbol*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::capturedDecl))},
	{"context", "()Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;", "()Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<*>;", $PRIVATE, $method(static_cast<$LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor::context))},
	{"currentClass", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$ClassSymbol*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor::currentClass))},
	{"currentlyInClass", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0},
	{"directlyEnclosingLambda", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $method(static_cast<$JCTree*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor::directlyEnclosingLambda))},
	{"inClassWithinLambda", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor::inClassWithinLambda))},
	{"initSym", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;J)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)($Symbol$ClassSymbol*,int64_t)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::initSym))},
	{"lambdaFieldAccessFilter", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor::*)($JCTree$JCFieldAccess*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::lambdaFieldAccessFilter))},
	{"lambdaIdentSymbolFilter", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor::*)($Symbol*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::lambdaIdentSymbolFilter))},
	{"lambdaNewClassFilter", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Z", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<*>;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Z", $PRIVATE, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor::*)($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext*,$JCTree$JCNewClass*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::lambdaNewClassFilter))},
	{"owner", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor::owner))},
	{"owner", "(Z)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(LambdaToMethod$LambdaAnalyzerPreprocessor::*)(bool)>(&LambdaToMethod$LambdaAnalyzerPreprocessor::owner))},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "ReferenceTranslationContext", $FINAL},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "LambdaTranslationContext", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "TranslationContext", $ABSTRACT},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$Frame", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "Frame", $PRIVATE},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "SyntheticMethodNameCounter", $PRIVATE},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::init$($LambdaToMethod* this$0) {
	$set(this, this$0, this$0);
	$TreeTranslator::init$();
	this->lambdaCount = 0;
	$set(this, syntheticMethodNameCounts, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, this));
	$set(this, clinits, $new($HashMap));
}

$JCTree$JCClassDecl* LambdaToMethod$LambdaAnalyzerPreprocessor::analyzeAndPreprocessClass($JCTree$JCClassDecl* tree) {
	$set(this, frameStack, $List::nil());
	$set(this, typesUnderConstruction, $List::nil());
	$set(this, localClassDefs, $new($HashMap));
	return $cast($JCTree$JCClassDecl, translate(static_cast<$JCTree*>(tree)));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitApply($JCTree$JCMethodInvocation* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, previousNascentTypes, this->typesUnderConstruction);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Name, methName, $TreeInfo::name($nc(tree)->meth));
			if (methName == $nc(this->this$0->names)->_this || methName == $nc(this->this$0->names)->_super) {
				$set(this, typesUnderConstruction, $nc(this->typesUnderConstruction)->prepend($(currentClass())));
			}
			$TreeTranslator::visitApply(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, typesUnderConstruction, previousNascentTypes);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Symbol$ClassSymbol* LambdaToMethod$LambdaAnalyzerPreprocessor::currentClass() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->frameStack)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frame, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc($nc(frame)->tree)->hasTag($JCTree$Tag::CLASSDEF)) {
					$var($JCTree$JCClassDecl, cdef, $cast($JCTree$JCClassDecl, frame->tree));
					return $nc(cdef)->sym;
				}
			}
		}
	}
	return nullptr;
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitBlock($JCTree$JCBlock* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, prevStack, this->frameStack);
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool var$1 = $nc(this->frameStack)->nonEmpty();
			$init($JCTree$Tag);
			if (var$1 && $nc($nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $nc(this->frameStack)->head)))->tree)->hasTag($JCTree$Tag::CLASSDEF)) {
				$set(this, frameStack, $nc(this->frameStack)->prepend($$new($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, this, tree)));
			}
			$TreeTranslator::visitBlock(tree);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$set(this, frameStack, prevStack);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, prevStack, this->frameStack);
	int32_t prevLambdaCount = this->lambdaCount;
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, prevSyntheticMethodNameCounts, this->syntheticMethodNameCounts);
	$var($Map, prevClinits, this->clinits);
	$var($DiagnosticSource, prevSource, $nc(this->this$0->log)->currentSource());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->this$0->log)->useSource($nc($nc(tree)->sym)->sourcefile);
			this->lambdaCount = 0;
			$set(this, syntheticMethodNameCounts, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, this));
			$assign(prevClinits, $new($HashMap));
			$init($Kinds$Kind);
			if ($nc($nc($nc(tree)->sym)->owner)->kind == $Kinds$Kind::MTH) {
				$nc(this->localClassDefs)->put(tree->sym, tree);
			}
			if (directlyEnclosingLambda() != nullptr) {
				$set($nc($nc(tree)->sym), owner, owner());
				if ($nc(tree->sym)->hasOuterInstance()) {
					$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, localContext, context());
					$var($Symbol$TypeSymbol, outerInstanceSymbol, $nc($($nc($nc(tree->sym)->type)->getEnclosingType()))->tsym);
					while (localContext != nullptr && !$nc(localContext->owner)->isStatic()) {
						$init($JCTree$Tag);
						if ($nc(localContext->tree)->hasTag($JCTree$Tag::LAMBDA)) {
							$var($JCTree, block, capturedDecl(localContext->depth, outerInstanceSymbol));
							if (block == nullptr) {
								break;
							}
							$init($LambdaToMethod$LambdaSymbolKind);
							$nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, localContext)))->addSymbol(outerInstanceSymbol, $LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS);
						}
						$assign(localContext, localContext->prev);
					}
				}
			}
			$set(this, frameStack, $nc(this->frameStack)->prepend($$new($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, this, tree)));
			$TreeTranslator::visitClassDef(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->this$0->log)->useSource($($nc(prevSource)->getFile()));
			$set(this, frameStack, prevStack);
			this->lambdaCount = prevLambdaCount;
			$set(this, syntheticMethodNameCounts, prevSyntheticMethodNameCounts);
			$set(this, clinits, prevClinits);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = context() != nullptr;
	if (var$0 && lambdaIdentSymbolFilter($nc(tree)->sym)) {
		$init($Kinds$Kind);
		if ($nc($nc(tree)->sym)->kind == $Kinds$Kind::VAR && $nc($nc(tree->sym)->owner)->kind == $Kinds$Kind::MTH && $nc(tree->type)->constValue() == nullptr) {
			$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, localContext, context());
			while (localContext != nullptr) {
				$init($JCTree$Tag);
				if ($nc(localContext->tree)->getTag() == $JCTree$Tag::LAMBDA) {
					$var($JCTree, block, capturedDecl(localContext->depth, tree->sym));
					if (block == nullptr) {
						break;
					}
					$init($LambdaToMethod$LambdaSymbolKind);
					$nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, localContext)))->addSymbol(tree->sym, $LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR);
				}
				$assign(localContext, localContext->prev);
			}
		} else {
			if ($nc($nc(tree->sym)->owner)->kind == $Kinds$Kind::TYP) {
				$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, localContext, context());
				while (localContext != nullptr && !$nc(localContext->owner)->isStatic()) {
					$init($JCTree$Tag);
					if ($nc(localContext->tree)->hasTag($JCTree$Tag::LAMBDA)) {
						$var($JCTree, block, capturedDecl(localContext->depth, tree->sym));
						if (block == nullptr) {
							break;
						}
						$init($LambdaToMethod$1);
						{
							$var($JCTree$JCClassDecl, cdecl$, nullptr)
							switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(block)->getTag())))->ordinal())) {
							case 4:
								{
									$assign(cdecl$, $cast($JCTree$JCClassDecl, block));
									$init($LambdaToMethod$LambdaSymbolKind);
									$nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, localContext)))->addSymbol($nc(cdecl$)->sym, $LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS);
									break;
								}
							default:
								{
									$Assert::error("bad block kind"_s);
								}
							}
						}
					}
					$assign(localContext, localContext->prev);
				}
			}
		}
	}
	$TreeTranslator::visitIdent(tree);
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitLambda($JCTree$JCLambda* tree) {
	analyzeLambda(tree, "lambda.stat"_s);
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::analyzeLambda($JCTree$JCLambda* tree, $JCTree$JCExpression* methodReferenceReceiver) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, rcvr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(methodReferenceReceiver))));
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, context, analyzeLambda(tree, "mref.stat.1"_s));
	if (rcvr != nullptr) {
		$set($nc(context), methodReferenceReceiver, rcvr);
	}
}

$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* LambdaToMethod$LambdaAnalyzerPreprocessor::analyzeLambda($JCTree$JCLambda* tree, $String* statKey) {
	$useLocalCurrentObjectStackCache();
	$var($List, prevStack, this->frameStack);
	{
		$var($Throwable, var$0, nullptr);
		$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, context, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, this, tree));
			$set(this, frameStack, $nc(this->frameStack)->prepend($$new($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, this, tree)));
			{
				$var($Iterator, i$, $nc($nc(tree)->params)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
					{
						$init($LambdaToMethod$LambdaSymbolKind);
						context->addSymbol($nc(param)->sym, $LambdaToMethod$LambdaSymbolKind::PARAM);
						$nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $nc(this->frameStack)->head)))->addLocal($nc(param)->sym);
					}
				}
			}
			$nc(this->this$0->contextMap)->put(tree, context);
			$TreeTranslator::visitLambda(tree);
			context->complete();
			if (this->this$0->dumpLambdaToMethodStats) {
				$nc(this->this$0->log)->note(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($nc(this->this$0->diags)->noteKey(statKey, $$new($ObjectArray, {
					$($of($Boolean::valueOf(context->needsAltMetafactory()))),
					$of(context->translatedSym)
				}))));
			}
			$assign(var$2, context);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, frameStack, prevStack);
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

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, prevStack, this->frameStack);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, frameStack, $nc(this->frameStack)->prepend($$new($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, this, tree)));
			$TreeTranslator::visitMethodDef(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, frameStack, prevStack);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitNewClass($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$TypeSymbol, def, $nc($nc(tree)->type)->tsym);
	bool inReferencedClass = currentlyInClass(def);
	bool isLocal = $nc(def)->isDirectlyOrIndirectlyLocal();
	if (inReferencedClass && isLocal || lambdaNewClassFilter($(context()), tree)) {
		$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, localContext, context());
		$var($Symbol$TypeSymbol, outerInstanceSymbol, $nc($($nc(tree->type)->getEnclosingType()))->tsym);
		while (localContext != nullptr && !$nc(localContext->owner)->isStatic()) {
			$init($JCTree$Tag);
			if ($nc(localContext->tree)->hasTag($JCTree$Tag::LAMBDA)) {
				if (outerInstanceSymbol != nullptr) {
					$var($JCTree, block, capturedDecl(localContext->depth, outerInstanceSymbol));
					if (block == nullptr) {
						break;
					}
				}
				$init($LambdaToMethod$LambdaSymbolKind);
				$nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, localContext)))->addSymbol(outerInstanceSymbol, $LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS);
			}
			$assign(localContext, localContext->prev);
		}
	}
	$TreeTranslator::visitNewClass(tree);
	if (context() != nullptr && !inReferencedClass && isLocal) {
		$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambdaContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, context()));
		captureLocalClassDefs(def, lambdaContext);
	}
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::captureLocalClassDefs($Symbol* csym, $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* lambdaContext) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, localCDef, $cast($JCTree$JCClassDecl, $nc(this->localClassDefs)->get(csym)));
	if (localCDef != nullptr && $nc($nc(lambdaContext)->freeVarProcessedLocalClasses)->add(csym)) {
		$var($Lower$BasicFreeVarCollector, fvc, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$1, this, static_cast<$Lower*>($nc(this->this$0->lower)), lambdaContext));
		fvc->scan(static_cast<$JCTree*>(localCDef));
	}
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor::currentlyInClass($Symbol* csym) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->frameStack)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frame, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc($nc(frame)->tree)->hasTag($JCTree$Tag::CLASSDEF)) {
					$var($JCTree$JCClassDecl, cdef, $cast($JCTree$JCClassDecl, frame->tree));
					if ($equals($nc(cdef)->sym, csym)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitReference($JCTree$JCMemberReference* tree) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, rcontext, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, this, tree));
	$nc(this->this$0->contextMap)->put(tree, rcontext);
	if (rcontext->needsConversionToLambda()) {
		$var($LambdaToMethod$MemberReferenceToLambda, conv, $new($LambdaToMethod$MemberReferenceToLambda, this->this$0, tree, rcontext, $(owner())));
		$var($JCTree$JCLambda, var$0, conv->lambda());
		analyzeLambda(var$0, $(conv->getReceiverExpression()));
	} else {
		$TreeTranslator::visitReference(tree);
		if (this->this$0->dumpLambdaToMethodStats) {
			$nc(this->this$0->log)->note(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Notes::MrefStat(rcontext->needsAltMetafactory(), nullptr)));
		}
	}
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if (context() != nullptr && $nc($nc(tree)->sym)->kind == $Kinds$Kind::VAR && ($nc(tree->sym)->name == $nc(this->this$0->names)->_this || $nc($nc(tree)->sym)->name == $nc(this->this$0->names)->_super)) {
		$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, localContext, context());
		while (localContext != nullptr && !$nc(localContext->owner)->isStatic()) {
			$init($JCTree$Tag);
			if ($nc(localContext->tree)->hasTag($JCTree$Tag::LAMBDA)) {
				$var($JCTree$JCClassDecl, clazz, $cast($JCTree$JCClassDecl, capturedDecl(localContext->depth, tree->sym)));
				if (clazz == nullptr) {
					break;
				}
				$init($LambdaToMethod$LambdaSymbolKind);
				$nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, localContext)))->addSymbol($nc(clazz)->sym, $LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS);
			}
			$assign(localContext, localContext->prev);
		}
	}
	$TreeTranslator::visitSelect(tree);
}

void LambdaToMethod$LambdaAnalyzerPreprocessor::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, context, this->context());
	{
		$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambdaContext, nullptr);
		bool var$0 = context != nullptr;
		if (var$0) {
			bool var$1 = $instanceOf($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, context);
			if (var$1) {
				$assign(lambdaContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, context));
				var$1 = true;
			}
			var$0 = var$1;
		}
		if (var$0) {
			$init($JCTree$Tag);
			if ($nc($nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $nc(this->frameStack)->head)))->tree)->hasTag($JCTree$Tag::LAMBDA)) {
				$init($LambdaToMethod$LambdaSymbolKind);
				$nc(lambdaContext)->addSymbol($nc(tree)->sym, $LambdaToMethod$LambdaSymbolKind::LOCAL_VAR);
			}
			$var($Type, type, $cast($Type, $nc($nc(tree)->sym)->asType()));
		}
	}
	$var($List, prevStack, this->frameStack);
	{
		$var($Throwable, var$2, nullptr);
		try {
			$init($Kinds$Kind);
			if ($nc($nc($nc(tree)->sym)->owner)->kind == $Kinds$Kind::MTH) {
				$nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $nc(this->frameStack)->head)))->addLocal(tree->sym);
			}
			$set(this, frameStack, $nc(this->frameStack)->prepend($$new($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, this, tree)));
			$TreeTranslator::visitVarDef(tree);
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			$set(this, frameStack, prevStack);
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor::owner() {
	return owner(false);
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor::owner(bool skipLambda) {
	$useLocalCurrentObjectStackCache();
	$var($List, frameStack2, this->frameStack);
	while ($nc(frameStack2)->nonEmpty()) {
		$init($LambdaToMethod$1);
		{
			$var($JCTree$JCClassDecl, cdecl$, nullptr)
			$var($JCTree$JCClassDecl, cdecl2, nullptr)
			switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)->getTag())))->ordinal())) {
			case 5:
				{
					if ($nc($nc(($cast($JCTree$JCVariableDecl, $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)))->sym)->isDirectlyOrIndirectlyLocal()) {
						$assign(frameStack2, frameStack2->tail);
						break;
					}
					$assign(cdecl$, $cast($JCTree$JCClassDecl, $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $nc(frameStack2->tail)->head)))->tree));
					return initSym($nc(cdecl$)->sym, (int64_t)($nc($nc(($cast($JCTree$JCVariableDecl, $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)))->sym)->flags() & (uint64_t)(int64_t)8));
				}
			case 6:
				{
					$assign(cdecl2, $cast($JCTree$JCClassDecl, $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $nc(frameStack2->tail)->head)))->tree));
					return initSym($nc(cdecl2)->sym, (int64_t)($nc(($cast($JCTree$JCBlock, $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)))->flags & (uint64_t)(int64_t)8));
				}
			case 4:
				{
					return $nc(($cast($JCTree$JCClassDecl, $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)))->sym;
				}
			case 7:
				{
					return $nc(($cast($JCTree$JCMethodDecl, $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)))->sym;
				}
			case 8:
				{
					if (!skipLambda) {
						return $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, $($nc(this->this$0->contextMap)->get($nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)))))->translatedSym;
					}
				}
			default:
				{
					$assign(frameStack2, frameStack2->tail);
				}
			}
		}
	}
	$Assert::error();
	return nullptr;
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor::initSym($Symbol$ClassSymbol* csym, int64_t flags) {
	$useLocalCurrentObjectStackCache();
	bool isStatic = ((int64_t)(flags & (uint64_t)(int64_t)8)) != 0;
	if (isStatic) {
		$var($Symbol$MethodSymbol, clinit, $nc(this->this$0->attr)->removeClinit(csym));
		if (clinit != nullptr) {
			$nc(this->clinits)->put(csym, clinit);
			return clinit;
		}
		$assign(clinit, $cast($Symbol$MethodSymbol, $nc(this->clinits)->get(csym)));
		if (clinit == nullptr) {
			$var($List, var$0, $List::nil());
			$var($Type, var$1, static_cast<$Type*>($nc(this->this$0->syms)->voidType));
			$assign(clinit, this->this$0->makePrivateSyntheticMethod(8, $nc(this->this$0->names)->clinit, $$new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this->this$0->syms)->methodClass), csym));
			$nc(this->clinits)->put(csym, clinit);
		}
		return clinit;
	} else {
		{
			$var($Iterator, i$, $nc($($nc($nc(csym)->members_field)->getSymbolsByName($nc(this->this$0->names)->init)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, s, $cast($Symbol, i$->next()));
				{
					return s;
				}
			}
		}
	}
	$Assert::error("init not found"_s);
	return nullptr;
}

$JCTree* LambdaToMethod$LambdaAnalyzerPreprocessor::directlyEnclosingLambda() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->frameStack)->isEmpty()) {
		return nullptr;
	}
	$var($List, frameStack2, this->frameStack);
	while ($nc(frameStack2)->nonEmpty()) {
		$init($LambdaToMethod$1);
		switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)->getTag())))->ordinal())) {
		case 4:
			{}
		case 7:
			{
				return nullptr;
			}
		case 8:
			{
				return $nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree;
			}
		default:
			{
				$assign(frameStack2, frameStack2->tail);
			}
		}
	}
	$Assert::error();
	return nullptr;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor::inClassWithinLambda() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->frameStack)->isEmpty()) {
		return false;
	}
	$var($List, frameStack2, this->frameStack);
	bool classFound = false;
	while ($nc(frameStack2)->nonEmpty()) {
		$init($LambdaToMethod$1);
		switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc(($cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frameStack2->head)))->tree)->getTag())))->ordinal())) {
		case 8:
			{
				return classFound;
			}
		case 4:
			{
				classFound = true;
				$assign(frameStack2, frameStack2->tail);
				break;
			}
		default:
			{
				$assign(frameStack2, frameStack2->tail);
			}
		}
	}
	return false;
}

$JCTree* LambdaToMethod$LambdaAnalyzerPreprocessor::capturedDecl(int32_t depth, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	int32_t currentDepth = $nc(this->frameStack)->size() - 1;
	{
		$var($Iterator, i$, $nc(this->frameStack)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, block, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, i$->next()));
			{
				$init($LambdaToMethod$1);
				{
					$var($Symbol$ClassSymbol, clazz, nullptr)
					switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc(block)->tree)->getTag())))->ordinal())) {
					case 4:
						{
							$assign(clazz, $nc(($cast($JCTree$JCClassDecl, block->tree)))->sym);
							bool var$0 = $nc(clazz)->isSubClass(sym, this->this$0->types);
							if (var$0 || $nc(sym)->isMemberOf(clazz, this->this$0->types)) {
								return currentDepth > depth ? ($JCTree*)nullptr : block->tree;
							}
							break;
						}
					case 5:
						{
							$init($Kinds$Kind);
							if (($equals($nc(($cast($JCTree$JCVariableDecl, block->tree)))->sym, sym) && $nc($nc(sym)->owner)->kind == $Kinds$Kind::MTH) || (block->locals != nullptr && $nc(block->locals)->contains(sym))) {
								return currentDepth > depth ? ($JCTree*)nullptr : block->tree;
							}
							break;
						}
					case 6:
						{}
					case 7:
						{}
					case 8:
						{
							if (block->locals != nullptr && $nc(block->locals)->contains(sym)) {
								return currentDepth > depth ? ($JCTree*)nullptr : block->tree;
							}
							break;
						}
					default:
						{
							$Assert::error($$str({"bad decl kind "_s, $($nc(block->tree)->getTag())}));
						}
					}
				}
				--currentDepth;
			}
		}
	}
	return nullptr;
}

$LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* LambdaToMethod$LambdaAnalyzerPreprocessor::context() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->frameStack)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frame, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, i$->next()));
			{
				$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, context, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, $nc(this->this$0->contextMap)->get($nc(frame)->tree)));
				if (context != nullptr) {
					return context;
				}
			}
		}
	}
	return nullptr;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor::lambdaIdentSymbolFilter($Symbol* sym) {
	$init($Kinds$Kind);
	return ($nc(sym)->kind == $Kinds$Kind::VAR || $nc(sym)->kind == $Kinds$Kind::MTH) && !sym->isStatic() && sym->name != $nc(this->this$0->names)->init;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor::lambdaFieldAccessFilter($JCTree$JCFieldAccess* fAccess) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambdaContext, nullptr);
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, patt75254$temp, this->this$0->context);
	bool var$1 = $instanceOf($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, patt75254$temp);
	if (var$1) {
		$assign(lambdaContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, patt75254$temp));
		var$1 = true;
	}
	$init($Kinds$Kind);
	bool var$0 = (var$1) && !$nc($nc(fAccess)->sym)->isStatic() && fAccess->name == $nc(this->this$0->names)->_this && ($nc($nc(fAccess->sym)->owner)->kind == $Kinds$Kind::TYP);
	$init($LambdaToMethod$LambdaSymbolKind);
	return var$0 && !$nc(($cast($Map, $($nc($nc(lambdaContext)->translatedSymbols)->get($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS)))))->isEmpty();
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor::lambdaNewClassFilter($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* context, $JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if (context != nullptr && $nc(tree)->encl == nullptr && tree->def == nullptr && !$nc($($nc(tree->type)->getEnclosingType()))->hasTag($TypeTag::NONE)) {
		$var($Type, encl, $nc(tree->type)->getEnclosingType());
		$var($Type, current, $nc($($nc(context->owner)->enclClass()))->type);
		while (!$nc(current)->hasTag($TypeTag::NONE)) {
			if ($nc(current->tsym)->isSubClass($nc(encl)->tsym, this->this$0->types)) {
				return true;
			}
			$assign(current, current->getEnclosingType());
		}
		return false;
	} else {
		return false;
	}
}

LambdaToMethod$LambdaAnalyzerPreprocessor::LambdaToMethod$LambdaAnalyzerPreprocessor() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor_ClassInfo_, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com