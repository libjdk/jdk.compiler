#include <com/sun/tools/javac/code/Directive$OpensDirective.h>

#include <com/sun/tools/javac/code/Directive$OpensFlag.h>
#include <com/sun/tools/javac/code/Directive.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>
#include <javax/lang/model/element/ModuleElement$OpensDirective.h>
#include <javax/lang/model/element/PackageElement.h>
#include <jcpp.h>

#undef OPENS

using $Directive = ::com::sun::tools::javac::code::Directive;
using $Directive$OpensFlag = ::com::sun::tools::javac::code::Directive$OpensFlag;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;
using $ModuleElement$DirectiveVisitor = ::javax::lang::model::element::ModuleElement$DirectiveVisitor;
using $ModuleElement$OpensDirective = ::javax::lang::model::element::ModuleElement$OpensDirective;
using $PackageElement = ::javax::lang::model::element::PackageElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Directive$OpensDirective_FieldInfo_[] = {
	{"packge", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC | $FINAL, $field(Directive$OpensDirective, packge)},
	{"modules", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC | $FINAL, $field(Directive$OpensDirective, modules)},
	{"flags", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$OpensFlag;>;", $PUBLIC | $FINAL, $field(Directive$OpensDirective, flags)},
	{}
};

$MethodInfo _Directive$OpensDirective_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;)V", $PUBLIC, $method(static_cast<void(Directive$OpensDirective::*)($Symbol$PackageSymbol*,$List*)>(&Directive$OpensDirective::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List;Ljava/util/Set;)V", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$OpensFlag;>;)V", $PUBLIC, $method(static_cast<void(Directive$OpensDirective::*)($Symbol$PackageSymbol*,$List*,$Set*)>(&Directive$OpensDirective::init$))},
	{"accept", "(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC},
	{"getPackage", "()Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"getTargetModules", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Directive$OpensDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Directive$OpensDirective", "com.sun.tools.javac.code.Directive", "OpensDirective", $PUBLIC | $STATIC},
	{"javax.lang.model.element.ModuleElement$OpensDirective", "javax.lang.model.element.ModuleElement", "OpensDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Directive$OpensDirective_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Directive$OpensDirective",
	"com.sun.tools.javac.code.Directive",
	"javax.lang.model.element.ModuleElement$OpensDirective",
	_Directive$OpensDirective_FieldInfo_,
	_Directive$OpensDirective_MethodInfo_,
	nullptr,
	nullptr,
	_Directive$OpensDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive"
};

$Object* allocate$Directive$OpensDirective($Class* clazz) {
	return $of($alloc(Directive$OpensDirective));
}

int32_t Directive$OpensDirective::hashCode() {
	 return this->$Directive::hashCode();
}

bool Directive$OpensDirective::equals(Object$* arg0) {
	 return this->$Directive::equals(arg0);
}

$Object* Directive$OpensDirective::clone() {
	 return this->$Directive::clone();
}

void Directive$OpensDirective::finalize() {
	this->$Directive::finalize();
}

void Directive$OpensDirective::init$($Symbol$PackageSymbol* packge, $List* modules) {
	$load($Directive$OpensFlag);
	Directive$OpensDirective::init$(packge, modules, $($EnumSet::noneOf($Directive$OpensFlag::class$)));
}

void Directive$OpensDirective::init$($Symbol$PackageSymbol* packge, $List* modules, $Set* flags) {
	$Directive::init$();
	$set(this, packge, packge);
	$set(this, modules, modules);
	$set(this, flags, flags);
}

$ModuleElement$DirectiveKind* Directive$OpensDirective::getKind() {
	$init($ModuleElement$DirectiveKind);
	return $ModuleElement$DirectiveKind::OPENS;
}

$PackageElement* Directive$OpensDirective::getPackage() {
	return $as($PackageElement, this->packge);
}

$1List* Directive$OpensDirective::getTargetModules() {
	return this->modules == nullptr ? ($1List*)nullptr : $Collections::unmodifiableList(this->modules);
}

$String* Directive$OpensDirective::toString() {
	if (this->modules == nullptr) {
		return $str({"Opens["_s, this->packge, "]"_s});
	} else {
		return $str({"Opens["_s, this->packge, ":"_s, this->modules, "]"_s});
	}
}

$Object* Directive$OpensDirective::accept($ModuleElement$DirectiveVisitor* v, Object$* p) {
	return $of($nc(v)->visitOpens(this, p));
}

Directive$OpensDirective::Directive$OpensDirective() {
}

$Class* Directive$OpensDirective::load$($String* name, bool initialize) {
	$loadClass(Directive$OpensDirective, name, initialize, &_Directive$OpensDirective_ClassInfo_, allocate$Directive$OpensDirective);
	return class$;
}

$Class* Directive$OpensDirective::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com