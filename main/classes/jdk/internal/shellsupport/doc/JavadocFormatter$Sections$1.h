#ifndef _jdk_internal_shellsupport_doc_JavadocFormatter$Sections$1_h_
#define _jdk_internal_shellsupport_doc_JavadocFormatter$Sections$1_h_
//$ class jdk.internal.shellsupport.doc.JavadocFormatter$Sections$1
//$ extends jdk.internal.shellsupport.doc.JavadocFormatter$Sections

#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections.h>

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

class JavadocFormatter$Sections$1 : public ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections {
	$class(JavadocFormatter$Sections$1, $NO_CLASS_INIT, ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections)
public:
	JavadocFormatter$Sections$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool matches(::com::sun::source::doctree::DocTree* t) override;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocFormatter$Sections$1_h_