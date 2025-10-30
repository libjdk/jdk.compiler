#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>

#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$AnalyzerMode = ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Analyzer$StatementAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$StatementAnalyzer, this$0)},
	{"mode", "Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, 0, $field(Analyzer$StatementAnalyzer, mode)},
	{"tag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, 0, $field(Analyzer$StatementAnalyzer, tag)},
	{}
};

$MethodInfo _Analyzer$StatementAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Analyzer$StatementAnalyzer::*)($Analyzer*,$Analyzer$AnalyzerMode*,$JCTree$Tag*)>(&Analyzer$StatementAnalyzer::init$))},
	{"isEnabled", "()Z", nullptr, 0},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree;)Z", "(TS;)Z", $ABSTRACT},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Z)V", "(TS;TT;Z)V", $ABSTRACT},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", "(TS;)Lcom/sun/tools/javac/util/List<TT;>;", $ABSTRACT},
	{}
};

$InnerClassInfo _Analyzer$StatementAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer", "com.sun.tools.javac.comp.Analyzer", "StatementAnalyzer", $ABSTRACT},
	{}
};

$ClassInfo _Analyzer$StatementAnalyzer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer",
	"java.lang.Object",
	nullptr,
	_Analyzer$StatementAnalyzer_FieldInfo_,
	_Analyzer$StatementAnalyzer_MethodInfo_,
	"<S:Lcom/sun/tools/javac/tree/JCTree;T:Lcom/sun/tools/javac/tree/JCTree;>Ljava/lang/Object;",
	nullptr,
	_Analyzer$StatementAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$StatementAnalyzer($Class* clazz) {
	return $of($alloc(Analyzer$StatementAnalyzer));
}

void Analyzer$StatementAnalyzer::init$($Analyzer* this$0, $Analyzer$AnalyzerMode* mode, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$set(this, mode, mode);
	$set(this, tag, tag);
}

bool Analyzer$StatementAnalyzer::isEnabled() {
	return $nc(this->this$0->analyzerModes)->contains(this->mode);
}

Analyzer$StatementAnalyzer::Analyzer$StatementAnalyzer() {
}

$Class* Analyzer$StatementAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Analyzer$StatementAnalyzer, name, initialize, &_Analyzer$StatementAnalyzer_ClassInfo_, allocate$Analyzer$StatementAnalyzer);
	return class$;
}

$Class* Analyzer$StatementAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com