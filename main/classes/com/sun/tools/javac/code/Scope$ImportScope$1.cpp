#include <com/sun/tools/javac/code/Scope$ImportScope$1.h>

#include <com/sun/tools/javac/code/Scope$ImportScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ImportScope = ::com::sun::tools::javac::code::Scope$ImportScope;
using $Scope$ScopeListener = ::com::sun::tools::javac::code::Scope$ScopeListener;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$ImportScope$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Scope$ImportScope;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ImportScope$1, this$0)},
	{}
};

$MethodInfo _Scope$ImportScope$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$ImportScope;)V", nullptr, 0, $method(static_cast<void(Scope$ImportScope$1::*)($Scope$ImportScope*)>(&Scope$ImportScope$1::init$))},
	{"symbolAdded", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC},
	{"symbolRemoved", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Scope$ImportScope$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Scope$ImportScope",
	"finalizeSingleScope",
	"(Lcom/sun/tools/javac/code/Scope;)Lcom/sun/tools/javac/code/Scope;"
};

$InnerClassInfo _Scope$ImportScope$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ImportScope", "com.sun.tools.javac.code.Scope", "ImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$ImportScope$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Scope$ScopeListener", "com.sun.tools.javac.code.Scope", "ScopeListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Scope$ImportScope$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Scope$ImportScope$1",
	"java.lang.Object",
	"com.sun.tools.javac.code.Scope$ScopeListener",
	_Scope$ImportScope$1_FieldInfo_,
	_Scope$ImportScope$1_MethodInfo_,
	nullptr,
	&_Scope$ImportScope$1_EnclosingMethodInfo_,
	_Scope$ImportScope$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ImportScope$1($Class* clazz) {
	return $of($alloc(Scope$ImportScope$1));
}

void Scope$ImportScope$1::init$($Scope$ImportScope* this$0) {
	$set(this, this$0, this$0);
}

void Scope$ImportScope$1::symbolAdded($Symbol* sym, $Scope* s) {
	$Assert::error("The scope is sealed."_s);
}

void Scope$ImportScope$1::symbolRemoved($Symbol* sym, $Scope* s) {
	$Assert::error("The scope is sealed."_s);
}

Scope$ImportScope$1::Scope$ImportScope$1() {
}

$Class* Scope$ImportScope$1::load$($String* name, bool initialize) {
	$loadClass(Scope$ImportScope$1, name, initialize, &_Scope$ImportScope$1_ClassInfo_, allocate$Scope$ImportScope$1);
	return class$;
}

$Class* Scope$ImportScope$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com