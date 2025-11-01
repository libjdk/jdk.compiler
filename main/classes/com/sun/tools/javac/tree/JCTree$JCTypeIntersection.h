#ifndef _com_sun_tools_javac_tree_JCTree$JCTypeIntersection_h_
#define _com_sun_tools_javac_tree_JCTree$JCTypeIntersection_h_
//$ class com.sun.tools.javac.tree.JCTree$JCTypeIntersection
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.IntersectionTypeTree

#include <com/sun/source/tree/IntersectionTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

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

class $export JCTree$JCTypeIntersection : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::IntersectionTypeTree {
	$class(JCTree$JCTypeIntersection, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::IntersectionTypeTree)
public:
	JCTree$JCTypeIntersection();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* bounds);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getBounds() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* bounds = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCTypeIntersection_h_