#include <com/sun/tools/javac/jvm/ClassWriter$StringOverflow.h>

#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ClassWriter$StringOverflow_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassWriter$StringOverflow, serialVersionUID)},
	{"value", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ClassWriter$StringOverflow, value)},
	{}
};

$MethodInfo _ClassWriter$StringOverflow_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassWriter$StringOverflow::*)($String*)>(&ClassWriter$StringOverflow::init$))},
	{}
};

$InnerClassInfo _ClassWriter$StringOverflow_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$StringOverflow", "com.sun.tools.javac.jvm.ClassWriter", "StringOverflow", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ClassWriter$StringOverflow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter$StringOverflow",
	"java.lang.RuntimeException",
	nullptr,
	_ClassWriter$StringOverflow_FieldInfo_,
	_ClassWriter$StringOverflow_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$StringOverflow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$StringOverflow($Class* clazz) {
	return $of($alloc(ClassWriter$StringOverflow));
}

void ClassWriter$StringOverflow::init$($String* s) {
	$RuntimeException::init$();
	$set(this, value, s);
}

ClassWriter$StringOverflow::ClassWriter$StringOverflow() {
}

ClassWriter$StringOverflow::ClassWriter$StringOverflow(const ClassWriter$StringOverflow& e) {
}

ClassWriter$StringOverflow ClassWriter$StringOverflow::wrapper$() {
	$pendingException(this);
	return *this;
}

void ClassWriter$StringOverflow::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ClassWriter$StringOverflow::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$StringOverflow, name, initialize, &_ClassWriter$StringOverflow_ClassInfo_, allocate$ClassWriter$StringOverflow);
	return class$;
}

$Class* ClassWriter$StringOverflow::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com