#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$1_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$1_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$1
//$ extends jdk.internal.shellsupport.doc.JavadocHelper

#include <jdk/internal/shellsupport/doc/JavadocHelper.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$1 : public ::jdk::internal::shellsupport::doc::JavadocHelper {
	$class(JavadocHelper$1, $NO_CLASS_INIT, ::jdk::internal::shellsupport::doc::JavadocHelper)
public:
	JavadocHelper$1();
	void init$();
	virtual void close() override;
	virtual $String* getResolvedDocComment(::javax::lang::model::element::Element* forElement) override;
	virtual ::javax::lang::model::element::Element* getSourceElement(::javax::lang::model::element::Element* forElement) override;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$1_h_