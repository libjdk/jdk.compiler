#ifndef _com_sun_tools_javac_parser_JavaTokenizer$BasicComment_h_
#define _com_sun_tools_javac_parser_JavaTokenizer$BasicComment_h_
//$ class com.sun.tools.javac.parser.JavaTokenizer$BasicComment
//$ extends com.sun.tools.javac.parser.UnicodeReader$PositionTrackingReader
//$ implements com.sun.tools.javac.parser.Tokens$Comment

#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/parser/UnicodeReader$PositionTrackingReader.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ScannerFactory;
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

class $import JavaTokenizer$BasicComment : public ::com::sun::tools::javac::parser::UnicodeReader$PositionTrackingReader, public ::com::sun::tools::javac::parser::Tokens$Comment {
	$class(JavaTokenizer$BasicComment, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::UnicodeReader$PositionTrackingReader, ::com::sun::tools::javac::parser::Tokens$Comment)
public:
	JavaTokenizer$BasicComment();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* cs, ::com::sun::tools::javac::parser::ScannerFactory* sf, $chars* array, int32_t offset);
	virtual int32_t getSourcePos(int32_t pos) override;
	virtual ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* getStyle() override;
	virtual $String* getText() override;
	virtual bool isDeprecated() override;
	virtual void scanDocComment();
	virtual $String* toString() override;
	::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* cs = nullptr;
	bool deprecatedFlag = false;
	bool scanned = false;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_JavaTokenizer$BasicComment_h_