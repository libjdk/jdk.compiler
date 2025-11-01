#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/SymbolMetadata.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/Inherited.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ANNOTATION
#undef ANNOTATION_TYPE
#undef ANONYMOUS
#undef CLASS
#undef ENUM
#undef INTERFACE
#undef LOCAL
#undef MEMBER
#undef MTH
#undef PCK
#undef RECORD
#undef TOP_LEVEL
#undef TYP

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnoConstruct = ::com::sun::tools::javac::code::AnnoConstruct;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $SymbolMetadata = ::com::sun::tools::javac::code::SymbolMetadata;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Inherited = ::java::lang::annotation::Inherited;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $1Name = ::javax::lang::model::element::Name;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0 : public $Function {
	$class(Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Symbol$ClassSymbol::lambda$getPermittedSubclasses$0($cast($Symbol, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0::*)()>(&Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0::load$($String* name, bool initialize) {
	$loadClass(Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0::class$ = nullptr;

$FieldInfo _Symbol$ClassSymbol_FieldInfo_[] = {
	{"members_field", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC, $field(Symbol$ClassSymbol, members_field)},
	{"fullname", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Symbol$ClassSymbol, fullname)},
	{"flatname", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Symbol$ClassSymbol, flatname)},
	{"sourcefile", "Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $field(Symbol$ClassSymbol, sourcefile)},
	{"classfile", "Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $field(Symbol$ClassSymbol, classfile)},
	{"trans_local", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PUBLIC, $field(Symbol$ClassSymbol, trans_local)},
	{"annotationTypeMetadata", "Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata;", nullptr, $PRIVATE, $field(Symbol$ClassSymbol, annotationTypeMetadata)},
	{"recordComponents", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$RecordComponent;>;", $PRIVATE, $field(Symbol$ClassSymbol, recordComponents)},
	{"permitted", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $field(Symbol$ClassSymbol, permitted)},
	{"isPermittedExplicit", "Z", nullptr, $PUBLIC, $field(Symbol$ClassSymbol, isPermittedExplicit)},
	{}
};

$MethodInfo _Symbol$ClassSymbol_MethodInfo_[] = {
	{"*asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$ClassSymbol::*)(int64_t,$Name*,$Type*,$Symbol*)>(&Symbol$ClassSymbol::init$))},
	{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$ClassSymbol::*)(int64_t,$Name*,$Symbol*)>(&Symbol$ClassSymbol::init$))},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"className", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"clearAnnotationMetadata", "()V", nullptr, $PUBLIC},
	{"complete", "()V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"erasure", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"flags", "()J", nullptr, $PUBLIC},
	{"flatName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getAnnotationTypeMetadata", "()Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Class;)Lcom/sun/tools/javac/code/Attribute$Compound;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)Lcom/sun/tools/javac/code/Attribute$Compound;", $PROTECTED},
	{"getEnclosedElements", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"getInheritedAnnotations", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)[TA;", $PROTECTED},
	{"getInterfaces", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC},
	{"getModifiers", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"getPermittedSubclasses", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getQualifiedName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getRawAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PUBLIC},
	{"getRawTypeAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"getRecordComponent", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/code/Symbol$RecordComponent;", nullptr, $PUBLIC},
	{"getRecordComponent", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;ZLcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol$RecordComponent;", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;ZLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/code/Symbol$RecordComponent;", $PUBLIC},
	{"getRecordComponents", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/code/Symbol$RecordComponent;>;", $PUBLIC},
	{"getSuperClassToSearchForAnnotations", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE, $method(static_cast<Symbol$ClassSymbol*(Symbol$ClassSymbol::*)()>(&Symbol$ClassSymbol::getSuperClassToSearchForAnnotations))},
	{"getSuperclass", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getTypeParameters", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isAnnotationType", "()Z", nullptr, $PUBLIC},
	{"isRecord", "()Z", nullptr, $PUBLIC},
	{"isSubClass", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"lambda$getPermittedSubclasses$0", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($Symbol*)>(&Symbol$ClassSymbol::lambda$getPermittedSubclasses$0))},
	{"markAbstractIfNeeded", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC},
	{"members", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setAnnotationTypeMetadata", "(Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata;)V", nullptr, $PUBLIC},
	{"setRecordComponents", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$RecordComponent;>;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$ClassSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$ClassSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$ClassSymbol",
	"com.sun.tools.javac.code.Symbol$TypeSymbol",
	"javax.lang.model.element.TypeElement",
	_Symbol$ClassSymbol_FieldInfo_,
	_Symbol$ClassSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$ClassSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$ClassSymbol($Class* clazz) {
	return $of($alloc(Symbol$ClassSymbol));
}

$1List* Symbol$ClassSymbol::getAnnotationMirrors() {
	 return this->$Symbol$TypeSymbol::getAnnotationMirrors();
}

$Element* Symbol$ClassSymbol::getEnclosingElement() {
	 return this->$Symbol$TypeSymbol::getEnclosingElement();
}

$1Name* Symbol$ClassSymbol::getSimpleName() {
	 return this->$Symbol$TypeSymbol::getSimpleName();
}

$TypeMirror* Symbol$ClassSymbol::asType() {
	 return this->$Symbol$TypeSymbol::asType();
}

$AnnotationArray* Symbol$ClassSymbol::getAnnotationsByType($Class* annoType) {
	 return this->$Symbol$TypeSymbol::getAnnotationsByType(annoType);
}

$Annotation* Symbol$ClassSymbol::getAnnotation($Class* annoType) {
	 return this->$Symbol$TypeSymbol::getAnnotation(annoType);
}

int32_t Symbol$ClassSymbol::hashCode() {
	 return this->$Symbol$TypeSymbol::hashCode();
}

bool Symbol$ClassSymbol::equals(Object$* arg0) {
	 return this->$Symbol$TypeSymbol::equals(arg0);
}

$Object* Symbol$ClassSymbol::clone() {
	 return this->$Symbol$TypeSymbol::clone();
}

void Symbol$ClassSymbol::finalize() {
	this->$Symbol$TypeSymbol::finalize();
}

Symbol$ClassSymbol::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Symbol$ClassSymbol, $TypeElement, memberClass0$);
}

$TypeMirror* Symbol$ClassSymbol::MemberClass0$::asType() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->asType();
}

$1List* Symbol$ClassSymbol::MemberClass0$::getEnclosedElements() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getEnclosedElements();
}

$NestingKind* Symbol$ClassSymbol::MemberClass0$::getNestingKind() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getNestingKind();
}

$1Name* Symbol$ClassSymbol::MemberClass0$::getQualifiedName() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getQualifiedName();
}

$1Name* Symbol$ClassSymbol::MemberClass0$::getSimpleName() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getSimpleName();
}

$TypeMirror* Symbol$ClassSymbol::MemberClass0$::getSuperclass() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getSuperclass();
}

$1List* Symbol$ClassSymbol::MemberClass0$::getInterfaces() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getInterfaces();
}

$1List* Symbol$ClassSymbol::MemberClass0$::getTypeParameters() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getTypeParameters();
}

