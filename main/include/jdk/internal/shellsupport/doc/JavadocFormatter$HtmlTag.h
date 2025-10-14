#ifndef _jdk_internal_shellsupport_doc_JavadocFormatter$HtmlTag_h_
#define _jdk_internal_shellsupport_doc_JavadocFormatter$HtmlTag_h_
//$ class jdk.internal.shellsupport.doc.JavadocFormatter$HtmlTag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BLOCKQUOTE")
#undef BLOCKQUOTE
#pragma push_macro("DD")
#undef DD
#pragma push_macro("DL")
#undef DL
#pragma push_macro("DT")
#undef DT
#pragma push_macro("HTML")
#undef HTML
#pragma push_macro("IMG")
#undef IMG
#pragma push_macro("LI")
#undef LI
#pragma push_macro("OL")
#undef OL
#pragma push_macro("P")
#undef P
#pragma push_macro("PRE")
#undef PRE
#pragma push_macro("TABLE")
#undef TABLE
#pragma push_macro("TD")
#undef TD
#pragma push_macro("TH")
#undef TH
#pragma push_macro("TR")
#undef TR
#pragma push_macro("UL")
#undef UL

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class $import JavadocFormatter$HtmlTag : public ::java::lang::Enum {
	$class(JavadocFormatter$HtmlTag, 0, ::java::lang::Enum)
public:
	JavadocFormatter$HtmlTag();
	static $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* get(::javax::lang::model::element::Name* tagName);
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* valueOf($String* name);
	static $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag>* values();
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* HTML;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* H1;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* H2;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* H3;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* H4;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* H5;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* H6;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* BLOCKQUOTE;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* P;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* PRE;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* IMG;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* OL;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* UL;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* LI;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* DL;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* DT;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* DD;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* TABLE;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* TR;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* TD;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag* TH;
	static $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag>* $VALUES;
	static ::java::util::Map* index;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#pragma pop_macro("BLOCKQUOTE")
#pragma pop_macro("DD")
#pragma pop_macro("DL")
#pragma pop_macro("DT")
#pragma pop_macro("HTML")
#pragma pop_macro("IMG")
#pragma pop_macro("LI")
#pragma pop_macro("OL")
#pragma pop_macro("P")
#pragma pop_macro("PRE")
#pragma pop_macro("TABLE")
#pragma pop_macro("TD")
#pragma pop_macro("TH")
#pragma pop_macro("TR")
#pragma pop_macro("UL")

#endif // _jdk_internal_shellsupport_doc_JavadocFormatter$HtmlTag_h_