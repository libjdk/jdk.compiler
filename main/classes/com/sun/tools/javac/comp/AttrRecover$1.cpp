#include <com/sun/tools/javac/comp/AttrRecover$1.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/AttrRecover$1$1.h>
#include <com/sun/tools/javac/comp/AttrRecover.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $AttrRecover = ::com::sun::tools::javac::comp::AttrRecover;
using $AttrRecover$1$1 = ::com::sun::tools::javac::comp::AttrRecover$1$1;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class AttrRecover$1$$Lambda$lambda$visitReturn$0 : public $Runnable {
	$class(AttrRecover$1$$Lambda$lambda$visitReturn$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(AttrRecover$1* inst, $JCTree$JCLambda* lambda, $JCTree$JCErroneous* err, $JCTree$JCReturn* tree) {
		$set(this, inst$, inst);
		$set(this, lambda, lambda);
		$set(this, err, err);
		$set(this, tree, tree);
	}
	virtual void run() override {
		$nc(inst$)->lambda$visitReturn$0(lambda, err, tree);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AttrRecover$1$$Lambda$lambda$visitReturn$0>());
	}
	AttrRecover$1* inst$ = nullptr;
	$JCTree$JCLambda* lambda = nullptr;
	$JCTree$JCErroneous* err = nullptr;
	$JCTree$JCReturn* tree = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AttrRecover$1$$Lambda$lambda$visitReturn$0::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AttrRecover$1$$Lambda$lambda$visitReturn$0, inst$)},
	{"lambda", "Lcom/sun/tools/javac/tree/JCTree$JCLambda;", nullptr, $PUBLIC, $field(AttrRecover$1$$Lambda$lambda$visitReturn$0, lambda)},
	{"err", "Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", nullptr, $PUBLIC, $field(AttrRecover$1$$Lambda$lambda$visitReturn$0, err)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCReturn;", nullptr, $PUBLIC, $field(AttrRecover$1$$Lambda$lambda$visitReturn$0, tree)},
	{}
};
$MethodInfo AttrRecover$1$$Lambda$lambda$visitReturn$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/AttrRecover$1;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/JCTree$JCErroneous;Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $method(static_cast<void(AttrRecover$1$$Lambda$lambda$visitReturn$0::*)(AttrRecover$1*,$JCTree$JCLambda*,$JCTree$JCErroneous*,$JCTree$JCReturn*)>(&AttrRecover$1$$Lambda$lambda$visitReturn$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AttrRecover$1$$Lambda$lambda$visitReturn$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.AttrRecover$1$$Lambda$lambda$visitReturn$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* AttrRecover$1$$Lambda$lambda$visitReturn$0::load$($String* name, bool initialize) {
	$loadClass(AttrRecover$1$$Lambda$lambda$visitReturn$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AttrRecover$1$$Lambda$lambda$visitReturn$0::class$ = nullptr;

class AttrRecover$1$$Lambda$lambda$visitReturn$1$1 : public $Runnable {
	$class(AttrRecover$1$$Lambda$lambda$visitReturn$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JCTree$JCReturn* tree) {
		$set(this, tree, tree);
	}
	virtual void run() override {
		AttrRecover$1::lambda$visitReturn$1(tree);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AttrRecover$1$$Lambda$lambda$visitReturn$1$1>());
	}
	$JCTree$JCReturn* tree = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AttrRecover$1$$Lambda$lambda$visitReturn$1$1::fieldInfos[2] = {
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCReturn;", nullptr, $PUBLIC, $field(AttrRecover$1$$Lambda$lambda$visitReturn$1$1, tree)},
	{}
};
$MethodInfo AttrRecover$1$$Lambda$lambda$visitReturn$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $method(static_cast<void(AttrRecover$1$$Lambda$lambda$visitReturn$1$1::*)($JCTree$JCReturn*)>(&AttrRecover$1$$Lambda$lambda$visitReturn$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AttrRecover$1$$Lambda$lambda$visitReturn$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.AttrRecover$1$$Lambda$lambda$visitReturn$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* AttrRecover$1$$Lambda$lambda$visitReturn$1$1::load$($String* name, bool initialize) {
	$loadClass(AttrRecover$1$$Lambda$lambda$visitReturn$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AttrRecover$1$$Lambda$lambda$visitReturn$1$1::class$ = nullptr;

$FieldInfo _AttrRecover$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/AttrRecover;", nullptr, $FINAL | $SYNTHETIC, $field(AttrRecover$1, this$0)},
	{"val$lambda", "Lcom/sun/tools/javac/tree/JCTree$JCLambda;", nullptr, $FINAL | $SYNTHETIC, $field(AttrRecover$1, val$lambda)},
	{"val$rollback", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(AttrRecover$1, val$rollback)},
	{"val$voidCompatible", "Z", nullptr, $FINAL | $SYNTHETIC, $field(AttrRecover$1, val$voidCompatible)},
	{}
};

$MethodInfo _AttrRecover$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/AttrRecover;ZLcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, 0, $method(static_cast<void(AttrRecover$1::*)($AttrRecover*,bool,$ListBuffer*,$JCTree$JCLambda*)>(&AttrRecover$1::init$))},
	{"lambda$visitReturn$0", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/JCTree$JCErroneous;Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(AttrRecover$1::*)($JCTree$JCLambda*,$JCTree$JCErroneous*,$JCTree$JCReturn*)>(&AttrRecover$1::lambda$visitReturn$0))},
	{"lambda$visitReturn$1", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JCTree$JCReturn*)>(&AttrRecover$1::lambda$visitReturn$1))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AttrRecover$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.AttrRecover",
	"doRecovery",
	"()V"
};

$InnerClassInfo _AttrRecover$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.AttrRecover$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.AttrRecover$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AttrRecover$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.AttrRecover$1",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_AttrRecover$1_FieldInfo_,
	_AttrRecover$1_MethodInfo_,
	nullptr,
	&_AttrRecover$1_EnclosingMethodInfo_,
	_AttrRecover$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.AttrRecover"
};

$Object* allocate$AttrRecover$1($Class* clazz) {
	return $of($alloc(AttrRecover$1));
}

void AttrRecover$1::init$($AttrRecover* this$0, bool val$voidCompatible, $ListBuffer* val$rollback, $JCTree$JCLambda* val$lambda) {
	$set(this, this$0, this$0);
	this->val$voidCompatible = val$voidCompatible;
	$set(this, val$rollback, val$rollback);
	$set(this, val$lambda, val$lambda);
	$TreeTranslator::init$();
}

void AttrRecover$1::visitReturn($JCTree$JCReturn* tree) {
	$useLocalCurrentObjectStackCache();
	$set(this, result, tree);
	if (this->val$voidCompatible) {
		if ($nc(tree)->expr != nullptr) {
			$var($JCTree$JCErroneous, err, $nc(this->this$0->make)->Erroneous($($List::of(tree))));
			$set(this, result, err);
			$nc(this->val$rollback)->append(static_cast<$Runnable*>($$new(AttrRecover$1$$Lambda$lambda$visitReturn$0, this, this->val$lambda, err, tree)));
		}
	} else if ($nc(tree)->expr == nullptr) {
		$set(tree, expr, $nc($($nc(this->this$0->make)->Erroneous()))->setType($nc(this->this$0->syms)->errType));
		$nc(this->val$rollback)->append(static_cast<$Runnable*>($$new(AttrRecover$1$$Lambda$lambda$visitReturn$1$1, tree)));
	}
}

void AttrRecover$1::visitLambda($JCTree$JCLambda* tree) {
}

void AttrRecover$1::visitClassDef($JCTree$JCClassDecl* tree) {
}

void AttrRecover$1::lambda$visitReturn$1($JCTree$JCReturn* tree) {
	$init(AttrRecover$1);
	$set($nc(tree), expr, nullptr);
}

void AttrRecover$1::lambda$visitReturn$0($JCTree$JCLambda* lambda, $JCTree$JCErroneous* err, $JCTree$JCReturn* tree) {
	$set($nc(lambda), body, $$new($AttrRecover$1$1, this, err, tree)->translate(lambda->body));
}

AttrRecover$1::AttrRecover$1() {
}

$Class* AttrRecover$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AttrRecover$1$$Lambda$lambda$visitReturn$0::classInfo$.name)) {
			return AttrRecover$1$$Lambda$lambda$visitReturn$0::load$(name, initialize);
		}
		if (name->equals(AttrRecover$1$$Lambda$lambda$visitReturn$1$1::classInfo$.name)) {
			return AttrRecover$1$$Lambda$lambda$visitReturn$1$1::load$(name, initialize);
		}
	}
	$loadClass(AttrRecover$1, name, initialize, &_AttrRecover$1_ClassInfo_, allocate$AttrRecover$1);
	return class$;
}

$Class* AttrRecover$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com