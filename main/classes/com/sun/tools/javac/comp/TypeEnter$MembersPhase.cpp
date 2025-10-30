#include <com/sun/tools/javac/comp/TypeEnter$MembersPhase.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/MemberEnter.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractMembersPhase.h>
#include <com/sun/tools/javac/comp/TypeEnter$AnonClassConstructorHelper.h>
#include <com/sun/tools/javac/comp/TypeEnter$BasicConstructorHelper.h>
#include <com/sun/tools/javac/comp/TypeEnter$DefaultConstructorHelper.h>
#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>
#include <com/sun/tools/javac/comp/TypeEnter$RecordConstructorHelper.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Optional.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ENUM
#undef ERR
#undef ERROR
#undef FINAL
#undef GENERATED_MEMBER
#undef MANDATED
#undef MEMBERS_PHASE
#undef PARAMETER
#undef PUBLIC
#undef RECORD
#undef STATIC
#undef VARARGS

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Annotate$AnnotationTypeCompleter = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $MemberEnter = ::com::sun::tools::javac::comp::MemberEnter;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$AbstractMembersPhase = ::com::sun::tools::javac::comp::TypeEnter$AbstractMembersPhase;
using $TypeEnter$AnonClassConstructorHelper = ::com::sun::tools::javac::comp::TypeEnter$AnonClassConstructorHelper;
using $TypeEnter$BasicConstructorHelper = ::com::sun::tools::javac::comp::TypeEnter$BasicConstructorHelper;
using $TypeEnter$DefaultConstructorHelper = ::com::sun::tools::javac::comp::TypeEnter$DefaultConstructorHelper;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $TypeEnter$RecordConstructorHelper = ::com::sun::tools::javac::comp::TypeEnter$RecordConstructorHelper;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Optional = ::java::util::Optional;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0 : public $Predicate {
	$class(TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JCTree* defaultConstructor) {
		$set(this, defaultConstructor, defaultConstructor);
	}
	virtual bool test(Object$* t) override {
		 return TypeEnter$MembersPhase::lambda$finishClass$0(defaultConstructor, $cast($JCTree, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0>());
	}
	$JCTree* defaultConstructor = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::fieldInfos[2] = {
	{"defaultConstructor", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0, defaultConstructor)},
	{}
};
$MethodInfo TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::*)($JCTree*)>(&TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::class$ = nullptr;

class TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1 : public $Predicate {
	$class(TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JCTree$JCVariableDecl* tree) {
		$set(this, tree, tree);
	}
	virtual bool test(Object$* rf) override {
		 return TypeEnter$MembersPhase::lambda$addAccessor$1(tree, $cast($JCTree$JCVariableDecl, rf));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1>());
	}
	$JCTree$JCVariableDecl* tree = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::fieldInfos[2] = {
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC, $field(TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1, tree)},
	{}
};
$MethodInfo TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::*)($JCTree$JCVariableDecl*)>(&TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::class$ = nullptr;

class TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2 : public $Function {
	$class(TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* vd) override {
		 return $of(TypeEnter$MembersPhase::lambda$getCanonicalConstructorDecl$2($cast($JCTree$JCVariableDecl, vd)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2::*)()>(&TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2::class$ = nullptr;

class TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3 : public $Predicate {
	$class(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$(TypeEnter$MembersPhase* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* vd) override {
		 return $nc(inst$)->lambda$addRecordMembersIfNeeded$4($cast($JCTree$JCVariableDecl, vd));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3>());
	}
	TypeEnter$MembersPhase* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3, inst$)},
	{}
};
$MethodInfo TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$MembersPhase;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::*)(TypeEnter$MembersPhase*)>(&TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::class$ = nullptr;

class TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4 : public $Consumer {
	$class(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$(TypeEnter$MembersPhase* inst, $Env* env) {
		$set(this, inst$, inst);
		$set(this, env, env);
	}
	virtual void accept(Object$* vd) override {
		$nc(inst$)->lambda$addRecordMembersIfNeeded$5(env, $cast($JCTree$JCVariableDecl, vd));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4>());
	}
	TypeEnter$MembersPhase* inst$ = nullptr;
	$Env* env = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4, inst$)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4, env)},
	{}
};
$MethodInfo TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$MembersPhase;Lcom/sun/tools/javac/comp/Env;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::*)(TypeEnter$MembersPhase*,$Env*)>(&TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::class$ = nullptr;

$FieldInfo _TypeEnter$MembersPhase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$MembersPhase, this$0)},
	{}
};

