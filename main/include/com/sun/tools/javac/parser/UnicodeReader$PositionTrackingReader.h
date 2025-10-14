#ifndef _com_sun_tools_javac_parser_UnicodeReader$PositionTrackingReader_h_
#define _com_sun_tools_javac_parser_UnicodeReader$PositionTrackingReader_h_
//$ class com.sun.tools.javac.parser.UnicodeReader$PositionTrackingReader
//$ extends com.sun.tools.javac.parser.UnicodeReader

#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ScannerFactory;
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

class $import UnicodeReader$PositionTrackingReader : public ::com::sun::tools::javac::parser::UnicodeReader {
	$class(UnicodeReader$PositionTrackingReader, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::UnicodeReader)
public:
	UnicodeReader$PositionTrackingReader();
	void init$(::com::sun::tools::javac::parser::ScannerFactory* sf, $chars* array, int32_t offset);
	virtual int32_t column();
	virtual char16_t next() override;
	virtual int32_t offsetPosition();
	int32_t offset = 0;
	int32_t column$ = 0;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_UnicodeReader$PositionTrackingReader_h_