#include <com/sun/tools/javac/comp/Check$ConversionWarner.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check$5.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$5 = ::com::sun::tools::javac::comp::Check$5;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Check$ConversionWarner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$ConversionWarner, this$0)},
	{"uncheckedKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Check$ConversionWarner, uncheckedKey)},
	{"found", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Check$ConversionWarner, found)},
	{"expected", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Check$ConversionWarner, expected)},
	{}
};

$MethodInfo _Check$ConversionWarner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Check$ConversionWarner::*)($Check*,$JCDiagnostic$DiagnosticPosition*,$String*,$Type*,$Type*)>(&Check$ConversionWarner::init$))},
	{"warn", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Check$ConversionWarner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$ConversionWarner", "com.sun.tools.javac.comp.Check", "ConversionWarner", $PRIVATE},
	{}
};

$ClassInfo _Check$ConversionWarner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$ConversionWarner",
	"com.sun.tools.javac.util.Warner",
	nullptr,
	_Check$ConversionWarner_FieldInfo_,
	_Check$ConversionWarner_MethodInfo_,
	nullptr,
	nullptr,
	_Check$ConversionWarner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$ConversionWarner($Class* clazz) {
	return $of($alloc(Check$ConversionWarner));
}

void Check$ConversionWarner::init$($Check* this$0, $JCDiagnostic$DiagnosticPosition* pos, $String* uncheckedKey, $Type* found, $Type* expected) {
	$set(this, this$0, this$0);
	$Warner::init$(pos);
	$set(this, uncheckedKey, uncheckedKey);
	$set(this, found, found);
	$set(this, expected, expected);
}

void Check$ConversionWarner::warn($Lint$LintCategory* lint) {
	$useLocalCurrentObjectStackCache();
	bool warned = this->warned;
	$Warner::warn(lint);
	if (warned) {
		return;
	}
	$init($Check$5);
	switch ($nc($Check$5::$SwitchMap$com$sun$tools$javac$code$Lint$LintCategory)->get($nc((lint))->ordinal())) {
	case 1:
		{
			$var($JCDiagnostic$DiagnosticPosition, var$0, pos());
			this->this$0->warnUnchecked(var$0, $($CompilerProperties$Warnings::ProbFoundReq($($nc(this->this$0->diags)->fragment(this->uncheckedKey, $$new($ObjectArray, 0))), this->found, this->expected)));
			break;
		}
	case 2:
		{
			bool var$2 = this->this$0->method != nullptr && $nc(this->this$0->method)->attribute($nc($nc(this->this$0->syms)->trustMeType)->tsym) != nullptr;
			bool var$1 = var$2 && this->this$0->isTrustMeAllowedOnMethod(this->this$0->method);
			if (var$1 && !$nc(this->this$0->types)->isReifiable($cast($Type, $($nc($($nc($nc(this->this$0->method)->type)->getParameterTypes()))->last())))) {
				$var($JCDiagnostic$DiagnosticPosition, var$3, pos());
				this->this$0->warnUnsafeVararg(var$3, $($CompilerProperties$Warnings::VarargsUnsafeUseVarargsParam($cast($Symbol, $($nc($nc(this->this$0->method)->params$)->last())))));
			}
			break;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unexpected lint: "_s, lint})));
		}
	}
}

Check$ConversionWarner::Check$ConversionWarner() {
}

$Class* Check$ConversionWarner::load$($String* name, bool initialize) {
	$loadClass(Check$ConversionWarner, name, initialize, &_Check$ConversionWarner_ClassInfo_, allocate$Check$ConversionWarner);
	return class$;
}

$Class* Check$ConversionWarner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com