#include <com/sun/tools/javac/comp/Resolve$BadVarargsMethod.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$BadVarargsMethod_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$BadVarargsMethod, this$0)},
	{"delegatedError", "Lcom/sun/tools/javac/comp/Resolve$ResolveError;", nullptr, 0, $field(Resolve$BadVarargsMethod, delegatedError)},
	{}
};

$MethodInfo _Resolve$BadVarargsMethod_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Resolve$ResolveError;)V", nullptr, 0, $method(static_cast<void(Resolve$BadVarargsMethod::*)($Resolve*,$Resolve$ResolveError*)>(&Resolve$BadVarargsMethod::init$))},
	{"access", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PROTECTED},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{}
};

$InnerClassInfo _Resolve$BadVarargsMethod_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$BadVarargsMethod", "com.sun.tools.javac.comp.Resolve", "BadVarargsMethod", 0},
	{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$BadVarargsMethod_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$BadVarargsMethod",
	"com.sun.tools.javac.comp.Resolve$ResolveError",
	nullptr,
	_Resolve$BadVarargsMethod_FieldInfo_,
	_Resolve$BadVarargsMethod_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$BadVarargsMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$BadVarargsMethod($Class* clazz) {
	return $of($alloc(Resolve$BadVarargsMethod));
}

void Resolve$BadVarargsMethod::init$($Resolve* this$0, $Resolve$ResolveError* delegatedError) {
	$set(this, this$0, this$0);
	$Resolve$ResolveError::init$(this$0, $nc(delegatedError)->kind, "badVarargs"_s);
	$set(this, delegatedError, delegatedError);
}

$Symbol* Resolve$BadVarargsMethod::baseSymbol() {
	return $nc(this->delegatedError)->baseSymbol();
}

$Symbol* Resolve$BadVarargsMethod::access($Name* name, $Symbol$TypeSymbol* location) {
	return $nc(this->delegatedError)->access(name, location);
}

bool Resolve$BadVarargsMethod::exists() {
	return true;
}

$JCDiagnostic* Resolve$BadVarargsMethod::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	return $nc(this->delegatedError)->getDiagnostic(dkind, pos, location, site, name, argtypes, typeargtypes);
}

Resolve$BadVarargsMethod::Resolve$BadVarargsMethod() {
}

$Class* Resolve$BadVarargsMethod::load$($String* name, bool initialize) {
	$loadClass(Resolve$BadVarargsMethod, name, initialize, &_Resolve$BadVarargsMethod_ClassInfo_, allocate$Resolve$BadVarargsMethod);
	return class$;
}

$Class* Resolve$BadVarargsMethod::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com