#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>

#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef BLOCK
#undef CASE
#undef CATCH
#undef DOLOOP
#undef FOREACHLOOP
#undef FORLOOP
#undef IF
#undef RETURN
#undef SWITCH
#undef SYNCHRONIZED
#undef TRY
#undef WHILELOOP

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $EnumArray = $Array<::java::lang::Enum>;
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

$MethodInfo _DeferredAttr$LambdaReturnScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DeferredAttr$LambdaReturnScanner::*)()>(&DeferredAttr$LambdaReturnScanner::init$))},
	{}
};

$InnerClassInfo _DeferredAttr$LambdaReturnScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner", "com.sun.tools.javac.comp.DeferredAttr", "LambdaReturnScanner", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$FilterScanner", "com.sun.tools.javac.comp.DeferredAttr", "FilterScanner", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DeferredAttr$LambdaReturnScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner",
	"com.sun.tools.javac.comp.DeferredAttr$FilterScanner",
	nullptr,
	nullptr,
	_DeferredAttr$LambdaReturnScanner_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$LambdaReturnScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$LambdaReturnScanner($Class* clazz) {
	return $of($alloc(DeferredAttr$LambdaReturnScanner));
}

void DeferredAttr$LambdaReturnScanner::init$() {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	$DeferredAttr$FilterScanner::init$($($EnumSet::of(static_cast<$Enum*>($JCTree$Tag::BLOCK), $fcast($EnumArray, $$new($JCTree$TagArray, {
		$JCTree$Tag::CASE,
		$JCTree$Tag::CATCH,
		$JCTree$Tag::DOLOOP,
		$JCTree$Tag::FOREACHLOOP,
		$JCTree$Tag::FORLOOP,
		$JCTree$Tag::IF,
		$JCTree$Tag::RETURN,
		$JCTree$Tag::SYNCHRONIZED,
		$JCTree$Tag::SWITCH,
		$JCTree$Tag::TRY,
		$JCTree$Tag::WHILELOOP
	})))));
}

DeferredAttr$LambdaReturnScanner::DeferredAttr$LambdaReturnScanner() {
}

$Class* DeferredAttr$LambdaReturnScanner::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$LambdaReturnScanner, name, initialize, &_DeferredAttr$LambdaReturnScanner_ClassInfo_, allocate$DeferredAttr$LambdaReturnScanner);
	return class$;
}

$Class* DeferredAttr$LambdaReturnScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com