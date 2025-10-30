#include <com/sun/tools/javac/comp/Attr$6.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$PostAttrAnalyzer.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$PostAttrAnalyzer = ::com::sun::tools::javac::comp::Attr$PostAttrAnalyzer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
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
				namespace comp {

$FieldInfo _Attr$6_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$6, this$0)},
	{}
};

$MethodInfo _Attr$6_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, 0, $method(static_cast<void(Attr$6::*)($Attr*)>(&Attr$6::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$6_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	"preFlow",
	"(Lcom/sun/tools/javac/tree/JCTree;)V"
};

$InnerClassInfo _Attr$6_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer", "com.sun.tools.javac.comp.Attr", "PostAttrAnalyzer", 0},
	{}
};

$ClassInfo _Attr$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$6",
	"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer",
	nullptr,
	_Attr$6_FieldInfo_,
	_Attr$6_MethodInfo_,
	nullptr,
	&_Attr$6_EnclosingMethodInfo_,
	_Attr$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$6($Class* clazz) {
	return $of($alloc(Attr$6));
}

void Attr$6::init$($Attr* this$0) {
	$set(this, this$0, this$0);
	$Attr$PostAttrAnalyzer::init$(this$0);
}

void Attr$6::scan($JCTree* tree) {
	$init($Type);
	if (tree == nullptr || ($nc(tree)->type != nullptr && $equals(tree->type, $Type::stuckType))) {
		return;
	}
	$Attr$PostAttrAnalyzer::scan(tree);
}

void Attr$6::visitClassDef($JCTree$JCClassDecl* that) {
	if ($nc(that)->sym != nullptr) {
		$Attr$PostAttrAnalyzer::visitClassDef(that);
	}
}

void Attr$6::visitLambda($JCTree$JCLambda* that) {
	if ($nc(that)->type != nullptr) {
		$Attr$PostAttrAnalyzer::visitLambda(that);
	}
}

Attr$6::Attr$6() {
}

$Class* Attr$6::load$($String* name, bool initialize) {
	$loadClass(Attr$6, name, initialize, &_Attr$6_ClassInfo_, allocate$Attr$6);
	return class$;
}

$Class* Attr$6::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com