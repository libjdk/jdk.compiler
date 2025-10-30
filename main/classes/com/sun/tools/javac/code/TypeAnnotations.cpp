#include <com/sun/tools/javac/code/TypeAnnotations.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations$AnnotationType.h>
#include <com/sun/tools/javac/code/TypeAnnotations$TypeAnnotationPositions.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ANNOTATION
#undef ANNOTATION_TYPE
#undef BOTH
#undef CONSTRUCTOR
#undef DECLARATION
#undef FIELD
#undef LOCAL_VARIABLE
#undef MDL
#undef METHOD
#undef MODULE
#undef MTH
#undef NONE
#undef PACKAGE
#undef PARAMETER
#undef PCK
#undef RECORD_COMPONENT
#undef TYP
#undef TYPE
#undef TYPE_PARAMETER
#undef TYPE_USE
#undef VAR
#undef VOID

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotations$AnnotationType = ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType;
using $TypeAnnotations$TypeAnnotationPositions = ::com::sun::tools::javac::code::TypeAnnotations$TypeAnnotationPositions;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $Collection = ::java::util::Collection;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0 : public $Runnable {
	$class(TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TypeAnnotations* inst, $Env* env, $JCTree$JCClassDecl* tree) {
		$set(this, inst$, inst);
		$set(this, env, env);
		$set(this, tree, tree);
	}
	virtual void run() override {
		$nc(inst$)->lambda$organizeTypeAnnotationsSignatures$0(env, tree);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0>());
	}
	TypeAnnotations* inst$ = nullptr;
	$Env* env = nullptr;
	$JCTree$JCClassDecl* tree = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0, inst$)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0, env)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0, tree)},
	{}
};
$MethodInfo TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotations;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::*)(TypeAnnotations*,$Env*,$JCTree$JCClassDecl*)>(&TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::class$ = nullptr;

class TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1 : public $Runnable {
	$class(TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TypeAnnotations* inst, $Env* env, $JCTree$JCClassDecl* tree) {
		$set(this, inst$, inst);
		$set(this, env, env);
		$set(this, tree, tree);
	}
	virtual void run() override {
		$nc(inst$)->lambda$validateTypeAnnotationsSignatures$1(env, tree);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1>());
	}
	TypeAnnotations* inst$ = nullptr;
	$Env* env = nullptr;
	$JCTree$JCClassDecl* tree = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1, inst$)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1, env)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1, tree)},
	{}
};
$MethodInfo TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotations;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::*)(TypeAnnotations*,$Env*,$JCTree$JCClassDecl*)>(&TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::class$ = nullptr;

class TypeAnnotations$$Lambda$lambda$annotationTargets$2$2 : public $Predicate {
	$class(TypeAnnotations$$Lambda$lambda$annotationTargets$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* a) override {
		 return TypeAnnotations::lambda$annotationTargets$2($cast($Attribute, a));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeAnnotations$$Lambda$lambda$annotationTargets$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TypeAnnotations$$Lambda$lambda$annotationTargets$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotations$$Lambda$lambda$annotationTargets$2$2::*)()>(&TypeAnnotations$$Lambda$lambda$annotationTargets$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeAnnotations$$Lambda$lambda$annotationTargets$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.TypeAnnotations$$Lambda$lambda$annotationTargets$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TypeAnnotations$$Lambda$lambda$annotationTargets$2$2::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$$Lambda$lambda$annotationTargets$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeAnnotations$$Lambda$lambda$annotationTargets$2$2::class$ = nullptr;

class TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3 : public $Function {
	$class(TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$(TypeAnnotations* inst, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, s, s);
	}
	virtual $Object* apply(Object$* attr) override {
		 return $of($nc(inst$)->lambda$annotationTargetType$3(s, $cast($Attribute, attr)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3>());
	}
	TypeAnnotations* inst$ = nullptr;
	$Symbol* s = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3, inst$)},
	{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3, s)},
	{}
};
$MethodInfo TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotations;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::*)(TypeAnnotations*,$Symbol*)>(&TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::class$ = nullptr;

class TypeAnnotations$$Lambda$combineAnnotationType$4 : public $BinaryOperator {
	$class(TypeAnnotations$$Lambda$combineAnnotationType$4, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$(TypeAnnotations* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* at1, Object$* at2) override {
		 return $of($nc(inst$)->combineAnnotationType($cast($TypeAnnotations$AnnotationType, at1), $cast($TypeAnnotations$AnnotationType, at2)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeAnnotations$$Lambda$combineAnnotationType$4>());
	}
	TypeAnnotations* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeAnnotations$$Lambda$combineAnnotationType$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeAnnotations$$Lambda$combineAnnotationType$4, inst$)},
	{}
};
$MethodInfo TypeAnnotations$$Lambda$combineAnnotationType$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotations;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotations$$Lambda$combineAnnotationType$4::*)(TypeAnnotations*)>(&TypeAnnotations$$Lambda$combineAnnotationType$4::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeAnnotations$$Lambda$combineAnnotationType$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.TypeAnnotations$$Lambda$combineAnnotationType$4",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	fieldInfos,
	methodInfos
};
$Class* TypeAnnotations$$Lambda$combineAnnotationType$4::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$$Lambda$combineAnnotationType$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeAnnotations$$Lambda$combineAnnotationType$4::class$ = nullptr;

