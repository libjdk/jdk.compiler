#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>

#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol$1.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef CONSTRUCTOR
#undef FORALL
#undef INSTANCE_INIT
#undef METHOD
#undef MTH
#undef PRIVATE
#undef PROTECTED
#undef PUBLIC
#undef STATIC_INIT
#undef TYPEVAR

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol$1 = ::com::sun::tools::javac::code::Symbol$MethodSymbol$1;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $1Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Symbol$MethodSymbol$$Lambda$lambda$static$0 : public $Predicate {
	$class(Symbol$MethodSymbol$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return Symbol$MethodSymbol::lambda$static$0($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symbol$MethodSymbol$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Symbol$MethodSymbol$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$MethodSymbol$$Lambda$lambda$static$0::*)()>(&Symbol$MethodSymbol$$Lambda$lambda$static$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symbol$MethodSymbol$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symbol$MethodSymbol$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Symbol$MethodSymbol$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Symbol$MethodSymbol$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symbol$MethodSymbol$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _Symbol$MethodSymbol_FieldInfo_[] = {
	{"code", "Lcom/sun/tools/javac/jvm/Code;", nullptr, $PUBLIC, $field(Symbol$MethodSymbol, code)},
	{"extraParams", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", $PUBLIC, $field(Symbol$MethodSymbol, extraParams)},
	{"capturedLocals", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", $PUBLIC, $field(Symbol$MethodSymbol, capturedLocals)},
	{"params", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", $PUBLIC, $field(Symbol$MethodSymbol, params$)},
	{"defaultValue", "Lcom/sun/tools/javac/code/Attribute;", nullptr, $PUBLIC, $field(Symbol$MethodSymbol, defaultValue)},
	{"implementation_filter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Symbol$MethodSymbol, implementation_filter)},
	{}
};

$MethodInfo _Symbol$MethodSymbol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$MethodSymbol::*)(int64_t,$1Name*,$Type*,$Symbol*)>(&Symbol$MethodSymbol::init$))},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"asHandle", "()Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;", nullptr, $PUBLIC},
	{"asMemberOf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"binaryImplementation", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{"binaryOverrides", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"clone", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getDefaultValue", "()Lcom/sun/tools/javac/code/Attribute;", nullptr, $PUBLIC},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC},
	{"getModifiers", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC},
	{"getParameters", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", $PUBLIC},
	{"getReceiverType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getReturnType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getThrownTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getTypeParameters", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"implementation", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;Z)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{"implementation", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;ZLjava/util/function/Predicate;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;ZLjava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PUBLIC},
	{"implemented", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"implementedIn", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"isDefault", "()Z", nullptr, $PUBLIC},
	{"isHandle", "()Z", nullptr, $PUBLIC},
	{"isInheritedIn", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"isLambdaMethod", "()Z", nullptr, $PUBLIC},
	{"isOverridableIn", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Symbol$MethodSymbol::*)($Symbol$TypeSymbol*)>(&Symbol$MethodSymbol::isOverridableIn))},
	{"isStaticOrInstanceInit", "()Z", nullptr, $PUBLIC},
	{"isVarArgs", "()Z", nullptr, $PUBLIC},
	{"lambda$static$0", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&Symbol$MethodSymbol::lambda$static$0))},
	{"originalEnclosingMethod", "()Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{"overrides", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;Z)Z", nullptr, $PUBLIC},
	{"overrides", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;ZZ)Z", nullptr, $PUBLIC},
	{"params", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$MethodSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Symbol$MethodSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	"com.sun.tools.javac.code.Symbol",
	"javax.lang.model.element.ExecutableElement",
	_Symbol$MethodSymbol_FieldInfo_,
	_Symbol$MethodSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$MethodSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$MethodSymbol($Class* clazz) {
	return $of($alloc(Symbol$MethodSymbol));
}

$1List* Symbol$MethodSymbol::getEnclosedElements() {
	 return this->$Symbol::getEnclosedElements();
}

$AnnotationArray* Symbol$MethodSymbol::getAnnotationsByType($Class* annoType) {
	 return this->$Symbol::getAnnotationsByType(annoType);
}

$Annotation* Symbol$MethodSymbol::getAnnotation($Class* annoType) {
	 return this->$Symbol::getAnnotation(annoType);
}

int32_t Symbol$MethodSymbol::hashCode() {
	 return this->$Symbol::hashCode();
}

bool Symbol$MethodSymbol::equals(Object$* arg0) {
	 return this->$Symbol::equals(arg0);
}

$Object* Symbol$MethodSymbol::clone() {
	 return this->$Symbol::clone();
}

void Symbol$MethodSymbol::finalize() {
	this->$Symbol::finalize();
}

Symbol$MethodSymbol::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Symbol$MethodSymbol, $ExecutableElement, memberClass0$);
}

