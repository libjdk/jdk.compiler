#ifndef _com_sun_tools_javac_jvm_Code$StackMapFormat_h_
#define _com_sun_tools_javac_jvm_Code$StackMapFormat_h_
//$ class com.sun.tools.javac.jvm.Code$StackMapFormat
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLDC")
#undef CLDC
#pragma push_macro("NONE")
#undef NONE

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

class $export Code$StackMapFormat : public ::java::lang::Enum {
	$class(Code$StackMapFormat, 0, ::java::lang::Enum)
public:
	Code$StackMapFormat();
	static $Array<::com::sun::tools::javac::jvm::Code$StackMapFormat>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::util::Name* getAttributeName(::com::sun::tools::javac::util::Names* names);
	static ::com::sun::tools::javac::jvm::Code$StackMapFormat* valueOf($String* name);
	static $Array<::com::sun::tools::javac::jvm::Code$StackMapFormat>* values();
	static ::com::sun::tools::javac::jvm::Code$StackMapFormat* NONE;
	static ::com::sun::tools::javac::jvm::Code$StackMapFormat* CLDC;
	static ::com::sun::tools::javac::jvm::Code$StackMapFormat* JSR202;
	static $Array<::com::sun::tools::javac::jvm::Code$StackMapFormat>* $VALUES;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLDC")
#pragma pop_macro("NONE")

#endif // _com_sun_tools_javac_jvm_Code$StackMapFormat_h_