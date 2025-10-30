#include <com/sun/tools/javac/jvm/Gen$1.h>

#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Gen$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$1, this$0)},
	{"val$hasTry", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(Gen$1, val$hasTry)},
	{}
};

$MethodInfo _Gen$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Gen;[Z)V", nullptr, 0, $method(static_cast<void(Gen$1::*)($Gen*,$booleans*)>(&Gen$1::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Gen$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.Gen",
	"hasTry",
	"(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)Z"
};

$InnerClassInfo _Gen$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Gen$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCSwitchExpression", "com.sun.tools.javac.tree.JCTree", "JCSwitchExpression", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Gen$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Gen$1",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Gen$1_FieldInfo_,
	_Gen$1_MethodInfo_,
	nullptr,
	&_Gen$1_EnclosingMethodInfo_,
	_Gen$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Gen"
};

$Object* allocate$Gen$1($Class* clazz) {
	return $of($alloc(Gen$1));
}

void Gen$1::init$($Gen* this$0, $booleans* val$hasTry) {
	$set(this, this$0, this$0);
	$set(this, val$hasTry, val$hasTry);
	$TreeScanner::init$();
}

void Gen$1::visitTry($JCTree$JCTry* tree) {
	$nc(this->val$hasTry)->set(0, true);
}

void Gen$1::visitClassDef($JCTree$JCClassDecl* tree) {
}

void Gen$1::visitLambda($JCTree$JCLambda* tree) {
}

Gen$1::Gen$1() {
}

$Class* Gen$1::load$($String* name, bool initialize) {
	$loadClass(Gen$1, name, initialize, &_Gen$1_ClassInfo_, allocate$Gen$1);
	return class$;
}

$Class* Gen$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com