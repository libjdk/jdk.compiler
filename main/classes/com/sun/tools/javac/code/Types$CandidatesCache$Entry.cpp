#include <com/sun/tools/javac/code/Types$CandidatesCache$Entry.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$CandidatesCache.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$CandidatesCache = ::com::sun::tools::javac::code::Types$CandidatesCache;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$CandidatesCache$Entry_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$CandidatesCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$CandidatesCache$Entry, this$1)},
	{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Types$CandidatesCache$Entry, site)},
	{"msym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $field(Types$CandidatesCache$Entry, msym)},
	{}
};

$MethodInfo _Types$CandidatesCache$Entry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$CandidatesCache;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $method(static_cast<void(Types$CandidatesCache$Entry::*)($Types$CandidatesCache*,$Type*,$Symbol$MethodSymbol*)>(&Types$CandidatesCache$Entry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Types$CandidatesCache$Entry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$CandidatesCache", "com.sun.tools.javac.code.Types", "CandidatesCache", $PUBLIC},
	{"com.sun.tools.javac.code.Types$CandidatesCache$Entry", "com.sun.tools.javac.code.Types$CandidatesCache", "Entry", 0},
	{}
};

$ClassInfo _Types$CandidatesCache$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$CandidatesCache$Entry",
	"java.lang.Object",
	nullptr,
	_Types$CandidatesCache$Entry_FieldInfo_,
	_Types$CandidatesCache$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_Types$CandidatesCache$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$CandidatesCache$Entry($Class* clazz) {
	return $of($alloc(Types$CandidatesCache$Entry));
}

void Types$CandidatesCache$Entry::init$($Types$CandidatesCache* this$1, $Type* site, $Symbol$MethodSymbol* msym) {
	$set(this, this$1, this$1);
	$set(this, site, site);
	$set(this, msym, msym);
}

bool Types$CandidatesCache$Entry::equals(Object$* obj) {
	$var(Types$CandidatesCache$Entry, entry, nullptr);
	bool var$2 = $instanceOf(Types$CandidatesCache$Entry, obj);
	if (var$2) {
		$assign(entry, $cast(Types$CandidatesCache$Entry, obj));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && $nc(entry)->msym == this->msym;
	return var$0 && $nc(this->this$1->this$0)->isSameType(this->site, entry->site);
}

int32_t Types$CandidatesCache$Entry::hashCode() {
	int32_t var$0 = $nc(this->this$1->this$0)->hashCode(this->site);
	return (int32_t)(var$0 & (uint32_t)~$nc($of(this->msym))->hashCode());
}

Types$CandidatesCache$Entry::Types$CandidatesCache$Entry() {
}

$Class* Types$CandidatesCache$Entry::load$($String* name, bool initialize) {
	$loadClass(Types$CandidatesCache$Entry, name, initialize, &_Types$CandidatesCache$Entry_ClassInfo_, allocate$Types$CandidatesCache$Entry);
	return class$;
}

$Class* Types$CandidatesCache$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com