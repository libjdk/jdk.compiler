#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$ModuleFlags.h>
#include <com/sun/tools/javac/code/Symbol$ModuleResolutionFlags.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ModuleType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

#undef MDL
#undef MODULE
#undef NULL_COMPLETER
#undef OPEN
#undef TYP

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$ModuleFlags = ::com::sun::tools::javac::code::Symbol$ModuleFlags;
using $Symbol$ModuleResolutionFlags = ::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ModuleType = ::com::sun::tools::javac::code::Type$ModuleType;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $List = ::com::sun::tools::javac::util::List;
using $1Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0 : public $Predicate {
	$class(Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* m) override {
		 return Symbol$ModuleSymbol::lambda$getEnclosedElements$0($cast($Symbol, m));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0::*)()>(&Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0::load$($String* name, bool initialize) {
	$loadClass(Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0::class$ = nullptr;

$FieldInfo _Symbol$ModuleSymbol_FieldInfo_[] = {
	{"version", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Symbol$ModuleSymbol, version)},
	{"sourceLocation", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $field(Symbol$ModuleSymbol, sourceLocation)},
	{"classLocation", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $field(Symbol$ModuleSymbol, classLocation)},
	{"patchLocation", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $field(Symbol$ModuleSymbol, patchLocation)},
	{"patchOutputLocation", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $field(Symbol$ModuleSymbol, patchOutputLocation)},
	{"directives", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Directive;>;", $PUBLIC, $field(Symbol$ModuleSymbol, directives)},
	{"requires", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Directive$RequiresDirective;>;", $PUBLIC, $field(Symbol$ModuleSymbol, requires)},
	{"exports", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Directive$ExportsDirective;>;", $PUBLIC, $field(Symbol$ModuleSymbol, exports)},
	{"opens", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Directive$OpensDirective;>;", $PUBLIC, $field(Symbol$ModuleSymbol, opens)},
	{"provides", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Directive$ProvidesDirective;>;", $PUBLIC, $field(Symbol$ModuleSymbol, provides)},
	{"uses", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Directive$UsesDirective;>;", $PUBLIC, $field(Symbol$ModuleSymbol, uses)},
	{"module_info", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(Symbol$ModuleSymbol, module_info)},
	{"unnamedPackage", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(Symbol$ModuleSymbol, unnamedPackage)},
	{"visiblePackages", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;>;", $PUBLIC, $field(Symbol$ModuleSymbol, visiblePackages)},
	{"readModules", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC, $field(Symbol$ModuleSymbol, readModules)},
	{"enclosedPackages", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC, $field(Symbol$ModuleSymbol, enclosedPackages)},
	{"usesProvidesCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC, $field(Symbol$ModuleSymbol, usesProvidesCompleter)},
	{"flags", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleFlags;>;", $PUBLIC | $FINAL, $field(Symbol$ModuleSymbol, flags$)},
	{"resolutionFlags", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;>;", $PUBLIC | $FINAL, $field(Symbol$ModuleSymbol, resolutionFlags)},
	{}
};

$MethodInfo _Symbol$ModuleSymbol_MethodInfo_[] = {
	{"*asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getModifiers", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$ModuleSymbol::*)($1Name*,$Symbol*)>(&Symbol$ModuleSymbol::init$))},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"completeUsesProvides", "()V", nullptr, $PUBLIC},
	{"create", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Symbol$ModuleSymbol*(*)($1Name*,$1Name*)>(&Symbol$ModuleSymbol::create))},
	{"getDirectives", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/lang/model/element/ModuleElement$Directive;>;", $PUBLIC},
	{"getEnclosedElements", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC},
	{"getQualifiedName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSimpleName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"isDeprecated", "()Z", nullptr, $PUBLIC},
	{"isNoModule", "()Z", nullptr, $PUBLIC},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isUnnamed", "()Z", nullptr, $PUBLIC},
	{"lambda$getEnclosedElements$0", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&Symbol$ModuleSymbol::lambda$getEnclosedElements$0))},
	{"outermostClass", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$ModuleSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$ModuleSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$ModuleSymbol",
	"com.sun.tools.javac.code.Symbol$TypeSymbol",
	"javax.lang.model.element.ModuleElement",
	_Symbol$ModuleSymbol_FieldInfo_,
	_Symbol$ModuleSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$ModuleSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$ModuleSymbol($Class* clazz) {
	return $of($alloc(Symbol$ModuleSymbol));
}

$1List* Symbol$ModuleSymbol::getAnnotationMirrors() {
	 return this->$Symbol$TypeSymbol::getAnnotationMirrors();
}

$Element* Symbol$ModuleSymbol::getEnclosingElement() {
	 return this->$Symbol$TypeSymbol::getEnclosingElement();
}

$TypeMirror* Symbol$ModuleSymbol::asType() {
	 return this->$Symbol$TypeSymbol::asType();
}

$Set* Symbol$ModuleSymbol::getModifiers() {
	 return this->$Symbol$TypeSymbol::getModifiers();
}

$AnnotationArray* Symbol$ModuleSymbol::getAnnotationsByType($Class* annoType) {
	 return this->$Symbol$TypeSymbol::getAnnotationsByType(annoType);
}

$Annotation* Symbol$ModuleSymbol::getAnnotation($Class* annoType) {
	 return this->$Symbol$TypeSymbol::getAnnotation(annoType);
}

int32_t Symbol$ModuleSymbol::hashCode() {
	 return this->$Symbol$TypeSymbol::hashCode();
}

bool Symbol$ModuleSymbol::equals(Object$* arg0) {
	 return this->$Symbol$TypeSymbol::equals(arg0);
}

$Object* Symbol$ModuleSymbol::clone() {
	 return this->$Symbol$TypeSymbol::clone();
}

void Symbol$ModuleSymbol::finalize() {
	this->$Symbol$TypeSymbol::finalize();
}

Symbol$ModuleSymbol::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Symbol$ModuleSymbol, $ModuleElement, memberClass0$);
}

$TypeMirror* Symbol$ModuleSymbol::MemberClass0$::asType() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->asType();
}

$Name* Symbol$ModuleSymbol::MemberClass0$::getQualifiedName() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getQualifiedName();
}

$Name* Symbol$ModuleSymbol::MemberClass0$::getSimpleName() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getSimpleName();
}

$1List* Symbol$ModuleSymbol::MemberClass0$::getEnclosedElements() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getEnclosedElements();
}

bool Symbol$ModuleSymbol::MemberClass0$::isOpen() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->isOpen();
}

bool Symbol$ModuleSymbol::MemberClass0$::isUnnamed() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->isUnnamed();
}

$Element* Symbol$ModuleSymbol::MemberClass0$::getEnclosingElement() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getEnclosingElement();
}

$1List* Symbol$ModuleSymbol::MemberClass0$::getDirectives() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getDirectives();
}

$ElementKind* Symbol$ModuleSymbol::MemberClass0$::getKind() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getKind();
}

