#include <com/sun/tools/javac/comp/ArgumentAttr.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$1.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ConditionalType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ParensType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ResolvedConstructorType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ResolvedMethodType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$UniquePos.h>
#include <com/sun/tools/javac/comp/Attr$MethodAttrInfo.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

#undef ARRAY
#undef DEFERRED
#undef ERROR
#undef EXPLICIT
#undef FORALL
#undef OVERLOADED
#undef SPECULATIVE
#undef UNOVERLOADED
#undef VARARGS

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ArgumentAttr$1 = ::com::sun::tools::javac::comp::ArgumentAttr$1;
using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $ArgumentAttr$ConditionalType = ::com::sun::tools::javac::comp::ArgumentAttr$ConditionalType;
using $ArgumentAttr$ExplicitLambdaType = ::com::sun::tools::javac::comp::ArgumentAttr$ExplicitLambdaType;
using $ArgumentAttr$LocalCacheContext = ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext;
using $ArgumentAttr$ParensType = ::com::sun::tools::javac::comp::ArgumentAttr$ParensType;
using $ArgumentAttr$ResolvedConstructorType = ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedConstructorType;
using $ArgumentAttr$ResolvedMethodType = ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMethodType;
using $ArgumentAttr$SwitchExpressionType = ::com::sun::tools::javac::comp::ArgumentAttr$SwitchExpressionType;
using $ArgumentAttr$UniquePos = ::com::sun::tools::javac::comp::ArgumentAttr$UniquePos;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$MethodAttrInfo = ::com::sun::tools::javac::comp::Attr$MethodAttrInfo;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttributionMode = ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$OverloadKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class ArgumentAttr$$Lambda$lambda$processArg$0 : public $Supplier {
	$class(ArgumentAttr$$Lambda$lambda$processArg$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ArgumentAttr* inst, $JCTree$JCExpression* that, $ArgumentAttr$UniquePos* pos, $Function* argumentTypeFactory) {
		$set(this, inst$, inst);
		$set(this, that, that);
		$set(this, pos, pos);
		$set(this, argumentTypeFactory, argumentTypeFactory);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$processArg$0(that, pos, argumentTypeFactory));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$$Lambda$lambda$processArg$0>());
	}
	ArgumentAttr* inst$ = nullptr;
	$JCTree$JCExpression* that = nullptr;
	$ArgumentAttr$UniquePos* pos = nullptr;
	$Function* argumentTypeFactory = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$$Lambda$lambda$processArg$0::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$processArg$0, inst$)},
	{"that", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$processArg$0, that)},
	{"pos", "Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$processArg$0, pos)},
	{"argumentTypeFactory", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$processArg$0, argumentTypeFactory)},
	{}
};
$MethodInfo ArgumentAttr$$Lambda$lambda$processArg$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$$Lambda$lambda$processArg$0::*)(ArgumentAttr*,$JCTree$JCExpression*,$ArgumentAttr$UniquePos*,$Function*)>(&ArgumentAttr$$Lambda$lambda$processArg$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$$Lambda$lambda$processArg$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$$Lambda$lambda$processArg$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$$Lambda$lambda$processArg$0::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$$Lambda$lambda$processArg$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$$Lambda$lambda$processArg$0::class$ = nullptr;

class ArgumentAttr$$Lambda$lambda$visitParens$1$1 : public $Function {
	$class(ArgumentAttr$$Lambda$lambda$visitParens$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(ArgumentAttr* inst, $JCTree$JCParens* that) {
		$set(this, inst$, inst);
		$set(this, that, that);
	}
	virtual $Object* apply(Object$* speculativeTree) override {
		 return $of($nc(inst$)->lambda$visitParens$1(that, $cast($JCTree$JCParens, speculativeTree)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$$Lambda$lambda$visitParens$1$1>());
	}
	ArgumentAttr* inst$ = nullptr;
	$JCTree$JCParens* that = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$$Lambda$lambda$visitParens$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitParens$1$1, inst$)},
	{"that", "Lcom/sun/tools/javac/tree/JCTree$JCParens;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitParens$1$1, that)},
	{}
};
$MethodInfo ArgumentAttr$$Lambda$lambda$visitParens$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$$Lambda$lambda$visitParens$1$1::*)(ArgumentAttr*,$JCTree$JCParens*)>(&ArgumentAttr$$Lambda$lambda$visitParens$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$$Lambda$lambda$visitParens$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$$Lambda$lambda$visitParens$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$$Lambda$lambda$visitParens$1$1::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$$Lambda$lambda$visitParens$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$$Lambda$lambda$visitParens$1$1::class$ = nullptr;

class ArgumentAttr$$Lambda$lambda$visitConditional$2$2 : public $Function {
	$class(ArgumentAttr$$Lambda$lambda$visitConditional$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$(ArgumentAttr* inst, $JCTree$JCConditional* that) {
		$set(this, inst$, inst);
		$set(this, that, that);
	}
	virtual $Object* apply(Object$* speculativeTree) override {
		 return $of($nc(inst$)->lambda$visitConditional$2(that, $cast($JCTree$JCConditional, speculativeTree)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$$Lambda$lambda$visitConditional$2$2>());
	}
	ArgumentAttr* inst$ = nullptr;
	$JCTree$JCConditional* that = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$$Lambda$lambda$visitConditional$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitConditional$2$2, inst$)},
	{"that", "Lcom/sun/tools/javac/tree/JCTree$JCConditional;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitConditional$2$2, that)},
	{}
};
$MethodInfo ArgumentAttr$$Lambda$lambda$visitConditional$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$$Lambda$lambda$visitConditional$2$2::*)(ArgumentAttr*,$JCTree$JCConditional*)>(&ArgumentAttr$$Lambda$lambda$visitConditional$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$$Lambda$lambda$visitConditional$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$$Lambda$lambda$visitConditional$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$$Lambda$lambda$visitConditional$2$2::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$$Lambda$lambda$visitConditional$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$$Lambda$lambda$visitConditional$2$2::class$ = nullptr;

class ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3 : public $Function {
	$class(ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$(ArgumentAttr* inst, $JCTree$JCSwitchExpression* that) {
		$set(this, inst$, inst);
		$set(this, that, that);
	}
	virtual $Object* apply(Object$* speculativeTree) override {
		 return $of($nc(inst$)->lambda$visitSwitchExpression$3(that, $cast($JCTree$JCSwitchExpression, speculativeTree)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3>());
	}
	ArgumentAttr* inst$ = nullptr;
	$JCTree$JCSwitchExpression* that = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3, inst$)},
	{"that", "Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3, that)},
	{}
};
$MethodInfo ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::*)(ArgumentAttr*,$JCTree$JCSwitchExpression*)>(&ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::class$ = nullptr;

class ArgumentAttr$$Lambda$lambda$visitLambda$4$4 : public $Supplier {
	$class(ArgumentAttr$$Lambda$lambda$visitLambda$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ArgumentAttr* inst, $JCTree$JCLambda* that) {
		$set(this, inst$, inst);
		$set(this, that, that);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$visitLambda$4(that));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$$Lambda$lambda$visitLambda$4$4>());
	}
	ArgumentAttr* inst$ = nullptr;
	$JCTree$JCLambda* that = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$$Lambda$lambda$visitLambda$4$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitLambda$4$4, inst$)},
	{"that", "Lcom/sun/tools/javac/tree/JCTree$JCLambda;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitLambda$4$4, that)},
	{}
};
$MethodInfo ArgumentAttr$$Lambda$lambda$visitLambda$4$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$$Lambda$lambda$visitLambda$4$4::*)(ArgumentAttr*,$JCTree$JCLambda*)>(&ArgumentAttr$$Lambda$lambda$visitLambda$4$4::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$$Lambda$lambda$visitLambda$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$$Lambda$lambda$visitLambda$4$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$$Lambda$lambda$visitLambda$4$4::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$$Lambda$lambda$visitLambda$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$$Lambda$lambda$visitLambda$4$4::class$ = nullptr;

class ArgumentAttr$$Lambda$lambda$visitApply$5$5 : public $Function {
	$class(ArgumentAttr$$Lambda$lambda$visitApply$5$5, $NO_CLASS_INIT, $Function)
public:
	void init$(ArgumentAttr* inst, $JCTree$JCMethodInvocation* that) {
		$set(this, inst$, inst);
		$set(this, that, that);
	}
	virtual $Object* apply(Object$* speculativeTree) override {
		 return $of($nc(inst$)->lambda$visitApply$5(that, $cast($JCTree$JCMethodInvocation, speculativeTree)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$$Lambda$lambda$visitApply$5$5>());
	}
	ArgumentAttr* inst$ = nullptr;
	$JCTree$JCMethodInvocation* that = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$$Lambda$lambda$visitApply$5$5::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitApply$5$5, inst$)},
	{"that", "Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitApply$5$5, that)},
	{}
};
$MethodInfo ArgumentAttr$$Lambda$lambda$visitApply$5$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$$Lambda$lambda$visitApply$5$5::*)(ArgumentAttr*,$JCTree$JCMethodInvocation*)>(&ArgumentAttr$$Lambda$lambda$visitApply$5$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$$Lambda$lambda$visitApply$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$$Lambda$lambda$visitApply$5$5",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$$Lambda$lambda$visitApply$5$5::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$$Lambda$lambda$visitApply$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$$Lambda$lambda$visitApply$5$5::class$ = nullptr;

class ArgumentAttr$$Lambda$lambda$visitNewClass$6$6 : public $Function {
	$class(ArgumentAttr$$Lambda$lambda$visitNewClass$6$6, $NO_CLASS_INIT, $Function)
public:
	void init$(ArgumentAttr* inst, $JCTree$JCNewClass* that) {
		$set(this, inst$, inst);
		$set(this, that, that);
	}
	virtual $Object* apply(Object$* speculativeTree) override {
		 return $of($nc(inst$)->lambda$visitNewClass$6(that, $cast($JCTree$JCNewClass, speculativeTree)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$$Lambda$lambda$visitNewClass$6$6>());
	}
	ArgumentAttr* inst$ = nullptr;
	$JCTree$JCNewClass* that = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitNewClass$6$6, inst$)},
	{"that", "Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", nullptr, $PUBLIC, $field(ArgumentAttr$$Lambda$lambda$visitNewClass$6$6, that)},
	{}
};
$MethodInfo ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::*)(ArgumentAttr*,$JCTree$JCNewClass*)>(&ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$$Lambda$lambda$visitNewClass$6$6",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$$Lambda$lambda$visitNewClass$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::class$ = nullptr;

$FieldInfo _ArgumentAttr_FieldInfo_[] = {
	{"methodAttrKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/ArgumentAttr;>;", $PROTECTED | $STATIC | $FINAL, $staticField(ArgumentAttr, methodAttrKey)},
	{"deferredAttr", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $PRIVATE | $FINAL, $field(ArgumentAttr, deferredAttr)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE | $FINAL, $field(ArgumentAttr, diags)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE | $FINAL, $field(ArgumentAttr, attr)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(ArgumentAttr, syms)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(ArgumentAttr, log)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(ArgumentAttr, env)},
	{"result", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(ArgumentAttr, result)},
	{"argumentTypeCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<*>;>;", 0, $field(ArgumentAttr, argumentTypeCache)},
	{}
};

$MethodInfo _ArgumentAttr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(ArgumentAttr::*)($Context*)>(&ArgumentAttr::init$))},
	{"attribArg", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Type;", 0},
	{"checkSpeculative", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"checkSpeculative", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ArgumentAttr*(*)($Context*)>(&ArgumentAttr::instance))},
	{"lambda$processArg$0", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;Ljava/util/function/Function;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ArgumentAttr$ArgumentType*(ArgumentAttr::*)($JCTree$JCExpression*,$ArgumentAttr$UniquePos*,$Function*)>(&ArgumentAttr::lambda$processArg$0))},
	{"lambda$visitApply$5", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)Lcom/sun/tools/javac/comp/ArgumentAttr$ResolvedMethodType;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ArgumentAttr$ResolvedMethodType*(ArgumentAttr::*)($JCTree$JCMethodInvocation*,$JCTree$JCMethodInvocation*)>(&ArgumentAttr::lambda$visitApply$5))},
	{"lambda$visitConditional$2", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;Lcom/sun/tools/javac/tree/JCTree$JCConditional;)Lcom/sun/tools/javac/comp/ArgumentAttr$ConditionalType;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ArgumentAttr$ConditionalType*(ArgumentAttr::*)($JCTree$JCConditional*,$JCTree$JCConditional*)>(&ArgumentAttr::lambda$visitConditional$2))},
	{"lambda$visitLambda$4", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)Lcom/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ArgumentAttr$ExplicitLambdaType*(ArgumentAttr::*)($JCTree$JCLambda*)>(&ArgumentAttr::lambda$visitLambda$4))},
	{"lambda$visitNewClass$6", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Lcom/sun/tools/javac/comp/ArgumentAttr$ResolvedConstructorType;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ArgumentAttr$ResolvedConstructorType*(ArgumentAttr::*)($JCTree$JCNewClass*,$JCTree$JCNewClass*)>(&ArgumentAttr::lambda$visitNewClass$6))},
	{"lambda$visitParens$1", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;Lcom/sun/tools/javac/tree/JCTree$JCParens;)Lcom/sun/tools/javac/comp/ArgumentAttr$ParensType;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ArgumentAttr$ParensType*(ArgumentAttr::*)($JCTree$JCParens*,$JCTree$JCParens*)>(&ArgumentAttr::lambda$visitParens$1))},
	{"lambda$visitSwitchExpression$3", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)Lcom/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ArgumentAttr$SwitchExpressionType*(ArgumentAttr::*)($JCTree$JCSwitchExpression*,$JCTree$JCSwitchExpression*)>(&ArgumentAttr::lambda$visitSwitchExpression$3))},
	{"processArg", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Ljava/util/function/Function;)V", "<T:Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z:Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<TT;>;>(TT;Ljava/util/function/Function<TT;TZ;>;)V", 0},
	{"processArg", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Ljava/util/function/Supplier;)V", "<T:Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z:Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<TT;>;>(TT;Ljava/util/function/Supplier<TZ;>;)V", 0},
	{"setResult", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"withLocalCacheContext", "()Lcom/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext;", nullptr, 0},
	{}
};