$MethodInfo _TypeEnter$MembersPhase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$MembersPhase::*)($TypeEnter*)>(&TypeEnter$MembersPhase::init$))},
	{"addAccessor", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(TypeEnter$MembersPhase::*)($JCTree$JCVariableDecl*,$Env*)>(&TypeEnter$MembersPhase::addAccessor))},
	{"addEnumMembers", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(TypeEnter$MembersPhase::*)($JCTree$JCClassDecl*,$Env*)>(&TypeEnter$MembersPhase::addEnumMembers))},
	{"addRecordMembersIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(TypeEnter$MembersPhase::*)($JCTree$JCClassDecl*,$Env*)>(&TypeEnter$MembersPhase::addRecordMembersIfNeeded))},
	{"finishClass", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $method(static_cast<void(TypeEnter$MembersPhase::*)($JCTree$JCClassDecl*,$JCTree*,$Env*)>(&TypeEnter$MembersPhase::finishClass))},
	{"getCanonicalConstructorDecl", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, 0, $method(static_cast<$JCTree$JCMethodDecl*(TypeEnter$MembersPhase::*)($JCTree$JCClassDecl*)>(&TypeEnter$MembersPhase::getCanonicalConstructorDecl))},
	{"getDefaultConstructorHelper", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/TypeEnter$DefaultConstructorHelper;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/TypeEnter$DefaultConstructorHelper;", 0, $method(static_cast<$TypeEnter$DefaultConstructorHelper*(TypeEnter$MembersPhase::*)($Env*)>(&TypeEnter$MembersPhase::getDefaultConstructorHelper))},
	{"lambda$addAccessor$1", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCVariableDecl*,$JCTree$JCVariableDecl*)>(&TypeEnter$MembersPhase::lambda$addAccessor$1))},
	{"lambda$addRecordMembersIfNeeded$4", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(TypeEnter$MembersPhase::*)($JCTree$JCVariableDecl*)>(&TypeEnter$MembersPhase::lambda$addRecordMembersIfNeeded$4))},
	{"lambda$addRecordMembersIfNeeded$5", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TypeEnter$MembersPhase::*)($Env*,$JCTree$JCVariableDecl*)>(&TypeEnter$MembersPhase::lambda$addRecordMembersIfNeeded$5))},
	{"lambda$finishClass$0", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree*,$JCTree*)>(&TypeEnter$MembersPhase::lambda$finishClass$0))},
	{"lambda$getCanonicalConstructorDecl$2", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($JCTree$JCVariableDecl*)>(&TypeEnter$MembersPhase::lambda$getCanonicalConstructorDecl$2))},
	{"runPhase", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PROTECTED},
	{}
};

$InnerClassInfo _TypeEnter$MembersPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$MembersPhase", "com.sun.tools.javac.comp.TypeEnter", "MembersPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractMembersPhase", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$MembersPhase_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$MembersPhase",
	"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase",
	nullptr,
	_TypeEnter$MembersPhase_FieldInfo_,
	_TypeEnter$MembersPhase_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$MembersPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$MembersPhase($Class* clazz) {
	return $of($alloc(TypeEnter$MembersPhase));
}

void TypeEnter$MembersPhase::init$($TypeEnter* this$0) {
	$set(this, this$0, this$0);
	$init($Dependencies$CompletionCause);
	$TypeEnter$AbstractMembersPhase::init$(this$0, $Dependencies$CompletionCause::MEMBERS_PHASE, nullptr);
}

