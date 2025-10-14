#ifndef _jdk_internal_shellsupport_doc_JavadocFormatter$Sections_h_
#define _jdk_internal_shellsupport_doc_JavadocFormatter$Sections_h_
//$ class jdk.internal.shellsupport.doc.JavadocFormatter$Sections
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PARAMS")
#undef PARAMS
#pragma push_macro("RETURNS")
#undef RETURNS
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("TYPE_PARAMS")
#undef TYPE_PARAMS

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocFormatter$Sections : public ::java::lang::Enum {
	$class(JavadocFormatter$Sections, 0, ::java::lang::Enum)
public:
	JavadocFormatter$Sections();
	static $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$Sections>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool matches(::com::sun::source::doctree::DocTree* t) {return false;}
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections* valueOf($String* name);
	static $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$Sections>* values();
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections* TYPE_PARAMS;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections* PARAMS;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections* RETURNS;
	static ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections* THROWS;
	static $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$Sections>* $VALUES;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#pragma pop_macro("PARAMS")
#pragma pop_macro("RETURNS")
#pragma pop_macro("THROWS")
#pragma pop_macro("TYPE_PARAMS")

#endif // _jdk_internal_shellsupport_doc_JavadocFormatter$Sections_h_