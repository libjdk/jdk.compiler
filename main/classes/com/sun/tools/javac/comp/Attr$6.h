#ifndef _com_sun_tools_javac_comp_Attr$6_h_
#define _com_sun_tools_javac_comp_Attr$6_h_
//$ class com.sun.tools.javac.comp.Attr$6
//$ extends com.sun.tools.javac.comp.Attr$PostAttrAnalyzer

#include <com/sun/tools/javac/comp/Attr$PostAttrAnalyzer.h>

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
					class JCTree$JCClassDecl;
					class JCTree$JCLambda;
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

class Attr$6 : public ::com::sun::tools::javac::comp::Attr$PostAttrAnalyzer {
	$class(Attr$6, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Attr$PostAttrAnalyzer)
public:
	Attr$6();
	void init$(::com::sun::tools::javac::comp::Attr* this$0);
	using ::com::sun::tools::javac::comp::Attr$PostAttrAnalyzer::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* that) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* that) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$6_h_