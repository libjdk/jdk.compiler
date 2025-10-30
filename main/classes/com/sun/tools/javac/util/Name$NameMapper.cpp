#include <com/sun/tools/javac/util/Name$NameMapper.h>

#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Name$NameMapper_MethodInfo_[] = {
	{"map", "([BII)Ljava/lang/Object;", "([BII)TX;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Name$NameMapper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Name$NameMapper", "com.sun.tools.javac.util.Name", "NameMapper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Name$NameMapper_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.Name$NameMapper",
	nullptr,
	nullptr,
	nullptr,
	_Name$NameMapper_MethodInfo_,
	"<X:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Name$NameMapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Name"
};

$Object* allocate$Name$NameMapper($Class* clazz) {
	return $of($alloc(Name$NameMapper));
}

$Class* Name$NameMapper::load$($String* name, bool initialize) {
	$loadClass(Name$NameMapper, name, initialize, &_Name$NameMapper_ClassInfo_, allocate$Name$NameMapper);
	return class$;
}

$Class* Name$NameMapper::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com