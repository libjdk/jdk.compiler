#ifndef _com_sun_tools_javac_comp_Lower$TreeBuilder_h_
#define _com_sun_tools_javac_comp_Lower$TreeBuilder_h_
//$ interface com.sun.tools.javac.comp.Lower$TreeBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCExpression;
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

class $import Lower$TreeBuilder : public ::java::lang::Object {
	$interface(Lower$TreeBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* build(::com::sun::tools::javac::tree::JCTree$JCExpression* arg) {return nullptr;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$TreeBuilder_h_