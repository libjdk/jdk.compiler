#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer$AssignPendingExit.h>

#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <jcpp.h>

using $Flow$AssignAnalyzer = ::com::sun::tools::javac::comp::Flow$AssignAnalyzer;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Bits = ::com::sun::tools::javac::util::Bits;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$AssignAnalyzer$AssignPendingExit_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/Flow$AssignAnalyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$AssignAnalyzer$AssignPendingExit, this$1)},
	{"inits", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer$AssignPendingExit, inits)},
	{"uninits", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer$AssignPendingExit, uninits)},
	{"exit_inits", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer$AssignPendingExit, exit_inits)},
	{"exit_uninits", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL, $field(Flow$AssignAnalyzer$AssignPendingExit, exit_uninits)},
	{}
};

$MethodInfo _Flow$AssignAnalyzer$AssignPendingExit_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow$AssignAnalyzer;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/Bits;Lcom/sun/tools/javac/util/Bits;)V", nullptr, $PUBLIC, $method(static_cast<void(Flow$AssignAnalyzer$AssignPendingExit::*)($Flow$AssignAnalyzer*,$JCTree*,$Bits*,$Bits*)>(&Flow$AssignAnalyzer$AssignPendingExit::init$))},
	{"resolveJump", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$AssignAnalyzer$AssignPendingExit_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$AssignAnalyzer", "com.sun.tools.javac.comp.Flow", "AssignAnalyzer", $PUBLIC},
	{"com.sun.tools.javac.comp.Flow$AssignAnalyzer$AssignPendingExit", "com.sun.tools.javac.comp.Flow$AssignAnalyzer", "AssignPendingExit", $PUBLIC},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "PendingExit", $STATIC},
	{}
};

$ClassInfo _Flow$AssignAnalyzer$AssignPendingExit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$AssignAnalyzer$AssignPendingExit",
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit",
	nullptr,
	_Flow$AssignAnalyzer$AssignPendingExit_FieldInfo_,
	_Flow$AssignAnalyzer$AssignPendingExit_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$AssignAnalyzer$AssignPendingExit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$AssignAnalyzer$AssignPendingExit($Class* clazz) {
	return $of($alloc(Flow$AssignAnalyzer$AssignPendingExit));
}

void Flow$AssignAnalyzer$AssignPendingExit::init$($Flow$AssignAnalyzer* this$1, $JCTree* tree, $Bits* inits, $Bits* uninits) {
	$set(this, this$1, this$1);
	$Flow$BaseAnalyzer$PendingExit::init$(tree);
	$set(this, exit_inits, $new($Bits, true));
	$set(this, exit_uninits, $new($Bits, true));
	$set(this, inits, inits);
	$set(this, uninits, uninits);
	$nc(this->exit_inits)->assign(inits);
	$nc(this->exit_uninits)->assign(uninits);
}

void Flow$AssignAnalyzer$AssignPendingExit::resolveJump() {
	$nc(this->inits)->andSet(this->exit_inits);
	$nc(this->uninits)->andSet(this->exit_uninits);
}

Flow$AssignAnalyzer$AssignPendingExit::Flow$AssignAnalyzer$AssignPendingExit() {
}

$Class* Flow$AssignAnalyzer$AssignPendingExit::load$($String* name, bool initialize) {
	$loadClass(Flow$AssignAnalyzer$AssignPendingExit, name, initialize, &_Flow$AssignAnalyzer$AssignPendingExit_ClassInfo_, allocate$Flow$AssignAnalyzer$AssignPendingExit);
	return class$;
}

$Class* Flow$AssignAnalyzer$AssignPendingExit::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com