#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>

#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <jcpp.h>

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Infer$FreeTypeListener_MethodInfo_[] = {
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Infer$FreeTypeListener_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$FreeTypeListener", "com.sun.tools.javac.comp.Infer", "FreeTypeListener", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Infer$FreeTypeListener_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	nullptr,
	nullptr,
	nullptr,
	_Infer$FreeTypeListener_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$FreeTypeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$FreeTypeListener($Class* clazz) {
	return $of($alloc(Infer$FreeTypeListener));
}

$Class* Infer$FreeTypeListener::load$($String* name, bool initialize) {
	$loadClass(Infer$FreeTypeListener, name, initialize, &_Infer$FreeTypeListener_ClassInfo_, allocate$Infer$FreeTypeListener);
	return class$;
}

$Class* Infer$FreeTypeListener::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com