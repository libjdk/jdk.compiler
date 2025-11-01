#ifndef _com_sun_tools_javac_tree_JCTree$JCProvides_h_
#define _com_sun_tools_javac_tree_JCTree$JCProvides_h_
//$ class com.sun.tools.javac.tree.JCTree$JCProvides
//$ extends com.sun.tools.javac.tree.JCTree$JCDirective
//$ implements com.sun.source.tree.ProvidesTree

#include <com/sun/source/tree/ProvidesTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>

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

class $export JCTree$JCProvides : public ::com::sun::tools::javac::tree::JCTree$JCDirective, public ::com::sun::source::tree::ProvidesTree {
	$class(JCTree$JCProvides, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCDirective, ::com::sun::source::tree::ProvidesTree)
public:
	JCTree$JCProvides();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* serviceName, ::com::sun::tools::javac::util::List* implNames);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getImplementationNames() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ExpressionTree* getServiceName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* serviceName = nullptr;
	::com::sun::tools::javac::util::List* implNames = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCProvides_h_