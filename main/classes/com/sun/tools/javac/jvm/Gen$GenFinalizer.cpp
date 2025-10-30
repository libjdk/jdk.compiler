#include <com/sun/tools/javac/jvm/Gen$GenFinalizer.h>

#include <com/sun/tools/javac/jvm/Gen.h>
#include <jcpp.h>

using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Gen$GenFinalizer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$GenFinalizer, this$0)},
	{}
};

$MethodInfo _Gen$GenFinalizer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Gen;)V", nullptr, 0, $method(static_cast<void(Gen$GenFinalizer::*)($Gen*)>(&Gen$GenFinalizer::init$))},
	{"afterBody", "()V", nullptr, 0},
	{"gen", "()V", nullptr, $ABSTRACT},
	{"genLast", "()V", nullptr, $ABSTRACT},
	{"hasFinalizer", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _Gen$GenFinalizer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Gen$GenFinalizer", "com.sun.tools.javac.jvm.Gen", "GenFinalizer", $ABSTRACT},
	{}
};

$ClassInfo _Gen$GenFinalizer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.jvm.Gen$GenFinalizer",
	"java.lang.Object",
	nullptr,
	_Gen$GenFinalizer_FieldInfo_,
	_Gen$GenFinalizer_MethodInfo_,
	nullptr,
	nullptr,
	_Gen$GenFinalizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Gen"
};

$Object* allocate$Gen$GenFinalizer($Class* clazz) {
	return $of($alloc(Gen$GenFinalizer));
}

void Gen$GenFinalizer::init$($Gen* this$0) {
	$set(this, this$0, this$0);
}

bool Gen$GenFinalizer::hasFinalizer() {
	return true;
}

void Gen$GenFinalizer::afterBody() {
}

Gen$GenFinalizer::Gen$GenFinalizer() {
}

$Class* Gen$GenFinalizer::load$($String* name, bool initialize) {
	$loadClass(Gen$GenFinalizer, name, initialize, &_Gen$GenFinalizer_ClassInfo_, allocate$Gen$GenFinalizer);
	return class$;
}

$Class* Gen$GenFinalizer::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com