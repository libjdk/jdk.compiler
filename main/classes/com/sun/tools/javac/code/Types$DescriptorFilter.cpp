#include <com/sun/tools/javac/code/Types$DescriptorFilter.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$DescriptorFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorFilter, this$0)},
	{"origin", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, 0, $field(Types$DescriptorFilter, origin)},
	{}
};

$MethodInfo _Types$DescriptorFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(static_cast<void(Types$DescriptorFilter::*)($Types*,$Symbol$TypeSymbol*)>(&Types$DescriptorFilter::init$))},
	{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$DescriptorFilter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$DescriptorFilter", "com.sun.tools.javac.code.Types", "DescriptorFilter", 0},
	{}
};

$ClassInfo _Types$DescriptorFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$DescriptorFilter",
	"java.lang.Object",
	"java.util.function.Predicate",
	_Types$DescriptorFilter_FieldInfo_,
	_Types$DescriptorFilter_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;",
	nullptr,
	_Types$DescriptorFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$DescriptorFilter($Class* clazz) {
	return $of($alloc(Types$DescriptorFilter));
}

void Types$DescriptorFilter::init$($Types* this$0, $Symbol$TypeSymbol* origin) {
	$set(this, this$0, this$0);
	$set(this, origin, origin);
}

bool Types$DescriptorFilter::test($Symbol* sym) {
	$init($Kinds$Kind);
	bool var$1 = $nc(sym)->kind == $Kinds$Kind::MTH && ((int64_t)(sym->flags() & (uint64_t)(1024 | (int64_t)0x0000080000000000))) == 1024;
	bool var$0 = var$1 && !this->this$0->overridesObjectMethod(this->origin, sym);
	return var$0 && ((int64_t)($nc(($cast($Symbol$MethodSymbol, $nc($(this->this$0->interfaceCandidates($nc(this->origin)->type, $cast($Symbol$MethodSymbol, sym))))->head)))->flags() & (uint64_t)(int64_t)0x0000080000000000)) == 0;
}

bool Types$DescriptorFilter::test(Object$* sym) {
	return this->test($cast($Symbol, sym));
}

Types$DescriptorFilter::Types$DescriptorFilter() {
}

$Class* Types$DescriptorFilter::load$($String* name, bool initialize) {
	$loadClass(Types$DescriptorFilter, name, initialize, &_Types$DescriptorFilter_ClassInfo_, allocate$Types$DescriptorFilter);
	return class$;
}

$Class* Types$DescriptorFilter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com