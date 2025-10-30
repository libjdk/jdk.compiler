#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol$1.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Constants.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/Callable.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef BINDING_VARIABLE
#undef ENUM_CONSTANT
#undef ERR
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef LOCAL_VARIABLE
#undef NOPOS
#undef PARAMETER
#undef RESOURCE_VARIABLE
#undef TYP
#undef VAR

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$VarSymbol$1 = ::com::sun::tools::javac::code::Symbol$VarSymbol$1;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Constants = ::com::sun::tools::javac::util::Constants;
using $List = ::com::sun::tools::javac::util::List;
using $1Name = ::com::sun::tools::javac::util::Name;
using $Position = ::com::sun::tools::javac::util::Position;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $Callable = ::java::util::concurrent::Callable;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $Name = ::javax::lang::model::element::Name;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0 : public $Callable {
	$class(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, $NO_CLASS_INIT, $Callable)
public:
	void init$(Symbol$VarSymbol* inst, $Attr* attr, $Env* env, $JCTree$JCVariableDecl* variable) {
		$set(this, inst$, inst);
		$set(this, attr, attr);
		$set(this, env, env);
		$set(this, variable, variable);
	}
	virtual $Object* call() override {
		 return $nc(inst$)->lambda$setLazyConstValue$0(attr, env, variable);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0>());
	}
	Symbol$VarSymbol* inst$ = nullptr;
	$Attr* attr = nullptr;
	$Env* env = nullptr;
	$JCTree$JCVariableDecl* variable = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, inst$)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PUBLIC, $field(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, attr)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, env)},
	{"variable", "Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC, $field(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, variable)},
	{}
};
$MethodInfo Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::*)(Symbol$VarSymbol*,$Attr*,$Env*,$JCTree$JCVariableDecl*)>(&Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::load$($String* name, bool initialize) {
	$loadClass(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::class$ = nullptr;

$FieldInfo _Symbol$VarSymbol_FieldInfo_[] = {
	{"pos", "I", nullptr, $PUBLIC, $field(Symbol$VarSymbol, pos)},
	{"adr", "I", nullptr, $PUBLIC, $field(Symbol$VarSymbol, adr)},
	{"data", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Symbol$VarSymbol, data)},
	{}
};

$MethodInfo _Symbol$VarSymbol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC},
	{"*getModifiers", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$VarSymbol::*)(int64_t,$1Name*,$Type*,$Symbol*)>(&Symbol$VarSymbol::init$))},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"asMemberOf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"asMethodHandle", "(Z)Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;", nullptr, $PUBLIC},
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"clone", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getConstValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getConstantValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isExceptionParameter", "()Z", nullptr, $PUBLIC},
	{"isResourceVariable", "()Z", nullptr, $PUBLIC},
	{"lambda$setLazyConstValue$0", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(Symbol$VarSymbol::*)($Attr*,$Env*,$JCTree$JCVariableDecl*)>(&Symbol$VarSymbol::lambda$setLazyConstValue$0)), "java.lang.Exception"},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"setData", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setLazyConstValue", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$VarSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$VarSymbol$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Symbol$VarSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$VarSymbol",
	"com.sun.tools.javac.code.Symbol",
	"javax.lang.model.element.VariableElement",
	_Symbol$VarSymbol_FieldInfo_,
	_Symbol$VarSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$VarSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$VarSymbol($Class* clazz) {
	return $of($alloc(Symbol$VarSymbol));
}

$Set* Symbol$VarSymbol::getModifiers() {
	 return this->$Symbol::getModifiers();
}

$1List* Symbol$VarSymbol::getEnclosedElements() {
	 return this->$Symbol::getEnclosedElements();
}

$AnnotationArray* Symbol$VarSymbol::getAnnotationsByType($Class* annoType) {
	 return this->$Symbol::getAnnotationsByType(annoType);
}

$Annotation* Symbol$VarSymbol::getAnnotation($Class* annoType) {
	 return this->$Symbol::getAnnotation(annoType);
}

int32_t Symbol$VarSymbol::hashCode() {
	 return this->$Symbol::hashCode();
}

bool Symbol$VarSymbol::equals(Object$* arg0) {
	 return this->$Symbol::equals(arg0);
}

$Object* Symbol$VarSymbol::clone() {
	 return this->$Symbol::clone();
}

void Symbol$VarSymbol::finalize() {
	this->$Symbol::finalize();
}

void Symbol$VarSymbol::init$(int64_t flags, $1Name* name, $Type* type, $Symbol* owner) {
	$init($Kinds$Kind);
	$Symbol::init$($Kinds$Kind::VAR, flags, name, type, owner);
	this->pos = $Position::NOPOS;
	this->adr = -1;
}

int32_t Symbol$VarSymbol::poolTag() {
	return $ClassFile::CONSTANT_Fieldref;
}

$Symbol$MethodHandleSymbol* Symbol$VarSymbol::asMethodHandle(bool getter) {
	return $new($Symbol$MethodHandleSymbol, this, getter);
}