$TypeMirror* Symbol$MethodSymbol::MemberClass0$::asType() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->asType();
}

$1List* Symbol$MethodSymbol::MemberClass0$::getTypeParameters() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getTypeParameters();
}

$TypeMirror* Symbol$MethodSymbol::MemberClass0$::getReturnType() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getReturnType();
}

$1List* Symbol$MethodSymbol::MemberClass0$::getParameters() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getParameters();
}

$TypeMirror* Symbol$MethodSymbol::MemberClass0$::getReceiverType() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getReceiverType();
}

bool Symbol$MethodSymbol::MemberClass0$::isVarArgs() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->isVarArgs();
}

bool Symbol$MethodSymbol::MemberClass0$::isDefault() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->isDefault();
}

$1List* Symbol$MethodSymbol::MemberClass0$::getThrownTypes() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getThrownTypes();
}

$AnnotationValue* Symbol$MethodSymbol::MemberClass0$::getDefaultValue() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getDefaultValue();
}

$Name* Symbol$MethodSymbol::MemberClass0$::getSimpleName() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getSimpleName();
}

$ElementKind* Symbol$MethodSymbol::MemberClass0$::getKind() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getKind();
}

$Set* Symbol$MethodSymbol::MemberClass0$::getModifiers() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getModifiers();
}

$Element* Symbol$MethodSymbol::MemberClass0$::getEnclosingElement() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getEnclosingElement();
}

$1List* Symbol$MethodSymbol::MemberClass0$::getEnclosedElements() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getEnclosedElements();
}

bool Symbol$MethodSymbol::MemberClass0$::equals(Object$* arg0) {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->equals(arg0);
}

int32_t Symbol$MethodSymbol::MemberClass0$::hashCode() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->hashCode();
}

$1List* Symbol$MethodSymbol::MemberClass0$::getAnnotationMirrors() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getAnnotationMirrors();
}

$Annotation* Symbol$MethodSymbol::MemberClass0$::getAnnotation($Class* arg0) {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getAnnotation(arg0);
}

$AnnotationArray* Symbol$MethodSymbol::MemberClass0$::getAnnotationsByType($Class* arg0) {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->getAnnotationsByType(arg0);
}

$Object* Symbol$MethodSymbol::MemberClass0$::accept($ElementVisitor* arg0, Object$* arg1) {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->accept(arg0, arg1);
}

$Object* Symbol$MethodSymbol::MemberClass0$::clone() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->clone();
}

$String* Symbol$MethodSymbol::MemberClass0$::toString() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->toString();
}

void Symbol$MethodSymbol::MemberClass0$::finalize() {
	return ((Symbol$MethodSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$MethodSymbol, memberClass0$)))->finalize();
}

$Predicate* Symbol$MethodSymbol::implementation_filter = nullptr;

