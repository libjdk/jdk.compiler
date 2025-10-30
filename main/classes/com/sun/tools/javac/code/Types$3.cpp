#include <com/sun/tools/javac/code/Types$3.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Types = ::com::sun::tools::javac::code::Types;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$3, this$0)},
	{}
};

$MethodInfo _Types$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$3::*)($Types*)>(&Types$3::init$))},
	{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Types$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	_Types$3_FieldInfo_,
	_Types$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;",
	&_Types$3_EnclosingMethodInfo_,
	_Types$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$3($Class* clazz) {
	return $of($alloc(Types$3));
}

void Types$3::init$($Types* this$0) {
	$set(this, this$0, this$0);
}

bool Types$3::test($Symbol* t) {
	$init($Kinds$Kind);
	return $nc(t)->kind == $Kinds$Kind::MTH && t->name != $nc(this->this$0->names)->init && t->name != $nc(this->this$0->names)->clinit && ((int64_t)(t->flags() & (uint64_t)(int64_t)4096)) == 0;
}

bool Types$3::test(Object$* t) {
	return this->test($cast($Symbol, t));
}

Types$3::Types$3() {
}

$Class* Types$3::load$($String* name, bool initialize) {
	$loadClass(Types$3, name, initialize, &_Types$3_ClassInfo_, allocate$Types$3);
	return class$;
}

$Class* Types$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com