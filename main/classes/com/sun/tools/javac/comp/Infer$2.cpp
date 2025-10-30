#include <com/sun/tools/javac/comp/Infer$2.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$AbstractIncorporationEngine.h>
#include <com/sun/tools/javac/comp/Infer$CheckInst.h>
#include <com/sun/tools/javac/comp/Infer$EqCheckLegacy.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$AbstractIncorporationEngine = ::com::sun::tools::javac::comp::Infer$AbstractIncorporationEngine;
using $Infer$CheckInst = ::com::sun::tools::javac::comp::Infer$CheckInst;
using $Infer$EqCheckLegacy = ::com::sun::tools::javac::comp::Infer$EqCheckLegacy;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$2, this$0)},
	{}
};

$MethodInfo _Infer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;)V", nullptr, 0, $method(static_cast<void(Infer$2::*)($Infer*)>(&Infer$2::init$))},
	{"getIncorporationActions", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$IncorporationAction;>;", 0},
	{}
};

$EnclosingMethodInfo _Infer$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Infer",
	nullptr,
	nullptr
};

$InnerClassInfo _Infer$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine", "com.sun.tools.javac.comp.Infer", "AbstractIncorporationEngine", $ABSTRACT},
	{}
};

$ClassInfo _Infer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$2",
	"com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine",
	nullptr,
	_Infer$2_FieldInfo_,
	_Infer$2_MethodInfo_,
	nullptr,
	&_Infer$2_EnclosingMethodInfo_,
	_Infer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$2($Class* clazz) {
	return $of($alloc(Infer$2));
}

void Infer$2::init$($Infer* this$0) {
	$set(this, this$0, this$0);
	$Infer$AbstractIncorporationEngine::init$(this$0);
}

$List* Infer$2::getIncorporationActions($Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib, $Type* t, bool update) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, actions, $new($ListBuffer));
	$var($Type, inst, $nc(uv)->getInst());
	if (inst != nullptr) {
		actions->add($$new($Infer$CheckInst, this->this$0, uv, ib, $$new($Type$UndetVar$InferenceBoundArray, 0)));
	}
	actions->add($$new($Infer$EqCheckLegacy, this->this$0, uv, t, ib));
	return actions->toList();
}

Infer$2::Infer$2() {
}

$Class* Infer$2::load$($String* name, bool initialize) {
	$loadClass(Infer$2, name, initialize, &_Infer$2_ClassInfo_, allocate$Infer$2);
	return class$;
}

$Class* Infer$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com