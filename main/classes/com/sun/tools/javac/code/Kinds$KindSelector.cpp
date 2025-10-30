#include <com/sun/tools/javac/code/Kinds$KindSelector.h>

#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ASG
#undef CLASS
#undef ERR
#undef MDL
#undef METHOD
#undef MODULE
#undef MTH
#undef NIL
#undef PACKAGE
#undef PCK
#undef POLY
#undef TYP
#undef TYP_PCK
#undef VAL
#undef VAL_MTH
#undef VAL_POLY
#undef VAL_TYP
#undef VAL_TYP_PCK
#undef VAR

using $Kinds$KindSelectorArray = $Array<::com::sun::tools::javac::code::Kinds$KindSelector>;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Kinds$KindSelector_FieldInfo_[] = {
	{"NIL", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, NIL)},
	{"PCK", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, PCK)},
	{"TYP", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, TYP)},
	{"VAR", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAR)},
	{"VAL", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL)},
	{"MTH", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, MTH)},
	{"POLY", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, POLY)},
	{"MDL", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, MDL)},
	{"ERR", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, ERR)},
	{"ASG", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, ASG)},
	{"TYP_PCK", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, TYP_PCK)},
	{"VAL_MTH", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL_MTH)},
	{"VAL_POLY", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL_POLY)},
	{"VAL_TYP", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL_TYP)},
	{"VAL_TYP_PCK", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL_TYP_PCK)},
	{"data", "B", nullptr, $PRIVATE | $FINAL, $field(Kinds$KindSelector, data)},
	{}
};

