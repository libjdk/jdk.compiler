#include <com/sun/tools/javac/main/Arguments$ErrorReporter.h>

#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/Option.h>
#include <jcpp.h>

using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Arguments$ErrorReporter_MethodInfo_[] = {
	{"report", "(Lcom/sun/tools/javac/main/Option;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Arguments$ErrorReporter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Arguments$ErrorReporter", "com.sun.tools.javac.main.Arguments", "ErrorReporter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Arguments$ErrorReporter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.main.Arguments$ErrorReporter",
	nullptr,
	nullptr,
	nullptr,
	_Arguments$ErrorReporter_MethodInfo_,
	nullptr,
	nullptr,
	_Arguments$ErrorReporter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Arguments"
};

$Object* allocate$Arguments$ErrorReporter($Class* clazz) {
	return $of($alloc(Arguments$ErrorReporter));
}

$Class* Arguments$ErrorReporter::load$($String* name, bool initialize) {
	$loadClass(Arguments$ErrorReporter, name, initialize, &_Arguments$ErrorReporter_ClassInfo_, allocate$Arguments$ErrorReporter);
	return class$;
}

$Class* Arguments$ErrorReporter::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com