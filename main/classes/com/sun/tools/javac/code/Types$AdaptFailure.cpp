#include <com/sun/tools/javac/code/Types$AdaptFailure.h>

#include <com/sun/tools/javac/code/Types.h>
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

using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$AdaptFailure_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Types$AdaptFailure, serialVersionUID)},
	{}
};

$MethodInfo _Types$AdaptFailure_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Types$AdaptFailure::*)()>(&Types$AdaptFailure::init$))},
	{}
};

$InnerClassInfo _Types$AdaptFailure_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$AdaptFailure", "com.sun.tools.javac.code.Types", "AdaptFailure", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$AdaptFailure_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Types$AdaptFailure",
	"java.lang.RuntimeException",
	nullptr,
	_Types$AdaptFailure_FieldInfo_,
	_Types$AdaptFailure_MethodInfo_,
	nullptr,
	nullptr,
	_Types$AdaptFailure_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$AdaptFailure($Class* clazz) {
	return $of($alloc(Types$AdaptFailure));
}

void Types$AdaptFailure::init$() {
	$RuntimeException::init$();
}

Types$AdaptFailure::Types$AdaptFailure() {
}

Types$AdaptFailure::Types$AdaptFailure(const Types$AdaptFailure& e) {
}

Types$AdaptFailure Types$AdaptFailure::wrapper$() {
	$pendingException(this);
	return *this;
}

void Types$AdaptFailure::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* Types$AdaptFailure::load$($String* name, bool initialize) {
	$loadClass(Types$AdaptFailure, name, initialize, &_Types$AdaptFailure_ClassInfo_, allocate$Types$AdaptFailure);
	return class$;
}

$Class* Types$AdaptFailure::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com