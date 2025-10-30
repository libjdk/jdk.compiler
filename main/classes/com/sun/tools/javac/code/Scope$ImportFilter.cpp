#include <com/sun/tools/javac/code/Scope$ImportFilter.h>

#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Scope$ImportFilter_MethodInfo_[] = {
	{"accepts", "(Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Scope$ImportFilter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ImportFilter", "com.sun.tools.javac.code.Scope", "ImportFilter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Scope$ImportFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.Scope$ImportFilter",
	nullptr,
	nullptr,
	nullptr,
	_Scope$ImportFilter_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$ImportFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ImportFilter($Class* clazz) {
	return $of($alloc(Scope$ImportFilter));
}

$Class* Scope$ImportFilter::load$($String* name, bool initialize) {
	$loadClass(Scope$ImportFilter, name, initialize, &_Scope$ImportFilter_ClassInfo_, allocate$Scope$ImportFilter);
	return class$;
}

$Class* Scope$ImportFilter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com