$FieldInfo _TypeAnnotations_FieldInfo_[] = {
	{"typeAnnosKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/TypeAnnotations;>;", $PROTECTED | $STATIC | $FINAL, $staticField(TypeAnnotations, typeAnnosKey)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(TypeAnnotations, log)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(TypeAnnotations, names)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL, $field(TypeAnnotations, syms)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL, $field(TypeAnnotations, annotate)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL, $field(TypeAnnotations, attr)},
	{}
};

$MethodInfo _TypeAnnotations_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(TypeAnnotations::*)($Context*)>(&TypeAnnotations::init$))},
	{"annotationTargetType", "(Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PUBLIC},
	{"annotationTargets", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute;>;", $PUBLIC},
	{"combineAnnotationType", "(Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;)Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PRIVATE, $method(static_cast<$TypeAnnotations$AnnotationType*(TypeAnnotations::*)($TypeAnnotations$AnnotationType*,$TypeAnnotations$AnnotationType*)>(&TypeAnnotations::combineAnnotationType))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/TypeAnnotations;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotations*(*)($Context*)>(&TypeAnnotations::instance))},
	{"lambda$annotationTargetType$3", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Attribute;)Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$TypeAnnotations$AnnotationType*(TypeAnnotations::*)($Symbol*,$Attribute*)>(&TypeAnnotations::lambda$annotationTargetType$3))},
	{"lambda$annotationTargets$2", "(Lcom/sun/tools/javac/code/Attribute;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Attribute*)>(&TypeAnnotations::lambda$annotationTargets$2))},
	{"lambda$organizeTypeAnnotationsSignatures$0", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TypeAnnotations::*)($Env*,$JCTree$JCClassDecl*)>(&TypeAnnotations::lambda$organizeTypeAnnotationsSignatures$0))},
	{"lambda$validateTypeAnnotationsSignatures$1", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TypeAnnotations::*)($Env*,$JCTree$JCClassDecl*)>(&TypeAnnotations::lambda$validateTypeAnnotationsSignatures$1))},
	{"organizeTypeAnnotationsBodies", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"organizeTypeAnnotationsSignatures", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", $PUBLIC},
	{"targetToAnnotationType", "(Lcom/sun/tools/javac/code/Attribute;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PRIVATE, $method(static_cast<$TypeAnnotations$AnnotationType*(TypeAnnotations::*)($Attribute*,$Symbol*)>(&TypeAnnotations::targetToAnnotationType))},
	{"validateTypeAnnotationsSignatures", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", $PUBLIC},
	{}
};

$InnerClassInfo _TypeAnnotations_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeAnnotations$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions", "com.sun.tools.javac.code.TypeAnnotations", "TypeAnnotationPositions", $PRIVATE},
	{"com.sun.tools.javac.code.TypeAnnotations$AnnotationType", "com.sun.tools.javac.code.TypeAnnotations", "AnnotationType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TypeAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.TypeAnnotations",
	"java.lang.Object",
	nullptr,
	_TypeAnnotations_FieldInfo_,
	_TypeAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_TypeAnnotations_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeAnnotations$1,com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions,com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions$1,com.sun.tools.javac.code.TypeAnnotations$AnnotationType"
};

$Object* allocate$TypeAnnotations($Class* clazz) {
	return $of($alloc(TypeAnnotations));
}

$Context$Key* TypeAnnotations::typeAnnosKey = nullptr;

TypeAnnotations* TypeAnnotations::instance($Context* context) {
	$init(TypeAnnotations);
	$var(TypeAnnotations, instance, $cast(TypeAnnotations, $nc(context)->get(TypeAnnotations::typeAnnosKey)));
	if (instance == nullptr) {
		$assign(instance, $new(TypeAnnotations, context));
	}
	return instance;
}

void TypeAnnotations::init$($Context* context) {
	$nc(context)->put(TypeAnnotations::typeAnnosKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, attr, $Attr::instance(context));
}

void TypeAnnotations::organizeTypeAnnotationsSignatures($Env* env, $JCTree$JCClassDecl* tree) {
	$nc(this->annotate)->afterTypes(static_cast<$Runnable*>($$new(TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0, this, env, tree)));
}

void TypeAnnotations::validateTypeAnnotationsSignatures($Env* env, $JCTree$JCClassDecl* tree) {
	$nc(this->annotate)->validate(static_cast<$Runnable*>($$new(TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1, this, env, tree)));
}

void TypeAnnotations::organizeTypeAnnotationsBodies($JCTree$JCClassDecl* tree) {
	$$new($TypeAnnotations$TypeAnnotationPositions, this, false)->scan(static_cast<$JCTree*>(tree));
}

$List* TypeAnnotations::annotationTargets($Symbol$TypeSymbol* tsym) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Compound, atTarget, $nc($($nc(tsym)->getAnnotationTypeMetadata()))->getTarget());
	if (atTarget == nullptr) {
		return nullptr;
	}
	$var($Attribute, atValue, $nc(atTarget)->member($nc(this->names)->value));
	$var($Attribute$Array, arrayVal, nullptr);
	bool var$0 = $instanceOf($Attribute$Array, atValue);
	if (var$0) {
		$assign(arrayVal, $cast($Attribute$Array, atValue));
		var$0 = true;
	}
	if (!(var$0)) {
		return nullptr;
	}
	$var($List, targets, $cast($List, $nc(arrayVal)->getValue()));
	if ($nc($($nc(targets)->stream()))->anyMatch(static_cast<$Predicate*>($$new(TypeAnnotations$$Lambda$lambda$annotationTargets$2$2)))) {
		return nullptr;
	}
	return targets;
}

