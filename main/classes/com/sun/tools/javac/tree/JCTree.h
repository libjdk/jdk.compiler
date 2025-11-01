#ifndef _com_sun_tools_javac_tree_JCTree_h_
#define _com_sun_tools_javac_tree_JCTree_h_
//$ class com.sun.tools.javac.tree.JCTree
//$ extends com.sun.source.tree.Tree
//$ implements java.lang.Cloneable,com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition

#include <com/sun/source/tree/Tree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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
					class EndPosTable;
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
				namespace tree {

class $export JCTree : public ::com::sun::source::tree::Tree, public ::java::lang::Cloneable, public ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition {
	$class(JCTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree, ::java::lang::Cloneable, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition)
public:
	JCTree();
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override {return nullptr;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) {}
	virtual $Object* clone() override;
	virtual int32_t getEndPosition(::com::sun::tools::javac::tree::EndPosTable* endPosTable) override;
	virtual int32_t getPreferredPosition() override;
	virtual int32_t getStartPosition() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree* getTree() override;
	virtual bool hasTag(::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos();
	virtual ::com::sun::tools::javac::tree::JCTree* setPos(int32_t pos);
	virtual ::com::sun::tools::javac::tree::JCTree* setType(::com::sun::tools::javac::code::Type* type);
	virtual $String* toString() override;
	int32_t pos$ = 0;
	::com::sun::tools::javac::code::Type* type = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree_h_