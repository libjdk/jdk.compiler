#ifndef _com_sun_tools_javac_comp_Attr$LocalInitScanner_h_
#define _com_sun_tools_javac_comp_Attr$LocalInitScanner_h_
//$ class com.sun.tools.javac.comp.Attr$LocalInitScanner
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
					class JCTree$JCMethodInvocation;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCTypeCast;
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
					class JCDiagnostic$Fragment;
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

class $export Attr$LocalInitScanner : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Attr$LocalInitScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Attr$LocalInitScanner();
	void init$();
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	::com::sun::tools::javac::util::JCDiagnostic$Fragment* badInferenceMsg = nullptr;
	bool needsTarget = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$LocalInitScanner_h_