$TypeAnnotations$AnnotationType* TypeAnnotations::annotationTargetType($Attribute$Compound* a, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($nc($nc(a)->type)->tsym)->isAnnotationType()) {
		$init($TypeAnnotations$AnnotationType);
		return $TypeAnnotations$AnnotationType::NONE;
	}
	$var($List, targets, annotationTargets($nc($nc(a)->type)->tsym));
	$init($TypeAnnotations$AnnotationType);
	return (targets == nullptr) ? $TypeAnnotations$AnnotationType::DECLARATION : $cast($TypeAnnotations$AnnotationType, $nc($($nc($($nc(targets)->stream()))->map(static_cast<$Function*>($$new(TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3, this, s)))))->reduce($TypeAnnotations$AnnotationType::NONE, static_cast<$BinaryOperator*>($$new(TypeAnnotations$$Lambda$combineAnnotationType$4, this))));
}

$TypeAnnotations$AnnotationType* TypeAnnotations::combineAnnotationType($TypeAnnotations$AnnotationType* at1, $TypeAnnotations$AnnotationType* at2) {
	$init($TypeAnnotations$AnnotationType);
	if (at1 == $TypeAnnotations$AnnotationType::NONE) {
		return at2;
	} else {
		if (at2 == $TypeAnnotations$AnnotationType::NONE) {
			return at1;
		} else if (at1 != at2) {
			return $TypeAnnotations$AnnotationType::BOTH;
		} else {
			return at1;
		}
	}
}

