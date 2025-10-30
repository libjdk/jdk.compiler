#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction.h>

#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction$1.h>
#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction$2.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BLOCK_STMT
#undef CATCH_CLAUSE

using $JavacParser$BasicErrorRecoveryActionArray = $Array<::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction>;
using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JavacParser$BasicErrorRecoveryAction$1 = ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction$1;
using $JavacParser$BasicErrorRecoveryAction$2 = ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction$2;
using $JavacParser$ErrorRecoveryAction = ::com::sun::tools::javac::parser::JavacParser$ErrorRecoveryAction;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavacParser$BasicErrorRecoveryAction_FieldInfo_[] = {
	{"BLOCK_STMT", "Lcom/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$BasicErrorRecoveryAction, BLOCK_STMT)},
	{"CATCH_CLAUSE", "Lcom/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$BasicErrorRecoveryAction, CATCH_CLAUSE)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser$BasicErrorRecoveryAction, $VALUES)},
	{}
};

$MethodInfo _JavacParser$BasicErrorRecoveryAction_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavacParser$BasicErrorRecoveryActionArray*(*)()>(&JavacParser$BasicErrorRecoveryAction::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JavacParser$BasicErrorRecoveryAction::*)($String*,int32_t)>(&JavacParser$BasicErrorRecoveryAction::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacParser$BasicErrorRecoveryAction*(*)($String*)>(&JavacParser$BasicErrorRecoveryAction::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavacParser$BasicErrorRecoveryActionArray*(*)()>(&JavacParser$BasicErrorRecoveryAction::values))},
	{}
};

$InnerClassInfo _JavacParser$BasicErrorRecoveryAction_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "BasicErrorRecoveryAction", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "ErrorRecoveryAction", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacParser$BasicErrorRecoveryAction_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction",
	"java.lang.Enum",
	"com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction",
	_JavacParser$BasicErrorRecoveryAction_FieldInfo_,
	_JavacParser$BasicErrorRecoveryAction_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction;>;Lcom/sun/tools/javac/parser/JavacParser$ErrorRecoveryAction;",
	nullptr,
	_JavacParser$BasicErrorRecoveryAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$BasicErrorRecoveryAction($Class* clazz) {
	return $of($alloc(JavacParser$BasicErrorRecoveryAction));
}

$String* JavacParser$BasicErrorRecoveryAction::toString() {
	 return this->$Enum::toString();
}

bool JavacParser$BasicErrorRecoveryAction::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t JavacParser$BasicErrorRecoveryAction::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* JavacParser$BasicErrorRecoveryAction::clone() {
	 return this->$Enum::clone();
}

void JavacParser$BasicErrorRecoveryAction::finalize() {
	this->$Enum::finalize();
}

JavacParser$BasicErrorRecoveryAction* JavacParser$BasicErrorRecoveryAction::BLOCK_STMT = nullptr;
JavacParser$BasicErrorRecoveryAction* JavacParser$BasicErrorRecoveryAction::CATCH_CLAUSE = nullptr;
$JavacParser$BasicErrorRecoveryActionArray* JavacParser$BasicErrorRecoveryAction::$VALUES = nullptr;

$JavacParser$BasicErrorRecoveryActionArray* JavacParser$BasicErrorRecoveryAction::$values() {
	$init(JavacParser$BasicErrorRecoveryAction);
	return $new($JavacParser$BasicErrorRecoveryActionArray, {
		JavacParser$BasicErrorRecoveryAction::BLOCK_STMT,
		JavacParser$BasicErrorRecoveryAction::CATCH_CLAUSE
	});
}

$JavacParser$BasicErrorRecoveryActionArray* JavacParser$BasicErrorRecoveryAction::values() {
	$init(JavacParser$BasicErrorRecoveryAction);
	return $cast($JavacParser$BasicErrorRecoveryActionArray, JavacParser$BasicErrorRecoveryAction::$VALUES->clone());
}

JavacParser$BasicErrorRecoveryAction* JavacParser$BasicErrorRecoveryAction::valueOf($String* name) {
	$init(JavacParser$BasicErrorRecoveryAction);
	return $cast(JavacParser$BasicErrorRecoveryAction, $Enum::valueOf(JavacParser$BasicErrorRecoveryAction::class$, name));
}

void JavacParser$BasicErrorRecoveryAction::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JavacParser$BasicErrorRecoveryAction($Class* class$) {
	$assignStatic(JavacParser$BasicErrorRecoveryAction::BLOCK_STMT, $new($JavacParser$BasicErrorRecoveryAction$1, "BLOCK_STMT"_s, 0));
	$assignStatic(JavacParser$BasicErrorRecoveryAction::CATCH_CLAUSE, $new($JavacParser$BasicErrorRecoveryAction$2, "CATCH_CLAUSE"_s, 1));
	$assignStatic(JavacParser$BasicErrorRecoveryAction::$VALUES, JavacParser$BasicErrorRecoveryAction::$values());
}

JavacParser$BasicErrorRecoveryAction::JavacParser$BasicErrorRecoveryAction() {
}

$Class* JavacParser$BasicErrorRecoveryAction::load$($String* name, bool initialize) {
	$loadClass(JavacParser$BasicErrorRecoveryAction, name, initialize, &_JavacParser$BasicErrorRecoveryAction_ClassInfo_, clinit$JavacParser$BasicErrorRecoveryAction, allocate$JavacParser$BasicErrorRecoveryAction);
	return class$;
}

$Class* JavacParser$BasicErrorRecoveryAction::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com