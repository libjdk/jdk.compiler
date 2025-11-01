#ifndef _com_sun_tools_javac_code_Kinds$KindName_h_
#define _com_sun_tools_javac_code_Kinds$KindName_h_
//$ class com.sun.tools.javac.code.Kinds$KindName
//$ extends java.lang.Enum
//$ implements com.sun.tools.javac.api.Formattable

#include <com/sun/tools/javac/api/Formattable.h>
#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("BOUND")
#undef BOUND
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("CONSTRUCTOR")
#undef CONSTRUCTOR
#pragma push_macro("ENUM")
#undef ENUM
#pragma push_macro("INSTANCE_INIT")
#undef INSTANCE_INIT
#pragma push_macro("INTERFACE")
#undef INTERFACE
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("RECORD")
#undef RECORD
#pragma push_macro("RECORD_COMPONENT")
#undef RECORD_COMPONENT
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("STATIC_INIT")
#undef STATIC_INIT
#pragma push_macro("TYPEVAR")
#undef TYPEVAR
#pragma push_macro("VAL")
#undef VAL
#pragma push_macro("VAR")
#undef VAR

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class Messages;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Kinds$KindName : public ::java::lang::Enum, public ::com::sun::tools::javac::api::Formattable {
	$class(Kinds$KindName, 0, ::java::lang::Enum, ::com::sun::tools::javac::api::Formattable)
public:
	Kinds$KindName();
	static $Array<::com::sun::tools::javac::code::Kinds$KindName>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name);
	virtual $String* getKind() override;
	virtual $String* toString() override;
	virtual $String* toString(::java::util::Locale* locale, ::com::sun::tools::javac::api::Messages* messages) override;
	static ::com::sun::tools::javac::code::Kinds$KindName* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Kinds$KindName>* values();
	static ::com::sun::tools::javac::code::Kinds$KindName* ANNOTATION;
	static ::com::sun::tools::javac::code::Kinds$KindName* CONSTRUCTOR;
	static ::com::sun::tools::javac::code::Kinds$KindName* INTERFACE;
	static ::com::sun::tools::javac::code::Kinds$KindName* ENUM;
	static ::com::sun::tools::javac::code::Kinds$KindName* STATIC;
	static ::com::sun::tools::javac::code::Kinds$KindName* TYPEVAR;
	static ::com::sun::tools::javac::code::Kinds$KindName* BOUND;
	static ::com::sun::tools::javac::code::Kinds$KindName* VAR;
	static ::com::sun::tools::javac::code::Kinds$KindName* VAL;
	static ::com::sun::tools::javac::code::Kinds$KindName* METHOD;
	static ::com::sun::tools::javac::code::Kinds$KindName* CLASS;
	static ::com::sun::tools::javac::code::Kinds$KindName* STATIC_INIT;
	static ::com::sun::tools::javac::code::Kinds$KindName* INSTANCE_INIT;
	static ::com::sun::tools::javac::code::Kinds$KindName* PACKAGE;
	static ::com::sun::tools::javac::code::Kinds$KindName* MODULE;
	static ::com::sun::tools::javac::code::Kinds$KindName* RECORD_COMPONENT;
	static ::com::sun::tools::javac::code::Kinds$KindName* RECORD;
	static $Array<::com::sun::tools::javac::code::Kinds$KindName>* $VALUES;
	$String* name$ = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ANNOTATION")
#pragma pop_macro("BOUND")
#pragma pop_macro("CLASS")
#pragma pop_macro("CONSTRUCTOR")
#pragma pop_macro("ENUM")
#pragma pop_macro("INSTANCE_INIT")
#pragma pop_macro("INTERFACE")
#pragma pop_macro("METHOD")
#pragma pop_macro("MODULE")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("RECORD")
#pragma pop_macro("RECORD_COMPONENT")
#pragma pop_macro("STATIC")
#pragma pop_macro("STATIC_INIT")
#pragma pop_macro("TYPEVAR")
#pragma pop_macro("VAL")
#pragma pop_macro("VAR")

#endif // _com_sun_tools_javac_code_Kinds$KindName_h_