$TypeAnnotations$AnnotationType* TypeAnnotations::targetToAnnotationType($Attribute* a, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Enum, e, $cast($Attribute$Enum, a));
	if ($nc($nc(e)->value)->name == $nc(this->names)->TYPE) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::TYP) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->FIELD || $nc(e->value)->name == $nc(this->names)->RECORD_COMPONENT) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind != $Kinds$Kind::MTH) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->METHOD) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::MTH && !s->isConstructor()) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->PARAMETER) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind == $Kinds$Kind::MTH && ((int64_t)(s->flags() & (uint64_t)$Flags::PARAMETER)) != 0) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->CONSTRUCTOR) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::MTH && s->isConstructor()) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->LOCAL_VARIABLE) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::VAR && $nc(s->owner)->kind == $Kinds$Kind::MTH && ((int64_t)(s->flags() & (uint64_t)$Flags::PARAMETER)) == 0) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->ANNOTATION_TYPE) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::TYP && ((int64_t)(s->flags() & (uint64_t)(int64_t)$Flags::ANNOTATION)) != 0) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->PACKAGE) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::PCK) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->TYPE_USE) {
		$init($Kinds$Kind);
		bool var$1 = $nc(s)->kind == $Kinds$Kind::TYP || $nc(s)->kind == $Kinds$Kind::VAR;
		if (!var$1) {
			bool var$2 = $nc(s)->kind == $Kinds$Kind::MTH && !s->isConstructor();
			$init($TypeTag);
			var$1 = (var$2 && !$nc($($nc(s->type)->getReturnType()))->hasTag($TypeTag::VOID));
		}
		bool var$0 = var$1;
		if (var$0 || ($nc(s)->kind == $Kinds$Kind::MTH && s->isConstructor())) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::TYPE;
		}
	} else if ($nc(e->value)->name == $nc(this->names)->TYPE_PARAMETER) {
	} else if ($nc(e->value)->name == $nc(this->names)->MODULE) {
		$init($Kinds$Kind);
		if ($nc(s)->kind == $Kinds$Kind::MDL) {
			$init($TypeAnnotations$AnnotationType);
			return $TypeAnnotations$AnnotationType::DECLARATION;
		}
	} else {
		$var($String, var$4, $$str({"annotationTargetType(): unrecognized Attribute name "_s, $nc(e->value)->name, " ("_s}));
		$var($String, var$3, $$concat(var$4, $($nc($of($nc(e->value)->name))->getClass())));
		$Assert::error($$concat(var$3, ")"));
		$init($TypeAnnotations$AnnotationType);
		return $TypeAnnotations$AnnotationType::DECLARATION;
	}
	$init($TypeAnnotations$AnnotationType);
	return $TypeAnnotations$AnnotationType::NONE;
}

$TypeAnnotations$AnnotationType* TypeAnnotations::lambda$annotationTargetType$3($Symbol* s, $Attribute* attr) {
	return targetToAnnotationType(attr, s);
}

bool TypeAnnotations::lambda$annotationTargets$2($Attribute* a) {
	$init(TypeAnnotations);
	return !($instanceOf($Attribute$Enum, a));
}

void TypeAnnotations::lambda$validateTypeAnnotationsSignatures$1($Env* env, $JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, oldSource, $nc(this->log)->useSource($nc($nc(env)->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->attr)->validateTypeAnnotations(tree, true);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->log)->useSource(oldSource);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TypeAnnotations::lambda$organizeTypeAnnotationsSignatures$0($Env* env, $JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, oldSource, $nc(this->log)->useSource($nc($nc(env)->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$$new($TypeAnnotations$TypeAnnotationPositions, this, true)->scan(static_cast<$JCTree*>(tree));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->log)->useSource(oldSource);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$TypeAnnotations($Class* class$) {
	$assignStatic(TypeAnnotations::typeAnnosKey, $new($Context$Key));
}

TypeAnnotations::TypeAnnotations() {
}

$Class* TypeAnnotations::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::classInfo$.name)) {
			return TypeAnnotations$$Lambda$lambda$organizeTypeAnnotationsSignatures$0::load$(name, initialize);
		}
		if (name->equals(TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::classInfo$.name)) {
			return TypeAnnotations$$Lambda$lambda$validateTypeAnnotationsSignatures$1$1::load$(name, initialize);
		}
		if (name->equals(TypeAnnotations$$Lambda$lambda$annotationTargets$2$2::classInfo$.name)) {
			return TypeAnnotations$$Lambda$lambda$annotationTargets$2$2::load$(name, initialize);
		}
		if (name->equals(TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::classInfo$.name)) {
			return TypeAnnotations$$Lambda$lambda$annotationTargetType$3$3::load$(name, initialize);
		}
		if (name->equals(TypeAnnotations$$Lambda$combineAnnotationType$4::classInfo$.name)) {
			return TypeAnnotations$$Lambda$combineAnnotationType$4::load$(name, initialize);
		}
	}
	$loadClass(TypeAnnotations, name, initialize, &_TypeAnnotations_ClassInfo_, clinit$TypeAnnotations, allocate$TypeAnnotations);
	return class$;
}

$Class* TypeAnnotations::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com