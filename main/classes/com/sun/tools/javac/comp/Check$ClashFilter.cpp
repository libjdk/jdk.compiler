#include <com/sun/tools/javac/comp/Check$ClashFilter.h>

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

$FieldInfo _Check$ClashFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$ClashFilter, this$0)},
	{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Check$ClashFilter, site)},
	{}
};

$MethodInfo _Check$ClashFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Check$ClashFilter::*)($Check*,$Type*)>(&Check$ClashFilter::init$))},
	{"shouldSkip", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0},
	{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Check$ClashFilter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$ClashFilter", "com.sun.tools.javac.comp.Check", "ClashFilter", $PRIVATE},
	{}
};

$ClassInfo _Check$ClashFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$ClashFilter",
	"java.lang.Object",
	"java.util.function.Predicate",
	_Check$ClashFilter_FieldInfo_,
	_Check$ClashFilter_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;",
	nullptr,
	_Check$ClashFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$ClashFilter($Class* clazz) {
	return $of($alloc(Check$ClashFilter));
}

void Check$ClashFilter::init$($Check* this$0, $Type* site) {
	$set(this, this$0, this$0);
	$set(this, site, site);
}

bool Check$ClashFilter::shouldSkip($Symbol* s) {
	return ((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)0x0000040000000000)) != 0 && $equals(s->owner, $nc(this->site)->tsym);
}

bool Check$ClashFilter::test($Symbol* s) {
	$init($Kinds$Kind);
	bool var$2 = $nc(s)->kind == $Kinds$Kind::MTH && ((int64_t)(s->flags() & (uint64_t)(int64_t)4096)) == 0;
	bool var$1 = var$2 && !shouldSkip(s);
	bool var$0 = var$1 && s->isInheritedIn($nc(this->site)->tsym, this->this$0->types);
	return var$0 && !s->isConstructor();
}

bool Check$ClashFilter::test(Object$* s) {
	return this->test($cast($Symbol, s));
}

Check$ClashFilter::Check$ClashFilter() {
}

$Class* Check$ClashFilter::load$($String* name, bool initialize) {
	$loadClass(Check$ClashFilter, name, initialize, &_Check$ClashFilter_ClassInfo_, allocate$Check$ClashFilter);
	return class$;
}

$Class* Check$ClashFilter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com