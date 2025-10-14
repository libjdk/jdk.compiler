#ifndef _jdk_internal_shellsupport_doc_JavadocFormatter$FormatJavadocScanner_h_
#define _jdk_internal_shellsupport_doc_JavadocFormatter$FormatJavadocScanner_h_
//$ class jdk.internal.shellsupport.doc.JavadocFormatter$FormatJavadocScanner
//$ extends com.sun.source.util.DocTreeScanner

#include <com/sun/source/util/DocTreeScanner.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class DocTree;
				class EndElementTree;
				class EntityTree;
				class LinkTree;
				class LiteralTree;
				class ParamTree;
				class ReturnTree;
				class StartElementTree;
				class TextTree;
				class ThrowsTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class DocTrees;
				class JavacTask;
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Stack;
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
				class JavadocFormatter;
				class JavadocFormatter$Sections;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocFormatter$FormatJavadocScanner : public ::com::sun::source::util::DocTreeScanner {
	$class(JavadocFormatter$FormatJavadocScanner, $NO_CLASS_INIT, ::com::sun::source::util::DocTreeScanner)
public:
	JavadocFormatter$FormatJavadocScanner();
	void init$(::jdk::internal::shellsupport::doc::JavadocFormatter* this$0, ::java::lang::StringBuilder* result, ::com::sun::source::util::JavacTask* task);
	virtual $Object* formatDef(::java::lang::CharSequence* name, ::java::util::List* description);
	void handleEndElement(::javax::lang::model::element::Name* name);
	void reflowTillNow();
	using ::com::sun::source::util::DocTreeScanner::scan;
	virtual $Object* scan(::com::sun::source::doctree::DocTree* node, Object$* p) override;
	void startSection(::jdk::internal::shellsupport::doc::JavadocFormatter$Sections* current);
	virtual $Object* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, Object$* p) override;
	virtual $Object* visitEndElement(::com::sun::source::doctree::EndElementTree* node, Object$* p) override;
	virtual $Object* visitEntity(::com::sun::source::doctree::EntityTree* node, Object$* p) override;
	virtual $Object* visitLink(::com::sun::source::doctree::LinkTree* node, Object$* p) override;
	virtual $Object* visitLiteral(::com::sun::source::doctree::LiteralTree* node, Object$* p) override;
	virtual $Object* visitParam(::com::sun::source::doctree::ParamTree* node, Object$* p) override;
	virtual $Object* visitReturn(::com::sun::source::doctree::ReturnTree* node, Object$* p) override;
	virtual $Object* visitStartElement(::com::sun::source::doctree::StartElementTree* node, Object$* p) override;
	virtual $Object* visitText(::com::sun::source::doctree::TextTree* node, Object$* p) override;
	virtual $Object* visitThrows(::com::sun::source::doctree::ThrowsTree* node, Object$* p) override;
	::jdk::internal::shellsupport::doc::JavadocFormatter* this$0 = nullptr;
	::java::lang::StringBuilder* result = nullptr;
	::com::sun::source::util::JavacTask* task = nullptr;
	::com::sun::source::util::DocTrees* trees = nullptr;
	int32_t reflownTo = 0;
	int32_t indent = 0;
	int32_t limit = 0;
	bool pre = false;
	::java::util::Map* tableColumns = nullptr;
	::java::util::Stack* listStack = nullptr;
	::java::util::Stack* defStack = nullptr;
	::java::util::Stack* tableStack = nullptr;
	::java::util::Stack* cellsStack = nullptr;
	::java::util::Stack* headerStack = nullptr;
	::com::sun::source::doctree::DocTree* lastNode = nullptr;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocFormatter$FormatJavadocScanner_h_