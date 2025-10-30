#include <com/sun/tools/javac/model/FilteredMemberList.h>

#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/io/Serializable.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef NON_RECURSIVE

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class FilteredMemberList$$Lambda$lambda$iterator$0 : public $Predicate {
	$class(FilteredMemberList$$Lambda$lambda$iterator$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return FilteredMemberList::lambda$iterator$0($cast($Symbol, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FilteredMemberList$$Lambda$lambda$iterator$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FilteredMemberList$$Lambda$lambda$iterator$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FilteredMemberList$$Lambda$lambda$iterator$0::*)()>(&FilteredMemberList$$Lambda$lambda$iterator$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo FilteredMemberList$$Lambda$lambda$iterator$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.model.FilteredMemberList$$Lambda$lambda$iterator$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* FilteredMemberList$$Lambda$lambda$iterator$0::load$($String* name, bool initialize) {
	$loadClass(FilteredMemberList$$Lambda$lambda$iterator$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FilteredMemberList$$Lambda$lambda$iterator$0::class$ = nullptr;

$FieldInfo _FilteredMemberList_FieldInfo_[] = {
	{"scope", "Lcom/sun/tools/javac/code/Scope;", nullptr, $PRIVATE | $FINAL, $field(FilteredMemberList, scope)},
	{}
};

$MethodInfo _FilteredMemberList_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC, $method(static_cast<void(FilteredMemberList::*)($Scope*)>(&FilteredMemberList::init$))},
	{"get", "(I)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"lambda$iterator$0", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&FilteredMemberList::lambda$iterator$0))},
	{"size", "()I", nullptr, $PUBLIC},
	{"unwanted", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Symbol*)>(&FilteredMemberList::unwanted))},
	{}
};

$ClassInfo _FilteredMemberList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.model.FilteredMemberList",
	"java.util.AbstractList",
	nullptr,
	_FilteredMemberList_FieldInfo_,
	_FilteredMemberList_MethodInfo_,
	"Ljava/util/AbstractList<Lcom/sun/tools/javac/code/Symbol;>;"
};

$Object* allocate$FilteredMemberList($Class* clazz) {
	return $of($alloc(FilteredMemberList));
}

void FilteredMemberList::init$($Scope* scope) {
	$AbstractList::init$();
	$set(this, scope, scope);
}

int32_t FilteredMemberList::size() {
	$useLocalCurrentObjectStackCache();
	int32_t cnt = 0;
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc(this->scope)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				if (!unwanted(sym)) {
					++cnt;
				}
			}
		}
	}
	return cnt;
}

$Object* FilteredMemberList::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc(this->scope)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				if (!unwanted(sym) && (index-- == 0)) {
					return $of(sym);
				}
			}
		}
	}
	$throwNew($IndexOutOfBoundsException);
}

$Iterator* FilteredMemberList::iterator() {
	$useLocalCurrentObjectStackCache();
	$init($Scope$LookupKind);
	return $nc($($nc(this->scope)->getSymbols(static_cast<$Predicate*>($$new(FilteredMemberList$$Lambda$lambda$iterator$0)), $Scope$LookupKind::NON_RECURSIVE)))->iterator();
}

bool FilteredMemberList::unwanted($Symbol* s) {
	$init(FilteredMemberList);
	return s == nullptr || ((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)4096)) != 0;
}

bool FilteredMemberList::lambda$iterator$0($Symbol* t) {
	$init(FilteredMemberList);
	return !unwanted(t);
}

FilteredMemberList::FilteredMemberList() {
}

$Class* FilteredMemberList::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FilteredMemberList$$Lambda$lambda$iterator$0::classInfo$.name)) {
			return FilteredMemberList$$Lambda$lambda$iterator$0::load$(name, initialize);
		}
	}
	$loadClass(FilteredMemberList, name, initialize, &_FilteredMemberList_ClassInfo_, allocate$FilteredMemberList);
	return class$;
}

$Class* FilteredMemberList::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com