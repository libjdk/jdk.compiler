#include <com/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$ProxyVisitor = ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$EnumAttributeProxy_FieldInfo_[] = {
	{"enumType", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(ClassReader$EnumAttributeProxy, enumType)},
	{"enumerator", "Lcom/sun/tools/javac/util/Name;", nullptr, 0, $field(ClassReader$EnumAttributeProxy, enumerator)},
	{}
};

$MethodInfo _ClassReader$EnumAttributeProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$EnumAttributeProxy::*)($Type*,$Name*)>(&ClassReader$EnumAttributeProxy::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$EnumAttributeProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$EnumAttributeProxy", "com.sun.tools.javac.jvm.ClassReader", "EnumAttributeProxy", $STATIC},
	{}
};

$ClassInfo _ClassReader$EnumAttributeProxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$EnumAttributeProxy",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	_ClassReader$EnumAttributeProxy_FieldInfo_,
	_ClassReader$EnumAttributeProxy_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$EnumAttributeProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$EnumAttributeProxy($Class* clazz) {
	return $of($alloc(ClassReader$EnumAttributeProxy));
}

void ClassReader$EnumAttributeProxy::init$($Type* enumType, $Name* enumerator) {
	$Attribute::init$(nullptr);
	$set(this, enumType, enumType);
	$set(this, enumerator, enumerator);
}

void ClassReader$EnumAttributeProxy::accept($Attribute$Visitor* v) {
	$nc(($cast($ClassReader$ProxyVisitor, v)))->visitEnumAttributeProxy(this);
}

$String* ClassReader$EnumAttributeProxy::toString() {
	return $str({"/*proxy enum*/"_s, this->enumType, "."_s, this->enumerator});
}

ClassReader$EnumAttributeProxy::ClassReader$EnumAttributeProxy() {
}

$Class* ClassReader$EnumAttributeProxy::load$($String* name, bool initialize) {
	$loadClass(ClassReader$EnumAttributeProxy, name, initialize, &_ClassReader$EnumAttributeProxy_ClassInfo_, allocate$ClassReader$EnumAttributeProxy);
	return class$;
}

$Class* ClassReader$EnumAttributeProxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com