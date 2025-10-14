#ifndef _com_sun_tools_javac_parser_ParserFactory_h_
#define _com_sun_tools_javac_parser_ParserFactory_h_
//$ class com.sun.tools.javac.parser.ParserFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("F")
#undef F

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class JavacParser;
					class ScannerFactory;
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
				namespace tree {
					class DocTreeMaker;
					class TreeMaker;
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
					class Options;
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

class $import ParserFactory : public ::java::lang::Object {
	$class(ParserFactory, 0, ::java::lang::Object)
public:
	ParserFactory();
	void init$(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::parser::ParserFactory* instance(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::parser::JavacParser* newParser(::java::lang::CharSequence* input, bool keepDocComments, bool keepEndPos, bool keepLineMap);
	virtual ::com::sun::tools::javac::parser::JavacParser* newParser(::java::lang::CharSequence* input, bool keepDocComments, bool keepEndPos, bool keepLineMap, bool parseModuleInfo);
	static ::com::sun::tools::javac::util::Context$Key* parserFactoryKey;
	::com::sun::tools::javac::tree::TreeMaker* F = nullptr;
	::com::sun::tools::javac::tree::DocTreeMaker* docTreeMaker = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::parser::Tokens* tokens = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Options* options = nullptr;
	::com::sun::tools::javac::parser::ScannerFactory* scannerFactory = nullptr;
	::java::util::Locale* locale = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("F")

#endif // _com_sun_tools_javac_parser_ParserFactory_h_