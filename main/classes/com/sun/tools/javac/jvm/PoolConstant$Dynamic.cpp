#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic.h>

#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic$BsmKey.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Types = ::com::sun::tools::javac::code::Types;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$Dynamic$BsmKey = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic$BsmKey;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _PoolConstant$Dynamic_MethodInfo_[] = {
	{"bootstrapMethod", "()Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $ABSTRACT},
	{"bsmKey", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/jvm/PoolConstant$Dynamic$BsmKey;", nullptr, $PUBLIC},
	{"dynamicType", "()Lcom/sun/tools/javac/jvm/PoolConstant;", nullptr, $PUBLIC | $ABSTRACT},
	{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"staticArgs", "()[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PoolConstant$Dynamic_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolConstant$Dynamic", "com.sun.tools.javac.jvm.PoolConstant", "Dynamic", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey", "com.sun.tools.javac.jvm.PoolConstant$Dynamic", "BsmKey", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PoolConstant$Dynamic_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.jvm.PoolConstant$Dynamic",
	nullptr,
	"com.sun.tools.javac.jvm.PoolConstant",
	nullptr,
	_PoolConstant$Dynamic_MethodInfo_,
	nullptr,
	nullptr,
	_PoolConstant$Dynamic_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolConstant"
};

$Object* allocate$PoolConstant$Dynamic($Class* clazz) {
	return $of($alloc(PoolConstant$Dynamic));
}

$PoolConstant$Dynamic$BsmKey* PoolConstant$Dynamic::bsmKey($Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($Types, var$0, types);
	$var($PoolConstant$LoadableConstant, var$1, bootstrapMethod());
	return $new($PoolConstant$Dynamic$BsmKey, var$0, var$1, $(staticArgs()));
}

$Object* PoolConstant$Dynamic::poolKey($Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of(bsmKey(types)));
	return $of($new($Pair, var$0, $($nc($(dynamicType()))->poolKey(types))));
}

$Class* PoolConstant$Dynamic::load$($String* name, bool initialize) {
	$loadClass(PoolConstant$Dynamic, name, initialize, &_PoolConstant$Dynamic_ClassInfo_, allocate$PoolConstant$Dynamic);
	return class$;
}

$Class* PoolConstant$Dynamic::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com