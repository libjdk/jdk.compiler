#include <com/sun/tools/javac/model/AnnotationProxyMaker$ValueVisitor.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute$UnresolvedClass.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/model/AnnotationProxyMaker$MirroredTypeExceptionProxy.h>
#include <com/sun/tools/javac/model/AnnotationProxyMaker$MirroredTypesExceptionProxy.h>
#include <com/sun/tools/javac/model/AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy.h>
#include <com/sun/tools/javac/model/AnnotationProxyMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Enum.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Method.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <sun/reflect/annotation/AnnotationType.h>
#include <sun/reflect/annotation/EnumConstantNotPresentExceptionProxy.h>
#include <sun/reflect/annotation/ExceptionProxy.h>
#include <jcpp.h>

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Attribute$UnresolvedClass = ::com::sun::tools::javac::code::Attribute$UnresolvedClass;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $AnnotationProxyMaker = ::com::sun::tools::javac::model::AnnotationProxyMaker;
using $AnnotationProxyMaker$MirroredTypeExceptionProxy = ::com::sun::tools::javac::model::AnnotationProxyMaker$MirroredTypeExceptionProxy;
using $AnnotationProxyMaker$MirroredTypesExceptionProxy = ::com::sun::tools::javac::model::AnnotationProxyMaker$MirroredTypesExceptionProxy;
using $AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy = ::com::sun::tools::javac::model::AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Annotation = ::java::lang::annotation::Annotation;
using $1Array = ::java::lang::reflect::Array;
using $Method = ::java::lang::reflect::Method;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $AnnotationType = ::sun::reflect::annotation::AnnotationType;
using $EnumConstantNotPresentExceptionProxy = ::sun::reflect::annotation::EnumConstantNotPresentExceptionProxy;
using $ExceptionProxy = ::sun::reflect::annotation::ExceptionProxy;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$FieldInfo _AnnotationProxyMaker$ValueVisitor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/model/AnnotationProxyMaker;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationProxyMaker$ValueVisitor, this$0)},
	{"meth", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $field(AnnotationProxyMaker$ValueVisitor, meth)},
	{"returnClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(AnnotationProxyMaker$ValueVisitor, returnClass)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AnnotationProxyMaker$ValueVisitor, value)},
	{}
};

$MethodInfo _AnnotationProxyMaker$ValueVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/model/AnnotationProxyMaker;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $method(static_cast<void(AnnotationProxyMaker$ValueVisitor::*)($AnnotationProxyMaker*,$Symbol$MethodSymbol*)>(&AnnotationProxyMaker$ValueVisitor::init$))},
	{"getValue", "(Lcom/sun/tools/javac/code/Attribute;)Ljava/lang/Object;", nullptr, 0},
	{"typeMismatch", "(Ljava/lang/reflect/Method;Lcom/sun/tools/javac/code/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(AnnotationProxyMaker$ValueVisitor::*)($Method*,$Attribute*)>(&AnnotationProxyMaker$ValueVisitor::typeMismatch))},
	{"visitArray", "(Lcom/sun/tools/javac/code/Attribute$Array;)V", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/tools/javac/code/Attribute$Class;)V", nullptr, $PUBLIC},
	{"visitCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"visitConstant", "(Lcom/sun/tools/javac/code/Attribute$Constant;)V", nullptr, $PUBLIC},
	{"visitEnum", "(Lcom/sun/tools/javac/code/Attribute$Enum;)V", nullptr, $PUBLIC},
	{"visitError", "(Lcom/sun/tools/javac/code/Attribute$Error;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AnnotationProxyMaker$ValueVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor", "com.sun.tools.javac.model.AnnotationProxyMaker", "ValueVisitor", $PRIVATE},
	{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy", nullptr, "AnnotationTypeMismatchExceptionProxy", 0},
	{}
};

$ClassInfo _AnnotationProxyMaker$ValueVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor",
	"java.lang.Object",
	"com.sun.tools.javac.code.Attribute$Visitor",
	_AnnotationProxyMaker$ValueVisitor_FieldInfo_,
	_AnnotationProxyMaker$ValueVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationProxyMaker$ValueVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.AnnotationProxyMaker"
};

$Object* allocate$AnnotationProxyMaker$ValueVisitor($Class* clazz) {
	return $of($alloc(AnnotationProxyMaker$ValueVisitor));
}

void AnnotationProxyMaker$ValueVisitor::init$($AnnotationProxyMaker* this$0, $Symbol$MethodSymbol* meth) {
	$set(this, this$0, this$0);
	$set(this, meth, meth);
}

$Object* AnnotationProxyMaker$ValueVisitor::getValue($Attribute* attr) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Method, method, nullptr);
	try {
		$assign(method, $nc(this->this$0->annoType)->getMethod($($nc($nc(this->meth)->name)->toString()), $$new($ClassArray, 0)));
	} catch ($NoSuchMethodException& e) {
		return $of(nullptr);
	}
	$set(this, returnClass, $nc(method)->getReturnType());
	$nc(attr)->accept(this);
	if (!($instanceOf($ExceptionProxy, this->value)) && !$nc($AnnotationType::invocationHandlerReturnType(this->returnClass))->isInstance(this->value)) {
		typeMismatch(method, attr);
	}
	return $of(this->value);
}

