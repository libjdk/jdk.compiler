#include <com/sun/tools/javac/util/Context$Factory.h>

#include <com/sun/tools/javac/util/Context.h>
#include <jcpp.h>

using $Context = ::com::sun::tools::javac::util::Context;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Context$Factory_MethodInfo_[] = {
	{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/util/Context;)TT;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Context$Factory_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Context$Factory", "com.sun.tools.javac.util.Context", "Factory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Context$Factory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.Context$Factory",
	nullptr,
	nullptr,
	nullptr,
	_Context$Factory_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Context$Factory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Context"
};

$Object* allocate$Context$Factory($Class* clazz) {
	return $of($alloc(Context$Factory));
}

$Class* Context$Factory::load$($String* name, bool initialize) {
	$loadClass(Context$Factory, name, initialize, &_Context$Factory_ClassInfo_, allocate$Context$Factory);
	return class$;
}

$Class* Context$Factory::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com