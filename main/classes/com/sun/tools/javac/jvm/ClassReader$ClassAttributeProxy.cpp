#include <com/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$ProxyVisitor = ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$ClassAttributeProxy_FieldInfo_[] = {
	{"classType", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(ClassReader$ClassAttributeProxy, classType)},
	{}
};

$MethodInfo _ClassReader$ClassAttributeProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$ClassAttributeProxy::*)($Type*)>(&ClassReader$ClassAttributeProxy::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$ClassAttributeProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$ClassAttributeProxy", "com.sun.tools.javac.jvm.ClassReader", "ClassAttributeProxy", $STATIC},
	{}
};

$ClassInfo _ClassReader$ClassAttributeProxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$ClassAttributeProxy",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	_ClassReader$ClassAttributeProxy_FieldInfo_,
	_ClassReader$ClassAttributeProxy_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$ClassAttributeProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$ClassAttributeProxy($Class* clazz) {
	return $of($alloc(ClassReader$ClassAttributeProxy));
}

void ClassReader$ClassAttributeProxy::init$($Type* classType) {
	$Attribute::init$(nullptr);
	$set(this, classType, classType);
}

void ClassReader$ClassAttributeProxy::accept($Attribute$Visitor* v) {
	$nc(($cast($ClassReader$ProxyVisitor, v)))->visitClassAttributeProxy(this);
}

$String* ClassReader$ClassAttributeProxy::toString() {
	return $str({"/*proxy class*/"_s, this->classType, ".class"_s});
}

ClassReader$ClassAttributeProxy::ClassReader$ClassAttributeProxy() {
}

$Class* ClassReader$ClassAttributeProxy::load$($String* name, bool initialize) {
	$loadClass(ClassReader$ClassAttributeProxy, name, initialize, &_ClassReader$ClassAttributeProxy_ClassInfo_, allocate$ClassReader$ClassAttributeProxy);
	return class$;
}

$Class* ClassReader$ClassAttributeProxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com