#ifndef _com_sun_tools_javac_tree_JCTree$JCPackageDecl_h_
#define _com_sun_tools_javac_tree_JCTree$JCPackageDecl_h_
//$ class com.sun.tools.javac.tree.JCTree$JCPackageDecl
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.PackageTree

#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
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
					class Symbol$PackageSymbol;
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
					class JCTree$JCExpression;
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

class $import JCTree$JCPackageDecl : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::PackageTree {
	$class(JCTree$JCPackageDecl, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::PackageTree)
public:
	JCTree$JCPackageDecl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::tree::JCTree$JCExpression* pid);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getAnnotations() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ExpressionTree* getPackageName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* annotations = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* pid = nullptr;
	::com::sun::tools::javac::code::Symbol$PackageSymbol* packge = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCPackageDecl_h_