#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Annotate$AnnotationTypeCompleter_MethodInfo_[] = {
	{"complete", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{}
};

$InnerClassInfo _Annotate$AnnotationTypeCompleter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeCompleter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Annotate$AnnotationTypeCompleter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter",
	nullptr,
	nullptr,
	nullptr,
	_Annotate$AnnotationTypeCompleter_MethodInfo_,
	nullptr,
	nullptr,
	_Annotate$AnnotationTypeCompleter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate"
};

$Object* allocate$Annotate$AnnotationTypeCompleter($Class* clazz) {
	return $of($alloc(Annotate$AnnotationTypeCompleter));
}

$Class* Annotate$AnnotationTypeCompleter::load$($String* name, bool initialize) {
	$loadClass(Annotate$AnnotationTypeCompleter, name, initialize, &_Annotate$AnnotationTypeCompleter_ClassInfo_, allocate$Annotate$AnnotationTypeCompleter);
	return class$;
}

$Class* Annotate$AnnotationTypeCompleter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com