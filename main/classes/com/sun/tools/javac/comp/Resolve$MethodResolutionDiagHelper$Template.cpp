#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>

#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Resolve$MethodResolutionDiagHelper = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$MethodResolutionDiagHelper$Template_FieldInfo_[] = {
	{"regex", "Ljava/lang/String;", nullptr, 0, $field(Resolve$MethodResolutionDiagHelper$Template, regex)},
	{"subTemplates", "[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;", nullptr, 0, $field(Resolve$MethodResolutionDiagHelper$Template, subTemplates)},
	{}
};

$MethodInfo _Resolve$MethodResolutionDiagHelper$Template_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;)V", nullptr, $TRANSIENT, $method(static_cast<void(Resolve$MethodResolutionDiagHelper$Template::*)($String*,$Resolve$MethodResolutionDiagHelper$TemplateArray*)>(&Resolve$MethodResolutionDiagHelper$Template::init$))},
	{"matches", "(Ljava/lang/Object;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Resolve$MethodResolutionDiagHelper$Template_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "Template", $STATIC},
	{}
};

$ClassInfo _Resolve$MethodResolutionDiagHelper$Template_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template",
	"java.lang.Object",
	nullptr,
	_Resolve$MethodResolutionDiagHelper$Template_FieldInfo_,
	_Resolve$MethodResolutionDiagHelper$Template_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodResolutionDiagHelper$Template_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionDiagHelper$Template($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionDiagHelper$Template));
}

void Resolve$MethodResolutionDiagHelper$Template::init$($String* key, $Resolve$MethodResolutionDiagHelper$TemplateArray* subTemplates) {
	$set(this, regex, key);
	$set(this, subTemplates, subTemplates);
}

bool Resolve$MethodResolutionDiagHelper$Template::matches(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic, d, $cast($JCDiagnostic, o));
	$var($ObjectArray, args, $nc(d)->getArgs());
	bool var$0 = !$nc($(d->getCode()))->matches(this->regex);
	if (var$0 || $nc(this->subTemplates)->length != $nc($(d->getArgs()))->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		if (!$nc($nc(this->subTemplates)->get(i))->matches(args->get(i))) {
			return false;
		}
	}
	return true;
}

Resolve$MethodResolutionDiagHelper$Template::Resolve$MethodResolutionDiagHelper$Template() {
}

$Class* Resolve$MethodResolutionDiagHelper$Template::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionDiagHelper$Template, name, initialize, &_Resolve$MethodResolutionDiagHelper$Template_ClassInfo_, allocate$Resolve$MethodResolutionDiagHelper$Template);
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$Template::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com