#ifndef _com_sun_tools_javac_tree_JCTree$JCTypeParameter_h_
#define _com_sun_tools_javac_tree_JCTree$JCTypeParameter_h_
//$ class com.sun.tools.javac.tree.JCTree$JCTypeParameter
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.TypeParameterTree

#include <com/sun/source/tree/TypeParameterTree.h>
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
					class Name;
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
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCTypeParameter : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::TypeParameterTree {
	$class(JCTree$JCTypeParameter, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::TypeParameterTree)
public:
	JCTree$JCTypeParameter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* bounds, ::com::sun::tools::javac::util::List* annotations);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getAnnotations() override;
	virtual ::java::util::List* getBounds() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::javax::lang::model::element::Name* getName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::util::List* bounds = nullptr;
	::com::sun::tools::javac::util::List* annotations = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCTypeParameter_h_