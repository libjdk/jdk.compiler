#ifndef _com_sun_tools_javac_jvm_Profile$1_h_
#define _com_sun_tools_javac_jvm_Profile$1_h_
//$ class com.sun.tools.javac.jvm.Profile$1
//$ extends com.sun.tools.javac.jvm.Profile

#include <com/sun/tools/javac/jvm/Profile.h>

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
				namespace jvm {

class Profile$1 : public ::com::sun::tools::javac::jvm::Profile {
	$class(Profile$1, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Profile)
public:
	Profile$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool isValid(::com::sun::tools::javac::jvm::Target* t) override;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Profile$1_h_