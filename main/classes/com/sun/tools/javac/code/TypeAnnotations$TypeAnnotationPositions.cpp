#include <com/sun/tools/javac/code/TypeAnnotations$TypeAnnotationPositions.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/code/TypeAnnotations$1.h>
#include <com/sun/tools/javac/code/TypeAnnotations$AnnotationType.h>
#include <com/sun/tools/javac/code/TypeAnnotations$TypeAnnotationPositions$1.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <com/sun/tools/javac/code/TypeMetadata$Annotations.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef ANNOTATED_TYPE
#undef ANNOTATIONS
#undef ARRAY
#undef BINDING_VARIABLE
#undef BLOCK
#undef CLASSDEF
#undef ENUM_CONSTANT
#undef ERROR
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef INNER_TYPE
#undef LAMBDA
#undef LOCAL_VARIABLE
#undef MEMBER_SELECT
#undef METHOD
#undef METHODDEF
#undef NEWCLASS
#undef NONE
#undef PACKAGE
#undef PARAMETER
#undef PARAMETERIZED_TYPE
#undef RESOURCE_VARIABLE
#undef SELECT
#undef STATIC
#undef TYPEARRAY
#undef TYPEVAR
#undef TYPE_ARGUMENT
#undef TYPE_PARAMETER
#undef UNION
#undef WILDCARD

using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $TypeAnnotationPosition$TypePathEntry = ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntry;
using $TypeAnnotationPosition$TypePathEntryKind = ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $TypeAnnotations$1 = ::com::sun::tools::javac::code::TypeAnnotations$1;
using $TypeAnnotations$AnnotationType = ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType;
using $TypeAnnotations$TypeAnnotationPositions$1 = ::com::sun::tools::javac::code::TypeAnnotations$TypeAnnotationPositions$1;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeMetadata$Annotations = ::com::sun::tools::javac::code::TypeMetadata$Annotations;
using $TypeMetadata$Entry = ::com::sun::tools::javac::code::TypeMetadata$Entry;
using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeIntersection = ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0 : public $Consumer {
	$class(TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(TypeAnnotations$TypeAnnotationPositions* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* rc) override {
		$nc(inst$)->lambda$visitClassDef$0($cast($Symbol$RecordComponent, rc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0>());
	}
	TypeAnnotations$TypeAnnotationPositions* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0, inst$)},
	{}
};
$MethodInfo TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotations$TypeAnnotationPositions;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::*)(TypeAnnotations$TypeAnnotationPositions*)>(&TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::class$ = nullptr;

$FieldInfo _TypeAnnotations$TypeAnnotationPositions_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/TypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TypeAnnotations$TypeAnnotationPositions, this$0)},
	{"sigOnly", "Z", nullptr, $PRIVATE | $FINAL, $field(TypeAnnotations$TypeAnnotationPositions, sigOnly)},
	{"frames", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PRIVATE, $field(TypeAnnotations$TypeAnnotationPositions, frames)},
	{"isInClass", "Z", nullptr, $PRIVATE, $field(TypeAnnotations$TypeAnnotationPositions, isInClass)},
	{"currentLambda", "Lcom/sun/tools/javac/tree/JCTree$JCLambda;", nullptr, $PRIVATE, $field(TypeAnnotations$TypeAnnotationPositions, currentLambda)},
	{}
};

$MethodInfo _TypeAnnotations$TypeAnnotationPositions_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotations;Z)V", nullptr, 0, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions::*)($TypeAnnotations*,bool)>(&TypeAnnotations$TypeAnnotationPositions::init$))},
	{"appendTypeAnnotationsToOwner", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PRIVATE, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions::*)($Symbol*,$List*)>(&TypeAnnotations$TypeAnnotationPositions::appendTypeAnnotationsToOwner))},
	{"findPosition", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)V", $PRIVATE, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions::*)($JCTree*,$JCTree*,$List*)>(&TypeAnnotations$TypeAnnotationPositions::findPosition))},
	{"lambda$visitClassDef$0", "(Lcom/sun/tools/javac/code/Symbol$RecordComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions::*)($Symbol$RecordComponent*)>(&TypeAnnotations$TypeAnnotationPositions::lambda$visitClassDef$0))},
	{"locateNestedTypes", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/util/ListBuffer;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;", $PRIVATE, $method(static_cast<$ListBuffer*(TypeAnnotations$TypeAnnotationPositions::*)($Type*,$ListBuffer*)>(&TypeAnnotations$TypeAnnotationPositions::locateNestedTypes))},
	{"methodParamIndex", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;)I", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/tree/JCTree;)I", $PRIVATE, $method(static_cast<int32_t(TypeAnnotations$TypeAnnotationPositions::*)($List*,$JCTree*)>(&TypeAnnotations$TypeAnnotationPositions::methodParamIndex))},
	{"peek2", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $method(static_cast<$JCTree*(TypeAnnotations$TypeAnnotationPositions::*)()>(&TypeAnnotations$TypeAnnotationPositions::peek2))},
	{"pop", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PROTECTED},
	{"propagateNewClassAnnotationsToOwner", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PRIVATE, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions::*)($JCTree$JCNewClass*)>(&TypeAnnotations$TypeAnnotationPositions::propagateNewClassAnnotationsToOwner))},
	{"push", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PROTECTED},
	{"resolveFrame", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;ILcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;ILcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PRIVATE, $method(static_cast<$TypeAnnotationPosition*(TypeAnnotations$TypeAnnotationPositions::*)($JCTree*,$JCTree*,$List*,$JCTree$JCLambda*,int32_t,$ListBuffer*)>(&TypeAnnotations$TypeAnnotationPositions::resolveFrame))},
	{"rewriteArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)Lcom/sun/tools/javac/code/Type;", $PRIVATE, $method(static_cast<$Type*(TypeAnnotations$TypeAnnotationPositions::*)($Type$ArrayType*,$List*,$TypeAnnotationPosition*)>(&TypeAnnotations$TypeAnnotationPositions::rewriteArrayType))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"separateAnnotationsKinds", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions::*)($JCTree*,$Type*,$Symbol*,$TypeAnnotationPosition*)>(&TypeAnnotations$TypeAnnotationPositions::separateAnnotationsKinds))},
	{"setTypeAnnotationPos", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", $PRIVATE, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions::*)($List*,$TypeAnnotationPosition*)>(&TypeAnnotations$TypeAnnotationPositions::setTypeAnnotationPos))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toTypeCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)Lcom/sun/tools/javac/code/Attribute$TypeCompound;", nullptr, $PRIVATE, $method(static_cast<$Attribute$TypeCompound*(TypeAnnotations$TypeAnnotationPositions::*)($Attribute$Compound*,$TypeAnnotationPosition*)>(&TypeAnnotations$TypeAnnotationPositions::toTypeCompound))},
	{"typeWithAnnotations", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)Lcom/sun/tools/javac/code/Type;", $PRIVATE, $method(static_cast<$Type*(TypeAnnotations$TypeAnnotationPositions::*)($JCTree*,$Type*,$List*,$List*,$TypeAnnotationPosition*)>(&TypeAnnotations$TypeAnnotationPositions::typeWithAnnotations))},
	{"typeWithAnnotations", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PRIVATE, $method(static_cast<$Type*(TypeAnnotations$TypeAnnotationPositions::*)($Type*,$Type*,$List*)>(&TypeAnnotations$TypeAnnotationPositions::typeWithAnnotations))},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TypeAnnotations$TypeAnnotationPositions_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions", "com.sun.tools.javac.code.TypeAnnotations", "TypeAnnotationPositions", $PRIVATE},
	{"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TypeAnnotations$TypeAnnotationPositions_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_TypeAnnotations$TypeAnnotationPositions_FieldInfo_,
	_TypeAnnotations$TypeAnnotationPositions_MethodInfo_,
	nullptr,
	nullptr,
	_TypeAnnotations$TypeAnnotationPositions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeAnnotations"
};

