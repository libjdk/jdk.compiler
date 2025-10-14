#ifndef _com_sun_tools_javac_parser_DocCommentParser$WhitespaceRetentionPolicy_h_
#define _com_sun_tools_javac_parser_DocCommentParser$WhitespaceRetentionPolicy_h_
//$ class com.sun.tools.javac.parser.DocCommentParser$WhitespaceRetentionPolicy
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("REMOVE_ALL")
#undef REMOVE_ALL
#pragma push_macro("REMOVE_FIRST_SPACE")
#undef REMOVE_FIRST_SPACE
#pragma push_macro("RETAIN_ALL")
#undef RETAIN_ALL

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class DocCommentParser$WhitespaceRetentionPolicy : public ::java::lang::Enum {
	$class(DocCommentParser$WhitespaceRetentionPolicy, 0, ::java::lang::Enum)
public:
	DocCommentParser$WhitespaceRetentionPolicy();
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy>* values();
	static ::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy* RETAIN_ALL;
	static ::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy* REMOVE_FIRST_SPACE;
	static ::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy* REMOVE_ALL;
	static $Array<::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("REMOVE_ALL")
#pragma pop_macro("REMOVE_FIRST_SPACE")
#pragma pop_macro("RETAIN_ALL")

#endif // _com_sun_tools_javac_parser_DocCommentParser$WhitespaceRetentionPolicy_h_