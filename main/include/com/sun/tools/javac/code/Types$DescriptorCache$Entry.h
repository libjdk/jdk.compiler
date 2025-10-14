#ifndef _com_sun_tools_javac_code_Types$DescriptorCache$Entry_h_
#define _com_sun_tools_javac_code_Types$DescriptorCache$Entry_h_
//$ class com.sun.tools.javac.code.Types$DescriptorCache$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Types$DescriptorCache;
					class Types$DescriptorCache$FunctionDescriptor;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Types$DescriptorCache$Entry : public ::java::lang::Object {
	$class(Types$DescriptorCache$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$DescriptorCache$Entry();
	void init$(::com::sun::tools::javac::code::Types$DescriptorCache* this$1, ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor* cachedDescRes, int32_t prevMark);
	virtual bool matches(int32_t mark);
	::com::sun::tools::javac::code::Types$DescriptorCache* this$1 = nullptr;
	::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor* cachedDescRes = nullptr;
	int32_t prevMark = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$DescriptorCache$Entry_h_