$Object* allocate$TypeAnnotations$TypeAnnotationPositions($Class* clazz) {
	return $of($alloc(TypeAnnotations$TypeAnnotationPositions));
}

void TypeAnnotations$TypeAnnotationPositions::init$($TypeAnnotations* this$0, bool sigOnly) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	$set(this, frames, $List::nil());
	this->isInClass = false;
	$set(this, currentLambda, nullptr);
	this->sigOnly = sigOnly;
}

void TypeAnnotations$TypeAnnotationPositions::push($JCTree* t) {
	$set(this, frames, $nc(this->frames)->prepend(t));
}

$JCTree* TypeAnnotations$TypeAnnotationPositions::pop() {
	$var($JCTree, t, $cast($JCTree, $nc(this->frames)->head));
	$set(this, frames, $nc(this->frames)->tail);
	return t;
}

$JCTree* TypeAnnotations$TypeAnnotationPositions::peek2() {
	return $cast($JCTree, $nc($nc(this->frames)->tail)->head);
}

void TypeAnnotations$TypeAnnotationPositions::scan($JCTree* tree) {
	push(tree);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeScanner::scan(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TypeAnnotations$TypeAnnotationPositions::separateAnnotationsKinds($JCTree* typetree, $Type* type$renamed, $Symbol* sym, $TypeAnnotationPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($Type, type, type$renamed);
	$var($List, allAnnotations, $nc(sym)->getRawAttributes());
	$var($ListBuffer, declAnnos, $new($ListBuffer));
	$var($ListBuffer, typeAnnos, $new($ListBuffer));
	$var($ListBuffer, onlyTypeAnnos, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(allAnnotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
			{
				$init($TypeAnnotations$1);
				switch ($nc($TypeAnnotations$1::$SwitchMap$com$sun$tools$javac$code$TypeAnnotations$AnnotationType)->get($nc(($(this->this$0->annotationTargetType(a, sym))))->ordinal())) {
				case 1:
					{
						declAnnos->append(a);
						break;
					}
				case 2:
					{
						{
							declAnnos->append(a);
							$var($Attribute$TypeCompound, ta, toTypeCompound(a, pos));
							typeAnnos->append(ta);
							break;
						}
					}
				case 3:
					{
						{
							$var($Attribute$TypeCompound, ta, toTypeCompound(a, pos));
							typeAnnos->append(ta);
							onlyTypeAnnos->append(ta);
							break;
						}
					}
				case 4:
					{
						break;
					}
				}
			}
		}
	}
	if (typeAnnos->isEmpty()) {
		return;
	}
	sym->resetAnnotations();
	sym->setDeclarationAttributes($(declAnnos->toList()));
	$var($List, typeAnnotations, typeAnnos->toList());
	if (type == nullptr) {
		$assign(type, $cast($Type, $nc($($cast($Symbol, sym->getEnclosingElement())))->asType()));
		typeWithAnnotations(typetree, type, typeAnnotations, typeAnnotations, pos);
		sym->appendUniqueTypeAttributes(typeAnnotations);
		return;
	}
	$assign(type, typeWithAnnotations(typetree, type, typeAnnotations, $(onlyTypeAnnos->toList()), pos));
	$init($ElementKind);
	if (sym->getKind() == $ElementKind::METHOD) {
		$set($nc($($nc(sym->type)->asMethodType())), restype, type);
	} else {
		if (sym->getKind() == $ElementKind::PARAMETER && this->currentLambda == nullptr) {
			$set(sym, type, type);
			if ($nc($of($(sym->getQualifiedName())))->equals($nc(this->this$0->names)->_this)) {
				$set($nc($($nc($nc(sym->owner)->type)->asMethodType())), recvtype, type);
			} else {
				$var($Type$MethodType, methType, $nc($nc(sym->owner)->type)->asMethodType());
				$var($List, params, $nc(($cast($Symbol$MethodSymbol, sym->owner)))->params$);
				$var($List, oldArgs, $nc(methType)->argtypes$);
				$var($ListBuffer, newArgs, $new($ListBuffer));
				while ($nc(params)->nonEmpty()) {
					if ($equals(params->head, sym)) {
						newArgs->add(type);
					} else {
						newArgs->add($cast($Type, $nc(oldArgs)->head));
					}
					$assign(oldArgs, $nc(oldArgs)->tail);
					$assign(params, params->tail);
				}
				$set(methType, argtypes$, newArgs->toList());
			}
		} else {
			$set(sym, type, type);
		}
	}
	sym->appendUniqueTypeAttributes(typeAnnotations);
	bool var$3 = sym->getKind() == $ElementKind::PARAMETER;
	bool var$2 = var$3 || sym->getKind() == $ElementKind::LOCAL_VARIABLE;
	bool var$1 = var$2 || sym->getKind() == $ElementKind::RESOURCE_VARIABLE;
	bool var$0 = var$1 || sym->getKind() == $ElementKind::EXCEPTION_PARAMETER;
	if (var$0 || sym->getKind() == $ElementKind::BINDING_VARIABLE) {
		appendTypeAnnotationsToOwner(sym, typeAnnotations);
	}
}

void TypeAnnotations$TypeAnnotationPositions::appendTypeAnnotationsToOwner($Symbol* sym, $List* typeAnnotations) {
	int64_t ownerFlags = $nc($nc(sym)->owner)->flags();
	if (((int64_t)(ownerFlags & (uint64_t)(int64_t)$Flags::BLOCK)) != 0) {
		$var($Symbol$ClassSymbol, cs, $cast($Symbol$ClassSymbol, $nc(sym->owner)->owner));
		if (((int64_t)(ownerFlags & (uint64_t)(int64_t)$Flags::STATIC)) != 0) {
			$nc(cs)->appendClassInitTypeAttributes(typeAnnotations);
		} else {
			$nc(cs)->appendInitTypeAttributes(typeAnnotations);
		}
	} else {
		$nc(sym->owner)->appendUniqueTypeAttributes(typeAnnotations);
	}
}

$Type* TypeAnnotations$TypeAnnotationPositions::typeWithAnnotations($JCTree* typetree, $Type* type, $List* annotations, $List* onlyTypeAnnotations, $TypeAnnotationPosition* pos) {
	$useLocalCurrentObjectStackCache();
	if ($nc(annotations)->isEmpty()) {
		return type;
	}
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, tc, $cast($Attribute$TypeCompound, i$->next()));
			{
				$Assert::check($nc(tc)->position == pos);
			}
		}
	}
	$init($TypeTag);
	if ($nc(type)->hasTag($TypeTag::ARRAY)) {
		return rewriteArrayType($cast($Type$ArrayType, type), annotations, pos);
	}
	if ($nc(type)->hasTag($TypeTag::TYPEVAR)) {
		return type->annotatedType(onlyTypeAnnotations);
	} else {
		$init($TypeKind);
		if (type->getKind() == $TypeKind::UNION) {
			$var($JCTree$JCTypeUnion, tutree, $cast($JCTree$JCTypeUnion, typetree));
			$var($JCTree$JCExpression, fst, $cast($JCTree$JCExpression, $nc($nc(tutree)->alternatives)->get(0)));
			$var($Type, res, typeWithAnnotations(fst, $nc(fst)->type, annotations, onlyTypeAnnotations, pos));
			$set($nc(fst), type, res);
			return type;
		} else {
			$var($Type, enclTy, type);
			$var($Element, enclEl, type->asElement());
			$var($JCTree, enclTr, typetree);
			while (true) {
				$init($ElementKind);
				bool var$2 = enclEl != nullptr && enclEl->getKind() != $ElementKind::PACKAGE && enclTy != nullptr;
				bool var$1 = var$2 && enclTy->getKind() != $TypeKind::NONE;
				bool var$0 = var$1 && enclTy->getKind() != $TypeKind::ERROR;
				if (var$0) {
					$init($Tree$Kind);
					bool var$4 = $nc(enclTr)->getKind() == $Tree$Kind::MEMBER_SELECT;
					bool var$3 = var$4 || $nc(enclTr)->getKind() == $Tree$Kind::PARAMETERIZED_TYPE;
					var$0 = (var$3 || $nc(enclTr)->getKind() == $Tree$Kind::ANNOTATED_TYPE);
				}
				if (!(var$0)) {
					break;
				}
				{
					$init($Tree$Kind);
					if (enclTr->getKind() == $Tree$Kind::MEMBER_SELECT) {
						$assign(enclTy, $nc(enclTy)->getEnclosingType());
						$assign(enclEl, $nc(enclEl)->getEnclosingElement());
						$assign(enclTr, $cast($JCTree, $nc(($cast($JCTree$JCFieldAccess, enclTr)))->getExpression()));
					} else {
						if (enclTr->getKind() == $Tree$Kind::PARAMETERIZED_TYPE) {
							$assign(enclTr, $nc(($cast($JCTree$JCTypeApply, enclTr)))->getType());
						} else {
							$assign(enclTr, $cast($JCTree, $nc(($cast($JCTree$JCAnnotatedType, enclTr)))->getUnderlyingType()));
						}
					}
				}
			}
			if (enclTy != nullptr && enclTy->hasTag($TypeTag::NONE)) {
				switch ($nc(onlyTypeAnnotations)->size()) {
				case 0:
					{
						break;
					}
				case 1:
					{
						$var($JCDiagnostic$DiagnosticPosition, var$5, $nc(typetree)->pos());
						$nc(this->this$0->log)->error(var$5, $($CompilerProperties$Errors::CantTypeAnnotateScoping1($cast($Attribute$Compound, onlyTypeAnnotations->head))));
						break;
					}
				default:
					{
						$var($JCDiagnostic$DiagnosticPosition, var$6, $nc(typetree)->pos());
						$nc(this->this$0->log)->error(var$6, $($CompilerProperties$Errors::CantTypeAnnotateScoping(onlyTypeAnnotations)));
					}
				}
				return type;
			}
			$var($ListBuffer, depth, $new($ListBuffer));
			$var($Type, topTy, enclTy);
			while (true) {
				$init($ElementKind);
				bool var$8 = enclEl != nullptr && enclEl->getKind() != $ElementKind::PACKAGE && topTy != nullptr;
				bool var$7 = var$8 && topTy->getKind() != $TypeKind::NONE;
				if (!(var$7 && topTy->getKind() != $TypeKind::ERROR)) {
					break;
				}
				{
					$assign(topTy, topTy->getEnclosingType());
					$assign(enclEl, enclEl->getEnclosingElement());
					if (topTy != nullptr && topTy->getKind() != $TypeKind::NONE) {
						$init($TypeAnnotationPosition$TypePathEntry);
						$assign(depth, $nc(depth)->append($TypeAnnotationPosition$TypePathEntry::INNER_TYPE));
					}
				}
			}
			if ($nc(depth)->nonEmpty()) {
				$set($nc(pos), location, $nc(pos->location)->appendList($(depth->toList())));
			}
			$var($Type, ret, typeWithAnnotations(type, enclTy, annotations));
			$set($nc(typetree), type, ret);
			return ret;
		}
	}
}

