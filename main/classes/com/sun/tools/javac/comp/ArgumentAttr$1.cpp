#include <com/sun/tools/javac/comp/ArgumentAttr$1.h>

#include <com/sun/tools/javac/comp/ArgumentAttr$UniquePos.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$MethodAttrInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$UniquePos = ::com::sun::tools::javac::comp::ArgumentAttr$UniquePos;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$MethodAttrInfo = ::com::sun::tools::javac::comp::Attr$MethodAttrInfo;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _ArgumentAttr$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$1, this$0)},
	{"val$pos", "Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$1, val$pos)},
	{}
};

$MethodInfo _ArgumentAttr$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;)V", nullptr, 0, $method(static_cast<void(ArgumentAttr$1::*)($ArgumentAttr*,$Attr*,$ArgumentAttr$UniquePos*)>(&ArgumentAttr$1::init$))},
	{"needsArgumentAttr", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ArgumentAttr$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.ArgumentAttr",
	"processArg",
	"(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Ljava/util/function/Function;)V"
};

$InnerClassInfo _ArgumentAttr$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$MethodAttrInfo", "com.sun.tools.javac.comp.Attr", "MethodAttrInfo", 0},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ArgumentAttr$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$1",
	"com.sun.tools.javac.comp.Attr$MethodAttrInfo",
	nullptr,
	_ArgumentAttr$1_FieldInfo_,
	_ArgumentAttr$1_MethodInfo_,
	nullptr,
	&_ArgumentAttr$1_EnclosingMethodInfo_,
	_ArgumentAttr$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$1($Class* clazz) {
	return $of($alloc(ArgumentAttr$1));
}

void ArgumentAttr$1::init$($ArgumentAttr* this$0, $Attr* x0, $ArgumentAttr$UniquePos* val$pos) {
	$set(this, this$0, this$0);
	$set(this, val$pos, val$pos);
	$Attr$MethodAttrInfo::init$(static_cast<$Attr*>($nc(x0)));
}

bool ArgumentAttr$1::needsArgumentAttr($JCTree* tree) {
	return !$$new($ArgumentAttr$UniquePos, this->this$0, tree)->equals(this->val$pos);
}

ArgumentAttr$1::ArgumentAttr$1() {
}

$Class* ArgumentAttr$1::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$1, name, initialize, &_ArgumentAttr$1_ClassInfo_, allocate$ArgumentAttr$1);
	return class$;
}

$Class* ArgumentAttr$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com