void Symbol$MethodSymbol::init$(int64_t flags, $1Name* name, $Type* type, $Symbol* owner) {
	$init($Kinds$Kind);
	$Symbol::init$($Kinds$Kind::MTH, flags, name, type, owner);
	$set(this, code, nullptr);
	$set(this, extraParams, $List::nil());
	$set(this, capturedLocals, $List::nil());
	$set(this, params$, nullptr);
	$set(this, defaultValue, nullptr);
	$init($TypeTag);
	if ($nc($nc(owner)->type)->hasTag($TypeTag::TYPEVAR)) {
		$Assert::error($$str({owner, "."_s, name}));
	}
}

Symbol$MethodSymbol* Symbol$MethodSymbol::clone($Symbol* newOwner) {
	$var(Symbol$MethodSymbol, m, $new($Symbol$MethodSymbol$1, this, this->flags_field, this->name, this->type, newOwner, newOwner));
	$set(m, code, this->code);
	return m;
}

$Set* Symbol$MethodSymbol::getModifiers() {
	int64_t flags = this->flags();
	return $Flags::asModifierSet(((int64_t)(flags & (uint64_t)(int64_t)0x0000080000000000)) != 0 ? (int64_t)(flags & (uint64_t)(int64_t)~1024) : flags);
}

$String* Symbol$MethodSymbol::toString() {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)(flags() & (uint64_t)(int64_t)0x00100000)) != 0) {
		return $nc($nc(this->owner)->name)->toString();
	} else {
		$var($String, s, (this->name == $nc($nc($nc(this->name)->table)->names)->init) ? $nc($nc(this->owner)->name)->toString() : $nc(this->name)->toString());
		if (this->type != nullptr) {
			$init($TypeTag);
			if ($nc(this->type)->hasTag($TypeTag::FORALL)) {
				$assign(s, $str({"<"_s, $($nc(($cast($Type$ForAll, this->type)))->getTypeArguments()), ">"_s, s}));
			}
			$plusAssign(s, $$str({"("_s, $($nc(this->type)->argtypes(((int64_t)(flags() & (uint64_t)(int64_t)0x0000000400000000)) != 0)), ")"_s}));
		}
		return s;
	}
}

int32_t Symbol$MethodSymbol::poolTag() {
	return $nc(this->owner)->isInterface() ? $ClassFile::CONSTANT_InterfaceMethodref : $ClassFile::CONSTANT_Methodref;
}

bool Symbol$MethodSymbol::isHandle() {
	return false;
}

$Symbol$MethodHandleSymbol* Symbol$MethodSymbol::asHandle() {
	return $new($Symbol$MethodHandleSymbol, this);
}

$Symbol* Symbol$MethodSymbol::implemented($Symbol$TypeSymbol* c, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, impl, nullptr);
	{
		$var($List, is, $nc(types)->interfaces($nc(c)->type));
		for (; impl == nullptr && $nc(is)->nonEmpty(); $assign(is, $nc(is)->tail)) {
			$var($Symbol$TypeSymbol, i, $nc(($cast($Type, is->head)))->tsym);
			$assign(impl, implementedIn(i, types));
			if (impl == nullptr) {
				$assign(impl, implemented(i, types));
			}
		}
	}
	return impl;
}

$Symbol* Symbol$MethodSymbol::implementedIn($Symbol$TypeSymbol* c, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, impl, nullptr);
	{
		$var($Iterator, i$, $nc($($nc($($nc(c)->members()))->getSymbolsByName(this->name)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				bool var$0 = this->overrides(sym, $cast($Symbol$TypeSymbol, this->owner), types, true);
				if (var$0) {
					$var($Type, var$1, $nc(this->type)->getReturnType());
					var$0 = $nc(types)->isSameType(var$1, $($nc($(types->memberType($nc(this->owner)->type, sym)))->getReturnType()));
				}
				if (var$0) {
					$assign(impl, sym);
				}
			}
		}
	}
	return impl;
}

