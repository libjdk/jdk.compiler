#ifndef _com_sun_tools_javac_parser_JavadocTokenizer_h_
#define _com_sun_tools_javac_parser_JavadocTokenizer_h_
//$ class com.sun.tools.javac.parser.JavadocTokenizer
//$ extends com.sun.tools.javac.parser.JavaTokenizer

#include <com/sun/tools/javac/parser/JavaTokenizer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ScannerFactory;
					class Tokens$Comment;
					class Tokens$Comment$CommentStyle;
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
					class Position$LineMap;
				}
			}
		}
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $export JavadocTokenizer : public ::com::sun::tools::javac::parser::JavaTokenizer {
	$class(JavadocTokenizer, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::JavaTokenizer)
public:
	JavadocTokenizer();
	void init$(::com::sun::tools::javac::parser::ScannerFactory* fac, ::java::nio::CharBuffer* cb);
	void init$(::com::sun::tools::javac::parser::ScannerFactory* fac, $chars* array, int32_t length);
	virtual ::com::sun::tools::javac::util::Position$LineMap* getLineMap() override;
	virtual ::com::sun::tools::javac::parser::Tokens$Comment* processComment(int32_t pos, int32_t endPos, ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* style) override;
	::com::sun::tools::javac::parser::ScannerFactory* fac = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_JavadocTokenizer_h_