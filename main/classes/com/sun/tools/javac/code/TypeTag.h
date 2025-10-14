#ifndef _com_sun_tools_javac_code_TypeTag_h_
#define _com_sun_tools_javac_code_TypeTag_h_
//$ class com.sun.tools.javac.code.TypeTag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("BOT")
#undef BOT
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("DEFERRED")
#undef DEFERRED
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("FORALL")
#undef FORALL
#pragma push_macro("INT")
#undef INT
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("TYPEVAR")
#undef TYPEVAR
#pragma push_macro("UNDETVAR")
#undef UNDETVAR
#pragma push_macro("UNINITIALIZED_OBJECT")
#undef UNINITIALIZED_OBJECT
#pragma push_macro("UNINITIALIZED_THIS")
#undef UNINITIALIZED_THIS
#pragma push_macro("UNKNOWN")
#undef UNKNOWN
#pragma push_macro("VOID")
#undef VOID
#pragma push_macro("WILDCARD")
#undef WILDCARD

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree$Kind;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeKind;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export TypeTag : public ::java::lang::Enum {
	$class(TypeTag, 0, ::java::lang::Enum)
public:
	TypeTag();
	static $Array<::com::sun::tools::javac::code::TypeTag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t numericClass, int32_t superClasses, bool isPrimitive);
	virtual bool checkRange(int32_t value);
	virtual ::com::sun::source::tree::Tree$Kind* getKindLiteral();
	virtual ::javax::lang::model::type::TypeKind* getPrimitiveTypeKind();
	static int32_t getTypeTagCount();
	virtual bool isStrictSubRangeOf(::com::sun::tools::javac::code::TypeTag* tag);
	virtual bool isSubRangeOf(::com::sun::tools::javac::code::TypeTag* tag);
	static ::com::sun::tools::javac::code::TypeTag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::TypeTag>* values();
	static ::com::sun::tools::javac::code::TypeTag* BYTE;
	static ::com::sun::tools::javac::code::TypeTag* CHAR;
	static ::com::sun::tools::javac::code::TypeTag* SHORT;
	static ::com::sun::tools::javac::code::TypeTag* LONG;
	static ::com::sun::tools::javac::code::TypeTag* FLOAT;
	static ::com::sun::tools::javac::code::TypeTag* INT;
	static ::com::sun::tools::javac::code::TypeTag* DOUBLE;
	static ::com::sun::tools::javac::code::TypeTag* BOOLEAN;
	static ::com::sun::tools::javac::code::TypeTag* VOID;
	static ::com::sun::tools::javac::code::TypeTag* CLASS;
	static ::com::sun::tools::javac::code::TypeTag* ARRAY;
	static ::com::sun::tools::javac::code::TypeTag* METHOD;
	static ::com::sun::tools::javac::code::TypeTag* PACKAGE;
	static ::com::sun::tools::javac::code::TypeTag* MODULE;
	static ::com::sun::tools::javac::code::TypeTag* TYPEVAR;
	static ::com::sun::tools::javac::code::TypeTag* WILDCARD;
	static ::com::sun::tools::javac::code::TypeTag* FORALL;
	static ::com::sun::tools::javac::code::TypeTag* DEFERRED;
	static ::com::sun::tools::javac::code::TypeTag* BOT;
	static ::com::sun::tools::javac::code::TypeTag* NONE;
	static ::com::sun::tools::javac::code::TypeTag* ERROR;
	static ::com::sun::tools::javac::code::TypeTag* UNKNOWN;
	static ::com::sun::tools::javac::code::TypeTag* UNDETVAR;
	static ::com::sun::tools::javac::code::TypeTag* UNINITIALIZED_THIS;
	static ::com::sun::tools::javac::code::TypeTag* UNINITIALIZED_OBJECT;
	static $Array<::com::sun::tools::javac::code::TypeTag>* $VALUES;
	int32_t superClasses = 0;
	int32_t numericClass = 0;
	bool isPrimitive = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ARRAY")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("BOT")
#pragma pop_macro("BYTE")
#pragma pop_macro("CHAR")
#pragma pop_macro("CLASS")
#pragma pop_macro("DEFERRED")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("ERROR")
#pragma pop_macro("FLOAT")
#pragma pop_macro("FORALL")
#pragma pop_macro("INT")
#pragma pop_macro("LONG")
#pragma pop_macro("METHOD")
#pragma pop_macro("MODULE")
#pragma pop_macro("NONE")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("SHORT")
#pragma pop_macro("TYPEVAR")
#pragma pop_macro("UNDETVAR")
#pragma pop_macro("UNINITIALIZED_OBJECT")
#pragma pop_macro("UNINITIALIZED_THIS")
#pragma pop_macro("UNKNOWN")
#pragma pop_macro("VOID")
#pragma pop_macro("WILDCARD")

#endif // _com_sun_tools_javac_code_TypeTag_h_