#ifndef _com_sun_tools_javac_jvm_PoolConstant$Dynamic_h_
#define _com_sun_tools_javac_jvm_PoolConstant$Dynamic_h_
//$ interface com.sun.tools.javac.jvm.PoolConstant$Dynamic
//$ extends com.sun.tools.javac.jvm.PoolConstant

#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <java/lang/Array.h>

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
					class PoolConstant$Dynamic$BsmKey;
					class PoolConstant$LoadableConstant;
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

class $export PoolConstant$Dynamic : public ::com::sun::tools::javac::jvm::PoolConstant {
	$interface(PoolConstant$Dynamic, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::PoolConstant)
public:
	virtual ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* bootstrapMethod() {return nullptr;}
	virtual ::com::sun::tools::javac::jvm::PoolConstant$Dynamic$BsmKey* bsmKey(::com::sun::tools::javac::code::Types* types);
	virtual ::com::sun::tools::javac::jvm::PoolConstant* dynamicType() {return nullptr;}
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	virtual $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>* staticArgs() {return nullptr;}
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolConstant$Dynamic_h_