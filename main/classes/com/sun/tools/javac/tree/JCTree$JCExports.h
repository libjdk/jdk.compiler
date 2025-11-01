#ifndef _com_sun_tools_javac_tree_JCTree$JCExports_h_
#define _com_sun_tools_javac_tree_JCTree$JCExports_h_
//$ class com.sun.tools.javac.tree.JCTree$JCExports
//$ extends com.sun.tools.javac.tree.JCTree$JCDirective
//$ implements com.sun.source.tree.ExportsTree

#include <com/sun/source/tree/ExportsTree.h>
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
				namespace code {
					class Directive$ExportsDirective;
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

class $export JCTree$JCExports : public ::com::sun::tools::javac::tree::JCTree$JCDirective, public ::com::sun::source::tree::ExportsTree {
	$class(JCTree$JCExports, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCDirective, ::com::sun::source::tree::ExportsTree)
public:
	JCTree$JCExports();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* qualId, ::com::sun::tools::javac::util::List* moduleNames);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::java::util::List* getModuleNames() override;
	virtual ::com::sun::source::tree::ExpressionTree* getPackageName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* qualid = nullptr;
	::com::sun::tools::javac::util::List* moduleNames = nullptr;
	::com::sun::tools::javac::code::Directive$ExportsDirective* directive = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCExports_h_