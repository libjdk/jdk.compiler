#ifndef _com_sun_tools_javac_comp_Attr$PostAttrAnalyzer_h_
#define _com_sun_tools_javac_comp_Attr$PostAttrAnalyzer_h_
//$ class com.sun.tools.javac.comp.Attr$PostAttrAnalyzer
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

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
				namespace comp {
					class Attr;
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
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
					class JCTree$JCBindingPattern;
					class JCTree$JCClassDecl;
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCMemberReference;
					class JCTree$JCMethodDecl;
					class JCTree$JCNewClass;
					class JCTree$JCUnary;
					class JCTree$JCVariableDecl;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Attr$PostAttrAnalyzer : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Attr$PostAttrAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Attr$PostAttrAnalyzer();
	void init$(::com::sun::tools::javac::comp::Attr* this$0);
	::com::sun::tools::javac::code::Type* dummyMethodType(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* md);
	::com::sun::tools::javac::code::Type* dummyMethodType();
	void initTypeIfNeeded(::com::sun::tools::javac::tree::JCTree* that);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* that) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* that) override;
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* that) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* that) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* that) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* that) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* that) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* that) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* that) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* that) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* that) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$PostAttrAnalyzer_h_