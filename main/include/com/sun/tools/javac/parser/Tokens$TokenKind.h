#ifndef _com_sun_tools_javac_parser_Tokens$TokenKind_h_
#define _com_sun_tools_javac_parser_Tokens$TokenKind_h_
//$ class com.sun.tools.javac.parser.Tokens$TokenKind
//$ extends java.lang.Enum
//$ implements com.sun.tools.javac.api.Formattable,java.util.function.Predicate

#include <com/sun/tools/javac/api/Formattable.h>
#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/util/function/Predicate.h>

#pragma push_macro("ABSTRACT")
#undef ABSTRACT
#pragma push_macro("AMP")
#undef AMP
#pragma push_macro("AMPAMP")
#undef AMPAMP
#pragma push_macro("AMPEQ")
#undef AMPEQ
#pragma push_macro("ARROW")
#undef ARROW
#pragma push_macro("ASSERT")
#undef ASSERT
#pragma push_macro("BANG")
#undef BANG
#pragma push_macro("BANGEQ")
#undef BANGEQ
#pragma push_macro("BAR")
#undef BAR
#pragma push_macro("BARBAR")
#undef BARBAR
#pragma push_macro("BAREQ")
#undef BAREQ
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("BREAK")
#undef BREAK
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("CARET")
#undef CARET
#pragma push_macro("CARETEQ")
#undef CARETEQ
#pragma push_macro("CASE")
#undef CASE
#pragma push_macro("CATCH")
#undef CATCH
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("CHARLITERAL")
#undef CHARLITERAL
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("COLCOL")
#undef COLCOL
#pragma push_macro("COLON")
#undef COLON
#pragma push_macro("COMMA")
#undef COMMA
#pragma push_macro("CONST")
#undef CONST
#pragma push_macro("CONTINUE")
#undef CONTINUE
#pragma push_macro("CUSTOM")
#undef CUSTOM
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DO")
#undef DO
#pragma push_macro("DOT")
#undef DOT
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("DOUBLELITERAL")
#undef DOUBLELITERAL
#pragma push_macro("ELLIPSIS")
#undef ELLIPSIS
#pragma push_macro("ELSE")
#undef ELSE
#pragma push_macro("ENUM")
#undef ENUM
#pragma push_macro("EOF")
#undef EOF
#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("EQEQ")
#undef EQEQ
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("EXTENDS")
#undef EXTENDS
#pragma push_macro("FALSE")
#undef FALSE
#pragma push_macro("FINAL")
#undef FINAL
#pragma push_macro("FINALLY")
#undef FINALLY
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("FLOATLITERAL")
#undef FLOATLITERAL
#pragma push_macro("FOR")
#undef FOR
#pragma push_macro("GOTO")
#undef GOTO
#pragma push_macro("GT")
#undef GT
#pragma push_macro("GTEQ")
#undef GTEQ
#pragma push_macro("GTGT")
#undef GTGT
#pragma push_macro("GTGTEQ")
#undef GTGTEQ
#pragma push_macro("GTGTGT")
#undef GTGTGT
#pragma push_macro("GTGTGTEQ")
#undef GTGTGTEQ
#pragma push_macro("IDENTIFIER")
#undef IDENTIFIER
#pragma push_macro("IF")
#undef IF
#pragma push_macro("IMPLEMENTS")
#undef IMPLEMENTS
#pragma push_macro("IMPORT")
#undef IMPORT
#pragma push_macro("INSTANCEOF")
#undef INSTANCEOF
#pragma push_macro("INT")
#undef INT
#pragma push_macro("INTERFACE")
#undef INTERFACE
#pragma push_macro("INTLITERAL")
#undef INTLITERAL
#pragma push_macro("LBRACE")
#undef LBRACE
#pragma push_macro("LBRACKET")
#undef LBRACKET
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("LONGLITERAL")
#undef LONGLITERAL
#pragma push_macro("LPAREN")
#undef LPAREN
#pragma push_macro("LT")
#undef LT
#pragma push_macro("LTEQ")
#undef LTEQ
#pragma push_macro("LTLT")
#undef LTLT
#pragma push_macro("LTLTEQ")
#undef LTLTEQ
#pragma push_macro("MONKEYS_AT")
#undef MONKEYS_AT
#pragma push_macro("NATIVE")
#undef NATIVE
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("PERCENT")
#undef PERCENT
#pragma push_macro("PERCENTEQ")
#undef PERCENTEQ
#pragma push_macro("PLUS")
#undef PLUS
#pragma push_macro("PLUSEQ")
#undef PLUSEQ
#pragma push_macro("PLUSPLUS")
#undef PLUSPLUS
#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("PROTECTED")
#undef PROTECTED
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("QUES")
#undef QUES
#pragma push_macro("RBRACE")
#undef RBRACE
#pragma push_macro("RBRACKET")
#undef RBRACKET
#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("RPAREN")
#undef RPAREN
#pragma push_macro("SEMI")
#undef SEMI
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("SLASH")
#undef SLASH
#pragma push_macro("SLASHEQ")
#undef SLASHEQ
#pragma push_macro("STAR")
#undef STAR
#pragma push_macro("STAREQ")
#undef STAREQ
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("STRICTFP")
#undef STRICTFP
#pragma push_macro("STRINGLITERAL")
#undef STRINGLITERAL
#pragma push_macro("SUB")
#undef SUB
#pragma push_macro("SUBEQ")
#undef SUBEQ
#pragma push_macro("SUBSUB")
#undef SUBSUB
#pragma push_macro("SUPER")
#undef SUPER
#pragma push_macro("SWITCH")
#undef SWITCH
#pragma push_macro("SYNCHRONIZED")
#undef SYNCHRONIZED
#pragma push_macro("THIS")
#undef THIS
#pragma push_macro("THROW")
#undef THROW
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("TILDE")
#undef TILDE
#pragma push_macro("TRANSIENT")
#undef TRANSIENT
#pragma push_macro("TRUE")
#undef TRUE
#pragma push_macro("TRY")
#undef TRY
#pragma push_macro("UNDERSCORE")
#undef UNDERSCORE
#pragma push_macro("VOID")
#undef VOID
#pragma push_macro("VOLATILE")
#undef VOLATILE
#pragma push_macro("WHILE")
#undef WHILE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class Messages;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class Tokens$Token$Tag;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import Tokens$TokenKind : public ::java::lang::Enum, public ::com::sun::tools::javac::api::Formattable, public ::java::util::function::Predicate {
	$class(Tokens$TokenKind, 0, ::java::lang::Enum, ::com::sun::tools::javac::api::Formattable, ::java::util::function::Predicate)
