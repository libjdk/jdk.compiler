#ifndef _jdk_internal_shellsupport_doc_JavadocFormatter$2_h_
#define _jdk_internal_shellsupport_doc_JavadocFormatter$2_h_
//$ class jdk.internal.shellsupport.doc.JavadocFormatter$2
//$ extends com.sun.source.util.DocTreeScanner

#include <com/sun/source/util/DocTreeScanner.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class EndElementTree;
				class StartElementTree;
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
		class Map;
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocFormatter$2 : public ::com::sun::source::util::DocTreeScanner {
	$class(JavadocFormatter$2, $NO_CLASS_INIT, ::com::sun::source::util::DocTreeScanner)
public:
	JavadocFormatter$2();
	void init$(::java::util::Map* val$result);
	void closeTable();
	virtual ::java::lang::Void* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, ::java::lang::Void* p);
	virtual $Object* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitEndElement(::com::sun::source::doctree::EndElementTree* node, ::java::lang::Void* p);
	virtual $Object* visitEndElement(::com::sun::source::doctree::EndElementTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitStartElement(::com::sun::source::doctree::StartElementTree* node, ::java::lang::Void* p);
	virtual $Object* visitStartElement(::com::sun::source::doctree::StartElementTree* node, Object$* p) override;
	::java::util::Map* val$result = nullptr;
	::com::sun::source::doctree::StartElementTree* currentTable = nullptr;
	int32_t currentMaxColumns = 0;
	int32_t currentRowColumns = 0;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocFormatter$2_h_