$InnerClassInfo _ArgumentAttr_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.ArgumentAttr$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.ArgumentAttr$UniquePos", "com.sun.tools.javac.comp.ArgumentAttr", "UniquePos", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ResolvedConstructorType", "com.sun.tools.javac.comp.ArgumentAttr", "ResolvedConstructorType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMethodType", "com.sun.tools.javac.comp.ArgumentAttr", "ResolvedMethodType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType", "com.sun.tools.javac.comp.ArgumentAttr", "ResolvedMemberType", $ABSTRACT},
	{"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType", "com.sun.tools.javac.comp.ArgumentAttr", "ExplicitLambdaType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType", "com.sun.tools.javac.comp.ArgumentAttr", "SwitchExpressionType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ConditionalType", "com.sun.tools.javac.comp.ArgumentAttr", "ConditionalType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ParensType", "com.sun.tools.javac.comp.ArgumentAttr", "ParensType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType", "com.sun.tools.javac.comp.ArgumentAttr", "ArgumentType", $ABSTRACT},
	{"com.sun.tools.javac.comp.ArgumentAttr$LocalCacheContext", "com.sun.tools.javac.comp.ArgumentAttr", "LocalCacheContext", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ArgumentAttr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_ArgumentAttr_FieldInfo_,
	_ArgumentAttr_MethodInfo_,
	nullptr,
	nullptr,
	_ArgumentAttr_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr$2,com.sun.tools.javac.comp.ArgumentAttr$UniquePos,com.sun.tools.javac.comp.ArgumentAttr$ResolvedConstructorType,com.sun.tools.javac.comp.ArgumentAttr$ResolvedMethodType,com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType,com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType,com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType$1,com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType,com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType$1,com.sun.tools.javac.comp.ArgumentAttr$ConditionalType,com.sun.tools.javac.comp.ArgumentAttr$ParensType,com.sun.tools.javac.comp.ArgumentAttr$ArgumentType,com.sun.tools.javac.comp.ArgumentAttr$LocalCacheContext,com.sun.tools.javac.comp.ArgumentAttr$1"
};

