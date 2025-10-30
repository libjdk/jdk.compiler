#include <com/sun/tools/javac/tree/JCTree$JCCase.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/CaseTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CASE
#undef RULE
#undef STATEMENT

using $CaseTree = ::com::sun::source::tree::CaseTree;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $1List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class JCTree$JCCase$$Lambda$lambda$getExpressions$0 : public $Predicate {
	$class(JCTree$JCCase$$Lambda$lambda$getExpressions$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p) override {
		 return JCTree$JCCase::lambda$getExpressions$0($cast($JCTree$JCCaseLabel, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JCTree$JCCase$$Lambda$lambda$getExpressions$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JCTree$JCCase$$Lambda$lambda$getExpressions$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCCase$$Lambda$lambda$getExpressions$0::*)()>(&JCTree$JCCase$$Lambda$lambda$getExpressions$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JCTree$JCCase$$Lambda$lambda$getExpressions$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.JCTree$JCCase$$Lambda$lambda$getExpressions$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JCTree$JCCase$$Lambda$lambda$getExpressions$0::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCCase$$Lambda$lambda$getExpressions$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JCTree$JCCase$$Lambda$lambda$getExpressions$0::class$ = nullptr;

class JCTree$JCCase$$Lambda$lambda$getExpressions$1$1 : public $Function {
	$class(JCTree$JCCase$$Lambda$lambda$getExpressions$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* p) override {
		 return $of(JCTree$JCCase::lambda$getExpressions$1($cast($JCTree$JCCaseLabel, p)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JCTree$JCCase$$Lambda$lambda$getExpressions$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JCTree$JCCase$$Lambda$lambda$getExpressions$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCCase$$Lambda$lambda$getExpressions$1$1::*)()>(&JCTree$JCCase$$Lambda$lambda$getExpressions$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JCTree$JCCase$$Lambda$lambda$getExpressions$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.JCTree$JCCase$$Lambda$lambda$getExpressions$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JCTree$JCCase$$Lambda$lambda$getExpressions$1$1::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCCase$$Lambda$lambda$getExpressions$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JCTree$JCCase$$Lambda$lambda$getExpressions$1$1::class$ = nullptr;

$CompoundAttribute _JCTree$JCCase_MethodAnnotations_getExpression5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _JCTree$JCCase_FieldInfo_[] = {
	{"STATEMENT", "Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JCTree$JCCase, STATEMENT)},
	{"RULE", "Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JCTree$JCCase, RULE)},
	{"caseKind", "Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC | $FINAL, $field(JCTree$JCCase, caseKind)},
	{"labels", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;>;", $PUBLIC, $field(JCTree$JCCase, labels)},
	{"stats", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PUBLIC, $field(JCTree$JCCase, stats)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCCase, body)},
	{"completesNormally", "Z", nullptr, $PUBLIC, $field(JCTree$JCCase, completesNormally)},
	{}
};

$MethodInfo _JCTree$JCCase_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/source/tree/CaseTree$CaseKind;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;)V", "(Lcom/sun/source/tree/CaseTree$CaseKind;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree;)V", $PROTECTED, $method(static_cast<void(JCTree$JCCase::*)($CaseTree$CaseKind*,$List*,$List*,$JCTree*)>(&JCTree$JCCase::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getCaseKind", "()Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JCTree$JCCase_MethodAnnotations_getExpression5},
	{"getExpressions", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getLabels", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;>;", $PUBLIC},
	{"getStatements", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"lambda$getExpressions$0", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&JCTree$JCCase::lambda$getExpressions$0))},
	{"lambda$getExpressions$1", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCExpression*(*)($JCTree$JCCaseLabel*)>(&JCTree$JCCase::lambda$getExpressions$1))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCCase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCCase", "com.sun.tools.javac.tree.JCTree", "JCCase", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCCase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCCase",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.CaseTree",
	_JCTree$JCCase_FieldInfo_,
	_JCTree$JCCase_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCCase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCCase($Class* clazz) {
	return $of($alloc(JCTree$JCCase));
}

$String* JCTree$JCCase::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCCase::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCCase::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCCase::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCCase::finalize() {
	this->$JCTree$JCStatement::finalize();
}

$CaseTree$CaseKind* JCTree$JCCase::STATEMENT = nullptr;
$CaseTree$CaseKind* JCTree$JCCase::RULE = nullptr;

void JCTree$JCCase::init$($CaseTree$CaseKind* caseKind, $List* labels, $List* stats, $JCTree* body) {
	$JCTree$JCStatement::init$();
	$Assert::checkNonNull(labels);
	$Assert::check($nc(labels)->isEmpty() || $nc(labels)->head != nullptr);
	$set(this, caseKind, caseKind);
	$set(this, labels, labels);
	$set(this, stats, stats);
	$set(this, body, body);
}

void JCTree$JCCase::accept($JCTree$Visitor* v) {
	$nc(v)->visitCase(this);
}

$Tree$Kind* JCTree$JCCase::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::CASE;
}

$ExpressionTree* JCTree$JCCase::getExpression() {
	return $cast($JCTree$JCExpression, $nc($($cast($List, getExpressions())))->head);
}

$1List* JCTree$JCCase::getExpressions() {
	$useLocalCurrentObjectStackCache();
	return $cast($List, $nc($($nc($($nc($($nc(this->labels)->stream()))->filter(static_cast<$Predicate*>($$new(JCTree$JCCase$$Lambda$lambda$getExpressions$0)))))->map(static_cast<$Function*>($$new(JCTree$JCCase$$Lambda$lambda$getExpressions$1$1)))))->collect($($List::collector())));
}

$1List* JCTree$JCCase::getLabels() {
	return this->labels;
}

$1List* JCTree$JCCase::getStatements() {
	$init($CaseTree$CaseKind);
	return (this->caseKind == $CaseTree$CaseKind::STATEMENT ? this->stats : ($List*)nullptr);
}

$JCTree* JCTree$JCCase::getBody() {
	return this->body;
}

$CaseTree$CaseKind* JCTree$JCCase::getCaseKind() {
	return this->caseKind;
}

$Object* JCTree$JCCase::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitCase(this, d));
}

$JCTree$Tag* JCTree$JCCase::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::CASE;
}

$JCTree$JCExpression* JCTree$JCCase::lambda$getExpressions$1($JCTree$JCCaseLabel* p) {
	$init(JCTree$JCCase);
	return $cast($JCTree$JCExpression, p);
}

bool JCTree$JCCase::lambda$getExpressions$0($JCTree$JCCaseLabel* p) {
	$init(JCTree$JCCase);
	return $instanceOf($JCTree$JCExpression, p);
}

void clinit$JCTree$JCCase($Class* class$) {
	$init($CaseTree$CaseKind);
	$assignStatic(JCTree$JCCase::STATEMENT, $CaseTree$CaseKind::STATEMENT);
	$assignStatic(JCTree$JCCase::RULE, $CaseTree$CaseKind::RULE);
}

JCTree$JCCase::JCTree$JCCase() {
}

$Class* JCTree$JCCase::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JCTree$JCCase$$Lambda$lambda$getExpressions$0::classInfo$.name)) {
			return JCTree$JCCase$$Lambda$lambda$getExpressions$0::load$(name, initialize);
		}
		if (name->equals(JCTree$JCCase$$Lambda$lambda$getExpressions$1$1::classInfo$.name)) {
			return JCTree$JCCase$$Lambda$lambda$getExpressions$1$1::load$(name, initialize);
		}
	}
	$loadClass(JCTree$JCCase, name, initialize, &_JCTree$JCCase_ClassInfo_, clinit$JCTree$JCCase, allocate$JCTree$JCCase);
	return class$;
}

$Class* JCTree$JCCase::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com