#ifndef _com_sun_tools_javac_parser_JavadocTokenizer$OffsetMap_h_
#define _com_sun_tools_javac_parser_JavadocTokenizer$OffsetMap_h_
//$ class com.sun.tools.javac.parser.JavadocTokenizer$OffsetMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NOFFSETS")
#undef NOFFSETS
#pragma push_macro("POS_OFFSET")
#undef POS_OFFSET
#pragma push_macro("SB_OFFSET")
#undef SB_OFFSET

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $export JavadocTokenizer$OffsetMap : public ::java::lang::Object {
	$class(JavadocTokenizer$OffsetMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavadocTokenizer$OffsetMap();
	void init$();
	virtual void add(int32_t sbOffset, int32_t posOffet);
	void ensure(int32_t need);
	virtual int32_t getSourcePos(int32_t pos);
	int32_t lastPosOffset();
	int32_t lastSBOffset();
	virtual bool shouldAdd(int32_t sbOffset, int32_t posOffet);
	static const int32_t SB_OFFSET = 0;
	static const int32_t POS_OFFSET = 1;
	static const int32_t NOFFSETS = 2;
	$ints* map = nullptr;
	int32_t size = 0;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NOFFSETS")
#pragma pop_macro("POS_OFFSET")
#pragma pop_macro("SB_OFFSET")

#endif // _com_sun_tools_javac_parser_JavadocTokenizer$OffsetMap_h_