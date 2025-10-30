#include <com/sun/tools/javac/jvm/ClassReader$ArrayAttributeProxy.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$ProxyVisitor = ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$ArrayAttributeProxy_FieldInfo_[] = {
	{"values", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute;>;", 0, $field(ClassReader$ArrayAttributeProxy, values)},
	{}
};

$MethodInfo _ClassReader$ArrayAttributeProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute;>;)V", 0, $method(static_cast<void(ClassReader$ArrayAttributeProxy::*)($List*)>(&ClassReader$ArrayAttributeProxy::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$ArrayAttributeProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$ArrayAttributeProxy", "com.sun.tools.javac.jvm.ClassReader", "ArrayAttributeProxy", $STATIC},
	{}
};

$ClassInfo _ClassReader$ArrayAttributeProxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$ArrayAttributeProxy",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	_ClassReader$ArrayAttributeProxy_FieldInfo_,
	_ClassReader$ArrayAttributeProxy_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$ArrayAttributeProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$ArrayAttributeProxy($Class* clazz) {
	return $of($alloc(ClassReader$ArrayAttributeProxy));
}

void ClassReader$ArrayAttributeProxy::init$($List* values) {
	$Attribute::init$(nullptr);
	$set(this, values, values);
}

void ClassReader$ArrayAttributeProxy::accept($Attribute$Visitor* v) {
	$nc(($cast($ClassReader$ProxyVisitor, v)))->visitArrayAttributeProxy(this);
}

$String* ClassReader$ArrayAttributeProxy::toString() {
	return $str({"{"_s, this->values, "}"_s});
}

ClassReader$ArrayAttributeProxy::ClassReader$ArrayAttributeProxy() {
}

$Class* ClassReader$ArrayAttributeProxy::load$($String* name, bool initialize) {
	$loadClass(ClassReader$ArrayAttributeProxy, name, initialize, &_ClassReader$ArrayAttributeProxy_ClassInfo_, allocate$ClassReader$ArrayAttributeProxy);
	return class$;
}

$Class* ClassReader$ArrayAttributeProxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com