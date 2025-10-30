#include <com/sun/tools/javac/code/Symbol$DelegatedSymbol.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $1Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$DelegatedSymbol_FieldInfo_[] = {
	{"other", "Lcom/sun/tools/javac/code/Symbol;", "TT;", $PROTECTED, $field(Symbol$DelegatedSymbol, other)},
	{}
};

$MethodInfo _Symbol$DelegatedSymbol_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", "(TT;)V", $PUBLIC, $method(static_cast<void(Symbol$DelegatedSymbol::*)($Symbol*)>(&Symbol$DelegatedSymbol::init$))},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"asMemberOf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"complete", "()V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"enclClass", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"erasure", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"externalType", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"flatName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getQualifiedName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getUnderlyingSymbol", "()Lcom/sun/tools/javac/code/Symbol;", "()TT;", $PUBLIC},
	{"hasOuterInstance", "()Z", nullptr, $PUBLIC},
	{"isConstructor", "()Z", nullptr, $PUBLIC},
	{"isDirectlyOrIndirectlyLocal", "()Z", nullptr, $PUBLIC},
	{"isEnclosedBy", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PUBLIC},
	{"isInheritedIn", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"isInner", "()Z", nullptr, $PUBLIC},
	{"isMemberOf", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"isSubClass", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"location", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"location", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"members", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"outermostClass", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"packge", "()Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$DelegatedSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$DelegatedSymbol", "com.sun.tools.javac.code.Symbol", "DelegatedSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symbol$DelegatedSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$DelegatedSymbol",
	"com.sun.tools.javac.code.Symbol",
	nullptr,
	_Symbol$DelegatedSymbol_FieldInfo_,
	_Symbol$DelegatedSymbol_MethodInfo_,
	"<T:Lcom/sun/tools/javac/code/Symbol;>Lcom/sun/tools/javac/code/Symbol;",
	nullptr,
	_Symbol$DelegatedSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$DelegatedSymbol($Class* clazz) {
	return $of($alloc(Symbol$DelegatedSymbol));
}

void Symbol$DelegatedSymbol::init$($Symbol* other) {
	$Symbol::init$($nc(other)->kind, other->flags_field, other->name, other->type, other->owner);
	$set(this, other, other);
}

$String* Symbol$DelegatedSymbol::toString() {
	return $nc(this->other)->toString();
}

$Symbol* Symbol$DelegatedSymbol::location() {
	return $nc(this->other)->location();
}

$Symbol* Symbol$DelegatedSymbol::location($Type* site, $Types* types) {
	return $nc(this->other)->location(site, types);
}

$Symbol* Symbol$DelegatedSymbol::baseSymbol() {
	return this->other;
}

$Type* Symbol$DelegatedSymbol::erasure($Types* types) {
	return $nc(this->other)->erasure(types);
}

$Type* Symbol$DelegatedSymbol::externalType($Types* types) {
	return $nc(this->other)->externalType(types);
}

bool Symbol$DelegatedSymbol::isDirectlyOrIndirectlyLocal() {
	return $nc(this->other)->isDirectlyOrIndirectlyLocal();
}

bool Symbol$DelegatedSymbol::isConstructor() {
	return $nc(this->other)->isConstructor();
}

$Name* Symbol$DelegatedSymbol::getQualifiedName() {
	return $nc(this->other)->getQualifiedName();
}

$Name* Symbol$DelegatedSymbol::flatName() {
	return $nc(this->other)->flatName();
}

$Scope$WriteableScope* Symbol$DelegatedSymbol::members() {
	return $nc(this->other)->members();
}

bool Symbol$DelegatedSymbol::isInner() {
	return $nc(this->other)->isInner();
}

bool Symbol$DelegatedSymbol::hasOuterInstance() {
	return $nc(this->other)->hasOuterInstance();
}

$Symbol$ClassSymbol* Symbol$DelegatedSymbol::enclClass() {
	return $nc(this->other)->enclClass();
}

$Symbol$ClassSymbol* Symbol$DelegatedSymbol::outermostClass() {
	return $nc(this->other)->outermostClass();
}

$Symbol$PackageSymbol* Symbol$DelegatedSymbol::packge() {
	return $nc(this->other)->packge();
}

bool Symbol$DelegatedSymbol::isSubClass($Symbol* base, $Types* types) {
	return $nc(this->other)->isSubClass(base, types);
}

bool Symbol$DelegatedSymbol::isMemberOf($Symbol$TypeSymbol* clazz, $Types* types) {
	return $nc(this->other)->isMemberOf(clazz, types);
}

bool Symbol$DelegatedSymbol::isEnclosedBy($Symbol$ClassSymbol* clazz) {
	return $nc(this->other)->isEnclosedBy(clazz);
}

bool Symbol$DelegatedSymbol::isInheritedIn($Symbol* clazz, $Types* types) {
	return $nc(this->other)->isInheritedIn(clazz, types);
}

$Symbol* Symbol$DelegatedSymbol::asMemberOf($Type* site, $Types* types) {
	return $nc(this->other)->asMemberOf(site, types);
}

void Symbol$DelegatedSymbol::complete() {
	$nc(this->other)->complete();
}

$Object* Symbol$DelegatedSymbol::accept($ElementVisitor* v, Object$* p) {
	return $of($nc(this->other)->accept(v, p));
}

$Object* Symbol$DelegatedSymbol::accept($Symbol$Visitor* v, Object$* p) {
	return $of($nc(v)->visitSymbol(this->other, p));
}

$Symbol* Symbol$DelegatedSymbol::getUnderlyingSymbol() {
	return this->other;
}

$1List* Symbol$DelegatedSymbol::getAnnotationMirrors() {
	return $Symbol::getAnnotationMirrors();
}

$Element* Symbol$DelegatedSymbol::getEnclosingElement() {
	return $Symbol::getEnclosingElement();
}

$1Name* Symbol$DelegatedSymbol::getSimpleName() {
	return $Symbol::getSimpleName();
}

$TypeMirror* Symbol$DelegatedSymbol::asType() {
	return $Symbol::asType();
}

Symbol$DelegatedSymbol::Symbol$DelegatedSymbol() {
}

$Class* Symbol$DelegatedSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$DelegatedSymbol, name, initialize, &_Symbol$DelegatedSymbol_ClassInfo_, allocate$Symbol$DelegatedSymbol);
	return class$;
}

$Class* Symbol$DelegatedSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com