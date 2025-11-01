#ifndef _com_sun_tools_javac_tree_JCTree$JCAnnotatedType_h_
#define _com_sun_tools_javac_tree_JCTree$JCAnnotatedType_h_
//$ class com.sun.tools.javac.tree.JCTree$JCAnnotatedType
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.AnnotatedTypeTree

#include <com/sun/source/tree/AnnotatedTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

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

class $export JCTree$JCAnnotatedType : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::AnnotatedTypeTree {
	$class(JCTree$JCAnnotatedType, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::AnnotatedTypeTree)
public:
	JCTree$JCAnnotatedType();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::tree::JCTree$JCExpression* underlyingType);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getAnnotations() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::source::tree::ExpressionTree* getUnderlyingType() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* annotations = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* underlyingType = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCAnnotatedType_h_