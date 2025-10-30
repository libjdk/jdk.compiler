#include <com/sun/tools/javac/code/Kinds$Kind.h>

#include <com/sun/tools/javac/code/Kinds$Kind$Category.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ABSENT_MTH
#undef ABSENT_TYP
#undef ABSENT_VAR
#undef AMBIGUOUS
#undef BAD_RESTRICTED_TYPE
#undef BASIC
#undef CLASS
#undef ERR
#undef ERROR
#undef HIDDEN
#undef MDL
#undef METHOD
#undef MISSING_ENCL
#undef MTH
#undef NIL
#undef PACKAGE
#undef PCK
#undef POLY
#undef RESOLUTION
#undef RESOLUTION_TARGET
#undef STATICERR
#undef TYP
#undef VAR
#undef WRONG_MTH
#undef WRONG_MTHS

using $Kinds$KindArray = $Array<::com::sun::tools::javac::code::Kinds$Kind>;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind$Category = ::com::sun::tools::javac::code::Kinds$Kind$Category;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Kinds$Kind_FieldInfo_[] = {
	{"NIL", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, NIL)},
	{"PCK", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, PCK)},
	{"TYP", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, TYP)},
	{"VAR", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, VAR)},
	{"MTH", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, MTH)},
	{"POLY", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, POLY)},
	{"MDL", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, MDL)},
	{"ERR", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, ERR)},
	{"AMBIGUOUS", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, AMBIGUOUS)},
	{"HIDDEN", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, HIDDEN)},
	{"STATICERR", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, STATICERR)},
	{"MISSING_ENCL", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, MISSING_ENCL)},
	{"BAD_RESTRICTED_TYPE", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, BAD_RESTRICTED_TYPE)},
	{"ABSENT_VAR", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, ABSENT_VAR)},
	{"WRONG_MTHS", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, WRONG_MTHS)},
	{"WRONG_MTH", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, WRONG_MTH)},
	{"ABSENT_MTH", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, ABSENT_MTH)},
	{"ABSENT_TYP", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind, ABSENT_TYP)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Kinds$Kind, $VALUES)},
	{"kindName", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PRIVATE | $FINAL, $field(Kinds$Kind, kindName$)},
	{"absentKind", "Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PRIVATE | $FINAL, $field(Kinds$Kind, absentKind$)},
	{"selector", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PRIVATE | $FINAL, $field(Kinds$Kind, selector)},
	{"category", "Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PRIVATE | $FINAL, $field(Kinds$Kind, category)},
	{}
};

$MethodInfo _Kinds$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Kinds$KindArray*(*)()>(&Kinds$Kind::$values))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Kinds$Kind$Category;)V", "(Lcom/sun/tools/javac/code/Kinds$Kind$Category;)V", $PRIVATE, $method(static_cast<void(Kinds$Kind::*)($String*,int32_t,$Kinds$Kind$Category*)>(&Kinds$Kind::init$))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Kinds$Kind$Category;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", "(Lcom/sun/tools/javac/code/Kinds$Kind$Category;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", $PRIVATE, $method(static_cast<void(Kinds$Kind::*)($String*,int32_t,$Kinds$Kind$Category*,$Kinds$KindSelector*)>(&Kinds$Kind::init$))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Kinds$Kind$Category;Lcom/sun/tools/javac/code/Kinds$KindName;)V", "(Lcom/sun/tools/javac/code/Kinds$Kind$Category;Lcom/sun/tools/javac/code/Kinds$KindName;)V", $PRIVATE, $method(static_cast<void(Kinds$Kind::*)($String*,int32_t,$Kinds$Kind$Category*,$Kinds$KindName*)>(&Kinds$Kind::init$))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Kinds$Kind$Category;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", "(Lcom/sun/tools/javac/code/Kinds$Kind$Category;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", $PRIVATE, $method(static_cast<void(Kinds$Kind::*)($String*,int32_t,$Kinds$Kind$Category*,$Kinds$KindName*,$Kinds$KindSelector*)>(&Kinds$Kind::init$))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Kinds$Kind$Category;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", "(Lcom/sun/tools/javac/code/Kinds$Kind$Category;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Kinds$KindSelector;)V", $PRIVATE, $method(static_cast<void(Kinds$Kind::*)($String*,int32_t,$Kinds$Kind$Category*,$Kinds$KindName*,$Kinds$KindName*,$Kinds$KindSelector*)>(&Kinds$Kind::init$))},
	{"absentKind", "()Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC, $method(static_cast<$Kinds$KindName*(Kinds$Kind::*)()>(&Kinds$Kind::absentKind))},
	{"betterThan", "(Lcom/sun/tools/javac/code/Kinds$Kind;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Kinds$Kind::*)(Kinds$Kind*)>(&Kinds$Kind::betterThan))},
	{"isResolutionError", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Kinds$Kind::*)()>(&Kinds$Kind::isResolutionError))},
	{"isResolutionTargetError", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Kinds$Kind::*)()>(&Kinds$Kind::isResolutionTargetError))},
	{"isValid", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Kinds$Kind::*)()>(&Kinds$Kind::isValid))},
	{"kindName", "()Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC, $method(static_cast<$Kinds$KindName*(Kinds$Kind::*)()>(&Kinds$Kind::kindName))},
	{"matches", "(Lcom/sun/tools/javac/code/Kinds$KindSelector;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Kinds$Kind::*)($Kinds$KindSelector*)>(&Kinds$Kind::matches))},
	{"toSelector", "()Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC, $method(static_cast<$Kinds$KindSelector*(Kinds$Kind::*)()>(&Kinds$Kind::toSelector))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Kinds$Kind*(*)($String*)>(&Kinds$Kind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Kinds$KindArray*(*)()>(&Kinds$Kind::values))},
	{}
};

$InnerClassInfo _Kinds$Kind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Kinds$Kind", "com.sun.tools.javac.code.Kinds", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Kinds$Kind$Category", "com.sun.tools.javac.code.Kinds$Kind", "Category", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Kinds$Kind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Kinds$Kind",
	"java.lang.Enum",
	nullptr,
	_Kinds$Kind_FieldInfo_,
	_Kinds$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Kinds$Kind;>;",
	nullptr,
	_Kinds$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Kinds"
};

$Object* allocate$Kinds$Kind($Class* clazz) {
	return $of($alloc(Kinds$Kind));
}

Kinds$Kind* Kinds$Kind::NIL = nullptr;
Kinds$Kind* Kinds$Kind::PCK = nullptr;
Kinds$Kind* Kinds$Kind::TYP = nullptr;
Kinds$Kind* Kinds$Kind::VAR = nullptr;
Kinds$Kind* Kinds$Kind::MTH = nullptr;
Kinds$Kind* Kinds$Kind::POLY = nullptr;
Kinds$Kind* Kinds$Kind::MDL = nullptr;
Kinds$Kind* Kinds$Kind::ERR = nullptr;
Kinds$Kind* Kinds$Kind::AMBIGUOUS = nullptr;
Kinds$Kind* Kinds$Kind::HIDDEN = nullptr;
Kinds$Kind* Kinds$Kind::STATICERR = nullptr;
Kinds$Kind* Kinds$Kind::MISSING_ENCL = nullptr;
Kinds$Kind* Kinds$Kind::BAD_RESTRICTED_TYPE = nullptr;
Kinds$Kind* Kinds$Kind::ABSENT_VAR = nullptr;
Kinds$Kind* Kinds$Kind::WRONG_MTHS = nullptr;
Kinds$Kind* Kinds$Kind::WRONG_MTH = nullptr;
Kinds$Kind* Kinds$Kind::ABSENT_MTH = nullptr;
Kinds$Kind* Kinds$Kind::ABSENT_TYP = nullptr;
$Kinds$KindArray* Kinds$Kind::$VALUES = nullptr;

$Kinds$KindArray* Kinds$Kind::$values() {
	$init(Kinds$Kind);
	return $new($Kinds$KindArray, {
		Kinds$Kind::NIL,
		Kinds$Kind::PCK,
		Kinds$Kind::TYP,
		Kinds$Kind::VAR,
		Kinds$Kind::MTH,
		Kinds$Kind::POLY,
		Kinds$Kind::MDL,
		Kinds$Kind::ERR,
		Kinds$Kind::AMBIGUOUS,
		Kinds$Kind::HIDDEN,
		Kinds$Kind::STATICERR,
		Kinds$Kind::MISSING_ENCL,
		Kinds$Kind::BAD_RESTRICTED_TYPE,
		Kinds$Kind::ABSENT_VAR,
		Kinds$Kind::WRONG_MTHS,
		Kinds$Kind::WRONG_MTH,
		Kinds$Kind::ABSENT_MTH,
		Kinds$Kind::ABSENT_TYP
	});
}

$Kinds$KindArray* Kinds$Kind::values() {
	$init(Kinds$Kind);
	return $cast($Kinds$KindArray, Kinds$Kind::$VALUES->clone());
}

Kinds$Kind* Kinds$Kind::valueOf($String* name) {
	$init(Kinds$Kind);
	return $cast(Kinds$Kind, $Enum::valueOf(Kinds$Kind::class$, name));
}

void Kinds$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $Kinds$Kind$Category* category) {
	Kinds$Kind::init$($enum$name, $enum$ordinal, category, nullptr, nullptr, nullptr);
}