$1List* Symbol$ClassSymbol::MemberClass0$::getRecordComponents() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getRecordComponents();
}

$1List* Symbol$ClassSymbol::MemberClass0$::getPermittedSubclasses() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getPermittedSubclasses();
}

$Element* Symbol$ClassSymbol::MemberClass0$::getEnclosingElement() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getEnclosingElement();
}

$ElementKind* Symbol$ClassSymbol::MemberClass0$::getKind() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getKind();
}

$Set* Symbol$ClassSymbol::MemberClass0$::getModifiers() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getModifiers();
}

bool Symbol$ClassSymbol::MemberClass0$::equals(Object$* arg0) {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->equals(arg0);
}

int32_t Symbol$ClassSymbol::MemberClass0$::hashCode() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->hashCode();
}

$1List* Symbol$ClassSymbol::MemberClass0$::getAnnotationMirrors() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getAnnotationMirrors();
}

$Annotation* Symbol$ClassSymbol::MemberClass0$::getAnnotation($Class* arg0) {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getAnnotation(arg0);
}

$AnnotationArray* Symbol$ClassSymbol::MemberClass0$::getAnnotationsByType($Class* arg0) {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->getAnnotationsByType(arg0);
}

$Object* Symbol$ClassSymbol::MemberClass0$::accept($ElementVisitor* arg0, Object$* arg1) {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->accept(arg0, arg1);
}

