#include <com/sun/tools/javac/code/Types$19.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Name = ::com::sun::tools::javac::util::Name;
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

$FieldInfo _Types$19_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$19, this$0)},
	{"val$s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Types$19, val$s)},
	{}
};

$MethodInfo _Types$19_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Types$19::*)($Types*,int64_t,$Name*,$Type*,$Symbol*,$Symbol*)>(&Types$19::init$))},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Types$19_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	"mergeAbstracts",
	"(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Z)Ljava/util/Optional;"
};

$InnerClassInfo _Types$19_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$19", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$19_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$19",
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	nullptr,
	_Types$19_FieldInfo_,
	_Types$19_MethodInfo_,
	nullptr,
	&_Types$19_EnclosingMethodInfo_,
	_Types$19_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$19($Class* clazz) {
	return $of($alloc(Types$19));
}

void Types$19::init$($Types* this$0, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
	$Symbol$MethodSymbol::init$(flags, name, type, owner);
}

$Symbol* Types$19::baseSymbol() {
	return this->val$s;
}

Types$19::Types$19() {
}

$Class* Types$19::load$($String* name, bool initialize) {
	$loadClass(Types$19, name, initialize, &_Types$19_ClassInfo_, allocate$Types$19);
	return class$;
}

$Class* Types$19::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com