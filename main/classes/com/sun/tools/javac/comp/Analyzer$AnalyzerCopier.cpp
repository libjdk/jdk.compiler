#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>

#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <com/sun/source/tree/NewClassTree.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef IMPLICIT
#undef NULLCHK

using $LambdaExpressionTree = ::com::sun::source::tree::LambdaExpressionTree;
using $NewClassTree = ::com::sun::source::tree::NewClassTree;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0 : public $Consumer {
	$class(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* p) override {
		Analyzer$AnalyzerCopier::lambda$visitLambdaExpression$0($cast($JCTree$JCVariableDecl, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::*)()>(&Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::load$($String* name, bool initialize) {
	$loadClass(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::class$ = nullptr;

$FieldInfo _Analyzer$AnalyzerCopier_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$AnalyzerCopier, this$0)},
	{}
};

$MethodInfo _Analyzer$AnalyzerCopier_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, $PUBLIC, $method(static_cast<void(Analyzer$AnalyzerCopier::*)($Analyzer*)>(&Analyzer$AnalyzerCopier::init$))},
	{"lambda$visitLambdaExpression$0", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JCTree$JCVariableDecl*)>(&Analyzer$AnalyzerCopier::lambda$visitLambdaExpression$0))},
	{"visitLambdaExpression", "(Lcom/sun/source/tree/LambdaExpressionTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"visitLambdaExpression", "(Lcom/sun/source/tree/LambdaExpressionTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Analyzer$AnalyzerCopier_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier", "com.sun.tools.javac.comp.Analyzer", "AnalyzerCopier", 0},
	{}
};

$ClassInfo _Analyzer$AnalyzerCopier_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier",
	"com.sun.tools.javac.tree.TreeCopier",
	nullptr,
	_Analyzer$AnalyzerCopier_FieldInfo_,
	_Analyzer$AnalyzerCopier_MethodInfo_,
	"Lcom/sun/tools/javac/tree/TreeCopier<Ljava/lang/Void;>;",
	nullptr,
	_Analyzer$AnalyzerCopier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$AnalyzerCopier($Class* clazz) {
	return $of($alloc(Analyzer$AnalyzerCopier));
}

void Analyzer$AnalyzerCopier::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
	$TreeCopier::init$(this$0->make);
}

$JCTree* Analyzer$AnalyzerCopier::visitLambdaExpression($LambdaExpressionTree* node, $Void* _unused) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCLambda, oldLambda, $cast($JCTree$JCLambda, node));
	$var($JCTree$JCLambda, newLambda, $cast($JCTree$JCLambda, $cast($JCTree, $TreeCopier::visitLambdaExpression(node, _unused))));
	$init($JCTree$JCLambda$ParameterKind);
	if ($nc(oldLambda)->paramKind == $JCTree$JCLambda$ParameterKind::IMPLICIT) {
		$set($nc(newLambda), paramKind, $JCTree$JCLambda$ParameterKind::IMPLICIT);
		$nc(newLambda->params)->forEach(static_cast<$Consumer*>($$new(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0)));
	}
	return newLambda;
}

$JCTree* Analyzer$AnalyzerCopier::visitNewClass($NewClassTree* node, $Void* aVoid) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCNewClass, oldNewClazz, $cast($JCTree$JCNewClass, node));
	$var($JCTree$JCNewClass, newNewClazz, $cast($JCTree$JCNewClass, $cast($JCTree, $TreeCopier::visitNewClass(node, aVoid))));
	bool var$0 = !$nc($nc(oldNewClazz)->args)->isEmpty();
	$init($JCTree$Tag);
	if (var$0 && $nc(($cast($JCTree$JCExpression, $nc(oldNewClazz->args)->head)))->hasTag($JCTree$Tag::NULLCHK)) {
		$set($nc(newNewClazz), encl, $nc(($cast($JCTree$JCUnary, $nc(newNewClazz->args)->head)))->arg);
		$set(newNewClazz, args, $nc(newNewClazz->args)->tail);
	}
	return newNewClazz;
}

$Object* Analyzer$AnalyzerCopier::visitLambdaExpression($LambdaExpressionTree* node, Object$* _unused) {
	return $of(this->visitLambdaExpression(node, $cast($Void, _unused)));
}

$Object* Analyzer$AnalyzerCopier::visitNewClass($NewClassTree* node, Object$* aVoid) {
	return $of(this->visitNewClass(node, $cast($Void, aVoid)));
}

void Analyzer$AnalyzerCopier::lambda$visitLambdaExpression$0($JCTree$JCVariableDecl* p) {
	$init(Analyzer$AnalyzerCopier);
	$set($nc(p), vartype, nullptr);
}

Analyzer$AnalyzerCopier::Analyzer$AnalyzerCopier() {
}

$Class* Analyzer$AnalyzerCopier::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::classInfo$.name)) {
			return Analyzer$AnalyzerCopier$$Lambda$lambda$visitLambdaExpression$0::load$(name, initialize);
		}
	}
	$loadClass(Analyzer$AnalyzerCopier, name, initialize, &_Analyzer$AnalyzerCopier_ClassInfo_, allocate$Analyzer$AnalyzerCopier);
	return class$;
}

$Class* Analyzer$AnalyzerCopier::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com