$Object* allocate$ArgumentAttr($Class* clazz) {
	return $of($alloc(ArgumentAttr));
}

$Context$Key* ArgumentAttr::methodAttrKey = nullptr;

ArgumentAttr* ArgumentAttr::instance($Context* context) {
	$init(ArgumentAttr);
	$var(ArgumentAttr, instance, $cast(ArgumentAttr, $nc(context)->get(ArgumentAttr::methodAttrKey)));
	if (instance == nullptr) {
		$assign(instance, $new(ArgumentAttr, context));
	}
	return instance;
}

void ArgumentAttr::init$($Context* context) {
	$JCTree$Visitor::init$();
	$set(this, argumentTypeCache, $new($LinkedHashMap));
	$nc(context)->put(ArgumentAttr::methodAttrKey, $of(this));
	$set(this, deferredAttr, $DeferredAttr::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, log, $Log::instance(context));
}

void ArgumentAttr::setResult($JCTree$JCExpression* tree, $Type* type) {
	$set(this, result, type);
	$init($DeferredAttr$AttributionMode);
	if ($nc(($cast($AttrContext, $nc(this->env)->info)))->attributionMode == $DeferredAttr$AttributionMode::SPECULATIVE) {
		$set($nc(tree), type, this->result);
	}
}

$Type* ArgumentAttr::checkSpeculative($JCTree* expr, $Attr$ResultInfo* resultInfo) {
	return checkSpeculative(expr, $nc(expr)->type, resultInfo);
}

