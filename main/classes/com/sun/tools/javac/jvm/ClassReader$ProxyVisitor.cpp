#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>

#include <com/sun/tools/javac/jvm/ClassReader$ArrayAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <jcpp.h>

using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$ArrayAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$ArrayAttributeProxy;
using $ClassReader$ClassAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$ClassAttributeProxy;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $ClassReader$EnumAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$EnumAttributeProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _ClassReader$ProxyVisitor_MethodInfo_[] = {
	{"visitArrayAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$ArrayAttributeProxy;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitClassAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCompoundAnnotationProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitEnumAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ClassReader$ProxyVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$ProxyVisitor", "com.sun.tools.javac.jvm.ClassReader", "ProxyVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$ProxyVisitor_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.jvm.ClassReader$ProxyVisitor",
	nullptr,
	"com.sun.tools.javac.code.Attribute$Visitor",
	nullptr,
	_ClassReader$ProxyVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$ProxyVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$ProxyVisitor($Class* clazz) {
	return $of($alloc(ClassReader$ProxyVisitor));
}

$Class* ClassReader$ProxyVisitor::load$($String* name, bool initialize) {
	$loadClass(ClassReader$ProxyVisitor, name, initialize, &_ClassReader$ProxyVisitor_ClassInfo_, allocate$ClassReader$ProxyVisitor);
	return class$;
}

$Class* ClassReader$ProxyVisitor::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com