$Type* TypeAnnotations$TypeAnnotationPositions::rewriteArrayType($Type$ArrayType* type, $List* annotations, $TypeAnnotationPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($Type$ArrayType, tomodify, $new($Type$ArrayType, type));
	if ($nc(type)->isVarargs()) {
		$assign(tomodify, tomodify->makeVarargs());
	}
	$var($Type$ArrayType, res, tomodify);
	$var($List, loc, $List::nil());
	$var($Type, tmpType, $nc(type)->elemtype);
	$init($TypeAnnotationPosition$TypePathEntry);
	$assign(loc, $nc(loc)->prepend($TypeAnnotationPosition$TypePathEntry::ARRAY));
	$init($TypeTag);
	while ($nc(tmpType)->hasTag($TypeTag::ARRAY)) {
		$var($Type$ArrayType, arr, $cast($Type$ArrayType, tmpType));
		$var($Type$ArrayType, tmp, $new($Type$ArrayType, arr));
		$set($nc(tomodify), elemtype, tmp);
		$assign(tomodify, tmp);
		$assign(tmpType, arr->elemtype);
		$assign(loc, loc->prepend($TypeAnnotationPosition$TypePathEntry::ARRAY));
	}
	$var($Type, elemType, nullptr);
	if ($nc(tmpType)->getMetadata() != nullptr) {
		$var($List, tcs, nullptr);
		if ($nc($($cast($List, tmpType->getAnnotationMirrors())))->isEmpty()) {
			$assign(tcs, annotations);
		} else {
			$assign(tcs, $nc(annotations)->appendList($($cast($List, tmpType->getAnnotationMirrors()))));
		}
		$init($TypeMetadata$Entry$Kind);
		$assign(elemType, tmpType->cloneWithMetadata($($nc($($nc($(tmpType->getMetadata()))->without($TypeMetadata$Entry$Kind::ANNOTATIONS)))->combine($$new($TypeMetadata$Annotations, tcs)))));
	} else {
		$assign(elemType, tmpType->cloneWithMetadata($$new($TypeMetadata, static_cast<$TypeMetadata$Entry*>($$new($TypeMetadata$Annotations, annotations)))));
	}
	$set($nc(tomodify), elemtype, elemType);
	$set($nc(pos), location, loc);
	return res;
}

