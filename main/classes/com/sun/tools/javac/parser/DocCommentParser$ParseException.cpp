#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>

#include <com/sun/tools/javac/parser/DocCommentParser.h>
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

using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
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

$FieldInfo _DocCommentParser$ParseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocCommentParser$ParseException, serialVersionUID)},
	{}
};

$MethodInfo _DocCommentParser$ParseException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DocCommentParser$ParseException::*)($String*)>(&DocCommentParser$ParseException::init$))},
	{}
};

$InnerClassInfo _DocCommentParser$ParseException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$ParseException", "com.sun.tools.javac.parser.DocCommentParser", "ParseException", $STATIC},
	{}
};

$ClassInfo _DocCommentParser$ParseException_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser$ParseException",
	"java.lang.Exception",
	nullptr,
	_DocCommentParser$ParseException_FieldInfo_,
	_DocCommentParser$ParseException_MethodInfo_,
	nullptr,
	nullptr,
	_DocCommentParser$ParseException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$ParseException($Class* clazz) {
	return $of($alloc(DocCommentParser$ParseException));
}

void DocCommentParser$ParseException::init$($String* key) {
	$Exception::init$(key);
}

DocCommentParser$ParseException::DocCommentParser$ParseException() {
}

DocCommentParser$ParseException::DocCommentParser$ParseException(const DocCommentParser$ParseException& e) {
}

DocCommentParser$ParseException DocCommentParser$ParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void DocCommentParser$ParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* DocCommentParser$ParseException::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$ParseException, name, initialize, &_DocCommentParser$ParseException_ClassInfo_, allocate$DocCommentParser$ParseException);
	return class$;
}

$Class* DocCommentParser$ParseException::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com