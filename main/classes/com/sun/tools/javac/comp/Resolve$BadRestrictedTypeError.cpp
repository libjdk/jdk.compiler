#include <com/sun/tools/javac/comp/Resolve$BadRestrictedTypeError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef BAD_RESTRICTED_TYPE

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
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

$FieldInfo _Resolve$BadRestrictedTypeError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$BadRestrictedTypeError, this$0)},
	{"typeName", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(Resolve$BadRestrictedTypeError, typeName)},
	{}
};

$MethodInfo _Resolve$BadRestrictedTypeError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/util/Name;)V", nullptr, 0, $method(static_cast<void(Resolve$BadRestrictedTypeError::*)($Resolve*,$Name*)>(&Resolve$BadRestrictedTypeError::init$))},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{}
};

$InnerClassInfo _Resolve$BadRestrictedTypeError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$BadRestrictedTypeError", "com.sun.tools.javac.comp.Resolve", "BadRestrictedTypeError", 0},
	{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$BadRestrictedTypeError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$BadRestrictedTypeError",
	"com.sun.tools.javac.comp.Resolve$ResolveError",
	nullptr,
	_Resolve$BadRestrictedTypeError_FieldInfo_,
	_Resolve$BadRestrictedTypeError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$BadRestrictedTypeError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$BadRestrictedTypeError($Class* clazz) {
	return $of($alloc(Resolve$BadRestrictedTypeError));
}

void Resolve$BadRestrictedTypeError::init$($Resolve* this$0, $Name* typeName) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$ResolveError::init$(this$0, $Kinds$Kind::BAD_RESTRICTED_TYPE, "bad var use"_s);
	$set(this, typeName, typeName);
}

$JCDiagnostic* Resolve$BadRestrictedTypeError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->this$0->diags)->create(dkind, $($nc(this->this$0->log)->currentSource()), pos, "illegal.ref.to.restricted.type"_s, $$new($ObjectArray, {$of(this->typeName)}));
}

Resolve$BadRestrictedTypeError::Resolve$BadRestrictedTypeError() {
}

$Class* Resolve$BadRestrictedTypeError::load$($String* name, bool initialize) {
	$loadClass(Resolve$BadRestrictedTypeError, name, initialize, &_Resolve$BadRestrictedTypeError_ClassInfo_, allocate$Resolve$BadRestrictedTypeError);
	return class$;
}

$Class* Resolve$BadRestrictedTypeError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com