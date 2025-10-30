#include <com/sun/tools/javac/parser/Lexer.h>

#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <jcpp.h>

using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$MethodInfo _Lexer_MethodInfo_[] = {
	{"errPos", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"errPos", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineMap", "()Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"nextToken", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"prevToken", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $ABSTRACT},
	{"split", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $ABSTRACT},
	{"token", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $ABSTRACT},
	{"token", "(I)Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Lexer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.parser.Lexer",
	nullptr,
	nullptr,
	nullptr,
	_Lexer_MethodInfo_
};

$Object* allocate$Lexer($Class* clazz) {
	return $of($alloc(Lexer));
}

$Class* Lexer::load$($String* name, bool initialize) {
	$loadClass(Lexer, name, initialize, &_Lexer_ClassInfo_, allocate$Lexer);
	return class$;
}

$Class* Lexer::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com