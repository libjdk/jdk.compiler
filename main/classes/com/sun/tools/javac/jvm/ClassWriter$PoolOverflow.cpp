#include <com/sun/tools/javac/jvm/ClassWriter$PoolOverflow.h>

#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <jcpp.h>

using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassWriter$PoolOverflow_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassWriter$PoolOverflow, serialVersionUID)},
	{}
};

$MethodInfo _ClassWriter$PoolOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassWriter$PoolOverflow::*)()>(&ClassWriter$PoolOverflow::init$))},
	{}
};

$InnerClassInfo _ClassWriter$PoolOverflow_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$PoolOverflow", "com.sun.tools.javac.jvm.ClassWriter", "PoolOverflow", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ClassWriter$PoolOverflow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter$PoolOverflow",
	"java.lang.RuntimeException",
	nullptr,
	_ClassWriter$PoolOverflow_FieldInfo_,
	_ClassWriter$PoolOverflow_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$PoolOverflow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$PoolOverflow($Class* clazz) {
	return $of($alloc(ClassWriter$PoolOverflow));
}

void ClassWriter$PoolOverflow::init$() {
	$RuntimeException::init$();
}

ClassWriter$PoolOverflow::ClassWriter$PoolOverflow() {
}

ClassWriter$PoolOverflow::ClassWriter$PoolOverflow(const ClassWriter$PoolOverflow& e) : $RuntimeException(e) {
}

void ClassWriter$PoolOverflow::throw$() {
	throw *this;
}

$Class* ClassWriter$PoolOverflow::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$PoolOverflow, name, initialize, &_ClassWriter$PoolOverflow_ClassInfo_, allocate$ClassWriter$PoolOverflow);
	return class$;
}

$Class* ClassWriter$PoolOverflow::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com