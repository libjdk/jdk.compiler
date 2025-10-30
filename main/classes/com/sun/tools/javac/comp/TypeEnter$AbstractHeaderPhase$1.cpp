#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$1.h>

#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnter$AbstractHeaderPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase;
using $TypeEnter$AbstractHeaderPhase$Synthesizer = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase$Synthesizer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
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

$FieldInfo _TypeEnter$AbstractHeaderPhase$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$1, this$1)},
	{"val$tree", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$1, val$tree)},
	{"val$interfaceExpected", "Z", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$1, val$interfaceExpected)},
	{"val$env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$1, val$env)},
	{"modelType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(TypeEnter$AbstractHeaderPhase$1, modelType)},
	{}
};

$MethodInfo _TypeEnter$AbstractHeaderPhase$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env;ZLcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, 0, $method(static_cast<void(TypeEnter$AbstractHeaderPhase$1::*)($TypeEnter$AbstractHeaderPhase*,$Type*,$Symbol$TypeSymbol*,$Env*,bool,$JCTree$JCExpression*)>(&TypeEnter$AbstractHeaderPhase$1::init$))},
	{"getModelType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TypeEnter$AbstractHeaderPhase$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase",
	"modelMissingTypes",
	"(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _TypeEnter$AbstractHeaderPhase$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$AbstractHeaderPhase$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$1",
	"com.sun.tools.javac.code.Type$ErrorType",
	nullptr,
	_TypeEnter$AbstractHeaderPhase$1_FieldInfo_,
	_TypeEnter$AbstractHeaderPhase$1_MethodInfo_,
	nullptr,
	&_TypeEnter$AbstractHeaderPhase$1_EnclosingMethodInfo_,
	_TypeEnter$AbstractHeaderPhase$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$AbstractHeaderPhase$1($Class* clazz) {
	return $of($alloc(TypeEnter$AbstractHeaderPhase$1));
}

void TypeEnter$AbstractHeaderPhase$1::init$($TypeEnter$AbstractHeaderPhase* this$1, $Type* originalType, $Symbol$TypeSymbol* tsym, $Env* val$env, bool val$interfaceExpected, $JCTree$JCExpression* val$tree) {
	$set(this, this$1, this$1);
	$set(this, val$env, val$env);
	this->val$interfaceExpected = val$interfaceExpected;
	$set(this, val$tree, val$tree);
	$Type$ErrorType::init$(originalType, tsym);
}

$Type* TypeEnter$AbstractHeaderPhase$1::getModelType() {
	$useLocalCurrentObjectStackCache();
	if (this->modelType == nullptr) {
		$set(this, modelType, $$new($TypeEnter$AbstractHeaderPhase$Synthesizer, this->this$1, $nc($nc(this->val$env)->toplevel)->modle, $(getOriginalType()), this->val$interfaceExpected)->visit(static_cast<$JCTree*>(this->val$tree)));
	}
	return this->modelType;
}

TypeEnter$AbstractHeaderPhase$1::TypeEnter$AbstractHeaderPhase$1() {
}

$Class* TypeEnter$AbstractHeaderPhase$1::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$AbstractHeaderPhase$1, name, initialize, &_TypeEnter$AbstractHeaderPhase$1_ClassInfo_, allocate$TypeEnter$AbstractHeaderPhase$1);
	return class$;
}

$Class* TypeEnter$AbstractHeaderPhase$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com