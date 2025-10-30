#include <com/sun/tools/javac/jvm/Code$LocalVar$Range.h>

#include <com/sun/tools/javac/jvm/Code$LocalVar.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Code$LocalVar = ::com::sun::tools::javac::jvm::Code$LocalVar;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Code$LocalVar$Range_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Code$LocalVar;", nullptr, $FINAL | $SYNTHETIC, $field(Code$LocalVar$Range, this$0)},
	{"start_pc", "C", nullptr, 0, $field(Code$LocalVar$Range, start_pc)},
	{"length", "C", nullptr, 0, $field(Code$LocalVar$Range, length)},
	{}
};

$MethodInfo _Code$LocalVar$Range_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Code$LocalVar;)V", nullptr, 0, $method(static_cast<void(Code$LocalVar$Range::*)($Code$LocalVar*)>(&Code$LocalVar$Range::init$))},
	{"<init>", "(Lcom/sun/tools/javac/jvm/Code$LocalVar;C)V", nullptr, 0, $method(static_cast<void(Code$LocalVar$Range::*)($Code$LocalVar*,char16_t)>(&Code$LocalVar$Range::init$))},
	{"<init>", "(Lcom/sun/tools/javac/jvm/Code$LocalVar;CC)V", nullptr, 0, $method(static_cast<void(Code$LocalVar$Range::*)($Code$LocalVar*,char16_t,char16_t)>(&Code$LocalVar$Range::init$))},
	{"closed", "()Z", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Code$LocalVar$Range_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Code$LocalVar", "com.sun.tools.javac.jvm.Code", "LocalVar", $STATIC},
	{"com.sun.tools.javac.jvm.Code$LocalVar$Range", "com.sun.tools.javac.jvm.Code$LocalVar", "Range", 0},
	{}
};

$ClassInfo _Code$LocalVar$Range_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Code$LocalVar$Range",
	"java.lang.Object",
	nullptr,
	_Code$LocalVar$Range_FieldInfo_,
	_Code$LocalVar$Range_MethodInfo_,
	nullptr,
	nullptr,
	_Code$LocalVar$Range_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Code"
};

$Object* allocate$Code$LocalVar$Range($Class* clazz) {
	return $of($alloc(Code$LocalVar$Range));
}

void Code$LocalVar$Range::init$($Code$LocalVar* this$0) {
	$set(this, this$0, this$0);
	this->start_pc = $Character::MAX_VALUE;
	this->length = $Character::MAX_VALUE;
}

void Code$LocalVar$Range::init$($Code$LocalVar* this$0, char16_t start) {
	$set(this, this$0, this$0);
	this->start_pc = $Character::MAX_VALUE;
	this->length = $Character::MAX_VALUE;
	this->start_pc = start;
}

void Code$LocalVar$Range::init$($Code$LocalVar* this$0, char16_t start, char16_t length) {
	$set(this, this$0, this$0);
	this->start_pc = $Character::MAX_VALUE;
	this->length = $Character::MAX_VALUE;
	this->start_pc = start;
	this->length = length;
}

bool Code$LocalVar$Range::closed() {
	return this->start_pc != $Character::MAX_VALUE && this->length != $Character::MAX_VALUE;
}

$String* Code$LocalVar$Range::toString() {
	$useLocalCurrentObjectStackCache();
	int32_t currentStartPC = this->start_pc;
	int32_t currentLength = this->length;
	return $str({"startpc = "_s, $$str(currentStartPC), " length "_s, $$str(currentLength)});
}

Code$LocalVar$Range::Code$LocalVar$Range() {
}

$Class* Code$LocalVar$Range::load$($String* name, bool initialize) {
	$loadClass(Code$LocalVar$Range, name, initialize, &_Code$LocalVar$Range_ClassInfo_, allocate$Code$LocalVar$Range);
	return class$;
}

$Class* Code$LocalVar$Range::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com