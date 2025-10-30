#include <com/sun/tools/javac/comp/Check$DefaultMethodClashFilter.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Check = ::com::sun::tools::javac::comp::Check;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Check$DefaultMethodClashFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$DefaultMethodClashFilter, this$0)},
	{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Check$DefaultMethodClashFilter, site)},
	{}
};

$MethodInfo _Check$DefaultMethodClashFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Check$DefaultMethodClashFilter::*)($Check*,$Type*)>(&Check$DefaultMethodClashFilter::init$))},
	{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Check$DefaultMethodClashFilter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$DefaultMethodClashFilter", "com.sun.tools.javac.comp.Check", "DefaultMethodClashFilter", $PRIVATE},
	{}
};

$ClassInfo _Check$DefaultMethodClashFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$DefaultMethodClashFilter",
	"java.lang.Object",
	"java.util.function.Predicate",
	_Check$DefaultMethodClashFilter_FieldInfo_,
	_Check$DefaultMethodClashFilter_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;",
	nullptr,
	_Check$DefaultMethodClashFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$DefaultMethodClashFilter($Class* clazz) {
	return $of($alloc(Check$DefaultMethodClashFilter));
}

void Check$DefaultMethodClashFilter::init$($Check* this$0, $Type* site) {
	$set(this, this$0, this$0);
	$set(this, site, site);
}

bool Check$DefaultMethodClashFilter::test($Symbol* s) {
	$init($Kinds$Kind);
	bool var$1 = $nc(s)->kind == $Kinds$Kind::MTH && ((int64_t)(s->flags() & (uint64_t)(int64_t)0x0000080000000000)) != 0;
	bool var$0 = var$1 && s->isInheritedIn($nc(this->site)->tsym, this->this$0->types);
	return var$0 && !s->isConstructor();
}

bool Check$DefaultMethodClashFilter::test(Object$* s) {
	return this->test($cast($Symbol, s));
}

Check$DefaultMethodClashFilter::Check$DefaultMethodClashFilter() {
}

$Class* Check$DefaultMethodClashFilter::load$($String* name, bool initialize) {
	$loadClass(Check$DefaultMethodClashFilter, name, initialize, &_Check$DefaultMethodClashFilter_ClassInfo_, allocate$Check$DefaultMethodClashFilter);
	return class$;
}

$Class* Check$DefaultMethodClashFilter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com