#ifndef _com_sun_tools_javac_jvm_Gen$ClassReferenceVisitor_h_
#define _com_sun_tools_javac_jvm_Gen$ClassReferenceVisitor_h_
//$ class com.sun.tools.javac.jvm.Gen$ClassReferenceVisitor
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Gen;
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
					class JCTree$JCBinary;
					class JCTree$JCConditional;
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCParens;
					class JCTree$JCTypeCast;
					class JCTree$JCUnary;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import Gen$ClassReferenceVisitor : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Gen$ClassReferenceVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Gen$ClassReferenceVisitor();
	void init$(::com::sun::tools::javac::jvm::Gen* this$0);
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	::com::sun::tools::javac::jvm::Gen* this$0 = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Gen$ClassReferenceVisitor_h_