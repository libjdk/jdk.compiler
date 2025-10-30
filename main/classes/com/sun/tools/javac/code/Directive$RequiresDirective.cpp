#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>

#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Directive.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>
#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <jcpp.h>

#undef REQUIRES
#undef STATIC_PHASE
#undef TRANSITIVE

using $Directive = ::com::sun::tools::javac::code::Directive;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;
using $ModuleElement$DirectiveVisitor = ::javax::lang::model::element::ModuleElement$DirectiveVisitor;
using $ModuleElement$RequiresDirective = ::javax::lang::model::element::ModuleElement$RequiresDirective;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Directive$RequiresDirective_FieldInfo_[] = {
	{"module", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC | $FINAL, $field(Directive$RequiresDirective, module)},
	{"flags", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$RequiresFlag;>;", $PUBLIC | $FINAL, $field(Directive$RequiresDirective, flags)},
	{}
};

$MethodInfo _Directive$RequiresDirective_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Directive$RequiresDirective::*)($Symbol$ModuleSymbol*)>(&Directive$RequiresDirective::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Set;)V", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$RequiresFlag;>;)V", $PUBLIC, $method(static_cast<void(Directive$RequiresDirective::*)($Symbol$ModuleSymbol*,$Set*)>(&Directive$RequiresDirective::init$))},
	{"accept", "(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getDependency", "()Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC},
	{"isStatic", "()Z", nullptr, $PUBLIC},
	{"isTransitive", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Directive$RequiresDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Directive$RequiresDirective", "com.sun.tools.javac.code.Directive", "RequiresDirective", $PUBLIC | $STATIC},
	{"javax.lang.model.element.ModuleElement$RequiresDirective", "javax.lang.model.element.ModuleElement", "RequiresDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Directive$RequiresDirective_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Directive$RequiresDirective",
	"com.sun.tools.javac.code.Directive",
	"javax.lang.model.element.ModuleElement$RequiresDirective",
	_Directive$RequiresDirective_FieldInfo_,
	_Directive$RequiresDirective_MethodInfo_,
	nullptr,
	nullptr,
	_Directive$RequiresDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive"
};

$Object* allocate$Directive$RequiresDirective($Class* clazz) {
	return $of($alloc(Directive$RequiresDirective));
}

int32_t Directive$RequiresDirective::hashCode() {
	 return this->$Directive::hashCode();
}

bool Directive$RequiresDirective::equals(Object$* arg0) {
	 return this->$Directive::equals(arg0);
}

$Object* Directive$RequiresDirective::clone() {
	 return this->$Directive::clone();
}

void Directive$RequiresDirective::finalize() {
	this->$Directive::finalize();
}

void Directive$RequiresDirective::init$($Symbol$ModuleSymbol* module) {
	$load($Directive$RequiresFlag);
	Directive$RequiresDirective::init$(module, $($EnumSet::noneOf($Directive$RequiresFlag::class$)));
}

void Directive$RequiresDirective::init$($Symbol$ModuleSymbol* module, $Set* flags) {
	$Directive::init$();
	$set(this, module, module);
	$set(this, flags, flags);
}

$ModuleElement$DirectiveKind* Directive$RequiresDirective::getKind() {
	$init($ModuleElement$DirectiveKind);
	return $ModuleElement$DirectiveKind::REQUIRES;
}

bool Directive$RequiresDirective::isStatic() {
	$init($Directive$RequiresFlag);
	return $nc(this->flags)->contains($Directive$RequiresFlag::STATIC_PHASE);
}

bool Directive$RequiresDirective::isTransitive() {
	$init($Directive$RequiresFlag);
	return $nc(this->flags)->contains($Directive$RequiresFlag::TRANSITIVE);
}

$ModuleElement* Directive$RequiresDirective::getDependency() {
	return $as($ModuleElement, this->module);
}

$String* Directive$RequiresDirective::toString() {
	return $str({"Requires["_s, this->flags, ","_s, this->module, "]"_s});
}

$Object* Directive$RequiresDirective::accept($ModuleElement$DirectiveVisitor* v, Object$* p) {
	return $of($nc(v)->visitRequires(this, p));
}

Directive$RequiresDirective::Directive$RequiresDirective() {
}

$Class* Directive$RequiresDirective::load$($String* name, bool initialize) {
	$loadClass(Directive$RequiresDirective, name, initialize, &_Directive$RequiresDirective_ClassInfo_, allocate$Directive$RequiresDirective);
	return class$;
}

$Class* Directive$RequiresDirective::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com