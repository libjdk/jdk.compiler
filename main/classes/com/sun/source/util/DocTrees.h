#ifndef _com_sun_source_util_DocTrees_h_
#define _com_sun_source_util_DocTrees_h_
//$ class com.sun.source.util.DocTrees
//$ extends com.sun.source.util.Trees

#include <com/sun/source/util/Trees.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class DocTree;
				class EntityTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CompilationUnitTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class DocTreeFactory;
				class DocTreePath;
				class TreePath;
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace text {
		class BreakIterator;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class ProcessingEnvironment;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class PackageElement;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic$Kind;
		class FileObject;
		class JavaCompiler$CompilationTask;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $export DocTrees : public ::com::sun::source::util::Trees {
	$class(DocTrees, $NO_CLASS_INIT, ::com::sun::source::util::Trees)
public:
	DocTrees();
	using ::com::sun::source::util::Trees::getElement;
	virtual ::com::sun::source::util::SourcePositions* getSourcePositions() override {return nullptr;}
	void init$();
	virtual ::java::text::BreakIterator* getBreakIterator() {return nullptr;}
	virtual $String* getCharacters(::com::sun::source::doctree::EntityTree* tree) {return nullptr;}
	virtual ::com::sun::source::doctree::DocCommentTree* getDocCommentTree(::com::sun::source::util::TreePath* path) {return nullptr;}
	virtual ::com::sun::source::doctree::DocCommentTree* getDocCommentTree(::javax::lang::model::element::Element* e) {return nullptr;}
	virtual ::com::sun::source::doctree::DocCommentTree* getDocCommentTree(::javax::tools::FileObject* fileObject) {return nullptr;}
	virtual ::com::sun::source::doctree::DocCommentTree* getDocCommentTree(::javax::lang::model::element::Element* e, $String* relativePath) {return nullptr;}
	virtual ::com::sun::source::util::DocTreeFactory* getDocTreeFactory() {return nullptr;}
	virtual ::com::sun::source::util::DocTreePath* getDocTreePath(::javax::tools::FileObject* fileObject, ::javax::lang::model::element::PackageElement* packageElement) {return nullptr;}
	virtual ::javax::lang::model::element::Element* getElement(::com::sun::source::util::DocTreePath* path) {return nullptr;}
	virtual ::java::util::List* getFirstSentence(::java::util::List* list) {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getType(::com::sun::source::util::DocTreePath* path) {return nullptr;}
	static ::com::sun::source::util::DocTrees* instance(::javax::tools::JavaCompiler$CompilationTask* task);
	static ::com::sun::source::util::DocTrees* instance(::javax::annotation::processing::ProcessingEnvironment* env);
	using ::com::sun::source::util::Trees::printMessage;
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::com::sun::source::doctree::DocTree* t, ::com::sun::source::doctree::DocCommentTree* c, ::com::sun::source::tree::CompilationUnitTree* root) {}
	virtual void setBreakIterator(::java::text::BreakIterator* breakIterator) {}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_DocTrees_h_