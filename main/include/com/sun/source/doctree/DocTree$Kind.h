#ifndef _com_sun_source_doctree_DocTree$Kind_h_
#define _com_sun_source_doctree_DocTree$Kind_h_
//$ class com.sun.source.doctree.DocTree$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("AUTHOR")
#undef AUTHOR
#pragma push_macro("CODE")
#undef CODE
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("DEPRECATED")
#undef DEPRECATED
#pragma push_macro("DOC_COMMENT")
#undef DOC_COMMENT
#pragma push_macro("DOC_ROOT")
#undef DOC_ROOT
#pragma push_macro("DOC_TYPE")
#undef DOC_TYPE
#pragma push_macro("END_ELEMENT")
#undef END_ELEMENT
#pragma push_macro("ENTITY")
#undef ENTITY
#pragma push_macro("ERRONEOUS")
#undef ERRONEOUS
#pragma push_macro("EXCEPTION")
#undef EXCEPTION
#pragma push_macro("HIDDEN")
#undef HIDDEN
#pragma push_macro("IDENTIFIER")
#undef IDENTIFIER
#pragma push_macro("INDEX")
#undef INDEX
#pragma push_macro("INHERIT_DOC")
#undef INHERIT_DOC
#pragma push_macro("LINK")
#undef LINK
#pragma push_macro("LINK_PLAIN")
#undef LINK_PLAIN
#pragma push_macro("LITERAL")
#undef LITERAL
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("PARAM")
#undef PARAM
#pragma push_macro("PROVIDES")
#undef PROVIDES
#pragma push_macro("REFERENCE")
#undef REFERENCE
#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("SEE")
#undef SEE
#pragma push_macro("SERIAL")
#undef SERIAL
#pragma push_macro("SERIAL_DATA")
#undef SERIAL_DATA
#pragma push_macro("SERIAL_FIELD")
#undef SERIAL_FIELD
#pragma push_macro("SINCE")
#undef SINCE
#pragma push_macro("START_ELEMENT")
#undef START_ELEMENT
#pragma push_macro("SUMMARY")
#undef SUMMARY
#pragma push_macro("SYSTEM_PROPERTY")
#undef SYSTEM_PROPERTY
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("UNKNOWN_BLOCK_TAG")
#undef UNKNOWN_BLOCK_TAG
#pragma push_macro("UNKNOWN_INLINE_TAG")
#undef UNKNOWN_INLINE_TAG
#pragma push_macro("USES")
#undef USES
#pragma push_macro("VALUE")
#undef VALUE
#pragma push_macro("VERSION")
#undef VERSION

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $import DocTree$Kind : public ::java::lang::Enum {
	$class(DocTree$Kind, 0, ::java::lang::Enum)
public:
	DocTree$Kind();
	static $Array<::com::sun::source::doctree::DocTree$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* tagName);
	static ::com::sun::source::doctree::DocTree$Kind* valueOf($String* name);
	static $Array<::com::sun::source::doctree::DocTree$Kind>* values();
	static ::com::sun::source::doctree::DocTree$Kind* ATTRIBUTE;
	static ::com::sun::source::doctree::DocTree$Kind* AUTHOR;
	static ::com::sun::source::doctree::DocTree$Kind* CODE;
	static ::com::sun::source::doctree::DocTree$Kind* COMMENT;
	static ::com::sun::source::doctree::DocTree$Kind* DEPRECATED;
	static ::com::sun::source::doctree::DocTree$Kind* DOC_COMMENT;
	static ::com::sun::source::doctree::DocTree$Kind* DOC_ROOT;
	static ::com::sun::source::doctree::DocTree$Kind* DOC_TYPE;
	static ::com::sun::source::doctree::DocTree$Kind* END_ELEMENT;
	static ::com::sun::source::doctree::DocTree$Kind* ENTITY;
	static ::com::sun::source::doctree::DocTree$Kind* ERRONEOUS;
	static ::com::sun::source::doctree::DocTree$Kind* EXCEPTION;
	static ::com::sun::source::doctree::DocTree$Kind* HIDDEN;
	static ::com::sun::source::doctree::DocTree$Kind* IDENTIFIER;
	static ::com::sun::source::doctree::DocTree$Kind* INDEX;
	static ::com::sun::source::doctree::DocTree$Kind* INHERIT_DOC;
	static ::com::sun::source::doctree::DocTree$Kind* LINK;
	static ::com::sun::source::doctree::DocTree$Kind* LINK_PLAIN;
	static ::com::sun::source::doctree::DocTree$Kind* LITERAL;
	static ::com::sun::source::doctree::DocTree$Kind* PARAM;
	static ::com::sun::source::doctree::DocTree$Kind* PROVIDES;
	static ::com::sun::source::doctree::DocTree$Kind* REFERENCE;
	static ::com::sun::source::doctree::DocTree$Kind* RETURN;
	static ::com::sun::source::doctree::DocTree$Kind* SEE;
	static ::com::sun::source::doctree::DocTree$Kind* SERIAL;
	static ::com::sun::source::doctree::DocTree$Kind* SERIAL_DATA;
	static ::com::sun::source::doctree::DocTree$Kind* SERIAL_FIELD;
	static ::com::sun::source::doctree::DocTree$Kind* SINCE;
	static ::com::sun::source::doctree::DocTree$Kind* START_ELEMENT;
	static ::com::sun::source::doctree::DocTree$Kind* SYSTEM_PROPERTY;
	static ::com::sun::source::doctree::DocTree$Kind* SUMMARY;
	static ::com::sun::source::doctree::DocTree$Kind* TEXT;
	static ::com::sun::source::doctree::DocTree$Kind* THROWS;
	static ::com::sun::source::doctree::DocTree$Kind* UNKNOWN_BLOCK_TAG;
	static ::com::sun::source::doctree::DocTree$Kind* UNKNOWN_INLINE_TAG;
	static ::com::sun::source::doctree::DocTree$Kind* USES;
	static ::com::sun::source::doctree::DocTree$Kind* VALUE;
	static ::com::sun::source::doctree::DocTree$Kind* VERSION;
	static ::com::sun::source::doctree::DocTree$Kind* OTHER;
	static $Array<::com::sun::source::doctree::DocTree$Kind>* $VALUES;
	$String* tagName = nullptr;
};

			} // doctree
		} // source
	} // sun
} // com