$Object* Symbol$ClassSymbol::MemberClass0$::clone() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->clone();
}

$String* Symbol$ClassSymbol::MemberClass0$::toString() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->toString();
}

void Symbol$ClassSymbol::MemberClass0$::finalize() {
	return ((Symbol$ClassSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ClassSymbol, memberClass0$)))->finalize();
}

void Symbol$ClassSymbol::init$(int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$init($Kinds$Kind);
	$Symbol$TypeSymbol::init$($Kinds$Kind::TYP, flags, name, type, owner);
	$set(this, recordComponents, $List::nil());
	this->isPermittedExplicit = false;
	$set(this, members_field, nullptr);
	$set(this, fullname, formFullName(name, owner));
	$set(this, flatname, formFlatName(name, owner));
	$set(this, sourcefile, nullptr);
	$set(this, classfile, nullptr);
	$set(this, annotationTypeMetadata, $Annotate$AnnotationTypeMetadata::notAnAnnotationType());
	$set(this, permitted, $List::nil());
}

void Symbol$ClassSymbol::init$(int64_t flags, $Name* name, $Symbol* owner) {
	$init($Type);
	Symbol$ClassSymbol::init$(flags, name, $$new($Type$ClassType, $Type::noType, nullptr, nullptr), owner);
	$set($nc(this->type), tsym, this);
}

$String* Symbol$ClassSymbol::toString() {
	return className();
}

int64_t Symbol$ClassSymbol::flags() {
	complete();
	return this->flags_field;
}

$Scope$WriteableScope* Symbol$ClassSymbol::members() {
	complete();
	return this->members_field;
}

$List* Symbol$ClassSymbol::getRawAttributes() {
	complete();
	return $Symbol$TypeSymbol::getRawAttributes();
}

$List* Symbol$ClassSymbol::getRawTypeAttributes() {
	complete();
	return $Symbol$TypeSymbol::getRawTypeAttributes();
}

$Type* Symbol$ClassSymbol::erasure($Types* types) {
	$useLocalCurrentObjectStackCache();
	if (this->erasure_field == nullptr) {
		$var($Type, var$0, $nc(types)->erasure($($nc(this->type)->getEnclosingType())));
		$var($List, var$1, $List::nil());
		$set(this, erasure_field, $new($Type$ClassType, var$0, var$1, this, $($nc(this->type)->getMetadata())));
	}
	return this->erasure_field;
}

$String* Symbol$ClassSymbol::className() {
	if ($nc(this->name)->isEmpty()) {
		return $Log::getLocalizedString("anonymous.class"_s, $$new($ObjectArray, {$of(this->flatname)}));
	} else {
		return $nc(this->fullname)->toString();
	}
}

$Name* Symbol$ClassSymbol::getQualifiedName() {
	return this->fullname;
}

$1List* Symbol$ClassSymbol::getEnclosedElements() {
	$useLocalCurrentObjectStackCache();
	$var($List, result, $cast($List, $Symbol$TypeSymbol::getEnclosedElements()));
	if (!$nc(this->recordComponents)->isEmpty()) {
		$var($List, reversed, $nc(this->recordComponents)->reverse());
		{
			$var($Iterator, i$, $nc(reversed)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$RecordComponent, rc, $cast($Symbol$RecordComponent, i$->next()));
				{
					$assign(result, $nc(result)->prepend(rc));
				}
			}
		}
	}
	return result;
}