$Type* TypeAnnotations$TypeAnnotationPositions::typeWithAnnotations($Type* type, $Type* stopAt, $List* annotations) {
	$var($Type$Visitor, visitor, $new($TypeAnnotations$TypeAnnotationPositions$1, this, stopAt));
	return $cast($Type, $nc(type)->accept(visitor, $of(annotations)));
}

$Attribute$TypeCompound* TypeAnnotations$TypeAnnotationPositions::toTypeCompound($Attribute$Compound* a, $TypeAnnotationPosition* p) {
	return $new($Attribute$TypeCompound, a, p);
}

$TypeAnnotationPosition* TypeAnnotations$TypeAnnotationPositions::resolveFrame($JCTree* tree, $JCTree* frame, $List* path, $JCTree$JCLambda* currentLambda, int32_t outer_type_index, $ListBuffer* location$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, location, location$renamed);
	$init($TypeAnnotations$1);
	{
		$var($JCTree$JCNewClass, frameNewClass, nullptr)
		$var($Symbol$VarSymbol, v, nullptr)
		switch ($nc($TypeAnnotations$1::$SwitchMap$com$sun$source$tree$Tree$Kind)->get($nc(($($nc(frame)->getKind())))->ordinal())) {
		case 1:
			{
				return $TypeAnnotationPosition::typeCast($($nc(location)->toList()), currentLambda, outer_type_index, frame->pos$);
			}
		case 2:
			{
				return $TypeAnnotationPosition::instanceOf($($nc(location)->toList()), currentLambda, frame->pos$);
			}
		case 3:
			{
				$assign(frameNewClass, $cast($JCTree$JCNewClass, frame));
				if ($nc(frameNewClass)->def != nullptr) {
					$var($JCTree$JCClassDecl, frameClassDecl, frameNewClass->def);
					if ($nc($nc(frameClassDecl)->implementing)->contains(tree)) {
						int32_t type_index = $nc(frameClassDecl->implementing)->indexOf(tree);
						return $TypeAnnotationPosition::classExtends($($nc(location)->toList()), currentLambda, type_index, frame->pos$);
					} else {
						return $TypeAnnotationPosition::classExtends($($nc(location)->toList()), currentLambda, frame->pos$);
					}
				} else if ($nc(frameNewClass->typeargs)->contains(tree)) {
					int32_t type_index = $nc(frameNewClass->typeargs)->indexOf(tree);
					return $TypeAnnotationPosition::constructorInvocationTypeArg($($nc(location)->toList()), currentLambda, type_index, frame->pos$);
				} else {
					return $TypeAnnotationPosition::newObj($($nc(location)->toList()), currentLambda, frame->pos$);
				}
			}
		case 4:
			{
				return $TypeAnnotationPosition::newObj($($nc(location)->toList()), currentLambda, frame->pos$);
			}
		case 5:
			{}
		case 6:
			{}
		case 7:
			{}
		case 8:
			{}
		case 9:
			{
				if ($equals($nc(($cast($JCTree$JCClassDecl, frame)))->extending, tree)) {
					return $TypeAnnotationPosition::classExtends($($nc(location)->toList()), currentLambda, frame->pos$);
				} else if ($nc(($cast($JCTree$JCClassDecl, frame))->implementing)->contains(tree)) {
					int32_t type_index = $nc(($cast($JCTree$JCClassDecl, frame))->implementing)->indexOf(tree);
					return $TypeAnnotationPosition::classExtends($($nc(location)->toList()), currentLambda, type_index, frame->pos$);
				} else if ($nc(($cast($JCTree$JCClassDecl, frame))->typarams)->contains(tree)) {
					int32_t parameter_index = $nc(($cast($JCTree$JCClassDecl, frame))->typarams)->indexOf(tree);
					return $TypeAnnotationPosition::typeParameter($($nc(location)->toList()), currentLambda, parameter_index, frame->pos$);
				} else {
					$throwNew($AssertionError, $of($$str({"Could not determine position of tree "_s, tree, " within frame "_s, frame})));
				}
			}
		case 10:
			{
				{
					$var($JCTree$JCMethodDecl, frameMethod, $cast($JCTree$JCMethodDecl, frame));
					if ($nc(frameMethod->thrown)->contains(tree)) {
						int32_t type_index = $nc(frameMethod->thrown)->indexOf(tree);
						return $TypeAnnotationPosition::methodThrows($($nc(location)->toList()), currentLambda, type_index, frame->pos$);
					} else if ($equals(frameMethod->restype, tree)) {
						return $TypeAnnotationPosition::methodReturn($($nc(location)->toList()), currentLambda, frame->pos$);
					} else if ($nc(frameMethod->typarams)->contains(tree)) {
						int32_t parameter_index = $nc(frameMethod->typarams)->indexOf(tree);
						return $TypeAnnotationPosition::methodTypeParameter($($nc(location)->toList()), currentLambda, parameter_index, frame->pos$);
					} else {
						$throwNew($AssertionError, $of($$str({"Could not determine position of tree "_s, tree, " within frame "_s, frame})));
					}
				}
			}
		case 11:
			{
				{
					$var($List, newPath, $nc(path)->tail);
					if ($equals($nc(($cast($JCTree$JCTypeApply, frame)))->clazz, tree)) {
					} else if ($nc(($cast($JCTree$JCTypeApply, frame))->arguments)->contains(tree)) {
						$var($JCTree$JCTypeApply, taframe, $cast($JCTree$JCTypeApply, frame));
						int32_t arg = $nc(taframe->arguments)->indexOf(tree);
						$init($TypeAnnotationPosition$TypePathEntryKind);
						$assign(location, $nc(location)->prepend($$new($TypeAnnotationPosition$TypePathEntry, $TypeAnnotationPosition$TypePathEntryKind::TYPE_ARGUMENT, arg)));
						$var($Type, typeToUse, nullptr);
						$init($JCTree$Tag);
						if ($nc(newPath)->tail != nullptr && $nc(($cast($JCTree, $nc(newPath->tail)->head)))->hasTag($JCTree$Tag::NEWCLASS)) {
							$assign(typeToUse, $nc(($cast($JCTree, $nc(newPath->tail)->head)))->type);
						} else {
							$assign(typeToUse, taframe->type);
						}
						$assign(location, locateNestedTypes(typeToUse, location));
					} else {
						$throwNew($AssertionError, $of($$str({"Could not determine type argument position of tree "_s, tree, " within frame "_s, frame})));
					}
					return resolveFrame($cast($JCTree, $nc(newPath)->head), $cast($JCTree, $nc(newPath->tail)->head), newPath, currentLambda, outer_type_index, location);
				}
			}
		case 12:
			{
				{
					$var($JCTree$JCMemberReference, mrframe, $cast($JCTree$JCMemberReference, frame));
					if ($equals(mrframe->expr, tree)) {
						switch ($nc($TypeAnnotations$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->get($nc((mrframe->mode))->ordinal())) {
						case 1:
							{
								return $TypeAnnotationPosition::methodRef($($nc(location)->toList()), currentLambda, frame->pos$);
							}
						case 2:
							{
								return $TypeAnnotationPosition::constructorRef($($nc(location)->toList()), currentLambda, frame->pos$);
							}
						default:
							{
								$throwNew($AssertionError, $of($$str({"Unknown method reference mode "_s, mrframe->mode, " for tree "_s, tree, " within frame "_s, frame})));
							}
						}
					} else if (mrframe->typeargs != nullptr && $nc(mrframe->typeargs)->contains(tree)) {
						int32_t type_index = $nc(mrframe->typeargs)->indexOf(tree);
						switch ($nc($TypeAnnotations$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->get($nc((mrframe->mode))->ordinal())) {
						case 1:
							{
								return $TypeAnnotationPosition::methodRefTypeArg($($nc(location)->toList()), currentLambda, type_index, frame->pos$);
							}
						case 2:
							{
								return $TypeAnnotationPosition::constructorRefTypeArg($($nc(location)->toList()), currentLambda, type_index, frame->pos$);
							}
						default:
							{
								$throwNew($AssertionError, $of($$str({"Unknown method reference mode "_s, mrframe->mode, " for tree "_s, tree, " within frame "_s, frame})));
							}
						}
					} else {
						$throwNew($AssertionError, $of($$str({"Could not determine type argument position of tree "_s, tree, " within frame "_s, frame})));
					}
				}
			}
		case 13:
			{
				{
					$init($TypeAnnotationPosition$TypePathEntry);
					$assign(location, $nc(location)->prepend($TypeAnnotationPosition$TypePathEntry::ARRAY));
					$var($List, newPath, $nc(path)->tail);
					while (true) {
						$var($JCTree, npHead, $cast($JCTree, $nc($nc(newPath)->tail)->head));
						$init($JCTree$Tag);
						if ($nc(npHead)->hasTag($JCTree$Tag::TYPEARRAY)) {
							$assign(newPath, newPath->tail);
							$assign(location, location->prepend($TypeAnnotationPosition$TypePathEntry::ARRAY));
						} else {
							if (npHead->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
								$assign(newPath, newPath->tail);
							} else {
								break;
							}
						}
					}
					return resolveFrame($cast($JCTree, $nc(newPath)->head), $cast($JCTree, $nc(newPath->tail)->head), newPath, currentLambda, outer_type_index, location);
				}
			}
		case 14:
			{
				$init($JCTree$Tag);
				if ($nc(($cast($JCTree, $nc($nc($nc(path)->tail)->tail)->head)))->hasTag($JCTree$Tag::CLASSDEF)) {
					$var($JCTree$JCClassDecl, clazz, $cast($JCTree$JCClassDecl, $nc($nc(path->tail)->tail)->head));
					int32_t parameter_index = $nc($nc(clazz)->typarams)->indexOf($nc(path->tail)->head);
					int32_t bound_index = $nc($nc(($cast($JCTree$JCExpression, $($nc($nc(($cast($JCTree$JCTypeParameter, frame)))->bounds)->get(0)))))->type)->isInterface() ? $nc($nc(($cast($JCTree$JCTypeParameter, frame)))->bounds)->indexOf(tree) + 1 : $nc(($cast($JCTree$JCTypeParameter, frame))->bounds)->indexOf(tree);
					return $TypeAnnotationPosition::typeParameterBound($($nc(location)->toList()), currentLambda, parameter_index, bound_index, frame->pos$);
				} else {
					if ($nc(($cast($JCTree, $nc($nc(path->tail)->tail)->head)))->hasTag($JCTree$Tag::METHODDEF)) {
						$var($JCTree$JCMethodDecl, method, $cast($JCTree$JCMethodDecl, $nc($nc(path->tail)->tail)->head));
						int32_t parameter_index = $nc($nc(method)->typarams)->indexOf($nc(path->tail)->head);
						int32_t bound_index = $nc($nc(($cast($JCTree$JCExpression, $($nc($nc(($cast($JCTree$JCTypeParameter, frame)))->bounds)->get(0)))))->type)->isInterface() ? $nc($nc(($cast($JCTree$JCTypeParameter, frame)))->bounds)->indexOf(tree) + 1 : $nc(($cast($JCTree$JCTypeParameter, frame))->bounds)->indexOf(tree);
						return $TypeAnnotationPosition::methodTypeParameterBound($($nc(location)->toList()), currentLambda, parameter_index, bound_index, frame->pos$);
					} else {
						$throwNew($AssertionError, $of($$str({"Could not determine position of tree "_s, tree, " within frame "_s, frame})));
					}
				}
			}
		case 15:
			{
				$assign(v, $nc(($cast($JCTree$JCVariableDecl, frame)))->sym);
				$init($ElementKind);
				if ($nc(v)->getKind() != $ElementKind::FIELD) {
					appendTypeAnnotationsToOwner(v, $(v->getRawTypeAttributes()));
				}
				switch ($nc($TypeAnnotations$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc(($($nc(v)->getKind())))->ordinal())) {
				case 1:
					{}
				case 2:
					{
						return $TypeAnnotationPosition::localVariable($($nc(location)->toList()), currentLambda, frame->pos$);
					}
				case 3:
					{
						return $TypeAnnotationPosition::field($($nc(location)->toList()), currentLambda, frame->pos$);
					}
				case 4:
					{
						if ($nc($of($(v->getQualifiedName())))->equals($nc(this->this$0->names)->_this)) {
							return $TypeAnnotationPosition::methodReceiver($($nc(location)->toList()), currentLambda, frame->pos$);
						} else {
							int32_t parameter_index = methodParamIndex(path, frame);
							return $TypeAnnotationPosition::methodParameter($($nc(location)->toList()), currentLambda, parameter_index, frame->pos$);
						}
					}
				case 5:
					{
						return $TypeAnnotationPosition::exceptionParameter($($nc(location)->toList()), currentLambda, frame->pos$);
					}
				case 6:
					{
						return $TypeAnnotationPosition::resourceVariable($($nc(location)->toList()), currentLambda, frame->pos$);
					}
				default:
					{
						$var($String, var$0, $$str({"Found unexpected type annotation for variable: "_s, v, " with kind: "_s}));
						$throwNew($AssertionError, $of(($$concat(var$0, $(v->getKind())))));
					}
				}
			}
		case 16:
			{
				{
					if (frame == tree) {
						$var($JCTree$JCAnnotatedType, atypetree, $cast($JCTree$JCAnnotatedType, frame));
						$var($Type, utype, $nc(atypetree->underlyingType)->type);
						$Assert::checkNonNull(utype);
						$var($Symbol, tsym, $nc(utype)->tsym);
						$init($ElementKind);
						bool var$2 = $nc($($nc(tsym)->getKind()))->equals($ElementKind::TYPE_PARAMETER);
						$init($TypeKind);
						bool var$1 = var$2 || $nc($(utype->getKind()))->equals($TypeKind::WILDCARD);
						if (var$1 || $nc($(utype->getKind()))->equals($TypeKind::ARRAY)) {
						} else {
							$assign(location, locateNestedTypes(utype, location));
						}
					}
					$var($List, newPath, $nc(path)->tail);
					return resolveFrame($cast($JCTree, $nc(newPath)->head), $cast($JCTree, $nc(newPath->tail)->head), newPath, currentLambda, outer_type_index, location);
				}
			}
		case 17:
			{
				{
					$var($List, newPath, $nc(path)->tail);
					return resolveFrame($cast($JCTree, $nc(newPath)->head), $cast($JCTree, $nc(newPath->tail)->head), newPath, currentLambda, outer_type_index, location);
				}
			}
		case 18:
			{
				{
					$var($JCTree$JCTypeIntersection, isect, $cast($JCTree$JCTypeIntersection, frame));
					$var($List, newPath, $nc(path)->tail);
					return resolveFrame($cast($JCTree, $nc(newPath)->head), $cast($JCTree, $nc(newPath->tail)->head), newPath, currentLambda, $nc(isect->bounds)->indexOf(tree), location);
				}
			}
		case 19:
			{
				{
					$var($JCTree$JCMethodInvocation, invocation, $cast($JCTree$JCMethodInvocation, frame));
					if (!$nc(invocation->typeargs)->contains(tree)) {
						$init($TypeAnnotationPosition);
						return $TypeAnnotationPosition::unknown;
					}
					$var($Symbol$MethodSymbol, exsym, $cast($Symbol$MethodSymbol, $TreeInfo::symbol($($cast($JCTree, invocation->getMethodSelect())))));
					int32_t type_index = $nc(invocation->typeargs)->indexOf(tree);
					if (exsym == nullptr) {
						$throwNew($AssertionError, $of($$str({"could not determine symbol for {"_s, invocation, "}"_s})));
					} else if ($nc(exsym)->isConstructor()) {
						return $TypeAnnotationPosition::constructorInvocationTypeArg($($nc(location)->toList()), currentLambda, type_index, invocation->pos$);
					} else {
						return $TypeAnnotationPosition::methodInvocationTypeArg($($nc(location)->toList()), currentLambda, type_index, invocation->pos$);
					}
				}
			}
		case 20:
			{}
		case 21:
			{
				{
					$var($List, newPath, $nc(path)->tail);
					$init($TypeAnnotationPosition$TypePathEntry);
					return resolveFrame($cast($JCTree, $nc(newPath)->head), $cast($JCTree, $nc(newPath->tail)->head), newPath, currentLambda, outer_type_index, $($nc(location)->prepend($TypeAnnotationPosition$TypePathEntry::WILDCARD)));
				}
			}
		case 22:
			{
				{
					$var($List, newPath, $nc(path)->tail);
					return resolveFrame($cast($JCTree, $nc(newPath)->head), $cast($JCTree, $nc(newPath->tail)->head), newPath, currentLambda, outer_type_index, location);
				}
			}
		default:
			{
				$var($String, var$5, $$str({"Unresolved frame: "_s, frame, " of kind: "_s}));
				$var($String, var$4, $$concat(var$5, $(frame->getKind())));
				$var($String, var$3, $$concat(var$4, "\n    Looking for tree: "));
				$throwNew($AssertionError, $of(($$concat(var$3, $(tree)))));
			}
		}
	}
}

$ListBuffer* TypeAnnotations$TypeAnnotationPositions::locateNestedTypes($Type* type, $ListBuffer* depth$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, depth, depth$renamed);
	$var($Type, encl, $nc(type)->getEnclosingType());
	while (true) {
		$init($TypeKind);
		bool var$0 = encl != nullptr && encl->getKind() != $TypeKind::NONE;
		if (!(var$0 && encl->getKind() != $TypeKind::ERROR)) {
			break;
		}
		{
			$init($TypeAnnotationPosition$TypePathEntry);
			$assign(depth, $nc(depth)->prepend($TypeAnnotationPosition$TypePathEntry::INNER_TYPE));
			$assign(encl, encl->getEnclosingType());
		}
	}
	return depth;
}