$Type* ArgumentAttr::checkSpeculative($JCDiagnostic$DiagnosticPosition* pos, $Type* t, $Attr$ResultInfo* resultInfo) {
	$init($TypeTag);
	if ($nc(t)->hasTag($TypeTag::DEFERRED)) {
		return $nc(($cast($DeferredAttr$DeferredType, t)))->check(resultInfo);
	} else {
		return $nc(resultInfo)->check(pos, t);
	}
}

$ArgumentAttr$LocalCacheContext* ArgumentAttr::withLocalCacheContext() {
	return $new($ArgumentAttr$LocalCacheContext, this);
}

$Type* ArgumentAttr::attribArg($JCTree* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->env);
	{
		$var($Throwable, var$0, nullptr);
		$var($Type, var$2, nullptr);
		bool return$1 = false;
		try {
			$set(this, env, env);
			$nc(tree)->accept(this);
			$assign(var$2, this->result);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, env, prevEnv);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ArgumentAttr::visitTree($JCTree* that) {
	$nc(that)->accept(this->attr);
	$set(this, result, $nc(this->attr)->result);
}

void ArgumentAttr::processArg($JCTree$JCExpression* that, $Function* argumentTypeFactory) {
	$useLocalCurrentObjectStackCache();
	$var($ArgumentAttr$UniquePos, pos, $new($ArgumentAttr$UniquePos, this, that));
	processArg(that, static_cast<$Supplier*>($$new(ArgumentAttr$$Lambda$lambda$processArg$0, this, that, pos, argumentTypeFactory)));
}

void ArgumentAttr::processArg($JCTree$JCExpression* that, $Supplier* argumentTypeFactory) {
	$useLocalCurrentObjectStackCache();
	$var($ArgumentAttr$UniquePos, pos, $new($ArgumentAttr$UniquePos, this, that));
	$var($ArgumentAttr$ArgumentType, cached, $cast($ArgumentAttr$ArgumentType, $nc(this->argumentTypeCache)->get(pos)));
	if (cached != nullptr) {
		setResult(that, $(cached->dup(that, this->env)));
	} else {
		$var($ArgumentAttr$ArgumentType, res, $cast($ArgumentAttr$ArgumentType, $nc(argumentTypeFactory)->get()));
		$nc(this->argumentTypeCache)->put(pos, res);
		setResult(that, res);
	}
}

void ArgumentAttr::visitParens($JCTree$JCParens* that) {
	processArg(static_cast<$JCTree$JCExpression*>(that), static_cast<$Function*>($$new(ArgumentAttr$$Lambda$lambda$visitParens$1$1, this, that)));
}

void ArgumentAttr::visitConditional($JCTree$JCConditional* that) {
	processArg(static_cast<$JCTree$JCExpression*>(that), static_cast<$Function*>($$new(ArgumentAttr$$Lambda$lambda$visitConditional$2$2, this, that)));
}

void ArgumentAttr::visitSwitchExpression($JCTree$JCSwitchExpression* that) {
	processArg(static_cast<$JCTree$JCExpression*>(that), static_cast<$Function*>($$new(ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3, this, that)));
}

void ArgumentAttr::visitReference($JCTree$JCMemberReference* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(this->env)->dup(tree));
	$var($JCTree$JCExpression, exprTree, nullptr);
	$var($JCTree, var$0, $cast($JCTree, $nc(tree)->getQualifierExpression()));
	$var($Env, var$1, localEnv);
	$var($Attr$ResultInfo, var$2, $nc(this->attr)->memberReferenceQualifierResult(tree));
	$assign(exprTree, $cast($JCTree$JCExpression, $nc(this->deferredAttr)->attribSpeculative(var$0, var$1, var$2, $(withLocalCacheContext()))));
	$var($JCTree$JCMemberReference, mref2, $cast($JCTree$JCMemberReference, $$new($TreeCopier, $nc(this->attr)->make)->copy(static_cast<$JCTree*>(tree))));
	$set($nc(mref2), expr, exprTree);
	$var($Symbol, lhsSym, $TreeInfo::symbol(exprTree));
	$nc(($cast($AttrContext, $nc(localEnv)->info)))->selectSuper = lhsSym != nullptr && lhsSym->name == $nc($nc($nc(lhsSym->name)->table)->names)->_super;
	$var($Symbol, res, $nc($nc(this->attr)->rs)->getMemberReference(tree, localEnv, mref2, $nc(exprTree)->type, $nc(tree)->name));
	if (!$nc($nc(res)->kind)->isResolutionError()) {
		$set($nc(tree), sym, res);
	}
	if ($nc($nc(res)->kind)->isResolutionTargetError()) {
		$init($JCTree$JCMemberReference$OverloadKind);
		$nc(tree)->setOverloadKind($JCTree$JCMemberReference$OverloadKind::ERROR);
	} else {
		$init($TypeTag);
		bool var$8 = res->type != nullptr && $nc(res->type)->hasTag($TypeTag::FORALL);
		bool var$7 = var$8 || ((int64_t)(res->flags() & (uint64_t)$Flags::VARARGS)) != 0;
		if (!var$7) {
			bool var$10 = $TreeInfo::isStaticSelector(exprTree, $nc($nc($nc(tree)->name)->table)->names);
			bool var$9 = var$10 && $nc($nc(exprTree)->type)->isRaw();
			var$7 = (var$9 && !$nc(exprTree->type)->hasTag($TypeTag::ARRAY));
		}
		if (var$7) {
			$init($JCTree$JCMemberReference$OverloadKind);
			$nc(tree)->setOverloadKind($JCTree$JCMemberReference$OverloadKind::OVERLOADED);
		} else {
			$init($JCTree$JCMemberReference$OverloadKind);
			$nc(tree)->setOverloadKind($JCTree$JCMemberReference$OverloadKind::UNOVERLOADED);
		}
	}
	setResult(tree, $$new($DeferredAttr$DeferredType, static_cast<$DeferredAttr*>($nc(this->deferredAttr)), tree, this->env));
}

