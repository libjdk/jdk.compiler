#include <com/sun/tools/javac/comp/DeferredAttr$PolyScanner.h>

#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef CONDEXPR
#undef LAMBDA
#undef PARENS
#undef REFERENCE
#undef SWITCH_EXPRESSION

using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$FilterScanner = ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _DeferredAttr$PolyScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DeferredAttr$PolyScanner::*)()>(&DeferredAttr$PolyScanner::init$))},
	{}
};

$InnerClassInfo _DeferredAttr$PolyScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$PolyScanner", "com.sun.tools.javac.comp.DeferredAttr", "PolyScanner", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$FilterScanner", "com.sun.tools.javac.comp.DeferredAttr", "FilterScanner", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DeferredAttr$PolyScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$PolyScanner",
	"com.sun.tools.javac.comp.DeferredAttr$FilterScanner",
	nullptr,
	nullptr,
	_DeferredAttr$PolyScanner_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$PolyScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$PolyScanner($Class* clazz) {
	return $of($alloc(DeferredAttr$PolyScanner));
}

void DeferredAttr$PolyScanner::init$() {
	$init($JCTree$Tag);
	$DeferredAttr$FilterScanner::init$($($EnumSet::of($JCTree$Tag::CONDEXPR, $JCTree$Tag::PARENS, $JCTree$Tag::LAMBDA, $JCTree$Tag::REFERENCE, $JCTree$Tag::SWITCH_EXPRESSION)));
}

DeferredAttr$PolyScanner::DeferredAttr$PolyScanner() {
}

$Class* DeferredAttr$PolyScanner::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$PolyScanner, name, initialize, &_DeferredAttr$PolyScanner_ClassInfo_, allocate$DeferredAttr$PolyScanner);
	return class$;
}

$Class* DeferredAttr$PolyScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com