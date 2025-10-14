#ifndef _com_sun_tools_javac_code_BoundKind_h_
#define _com_sun_tools_javac_code_BoundKind_h_
//$ class com.sun.tools.javac.code.BoundKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXTENDS")
#undef EXTENDS
#pragma push_macro("SUPER")
#undef SUPER
#pragma push_macro("UNBOUND")
#undef UNBOUND

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export BoundKind : public ::java::lang::Enum {
	$class(BoundKind, 0, ::java::lang::Enum)
public:
	BoundKind();
	static $Array<::com::sun::tools::javac::code::BoundKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name);
	virtual $String* toString() override;
	static ::com::sun::tools::javac::code::BoundKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::BoundKind>* values();
	static ::com::sun::tools::javac::code::BoundKind* EXTENDS;
	static ::com::sun::tools::javac::code::BoundKind* SUPER;
	static ::com::sun::tools::javac::code::BoundKind* UNBOUND;
	static $Array<::com::sun::tools::javac::code::BoundKind>* $VALUES;
	$String* name$ = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EXTENDS")
#pragma pop_macro("SUPER")
#pragma pop_macro("UNBOUND")

#endif // _com_sun_tools_javac_code_BoundKind_h_