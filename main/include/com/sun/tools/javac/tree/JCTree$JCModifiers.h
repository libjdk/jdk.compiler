#ifndef _com_sun_tools_javac_tree_JCTree$JCModifiers_h_
#define _com_sun_tools_javac_tree_JCTree$JCModifiers_h_
//$ class com.sun.tools.javac.tree.JCTree$JCModifiers
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.ModifiersTree

#include <com/sun/source/tree/ModifiersTree.h>
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
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCModifiers : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::ModifiersTree {
	$class(JCTree$JCModifiers, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::ModifiersTree)
public:
	JCTree$JCModifiers();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t flags, ::com::sun::tools::javac::util::List* annotations);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getAnnotations() override;
	virtual ::java::util::Set* getFlags() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	int64_t flags = 0;
	::com::sun::tools::javac::util::List* annotations = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCModifiers_h_