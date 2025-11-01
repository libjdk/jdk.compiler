#ifndef _com_sun_tools_javac_tree_DCTree$DCDocComment_h_
#define _com_sun_tools_javac_tree_DCTree$DCDocComment_h_
//$ class com.sun.tools.javac.tree.DCTree$DCDocComment
//$ extends com.sun.tools.javac.tree.DCTree
//$ implements com.sun.source.doctree.DocCommentTree

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
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
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export DCTree$DCDocComment : public ::com::sun::tools::javac::tree::DCTree, public ::com::sun::source::doctree::DocCommentTree {
	$class(DCTree$DCDocComment, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree, ::com::sun::source::doctree::DocCommentTree)
public:
	DCTree$DCDocComment();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::parser::Tokens$Comment* comment, ::java::util::List* fullBody, ::java::util::List* firstSentence, ::java::util::List* body, ::java::util::List* tags, ::java::util::List* preamble, ::java::util::List* postamble);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getBlockTags() override;
	virtual ::java::util::List* getBody() override;
	virtual ::java::util::List* getFirstSentence() override;
	virtual ::java::util::List* getFullBody() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::java::util::List* getPostamble() override;
	virtual ::java::util::List* getPreamble() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::parser::Tokens$Comment* comment = nullptr;
	::java::util::List* fullBody = nullptr;
	::java::util::List* firstSentence = nullptr;
	::java::util::List* body = nullptr;
	::java::util::List* tags = nullptr;
	::java::util::List* preamble = nullptr;
	::java::util::List* postamble = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCDocComment_h_