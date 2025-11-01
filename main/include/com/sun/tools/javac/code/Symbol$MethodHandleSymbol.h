#ifndef _com_sun_tools_javac_code_Symbol$MethodHandleSymbol_h_
#define _com_sun_tools_javac_code_Symbol$MethodHandleSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$MethodHandleSymbol
//$ extends com.sun.tools.javac.code.Symbol$MethodSymbol
//$ implements com.sun.tools.javac.jvm.PoolConstant$LoadableConstant

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
				namespace code {

class $import Symbol$MethodHandleSymbol : public ::com::sun::tools::javac::code::Symbol$MethodSymbol, public ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant {
	$class(Symbol$MethodHandleSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$MethodSymbol, ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant)
public:
	Symbol$MethodHandleSymbol();
	using ::com::sun::tools::javac::code::Symbol$MethodSymbol::clone;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Symbol* msym);
	void init$(::com::sun::tools::javac::code::Symbol* msym, bool getter);
	bool allowPrivateInvokeVirtual();
	virtual ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol* asHandle() override;
	virtual ::com::sun::tools::javac::code::Symbol* baseSymbol() override;
	virtual bool isHandle() override;
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	virtual int32_t poolTag() override;
	virtual int32_t referenceKind();
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol* refSym = nullptr;
	bool getter = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$MethodHandleSymbol_h_