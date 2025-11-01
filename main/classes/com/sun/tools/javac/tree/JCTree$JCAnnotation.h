#ifndef _com_sun_tools_javac_tree_JCTree$JCAnnotation_h_
#define _com_sun_tools_javac_tree_JCTree$JCAnnotation_h_
//$ class com.sun.tools.javac.tree.JCTree$JCAnnotation
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.AnnotationTree

#include <com/sun/source/tree/AnnotationTree.h>
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
				namespace code {
					class Attribute$Compound;
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
					class JCTree;
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

class $export JCTree$JCAnnotation : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::AnnotationTree {
	$class(JCTree$JCAnnotation, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::AnnotationTree)
public:
	JCTree$JCAnnotation();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$Tag* tag, ::com::sun::tools::javac::tree::JCTree* annotationType, ::com::sun::tools::javac::util::List* args);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::tools::javac::tree::JCTree* getAnnotationType() override;
	virtual ::java::util::List* getArguments() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$Tag* tag = nullptr;
	::com::sun::tools::javac::tree::JCTree* annotationType = nullptr;
	::com::sun::tools::javac::util::List* args = nullptr;
	::com::sun::tools::javac::code::Attribute$Compound* attribute = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCAnnotation_h_