void TypeEnter$MembersPhase::runPhase($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	$var($Symbol$ClassSymbol, sym, $nc(tree)->sym);
	$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(sym)->type));
	$var($JCTree, defaultConstructor, nullptr);
	$var($TypeEnter$DefaultConstructorHelper, helper, getDefaultConstructorHelper(env));
	if (helper != nullptr) {
		$nc(this->this$0->chk)->checkDefaultConstructor(sym, $(tree->pos()));
		$assign(defaultConstructor, this->this$0->defaultConstructor($($nc(this->this$0->make)->at(tree->pos$)), helper));
		$set(tree, defs, $nc(tree->defs)->prepend(defaultConstructor));
	}
	if (!sym->isRecord()) {
		enterThisAndSuper(sym, env);
	}
	if (!$nc(tree->typarams)->isEmpty()) {
		{
			$var($Iterator, i$, $nc(tree->typarams)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCTypeParameter, tvar, $cast($JCTree$JCTypeParameter, i$->next()));
				{
					$nc(this->this$0->chk)->checkNonCyclic(static_cast<$JCDiagnostic$DiagnosticPosition*>(tvar), $cast($Type$TypeVar, $nc(tvar)->type));
				}
			}
		}
	}
	finishClass(tree, defaultConstructor, env);
	if (this->this$0->allowTypeAnnos) {
		$nc(this->this$0->typeAnnotations)->organizeTypeAnnotationsSignatures(env, $cast($JCTree$JCClassDecl, env->tree));
		$nc(this->this$0->typeAnnotations)->validateTypeAnnotationsSignatures(env, $cast($JCTree$JCClassDecl, env->tree));
	}
}

$TypeEnter$DefaultConstructorHelper* TypeEnter$MembersPhase::getDefaultConstructorHelper($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, $nc(env)->enclClass);
	$var($Symbol$ClassSymbol, sym, $nc(tree)->sym);
	$var($TypeEnter$DefaultConstructorHelper, helper, nullptr);
	bool var$0 = ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)512)) == 0;
	bool isClassWithoutInit = var$0 && !$TreeInfo::hasConstructors(tree->defs);
	bool isRecord = sym->isRecord();
	if (isClassWithoutInit && !isRecord) {
		$assign(helper, $new($TypeEnter$BasicConstructorHelper, this->this$0, sym));
		if ($nc(sym->name)->isEmpty()) {
			$var($JCTree$JCNewClass, nc, $cast($JCTree$JCNewClass, $nc(env->next)->tree));
			if ($nc(nc)->constructor != nullptr) {
				$init($Kinds$Kind);
				if ($nc(nc->constructor)->kind != $Kinds$Kind::ERR) {
					$assign(helper, $new($TypeEnter$AnonClassConstructorHelper, this->this$0, sym, $cast($Symbol$MethodSymbol, nc->constructor), nc->encl));
				} else {
					$assign(helper, nullptr);
				}
			}
		}
	}
	if (isRecord) {
		$var($JCTree$JCMethodDecl, canonicalInit, nullptr);
		if (isClassWithoutInit || ($assign(canonicalInit, getCanonicalConstructorDecl(env->enclClass))) == nullptr) {
			$assign(helper, $new($TypeEnter$RecordConstructorHelper, this->this$0, sym, $($TreeInfo::recordFields(tree))));
		}
		if (canonicalInit != nullptr) {
			$nc(canonicalInit->sym)->flags_field |= $Flags::RECORD;
		}
	}
	return helper;
}