public:
	Tokens$TokenKind();
	static $Array<::com::sun::tools::javac::parser::Tokens$TokenKind>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name);
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::parser::Tokens$Token$Tag* tag);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::com::sun::tools::javac::parser::Tokens$Token$Tag* tag);
	virtual $String* getKind() override;
	virtual bool test(::com::sun::tools::javac::parser::Tokens$TokenKind* that);
	virtual bool test(Object$* that) override;
	virtual $String* toString() override;
	virtual $String* toString(::java::util::Locale* locale, ::com::sun::tools::javac::api::Messages* messages) override;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::Tokens$TokenKind>* values();
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* EOF;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* ERROR;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* IDENTIFIER;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* ABSTRACT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* ASSERT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* BOOLEAN;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* BREAK;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* BYTE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CASE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CATCH;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CHAR;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CLASS;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CONST;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CONTINUE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* DEFAULT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* DO;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* DOUBLE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* ELSE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* ENUM;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* EXTENDS;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* FINAL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* FINALLY;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* FLOAT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* FOR;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* GOTO;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* IF;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* IMPLEMENTS;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* IMPORT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* INSTANCEOF;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* INT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* INTERFACE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LONG;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* NATIVE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* NEW;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PACKAGE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PRIVATE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PROTECTED;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PUBLIC;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* RETURN;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SHORT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* STATIC;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* STRICTFP;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SUPER;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SWITCH;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SYNCHRONIZED;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* THIS;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* THROW;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* THROWS;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* TRANSIENT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* TRY;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* VOID;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* VOLATILE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* WHILE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* INTLITERAL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LONGLITERAL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* FLOATLITERAL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* DOUBLELITERAL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CHARLITERAL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* STRINGLITERAL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* TRUE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* FALSE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* NULL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* UNDERSCORE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* ARROW;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* COLCOL;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LPAREN;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* RPAREN;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LBRACE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* RBRACE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LBRACKET;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* RBRACKET;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SEMI;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* COMMA;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* DOT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* ELLIPSIS;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* EQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* GT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* BANG;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* TILDE;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* QUES;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* COLON;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* EQEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LTEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* GTEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* BANGEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* AMPAMP;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* BARBAR;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PLUSPLUS;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SUBSUB;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PLUS;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SUB;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* STAR;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SLASH;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* AMP;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* BAR;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CARET;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PERCENT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LTLT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* GTGT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* GTGTGT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PLUSEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SUBEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* STAREQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* SLASHEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* AMPEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* BAREQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CARETEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* PERCENTEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* LTLTEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* GTGTEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* GTGTGTEQ;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* MONKEYS_AT;
	static ::com::sun::tools::javac::parser::Tokens$TokenKind* CUSTOM;
	static $Array<::com::sun::tools::javac::parser::Tokens$TokenKind>* $VALUES;
	$String* name$ = nullptr;
	::com::sun::tools::javac::parser::Tokens$Token$Tag* tag = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ABSTRACT")
