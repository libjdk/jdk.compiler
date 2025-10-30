#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>

#include <com/sun/tools/javac/code/Directive$ExportsFlag.h>
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
#include <javax/lang/model/element/ModuleElement$ExportsDirective.h>
#include <javax/lang/model/element/PackageElement.h>
#include <jcpp.h>

#undef EXPORTS

using $Directive = ::com::sun::tools::javac::code::Directive;
using $Directive$ExportsFlag = ::com::sun::tools::javac::code::Directive$ExportsFlag;
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
using $ModuleElement$ExportsDirective = ::javax::lang::model::element::ModuleElement$ExportsDirective;
using $PackageElement = ::javax::lang::model::element::PackageElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Directive$ExportsDirective_FieldInfo_[] = {
	{"packge", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC | $FINAL, $field(Directive$ExportsDirective, packge)},
	{"modules", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC | $FINAL, $field(Directive$ExportsDirective, modules)},
	{"flags", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$ExportsFlag;>;", $PUBLIC | $FINAL, $field(Directive$ExportsDirective, flags)},
	{}
};

$MethodInfo _Directive$ExportsDirective_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;)V", $PUBLIC, $method(static_cast<void(Directive$ExportsDirective::*)($Symbol$PackageSymbol*,$List*)>(&Directive$ExportsDirective::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List;Ljava/util/Set;)V", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$ExportsFlag;>;)V", $PUBLIC, $method(static_cast<void(Directive$ExportsDirective::*)($Symbol$PackageSymbol*,$List*,$Set*)>(&Directive$ExportsDirective::init$))},
	{"accept", "(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC},
	{"getPackage", "()Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"getTargetModules", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Directive$ExportsDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Directive$ExportsDirective", "com.sun.tools.javac.code.Directive", "ExportsDirective", $PUBLIC | $STATIC},
	{"javax.lang.model.element.ModuleElement$ExportsDirective", "javax.lang.model.element.ModuleElement", "ExportsDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Directive$ExportsDirective_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Directive$ExportsDirective",
	"com.sun.tools.javac.code.Directive",
	"javax.lang.model.element.ModuleElement$ExportsDirective",
	_Directive$ExportsDirective_FieldInfo_,
	_Directive$ExportsDirective_MethodInfo_,
	nullptr,
	nullptr,
	_Directive$ExportsDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive"
};

$Object* allocate$Directive$ExportsDirective($Class* clazz) {
	return $of($alloc(Directive$ExportsDirective));
}

int32_t Directive$ExportsDirective::hashCode() {
	 return this->$Directive::hashCode();
}

bool Directive$ExportsDirective::equals(Object$* arg0) {
	 return this->$Directive::equals(arg0);
}

$Object* Directive$ExportsDirective::clone() {
	 return this->$Directive::clone();
}

void Directive$ExportsDirective::finalize() {
	this->$Directive::finalize();
}

void Directive$ExportsDirective::init$($Symbol$PackageSymbol* packge, $List* modules) {
	$load($Directive$ExportsFlag);
	Directive$ExportsDirective::init$(packge, modules, $($EnumSet::noneOf($Directive$ExportsFlag::class$)));
}

void Directive$ExportsDirective::init$($Symbol$PackageSymbol* packge, $List* modules, $Set* flags) {
	$Directive::init$();
	$set(this, packge, packge);
	$set(this, modules, modules);
	$set(this, flags, flags);
}

$ModuleElement$DirectiveKind* Directive$ExportsDirective::getKind() {
	$init($ModuleElement$DirectiveKind);
	return $ModuleElement$DirectiveKind::EXPORTS;
}

$PackageElement* Directive$ExportsDirective::getPackage() {
	return $as($PackageElement, this->packge);
}

$1List* Directive$ExportsDirective::getTargetModules() {
	return this->modules == nullptr ? ($1List*)nullptr : $Collections::unmodifiableList(this->modules);
}

$String* Directive$ExportsDirective::toString() {
	if (this->modules == nullptr) {
		return $str({"Exports["_s, this->packge, "]"_s});
	} else {
		return $str({"Exports["_s, this->packge, ":"_s, this->modules, "]"_s});
	}
}

$Object* Directive$ExportsDirective::accept($ModuleElement$DirectiveVisitor* v, Object$* p) {
	return $of($nc(v)->visitExports(this, p));
}

Directive$ExportsDirective::Directive$ExportsDirective() {
}

$Class* Directive$ExportsDirective::load$($String* name, bool initialize) {
	$loadClass(Directive$ExportsDirective, name, initialize, &_Directive$ExportsDirective_ClassInfo_, allocate$Directive$ExportsDirective);
	return class$;
}

$Class* Directive$ExportsDirective::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com