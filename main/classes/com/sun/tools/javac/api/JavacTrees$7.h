#ifndef _com_sun_tools_javac_api_JavacTrees$7_h_
#define _com_sun_tools_javac_api_JavacTrees$7_h_
//$ class com.sun.tools.javac.api.JavacTrees$7
//$ extends com.sun.tools.javac.tree.DocCommentTable

#include <com/sun/tools/javac/tree/DocCommentTable.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
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
				namespace parser {
					class Tokens$Comment;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree$DCDocComment;
					class JCTree;
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

class JavacTrees$7 : public ::com::sun::tools::javac::tree::DocCommentTable {
	$class(JavacTrees$7, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DocCommentTable)
public:
	JavacTrees$7();
	void init$(::com::sun::tools::javac::api::JavacTrees* this$0, ::com::sun::source::doctree::DocCommentTree* val$dcTree);
	virtual ::com::sun::tools::javac::parser::Tokens$Comment* getComment(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual $String* getCommentText(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual ::com::sun::tools::javac::tree::DCTree$DCDocComment* getCommentTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual bool hasComment(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void putComment(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::parser::Tokens$Comment* c) override;
	::com::sun::tools::javac::api::JavacTrees* this$0 = nullptr;
	::com::sun::source::doctree::DocCommentTree* val$dcTree = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees$7_h_