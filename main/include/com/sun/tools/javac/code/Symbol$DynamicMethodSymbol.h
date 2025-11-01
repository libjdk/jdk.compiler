#ifndef _com_sun_tools_javac_code_Symbol$DynamicMethodSymbol_h_
#define _com_sun_tools_javac_code_Symbol$DynamicMethodSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$DynamicMethodSymbol
//$ extends com.sun.tools.javac.code.Symbol$MethodSymbol
//$ implements com.sun.tools.javac.jvm.PoolConstant$Dynamic

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$MethodHandleSymbol;
					class Type;
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
					class PoolConstant;
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
				namespace code {

class $import Symbol$DynamicMethodSymbol : public ::com::sun::tools::javac::code::Symbol$MethodSymbol, public ::com::sun::tools::javac::jvm::PoolConstant$Dynamic {
	$class(Symbol$DynamicMethodSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$MethodSymbol, ::com::sun::tools::javac::jvm::PoolConstant$Dynamic)
public:
	Symbol$DynamicMethodSymbol();
	using ::com::sun::tools::javac::code::Symbol$MethodSymbol::clone;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol* bsm, ::com::sun::tools::javac::code::Type* type, $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>* staticArgs);
	virtual ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* bootstrapMethod() override;
	virtual ::com::sun::tools::javac::jvm::PoolConstant* dynamicType() override;
	virtual bool isDynamic() override;
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	virtual int32_t poolTag() override;
	virtual $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>* staticArgs() override;
	virtual $String* toString() override;
	$Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>* staticArgs$ = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodHandleSymbol* bsm = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$DynamicMethodSymbol_h_