bool Symbol$MethodSymbol::binaryOverrides($Symbol* _other, $Symbol$TypeSymbol* origin, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if (isConstructor() || $nc(_other)->kind != $Kinds$Kind::MTH) {
		return false;
	}
	if ($equals(this, _other)) {
		return true;
	}
	$var(Symbol$MethodSymbol, other, $cast(Symbol$MethodSymbol, _other));
	bool var$1 = $nc(other)->isOverridableIn($cast($Symbol$TypeSymbol, this->owner));
	bool var$0 = var$1 && $nc(types)->asSuper($nc(this->owner)->type, other->owner) != nullptr;
	if (var$0) {
		$var($Type, var$2, erasure(types));
		var$0 = types->isSameType(var$2, $(other->erasure(types)));
	}
	if (var$0) {
		return true;
	}
	bool var$5 = ((int64_t)(flags() & (uint64_t)(int64_t)1024)) == 0;
	bool var$4 = var$5 && $nc(other)->isOverridableIn(origin);
	bool var$3 = var$4 && this->isMemberOf(origin, types);
	if (var$3) {
		$var($Type, var$6, erasure(types));
		var$3 = $nc(types)->isSameType(var$6, $(other->erasure(types)));
	}
	return var$3;
}

Symbol$MethodSymbol* Symbol$MethodSymbol::binaryImplementation($Symbol$ClassSymbol* origin, $Types* types) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Symbol$TypeSymbol, c, origin);
		for (; c != nullptr; $assign(c, $nc($($nc(types)->supertype($nc(c)->type)))->tsym)) {
			{
				$var($Iterator, i$, $nc($($nc($($nc(c)->members()))->getSymbolsByName(this->name)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, sym, $cast($Symbol, i$->next()));
					{
						$init($Kinds$Kind);
						if ($nc(sym)->kind == $Kinds$Kind::MTH && $nc(($cast(Symbol$MethodSymbol, sym)))->binaryOverrides(this, origin, types)) {
							return $cast(Symbol$MethodSymbol, sym);
						}
					}
				}
			}
		}
	}
	return nullptr;
}

bool Symbol$MethodSymbol::overrides($Symbol* _other, $Symbol$TypeSymbol* origin, $Types* types, bool checkResult) {
	return overrides(_other, origin, types, checkResult, true);
}

bool Symbol$MethodSymbol::overrides($Symbol* _other, $Symbol$TypeSymbol* origin, $Types* types, bool checkResult, bool requireConcreteIfInherited) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if (isConstructor() || $nc(_other)->kind != $Kinds$Kind::MTH) {
		return false;
	}
	if ($equals(this, _other)) {
		return true;
	}
	$var(Symbol$MethodSymbol, other, $cast(Symbol$MethodSymbol, _other));
	bool var$0 = $nc(other)->isOverridableIn($cast($Symbol$TypeSymbol, this->owner));
	if (var$0 && $nc(types)->asSuper($nc(this->owner)->type, other->owner) != nullptr) {
		$var($Type, mt, types->memberType($nc(this->owner)->type, this));
		$var($Type, ot, types->memberType($nc(this->owner)->type, other));
		if (types->isSubSignature(mt, ot)) {
			if (!checkResult) {
				return true;
			}
			if (types->returnTypeSubstitutable(mt, ot)) {
				return true;
			}
		}
	}
	bool var$3 = (((int64_t)(flags() & (uint64_t)(int64_t)1024)) != 0 && requireConcreteIfInherited);
	if (!var$3) {
		bool var$4 = ((int64_t)($nc(other)->flags() & (uint64_t)(int64_t)1024)) == 0;
		var$3 = (var$4 && ((int64_t)(other->flags() & (uint64_t)(int64_t)0x0000080000000000)) == 0);
	}
	bool var$2 = var$3;
	bool var$1 = var$2 || !$nc(other)->isOverridableIn(origin);
	if (var$1 || !this->isMemberOf(origin, types)) {
		return false;
	}
	$var($Type, mt, $nc(types)->memberType($nc(origin)->type, this));
	$var($Type, ot, types->memberType($nc(origin)->type, other));
	bool var$5 = types->isSubSignature(mt, ot);
	return var$5 && (!checkResult || types->resultSubtype(mt, ot, types->noWarnings));
}