$MethodInfo _Kinds$KindSelector_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Kinds$KindSelector::*)(int32_t)>(&Kinds$KindSelector::init$))},
	{"contains", "(Lcom/sun/tools/javac/code/Kinds$KindSelector;)Z", nullptr, $PUBLIC},
	{"kindNames", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Kinds$KindName;>;", $PUBLIC},
	{"of", "([Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<Kinds$KindSelector*(*)($Kinds$KindSelectorArray*)>(&Kinds$KindSelector::of))},
	{"subset", "(Lcom/sun/tools/javac/code/Kinds$KindSelector;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Kinds$KindSelector_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Kinds$KindSelector", "com.sun.tools.javac.code.Kinds", "KindSelector", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Kinds$KindSelector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Kinds$KindSelector",
	"java.lang.Object",
	nullptr,
	_Kinds$KindSelector_FieldInfo_,
	_Kinds$KindSelector_MethodInfo_,
	nullptr,
	nullptr,
	_Kinds$KindSelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Kinds"
};

$Object* allocate$Kinds$KindSelector($Class* clazz) {
	return $of($alloc(Kinds$KindSelector));
}

Kinds$KindSelector* Kinds$KindSelector::NIL = nullptr;
Kinds$KindSelector* Kinds$KindSelector::PCK = nullptr;
Kinds$KindSelector* Kinds$KindSelector::TYP = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAR = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL = nullptr;
Kinds$KindSelector* Kinds$KindSelector::MTH = nullptr;
Kinds$KindSelector* Kinds$KindSelector::POLY = nullptr;
Kinds$KindSelector* Kinds$KindSelector::MDL = nullptr;
Kinds$KindSelector* Kinds$KindSelector::ERR = nullptr;
Kinds$KindSelector* Kinds$KindSelector::ASG = nullptr;
Kinds$KindSelector* Kinds$KindSelector::TYP_PCK = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL_MTH = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL_POLY = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL_TYP = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL_TYP_PCK = nullptr;

void Kinds$KindSelector::init$(int32_t data) {
	this->data = (int8_t)data;
}

Kinds$KindSelector* Kinds$KindSelector::of($Kinds$KindSelectorArray* kindSelectors) {
	$init(Kinds$KindSelector);
	$useLocalCurrentObjectStackCache();
	int8_t newData = (int8_t)0;
	{
		$var($Kinds$KindSelectorArray, arr$, kindSelectors);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(Kinds$KindSelector, kindSel, arr$->get(i$));
			{
				newData |= $nc(kindSel)->data;
			}
		}
	}
	return $new(Kinds$KindSelector, newData);
}

bool Kinds$KindSelector::subset(Kinds$KindSelector* other) {
	return ((int32_t)(this->data & (uint32_t)~$nc(other)->data)) == 0;
}

bool Kinds$KindSelector::contains(Kinds$KindSelector* other) {
	return ((int32_t)(this->data & (uint32_t)(int32_t)$nc(other)->data)) != 0;
}

$Set* Kinds$KindSelector::kindNames() {
	$load($Kinds$KindName);
	$var($EnumSet, kinds, $EnumSet::noneOf($Kinds$KindName::class$));
	if (((int32_t)(this->data & (uint32_t)(int32_t)$nc(Kinds$KindSelector::VAL)->data)) != 0) {
		if (((int32_t)(this->data & (uint32_t)(int32_t)$nc(Kinds$KindSelector::VAL)->data)) == $nc(Kinds$KindSelector::VAR)->data) {
			$init($Kinds$KindName);
			$nc(kinds)->add($Kinds$KindName::VAR);
		} else {
			$init($Kinds$KindName);
			$nc(kinds)->add($Kinds$KindName::VAL);
		}
	}
	if (((int32_t)(this->data & (uint32_t)(int32_t)$nc(Kinds$KindSelector::MTH)->data)) != 0) {
		$init($Kinds$KindName);
		$nc(kinds)->add($Kinds$KindName::METHOD);
	}
	if (((int32_t)(this->data & (uint32_t)(int32_t)$nc(Kinds$KindSelector::TYP)->data)) != 0) {
		$init($Kinds$KindName);
		$nc(kinds)->add($Kinds$KindName::CLASS);
	}
	if (((int32_t)(this->data & (uint32_t)(int32_t)$nc(Kinds$KindSelector::PCK)->data)) != 0) {
		$init($Kinds$KindName);
		$nc(kinds)->add($Kinds$KindName::PACKAGE);
	}
	if (((int32_t)(this->data & (uint32_t)(int32_t)$nc(Kinds$KindSelector::MDL)->data)) != 0) {
		$init($Kinds$KindName);
		$nc(kinds)->add($Kinds$KindName::MODULE);
	}
	return kinds;
}

void clinit$Kinds$KindSelector($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Kinds$KindSelector::NIL, $new(Kinds$KindSelector, 0));
	$assignStatic(Kinds$KindSelector::PCK, $new(Kinds$KindSelector, 1));
	$assignStatic(Kinds$KindSelector::TYP, $new(Kinds$KindSelector, 2));
	$assignStatic(Kinds$KindSelector::VAR, $new(Kinds$KindSelector, 4));
	$assignStatic(Kinds$KindSelector::VAL, $new(Kinds$KindSelector, 12));
	$assignStatic(Kinds$KindSelector::MTH, $new(Kinds$KindSelector, 16));
	$assignStatic(Kinds$KindSelector::POLY, $new(Kinds$KindSelector, 32));
	$assignStatic(Kinds$KindSelector::MDL, $new(Kinds$KindSelector, 64));
	$assignStatic(Kinds$KindSelector::ERR, $new(Kinds$KindSelector, 127));
	$assignStatic(Kinds$KindSelector::ASG, $new(Kinds$KindSelector, 132));
	$assignStatic(Kinds$KindSelector::TYP_PCK, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::TYP,
		Kinds$KindSelector::PCK
	})));
	$assignStatic(Kinds$KindSelector::VAL_MTH, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::VAL,
		Kinds$KindSelector::MTH
	})));
	$assignStatic(Kinds$KindSelector::VAL_POLY, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::VAL,
		Kinds$KindSelector::POLY
	})));
	$assignStatic(Kinds$KindSelector::VAL_TYP, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::VAL,
		Kinds$KindSelector::TYP
	})));
	$assignStatic(Kinds$KindSelector::VAL_TYP_PCK, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::VAL,
		Kinds$KindSelector::TYP,
		Kinds$KindSelector::PCK
	})));
}

Kinds$KindSelector::Kinds$KindSelector() {
}

$Class* Kinds$KindSelector::load$($String* name, bool initialize) {
	$loadClass(Kinds$KindSelector, name, initialize, &_Kinds$KindSelector_ClassInfo_, clinit$Kinds$KindSelector, allocate$Kinds$KindSelector);
	return class$;
}

$Class* Kinds$KindSelector::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com