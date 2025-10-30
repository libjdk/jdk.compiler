#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction$2.h>

#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JavacParser$BasicErrorRecoveryAction = ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$MethodInfo _JavacParser$BasicErrorRecoveryAction$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(JavacParser$BasicErrorRecoveryAction$2::*)($String*,int32_t)>(&JavacParser$BasicErrorRecoveryAction$2::init$))},
	{"doRecover", "(Lcom/sun/tools/javac/parser/JavacParser;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacParser$BasicErrorRecoveryAction$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacParser$BasicErrorRecoveryAction$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "BasicErrorRecoveryAction", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacParser$BasicErrorRecoveryAction$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$2",
	"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction",
	nullptr,
	nullptr,
	_JavacParser$BasicErrorRecoveryAction$2_MethodInfo_,
	nullptr,
	&_JavacParser$BasicErrorRecoveryAction$2_EnclosingMethodInfo_,
	_JavacParser$BasicErrorRecoveryAction$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$BasicErrorRecoveryAction$2($Class* clazz) {
	return $of($alloc(JavacParser$BasicErrorRecoveryAction$2));
}

void JavacParser$BasicErrorRecoveryAction$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavacParser$BasicErrorRecoveryAction::init$($enum$name, $enum$ordinal);
}

$JCTree* JavacParser$BasicErrorRecoveryAction$2::doRecover($JavacParser* parser) {
	return $nc(parser)->catchClause();
}

JavacParser$BasicErrorRecoveryAction$2::JavacParser$BasicErrorRecoveryAction$2() {
}

$Class* JavacParser$BasicErrorRecoveryAction$2::load$($String* name, bool initialize) {
	$loadClass(JavacParser$BasicErrorRecoveryAction$2, name, initialize, &_JavacParser$BasicErrorRecoveryAction$2_ClassInfo_, allocate$JavacParser$BasicErrorRecoveryAction$2);
	return class$;
}

$Class* JavacParser$BasicErrorRecoveryAction$2::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com