$Name* Symbol$ClassSymbol::flatName() {
	return this->flatname;
}

bool Symbol$ClassSymbol::isSubClass($Symbol* base, $Types* types) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, base)) {
		return true;
	} else if (((int64_t)(base->flags() & (uint64_t)(int64_t)512)) != 0) {
		$init($TypeTag);
		{
			$var($Type, t, this->type);
			for (; $nc(t)->hasTag($TypeTag::CLASS); $assign(t, $nc(types)->supertype(t))) {
				{
					$var($List, is, types->interfaces(t));
					for (; $nc(is)->nonEmpty(); $assign(is, $nc(is)->tail)) {
						if ($nc($nc(($cast($Type, is->head)))->tsym)->isSubClass(base, types)) {
							return true;
						}
					}
				}
			}
		}
	} else {
		$init($TypeTag);
		{
			$var($Type, t, this->type);
			for (; $nc(t)->hasTag($TypeTag::CLASS); $assign(t, $nc(types)->supertype(t))) {
				if ($equals(t->tsym, base)) {
					return true;
				}
			}
		}
	}
	return false;
}

void Symbol$ClassSymbol::complete() {
	$var($Symbol$Completer, origCompleter, this->completer);
	try {
		$Symbol$TypeSymbol::complete();
	} catch ($Symbol$CompletionFailure& ex) {
		$nc(ex->dcfh)->classSymbolCompleteFailed(this, origCompleter);
		this->flags_field |= (1 | 8);
		$init($Type);
		$set(this, type, $new($Type$ErrorType, this, static_cast<$Type*>($Type::noType)));
		$throw(ex);
	}
}

$List* Symbol$ClassSymbol::getInterfaces() {
	$useLocalCurrentObjectStackCache();
	apiComplete();
	{
		$var($Type$ClassType, classType, nullptr);
		$var($Type, patt48592$temp, this->type);
		bool var$0 = $instanceOf($Type$ClassType, patt48592$temp);
		if (var$0) {
			$assign(classType, $cast($Type$ClassType, patt48592$temp));
			var$0 = true;
		}
		if (var$0) {
			if ($nc(classType)->interfaces_field == nullptr) {
				$set(classType, interfaces_field, $List::nil());
			}
			if ($nc(classType)->all_interfaces_field != nullptr) {
				return $Type::getModelTypes(classType->all_interfaces_field);
			}
			return $nc(classType)->interfaces_field;
		} else {
			return $List::nil();
		}
	}
}

$Type* Symbol$ClassSymbol::getSuperclass() {
	$useLocalCurrentObjectStackCache();
	apiComplete();
	{
		$var($Type$ClassType, classType, nullptr);
		$var($Type, patt49167$temp, this->type);
		bool var$0 = $instanceOf($Type$ClassType, patt49167$temp);
		if (var$0) {
			$assign(classType, $cast($Type$ClassType, patt49167$temp));
			var$0 = true;
		}
		if (var$0) {
			if ($nc(classType)->supertype_field == nullptr) {
				$init($Type);
				$set(classType, supertype_field, $Type::noType);
			}
			$init($Type);
			return $nc(classType)->isInterface() ? static_cast<$Type*>($Type::noType) : $nc($nc(classType)->supertype_field)->getModelType();
		} else {
			$init($Type);
			return $Type::noType;
		}
	}
}

Symbol$ClassSymbol* Symbol$ClassSymbol::getSuperClassToSearchForAnnotations() {
	$var($Type, sup, getSuperclass());
	$init($TypeTag);
	bool var$0 = !$nc(sup)->hasTag($TypeTag::CLASS);
	if (var$0 || $nc(sup)->isErroneous()) {
		return nullptr;
	}
	return $cast(Symbol$ClassSymbol, $nc(sup)->tsym);
}

