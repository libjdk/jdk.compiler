#include <com/sun/tools/javac/jvm/Code$Chain.h>

#include <com/sun/tools/javac/jvm/Code$State.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <jcpp.h>

using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$State = ::com::sun::tools::javac::jvm::Code$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Code$Chain_FieldInfo_[] = {
	{"pc", "I", nullptr, $PUBLIC | $FINAL, $field(Code$Chain, pc)},
	{"state", "Lcom/sun/tools/javac/jvm/Code$State;", nullptr, 0, $field(Code$Chain, state)},
	{"next", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, $PUBLIC | $FINAL, $field(Code$Chain, next)},
	{}
};

$MethodInfo _Code$Chain_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/tools/javac/jvm/Code$Chain;Lcom/sun/tools/javac/jvm/Code$State;)V", nullptr, $PUBLIC, $method(static_cast<void(Code$Chain::*)(int32_t,Code$Chain*,$Code$State*)>(&Code$Chain::init$))},
	{}
};

$InnerClassInfo _Code$Chain_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Code$Chain", "com.sun.tools.javac.jvm.Code", "Chain", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Code$Chain_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.Code$Chain",
	"java.lang.Object",
	nullptr,
	_Code$Chain_FieldInfo_,
	_Code$Chain_MethodInfo_,
	nullptr,
	nullptr,
	_Code$Chain_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Code"
};

$Object* allocate$Code$Chain($Class* clazz) {
	return $of($alloc(Code$Chain));
}

void Code$Chain::init$(int32_t pc, Code$Chain* next, $Code$State* state) {
	this->pc = pc;
	$set(this, next, next);
	$set(this, state, state);
}

Code$Chain::Code$Chain() {
}

$Class* Code$Chain::load$($String* name, bool initialize) {
	$loadClass(Code$Chain, name, initialize, &_Code$Chain_ClassInfo_, allocate$Code$Chain);
	return class$;
}

$Class* Code$Chain::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com