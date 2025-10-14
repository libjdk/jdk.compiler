#ifndef _com_sun_tools_javac_api_JavacTrees$1_h_
#define _com_sun_tools_javac_api_JavacTrees$1_h_
//$ class com.sun.tools.javac.api.JavacTrees$1
//$ extends com.sun.source.util.DocSourcePositions

#include <com/sun/source/util/DocSourcePositions.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class DocTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CompilationUnitTree;
				class Tree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTrees;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacTrees$1 : public ::com::sun::source::util::DocSourcePositions {
	$class(JavacTrees$1, $NO_CLASS_INIT, ::com::sun::source::util::DocSourcePositions)
public:
	JavacTrees$1();
	void init$(::com::sun::tools::javac::api::JavacTrees* this$0);
	virtual int64_t getEndPosition(::com::sun::source::tree::CompilationUnitTree* file, ::com::sun::source::tree::Tree* tree) override;
	virtual int64_t getEndPosition(::com::sun::source::tree::CompilationUnitTree* file, ::com::sun::source::doctree::DocCommentTree* comment, ::com::sun::source::doctree::DocTree* tree) override;
	virtual int64_t getStartPosition(::com::sun::source::tree::CompilationUnitTree* file, ::com::sun::source::tree::Tree* tree) override;
	virtual int64_t getStartPosition(::com::sun::source::tree::CompilationUnitTree* file, ::com::sun::source::doctree::DocCommentTree* comment, ::com::sun::source::doctree::DocTree* tree) override;
	::com::sun::tools::javac::api::JavacTrees* this$0 = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees$1_h_