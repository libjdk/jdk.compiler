#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>

#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _DeferredAttr$DeferredStuckPolicy_MethodInfo_[] = {
	{"depVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $ABSTRACT},
	{"isStuck", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"stuckVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredStuckPolicy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "DeferredStuckPolicy", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DeferredAttr$DeferredStuckPolicy_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy",
	nullptr,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredStuckPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredStuckPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredStuckPolicy($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredStuckPolicy));
}

$Class* DeferredAttr$DeferredStuckPolicy::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredStuckPolicy, name, initialize, &_DeferredAttr$DeferredStuckPolicy_ClassInfo_, allocate$DeferredAttr$DeferredStuckPolicy);
	return class$;
}

$Class* DeferredAttr$DeferredStuckPolicy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com