bool Symbol$MethodSymbol::isOverridableIn($Symbol$TypeSymbol* origin) {
	switch ((int32_t)((int64_t)(this->flags_field & (uint64_t)(int64_t)$Flags::AccessFlags))) {
	case $Flags::PRIVATE:
		{
			return false;
		}
	case $Flags::PUBLIC:
		{
			return !$nc(this->owner)->isInterface() || ((int64_t)(this->flags_field & (uint64_t)(int64_t)8)) == 0;
		}
	case $Flags::PROTECTED:
		{
			return ((int64_t)($nc(origin)->flags() & (uint64_t)(int64_t)512)) == 0;
		}
	case 0:
		{
			bool var$0 = this->packge() == $nc(origin)->packge();
			return var$0 && ((int64_t)(origin->flags() & (uint64_t)(int64_t)512)) == 0;
		}
	default:
		{
			return false;
		}
	}
}

bool Symbol$MethodSymbol::isInheritedIn($Symbol* clazz, $Types* types) {
	switch ((int32_t)((int64_t)(this->flags_field & (uint64_t)(int64_t)$Flags::AccessFlags))) {
	case 1:
		{
			return !$nc(this->owner)->isInterface() || clazz == this->owner || ((int64_t)(this->flags_field & (uint64_t)(int64_t)8)) == 0;
		}
	default:
		{
			return $Symbol::isInheritedIn(clazz, types);
		}
	}
}

bool Symbol$MethodSymbol::isLambdaMethod() {
	return ((int64_t)(flags() & (uint64_t)(int64_t)0x0002000000000000)) == (int64_t)0x0002000000000000;
}

Symbol$MethodSymbol* Symbol$MethodSymbol::originalEnclosingMethod() {
	return this;
}

Symbol$MethodSymbol* Symbol$MethodSymbol::implementation($Symbol$TypeSymbol* origin, $Types* types, bool checkResult) {
	return implementation(origin, types, checkResult, Symbol$MethodSymbol::implementation_filter);
}

Symbol$MethodSymbol* Symbol$MethodSymbol::implementation($Symbol$TypeSymbol* origin, $Types* types, bool checkResult, $Predicate* implFilter) {
	$useLocalCurrentObjectStackCache();
	$var(Symbol$MethodSymbol, res, $nc(types)->implementation(this, origin, checkResult, implFilter));
	if (res != nullptr) {
		return res;
	}
	bool var$0 = types->isDerivedRaw($nc(origin)->type);
	if (var$0 && !$nc(origin)->isInterface()) {
		return implementation($nc($(types->supertype(origin->type)))->tsym, types, checkResult);
	} else {
		return nullptr;
	}
}

