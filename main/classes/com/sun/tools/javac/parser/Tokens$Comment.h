#ifndef _com_sun_tools_javac_parser_Tokens$Comment_h_
#define _com_sun_tools_javac_parser_Tokens$Comment_h_
//$ interface com.sun.tools.javac.parser.Tokens$Comment
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
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
				namespace parser {

class $export Tokens$Comment : public ::java::lang::Object {
	$interface(Tokens$Comment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getSourcePos(int32_t index) {return 0;}
	virtual ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* getStyle() {return nullptr;}
	virtual $String* getText() {return nullptr;}
	virtual bool isDeprecated() {return false;}
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_Tokens$Comment_h_