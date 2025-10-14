#ifndef _com_sun_tools_javac_jvm_PoolConstant$LoadableConstant_h_
#define _com_sun_tools_javac_jvm_PoolConstant$LoadableConstant_h_
//$ interface com.sun.tools.javac.jvm.PoolConstant$LoadableConstant
//$ extends com.sun.tools.javac.jvm.PoolConstant

#include <com/sun/tools/javac/jvm/PoolConstant.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import PoolConstant$LoadableConstant : public ::com::sun::tools::javac::jvm::PoolConstant {
	$interface(PoolConstant$LoadableConstant, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::PoolConstant)
public:
	static ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* Double(double d);
	static ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* Float(float f);
	static ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* Int(int32_t i);
	static ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* Long(int64_t l);
	static ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* String($String* s);
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolConstant$LoadableConstant_h_