int32_t TypeAnnotations$TypeAnnotationPositions::methodParamIndex($List* path, $JCTree* param) {
	$useLocalCurrentObjectStackCache();
	$var($List, curr, path);
	while (true) {
		$init($JCTree$Tag);
		bool var$0 = $nc(($cast($JCTree, $nc(curr)->head)))->getTag() != $JCTree$Tag::METHODDEF;
		if (!(var$0 && $nc(($cast($JCTree, curr->head)))->getTag() != $JCTree$Tag::LAMBDA)) {
			break;
		}
		{
			$assign(curr, curr->tail);
		}
	}
	$init($JCTree$Tag);
	if ($nc(($cast($JCTree, $nc(curr)->head)))->getTag() == $JCTree$Tag::METHODDEF) {
		$var($JCTree$JCMethodDecl, method, $cast($JCTree$JCMethodDecl, curr->head));
		return $nc($nc(method)->params)->indexOf(param);
	} else {
		if ($nc(($cast($JCTree, curr->head)))->getTag() == $JCTree$Tag::LAMBDA) {
			$var($JCTree$JCLambda, lambda, $cast($JCTree$JCLambda, curr->head));
			return $nc($nc(lambda)->params)->indexOf(param);
		} else {
			$Assert::error($$str({"methodParamIndex expected to find method or lambda for param: "_s, param}));
			return -1;
		}
	}
}

