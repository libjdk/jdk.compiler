#ifndef _com_sun_tools_javac_code_Symbol$OperatorSymbol$AccessCode_h_
#define _com_sun_tools_javac_code_Symbol$OperatorSymbol$AccessCode_h_
//$ class com.sun.tools.javac.code.Symbol$OperatorSymbol$AccessCode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ASSIGN")
#undef ASSIGN
#pragma push_macro("DEREF")
#undef DEREF
#pragma push_macro("FIRSTASGOP")
#undef FIRSTASGOP
#pragma push_macro("POSTDEC")
#undef POSTDEC
#pragma push_macro("POSTINC")
#undef POSTINC
#pragma push_macro("PREDEC")
#undef PREDEC
#pragma push_macro("PREINC")
#undef PREINC
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$Tag;
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

class $import Symbol$OperatorSymbol$AccessCode : public ::java::lang::Enum {
	$class(Symbol$OperatorSymbol$AccessCode, 0, ::java::lang::Enum)
public:
	Symbol$OperatorSymbol$AccessCode();
	static $Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t code, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	static int32_t from(::com::sun::tools::javac::tree::JCTree$Tag* tag, int32_t opcode);
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* getFromCode(int32_t code);
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode>* values();
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* UNKNOWN;
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* DEREF;
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* ASSIGN;
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* PREINC;
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* PREDEC;
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* POSTINC;
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* POSTDEC;
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode* FIRSTASGOP;
	static $Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode>* $VALUES;
	int32_t code = 0;
	::com::sun::tools::javac::tree::JCTree$Tag* tag = nullptr;
	static int32_t numberOfAccessCodes;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ASSIGN")
#pragma pop_macro("DEREF")
#pragma pop_macro("FIRSTASGOP")
#pragma pop_macro("POSTDEC")
#pragma pop_macro("POSTINC")
#pragma pop_macro("PREDEC")
#pragma pop_macro("PREINC")
#pragma pop_macro("UNKNOWN")

#endif // _com_sun_tools_javac_code_Symbol$OperatorSymbol$AccessCode_h_