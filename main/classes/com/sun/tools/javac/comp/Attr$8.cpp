#include <com/sun/tools/javac/comp/Attr$8.h>

#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$PostAttrAnalyzer.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$PostAttrAnalyzer = ::com::sun::tools::javac::comp::Attr$PostAttrAnalyzer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
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

$FieldInfo _Attr$8_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$8, this$0)},
	{}
};

$MethodInfo _Attr$8_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, 0, $method(static_cast<void(Attr$8::*)($Attr*)>(&Attr$8::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$8_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	"preFlow",
	"(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V"
};

$InnerClassInfo _Attr$8_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$8", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer", "com.sun.tools.javac.comp.Attr", "PostAttrAnalyzer", 0},
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attr$8_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$8",
	"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer",
	nullptr,
	_Attr$8_FieldInfo_,
	_Attr$8_MethodInfo_,
	nullptr,
	&_Attr$8_EnclosingMethodInfo_,
	_Attr$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$8($Class* clazz) {
	return $of($alloc(Attr$8));
}

void Attr$8::init$($Attr* this$0) {
	$set(this, this$0, this$0);
	$Attr$PostAttrAnalyzer::init$(this$0);
}

void Attr$8::scan($JCTree* tree) {
	$init($Type);
	if (tree == nullptr || ($nc(tree)->type != nullptr && $equals(tree->type, $Type::stuckType))) {
		return;
	}
	$Attr$PostAttrAnalyzer::scan(tree);
}

void Attr$8::visitClassDef($JCTree$JCClassDecl* that) {
}

void Attr$8::visitLambda($JCTree$JCLambda* that) {
}

Attr$8::Attr$8() {
}

$Class* Attr$8::load$($String* name, bool initialize) {
	$loadClass(Attr$8, name, initialize, &_Attr$8_ClassInfo_, allocate$Attr$8);
	return class$;
}

$Class* Attr$8::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com