void TypeEnter$MembersPhase::finishClass($JCTree$JCClassDecl* tree, $JCTree* defaultConstructor, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$0 = ((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)$Flags::ENUM)) != 0 && !$nc($nc(tree->sym)->type)->hasTag($TypeTag::ERROR);
	if (var$0 && ((int64_t)($nc($nc($($nc(this->this$0->types)->supertype($nc(tree->sym)->type)))->tsym)->flags() & (uint64_t)(int64_t)$Flags::ENUM)) == 0) {
		addEnumMembers(tree, env);
	}
	bool isRecord = ((int64_t)($nc($nc(tree)->sym)->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0;
	$var($List, alreadyEntered, nullptr);
	if (isRecord) {
		$load($JCTree);
		$assign(alreadyEntered, $List::convert($JCTree::class$, $($TreeInfo::recordFields(tree))));
		$assign(alreadyEntered, $nc(alreadyEntered)->prependList($cast($List, $($nc($($nc($($nc(tree->defs)->stream()))->filter(static_cast<$Predicate*>($$new(TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0, defaultConstructor)))))->collect($($List::collector()))))));
	}
	$var($List, defsToEnter, isRecord ? $nc(tree->defs)->diff(alreadyEntered) : tree->defs);
	$nc(this->this$0->memberEnter)->memberEnter(defsToEnter, env);
	if (isRecord) {
		addRecordMembersIfNeeded(tree, env);
	}
	if ($nc(tree->sym)->isAnnotationType()) {
		$Assert::check($nc(tree->sym)->isCompleted());
		$nc(tree->sym)->setAnnotationTypeMetadata($$new($Annotate$AnnotationTypeMetadata, tree->sym, $($nc(this->this$0->annotate)->annotationTypeSourceCompleter())));
	}
}

void TypeEnter$MembersPhase::addAccessor($JCTree$JCVariableDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, implSym, this->this$0->lookupMethod($nc($nc(env)->enclClass)->sym, $nc($nc(tree)->sym)->name, $($List::nil())));
	$var($Symbol$RecordComponent, rec, $nc(($cast($Symbol$ClassSymbol, $nc($nc(tree)->sym)->owner)))->getRecordComponent(tree->sym));
	if (implSym == nullptr || ((int64_t)($nc(implSym)->flags_field & (uint64_t)(int64_t)0x01000000)) != 0) {
		$var($TreeCopier, tc, $new($TreeCopier, $($nc(this->this$0->make)->at(tree->pos$))));
		$var($List, originalAnnos, $nc($($nc(rec)->getOriginalAnnos()))->isEmpty() ? $nc(rec)->getOriginalAnnos() : tc->copy($(rec->getOriginalAnnos())));
		$var($JCTree$JCVariableDecl, recordField, $cast($JCTree$JCVariableDecl, $nc($($nc($($nc($($nc($($TreeInfo::recordFields($cast($JCTree$JCClassDecl, $nc(env)->tree))))->stream()))->filter(static_cast<$Predicate*>($$new(TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1, tree)))))->findAny()))->get()));
		$var($JCTree$JCModifiers, var$0, $nc(this->this$0->make)->Modifiers(1 | $Flags::GENERATED_MEMBER, originalAnnos));
		$var($Name, var$1, $nc(tree->sym)->name);
		$var($JCTree$JCExpression, var$2, $cast($JCTree$JCExpression, tc->copy(static_cast<$JCTree*>($nc(recordField)->vartype))));
		$var($List, var$3, $List::nil());
		$var($List, var$4, $List::nil());
		$var($JCTree$JCMethodDecl, getter, $nc($($nc(this->this$0->make)->at(tree->pos$)))->MethodDef(var$0, var$1, var$2, var$3, var$4, $($List::nil()), nullptr, nullptr));
		$nc(this->this$0->memberEnter)->memberEnter(static_cast<$JCTree*>(getter), env);
		$set(rec, accessor, $nc(getter)->sym);
		$set(rec, accessorMeth, getter);
	} else if (implSym != nullptr) {
		$set($nc(rec), accessor, implSym);
	}
}

void TypeEnter$MembersPhase::addEnumMembers($JCTree$JCClassDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, valuesType, $nc(this->this$0->make)->Type($$new($Type$ArrayType, $nc($nc(tree)->sym)->type, $nc(this->this$0->syms)->arrayClass)));
	$var($JCTree$JCModifiers, var$0, $nc(this->this$0->make)->Modifiers($Flags::PUBLIC | $Flags::STATIC));
	$var($Name, var$1, $nc(this->this$0->names)->values);
	$var($JCTree$JCExpression, var$2, valuesType);
	$var($List, var$3, $List::nil());
	$var($List, var$4, $List::nil());
	$var($JCTree$JCMethodDecl, values, $nc(this->this$0->make)->MethodDef(var$0, var$1, var$2, var$3, var$4, $($List::nil()), nullptr, nullptr));
	$nc(this->this$0->memberEnter)->memberEnter(static_cast<$JCTree*>(values), env);
	$var($JCTree$JCModifiers, var$5, $nc(this->this$0->make)->Modifiers($Flags::PUBLIC | $Flags::STATIC));
	$var($Name, var$6, $nc(this->this$0->names)->valueOf);
	$var($JCTree$JCExpression, var$7, $nc(this->this$0->make)->Type($nc($nc(tree)->sym)->type));
	$var($List, var$8, $List::nil());
	$var($JCTree$JCModifiers, var$10, $nc(this->this$0->make)->Modifiers($Flags::PARAMETER | $Flags::MANDATED));
	$var($Name, var$11, $nc(this->this$0->names)->fromString("name"_s));
	$var($List, var$9, $List::of($($nc(this->this$0->make)->VarDef(var$10, var$11, $($nc(this->this$0->make)->Type($nc(this->this$0->syms)->stringType)), nullptr))));
	$var($JCTree$JCMethodDecl, valueOf, $nc(this->this$0->make)->MethodDef(var$5, var$6, var$7, var$8, var$9, $($List::nil()), nullptr, nullptr));
	$nc(this->this$0->memberEnter)->memberEnter(static_cast<$JCTree*>(valueOf), env);
}

