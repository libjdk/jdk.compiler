#ifndef _com_sun_tools_javac_jvm_PoolConstant_h_
#define _com_sun_tools_javac_jvm_PoolConstant_h_
//$ interface com.sun.tools.javac.jvm.PoolConstant
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Types;
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

class $export PoolConstant : public ::java::lang::Object {
	$interface(PoolConstant, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types);
	virtual int32_t poolTag() {return 0;}
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolConstant_h_