$Set* Symbol$ModuleSymbol::MemberClass0$::getModifiers() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getModifiers();
}

bool Symbol$ModuleSymbol::MemberClass0$::equals(Object$* arg0) {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->equals(arg0);
}

int32_t Symbol$ModuleSymbol::MemberClass0$::hashCode() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->hashCode();
}

$1List* Symbol$ModuleSymbol::MemberClass0$::getAnnotationMirrors() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getAnnotationMirrors();
}

$Annotation* Symbol$ModuleSymbol::MemberClass0$::getAnnotation($Class* arg0) {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getAnnotation(arg0);
}

$AnnotationArray* Symbol$ModuleSymbol::MemberClass0$::getAnnotationsByType($Class* arg0) {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->getAnnotationsByType(arg0);
}

$Object* Symbol$ModuleSymbol::MemberClass0$::accept($ElementVisitor* arg0, Object$* arg1) {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->accept(arg0, arg1);
}

$Object* Symbol$ModuleSymbol::MemberClass0$::clone() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->clone();
}

$String* Symbol$ModuleSymbol::MemberClass0$::toString() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->toString();
}

void Symbol$ModuleSymbol::MemberClass0$::finalize() {
	return ((Symbol$ModuleSymbol*)(void*)((int8_t*)(void*)this - $offsetof(Symbol$ModuleSymbol, memberClass0$)))->finalize();
}

Symbol$ModuleSymbol* Symbol$ModuleSymbol::create($1Name* name, $1Name* module_info) {
	$init(Symbol$ModuleSymbol);
	$useLocalCurrentObjectStackCache();
	$var(Symbol$ModuleSymbol, msym, $new(Symbol$ModuleSymbol, name, nullptr));
	$var($Symbol$ClassSymbol, info, $new($Symbol$ClassSymbol, $Flags::MODULE, module_info, msym));
	$set(info, fullname, formFullName(module_info, msym));
	$set(info, flatname, info->fullname);
	$set(info, members_field, $Scope$WriteableScope::create(info));
	$set(msym, module_info, info);
	return msym;
}

