#ifndef _com_sun_tools_javac_tree_JCTree$JCTry_h_
#define _com_sun_tools_javac_tree_JCTree$JCTry_h_
//$ class com.sun.tools.javac.tree.JCTree$JCTry
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.TryTree

#include <com/sun/source/tree/TryTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class BlockTree;
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
					class JCTree$JCBlock;
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

class $import JCTree$JCTry : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::TryTree {
	$class(JCTree$JCTry, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::TryTree)
public:
	JCTree$JCTry();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* resources, ::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::util::List* catchers, ::com::sun::tools::javac::tree::JCTree$JCBlock* finalizer);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::BlockTree* getBlock() override;
	virtual ::java::util::List* getCatches() override;
	virtual ::com::sun::source::tree::BlockTree* getFinallyBlock() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::java::util::List* getResources() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCBlock* body = nullptr;
	::com::sun::tools::javac::util::List* catchers = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCBlock* finalizer = nullptr;
	::com::sun::tools::javac::util::List* resources = nullptr;
	bool finallyCanCompleteNormally = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCTry_h_