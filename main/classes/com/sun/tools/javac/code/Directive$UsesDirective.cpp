#include <com/sun/tools/javac/code/Directive$UsesDirective.h>

#include <com/sun/tools/javac/code/Directive.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>
#include <javax/lang/model/element/ModuleElement$UsesDirective.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

#undef USES

using $Directive = ::com::sun::tools::javac::code::Directive;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;
using $ModuleElement$DirectiveVisitor = ::javax::lang::model::element::ModuleElement$DirectiveVisitor;
using $ModuleElement$UsesDirective = ::javax::lang::model::element::ModuleElement$UsesDirective;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Directive$UsesDirective_FieldInfo_[] = {
	{"service", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(Directive$UsesDirective, service)},
	{}
};

$MethodInfo _Directive$UsesDirective_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Directive$UsesDirective::*)($Symbol$ClassSymbol*)>(&Directive$UsesDirective::init$))},
	{"accept", "(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC},
	{"getService", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Directive$UsesDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Directive$UsesDirective", "com.sun.tools.javac.code.Directive", "UsesDirective", $PUBLIC | $STATIC},
	{"javax.lang.model.element.ModuleElement$UsesDirective", "javax.lang.model.element.ModuleElement", "UsesDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Directive$UsesDirective_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Directive$UsesDirective",
	"com.sun.tools.javac.code.Directive",
	"javax.lang.model.element.ModuleElement$UsesDirective",
	_Directive$UsesDirective_FieldInfo_,
	_Directive$UsesDirective_MethodInfo_,
	nullptr,
	nullptr,
	_Directive$UsesDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive"
};

$Object* allocate$Directive$UsesDirective($Class* clazz) {
	return $of($alloc(Directive$UsesDirective));
}

$Object* Directive$UsesDirective::clone() {
	 return this->$Directive::clone();
}

void Directive$UsesDirective::finalize() {
	this->$Directive::finalize();
}

void Directive$UsesDirective::init$($Symbol$ClassSymbol* service) {
	$Directive::init$();
	$set(this, service, service);
}

$ModuleElement$DirectiveKind* Directive$UsesDirective::getKind() {
	$init($ModuleElement$DirectiveKind);
	return $ModuleElement$DirectiveKind::USES;
}

$TypeElement* Directive$UsesDirective::getService() {
	return $as($TypeElement, this->service);
}

$String* Directive$UsesDirective::toString() {
	return $str({"Uses["_s, this->service, "]"_s});
}

$Object* Directive$UsesDirective::accept($ModuleElement$DirectiveVisitor* v, Object$* p) {
	return $of($nc(v)->visitUses(this, p));
}

bool Directive$UsesDirective::equals(Object$* obj) {
	$var(Directive$UsesDirective, directive, nullptr);
	bool var$1 = $instanceOf(Directive$UsesDirective, obj);
	if (var$1) {
		$assign(directive, $cast(Directive$UsesDirective, obj));
		var$1 = true;
	}
	bool var$0 = (var$1);
	return var$0 && this->service == $nc(directive)->service;
}

int32_t Directive$UsesDirective::hashCode() {
	return $nc($of(this->service))->hashCode() * 31;
}

Directive$UsesDirective::Directive$UsesDirective() {
}

$Class* Directive$UsesDirective::load$($String* name, bool initialize) {
	$loadClass(Directive$UsesDirective, name, initialize, &_Directive$UsesDirective_ClassInfo_, allocate$Directive$UsesDirective);
	return class$;
}

$Class* Directive$UsesDirective::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com