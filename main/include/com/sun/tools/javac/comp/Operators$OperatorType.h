#ifndef _com_sun_tools_javac_comp_Operators$OperatorType_h_
#define _com_sun_tools_javac_comp_Operators$OperatorType_h_
//$ class com.sun.tools.javac.comp.Operators$OperatorType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("BOT")
#undef BOT
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("INT")
#undef INT
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("OBJECT")
#undef OBJECT
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("STRING")
#undef STRING

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symtab;
					class Type;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Operators$OperatorType : public ::java::lang::Enum {
	$class(Operators$OperatorType, 0, ::java::lang::Enum)
public:
	Operators$OperatorType();
	static $Array<::com::sun::tools::javac::comp::Operators$OperatorType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::util::function::Function* asTypeFunc);
	virtual ::com::sun::tools::javac::code::Type* asType(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$0(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$1(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$10(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$2(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$3(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$4(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$5(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$6(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$7(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$8(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::code::Type* lambda$static$9(::com::sun::tools::javac::code::Symtab* syms);
	static ::com::sun::tools::javac::comp::Operators$OperatorType* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Operators$OperatorType>* values();
	static ::com::sun::tools::javac::comp::Operators$OperatorType* BYTE;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* SHORT;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* INT;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* LONG;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* FLOAT;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* DOUBLE;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* CHAR;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* BOOLEAN;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* OBJECT;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* STRING;
	static ::com::sun::tools::javac::comp::Operators$OperatorType* BOT;
	static $Array<::com::sun::tools::javac::comp::Operators$OperatorType>* $VALUES;
	::java::util::function::Function* asTypeFunc = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BOOLEAN")
#pragma pop_macro("BOT")
#pragma pop_macro("BYTE")
#pragma pop_macro("CHAR")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("INT")
#pragma pop_macro("LONG")
#pragma pop_macro("OBJECT")
#pragma pop_macro("SHORT")
#pragma pop_macro("STRING")

#endif // _com_sun_tools_javac_comp_Operators$OperatorType_h_