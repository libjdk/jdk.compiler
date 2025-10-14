#ifndef _com_sun_tools_javac_code_TargetType_h_
#define _com_sun_tools_javac_code_TargetType_h_
//$ class com.sun.tools.javac.code.TargetType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CAST")
#undef CAST
#pragma push_macro("CLASS_EXTENDS")
#undef CLASS_EXTENDS
#pragma push_macro("CLASS_TYPE_PARAMETER")
#undef CLASS_TYPE_PARAMETER
#pragma push_macro("CLASS_TYPE_PARAMETER_BOUND")
#undef CLASS_TYPE_PARAMETER_BOUND
#pragma push_macro("CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT")
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#pragma push_macro("CONSTRUCTOR_REFERENCE")
#undef CONSTRUCTOR_REFERENCE
#pragma push_macro("CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT")
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
#pragma push_macro("EXCEPTION_PARAMETER")
#undef EXCEPTION_PARAMETER
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("INSTANCEOF")
#undef INSTANCEOF
#pragma push_macro("LOCAL_VARIABLE")
#undef LOCAL_VARIABLE
#pragma push_macro("MAXIMUM_TARGET_TYPE_VALUE")
#undef MAXIMUM_TARGET_TYPE_VALUE
#pragma push_macro("METHOD_FORMAL_PARAMETER")
#undef METHOD_FORMAL_PARAMETER
#pragma push_macro("METHOD_INVOCATION_TYPE_ARGUMENT")
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#pragma push_macro("METHOD_RECEIVER")
#undef METHOD_RECEIVER
#pragma push_macro("METHOD_REFERENCE")
#undef METHOD_REFERENCE
#pragma push_macro("METHOD_REFERENCE_TYPE_ARGUMENT")
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#pragma push_macro("METHOD_RETURN")
#undef METHOD_RETURN
#pragma push_macro("METHOD_TYPE_PARAMETER")
#undef METHOD_TYPE_PARAMETER
#pragma push_macro("METHOD_TYPE_PARAMETER_BOUND")
#undef METHOD_TYPE_PARAMETER_BOUND
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("RESOURCE_VARIABLE")
#undef RESOURCE_VARIABLE
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import TargetType : public ::java::lang::Enum {
	$class(TargetType, 0, ::java::lang::Enum)
public:
	TargetType();
	static $Array<::com::sun::tools::javac::code::TargetType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t targetTypeValue);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t targetTypeValue, bool isLocal);
	static ::com::sun::tools::javac::code::TargetType* fromTargetTypeValue(int32_t tag);
	virtual bool isLocal();
	static bool isValidTargetTypeValue(int32_t tag);
	virtual int32_t targetTypeValue();
	static ::com::sun::tools::javac::code::TargetType* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::TargetType>* values();
	static ::com::sun::tools::javac::code::TargetType* CLASS_TYPE_PARAMETER;
	static ::com::sun::tools::javac::code::TargetType* METHOD_TYPE_PARAMETER;
	static ::com::sun::tools::javac::code::TargetType* CLASS_EXTENDS;
	static ::com::sun::tools::javac::code::TargetType* CLASS_TYPE_PARAMETER_BOUND;
	static ::com::sun::tools::javac::code::TargetType* METHOD_TYPE_PARAMETER_BOUND;
	static ::com::sun::tools::javac::code::TargetType* FIELD;
	static ::com::sun::tools::javac::code::TargetType* METHOD_RETURN;
	static ::com::sun::tools::javac::code::TargetType* METHOD_RECEIVER;
	static ::com::sun::tools::javac::code::TargetType* METHOD_FORMAL_PARAMETER;
	static ::com::sun::tools::javac::code::TargetType* THROWS;
	static ::com::sun::tools::javac::code::TargetType* LOCAL_VARIABLE;
	static ::com::sun::tools::javac::code::TargetType* RESOURCE_VARIABLE;
	static ::com::sun::tools::javac::code::TargetType* EXCEPTION_PARAMETER;
	static ::com::sun::tools::javac::code::TargetType* INSTANCEOF;
	static ::com::sun::tools::javac::code::TargetType* NEW;
	static ::com::sun::tools::javac::code::TargetType* CONSTRUCTOR_REFERENCE;
	static ::com::sun::tools::javac::code::TargetType* METHOD_REFERENCE;
	static ::com::sun::tools::javac::code::TargetType* CAST;
	static ::com::sun::tools::javac::code::TargetType* CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT;
	static ::com::sun::tools::javac::code::TargetType* METHOD_INVOCATION_TYPE_ARGUMENT;
	static ::com::sun::tools::javac::code::TargetType* CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT;
	static ::com::sun::tools::javac::code::TargetType* METHOD_REFERENCE_TYPE_ARGUMENT;
	static ::com::sun::tools::javac::code::TargetType* UNKNOWN;
	static $Array<::com::sun::tools::javac::code::TargetType>* $VALUES;
	static const int32_t MAXIMUM_TARGET_TYPE_VALUE = 75;
	int32_t targetTypeValue$ = 0;
	bool isLocal$ = false;
	static $Array<::com::sun::tools::javac::code::TargetType>* targets;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CAST")
#pragma pop_macro("CLASS_EXTENDS")
#pragma pop_macro("CLASS_TYPE_PARAMETER")
#pragma pop_macro("CLASS_TYPE_PARAMETER_BOUND")
#pragma pop_macro("CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT")
#pragma pop_macro("CONSTRUCTOR_REFERENCE")
#pragma pop_macro("CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT")
#pragma pop_macro("EXCEPTION_PARAMETER")
#pragma pop_macro("FIELD")
#pragma pop_macro("INSTANCEOF")
#pragma pop_macro("LOCAL_VARIABLE")
#pragma pop_macro("MAXIMUM_TARGET_TYPE_VALUE")
#pragma pop_macro("METHOD_FORMAL_PARAMETER")
#pragma pop_macro("METHOD_INVOCATION_TYPE_ARGUMENT")
#pragma pop_macro("METHOD_RECEIVER")
#pragma pop_macro("METHOD_REFERENCE")
#pragma pop_macro("METHOD_REFERENCE_TYPE_ARGUMENT")
#pragma pop_macro("METHOD_RETURN")
#pragma pop_macro("METHOD_TYPE_PARAMETER")
#pragma pop_macro("METHOD_TYPE_PARAMETER_BOUND")
#pragma pop_macro("NEW")
#pragma pop_macro("RESOURCE_VARIABLE")
#pragma pop_macro("THROWS")
#pragma pop_macro("UNKNOWN")

#endif // _com_sun_tools_javac_code_TargetType_h_