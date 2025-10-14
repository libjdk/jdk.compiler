#ifndef _com_sun_tools_javac_jvm_PoolConstant$LoadableConstant$BasicConstant_h_
#define _com_sun_tools_javac_jvm_PoolConstant$LoadableConstant$BasicConstant_h_
//$ class com.sun.tools.javac.jvm.PoolConstant$LoadableConstant$BasicConstant
//$ extends com.sun.tools.javac.jvm.PoolConstant$LoadableConstant

#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>

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

class $import PoolConstant$LoadableConstant$BasicConstant : public ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant {
	$class(PoolConstant$LoadableConstant$BasicConstant, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant)
public:
	PoolConstant$LoadableConstant$BasicConstant();
	void init$(int32_t tag, Object$* data);
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	virtual int32_t poolTag() override;
	int32_t tag = 0;
	$Object* data = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolConstant$LoadableConstant$BasicConstant_h_