void TypeAnnotations$TypeAnnotationPositions::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if (this->isInClass) {
		return;
	}
	this->isInClass = true;
	if (this->sigOnly) {
		scan(static_cast<$JCTree*>($nc(tree)->mods));
		scan($nc(tree)->typarams);
		scan(static_cast<$JCTree*>($nc(tree)->extending));
		scan($nc(tree)->implementing);
	}
	scan($nc(tree)->defs);
	if ($nc($nc(tree)->sym)->isRecord()) {
		$nc($($nc($($nc(tree->sym)->getRecordComponents()))->stream()))->forEach(static_cast<$Consumer*>($$new(TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0, this)));
	}
}

void TypeAnnotations$TypeAnnotationPositions::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->sym == nullptr) {
		$Assert::error("Visiting tree node before memberEnter"_s);
	}
	if (this->sigOnly) {
		if (!$nc($nc($nc(tree)->mods)->annotations)->isEmpty()) {
			if ($nc(tree->sym)->isConstructor()) {
				$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::methodReturn(tree->pos$));
				separateAnnotationsKinds(tree, nullptr, tree->sym, pos);
			} else {
				$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::methodReturn($nc(tree->restype)->pos$));
				separateAnnotationsKinds(tree->restype, $($nc($nc(tree->sym)->type)->getReturnType()), tree->sym, pos);
			}
		}
		if ($nc(tree)->recvparam != nullptr && $nc(tree->recvparam)->sym != nullptr && !$nc($nc($nc(tree->recvparam)->mods)->annotations)->isEmpty()) {
			$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::methodReceiver($nc($nc(tree->recvparam)->vartype)->pos$));
			push(tree->recvparam);
			{
				$var($Throwable, var$0, nullptr);
				try {
					separateAnnotationsKinds($nc(tree->recvparam)->vartype, $nc($nc(tree->recvparam)->sym)->type, $nc(tree->recvparam)->sym, pos);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					pop();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		int32_t i = 0;
		{
			$var($Iterator, i$, $nc($nc(tree)->params)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
				{
					if (!$nc($nc($nc(param)->mods)->annotations)->isEmpty()) {
						$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::methodParameter(i, $nc(param->vartype)->pos$));
						push(param);
						{
							$var($Throwable, var$2, nullptr);
							try {
								separateAnnotationsKinds(param->vartype, $nc(param->sym)->type, param->sym, pos);
							} catch ($Throwable& var$3) {
								$assign(var$2, var$3);
							} /*finally*/ {
								pop();
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					}
					++i;
				}
			}
		}
	}
	if (this->sigOnly) {
		scan(static_cast<$JCTree*>($nc(tree)->mods));
		scan(static_cast<$JCTree*>($nc(tree)->restype));
		scan($nc(tree)->typarams);
		scan(static_cast<$JCTree*>($nc(tree)->recvparam));
		scan($nc(tree)->params);
		scan($nc(tree)->thrown);
	} else {
		scan(static_cast<$JCTree*>($nc(tree)->defaultValue));
		scan(static_cast<$JCTree*>($nc(tree)->body));
	}
}

void TypeAnnotations$TypeAnnotationPositions::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCLambda, prevLambda, this->currentLambda);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, currentLambda, tree);
			int32_t i = 0;
			{
				$var($Iterator, i$, $nc($nc(tree)->params)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
					{
						if (!$nc($nc($nc(param)->mods)->annotations)->isEmpty()) {
							$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::methodParameter(tree, i, $nc(param->vartype)->pos$));
							push(param);
							{
								$var($Throwable, var$1, nullptr);
								try {
									if (!param->declaredUsingVar()) {
										separateAnnotationsKinds(param->vartype, $nc(param->sym)->type, param->sym, pos);
									}
								} catch ($Throwable& var$2) {
									$assign(var$1, var$2);
								} /*finally*/ {
									pop();
								}
								if (var$1 != nullptr) {
									$throw(var$1);
								}
							}
						}
						++i;
					}
				}
			}
			scan(tree->body);
			scan(tree->params);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$set(this, currentLambda, prevLambda);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TypeAnnotations$TypeAnnotationPositions::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc($nc(tree)->mods)->annotations)->isEmpty()) {
	} else if (tree->sym == nullptr) {
		$Assert::error("Visiting tree node before memberEnter"_s);
	} else {
		$init($ElementKind);
		if ($nc(tree->sym)->getKind() == $ElementKind::PARAMETER) {
		} else {
			if ($nc(tree->sym)->getKind() == $ElementKind::FIELD) {
				if (this->sigOnly) {
					$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::field(tree->pos$));
					separateAnnotationsKinds(tree->vartype, $nc(tree->sym)->type, tree->sym, pos);
				}
			} else {
				if ($nc(tree->sym)->getKind() == $ElementKind::LOCAL_VARIABLE) {
					$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::localVariable(this->currentLambda, tree->pos$));
					if (!tree->declaredUsingVar()) {
						separateAnnotationsKinds(tree->vartype, $nc(tree->sym)->type, tree->sym, pos);
					}
				} else {
					if ($nc(tree->sym)->getKind() == $ElementKind::BINDING_VARIABLE) {
						$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::localVariable(this->currentLambda, tree->pos$));
						separateAnnotationsKinds(tree->vartype, $nc(tree->sym)->type, tree->sym, pos);
					} else {
						if ($nc(tree->sym)->getKind() == $ElementKind::EXCEPTION_PARAMETER) {
							$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::exceptionParameter(this->currentLambda, tree->pos$));
							separateAnnotationsKinds(tree->vartype, $nc(tree->sym)->type, tree->sym, pos);
						} else {
							if ($nc(tree->sym)->getKind() == $ElementKind::RESOURCE_VARIABLE) {
								$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::resourceVariable(this->currentLambda, tree->pos$));
								separateAnnotationsKinds(tree->vartype, $nc(tree->sym)->type, tree->sym, pos);
							} else {
								if ($nc(tree->sym)->getKind() == $ElementKind::ENUM_CONSTANT) {
								} else {
									$Assert::error($$str({"Unhandled variable kind: "_s, $($nc(tree->sym)->getKind())}));
								}
							}
						}
					}
				}
			}
		}
	}
	scan(static_cast<$JCTree*>($nc(tree)->mods));
	scan(static_cast<$JCTree*>($nc(tree)->vartype));
	if (!this->sigOnly) {
		scan(static_cast<$JCTree*>($nc(tree)->init));
	}
}

