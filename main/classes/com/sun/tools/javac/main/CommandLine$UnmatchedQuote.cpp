#include <com/sun/tools/javac/main/CommandLine$UnmatchedQuote.h>

#include <com/sun/tools/javac/main/CommandLine.h>
#include <jcpp.h>

using $CommandLine = ::com::sun::tools::javac::main::CommandLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _CommandLine$UnmatchedQuote_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CommandLine$UnmatchedQuote, serialVersionUID)},
	{"variableName", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(CommandLine$UnmatchedQuote, variableName)},
	{}
};

$MethodInfo _CommandLine$UnmatchedQuote_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CommandLine$UnmatchedQuote::*)($String*)>(&CommandLine$UnmatchedQuote::init$))},
	{}
};

$InnerClassInfo _CommandLine$UnmatchedQuote_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.CommandLine$UnmatchedQuote", "com.sun.tools.javac.main.CommandLine", "UnmatchedQuote", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CommandLine$UnmatchedQuote_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.CommandLine$UnmatchedQuote",
	"java.lang.Exception",
	nullptr,
	_CommandLine$UnmatchedQuote_FieldInfo_,
	_CommandLine$UnmatchedQuote_MethodInfo_,
	nullptr,
	nullptr,
	_CommandLine$UnmatchedQuote_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.CommandLine"
};

$Object* allocate$CommandLine$UnmatchedQuote($Class* clazz) {
	return $of($alloc(CommandLine$UnmatchedQuote));
}

void CommandLine$UnmatchedQuote::init$($String* variable) {
	$Exception::init$();
	$set(this, variableName, variable);
}

CommandLine$UnmatchedQuote::CommandLine$UnmatchedQuote() {
}

CommandLine$UnmatchedQuote::CommandLine$UnmatchedQuote(const CommandLine$UnmatchedQuote& e) : $Exception(e) {
}

void CommandLine$UnmatchedQuote::throw$() {
	throw *this;
}

$Class* CommandLine$UnmatchedQuote::load$($String* name, bool initialize) {
	$loadClass(CommandLine$UnmatchedQuote, name, initialize, &_CommandLine$UnmatchedQuote_ClassInfo_, allocate$CommandLine$UnmatchedQuote);
	return class$;
}

$Class* CommandLine$UnmatchedQuote::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com