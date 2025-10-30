#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$MethodResolutionContext$Candidate_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodResolutionContext$Candidate, this$1)},
	{"step", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $FINAL, $field(Resolve$MethodResolutionContext$Candidate, step)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(Resolve$MethodResolutionContext$Candidate, sym)},
	{"details", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $FINAL, $field(Resolve$MethodResolutionContext$Candidate, details)},
	{"mtype", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Resolve$MethodResolutionContext$Candidate, mtype)},
	{}
};

$MethodInfo _Resolve$MethodResolutionContext$Candidate_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(static_cast<void(Resolve$MethodResolutionContext$Candidate::*)($Resolve$MethodResolutionContext*,$Resolve$MethodResolutionPhase*,$Symbol*,$JCDiagnostic*,$Type*)>(&Resolve$MethodResolutionContext$Candidate::init$))},
	{"isApplicable", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _Resolve$MethodResolutionContext$Candidate_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "com.sun.tools.javac.comp.Resolve", "MethodResolutionContext", 0},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionContext$Candidate", "com.sun.tools.javac.comp.Resolve$MethodResolutionContext", "Candidate", 0},
	{}
};

$ClassInfo _Resolve$MethodResolutionContext$Candidate_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionContext$Candidate",
	"java.lang.Object",
	nullptr,
	_Resolve$MethodResolutionContext$Candidate_FieldInfo_,
	_Resolve$MethodResolutionContext$Candidate_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodResolutionContext$Candidate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionContext$Candidate($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionContext$Candidate));
}

void Resolve$MethodResolutionContext$Candidate::init$($Resolve$MethodResolutionContext* this$1, $Resolve$MethodResolutionPhase* step, $Symbol* sym, $JCDiagnostic* details, $Type* mtype) {
	$set(this, this$1, this$1);
	$set(this, step, step);
	$set(this, sym, sym);
	$set(this, details, details);
	$set(this, mtype, mtype);
}

bool Resolve$MethodResolutionContext$Candidate::isApplicable() {
	return this->mtype != nullptr;
}

Resolve$MethodResolutionContext$Candidate::Resolve$MethodResolutionContext$Candidate() {
}

$Class* Resolve$MethodResolutionContext$Candidate::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionContext$Candidate, name, initialize, &_Resolve$MethodResolutionContext$Candidate_ClassInfo_, allocate$Resolve$MethodResolutionContext$Candidate);
	return class$;
}

$Class* Resolve$MethodResolutionContext$Candidate::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com