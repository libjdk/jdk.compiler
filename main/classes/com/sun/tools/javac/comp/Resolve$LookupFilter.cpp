#include <com/sun/tools/javac/comp/Resolve$LookupFilter.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
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

$FieldInfo _Resolve$LookupFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$LookupFilter, this$0)},
	{"abstractOk", "Z", nullptr, 0, $field(Resolve$LookupFilter, abstractOk)},
	{}
};

$MethodInfo _Resolve$LookupFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Z)V", nullptr, 0, $method(static_cast<void(Resolve$LookupFilter::*)($Resolve*,bool)>(&Resolve$LookupFilter::init$))},
	{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Resolve$LookupFilter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$LookupFilter", "com.sun.tools.javac.comp.Resolve", "LookupFilter", 0},
	{}
};

$ClassInfo _Resolve$LookupFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$LookupFilter",
	"java.lang.Object",
	"java.util.function.Predicate",
	_Resolve$LookupFilter_FieldInfo_,
	_Resolve$LookupFilter_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;",
	nullptr,
	_Resolve$LookupFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$LookupFilter($Class* clazz) {
	return $of($alloc(Resolve$LookupFilter));
}

void Resolve$LookupFilter::init$($Resolve* this$0, bool abstractOk) {
	$set(this, this$0, this$0);
	this->abstractOk = abstractOk;
}

bool Resolve$LookupFilter::test($Symbol* s) {
	int64_t flags = $nc(s)->flags();
	$init($Kinds$Kind);
	return s->kind == $Kinds$Kind::MTH && ((int64_t)(flags & (uint64_t)(int64_t)4096)) == 0 && (this->abstractOk || ((int64_t)(flags & (uint64_t)(int64_t)0x0000080000000000)) != 0 || ((int64_t)(flags & (uint64_t)(int64_t)1024)) == 0);
}

bool Resolve$LookupFilter::test(Object$* s) {
	return this->test($cast($Symbol, s));
}

Resolve$LookupFilter::Resolve$LookupFilter() {
}

$Class* Resolve$LookupFilter::load$($String* name, bool initialize) {
	$loadClass(Resolve$LookupFilter, name, initialize, &_Resolve$LookupFilter_ClassInfo_, allocate$Resolve$LookupFilter);
	return class$;
}

$Class* Resolve$LookupFilter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com