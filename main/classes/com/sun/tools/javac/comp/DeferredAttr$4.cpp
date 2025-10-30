#include <com/sun/tools/javac/comp/DeferredAttr$4.h>

#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$4, this$0)},
	{}
};

$MethodInfo _DeferredAttr$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$4::*)($DeferredAttr*)>(&DeferredAttr$4::init$))},
	{"depVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"isStuck", "()Z", nullptr, $PUBLIC},
	{"stuckVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredAttr$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr",
	nullptr,
	nullptr
};

$InnerClassInfo _DeferredAttr$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "DeferredStuckPolicy", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DeferredAttr$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$4",
	"java.lang.Object",
	"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy",
	_DeferredAttr$4_FieldInfo_,
	_DeferredAttr$4_MethodInfo_,
	nullptr,
	&_DeferredAttr$4_EnclosingMethodInfo_,
	_DeferredAttr$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$4($Class* clazz) {
	return $of($alloc(DeferredAttr$4));
}

void DeferredAttr$4::init$($DeferredAttr* this$0) {
	$set(this, this$0, this$0);
}

bool DeferredAttr$4::isStuck() {
	return false;
}

$Set* DeferredAttr$4::stuckVars() {
	return $Collections::emptySet();
}

$Set* DeferredAttr$4::depVars() {
	return $Collections::emptySet();
}

DeferredAttr$4::DeferredAttr$4() {
}

$Class* DeferredAttr$4::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$4, name, initialize, &_DeferredAttr$4_ClassInfo_, allocate$DeferredAttr$4);
	return class$;
}

$Class* DeferredAttr$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com