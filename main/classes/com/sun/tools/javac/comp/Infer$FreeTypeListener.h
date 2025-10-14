#ifndef _com_sun_tools_javac_comp_Infer$FreeTypeListener_h_
#define _com_sun_tools_javac_comp_Infer$FreeTypeListener_h_
//$ interface com.sun.tools.javac.comp.Infer$FreeTypeListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class InferenceContext;
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

class $export Infer$FreeTypeListener : public ::java::lang::Object {
	$interface(Infer$FreeTypeListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void typesInferred(::com::sun::tools::javac::comp::InferenceContext* inferenceContext) {}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$FreeTypeListener_h_