void Kinds$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $Kinds$Kind$Category* category, $Kinds$KindSelector* selector) {
	Kinds$Kind::init$($enum$name, $enum$ordinal, category, nullptr, nullptr, selector);
}

void Kinds$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $Kinds$Kind$Category* category, $Kinds$KindName* absentKind) {
	Kinds$Kind::init$($enum$name, $enum$ordinal, category, nullptr, absentKind, nullptr);
}

void Kinds$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $Kinds$Kind$Category* category, $Kinds$KindName* kindName, $Kinds$KindSelector* selector) {
	Kinds$Kind::init$($enum$name, $enum$ordinal, category, kindName, nullptr, selector);
}

void Kinds$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $Kinds$Kind$Category* category, $Kinds$KindName* kindName, $Kinds$KindName* absentKind, $Kinds$KindSelector* selector) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, category, category);
	$set(this, kindName$, kindName);
	$set(this, absentKind$, absentKind);
	$set(this, selector, selector);
}

$Kinds$KindSelector* Kinds$Kind::toSelector() {
	return this->selector;
}

bool Kinds$Kind::matches($Kinds$KindSelector* kindSelectors) {
	return $nc(this->selector)->contains(kindSelectors);
}

bool Kinds$Kind::isResolutionError() {
	$init($Kinds$Kind$Category);
	return this->category == $Kinds$Kind$Category::RESOLUTION || this->category == $Kinds$Kind$Category::RESOLUTION_TARGET;
}

