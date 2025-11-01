#ifndef _com_sun_tools_javac_tree_JCTree$JCImport_h_
#define _com_sun_tools_javac_tree_JCTree$JCImport_h_
//$ class com.sun.tools.javac.tree.JCTree$JCImport
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.ImportTree

#include <com/sun/source/tree/ImportTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

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
				namespace code {
					class Scope;
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
				namespace tree {

class $export JCTree$JCImport : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::ImportTree {
	$class(JCTree$JCImport, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::ImportTree)
public:
	JCTree$JCImport();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree* qualid, bool importStatic);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getQualifiedIdentifier() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual bool isStatic() override;
	virtual $String* toString() override;
	bool staticImport = false;
	::com::sun::tools::javac::tree::JCTree* qualid = nullptr;
	::com::sun::tools::javac::code::Scope* importScope = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCImport_h_