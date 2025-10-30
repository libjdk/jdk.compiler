#include <com/sun/tools/javac/code/Types$ImplementationCache$Entry.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Types$ImplementationCache.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Types$ImplementationCache = ::com::sun::tools::javac::code::Types$ImplementationCache;
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

$FieldInfo _Types$ImplementationCache$Entry_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$ImplementationCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$ImplementationCache$Entry, this$1)},
	{"cachedImpl", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $FINAL, $field(Types$ImplementationCache$Entry, cachedImpl)},
	{"implFilter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $FINAL, $field(Types$ImplementationCache$Entry, implFilter)},
	{"checkResult", "Z", nullptr, $FINAL, $field(Types$ImplementationCache$Entry, checkResult)},
	{"prevMark", "I", nullptr, $FINAL, $field(Types$ImplementationCache$Entry, prevMark)},
	{}
};

$MethodInfo _Types$ImplementationCache$Entry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$ImplementationCache;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/util/function/Predicate;ZI)V", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;ZI)V", $PUBLIC, $method(static_cast<void(Types$ImplementationCache$Entry::*)($Types$ImplementationCache*,$Symbol$MethodSymbol*,$Predicate*,bool,int32_t)>(&Types$ImplementationCache$Entry::init$))},
	{"matches", "(Ljava/util/function/Predicate;ZI)Z", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;ZI)Z", 0},
	{}
};

$InnerClassInfo _Types$ImplementationCache$Entry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$ImplementationCache", "com.sun.tools.javac.code.Types", "ImplementationCache", 0},
	{"com.sun.tools.javac.code.Types$ImplementationCache$Entry", "com.sun.tools.javac.code.Types$ImplementationCache", "Entry", 0},
	{}
};

$ClassInfo _Types$ImplementationCache$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$ImplementationCache$Entry",
	"java.lang.Object",
	nullptr,
	_Types$ImplementationCache$Entry_FieldInfo_,
	_Types$ImplementationCache$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_Types$ImplementationCache$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$ImplementationCache$Entry($Class* clazz) {
	return $of($alloc(Types$ImplementationCache$Entry));
}

void Types$ImplementationCache$Entry::init$($Types$ImplementationCache* this$1, $Symbol$MethodSymbol* cachedImpl, $Predicate* scopeFilter, bool checkResult, int32_t prevMark) {
	$set(this, this$1, this$1);
	$set(this, cachedImpl, cachedImpl);
	$set(this, implFilter, scopeFilter);
	this->checkResult = checkResult;
	this->prevMark = prevMark;
}

bool Types$ImplementationCache$Entry::matches($Predicate* scopeFilter, bool checkResult, int32_t mark) {
	return this->implFilter == scopeFilter && this->checkResult == checkResult && this->prevMark == mark;
}

Types$ImplementationCache$Entry::Types$ImplementationCache$Entry() {
}

$Class* Types$ImplementationCache$Entry::load$($String* name, bool initialize) {
	$loadClass(Types$ImplementationCache$Entry, name, initialize, &_Types$ImplementationCache$Entry_ClassInfo_, allocate$Types$ImplementationCache$Entry);
	return class$;
}

$Class* Types$ImplementationCache$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com