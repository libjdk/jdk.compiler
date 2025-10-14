#ifndef _com_sun_tools_javac_jvm_Code$StackMapFormat$1_h_
#define _com_sun_tools_javac_jvm_Code$StackMapFormat$1_h_
//$ class com.sun.tools.javac.jvm.Code$StackMapFormat$1
//$ extends com.sun.tools.javac.jvm.Code$StackMapFormat

#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Name;
					class Names;
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

class Code$StackMapFormat$1 : public ::com::sun::tools::javac::jvm::Code$StackMapFormat {
	$class(Code$StackMapFormat$1, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Code$StackMapFormat)
public:
	Code$StackMapFormat$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::util::Name* getAttributeName(::com::sun::tools::javac::util::Names* names) override;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Code$StackMapFormat$1_h_