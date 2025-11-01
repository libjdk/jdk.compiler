#ifndef _com_sun_tools_javac_tree_JCTree$JCNewArray_h_
#define _com_sun_tools_javac_tree_JCTree$JCNewArray_h_
//$ class com.sun.tools.javac.tree.JCTree$JCNewArray
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.NewArrayTree

#include <com/sun/source/tree/NewArrayTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree;
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

class $export JCTree$JCNewArray : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::NewArrayTree {
	$class(JCTree$JCNewArray, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::NewArrayTree)
public:
	JCTree$JCNewArray();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype, ::com::sun::tools::javac::util::List* dims, ::com::sun::tools::javac::util::List* elems);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getAnnotations() override;
	virtual ::java::util::List* getDimAnnotations() override;
	virtual ::java::util::List* getDimensions() override;
	virtual ::java::util::List* getInitializers() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::source::tree::Tree* getType() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype = nullptr;
	::com::sun::tools::javac::util::List* dims = nullptr;
	::com::sun::tools::javac::util::List* annotations = nullptr;
	::com::sun::tools::javac::util::List* dimAnnotations = nullptr;
	::com::sun::tools::javac::util::List* elems = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCNewArray_h_