#ifndef _com_sun_tools_javac_tree_JCTree$JCBlock_h_
#define _com_sun_tools_javac_tree_JCTree$JCBlock_h_
//$ class com.sun.tools.javac.tree.JCTree$JCBlock
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.BlockTree

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree$Kind;
				class TreeVisitor;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$Tag;
					class JCTree$Visitor;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
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

class $export JCTree$JCBlock : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::BlockTree {
	$class(JCTree$JCBlock, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::BlockTree)
public:
	JCTree$JCBlock();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t flags, ::com::sun::tools::javac::util::List* stats);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::java::util::List* getStatements() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual bool isStatic() override;
	virtual $String* toString() override;
	int64_t flags = 0;
	::com::sun::tools::javac::util::List* stats = nullptr;
	int32_t endpos = 0;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCBlock_h_