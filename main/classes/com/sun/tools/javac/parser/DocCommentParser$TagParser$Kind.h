#ifndef _com_sun_tools_javac_parser_DocCommentParser$TagParser$Kind_h_
#define _com_sun_tools_javac_parser_DocCommentParser$TagParser$Kind_h_
//$ class com.sun.tools.javac.parser.DocCommentParser$TagParser$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BLOCK")
#undef BLOCK
#pragma push_macro("EITHER")
#undef EITHER
#pragma push_macro("INLINE")
#undef INLINE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class DocCommentParser$TagParser$Kind : public ::java::lang::Enum {
	$class(DocCommentParser$TagParser$Kind, 0, ::java::lang::Enum)
public:
	DocCommentParser$TagParser$Kind();
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind>* values();
	static ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* INLINE;
	static ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* BLOCK;
	static ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* EITHER;
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BLOCK")
#pragma pop_macro("EITHER")
#pragma pop_macro("INLINE")

#endif // _com_sun_tools_javac_parser_DocCommentParser$TagParser$Kind_h_