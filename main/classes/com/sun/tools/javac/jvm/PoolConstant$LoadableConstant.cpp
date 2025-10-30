#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>

#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant$BasicConstant.h>
#include <jcpp.h>

using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$LoadableConstant$BasicConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant$BasicConstant;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _PoolConstant$LoadableConstant_MethodInfo_[] = {
	{"Double", "(D)Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PoolConstant$LoadableConstant*(*)(double)>(&PoolConstant$LoadableConstant::Double))},
	{"Float", "(F)Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PoolConstant$LoadableConstant*(*)(float)>(&PoolConstant$LoadableConstant::Float))},
	{"Int", "(I)Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PoolConstant$LoadableConstant*(*)(int32_t)>(&PoolConstant$LoadableConstant::Int))},
	{"Long", "(J)Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PoolConstant$LoadableConstant*(*)(int64_t)>(&PoolConstant$LoadableConstant::Long))},
	{"String", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PoolConstant$LoadableConstant*(*)($String*)>(&PoolConstant$LoadableConstant::String))},
	{}
};

$InnerClassInfo _PoolConstant$LoadableConstant_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant$BasicConstant", "com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "BasicConstant", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PoolConstant$LoadableConstant_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant",
	nullptr,
	"com.sun.tools.javac.jvm.PoolConstant",
	nullptr,
	_PoolConstant$LoadableConstant_MethodInfo_,
	nullptr,
	nullptr,
	_PoolConstant$LoadableConstant_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolConstant"
};

$Object* allocate$PoolConstant$LoadableConstant($Class* clazz) {
	return $of($alloc(PoolConstant$LoadableConstant));
}

PoolConstant$LoadableConstant* PoolConstant$LoadableConstant::Int(int32_t i) {
	$init(PoolConstant$LoadableConstant);
	return $new($PoolConstant$LoadableConstant$BasicConstant, $ClassFile::CONSTANT_Integer, $($Integer::valueOf(i)));
}

PoolConstant$LoadableConstant* PoolConstant$LoadableConstant::Float(float f) {
	$init(PoolConstant$LoadableConstant);
	return $new($PoolConstant$LoadableConstant$BasicConstant, $ClassFile::CONSTANT_Float, $($Float::valueOf(f)));
}

PoolConstant$LoadableConstant* PoolConstant$LoadableConstant::Long(int64_t l) {
	$init(PoolConstant$LoadableConstant);
	return $new($PoolConstant$LoadableConstant$BasicConstant, $ClassFile::CONSTANT_Long, $($Long::valueOf(l)));
}

PoolConstant$LoadableConstant* PoolConstant$LoadableConstant::Double(double d) {
	$init(PoolConstant$LoadableConstant);
	return $new($PoolConstant$LoadableConstant$BasicConstant, $ClassFile::CONSTANT_Double, $($Double::valueOf(d)));
}

PoolConstant$LoadableConstant* PoolConstant$LoadableConstant::String($String* s) {
	$init(PoolConstant$LoadableConstant);
	return $new($PoolConstant$LoadableConstant$BasicConstant, $ClassFile::CONSTANT_String, s);
}

$Class* PoolConstant$LoadableConstant::load$($String* name, bool initialize) {
	$loadClass(PoolConstant$LoadableConstant, name, initialize, &_PoolConstant$LoadableConstant_ClassInfo_, allocate$PoolConstant$LoadableConstant);
	return class$;
}

$Class* PoolConstant$LoadableConstant::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com