#ifndef _com_sun_tools_javac_jvm_PoolConstant$Dynamic$BsmKey_h_
#define _com_sun_tools_javac_jvm_PoolConstant$Dynamic$BsmKey_h_
//$ class com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey
//$ extends java.lang.Object

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
				namespace util {
					class List;
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

class $export PoolConstant$Dynamic$BsmKey : public ::java::lang::Object {
	$class(PoolConstant$Dynamic$BsmKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PoolConstant$Dynamic$BsmKey();
	void init$(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* bsm, $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>* staticArgs);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	static $Object* lambda$new$0(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* p);
	::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* bsm = nullptr;
	$Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>* staticArgs = nullptr;
	$Object* bsmKey = nullptr;
	::com::sun::tools::javac::util::List* staticArgKeys = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolConstant$Dynamic$BsmKey_h_