#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/SymbolMetadata.h>
#include <com/sun/tools/javac/code/Type$PackageType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef PACKAGE
#undef PCK

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $SymbolMetadata = ::com::sun::tools::javac::code::SymbolMetadata;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$PackageType = ::com::sun::tools::javac::code::Type$PackageType;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $1Name = ::javax::lang::model::element::Name;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$PackageSymbol_FieldInfo_[] = {
	{"members_field", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC, $field(Symbol$PackageSymbol, members_field)},
	{"fullname", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Symbol$PackageSymbol, fullname)},
	{"package_info", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(Symbol$PackageSymbol, package_info)},
	{"modle", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(Symbol$PackageSymbol, modle)},
	{"sourcefile", "Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $field(Symbol$PackageSymbol, sourcefile)},
	{}
};

$MethodInfo _Symbol$PackageSymbol_MethodInfo_[] = {
	{"*asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC},
	{"*getModifiers", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"*getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$PackageSymbol::*)($Name*,$Type*,$Symbol*)>(&Symbol$PackageSymbol::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$PackageSymbol::*)($Name*,$Symbol*)>(&Symbol$PackageSymbol::init$))},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"flags", "()J", nullptr, $PUBLIC},
	{"getEnclosingElement", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC},
	{"getQualifiedName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getRawAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PUBLIC},
	{"isUnnamed", "()Z", nullptr, $PUBLIC},
	{"members", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"mergeAttributes", "()V", nullptr, $PRIVATE, $method(static_cast<void(Symbol$PackageSymbol::*)()>(&Symbol$PackageSymbol::mergeAttributes))},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$PackageSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$PackageSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$PackageSymbol",
	"com.sun.tools.javac.code.Symbol$TypeSymbol",
	"javax.lang.model.element.PackageElement",
	_Symbol$PackageSymbol_FieldInfo_,
	_Symbol$PackageSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$PackageSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$PackageSymbol($Class* clazz) {
	return $of($alloc(Symbol$PackageSymbol));
}

$1List* Symbol$PackageSymbol::getEnclosedElements() {
	 return this->$Symbol$TypeSymbol::getEnclosedElements();
}

$1List* Symbol$PackageSymbol::getAnnotationMirrors() {
	 return this->$Symbol$TypeSymbol::getAnnotationMirrors();
}

$1Name* Symbol$PackageSymbol::getSimpleName() {
	 return this->$Symbol$TypeSymbol::getSimpleName();
}

$TypeMirror* Symbol$PackageSymbol::asType() {
	 return this->$Symbol$TypeSymbol::asType();
}

$Set* Symbol$PackageSymbol::getModifiers() {
	 return this->$Symbol$TypeSymbol::getModifiers();
}

$AnnotationArray* Symbol$PackageSymbol::getAnnotationsByType($Class* annoType) {
	 return this->$Symbol$TypeSymbol::getAnnotationsByType(annoType);
}

$Annotation* Symbol$PackageSymbol::getAnnotation($Class* annoType) {
	 return this->$Symbol$TypeSymbol::getAnnotation(annoType);
}

int32_t Symbol$PackageSymbol::hashCode() {
	 return this->$Symbol$TypeSymbol::hashCode();
}

bool Symbol$PackageSymbol::equals(Object$* arg0) {
	 return this->$Symbol$TypeSymbol::equals(arg0);
}

$Object* Symbol$PackageSymbol::clone() {
	 return this->$Symbol$TypeSymbol::clone();
}

void Symbol$PackageSymbol::finalize() {
	this->$Symbol$TypeSymbol::finalize();
}

Symbol$PackageSymbol::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Symbol$PackageSymbol, $PackageElement, memberClass0$);
}

$TypeMirror* Symbol$PackageSymbol::MemberClass0$::asType() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->asType();
}

$1Name* Symbol$PackageSymbol::MemberClass0$::getQualifiedName() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getQualifiedName();
}

$1Name* Symbol$PackageSymbol::MemberClass0$::getSimpleName() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getSimpleName();
}

$1List* Symbol$PackageSymbol::MemberClass0$::getEnclosedElements() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getEnclosedElements();
}

bool Symbol$PackageSymbol::MemberClass0$::isUnnamed() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->isUnnamed();
}

$Element* Symbol$PackageSymbol::MemberClass0$::getEnclosingElement() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getEnclosingElement();
}