void AnnotationProxyMaker$ValueVisitor::visitConstant($Attribute$Constant* c) {
	$set(this, value, $nc(c)->getValue());
}

void AnnotationProxyMaker$ValueVisitor::visitClass($Attribute$Class* c) {
	$set(this, value, $new($AnnotationProxyMaker$MirroredTypeExceptionProxy, $nc(c)->classType));
}

void AnnotationProxyMaker$ValueVisitor::visitArray($Attribute$Array* a) {
	$useLocalCurrentObjectStackCache();
	$var($Name, elemName, $nc($nc($nc(($cast($Type$ArrayType, $nc(a)->type)))->elemtype)->tsym)->getQualifiedName());
	if ($nc($of(elemName))->equals($nc($nc(elemName->table)->names)->java_lang_Class)) {
		$var($ListBuffer, elems, $new($ListBuffer));
		{
			$var($AttributeArray, arr$, a->values);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, value, arr$->get(i$));
				{
					$var($Type, elem, $nc(($cast($Attribute$Class, value)))->classType);
					elems->append(elem);
				}
			}
		}
		$set(this, value, $new($AnnotationProxyMaker$MirroredTypesExceptionProxy, $(elems->toList())));
	} else {
		int32_t len = $nc(a->values)->length;
		$Class* returnClassSaved = this->returnClass;
		$set(this, returnClass, $nc(this->returnClass)->getComponentType());
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				$var($Object, res, $1Array::newInstance(this->returnClass, len));
				for (int32_t i = 0; i < len; ++i) {
					$nc($nc(a->values)->get(i))->accept(this);
					if (this->value == nullptr || $instanceOf($ExceptionProxy, this->value)) {
						return$1 = true;
						goto $finally;
					}
					try {
						$1Array::set(res, i, this->value);
					} catch ($IllegalArgumentException& e) {
						$set(this, value, nullptr);
						return;
					}
				}
				$set(this, value, res);
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				$set(this, returnClass, returnClassSaved);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		}
	}
}

void AnnotationProxyMaker$ValueVisitor::visitEnum($Attribute$Enum* e) {
	if ($nc(this->returnClass)->isEnum()) {
		$var($String, constName, $nc($nc(e)->value)->toString());
		try {
			$set(this, value, $Enum::valueOf(this->returnClass, constName));
		} catch ($IllegalArgumentException& ex) {
			$set(this, value, $new($EnumConstantNotPresentExceptionProxy, this->returnClass, constName));
		}
	} else {
		$set(this, value, nullptr);
	}
}

void AnnotationProxyMaker$ValueVisitor::visitCompound($Attribute$Compound* c) {
	try {
		$load($Annotation);
		$Class* nested = $nc(this->returnClass)->asSubclass($Annotation::class$);
		$set(this, value, $AnnotationProxyMaker::generateAnnotation(c, nested));
	} catch ($ClassCastException& ex) {
		$set(this, value, nullptr);
	}
}

void AnnotationProxyMaker$ValueVisitor::visitError($Attribute$Error* e) {
	{
		$var($Attribute$UnresolvedClass, unresolvedClass, nullptr);
		bool var$0 = $instanceOf($Attribute$UnresolvedClass, e);
		if (var$0) {
			$assign(unresolvedClass, $cast($Attribute$UnresolvedClass, e));
			var$0 = true;
		}
		if (var$0) {
			$set(this, value, $new($AnnotationProxyMaker$MirroredTypeExceptionProxy, $nc(unresolvedClass)->classType));
		} else {
			$set(this, value, nullptr);
		}
	}
}

void AnnotationProxyMaker$ValueVisitor::typeMismatch($Method* method, $Attribute* attr) {
	{
	}
	$set(this, value, $new($AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy, this, method, attr));
}

AnnotationProxyMaker$ValueVisitor::AnnotationProxyMaker$ValueVisitor() {
}

$Class* AnnotationProxyMaker$ValueVisitor::load$($String* name, bool initialize) {
	$loadClass(AnnotationProxyMaker$ValueVisitor, name, initialize, &_AnnotationProxyMaker$ValueVisitor_ClassInfo_, allocate$AnnotationProxyMaker$ValueVisitor);
	return class$;
}

$Class* AnnotationProxyMaker$ValueVisitor::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com