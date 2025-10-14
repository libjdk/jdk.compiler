#include <com/sun/tools/javac/parser/ReferenceParser$ParseException.h>

#include <com/sun/tools/javac/parser/ReferenceParser.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ReferenceParser = ::com::sun::tools::javac::parser::ReferenceParser;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _ReferenceParser$ParseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferenceParser$ParseException, serialVersionUID)},
	{}
};

$MethodInfo _ReferenceParser$ParseException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ReferenceParser$ParseException::*)($String*)>(&ReferenceParser$ParseException::init$))},
	{}
};

$InnerClassInfo _ReferenceParser$ParseException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.ReferenceParser$ParseException", "com.sun.tools.javac.parser.ReferenceParser", "ParseException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ReferenceParser$ParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.ReferenceParser$ParseException",
	"java.lang.Exception",
	nullptr,
	_ReferenceParser$ParseException_FieldInfo_,
	_ReferenceParser$ParseException_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceParser$ParseException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.ReferenceParser"
};

$Object* allocate$ReferenceParser$ParseException($Class* clazz) {
	return $of($alloc(ReferenceParser$ParseException));
}

void ReferenceParser$ParseException::init$($String* message) {
	$Exception::init$(message);
}

ReferenceParser$ParseException::ReferenceParser$ParseException() {
}

ReferenceParser$ParseException::ReferenceParser$ParseException(const ReferenceParser$ParseException& e) {
}

ReferenceParser$ParseException ReferenceParser$ParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ReferenceParser$ParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ReferenceParser$ParseException::load$($String* name, bool initialize) {
	$loadClass(ReferenceParser$ParseException, name, initialize, &_ReferenceParser$ParseException_ClassInfo_, allocate$ReferenceParser$ParseException);
	return class$;
}

$Class* ReferenceParser$ParseException::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com