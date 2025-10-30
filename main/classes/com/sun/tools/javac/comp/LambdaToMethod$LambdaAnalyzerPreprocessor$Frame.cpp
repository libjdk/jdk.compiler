#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$Frame.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, this$1)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, tree)},
	{"locals", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, locals)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$Frame::*)($LambdaToMethod$LambdaAnalyzerPreprocessor*,$JCTree*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$Frame::init$))},
	{"addLocal", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{}
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$Frame", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "Frame", $PRIVATE},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$Frame",
	"java.lang.Object",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$Frame($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$Frame));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$Frame::init$($LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, $JCTree* tree) {
	$set(this, this$1, this$1);
	$set(this, tree, tree);
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$Frame::addLocal($Symbol* sym) {
	if (this->locals == nullptr) {
		$set(this, locals, $List::nil());
	}
	$set(this, locals, $nc(this->locals)->prepend(sym));
}

LambdaToMethod$LambdaAnalyzerPreprocessor$Frame::LambdaToMethod$LambdaAnalyzerPreprocessor$Frame() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$Frame::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_ClassInfo_, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$Frame);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$Frame::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com