void Symbol$ModuleSymbol::init$($1Name* name, $Symbol* owner) {
	$init($Kinds$Kind);
	$Symbol$TypeSymbol::init$($Kinds$Kind::MDL, 0, name, nullptr, owner);
	$set(this, enclosedPackages, $List::nil());
	$init($Symbol$Completer);
	$set(this, usesProvidesCompleter, $Symbol$Completer::NULL_COMPLETER);
	$load($Symbol$ModuleFlags);
	$set(this, flags$, $EnumSet::noneOf($Symbol$ModuleFlags::class$));
	$load($Symbol$ModuleResolutionFlags);
	$set(this, resolutionFlags, $EnumSet::noneOf($Symbol$ModuleResolutionFlags::class$));
	$Assert::checkNonNull(name);
	$set(this, type, $new($Type$ModuleType, this));
}

int32_t Symbol$ModuleSymbol::poolTag() {
	return $ClassFile::CONSTANT_Module;
}

$Name* Symbol$ModuleSymbol::getSimpleName() {
	return $Convert::shortName(this->name);
}

bool Symbol$ModuleSymbol::isOpen() {
	$init($Symbol$ModuleFlags);
	return $nc(this->flags$)->contains($Symbol$ModuleFlags::OPEN);
}

bool Symbol$ModuleSymbol::isUnnamed() {
	return $nc(this->name)->isEmpty() && this->owner == nullptr;
}

bool Symbol$ModuleSymbol::isDeprecated() {
	return hasDeprecatedAnnotation();
}

bool Symbol$ModuleSymbol::isNoModule() {
	return false;
}

$ElementKind* Symbol$ModuleSymbol::getKind() {
	$init($ElementKind);
	return $ElementKind::MODULE;
}

$1List* Symbol$ModuleSymbol::getDirectives() {
	apiComplete();
	completeUsesProvides();
	return $Collections::unmodifiableList(this->directives);
}

void Symbol$ModuleSymbol::completeUsesProvides() {
	$init($Symbol$Completer);
	if (this->usesProvidesCompleter != $Symbol$Completer::NULL_COMPLETER) {
		$var($Symbol$Completer, c, this->usesProvidesCompleter);
		$set(this, usesProvidesCompleter, $Symbol$Completer::NULL_COMPLETER);
		$nc(c)->complete(this);
	}
}

$Symbol$ClassSymbol* Symbol$ModuleSymbol::outermostClass() {
	return nullptr;
}

$String* Symbol$ModuleSymbol::toString() {
	$var($String, n, (this->name == nullptr) ? "<unknown>"_s : ($nc(this->name)->isEmpty()) ? "<unnamed>"_s : $String::valueOf($of(this->name)));
	return n;
}

$Object* Symbol$ModuleSymbol::accept($ElementVisitor* v, Object$* p) {
	return $of($nc(v)->visitModule($as($ModuleElement, this), p));
}

$1List* Symbol$ModuleSymbol::getEnclosedElements() {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $List::nil());
	{
		$var($Iterator, i$, $nc(this->enclosedPackages)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				if ($nc($($nc(sym)->members()))->anyMatch(static_cast<$Predicate*>($$new(Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0)))) {
					$assign(list, $nc(list)->prepend(sym));
				}
			}
		}
	}
	return list;
}

void Symbol$ModuleSymbol::reset() {
	$set(this, directives, nullptr);
	$set(this, requires, nullptr);
	$set(this, exports, nullptr);
	$set(this, provides, nullptr);
	$set(this, uses, nullptr);
	$set(this, visiblePackages, nullptr);
}

$1Name* Symbol$ModuleSymbol::getQualifiedName() {
	return $Symbol$TypeSymbol::getQualifiedName();
}

bool Symbol$ModuleSymbol::lambda$getEnclosedElements$0($Symbol* m) {
	$init(Symbol$ModuleSymbol);
	$init($Kinds$Kind);
	return $nc(m)->kind == $Kinds$Kind::TYP;
}

Symbol$ModuleSymbol::Symbol$ModuleSymbol() {
}

$Class* Symbol$ModuleSymbol::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0::classInfo$.name)) {
			return Symbol$ModuleSymbol$$Lambda$lambda$getEnclosedElements$0::load$(name, initialize);
		}
	}
	$loadClass(Symbol$ModuleSymbol, name, initialize, &_Symbol$ModuleSymbol_ClassInfo_, allocate$Symbol$ModuleSymbol);
	return class$;
}

$Class* Symbol$ModuleSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com