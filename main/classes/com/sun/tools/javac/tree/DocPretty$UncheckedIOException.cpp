#include <com/sun/tools/javac/tree/DocPretty$UncheckedIOException.h>

#include <com/sun/tools/javac/tree/DocPretty.h>
#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $DocPretty = ::com::sun::tools::javac::tree::DocPretty;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DocPretty$UncheckedIOException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DocPretty$UncheckedIOException, serialVersionUID)},
	{}
};

$MethodInfo _DocPretty$UncheckedIOException_MethodInfo_[] = {
	{"<init>", "(Ljava/io/IOException;)V", nullptr, 0, $method(static_cast<void(DocPretty$UncheckedIOException::*)($IOException*)>(&DocPretty$UncheckedIOException::init$))},
	{}
};

$InnerClassInfo _DocPretty$UncheckedIOException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DocPretty$UncheckedIOException", "com.sun.tools.javac.tree.DocPretty", "UncheckedIOException", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DocPretty$UncheckedIOException_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.DocPretty$UncheckedIOException",
	"java.lang.Error",
	nullptr,
	_DocPretty$UncheckedIOException_FieldInfo_,
	_DocPretty$UncheckedIOException_MethodInfo_,
	nullptr,
	nullptr,
	_DocPretty$UncheckedIOException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DocPretty"
};

$Object* allocate$DocPretty$UncheckedIOException($Class* clazz) {
	return $of($alloc(DocPretty$UncheckedIOException));
}

void DocPretty$UncheckedIOException::init$($IOException* e) {
	$Error::init$($($nc(e)->getMessage()), e);
}

DocPretty$UncheckedIOException::DocPretty$UncheckedIOException() {
}

DocPretty$UncheckedIOException::DocPretty$UncheckedIOException(const DocPretty$UncheckedIOException& e) : $Error(e) {
}

void DocPretty$UncheckedIOException::throw$() {
	throw *this;
}

$Class* DocPretty$UncheckedIOException::load$($String* name, bool initialize) {
	$loadClass(DocPretty$UncheckedIOException, name, initialize, &_DocPretty$UncheckedIOException_ClassInfo_, allocate$DocPretty$UncheckedIOException);
	return class$;
}

$Class* DocPretty$UncheckedIOException::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com