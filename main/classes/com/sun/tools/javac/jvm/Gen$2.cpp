#include <com/sun/tools/javac/jvm/Gen$2.h>

#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/jvm/Code$State.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Gen$GenContext.h>
#include <com/sun/tools/javac/jvm/Gen$GenFinalizer.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items$LocalItem.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $Env = ::com::sun::tools::javac::comp::Env;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$State = ::com::sun::tools::javac::jvm::Code$State;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $Gen$GenContext = ::com::sun::tools::javac::jvm::Gen$GenContext;
using $Gen$GenFinalizer = ::com::sun::tools::javac::jvm::Gen$GenFinalizer;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $Items$LocalItem = ::com::sun::tools::javac::jvm::Items$LocalItem;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Gen$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$2, this$0)},
	{"val$lockVar", "Lcom/sun/tools/javac/jvm/Items$LocalItem;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$2, val$lockVar)},
	{"val$syncEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$2, val$syncEnv)},
	{}
};

$MethodInfo _Gen$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Gen;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/jvm/Items$LocalItem;)V", nullptr, 0, $method(static_cast<void(Gen$2::*)($Gen*,$Env*,$Items$LocalItem*)>(&Gen$2::init$))},
	{"gen", "()V", nullptr, 0},
	{"genLast", "()V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Gen$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.Gen",
	"visitSynchronized",
	"(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V"
};

$InnerClassInfo _Gen$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Gen$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.Gen$GenFinalizer", "com.sun.tools.javac.jvm.Gen", "GenFinalizer", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCSynchronized", "com.sun.tools.javac.tree.JCTree", "JCSynchronized", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Gen$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Gen$2",
	"com.sun.tools.javac.jvm.Gen$GenFinalizer",
	nullptr,
	_Gen$2_FieldInfo_,
	_Gen$2_MethodInfo_,
	nullptr,
	&_Gen$2_EnclosingMethodInfo_,
	_Gen$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Gen"
};

$Object* allocate$Gen$2($Class* clazz) {
	return $of($alloc(Gen$2));
}

void Gen$2::init$($Gen* this$0, $Env* val$syncEnv, $Items$LocalItem* val$lockVar) {
	$set(this, this$0, this$0);
	$set(this, val$syncEnv, val$syncEnv);
	$set(this, val$lockVar, val$lockVar);
	$Gen$GenFinalizer::init$(this$0);
}

void Gen$2::gen() {
	genLast();
	$Assert::check($nc($nc(($cast($Gen$GenContext, $nc(this->val$syncEnv)->info)))->gaps)->length() % 2 == 0);
	$nc($nc(($cast($Gen$GenContext, $nc(this->val$syncEnv)->info)))->gaps)->append($($Integer::valueOf($nc(this->this$0->code)->curCP())));
}

void Gen$2::genLast() {
	if ($nc(this->this$0->code)->isAlive()) {
		$nc(this->val$lockVar)->load();
		$nc(this->this$0->code)->emitop0(195);
		$nc($nc(this->this$0->code)->state)->unlock($nc(this->val$lockVar)->reg);
	}
}

Gen$2::Gen$2() {
}

$Class* Gen$2::load$($String* name, bool initialize) {
	$loadClass(Gen$2, name, initialize, &_Gen$2_ClassInfo_, allocate$Gen$2);
	return class$;
}

$Class* Gen$2::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com