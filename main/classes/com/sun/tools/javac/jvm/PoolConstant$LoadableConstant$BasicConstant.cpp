#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant$BasicConstant.h>

#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Types = ::com::sun::tools::javac::code::Types;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _PoolConstant$LoadableConstant$BasicConstant_FieldInfo_[] = {
	{"tag", "I", nullptr, 0, $field(PoolConstant$LoadableConstant$BasicConstant, tag)},
	{"data", "Ljava/lang/Object;", nullptr, 0, $field(PoolConstant$LoadableConstant$BasicConstant, data)},
	{}
};

$MethodInfo _PoolConstant$LoadableConstant$BasicConstant_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(PoolConstant$LoadableConstant$BasicConstant::*)(int32_t,Object$*)>(&PoolConstant$LoadableConstant$BasicConstant::init$))},
	{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PoolConstant$LoadableConstant$BasicConstant_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant$BasicConstant", "com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "BasicConstant", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PoolConstant$LoadableConstant$BasicConstant_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant$BasicConstant",
	"java.lang.Object",
	"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant",
	_PoolConstant$LoadableConstant$BasicConstant_FieldInfo_,
	_PoolConstant$LoadableConstant$BasicConstant_MethodInfo_,
	nullptr,
	nullptr,
	_PoolConstant$LoadableConstant$BasicConstant_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolConstant"
};

$Object* allocate$PoolConstant$LoadableConstant$BasicConstant($Class* clazz) {
	return $of($alloc(PoolConstant$LoadableConstant$BasicConstant));
}

void PoolConstant$LoadableConstant$BasicConstant::init$(int32_t tag, Object$* data) {
	this->tag = tag;
	$set(this, data, data);
}

int32_t PoolConstant$LoadableConstant$BasicConstant::poolTag() {
	return this->tag;
}

$Object* PoolConstant$LoadableConstant$BasicConstant::poolKey($Types* types) {
	return $of(this->data);
}

PoolConstant$LoadableConstant$BasicConstant::PoolConstant$LoadableConstant$BasicConstant() {
}

$Class* PoolConstant$LoadableConstant$BasicConstant::load$($String* name, bool initialize) {
	$loadClass(PoolConstant$LoadableConstant$BasicConstant, name, initialize, &_PoolConstant$LoadableConstant$BasicConstant_ClassInfo_, allocate$PoolConstant$LoadableConstant$BasicConstant);
	return class$;
}

$Class* PoolConstant$LoadableConstant$BasicConstant::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com