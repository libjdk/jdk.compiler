#include <com/sun/tools/javac/parser/JavacParser$ErrorRecoveryAction.h>

#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$MethodInfo _JavacParser$ErrorRecoveryAction_MethodInfo_[] = {
	{"doRecover", "(Lcom/sun/tools/javac/parser/JavacParser;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavacParser$ErrorRecoveryAction_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "ErrorRecoveryAction", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacParser$ErrorRecoveryAction_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction",
	nullptr,
	nullptr,
	nullptr,
	_JavacParser$ErrorRecoveryAction_MethodInfo_,
	nullptr,
	nullptr,
	_JavacParser$ErrorRecoveryAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$ErrorRecoveryAction($Class* clazz) {
	return $of($alloc(JavacParser$ErrorRecoveryAction));
}

$Class* JavacParser$ErrorRecoveryAction::load$($String* name, bool initialize) {
	$loadClass(JavacParser$ErrorRecoveryAction, name, initialize, &_JavacParser$ErrorRecoveryAction_ClassInfo_, allocate$JavacParser$ErrorRecoveryAction);
	return class$;
}

$Class* JavacParser$ErrorRecoveryAction::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com