$AnnotationArray* Symbol$ClassSymbol::getInheritedAnnotations($Class* annoType) {
	$var(Symbol$ClassSymbol, sup, getSuperClassToSearchForAnnotations());
	return sup == nullptr ? $Symbol$TypeSymbol::getInheritedAnnotations(annoType) : $nc(sup)->getAnnotationsByType(annoType);
}

$ElementKind* Symbol$ClassSymbol::getKind() {
	apiComplete();
	int64_t flags = this->flags();
	if (((int64_t)(flags & (uint64_t)(int64_t)8192)) != 0) {
		$init($ElementKind);
		return $ElementKind::ANNOTATION_TYPE;
	} else if (((int64_t)(flags & (uint64_t)(int64_t)512)) != 0) {
		$init($ElementKind);
		return $ElementKind::INTERFACE;
	} else if (((int64_t)(flags & (uint64_t)(int64_t)16384)) != 0) {
		$init($ElementKind);
		return $ElementKind::ENUM;
	} else if (((int64_t)(flags & (uint64_t)(int64_t)0x2000000000000000)) != 0) {
		$init($ElementKind);
		return $ElementKind::RECORD;
	} else {
		$init($ElementKind);
		return $ElementKind::CLASS;
	}
}

$Set* Symbol$ClassSymbol::getModifiers() {
	apiComplete();
	int64_t flags = this->flags();
	return $Flags::asModifierSet((int64_t)(flags & (uint64_t)~(int64_t)0x0000080000000000));
}

$Symbol$RecordComponent* Symbol$ClassSymbol::getRecordComponent($Symbol$VarSymbol* field) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->recordComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$RecordComponent, rc, $cast($Symbol$RecordComponent, i$->next()));
			{
				if ($nc(rc)->name == $nc(field)->name) {
					return rc;
				}
			}
		}
	}
	return nullptr;
}

$Symbol$RecordComponent* Symbol$ClassSymbol::getRecordComponent($JCTree$JCVariableDecl* var, bool addIfMissing, $List* annotations) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->recordComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$RecordComponent, rc, $cast($Symbol$RecordComponent, i$->next()));
			{
				if ($nc(rc)->name == $nc(var)->name && var->pos$ == rc->pos) {
					return rc;
				}
			}
		}
	}
	$var($Symbol$RecordComponent, rc, nullptr);
	if (addIfMissing) {
		$set(this, recordComponents, $nc(this->recordComponents)->append($assign(rc, $new($Symbol$RecordComponent, $nc(var)->sym, annotations))));
	}
	return rc;
}

$List* Symbol$ClassSymbol::getRecordComponents() {
	return this->recordComponents;
}

void Symbol$ClassSymbol::setRecordComponents($List* recordComponents) {
	$set(this, recordComponents, recordComponents);
}

$NestingKind* Symbol$ClassSymbol::getNestingKind() {
	apiComplete();
	$init($Kinds$Kind);
	if ($nc(this->owner)->kind == $Kinds$Kind::PCK) {
		$init($NestingKind);
		return $NestingKind::TOP_LEVEL;
	} else if ($nc(this->name)->isEmpty()) {
		$init($NestingKind);
		return $NestingKind::ANONYMOUS;
	} else {
		if ($nc(this->owner)->kind == $Kinds$Kind::MTH) {
			$init($NestingKind);
			return $NestingKind::LOCAL;
		} else {
			$init($NestingKind);
			return $NestingKind::MEMBER;
		}
	}
}

$Attribute$Compound* Symbol$ClassSymbol::getAttribute($Class* annoType) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Compound, attrib, $Symbol$TypeSymbol::getAttribute(annoType));
	$load($Inherited);
	bool inherited = $nc(annoType)->isAnnotationPresent($Inherited::class$);
	if (attrib != nullptr || !inherited) {
		return attrib;
	}
	$var(Symbol$ClassSymbol, superType, getSuperClassToSearchForAnnotations());
	return superType == nullptr ? ($Attribute$Compound*)nullptr : $nc(superType)->getAttribute(annoType);
}

