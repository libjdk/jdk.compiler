#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction$1.h>

#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JavacParser$BasicErrorRecoveryAction = ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$MethodInfo _JavacParser$BasicErrorRecoveryAction$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(JavacParser$BasicErrorRecoveryAction$1::*)($String*,int32_t)>(&JavacParser$BasicErrorRecoveryAction$1::init$))},
	{"doRecover", "(Lcom/sun/tools/javac/parser/JavacParser;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacParser$BasicErrorRecoveryAction$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacParser$BasicErrorRecoveryAction$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "BasicErrorRecoveryAction", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacParser$BasicErrorRecoveryAction$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$1",
	"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction",
	nullptr,
	nullptr,
	_JavacParser$BasicErrorRecoveryAction$1_MethodInfo_,
	nullptr,
	&_JavacParser$BasicErrorRecoveryAction$1_EnclosingMethodInfo_,
	_JavacParser$BasicErrorRecoveryAction$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$BasicErrorRecoveryAction$1($Class* clazz) {
	return $of($alloc(JavacParser$BasicErrorRecoveryAction$1));
}

void JavacParser$BasicErrorRecoveryAction$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavacParser$BasicErrorRecoveryAction::init$($enum$name, $enum$ordinal);
}

$JCTree* JavacParser$BasicErrorRecoveryAction$1::doRecover($JavacParser* parser) {
	return $nc(parser)->parseStatementAsBlock();
}

JavacParser$BasicErrorRecoveryAction$1::JavacParser$BasicErrorRecoveryAction$1() {
}

$Class* JavacParser$BasicErrorRecoveryAction$1::load$($String* name, bool initialize) {
	$loadClass(JavacParser$BasicErrorRecoveryAction$1, name, initialize, &_JavacParser$BasicErrorRecoveryAction$1_ClassInfo_, allocate$JavacParser$BasicErrorRecoveryAction$1);
	return class$;
}

$Class* JavacParser$BasicErrorRecoveryAction$1::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com