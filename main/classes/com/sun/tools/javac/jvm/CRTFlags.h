#ifndef _com_sun_tools_javac_jvm_CRTFlags_h_
#define _com_sun_tools_javac_jvm_CRTFlags_h_
//$ interface com.sun.tools.javac.jvm.CRTFlags
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CRT_ASSIGNMENT")
#undef CRT_ASSIGNMENT
#pragma push_macro("CRT_BLOCK")
#undef CRT_BLOCK
#pragma push_macro("CRT_BRANCH_FALSE")
#undef CRT_BRANCH_FALSE
#pragma push_macro("CRT_BRANCH_TRUE")
#undef CRT_BRANCH_TRUE
#pragma push_macro("CRT_CREATE")
#undef CRT_CREATE
#pragma push_macro("CRT_FLOW_CONTROLLER")
#undef CRT_FLOW_CONTROLLER
#pragma push_macro("CRT_FLOW_TARGET")
#undef CRT_FLOW_TARGET
#pragma push_macro("CRT_INVOKE")
#undef CRT_INVOKE
#pragma push_macro("CRT_STATEMENT")
#undef CRT_STATEMENT
#pragma push_macro("CRT_VALID_FLAGS")
#undef CRT_VALID_FLAGS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export CRTFlags : public ::java::lang::Object {
	$interface(CRTFlags, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t CRT_STATEMENT = 1;
	static const int32_t CRT_BLOCK = 2;
	static const int32_t CRT_ASSIGNMENT = 4;
	static const int32_t CRT_FLOW_CONTROLLER = 8;
	static const int32_t CRT_FLOW_TARGET = 16;
	static const int32_t CRT_INVOKE = 32;
	static const int32_t CRT_CREATE = 64;
	static const int32_t CRT_BRANCH_TRUE = 128;
	static const int32_t CRT_BRANCH_FALSE = 256;
	static const int32_t CRT_VALID_FLAGS = 511; // CRT_STATEMENT | CRT_BLOCK | CRT_ASSIGNMENT | CRT_FLOW_CONTROLLER | CRT_FLOW_TARGET | CRT_INVOKE | CRT_CREATE | CRT_BRANCH_TRUE | CRT_BRANCH_FALSE
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CRT_ASSIGNMENT")
#pragma pop_macro("CRT_BLOCK")
#pragma pop_macro("CRT_BRANCH_FALSE")
#pragma pop_macro("CRT_BRANCH_TRUE")
#pragma pop_macro("CRT_CREATE")
#pragma pop_macro("CRT_FLOW_CONTROLLER")
#pragma pop_macro("CRT_FLOW_TARGET")
#pragma pop_macro("CRT_INVOKE")
#pragma pop_macro("CRT_STATEMENT")
#pragma pop_macro("CRT_VALID_FLAGS")

#endif // _com_sun_tools_javac_jvm_CRTFlags_h_