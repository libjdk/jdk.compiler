#ifndef _com_sun_tools_javac_code_Types$DescriptorCache$FunctionDescriptor_h_
#define _com_sun_tools_javac_code_Types$DescriptorCache$FunctionDescriptor_h_
//$ class com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import Types$DescriptorCache$FunctionDescriptor : public ::java::lang::Object {
	$class(Types$DescriptorCache$FunctionDescriptor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$DescriptorCache$FunctionDescriptor();
	void init$(::com::sun::tools::javac::code::Types$DescriptorCache* this$1, ::com::sun::tools::javac::code::Symbol* descSym);
	virtual ::com::sun::tools::javac::code::Symbol* getSymbol();
	virtual ::com::sun::tools::javac::code::Type* getType(::com::sun::tools::javac::code::Type* site);
	::com::sun::tools::javac::code::Types$DescriptorCache* this$1 = nullptr;
	::com::sun::tools::javac::code::Symbol* descSym = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$DescriptorCache$FunctionDescriptor_h_