void ArgumentAttr::visitLambda($JCTree$JCLambda* that) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$JCLambda$ParameterKind);
	if ($nc(that)->paramKind == $JCTree$JCLambda$ParameterKind::EXPLICIT) {
		processArg(static_cast<$JCTree$JCExpression*>(that), static_cast<$Supplier*>($$new(ArgumentAttr$$Lambda$lambda$visitLambda$4$4, this, that)));
	} else {
		setResult(that, $$new($DeferredAttr$DeferredType, static_cast<$DeferredAttr*>($nc(this->deferredAttr)), that, this->env));
	}
}

void ArgumentAttr::visitApply($JCTree$JCMethodInvocation* that) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($cast($List, $nc(that)->getTypeArguments())))->isEmpty()) {
		processArg(static_cast<$JCTree$JCExpression*>(that), static_cast<$Function*>($$new(ArgumentAttr$$Lambda$lambda$visitApply$5$5, this, that)));
	} else {
		setResult(that, $($nc(this->attr)->attribTree(that, this->env, $nc(this->attr)->unknownExprInfo)));
	}
}

void ArgumentAttr::visitNewClass($JCTree$JCNewClass* that) {
	$useLocalCurrentObjectStackCache();
	if ($TreeInfo::isDiamond(that)) {
		processArg(static_cast<$JCTree$JCExpression*>(that), static_cast<$Function*>($$new(ArgumentAttr$$Lambda$lambda$visitNewClass$6$6, this, that)));
	} else {
		setResult(that, $($nc(this->attr)->attribTree(that, this->env, $nc(this->attr)->unknownExprInfo)));
	}
}

