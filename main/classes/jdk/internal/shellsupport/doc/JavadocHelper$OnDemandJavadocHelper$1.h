#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1
//$ extends com.sun.source.util.DocTreeScanner

#include <com/sun/source/util/DocTreeScanner.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class DocTree;
				class InheritDocTree;
				class ParamTree;
				class ReturnTree;
				class ThrowsTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class DocSourcePositions;
				class JavacTask;
				class TreePath;
			}
		}
	}
}
namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
		class Map;
		class Stack;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class ExecutableElement;
				class VariableElement;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {
				class JavadocHelper$OnDemandJavadocHelper;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$1 : public ::com::sun::source::util::DocTreeScanner {
	$class(JavadocHelper$OnDemandJavadocHelper$1, $NO_CLASS_INIT, ::com::sun::source::util::DocTreeScanner)
public:
	JavadocHelper$OnDemandJavadocHelper$1();
	void init$(::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper* this$0, int32_t val$offset, ::com::sun::source::util::JavacTask* val$task, ::javax::lang::model::element::Element* val$element, ::com::sun::source::util::TreePath* val$el, ::com::sun::source::doctree::DocCommentTree* val$docCommentTree, $Array<::java::io::IOException>* val$exception, ::com::sun::source::util::DocSourcePositions* val$sp, ::java::util::Map* val$replace, $String* val$docComment);
	void insertTag(::java::util::List* tags, ::com::sun::source::doctree::DocTree* toInsert, ::java::util::List* parameters, ::java::util::List* throwsTypes);
	int32_t lambda$insertTag$4(::com::sun::source::doctree::DocTree* toInsert, ::java::util::List* parameters, ::java::util::List* throwsTypes, ::com::sun::source::util::JavacTask* task, ::com::sun::source::util::TreePath* el, ::com::sun::source::doctree::DocCommentTree* docCommentTree, ::com::sun::source::doctree::DocTree* tag1, ::com::sun::source::doctree::DocTree* tag2);
	static $String* lambda$visitDocComment$0(::javax::lang::model::element::VariableElement* param);
	::java::util::Iterator* lambda$visitInheritDoc$1(::com::sun::source::util::JavacTask* task, ::javax::lang::model::element::ExecutableElement* executableElement);
	static ::java::util::List* lambda$visitInheritDoc$2($ints* s);
	using ::com::sun::source::util::DocTreeScanner::scan;
	virtual ::java::lang::Void* scan(::com::sun::source::doctree::DocTree* tree, ::java::lang::Void* p);
	virtual $Object* scan(::com::sun::source::doctree::DocTree* tree, Object$* p) override;
	virtual ::java::lang::Void* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, ::java::lang::Void* p);
	virtual $Object* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitInheritDoc(::com::sun::source::doctree::InheritDocTree* node, ::java::lang::Void* p);
	virtual $Object* visitInheritDoc(::com::sun::source::doctree::InheritDocTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitParam(::com::sun::source::doctree::ParamTree* node, ::java::lang::Void* p);
	virtual $Object* visitParam(::com::sun::source::doctree::ParamTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitReturn(::com::sun::source::doctree::ReturnTree* node, ::java::lang::Void* p);
	virtual $Object* visitReturn(::com::sun::source::doctree::ReturnTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitThrows(::com::sun::source::doctree::ThrowsTree* node, ::java::lang::Void* p);
	virtual $Object* visitThrows(::com::sun::source::doctree::ThrowsTree* node, Object$* p) override;
	::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper* this$0 = nullptr;
	$String* val$docComment = nullptr;
	::java::util::Map* val$replace = nullptr;
	::com::sun::source::util::DocSourcePositions* val$sp = nullptr;
	$Array<::java::io::IOException>* val$exception = nullptr;
	::com::sun::source::doctree::DocCommentTree* val$docCommentTree = nullptr;
	::com::sun::source::util::TreePath* val$el = nullptr;
	::javax::lang::model::element::Element* val$element = nullptr;
	::com::sun::source::util::JavacTask* val$task = nullptr;
	int32_t val$offset = 0;
	::java::util::Stack* interestingParent = nullptr;
	::com::sun::source::doctree::DocCommentTree* dcTree = nullptr;
	$String* inherited = nullptr;
	::com::sun::source::util::JavacTask* inheritedJavacTask = nullptr;
	::com::sun::source::util::TreePath* inheritedTreePath = nullptr;
	::java::util::Map* syntheticTrees = nullptr;
	int64_t insertPos = 0;
	bool inSynthetic = false;
	::java::util::List* tagOrder = nullptr;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$1_h_