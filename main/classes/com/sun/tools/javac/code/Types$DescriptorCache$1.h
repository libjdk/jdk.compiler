#ifndef _com_sun_tools_javac_code_Types$DescriptorCache$1_h_
#define _com_sun_tools_javac_code_Types$DescriptorCache$1_h_
//$ class com.sun.tools.javac.code.Types$DescriptorCache$1
//$ extends com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor

#include <com/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
					class Types$DescriptorCache;
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

class Types$DescriptorCache$1 : public ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor {
	$class(Types$DescriptorCache$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor)
public:
	Types$DescriptorCache$1();
	void init$(::com::sun::tools::javac::code::Types$DescriptorCache* this$1, ::com::sun::tools::javac::code::Symbol* descSym, ::com::sun::tools::javac::code::Symbol* val$bestSoFar);
	virtual ::com::sun::tools::javac::code::Type* getType(::com::sun::tools::javac::code::Type* origin) override;
	::com::sun::tools::javac::code::Types$DescriptorCache* this$1 = nullptr;
	::com::sun::tools::javac::code::Symbol* val$bestSoFar = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$DescriptorCache$1_h_