#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("AUTHOR")
#pragma pop_macro("CODE")
#pragma pop_macro("COMMENT")
#pragma pop_macro("DEPRECATED")
#pragma pop_macro("DOC_COMMENT")
#pragma pop_macro("DOC_ROOT")
#pragma pop_macro("DOC_TYPE")
#pragma pop_macro("END_ELEMENT")
#pragma pop_macro("ENTITY")
#pragma pop_macro("ERRONEOUS")
#pragma pop_macro("EXCEPTION")
#pragma pop_macro("HIDDEN")
#pragma pop_macro("IDENTIFIER")
#pragma pop_macro("INDEX")
#pragma pop_macro("INHERIT_DOC")
#pragma pop_macro("LINK")
#pragma pop_macro("LINK_PLAIN")
#pragma pop_macro("LITERAL")
#pragma pop_macro("OTHER")
#pragma pop_macro("PARAM")
#pragma pop_macro("PROVIDES")
#pragma pop_macro("REFERENCE")
#pragma pop_macro("RETURN")
#pragma pop_macro("SEE")
#pragma pop_macro("SERIAL")
#pragma pop_macro("SERIAL_DATA")
#pragma pop_macro("SERIAL_FIELD")
#pragma pop_macro("SINCE")
#pragma pop_macro("START_ELEMENT")
#pragma pop_macro("SUMMARY")
#pragma pop_macro("SYSTEM_PROPERTY")
#pragma pop_macro("TEXT")
#pragma pop_macro("THROWS")
#pragma pop_macro("UNKNOWN_BLOCK_TAG")
#pragma pop_macro("UNKNOWN_INLINE_TAG")
#pragma pop_macro("USES")
#pragma pop_macro("VALUE")
#pragma pop_macro("VERSION")

#endif // _com_sun_source_doctree_DocTree$Kind_h_