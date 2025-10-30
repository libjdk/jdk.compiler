#include <com/sun/tools/javac/tree/Pretty$UncheckedIOException.h>

#include <com/sun/tools/javac/tree/Pretty.h>
#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $Pretty = ::com::sun::tools::javac::tree::Pretty;
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

$FieldInfo _Pretty$UncheckedIOException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Pretty$UncheckedIOException, serialVersionUID)},
	{}
};

$MethodInfo _Pretty$UncheckedIOException_MethodInfo_[] = {
	{"<init>", "(Ljava/io/IOException;)V", nullptr, 0, $method(static_cast<void(Pretty$UncheckedIOException::*)($IOException*)>(&Pretty$UncheckedIOException::init$))},
	{}
};

$InnerClassInfo _Pretty$UncheckedIOException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.Pretty$UncheckedIOException", "com.sun.tools.javac.tree.Pretty", "UncheckedIOException", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Pretty$UncheckedIOException_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.Pretty$UncheckedIOException",
	"java.lang.Error",
	nullptr,
	_Pretty$UncheckedIOException_FieldInfo_,
	_Pretty$UncheckedIOException_MethodInfo_,
	nullptr,
	nullptr,
	_Pretty$UncheckedIOException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.Pretty"
};

$Object* allocate$Pretty$UncheckedIOException($Class* clazz) {
	return $of($alloc(Pretty$UncheckedIOException));
}

void Pretty$UncheckedIOException::init$($IOException* e) {
	$Error::init$($($nc(e)->getMessage()), e);
}

Pretty$UncheckedIOException::Pretty$UncheckedIOException() {
}

Pretty$UncheckedIOException::Pretty$UncheckedIOException(const Pretty$UncheckedIOException& e) : $Error(e) {
}

void Pretty$UncheckedIOException::throw$() {
	throw *this;
}

$Class* Pretty$UncheckedIOException::load$($String* name, bool initialize) {
	$loadClass(Pretty$UncheckedIOException, name, initialize, &_Pretty$UncheckedIOException_ClassInfo_, allocate$Pretty$UncheckedIOException);
	return class$;
}

$Class* Pretty$UncheckedIOException::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com