#include <com/sun/tools/javac/jvm/Gen$GenContext.h>

#include <com/sun/tools/javac/jvm/Code$Chain.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Gen$GenFinalizer.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$Chain = ::com::sun::tools::javac::jvm::Code$Chain;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $Gen$GenFinalizer = ::com::sun::tools::javac::jvm::Gen$GenFinalizer;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Gen$GenContext_FieldInfo_[] = {
	{"exit", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0, $field(Gen$GenContext, exit)},
	{"cont", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0, $field(Gen$GenContext, cont)},
	{"finalize", "Lcom/sun/tools/javac/jvm/Gen$GenFinalizer;", nullptr, 0, $field(Gen$GenContext, finalize$)},
	{"isSwitch", "Z", nullptr, 0, $field(Gen$GenContext, isSwitch)},
	{"gaps", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Integer;>;", 0, $field(Gen$GenContext, gaps)},
	{}
};

$MethodInfo _Gen$GenContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Gen$GenContext::*)()>(&Gen$GenContext::init$))},
	{"addCont", "(Lcom/sun/tools/javac/jvm/Code$Chain;)V", nullptr, 0},
	{"addExit", "(Lcom/sun/tools/javac/jvm/Code$Chain;)V", nullptr, 0},
	{}
};

$InnerClassInfo _Gen$GenContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Gen$GenContext", "com.sun.tools.javac.jvm.Gen", "GenContext", $STATIC},
	{}
};

$ClassInfo _Gen$GenContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Gen$GenContext",
	"java.lang.Object",
	nullptr,
	_Gen$GenContext_FieldInfo_,
	_Gen$GenContext_MethodInfo_,
	nullptr,
	nullptr,
	_Gen$GenContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Gen"
};

$Object* allocate$Gen$GenContext($Class* clazz) {
	return $of($alloc(Gen$GenContext));
}

void Gen$GenContext::init$() {
	$set(this, exit, nullptr);
	$set(this, cont, nullptr);
	$set(this, finalize$, nullptr);
	this->isSwitch = false;
	$set(this, gaps, nullptr);
}

void Gen$GenContext::addExit($Code$Chain* c) {
	$set(this, exit, $Code::mergeChains(c, this->exit));
}

void Gen$GenContext::addCont($Code$Chain* c) {
	$set(this, cont, $Code::mergeChains(c, this->cont));
}

Gen$GenContext::Gen$GenContext() {
}

$Class* Gen$GenContext::load$($String* name, bool initialize) {
	$loadClass(Gen$GenContext, name, initialize, &_Gen$GenContext_ClassInfo_, allocate$Gen$GenContext);
	return class$;
}

$Class* Gen$GenContext::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com