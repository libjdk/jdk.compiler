#ifndef _com_sun_tools_javac_jvm_PoolConstant$NameAndType_h_
#define _com_sun_tools_javac_jvm_PoolConstant$NameAndType_h_
//$ class com.sun.tools.javac.jvm.PoolConstant$NameAndType
//$ extends com.sun.tools.javac.jvm.PoolConstant

#include <com/sun/tools/javac/jvm/PoolConstant.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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
				namespace util {
					class Name;
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

class $import PoolConstant$NameAndType : public ::com::sun::tools::javac::jvm::PoolConstant {
	$class(PoolConstant$NameAndType, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::PoolConstant)
public:
	PoolConstant$NameAndType();
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type);
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	virtual int32_t poolTag() override;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::code::Type* type = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolConstant$NameAndType_h_