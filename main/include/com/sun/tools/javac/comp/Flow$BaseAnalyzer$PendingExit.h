#ifndef _com_sun_tools_javac_comp_Flow$BaseAnalyzer$PendingExit_h_
#define _com_sun_tools_javac_comp_Flow$BaseAnalyzer$PendingExit_h_
//$ class com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import Flow$BaseAnalyzer$PendingExit : public ::java::lang::Object {
	$class(Flow$BaseAnalyzer$PendingExit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Flow$BaseAnalyzer$PendingExit();
	void init$(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void resolveJump();
	::com::sun::tools::javac::tree::JCTree* tree = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$BaseAnalyzer$PendingExit_h_