$JCTree$JCMethodDecl* TypeEnter$MembersPhase::getCanonicalConstructorDecl($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, recordComponentErasedTypes, $nc(this->this$0->types)->erasure($($nc($($TreeInfo::recordFields(tree)))->map(static_cast<$Function*>($$new(TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2))))));
	$var($JCTree$JCMethodDecl, canonicalDecl, nullptr);
	{
		$var($Iterator, i$, $nc($nc(tree)->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, def, $cast($JCTree, i$->next()));
			{
				if ($TreeInfo::isConstructor(def)) {
					$var($JCTree$JCMethodDecl, mdecl, $cast($JCTree$JCMethodDecl, def));
					if ($nc(this->this$0->types)->isSameTypes($($nc(this->this$0->types)->erasure($cast($List, $($nc($($nc($($nc($nc(mdecl)->params)->stream()))->map(static_cast<$Function*>($$new(TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2)))))->collect($($List::collector())))))), recordComponentErasedTypes)) {
						$assign(canonicalDecl, mdecl);
						break;
					}
				}
			}
		}
	}
	return canonicalDecl;
}

void TypeEnter$MembersPhase::addRecordMembersIfNeeded($JCTree$JCClassDecl* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->lookupMethod($nc(tree)->sym, $nc(this->this$0->names)->toString$, $($List::nil())) == nullptr) {
		$var($JCTree$JCModifiers, var$0, $nc(this->this$0->make)->Modifiers((($Flags::PUBLIC | $Flags::RECORD) | $Flags::FINAL) | $Flags::GENERATED_MEMBER));
		$var($Name, var$1, $nc(this->this$0->names)->toString$);
		$var($JCTree$JCExpression, var$2, $nc(this->this$0->make)->Type($nc(this->this$0->syms)->stringType));
		$var($List, var$3, $List::nil());
		$var($List, var$4, $List::nil());
		$var($JCTree$JCMethodDecl, toString, $nc(this->this$0->make)->MethodDef(var$0, var$1, var$2, var$3, var$4, $($List::nil()), nullptr, nullptr));
		$nc(this->this$0->memberEnter)->memberEnter(static_cast<$JCTree*>(toString), env);
	}
	if (this->this$0->lookupMethod($nc(tree)->sym, $nc(this->this$0->names)->hashCode$, $($List::nil())) == nullptr) {
		$var($JCTree$JCModifiers, var$5, $nc(this->this$0->make)->Modifiers((($Flags::PUBLIC | $Flags::RECORD) | $Flags::FINAL) | $Flags::GENERATED_MEMBER));
		$var($Name, var$6, $nc(this->this$0->names)->hashCode$);
		$var($JCTree$JCExpression, var$7, $nc(this->this$0->make)->Type($nc(this->this$0->syms)->intType));
		$var($List, var$8, $List::nil());
		$var($List, var$9, $List::nil());
		$var($JCTree$JCMethodDecl, hashCode, $nc(this->this$0->make)->MethodDef(var$5, var$6, var$7, var$8, var$9, $($List::nil()), nullptr, nullptr));
		$nc(this->this$0->memberEnter)->memberEnter(static_cast<$JCTree*>(hashCode), env);
	}
	if (this->this$0->lookupMethod($nc(tree)->sym, $nc(this->this$0->names)->equals$, $($List::of($nc(this->this$0->syms)->objectType))) == nullptr) {
		$var($JCTree$JCModifiers, var$10, $nc(this->this$0->make)->Modifiers((($Flags::PUBLIC | $Flags::RECORD) | $Flags::FINAL) | $Flags::GENERATED_MEMBER));
		$var($Name, var$11, $nc(this->this$0->names)->equals$);
		$var($JCTree$JCExpression, var$12, $nc(this->this$0->make)->Type($nc(this->this$0->syms)->booleanType));
		$var($List, var$13, $List::nil());
		$var($JCTree$JCModifiers, var$15, $nc(this->this$0->make)->Modifiers($Flags::PARAMETER));
		$var($Name, var$16, $nc(this->this$0->names)->fromString("o"_s));
		$var($List, var$14, $List::of($($nc(this->this$0->make)->VarDef(var$15, var$16, $($nc(this->this$0->make)->Type($nc(this->this$0->syms)->objectType)), nullptr))));
		$var($JCTree$JCMethodDecl, equals, $nc(this->this$0->make)->MethodDef(var$10, var$11, var$12, var$13, var$14, $($List::nil()), nullptr, nullptr));
		$nc(this->this$0->memberEnter)->memberEnter(static_cast<$JCTree*>(equals), env);
	}
	$var($List, recordFields, $TreeInfo::recordFields(tree));
	{
		$var($Iterator, i$, $nc(recordFields)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCVariableDecl, field, $cast($JCTree$JCVariableDecl, i$->next()));
			{
				$nc($nc(field)->mods)->flags &= (uint64_t)~$Flags::VARARGS;
				$nc(field->sym)->flags_field &= (uint64_t)~$Flags::VARARGS;
			}
		}
	}
	$nc($($nc($(recordFields->stream()))->filter(static_cast<$Predicate*>($$new(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3, this)))))->forEach(static_cast<$Consumer*>($$new(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4, this, env)));
}