Symbol$VarSymbol* Symbol$VarSymbol::clone($Symbol* newOwner) {
	$var(Symbol$VarSymbol, v, $new($Symbol$VarSymbol$1, this, this->flags_field, this->name, this->type, newOwner, newOwner));
	v->pos = this->pos;
	v->adr = this->adr;
	$set(v, data, this->data);
	return v;
}

$String* Symbol$VarSymbol::toString() {
	return $nc(this->name)->toString();
}

$Symbol* Symbol$VarSymbol::asMemberOf($Type* site, $Types* types) {
	return $new(Symbol$VarSymbol, this->flags_field, this->name, $($nc(types)->memberType(site, this)), this->owner);
}

$ElementKind* Symbol$VarSymbol::getKind() {
	int64_t flags = this->flags();
	if (((int64_t)(flags & (uint64_t)(int64_t)0x0000000200000000)) != 0) {
		if (isExceptionParameter()) {
			$init($ElementKind);
			return $ElementKind::EXCEPTION_PARAMETER;
		} else {
			$init($ElementKind);
			return $ElementKind::PARAMETER;
		}
	} else if (((int64_t)(flags & (uint64_t)(int64_t)16384)) != 0) {
		$init($ElementKind);
		return $ElementKind::ENUM_CONSTANT;
	} else {
		$init($Kinds$Kind);
		if ($nc(this->owner)->kind == $Kinds$Kind::TYP || $nc(this->owner)->kind == $Kinds$Kind::ERR) {
			$init($ElementKind);
			return $ElementKind::FIELD;
		} else if (isResourceVariable()) {
			$init($ElementKind);
			return $ElementKind::RESOURCE_VARIABLE;
		} else if (((int64_t)(flags & (uint64_t)(int64_t)0x0800000000000000)) != 0) {
			$init($ElementKind);
			$ElementKind* kind = $ElementKind::BINDING_VARIABLE;
			return kind;
		} else {
			$init($ElementKind);
			return $ElementKind::LOCAL_VARIABLE;
		}
	}
}

$Object* Symbol$VarSymbol::accept($ElementVisitor* v, Object$* p) {
	return $of($nc(v)->visitVariable(this, p));
}

$Object* Symbol$VarSymbol::getConstantValue() {
	return $of($Constants::decode($(getConstValue()), this->type));
}

void Symbol$VarSymbol::setLazyConstValue($Env* env, $Attr* attr, $JCTree$JCVariableDecl* variable) {
	setData(static_cast<$Callable*>($$new(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0, this, attr, env, variable)));
}

bool Symbol$VarSymbol::isExceptionParameter() {
	$init($ElementKind);
	return $equals(this->data, $ElementKind::EXCEPTION_PARAMETER);
}

bool Symbol$VarSymbol::isResourceVariable() {
	$init($ElementKind);
	return $equals(this->data, $ElementKind::RESOURCE_VARIABLE);
}

$Object* Symbol$VarSymbol::getConstValue() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Callable, callableData, nullptr);
		$init($ElementKind);
		if ($equals(this->data, $ElementKind::EXCEPTION_PARAMETER) || $equals(this->data, $ElementKind::RESOURCE_VARIABLE)) {
			return $of(nullptr);
		} else {
			$var($Object, patt60317$temp, this->data);
			bool var$1 = $instanceOf($Callable, patt60317$temp);
			if (var$1) {
				$assign(callableData, $cast($Callable, patt60317$temp));
				var$1 = true;
			}
			if (var$1) {
				$set(this, data, nullptr);
				try {
					$set(this, data, $nc(callableData)->call());
				} catch ($Exception& ex) {
					$throwNew($AssertionError, $of(ex));
				}
			}
		}
	}
	return $of(this->data);
}

void Symbol$VarSymbol::setData(Object$* data) {
	$Assert::check(!($instanceOf($Env, data)), $of(this));
	$set(this, data, data);
}

$Object* Symbol$VarSymbol::accept($Symbol$Visitor* v, Object$* p) {
	return $of($nc(v)->visitVarSymbol(this, p));
}

$1List* Symbol$VarSymbol::getAnnotationMirrors() {
	return $Symbol::getAnnotationMirrors();
}

$Element* Symbol$VarSymbol::getEnclosingElement() {
	return $Symbol::getEnclosingElement();
}

$Name* Symbol$VarSymbol::getSimpleName() {
	return $Symbol::getSimpleName();
}

$TypeMirror* Symbol$VarSymbol::asType() {
	return $Symbol::asType();
}

$Object* Symbol$VarSymbol::lambda$setLazyConstValue$0($Attr* attr, $Env* env, $JCTree$JCVariableDecl* variable) {
	return $of($nc(attr)->attribLazyConstantValue(env, variable, this->type));
}

Symbol$VarSymbol::Symbol$VarSymbol() {
}

$Class* Symbol$VarSymbol::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::classInfo$.name)) {
			return Symbol$VarSymbol$$Lambda$lambda$setLazyConstValue$0::load$(name, initialize);
		}
	}
	$loadClass(Symbol$VarSymbol, name, initialize, &_Symbol$VarSymbol_ClassInfo_, allocate$Symbol$VarSymbol);
	return class$;
}

$Class* Symbol$VarSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com