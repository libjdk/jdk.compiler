#ifndef _com_sun_tools_javac_parser_Tokens_h_
#define _com_sun_tools_javac_parser_Tokens_h_
//$ class com.sun.tools.javac.parser.Tokens
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DUMMY")
#undef DUMMY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class Tokens$Token;
					class Tokens$TokenKind;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Key;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import Tokens : public ::java::lang::Object {
	$class(Tokens, 0, ::java::lang::Object)
public:
	Tokens();
	void init$(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::parser::Tokens* instance(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::parser::Tokens$TokenKind* lookupKind(::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::parser::Tokens$TokenKind* lookupKind($String* name);
	::com::sun::tools::javac::util::Names* names = nullptr;
	::java::util::Map* keywords = nullptr;
	static ::com::sun::tools::javac::util::Context$Key* tokensKey;
	static ::com::sun::tools::javac::parser::Tokens$Token* DUMMY;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DUMMY")

#endif // _com_sun_tools_javac_parser_Tokens_h_