$ElementKind* Symbol$PackageSymbol::MemberClass0$::getKind() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getKind();
}

$Set* Symbol$PackageSymbol::MemberClass0$::getModifiers() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getModifiers();
}

bool Symbol$PackageSymbol::MemberClass0$::equals(Object$* arg0) {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->equals(arg0);
}

int32_t Symbol$PackageSymbol::MemberClass0$::hashCode() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->hashCode();
}

$1List* Symbol$PackageSymbol::MemberClass0$::getAnnotationMirrors() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getAnnotationMirrors();
}

$Annotation* Symbol$PackageSymbol::MemberClass0$::getAnnotation($Class* arg0) {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getAnnotation(arg0);
}

$AnnotationArray* Symbol$PackageSymbol::MemberClass0$::getAnnotationsByType($Class* arg0) {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->getAnnotationsByType(arg0);
}

$Object* Symbol$PackageSymbol::MemberClass0$::accept($ElementVisitor* arg0, Object$* arg1) {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->accept(arg0, arg1);
}

$Object* Symbol$PackageSymbol::MemberClass0$::clone() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->clone();
}

$String* Symbol$PackageSymbol::MemberClass0$::toString() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->toString();
}

void Symbol$PackageSymbol::MemberClass0$::finalize() {
	return ((Symbol$PackageSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$PackageSymbol, memberClass0$)))->finalize();
}

void Symbol$PackageSymbol::init$($Name* name, $Type* type, $Symbol* owner) {
	$init($Kinds$Kind);
	$Symbol$TypeSymbol::init$($Kinds$Kind::PCK, 0, name, type, owner);
	$set(this, members_field, nullptr);
	$set(this, fullname, formFullName(name, owner));
}

void Symbol$PackageSymbol::init$($Name* name, $Symbol* owner) {
	Symbol$PackageSymbol::init$(name, nullptr, owner);
	$set(this, type, $new($Type$PackageType, this));
}

$String* Symbol$PackageSymbol::toString() {
	return $nc(this->fullname)->toString();
}

$Name* Symbol$PackageSymbol::getQualifiedName() {
	return this->fullname;
}

bool Symbol$PackageSymbol::isUnnamed() {
	return $nc(this->name)->isEmpty() && this->owner != nullptr;
}

$Scope$WriteableScope* Symbol$PackageSymbol::members() {
	complete();
	return this->members_field;
}

int32_t Symbol$PackageSymbol::poolTag() {
	return $ClassFile::CONSTANT_Package;
}

int64_t Symbol$PackageSymbol::flags() {
	complete();
	return this->flags_field;
}

$List* Symbol$PackageSymbol::getRawAttributes() {
	complete();
	if (this->package_info != nullptr) {
		$nc(this->package_info)->complete();
		mergeAttributes();
	}
	return $Symbol$TypeSymbol::getRawAttributes();
}

void Symbol$PackageSymbol::mergeAttributes() {
	if (this->metadata == nullptr && $nc(this->package_info)->metadata != nullptr) {
		$set(this, metadata, $new($SymbolMetadata, this));
		$nc(this->metadata)->setAttributes($nc(this->package_info)->metadata);
	}
}

bool Symbol$PackageSymbol::exists() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)0x00800000)) != 0;
}

$ElementKind* Symbol$PackageSymbol::getKind() {
	$init($ElementKind);
	return $ElementKind::PACKAGE;
}

$Element* Symbol$PackageSymbol::getEnclosingElement() {
	return (this->modle != nullptr && !$nc(this->modle)->isNoModule() ? static_cast<$Symbol*>(this->modle) : ($Symbol*)nullptr);
}

$Object* Symbol$PackageSymbol::accept($ElementVisitor* v, Object$* p) {
	return $of($nc(v)->visitPackage($as($PackageElement, this), p));
}

$Object* Symbol$PackageSymbol::accept($Symbol$Visitor* v, Object$* p) {
	return $of($nc(v)->visitPackageSymbol(this, p));
}

void Symbol$PackageSymbol::reset() {
	$set(this, metadata, nullptr);
}

Symbol$PackageSymbol::Symbol$PackageSymbol() {
}

$Class* Symbol$PackageSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$PackageSymbol, name, initialize, &_Symbol$PackageSymbol_ClassInfo_, allocate$Symbol$PackageSymbol);
	return class$;
}

$Class* Symbol$PackageSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com