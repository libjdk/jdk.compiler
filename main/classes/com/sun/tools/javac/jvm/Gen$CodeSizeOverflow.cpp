#include <com/sun/tools/javac/jvm/Gen$CodeSizeOverflow.h>

#include <com/sun/tools/javac/jvm/Gen.h>
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

using $Gen = ::com::sun::tools::javac::jvm::Gen;
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

$FieldInfo _Gen$CodeSizeOverflow_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Gen$CodeSizeOverflow, serialVersionUID)},
	{}
};

$MethodInfo _Gen$CodeSizeOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Gen$CodeSizeOverflow::*)()>(&Gen$CodeSizeOverflow::init$))},
	{}
};

$InnerClassInfo _Gen$CodeSizeOverflow_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Gen$CodeSizeOverflow", "com.sun.tools.javac.jvm.Gen", "CodeSizeOverflow", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Gen$CodeSizeOverflow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.Gen$CodeSizeOverflow",
	"java.lang.RuntimeException",
	nullptr,
	_Gen$CodeSizeOverflow_FieldInfo_,
	_Gen$CodeSizeOverflow_MethodInfo_,
	nullptr,
	nullptr,
	_Gen$CodeSizeOverflow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Gen"
};

$Object* allocate$Gen$CodeSizeOverflow($Class* clazz) {
	return $of($alloc(Gen$CodeSizeOverflow));
}

void Gen$CodeSizeOverflow::init$() {
	$RuntimeException::init$();
}

Gen$CodeSizeOverflow::Gen$CodeSizeOverflow() {
}

Gen$CodeSizeOverflow::Gen$CodeSizeOverflow(const Gen$CodeSizeOverflow& e) {
}

Gen$CodeSizeOverflow Gen$CodeSizeOverflow::wrapper$() {
	$pendingException(this);
	return *this;
}

void Gen$CodeSizeOverflow::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* Gen$CodeSizeOverflow::load$($String* name, bool initialize) {
	$loadClass(Gen$CodeSizeOverflow, name, initialize, &_Gen$CodeSizeOverflow_ClassInfo_, allocate$Gen$CodeSizeOverflow);
	return class$;
}

$Class* Gen$CodeSizeOverflow::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com