$List* Symbol$MethodSymbol::params() {
	$useLocalCurrentObjectStackCache();
	$nc(this->owner)->complete();
	if (this->params$ == nullptr) {
		$var($ListBuffer, newParams, $new($ListBuffer));
		int32_t i = 0;
		{
			$var($Iterator, i$, $nc($($nc(this->type)->getParameterTypes()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$var($1Name, paramName, $nc($nc(this->name)->table)->fromString($$str({"arg"_s, $$str(i)})));
					$var($Symbol$VarSymbol, param, $new($Symbol$VarSymbol, 0x0000000200000000, paramName, t, this));
					newParams->append(param);
					++i;
				}
			}
		}
		$set(this, params$, newParams->toList());
	}
	$Assert::checkNonNull(this->params$);
	return this->params$;
}

$Symbol* Symbol$MethodSymbol::asMemberOf($Type* site, $Types* types) {
	return $new(Symbol$MethodSymbol, this->flags_field, this->name, $($nc(types)->memberType(site, this)), this->owner);
}

$ElementKind* Symbol$MethodSymbol::getKind() {
	if (this->name == $nc($nc($nc(this->name)->table)->names)->init) {
		$init($ElementKind);
		return $ElementKind::CONSTRUCTOR;
	} else if (this->name == $nc($nc($nc(this->name)->table)->names)->clinit) {
		$init($ElementKind);
		return $ElementKind::STATIC_INIT;
	} else if (((int64_t)(flags() & (uint64_t)(int64_t)0x00100000)) != 0) {
		$init($ElementKind);
		return isStatic() ? $ElementKind::STATIC_INIT : $ElementKind::INSTANCE_INIT;
	} else {
		$init($ElementKind);
		return $ElementKind::METHOD;
	}
}

bool Symbol$MethodSymbol::isStaticOrInstanceInit() {
	$init($ElementKind);
	bool var$0 = getKind() == $ElementKind::STATIC_INIT;
	return var$0 || getKind() == $ElementKind::INSTANCE_INIT;
}

$Attribute* Symbol$MethodSymbol::getDefaultValue() {
	return this->defaultValue;
}

$List* Symbol$MethodSymbol::getParameters() {
	return params();
}

bool Symbol$MethodSymbol::isVarArgs() {
	return ((int64_t)(flags() & (uint64_t)(int64_t)0x0000000400000000)) != 0;
}

bool Symbol$MethodSymbol::isDefault() {
	return ((int64_t)(flags() & (uint64_t)(int64_t)0x0000080000000000)) != 0;
}

$Object* Symbol$MethodSymbol::accept($ElementVisitor* v, Object$* p) {
	return $of($nc(v)->visitExecutable($as($ExecutableElement, this), p));
}

$Object* Symbol$MethodSymbol::accept($Symbol$Visitor* v, Object$* p) {
	return $of($nc(v)->visitMethodSymbol(this, p));
}

$Type* Symbol$MethodSymbol::getReceiverType() {
	$useLocalCurrentObjectStackCache();
	$var($Type, result, $nc($($cast($Type, asType())))->getReceiverType());
	return (result == nullptr) ? static_cast<$Type*>($Type::noType) : result;
}

$Type* Symbol$MethodSymbol::getReturnType() {
	return $nc($($cast($Type, asType())))->getReturnType();
}

$List* Symbol$MethodSymbol::getThrownTypes() {
	return $nc($($cast($Type, asType())))->getThrownTypes();
}

$1List* Symbol$MethodSymbol::getAnnotationMirrors() {
	return $Symbol::getAnnotationMirrors();
}

$Element* Symbol$MethodSymbol::getEnclosingElement() {
	return $Symbol::getEnclosingElement();
}

$Name* Symbol$MethodSymbol::getSimpleName() {
	return $Symbol::getSimpleName();
}

$TypeMirror* Symbol$MethodSymbol::asType() {
	return $Symbol::asType();
}

$List* Symbol$MethodSymbol::getTypeParameters() {
	return $Symbol::getTypeParameters();
}

bool Symbol$MethodSymbol::lambda$static$0($Symbol* s) {
	$init(Symbol$MethodSymbol);
	$init($Kinds$Kind);
	return $nc(s)->kind == $Kinds$Kind::MTH && ((int64_t)(s->flags() & (uint64_t)(int64_t)4096)) == 0;
}

void clinit$Symbol$MethodSymbol($Class* class$) {
	$assignStatic(Symbol$MethodSymbol::implementation_filter, static_cast<$Predicate*>($new(Symbol$MethodSymbol$$Lambda$lambda$static$0)));
}

Symbol$MethodSymbol::Symbol$MethodSymbol() {
}

$Class* Symbol$MethodSymbol::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Symbol$MethodSymbol$$Lambda$lambda$static$0::classInfo$.name)) {
			return Symbol$MethodSymbol$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(Symbol$MethodSymbol, name, initialize, &_Symbol$MethodSymbol_ClassInfo_, clinit$Symbol$MethodSymbol, allocate$Symbol$MethodSymbol);
	return class$;
}

$Class* Symbol$MethodSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com