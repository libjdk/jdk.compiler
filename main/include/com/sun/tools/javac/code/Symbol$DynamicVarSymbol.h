#ifndef _com_sun_tools_javac_code_Symbol$DynamicVarSymbol_h_
#define _com_sun_tools_javac_code_Symbol$DynamicVarSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$DynamicVarSymbol
//$ extends com.sun.tools.javac.code.Symbol$VarSymbol
//$ implements com.sun.tools.javac.jvm.PoolConstant$Dynamic,com.sun.tools.javac.jvm.PoolConstant$LoadableConstant

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
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

class $import Symbol$DynamicVarSymbol : public ::com::sun::tools::javac::code::Symbol$VarSymbol, public ::com::sun::tools::javac::jvm::PoolConstant$Dynamic, public ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant {
	$class(Symbol$DynamicVarSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$VarSymbol, ::com::sun::tools::javac::jvm::PoolConstant$Dynamic, ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant)
public:
	Symbol$DynamicVarSymbol();
	using ::com::sun::tools::javac::code::Symbol$VarSymbol::clone;
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

#endif // _com_sun_tools_javac_code_Symbol$DynamicVarSymbol_h_