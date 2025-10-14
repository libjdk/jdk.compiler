#ifndef _com_sun_tools_javac_parser_ScannerFactory_h_
#define _com_sun_tools_javac_parser_ScannerFactory_h_
//$ class com.sun.tools.javac.parser.ScannerFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint;
					class Preview;
					class Source;
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
					class Scanner;
					class Tokens;
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
					class Log;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import ScannerFactory : public ::java::lang::Object {
	$class(ScannerFactory, 0, ::java::lang::Object)
public:
	ScannerFactory();
	void init$(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::parser::ScannerFactory* instance(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::parser::Scanner* newScanner(::java::lang::CharSequence* input, bool keepDocComments);
	virtual ::com::sun::tools::javac::parser::Scanner* newScanner($chars* input, int32_t inputLength, bool keepDocComments);
	static ::com::sun::tools::javac::util::Context$Key* scannerFactoryKey;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::parser::Tokens* tokens = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_ScannerFactory_h_