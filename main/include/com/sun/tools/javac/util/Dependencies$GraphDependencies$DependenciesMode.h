#ifndef _com_sun_tools_javac_util_Dependencies$GraphDependencies$DependenciesMode_h_
#define _com_sun_tools_javac_util_Dependencies$GraphDependencies$DependenciesMode_h_
//$ class com.sun.tools.javac.util.Dependencies$GraphDependencies$DependenciesMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("REDUNDANT")
#undef REDUNDANT
#pragma push_macro("SOURCE")
#undef SOURCE

namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Dependencies$GraphDependencies$DependenciesMode : public ::java::lang::Enum {
	$class(Dependencies$GraphDependencies$DependenciesMode, 0, ::java::lang::Enum)
public:
	Dependencies$GraphDependencies$DependenciesMode();
	static $Array<::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* opt);
	static ::java::util::EnumSet* getDependenciesModes($StringArray* modes);
	static ::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode>* values();
	static ::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode* SOURCE;
	static ::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode* CLASS;
	static ::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode* REDUNDANT;
	static $Array<::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode>* $VALUES;
	$String* opt = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS")
#pragma pop_macro("REDUNDANT")
#pragma pop_macro("SOURCE")

#endif // _com_sun_tools_javac_util_Dependencies$GraphDependencies$DependenciesMode_h_