#pragma pop_macro("AMP")
#pragma pop_macro("AMPAMP")
#pragma pop_macro("AMPEQ")
#pragma pop_macro("ARROW")
#pragma pop_macro("ASSERT")
#pragma pop_macro("BANG")
#pragma pop_macro("BANGEQ")
#pragma pop_macro("BAR")
#pragma pop_macro("BARBAR")
#pragma pop_macro("BAREQ")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("BREAK")
#pragma pop_macro("BYTE")
#pragma pop_macro("CARET")
#pragma pop_macro("CARETEQ")
#pragma pop_macro("CASE")
#pragma pop_macro("CATCH")
#pragma pop_macro("CHAR")
#pragma pop_macro("CHARLITERAL")
#pragma pop_macro("CLASS")
#pragma pop_macro("COLCOL")
#pragma pop_macro("COLON")
#pragma pop_macro("COMMA")
#pragma pop_macro("CONST")
#pragma pop_macro("CONTINUE")
#pragma pop_macro("CUSTOM")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("DO")
#pragma pop_macro("DOT")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("DOUBLELITERAL")
#pragma pop_macro("ELLIPSIS")
#pragma pop_macro("ELSE")
#pragma pop_macro("ENUM")
#pragma pop_macro("EOF")
#pragma pop_macro("EQ")
#pragma pop_macro("EQEQ")
#pragma pop_macro("ERROR")
#pragma pop_macro("EXTENDS")
#pragma pop_macro("FALSE")
#pragma pop_macro("FINAL")
#pragma pop_macro("FINALLY")
#pragma pop_macro("FLOAT")
#pragma pop_macro("FLOATLITERAL")
#pragma pop_macro("FOR")
#pragma pop_macro("GOTO")
#pragma pop_macro("GT")
#pragma pop_macro("GTEQ")
#pragma pop_macro("GTGT")
#pragma pop_macro("GTGTEQ")
#pragma pop_macro("GTGTGT")
#pragma pop_macro("GTGTGTEQ")
#pragma pop_macro("IDENTIFIER")
#pragma pop_macro("IF")
#pragma pop_macro("IMPLEMENTS")
#pragma pop_macro("IMPORT")
#pragma pop_macro("INSTANCEOF")
#pragma pop_macro("INT")
#pragma pop_macro("INTERFACE")
#pragma pop_macro("INTLITERAL")
#pragma pop_macro("LBRACE")
#pragma pop_macro("LBRACKET")
#pragma pop_macro("LONG")
#pragma pop_macro("LONGLITERAL")
#pragma pop_macro("LPAREN")
#pragma pop_macro("LT")
#pragma pop_macro("LTEQ")
#pragma pop_macro("LTLT")
#pragma pop_macro("LTLTEQ")
#pragma pop_macro("MONKEYS_AT")
#pragma pop_macro("NATIVE")
#pragma pop_macro("NEW")
#pragma pop_macro("NULL")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("PERCENT")
#pragma pop_macro("PERCENTEQ")
#pragma pop_macro("PLUS")
#pragma pop_macro("PLUSEQ")
#pragma pop_macro("PLUSPLUS")
#pragma pop_macro("PRIVATE")
#pragma pop_macro("PROTECTED")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("QUES")
#pragma pop_macro("RBRACE")
#pragma pop_macro("RBRACKET")
#pragma pop_macro("RETURN")
#pragma pop_macro("RPAREN")
#pragma pop_macro("SEMI")
#pragma pop_macro("SHORT")
#pragma pop_macro("SLASH")
#pragma pop_macro("SLASHEQ")
#pragma pop_macro("STAR")
#pragma pop_macro("STAREQ")
#pragma pop_macro("STATIC")
#pragma pop_macro("STRICTFP")
#pragma pop_macro("STRINGLITERAL")
#pragma pop_macro("SUB")
#pragma pop_macro("SUBEQ")
#pragma pop_macro("SUBSUB")
#pragma pop_macro("SUPER")
#pragma pop_macro("SWITCH")
#pragma pop_macro("SYNCHRONIZED")
#pragma pop_macro("THIS")
#pragma pop_macro("THROW")
#pragma pop_macro("THROWS")
#pragma pop_macro("TILDE")
#pragma pop_macro("TRANSIENT")
#pragma pop_macro("TRUE")
#pragma pop_macro("TRY")
#pragma pop_macro("UNDERSCORE")
#pragma pop_macro("VOID")
#pragma pop_macro("VOLATILE")
#pragma pop_macro("WHILE")

#endif // _com_sun_tools_javac_parser_Tokens$TokenKind_h_