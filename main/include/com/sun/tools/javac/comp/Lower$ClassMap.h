#ifndef _com_sun_tools_javac_comp_Lower$ClassMap_h_
#define _com_sun_tools_javac_comp_Lower$ClassMap_h_
//$ class com.sun.tools.javac.comp.Lower$ClassMap
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Lower;
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
					class JCTree$JCClassDecl;
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

class $import Lower$ClassMap : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Lower$ClassMap, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Lower$ClassMap();
	void init$(::com::sun::tools::javac::comp::Lower* this$0);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	::com::sun::tools::javac::comp::Lower* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$ClassMap_h_