void TypeAnnotations$TypeAnnotationPositions::visitBlock($JCTree$JCBlock* tree) {
	if (!this->sigOnly) {
		scan($nc(tree)->stats);
	}
}

void TypeAnnotations$TypeAnnotationPositions::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	push(tree);
	findPosition(tree, tree, $nc(tree)->annotations);
	pop();
	$TreeScanner::visitAnnotatedType(tree);
}

void TypeAnnotations$TypeAnnotationPositions::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	findPosition(tree, $(peek2()), $nc(tree)->annotations);
	$TreeScanner::visitTypeParameter(tree);
}

void TypeAnnotations$TypeAnnotationPositions::propagateNewClassAnnotationsToOwner($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $nc($nc(tree)->def)->sym);
	$var($Type, var$0, $nc($($nc($nc(sym)->owner)->enclClass()))->type);
	$init($TypeAnnotationPosition$TypePathEntry);
	$var($List, depth, $nc($($nc($(locateNestedTypes(var$0, $$new($ListBuffer))))->append($TypeAnnotationPosition$TypePathEntry::INNER_TYPE)))->toList());
	$var($TypeAnnotationPosition, pos, $TypeAnnotationPosition::newObj(depth, nullptr, tree->pos$));
	$var($ListBuffer, newattrs, $new($ListBuffer));
	$var($List, expectedLocation, $nc($(locateNestedTypes($nc(tree->clazz)->type, $$new($ListBuffer))))->toList());
	{
		$var($Iterator, i$, $nc($($nc(sym)->getRawTypeAttributes()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, old, $cast($Attribute$TypeCompound, i$->next()));
			{
				if ($nc($nc($nc(old)->position)->location)->equals(expectedLocation)) {
					newattrs->append($$new($Attribute$TypeCompound, old->type, old->values, pos));
				}
			}
		}
	}
	$nc(sym->owner)->appendUniqueTypeAttributes($(newattrs->toList()));
}

