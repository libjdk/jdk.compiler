#ifndef _com_sun_tools_javac_jvm_Profile_h_
#define _com_sun_tools_javac_jvm_Profile_h_
//$ class com.sun.tools.javac.jvm.Profile
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("COMPACT1")
#undef COMPACT1
#pragma push_macro("COMPACT2")
#undef COMPACT2
#pragma push_macro("COMPACT3")
#undef COMPACT3
#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Target;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Key;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import Profile : public ::java::lang::Enum {
	$class(Profile, 0, ::java::lang::Enum)
public:
	Profile();
	static $Array<::com::sun::tools::javac::jvm::Profile>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, int32_t value, ::com::sun::tools::javac::jvm::Target* t, $Array<::com::sun::tools::javac::jvm::Target>* targets);
	static ::com::sun::tools::javac::jvm::Profile* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isValid(::com::sun::tools::javac::jvm::Target* t);
	static ::com::sun::tools::javac::jvm::Profile* lookup($String* name);
	static ::com::sun::tools::javac::jvm::Profile* lookup(int32_t value);
	static ::com::sun::tools::javac::jvm::Profile* valueOf($String* name);
	static $Array<::com::sun::tools::javac::jvm::Profile>* values();
	static ::com::sun::tools::javac::jvm::Profile* COMPACT1;
	static ::com::sun::tools::javac::jvm::Profile* COMPACT2;
	static ::com::sun::tools::javac::jvm::Profile* COMPACT3;
	static ::com::sun::tools::javac::jvm::Profile* DEFAULT;
	static $Array<::com::sun::tools::javac::jvm::Profile>* $VALUES;
	static ::com::sun::tools::javac::util::Context$Key* profileKey;
	$String* name$ = nullptr;
	int32_t value = 0;
	::java::util::Set* targets = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("COMPACT1")
#pragma pop_macro("COMPACT2")
#pragma pop_macro("COMPACT3")
#pragma pop_macro("DEFAULT")

#endif // _com_sun_tools_javac_jvm_Profile_h_