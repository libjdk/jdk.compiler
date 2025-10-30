#include <com/sun/tools/javac/jvm/PoolConstant.h>

#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _PoolConstant_MethodInfo_[] = {
	{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PoolConstant_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolConstant$NameAndType", "com.sun.tools.javac.jvm.PoolConstant", "NameAndType", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.jvm.PoolConstant$Dynamic", "com.sun.tools.javac.jvm.PoolConstant", "Dynamic", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PoolConstant_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.jvm.PoolConstant",
	nullptr,
	nullptr,
	nullptr,
	_PoolConstant_MethodInfo_,
	nullptr,
	nullptr,
	_PoolConstant_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolConstant$NameAndType,com.sun.tools.javac.jvm.PoolConstant$Dynamic,com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey,com.sun.tools.javac.jvm.PoolConstant$LoadableConstant,com.sun.tools.javac.jvm.PoolConstant$LoadableConstant$BasicConstant"
};

$Object* allocate$PoolConstant($Class* clazz) {
	return $of($alloc(PoolConstant));
}

$Object* PoolConstant::poolKey($Types* types) {
	return $of(this);
}

$Class* PoolConstant::load$($String* name, bool initialize) {
	$loadClass(PoolConstant, name, initialize, &_PoolConstant_ClassInfo_, allocate$PoolConstant);
	return class$;
}

$Class* PoolConstant::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com