#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>

#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef ERROR
#undef VARDEF

using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$StatementAnalyzer = ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0 : public $Predicate {
	$class(Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Analyzer$RewritingContext* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* d) override {
		 return $nc(inst$)->lambda$diagHandler$0($cast($JCDiagnostic, d));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0>());
	}
	Analyzer$RewritingContext* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0, inst$)},
	{}
};
$MethodInfo Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::*)(Analyzer$RewritingContext*)>(&Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::load$($String* name, bool initialize) {
	$loadClass(Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::class$ = nullptr;

$FieldInfo _Analyzer$RewritingContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$RewritingContext, this$0)},
	{"originalTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Analyzer$RewritingContext, originalTree)},
	{"oldTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Analyzer$RewritingContext, oldTree)},
	{"replacement", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Analyzer$RewritingContext, replacement)},
	{"erroneous", "Z", nullptr, 0, $field(Analyzer$RewritingContext, erroneous)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(Analyzer$RewritingContext, env)},
	{"analyzer", "Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer;", "Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;>;", 0, $field(Analyzer$RewritingContext, analyzer)},
	{}
};

$MethodInfo _Analyzer$RewritingContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $method(static_cast<void(Analyzer$RewritingContext::*)($Analyzer*,$JCTree*,$JCTree*,$JCTree*,$Analyzer$StatementAnalyzer*,$Env*)>(&Analyzer$RewritingContext::init$))},
	{"diagHandler", "()Lcom/sun/tools/javac/util/Log$DeferredDiagnosticHandler;", nullptr, 0},
	{"lambda$diagHandler$0", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Analyzer$RewritingContext::*)($JCDiagnostic*)>(&Analyzer$RewritingContext::lambda$diagHandler$0))},
	{}
};

$InnerClassInfo _Analyzer$RewritingContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$RewritingContext", "com.sun.tools.javac.comp.Analyzer", "RewritingContext", 0},
	{}
};

$ClassInfo _Analyzer$RewritingContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$RewritingContext",
	"java.lang.Object",
	nullptr,
	_Analyzer$RewritingContext_FieldInfo_,
	_Analyzer$RewritingContext_MethodInfo_,
	nullptr,
	nullptr,
	_Analyzer$RewritingContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$RewritingContext($Class* clazz) {
	return $of($alloc(Analyzer$RewritingContext));
}

void Analyzer$RewritingContext::init$($Analyzer* this$0, $JCTree* originalTree, $JCTree* oldTree, $JCTree* replacement, $Analyzer$StatementAnalyzer* analyzer, $Env* env) {
	$set(this, this$0, this$0);
	$set(this, originalTree, originalTree);
	$set(this, oldTree, oldTree);
	$set(this, replacement, replacement);
	$set(this, analyzer, analyzer);
	$set(this, env, $nc(this$0->attr)->copyEnv(env));
	$init($JCTree$Tag);
	if ($nc(originalTree)->hasTag($JCTree$Tag::VARDEF)) {
		$nc($nc(($cast($AttrContext, $nc(this->env)->info)))->scope)->remove($nc(($cast($JCTree$JCVariableDecl, originalTree)))->sym);
	}
}

$Log$DeferredDiagnosticHandler* Analyzer$RewritingContext::diagHandler() {
	return $new($Log$DeferredDiagnosticHandler, this->this$0->log, static_cast<$Predicate*>($$new(Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0, this)));
}

bool Analyzer$RewritingContext::lambda$diagHandler$0($JCDiagnostic* d) {
	$init($JCDiagnostic$DiagnosticType);
	if ($nc(d)->getType() == $JCDiagnostic$DiagnosticType::ERROR) {
		this->erroneous = true;
	}
	return true;
}

Analyzer$RewritingContext::Analyzer$RewritingContext() {
}

$Class* Analyzer$RewritingContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::classInfo$.name)) {
			return Analyzer$RewritingContext$$Lambda$lambda$diagHandler$0::load$(name, initialize);
		}
	}
	$loadClass(Analyzer$RewritingContext, name, initialize, &_Analyzer$RewritingContext_ClassInfo_, allocate$Analyzer$RewritingContext);
	return class$;
}

$Class* Analyzer$RewritingContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com