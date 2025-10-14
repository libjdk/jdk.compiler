#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1$1_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1$1_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$1
//$ extends com.sun.source.util.DocTreeScanner

#include <com/sun/source/util/DocTreeScanner.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class ParamTree;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {
				class JavadocHelper$OnDemandJavadocHelper$1;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$1$1 : public ::com::sun::source::util::DocTreeScanner {
	$class(JavadocHelper$OnDemandJavadocHelper$1$1, $NO_CLASS_INIT, ::com::sun::source::util::DocTreeScanner)
public:
	JavadocHelper$OnDemandJavadocHelper$1$1();
	void init$(::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1* this$1, $String* val$paramName, ::java::util::List* val$inheritedText);
	virtual ::java::lang::Void* visitParam(::com::sun::source::doctree::ParamTree* node, ::java::lang::Void* p);
	virtual $Object* visitParam(::com::sun::source::doctree::ParamTree* node, Object$* p) override;
	::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1* this$1 = nullptr;
	::java::util::List* val$inheritedText = nullptr;
	$String* val$paramName = nullptr;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1$1_h_