$ArgumentAttr$ResolvedConstructorType* ArgumentAttr::lambda$visitNewClass$6($JCTree$JCNewClass* that, $JCTree$JCNewClass* speculativeTree) {
	return $new($ArgumentAttr$ResolvedConstructorType, this, that, this->env, speculativeTree);
}

$ArgumentAttr$ResolvedMethodType* ArgumentAttr::lambda$visitApply$5($JCTree$JCMethodInvocation* that, $JCTree$JCMethodInvocation* speculativeTree) {
	return $new($ArgumentAttr$ResolvedMethodType, this, that, this->env, speculativeTree);
}

$ArgumentAttr$ExplicitLambdaType* ArgumentAttr::lambda$visitLambda$4($JCTree$JCLambda* that) {
	$var($JCTree$JCLambda, speculativeLambda, $nc(this->deferredAttr)->attribSpeculativeLambda(that, this->env, $nc(this->attr)->methodAttrInfo));
	return $new($ArgumentAttr$ExplicitLambdaType, this, that, this->env, speculativeLambda);
}

$ArgumentAttr$SwitchExpressionType* ArgumentAttr::lambda$visitSwitchExpression$3($JCTree$JCSwitchExpression* that, $JCTree$JCSwitchExpression* speculativeTree) {
	return $new($ArgumentAttr$SwitchExpressionType, this, that, this->env, speculativeTree);
}

