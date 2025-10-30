#include <com/sun/tools/javac/comp/Infer$AbstractIncorporationEngine.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$SubstBounds.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Collection.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Type$UndetVar$UndetVarListener = ::com::sun::tools::javac::code::Type$UndetVar$UndetVarListener;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$SubstBounds = ::com::sun::tools::javac::comp::Infer$SubstBounds;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Collection = ::java::util::Collection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$AbstractIncorporationEngine_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$AbstractIncorporationEngine, this$0)},
	{}
};

$MethodInfo _Infer$AbstractIncorporationEngine_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;)V", nullptr, 0, $method(static_cast<void(Infer$AbstractIncorporationEngine::*)($Infer*)>(&Infer$AbstractIncorporationEngine::init$))},
	{"getIncorporationActions", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$IncorporationAction;>;", $ABSTRACT},
	{"varBoundChanged", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)V", nullptr, $PUBLIC},
	{"varInstantiated", "(Lcom/sun/tools/javac/code/Type$UndetVar;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$AbstractIncorporationEngine_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine", "com.sun.tools.javac.comp.Infer", "AbstractIncorporationEngine", $ABSTRACT},
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener", "com.sun.tools.javac.code.Type$UndetVar", "UndetVarListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Infer$AbstractIncorporationEngine_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine",
	"java.lang.Object",
	"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener",
	_Infer$AbstractIncorporationEngine_FieldInfo_,
	_Infer$AbstractIncorporationEngine_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$AbstractIncorporationEngine_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$AbstractIncorporationEngine($Class* clazz) {
	return $of($alloc(Infer$AbstractIncorporationEngine));
}

void Infer$AbstractIncorporationEngine::init$($Infer* this$0) {
	$set(this, this$0, this$0);
}

void Infer$AbstractIncorporationEngine::varInstantiated($Type$UndetVar* uv) {
	$nc($nc(uv)->incorporationActions)->addFirst($$new($Infer$SubstBounds, this->this$0, uv));
}

void Infer$AbstractIncorporationEngine::varBoundChanged($Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib, $Type* bound, bool update) {
	if ($nc(uv)->isCaptured()) {
		return;
	}
	$nc($nc(uv)->incorporationActions)->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>(getIncorporationActions(uv, ib, bound, update)))));
}

Infer$AbstractIncorporationEngine::Infer$AbstractIncorporationEngine() {
}

$Class* Infer$AbstractIncorporationEngine::load$($String* name, bool initialize) {
	$loadClass(Infer$AbstractIncorporationEngine, name, initialize, &_Infer$AbstractIncorporationEngine_ClassInfo_, allocate$Infer$AbstractIncorporationEngine);
	return class$;
}

$Class* Infer$AbstractIncorporationEngine::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com