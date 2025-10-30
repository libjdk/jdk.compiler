#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature$JvmTypeVisitor.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/JNIWriter$1.h>
#include <com/sun/tools/javac/jvm/JNIWriter$SimpleTypeVisitor.h>
#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $JNIWriter$1 = ::com::sun::tools::javac::jvm::JNIWriter$1;
using $JNIWriter$SimpleTypeVisitor = ::com::sun::tools::javac::jvm::JNIWriter$SimpleTypeVisitor;
using $JNIWriter$TypeSignature = ::com::sun::tools::javac::jvm::JNIWriter$TypeSignature;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _JNIWriter$TypeSignature$JvmTypeVisitor_FieldInfo_[] = {
	{"useFlatname", "Z", nullptr, $PRIVATE | $FINAL, $field(JNIWriter$TypeSignature$JvmTypeVisitor, useFlatname)},
	{}
};

$MethodInfo _JNIWriter$TypeSignature$JvmTypeVisitor_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(JNIWriter$TypeSignature$JvmTypeVisitor::*)(bool)>(&JNIWriter$TypeSignature$JvmTypeVisitor::init$))},
	{"getJvmPrimitiveSignature", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JNIWriter$TypeSignature$JvmTypeVisitor::*)($Type*)>(&JNIWriter$TypeSignature$JvmTypeVisitor::getJvmPrimitiveSignature))},
	{"setDeclaredType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(static_cast<void(JNIWriter$TypeSignature$JvmTypeVisitor::*)($Type*,$StringBuilder*)>(&JNIWriter$TypeSignature$JvmTypeVisitor::setDeclaredType))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/StringBuilder;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/StringBuilder;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/StringBuilder;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JNIWriter$TypeSignature$JvmTypeVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "com.sun.tools.javac.jvm.JNIWriter", "TypeSignature", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$JvmTypeVisitor", "com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "JvmTypeVisitor", $STATIC},
	{"com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor", "com.sun.tools.javac.jvm.JNIWriter", "SimpleTypeVisitor", $STATIC},
	{}
};

$ClassInfo _JNIWriter$TypeSignature$JvmTypeVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$JvmTypeVisitor",
	"com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor",
	nullptr,
	_JNIWriter$TypeSignature$JvmTypeVisitor_FieldInfo_,
	_JNIWriter$TypeSignature$JvmTypeVisitor_MethodInfo_,
	"Lcom/sun/tools/javac/jvm/JNIWriter$SimpleTypeVisitor<Lcom/sun/tools/javac/code/Type;Ljava/lang/StringBuilder;>;",
	nullptr,
	_JNIWriter$TypeSignature$JvmTypeVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.JNIWriter"
};

$Object* allocate$JNIWriter$TypeSignature$JvmTypeVisitor($Class* clazz) {
	return $of($alloc(JNIWriter$TypeSignature$JvmTypeVisitor));
}

void JNIWriter$TypeSignature$JvmTypeVisitor::init$(bool useFlatname) {
	$JNIWriter$SimpleTypeVisitor::init$();
	this->useFlatname = useFlatname;
}

$Type* JNIWriter$TypeSignature$JvmTypeVisitor::visitClassType($Type$ClassType* t, $StringBuilder* s) {
	setDeclaredType(t, s);
	return nullptr;
}

$Type* JNIWriter$TypeSignature$JvmTypeVisitor::visitArrayType($Type$ArrayType* t, $StringBuilder* s) {
	$nc(s)->append("["_s);
	return $cast($Type, $nc($($cast($Type, $nc(t)->getComponentType())))->accept(static_cast<$Type$Visitor*>(this), $of(s)));
}

$Type* JNIWriter$TypeSignature$JvmTypeVisitor::visitType($Type* t, $StringBuilder* s) {
	if ($nc(t)->isPrimitiveOrVoid()) {
		$nc(s)->append($(getJvmPrimitiveSignature(t)));
		return nullptr;
	}
	return $cast($Type, $nc(t)->accept(static_cast<$Type$Visitor*>(this), $of(s)));
}

void JNIWriter$TypeSignature$JvmTypeVisitor::setDeclaredType($Type* t, $StringBuilder* s) {
	$useLocalCurrentObjectStackCache();
	$var($String, classname, this->useFlatname ? $nc($($nc($nc(t)->tsym)->flatName()))->toString() : $nc($($nc(t->tsym)->getQualifiedName()))->toString());
	$assign(classname, $nc(classname)->replace(u'.', u'/'));
	$nc(s)->append("L"_s)->append(classname)->append(";"_s);
}

$String* JNIWriter$TypeSignature$JvmTypeVisitor::getJvmPrimitiveSignature($Type* t) {
	$init($JNIWriter$1);
	switch ($nc($JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc(t)->getKind())))->ordinal())) {
	case 11:
		{
			return "V"_s;
		}
	case 1:
		{
			return "Z"_s;
		}
	case 2:
		{
			return "B"_s;
		}
	case 6:
		{
			return "C"_s;
		}
	case 3:
		{
			return "S"_s;
		}
	case 4:
		{
			return "I"_s;
		}
	case 5:
		{
			return "J"_s;
		}
	case 7:
		{
			return "F"_s;
		}
	case 8:
		{
			return "D"_s;
		}
	default:
		{
			$Assert::error("unknown type: should not happen"_s);
		}
	}
	return nullptr;
}

$Object* JNIWriter$TypeSignature$JvmTypeVisitor::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($StringBuilder, s)));
}

$Object* JNIWriter$TypeSignature$JvmTypeVisitor::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($StringBuilder, s)));
}

$Object* JNIWriter$TypeSignature$JvmTypeVisitor::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($StringBuilder, s)));
}

JNIWriter$TypeSignature$JvmTypeVisitor::JNIWriter$TypeSignature$JvmTypeVisitor() {
}

$Class* JNIWriter$TypeSignature$JvmTypeVisitor::load$($String* name, bool initialize) {
	$loadClass(JNIWriter$TypeSignature$JvmTypeVisitor, name, initialize, &_JNIWriter$TypeSignature$JvmTypeVisitor_ClassInfo_, allocate$JNIWriter$TypeSignature$JvmTypeVisitor);
	return class$;
}

$Class* JNIWriter$TypeSignature$JvmTypeVisitor::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com