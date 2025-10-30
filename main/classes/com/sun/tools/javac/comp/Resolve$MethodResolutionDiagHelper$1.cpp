#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$1.h>

#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <jcpp.h>

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Resolve$MethodResolutionDiagHelper$Template = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Resolve$MethodResolutionDiagHelper$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;)V", nullptr, $TRANSIENT, $method(static_cast<void(Resolve$MethodResolutionDiagHelper$1::*)($String*,$Resolve$MethodResolutionDiagHelper$TemplateArray*)>(&Resolve$MethodResolutionDiagHelper$1::init$))},
	{"matches", "(Ljava/lang/Object;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Resolve$MethodResolutionDiagHelper$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$MethodResolutionDiagHelper$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "Template", $STATIC},
	{}
};

$ClassInfo _Resolve$MethodResolutionDiagHelper$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$1",
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template",
	nullptr,
	nullptr,
	_Resolve$MethodResolutionDiagHelper$1_MethodInfo_,
	nullptr,
	&_Resolve$MethodResolutionDiagHelper$1_EnclosingMethodInfo_,
	_Resolve$MethodResolutionDiagHelper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionDiagHelper$1($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionDiagHelper$1));
}

void Resolve$MethodResolutionDiagHelper$1::init$($String* key, $Resolve$MethodResolutionDiagHelper$TemplateArray* subTemplates) {
	$Resolve$MethodResolutionDiagHelper$Template::init$(key, subTemplates);
}

bool Resolve$MethodResolutionDiagHelper$1::matches(Object$* d) {
	return true;
}

Resolve$MethodResolutionDiagHelper$1::Resolve$MethodResolutionDiagHelper$1() {
}

$Class* Resolve$MethodResolutionDiagHelper$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionDiagHelper$1, name, initialize, &_Resolve$MethodResolutionDiagHelper$1_ClassInfo_, allocate$Resolve$MethodResolutionDiagHelper$1);
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com