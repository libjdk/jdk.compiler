#include <com/sun/tools/javac/comp/Infer$CheckInst.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$CheckBounds.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <java/lang/Enum.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

#undef EQ

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $EnumArray = $Array<::java::lang::Enum>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$CheckBounds = ::com::sun::tools::javac::comp::Infer$CheckBounds;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$CheckInst_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$CheckInst, this$0)},
	{"to", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;", 0, $field(Infer$CheckInst, to)},
	{}
};

$MethodInfo _Infer$CheckInst_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;[Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $TRANSIENT, $method(static_cast<void(Infer$CheckInst::*)($Infer*,$Type$UndetVar*,$Type$UndetVar$InferenceBound*,$Type$UndetVar$InferenceBoundArray*)>(&Infer$CheckInst::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/util/EnumSet;)V", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;)V", 0, $method(static_cast<void(Infer$CheckInst::*)($Infer*,$Type$UndetVar*,$EnumSet*)>(&Infer$CheckInst::init$))},
	{"boundsToCheck", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;>;", 0},
	{"dup", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Lcom/sun/tools/javac/comp/Infer$IncorporationAction;", nullptr, $PUBLIC},
	{"report", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, 0},
	{}
};

$InnerClassInfo _Infer$CheckInst_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$CheckInst", "com.sun.tools.javac.comp.Infer", "CheckInst", 0},
	{"com.sun.tools.javac.comp.Infer$CheckBounds", "com.sun.tools.javac.comp.Infer", "CheckBounds", 0},
	{}
};

$ClassInfo _Infer$CheckInst_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$CheckInst",
	"com.sun.tools.javac.comp.Infer$CheckBounds",
	nullptr,
	_Infer$CheckInst_FieldInfo_,
	_Infer$CheckInst_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$CheckInst_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$CheckInst($Class* clazz) {
	return $of($alloc(Infer$CheckInst));
}

void Infer$CheckInst::init$($Infer* this$0, $Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib, $Type$UndetVar$InferenceBoundArray* rest) {
	Infer$CheckInst::init$(this$0, uv, $($EnumSet::of(static_cast<$Enum*>(ib), $fcast($EnumArray, rest))));
}

void Infer$CheckInst::init$($Infer* this$0, $Type$UndetVar* uv, $EnumSet* to) {
	$set(this, this$0, this$0);
	$init($Type$UndetVar$InferenceBound);
	$Infer$CheckBounds::init$(this$0, uv, $($nc(uv)->getInst()), $Type$UndetVar$InferenceBound::EQ);
	$set(this, to, to);
}

$Infer$IncorporationAction* Infer$CheckInst::dup($Type$UndetVar* that) {
	return $new(Infer$CheckInst, this->this$0, that, this->to);
}

$EnumSet* Infer$CheckInst::boundsToCheck() {
	return this->to;
}

void Infer$CheckInst::report($Type$UndetVar$InferenceBound* from, $Type$UndetVar$InferenceBound* to) {
	this->this$0->reportInstError(this->uv, to);
}

Infer$CheckInst::Infer$CheckInst() {
}

$Class* Infer$CheckInst::load$($String* name, bool initialize) {
	$loadClass(Infer$CheckInst, name, initialize, &_Infer$CheckInst_ClassInfo_, allocate$Infer$CheckInst);
	return class$;
}

$Class* Infer$CheckInst::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com