#ifndef _com_sun_tools_javac_tree_JCTree$JCOpens_h_
#define _com_sun_tools_javac_tree_JCTree$JCOpens_h_
//$ class com.sun.tools.javac.tree.JCTree$JCOpens
//$ extends com.sun.tools.javac.tree.JCTree$JCDirective
//$ implements com.sun.source.tree.OpensTree

#include <com/sun/source/tree/OpensTree.h>
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
					class Directive$OpensDirective;
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

class $export JCTree$JCOpens : public ::com::sun::tools::javac::tree::JCTree$JCDirective, public ::com::sun::source::tree::OpensTree {
	$class(JCTree$JCOpens, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCDirective, ::com::sun::source::tree::OpensTree)
public:
	JCTree$JCOpens();
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
	::com::sun::tools::javac::code::Directive$OpensDirective* directive = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCOpens_h_