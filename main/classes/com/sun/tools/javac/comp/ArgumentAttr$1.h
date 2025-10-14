#ifndef _com_sun_tools_javac_comp_ArgumentAttr$1_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$1_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$1
//$ extends com.sun.tools.javac.comp.Attr$MethodAttrInfo

#include <com/sun/tools/javac/comp/Attr$MethodAttrInfo.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class ArgumentAttr;
					class ArgumentAttr$UniquePos;
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

class ArgumentAttr$1 : public ::com::sun::tools::javac::comp::Attr$MethodAttrInfo {
	$class(ArgumentAttr$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Attr$MethodAttrInfo)
public:
	ArgumentAttr$1();
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::comp::Attr* x0, ::com::sun::tools::javac::comp::ArgumentAttr$UniquePos* val$pos);
	virtual bool needsArgumentAttr(::com::sun::tools::javac::tree::JCTree* tree) override;
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
	::com::sun::tools::javac::comp::ArgumentAttr$UniquePos* val$pos = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$1_h_