#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1$2_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1$2_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$2
//$ extends com.sun.source.util.DocTreeScanner

#include <com/sun/source/util/DocTreeScanner.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class ThrowsTree;
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

class JavadocHelper$OnDemandJavadocHelper$1$2 : public ::com::sun::source::util::DocTreeScanner {
	$class(JavadocHelper$OnDemandJavadocHelper$1$2, $NO_CLASS_INIT, ::com::sun::source::util::DocTreeScanner)
public:
	JavadocHelper$OnDemandJavadocHelper$1$2();
	void init$(::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1* this$1, ::com::sun::source::doctree::DocCommentTree* val$inheritedDocTree, $String* val$thrownName, ::java::util::List* val$inheritedText);
	virtual ::java::lang::Void* visitThrows(::com::sun::source::doctree::ThrowsTree* node, ::java::lang::Void* p);
	virtual $Object* visitThrows(::com::sun::source::doctree::ThrowsTree* node, Object$* p) override;
	::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1* this$1 = nullptr;
	::java::util::List* val$inheritedText = nullptr;
	$String* val$thrownName = nullptr;
	::com::sun::source::doctree::DocCommentTree* val$inheritedDocTree = nullptr;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1$2_h_