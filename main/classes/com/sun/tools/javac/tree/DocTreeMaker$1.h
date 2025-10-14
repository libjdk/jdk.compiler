#ifndef _com_sun_tools_javac_tree_DocTreeMaker$1_h_
#define _com_sun_tools_javac_tree_DocTreeMaker$1_h_
//$ class com.sun.tools.javac.tree.DocTreeMaker$1
//$ extends com.sun.tools.javac.parser.Tokens$Comment

#include <com/sun/tools/javac/parser/Tokens$Comment.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class Tokens$Comment$CommentStyle;
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
					class DocTreeMaker;
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

class DocTreeMaker$1 : public ::com::sun::tools::javac::parser::Tokens$Comment {
	$class(DocTreeMaker$1, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::Tokens$Comment)
public:
	DocTreeMaker$1();
	void init$(::com::sun::tools::javac::tree::DocTreeMaker* this$0);
	virtual int32_t getSourcePos(int32_t index) override;
	virtual ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* getStyle() override;
	virtual $String* getText() override;
	virtual bool isDeprecated() override;
	::com::sun::tools::javac::tree::DocTreeMaker* this$0 = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DocTreeMaker$1_h_