bool Kinds$Kind::isResolutionTargetError() {
	$init($Kinds$Kind$Category);
	return this->category == $Kinds$Kind$Category::RESOLUTION_TARGET;
}

bool Kinds$Kind::isValid() {
	$init($Kinds$Kind$Category);
	return this->category == $Kinds$Kind$Category::BASIC;
}

bool Kinds$Kind::betterThan(Kinds$Kind* other) {
	int32_t var$0 = ordinal();
	return var$0 < $nc(other)->ordinal();
}

$Kinds$KindName* Kinds$Kind::kindName() {
	if (this->kindName$ == nullptr) {
		$throwNew($AssertionError, $of($$str({"Unexpected kind: "_s, this})));
	} else {
		return this->kindName$;
	}
}

$Kinds$KindName* Kinds$Kind::absentKind() {
	if (this->absentKind$ == nullptr) {
		$throwNew($AssertionError, $of($$str({"Unexpected kind: "_s, this})));
	} else {
		return this->absentKind$;
	}
}

void clinit$Kinds$Kind($Class* class$) {
	$init($Kinds$Kind$Category);
	$init($Kinds$KindSelector);
	$assignStatic(Kinds$Kind::NIL, $new(Kinds$Kind, "NIL"_s, 0, $Kinds$Kind$Category::BASIC, $Kinds$KindSelector::NIL));
	$init($Kinds$KindName);
	$assignStatic(Kinds$Kind::PCK, $new(Kinds$Kind, "PCK"_s, 1, $Kinds$Kind$Category::BASIC, $Kinds$KindName::PACKAGE, $Kinds$KindSelector::PCK));
	$assignStatic(Kinds$Kind::TYP, $new(Kinds$Kind, "TYP"_s, 2, $Kinds$Kind$Category::BASIC, $Kinds$KindName::CLASS, $Kinds$KindSelector::TYP));
	$assignStatic(Kinds$Kind::VAR, $new(Kinds$Kind, "VAR"_s, 3, $Kinds$Kind$Category::BASIC, $Kinds$KindName::VAR, $Kinds$KindSelector::VAR));
	$assignStatic(Kinds$Kind::MTH, $new(Kinds$Kind, "MTH"_s, 4, $Kinds$Kind$Category::BASIC, $Kinds$KindName::METHOD, $Kinds$KindSelector::MTH));
	$assignStatic(Kinds$Kind::POLY, $new(Kinds$Kind, "POLY"_s, 5, $Kinds$Kind$Category::BASIC, $Kinds$KindSelector::POLY));
	$assignStatic(Kinds$Kind::MDL, $new(Kinds$Kind, "MDL"_s, 6, $Kinds$Kind$Category::BASIC, $Kinds$KindSelector::MDL));
	$assignStatic(Kinds$Kind::ERR, $new(Kinds$Kind, "ERR"_s, 7, $Kinds$Kind$Category::ERROR, $Kinds$KindSelector::ERR));
	$assignStatic(Kinds$Kind::AMBIGUOUS, $new(Kinds$Kind, "AMBIGUOUS"_s, 8, $Kinds$Kind$Category::RESOLUTION_TARGET));
	$assignStatic(Kinds$Kind::HIDDEN, $new(Kinds$Kind, "HIDDEN"_s, 9, $Kinds$Kind$Category::RESOLUTION_TARGET));
	$assignStatic(Kinds$Kind::STATICERR, $new(Kinds$Kind, "STATICERR"_s, 10, $Kinds$Kind$Category::RESOLUTION_TARGET));
	$assignStatic(Kinds$Kind::MISSING_ENCL, $new(Kinds$Kind, "MISSING_ENCL"_s, 11, $Kinds$Kind$Category::RESOLUTION));
	$assignStatic(Kinds$Kind::BAD_RESTRICTED_TYPE, $new(Kinds$Kind, "BAD_RESTRICTED_TYPE"_s, 12, $Kinds$Kind$Category::RESOLUTION));
	$assignStatic(Kinds$Kind::ABSENT_VAR, $new(Kinds$Kind, "ABSENT_VAR"_s, 13, $Kinds$Kind$Category::RESOLUTION_TARGET, $Kinds$KindName::VAR));
	$assignStatic(Kinds$Kind::WRONG_MTHS, $new(Kinds$Kind, "WRONG_MTHS"_s, 14, $Kinds$Kind$Category::RESOLUTION_TARGET, $Kinds$KindName::METHOD));
	$assignStatic(Kinds$Kind::WRONG_MTH, $new(Kinds$Kind, "WRONG_MTH"_s, 15, $Kinds$Kind$Category::RESOLUTION_TARGET, $Kinds$KindName::METHOD));
	$assignStatic(Kinds$Kind::ABSENT_MTH, $new(Kinds$Kind, "ABSENT_MTH"_s, 16, $Kinds$Kind$Category::RESOLUTION_TARGET, $Kinds$KindName::METHOD));
	$assignStatic(Kinds$Kind::ABSENT_TYP, $new(Kinds$Kind, "ABSENT_TYP"_s, 17, $Kinds$Kind$Category::RESOLUTION_TARGET, $Kinds$KindName::CLASS));
	$assignStatic(Kinds$Kind::$VALUES, Kinds$Kind::$values());
}

Kinds$Kind::Kinds$Kind() {
}

$Class* Kinds$Kind::load$($String* name, bool initialize) {
	$loadClass(Kinds$Kind, name, initialize, &_Kinds$Kind_ClassInfo_, clinit$Kinds$Kind, allocate$Kinds$Kind);
	return class$;
}

$Class* Kinds$Kind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com