$ArgumentAttr$ConditionalType* ArgumentAttr::lambda$visitConditional$2($JCTree$JCConditional* that, $JCTree$JCConditional* speculativeTree) {
	return $new($ArgumentAttr$ConditionalType, this, that, this->env, speculativeTree);
}

$ArgumentAttr$ParensType* ArgumentAttr::lambda$visitParens$1($JCTree$JCParens* that, $JCTree$JCParens* speculativeTree) {
	return $new($ArgumentAttr$ParensType, this, that, this->env, speculativeTree);
}

$ArgumentAttr$ArgumentType* ArgumentAttr::lambda$processArg$0($JCTree$JCExpression* that, $ArgumentAttr$UniquePos* pos, $Function* argumentTypeFactory) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, speculativeTree, $cast($JCTree$JCExpression, $nc(this->deferredAttr)->attribSpeculative(that, this->env, $$new($ArgumentAttr$1, this, static_cast<$Attr*>($nc(this->attr)), pos))));
	return $cast($ArgumentAttr$ArgumentType, $nc(argumentTypeFactory)->apply(speculativeTree));
}

void clinit$ArgumentAttr($Class* class$) {
	$assignStatic(ArgumentAttr::methodAttrKey, $new($Context$Key));
}

ArgumentAttr::ArgumentAttr() {
}

$Class* ArgumentAttr::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ArgumentAttr$$Lambda$lambda$processArg$0::classInfo$.name)) {
			return ArgumentAttr$$Lambda$lambda$processArg$0::load$(name, initialize);
		}
		if (name->equals(ArgumentAttr$$Lambda$lambda$visitParens$1$1::classInfo$.name)) {
			return ArgumentAttr$$Lambda$lambda$visitParens$1$1::load$(name, initialize);
		}
		if (name->equals(ArgumentAttr$$Lambda$lambda$visitConditional$2$2::classInfo$.name)) {
			return ArgumentAttr$$Lambda$lambda$visitConditional$2$2::load$(name, initialize);
		}
		if (name->equals(ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::classInfo$.name)) {
			return ArgumentAttr$$Lambda$lambda$visitSwitchExpression$3$3::load$(name, initialize);
		}
		if (name->equals(ArgumentAttr$$Lambda$lambda$visitLambda$4$4::classInfo$.name)) {
			return ArgumentAttr$$Lambda$lambda$visitLambda$4$4::load$(name, initialize);
		}
		if (name->equals(ArgumentAttr$$Lambda$lambda$visitApply$5$5::classInfo$.name)) {
			return ArgumentAttr$$Lambda$lambda$visitApply$5$5::load$(name, initialize);
		}
		if (name->equals(ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::classInfo$.name)) {
			return ArgumentAttr$$Lambda$lambda$visitNewClass$6$6::load$(name, initialize);
		}
	}
	$loadClass(ArgumentAttr, name, initialize, &_ArgumentAttr_ClassInfo_, clinit$ArgumentAttr, allocate$ArgumentAttr);
	return class$;
}

$Class* ArgumentAttr::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com