#include <com/sun/tools/javac/jvm/ClassReader$TypeAnnotationProxy.h>

#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <jcpp.h>

using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$TypeAnnotationProxy_FieldInfo_[] = {
	{"compound", "Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, $FINAL, $field(ClassReader$TypeAnnotationProxy, compound)},
	{"position", "Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $FINAL, $field(ClassReader$TypeAnnotationProxy, position)},
	{}
};

$MethodInfo _ClassReader$TypeAnnotationProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$TypeAnnotationProxy::*)($ClassReader$CompoundAnnotationProxy*,$TypeAnnotationPosition*)>(&ClassReader$TypeAnnotationProxy::init$))},
	{}
};

$InnerClassInfo _ClassReader$TypeAnnotationProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$TypeAnnotationProxy", "com.sun.tools.javac.jvm.ClassReader", "TypeAnnotationProxy", $STATIC},
	{}
};

$ClassInfo _ClassReader$TypeAnnotationProxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$TypeAnnotationProxy",
	"java.lang.Object",
	nullptr,
	_ClassReader$TypeAnnotationProxy_FieldInfo_,
	_ClassReader$TypeAnnotationProxy_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$TypeAnnotationProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$TypeAnnotationProxy($Class* clazz) {
	return $of($alloc(ClassReader$TypeAnnotationProxy));
}

void ClassReader$TypeAnnotationProxy::init$($ClassReader$CompoundAnnotationProxy* compound, $TypeAnnotationPosition* position) {
	$set(this, compound, compound);
	$set(this, position, position);
}

ClassReader$TypeAnnotationProxy::ClassReader$TypeAnnotationProxy() {
}

$Class* ClassReader$TypeAnnotationProxy::load$($String* name, bool initialize) {
	$loadClass(ClassReader$TypeAnnotationProxy, name, initialize, &_ClassReader$TypeAnnotationProxy_ClassInfo_, allocate$ClassReader$TypeAnnotationProxy);
	return class$;
}

$Class* ClassReader$TypeAnnotationProxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com