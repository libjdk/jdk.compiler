#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredStuckPolicy_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredStuckPolicy_h_
//$ interface com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import DeferredAttr$DeferredStuckPolicy : public ::java::lang::Object {
	$interface(DeferredAttr$DeferredStuckPolicy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Set* depVars() {return nullptr;}
	virtual bool isStuck() {return false;}
	virtual ::java::util::Set* stuckVars() {return nullptr;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredStuckPolicy_h_