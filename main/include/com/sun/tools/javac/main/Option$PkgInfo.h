#ifndef _com_sun_tools_javac_main_Option$PkgInfo_h_
#define _com_sun_tools_javac_main_Option$PkgInfo_h_
//$ class com.sun.tools.javac.main.Option$PkgInfo
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALWAYS")
#undef ALWAYS
#pragma push_macro("LEGACY")
#undef LEGACY
#pragma push_macro("NONEMPTY")
#undef NONEMPTY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Options;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import Option$PkgInfo : public ::java::lang::Enum {
	$class(Option$PkgInfo, 0, ::java::lang::Enum)
public:
	Option$PkgInfo();
	static $Array<::com::sun::tools::javac::main::Option$PkgInfo>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::main::Option$PkgInfo* get(::com::sun::tools::javac::util::Options* options);
	static ::com::sun::tools::javac::main::Option$PkgInfo* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Option$PkgInfo>* values();
	static ::com::sun::tools::javac::main::Option$PkgInfo* ALWAYS;
	static ::com::sun::tools::javac::main::Option$PkgInfo* LEGACY;
	static ::com::sun::tools::javac::main::Option$PkgInfo* NONEMPTY;
	static $Array<::com::sun::tools::javac::main::Option$PkgInfo>* $VALUES;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ALWAYS")
#pragma pop_macro("LEGACY")
#pragma pop_macro("NONEMPTY")

#endif // _com_sun_tools_javac_main_Option$PkgInfo_h_