$Object* Symbol$ClassSymbol::accept($ElementVisitor* v, Object$* p) {
	return $of($nc(v)->visitType($as($TypeElement, this), p));
}

$Object* Symbol$ClassSymbol::accept($Symbol$Visitor* v, Object$* p) {
	return $of($nc(v)->visitClassSymbol(this, p));
}

void Symbol$ClassSymbol::markAbstractIfNeeded($Types* types) {
	bool var$2 = $nc($nc(types)->enter)->getEnv(this) != nullptr;
	bool var$1 = var$2 && ((int64_t)(flags() & (uint64_t)(int64_t)16384)) != 0;
	bool var$0 = var$1 && $nc($(types->supertype(this->type)))->tsym == $nc(types->syms)->enumSym;
	if (var$0 && ((int64_t)(flags() & (uint64_t)(int64_t)(16 | 1024))) == 0) {
		if (types->firstUnimplementedAbstract(this) != nullptr) {
			this->flags_field |= 1024;
		}
	}
}

void Symbol$ClassSymbol::reset() {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	$set(this, kind, $Kinds$Kind::TYP);
	$set(this, erasure_field, nullptr);
	$set(this, members_field, nullptr);
	this->flags_field = 0;
	{
		$var($Type$ClassType, classType, nullptr);
		$var($Type, patt54508$temp, this->type);
		bool var$0 = $instanceOf($Type$ClassType, patt54508$temp);
		if (var$0) {
			$assign(classType, $cast($Type$ClassType, patt54508$temp));
			var$0 = true;
		}
		if (var$0) {
			$init($Type);
			$nc(classType)->setEnclosingType($Type::noType);
			classType->rank_field = -1;
			$set(classType, typarams_field, nullptr);
			$set(classType, allparams_field, nullptr);
			$set(classType, supertype_field, nullptr);
			$set(classType, interfaces_field, nullptr);
			$set(classType, all_interfaces_field, nullptr);
		}
	}
	clearAnnotationMetadata();
}

void Symbol$ClassSymbol::clearAnnotationMetadata() {
	$set(this, metadata, nullptr);
	$set(this, annotationTypeMetadata, $Annotate$AnnotationTypeMetadata::notAnAnnotationType());
}

$Annotate$AnnotationTypeMetadata* Symbol$ClassSymbol::getAnnotationTypeMetadata() {
	return this->annotationTypeMetadata;
}

bool Symbol$ClassSymbol::isAnnotationType() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)$Flags::ANNOTATION)) != 0;
}

void Symbol$ClassSymbol::setAnnotationTypeMetadata($Annotate$AnnotationTypeMetadata* a) {
	$Assert::checkNonNull(a);
	$Assert::check(!$nc(this->annotationTypeMetadata)->isMetadataForAnnotationType());
	$set(this, annotationTypeMetadata, a);
}

bool Symbol$ClassSymbol::isRecord() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0;
}

$List* Symbol$ClassSymbol::getPermittedSubclasses() {
	return $nc(this->permitted)->map(static_cast<$Function*>($$new(Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0)));
}

$List* Symbol$ClassSymbol::getTypeParameters() {
	return $Symbol$TypeSymbol::getTypeParameters();
}

$Type* Symbol$ClassSymbol::lambda$getPermittedSubclasses$0($Symbol* s) {
	$init(Symbol$ClassSymbol);
	return $nc(s)->type;
}

Symbol$ClassSymbol::Symbol$ClassSymbol() {
}

$Class* Symbol$ClassSymbol::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0::classInfo$.name)) {
			return Symbol$ClassSymbol$$Lambda$lambda$getPermittedSubclasses$0::load$(name, initialize);
		}
	}
	$loadClass(Symbol$ClassSymbol, name, initialize, &_Symbol$ClassSymbol_ClassInfo_, allocate$Symbol$ClassSymbol);
	return class$;
}

$Class* Symbol$ClassSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com