void TypeAnnotations$TypeAnnotationPositions::visitNewClass($JCTree$JCNewClass* tree) {
	if ($nc(tree)->def != nullptr && $nc(tree->def)->sym != nullptr) {
		propagateNewClassAnnotationsToOwner(tree);
	}
	scan(static_cast<$JCTree*>($nc(tree)->encl));
	scan($nc(tree)->typeargs);
	if ($nc(tree)->def == nullptr) {
		scan(static_cast<$JCTree*>(tree->clazz));
	}
	scan($nc(tree)->args);
}

void TypeAnnotations$TypeAnnotationPositions::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	findPosition(tree, tree, $nc(tree)->annotations);
	int32_t dimAnnosCount = $nc($nc(tree)->dimAnnotations)->size();
	$var($ListBuffer, depth, $new($ListBuffer));
	for (int32_t i = 0; i < dimAnnosCount; ++i) {
		$var($ListBuffer, location, $new($ListBuffer));
		if (i != 0) {
			$init($TypeAnnotationPosition$TypePathEntry);
			$assign(depth, $nc(depth)->append($TypeAnnotationPosition$TypePathEntry::ARRAY));
			$assign(location, location->appendList($(depth->toList())));
		}
		$var($TypeAnnotationPosition, p, $TypeAnnotationPosition::newObj($(location->toList()), this->currentLambda, tree->pos$));
		setTypeAnnotationPos($cast($List, $($nc(tree->dimAnnotations)->get(i))), p);
	}
	$var($JCTree$JCExpression, elemType, tree->elemtype);
	$init($TypeAnnotationPosition$TypePathEntry);
	$assign(depth, $nc(depth)->append($TypeAnnotationPosition$TypePathEntry::ARRAY));
	while (elemType != nullptr) {
		$init($JCTree$Tag);
		if (elemType->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			$var($JCTree$JCAnnotatedType, at, $cast($JCTree$JCAnnotatedType, elemType));
			$var($ListBuffer, locationbuf, locateNestedTypes(elemType->type, $$new($ListBuffer)));
			$var($List, location, $nc($($nc(locationbuf)->toList()))->prependList($(depth->toList())));
			$var($TypeAnnotationPosition, p, $TypeAnnotationPosition::newObj(location, this->currentLambda, tree->pos$));
			setTypeAnnotationPos(at->annotations, p);
			$assign(elemType, at->underlyingType);
		} else {
			if (elemType->hasTag($JCTree$Tag::TYPEARRAY)) {
				$assign(depth, depth->append($TypeAnnotationPosition$TypePathEntry::ARRAY));
				$assign(elemType, $nc(($cast($JCTree$JCArrayTypeTree, elemType)))->elemtype);
			} else {
				if (elemType->hasTag($JCTree$Tag::SELECT)) {
					$assign(elemType, $nc(($cast($JCTree$JCFieldAccess, elemType)))->selected);
				} else {
					break;
				}
			}
		}
	}
	scan(tree->elems);
}

void TypeAnnotations$TypeAnnotationPositions::findPosition($JCTree* tree, $JCTree* frame, $List* annotations) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(annotations)->isEmpty()) {
		$var($TypeAnnotationPosition, p, resolveFrame(tree, frame, this->frames, this->currentLambda, 0, $$new($ListBuffer)));
		setTypeAnnotationPos(annotations, p);
	}
}

void TypeAnnotations$TypeAnnotationPositions::setTypeAnnotationPos($List* annotations, $TypeAnnotationPosition* position) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCAnnotation, anno, $cast($JCTree$JCAnnotation, i$->next()));
			{
				if ($nc(anno)->attribute != nullptr) {
					$set($nc($cast($Attribute$TypeCompound, anno->attribute)), position, position);
				}
			}
		}
	}
}

$String* TypeAnnotations$TypeAnnotationPositions::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($TreeScanner::toString()), ": sigOnly: "_s, $$str(this->sigOnly)});
}

void TypeAnnotations$TypeAnnotationPositions::lambda$visitClassDef$0($Symbol$RecordComponent* rc) {
	scan(static_cast<$JCTree*>($nc(rc)->accessorMeth));
}

TypeAnnotations$TypeAnnotationPositions::TypeAnnotations$TypeAnnotationPositions() {
}

$Class* TypeAnnotations$TypeAnnotationPositions::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::classInfo$.name)) {
			return TypeAnnotations$TypeAnnotationPositions$$Lambda$lambda$visitClassDef$0::load$(name, initialize);
		}
	}
	$loadClass(TypeAnnotations$TypeAnnotationPositions, name, initialize, &_TypeAnnotations$TypeAnnotationPositions_ClassInfo_, allocate$TypeAnnotations$TypeAnnotationPositions);
	return class$;
}

$Class* TypeAnnotations$TypeAnnotationPositions::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com