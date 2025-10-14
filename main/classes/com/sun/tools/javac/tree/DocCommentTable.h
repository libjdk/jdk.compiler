#ifndef _com_sun_tools_javac_tree_DocCommentTable_h_
#define _com_sun_tools_javac_tree_DocCommentTable_h_
//$ interface com.sun.tools.javac.tree.DocCommentTable
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
				namespace tree {

class $export DocCommentTable : public ::java::lang::Object {
	$interface(DocCommentTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::parser::Tokens$Comment* getComment(::com::sun::tools::javac::tree::JCTree* tree) {return nullptr;}
	virtual $String* getCommentText(::com::sun::tools::javac::tree::JCTree* tree) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::DCTree$DCDocComment* getCommentTree(::com::sun::tools::javac::tree::JCTree* tree) {return nullptr;}
	virtual bool hasComment(::com::sun::tools::javac::tree::JCTree* tree) {return false;}
	virtual void putComment(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::parser::Tokens$Comment* c) {}
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DocCommentTable_h_