void TypeEnter$MembersPhase::lambda$addRecordMembersIfNeeded$5($Env* env, $JCTree$JCVariableDecl* vd) {
	addAccessor(vd, env);
}

bool TypeEnter$MembersPhase::lambda$addRecordMembersIfNeeded$4($JCTree$JCVariableDecl* vd) {
	return (this->this$0->lookupMethod($nc($nc(this->this$0->syms)->objectType)->tsym, $nc(vd)->name, $($List::nil())) == nullptr);
}

$Type* TypeEnter$MembersPhase::lambda$getCanonicalConstructorDecl$2($JCTree$JCVariableDecl* vd) {
	$init(TypeEnter$MembersPhase);
	return $nc($nc(vd)->sym)->type;
}

bool TypeEnter$MembersPhase::lambda$addAccessor$1($JCTree$JCVariableDecl* tree, $JCTree$JCVariableDecl* rf) {
	$init(TypeEnter$MembersPhase);
	return $nc(rf)->name == $nc(tree)->name;
}

bool TypeEnter$MembersPhase::lambda$finishClass$0($JCTree* defaultConstructor, $JCTree* t) {
	$init(TypeEnter$MembersPhase);
	return $TreeInfo::isConstructor(t) && t != defaultConstructor;
}

TypeEnter$MembersPhase::TypeEnter$MembersPhase() {
}

$Class* TypeEnter$MembersPhase::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::classInfo$.name)) {
			return TypeEnter$MembersPhase$$Lambda$lambda$finishClass$0::load$(name, initialize);
		}
		if (name->equals(TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::classInfo$.name)) {
			return TypeEnter$MembersPhase$$Lambda$lambda$addAccessor$1$1::load$(name, initialize);
		}
		if (name->equals(TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2::classInfo$.name)) {
			return TypeEnter$MembersPhase$$Lambda$lambda$getCanonicalConstructorDecl$2$2::load$(name, initialize);
		}
		if (name->equals(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::classInfo$.name)) {
			return TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$4$3::load$(name, initialize);
		}
		if (name->equals(TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::classInfo$.name)) {
			return TypeEnter$MembersPhase$$Lambda$lambda$addRecordMembersIfNeeded$5$4::load$(name, initialize);
		}
	}
	$loadClass(TypeEnter$MembersPhase, name, initialize, &_TypeEnter$MembersPhase_ClassInfo_, allocate$TypeEnter$MembersPhase);
	return class$;
}

$Class* TypeEnter$MembersPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com