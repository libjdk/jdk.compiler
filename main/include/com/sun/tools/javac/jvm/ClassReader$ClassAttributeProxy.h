#ifndef _com_sun_tools_javac_jvm_ClassReader$ClassAttributeProxy_h_
#define _com_sun_tools_javac_jvm_ClassReader$ClassAttributeProxy_h_
//$ class com.sun.tools.javac.jvm.ClassReader$ClassAttributeProxy
//$ extends com.sun.tools.javac.code.Attribute

#include <com/sun/tools/javac/code/Attribute.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Visitor;
					class Type;
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

class $import ClassReader$ClassAttributeProxy : public ::com::sun::tools::javac::code::Attribute {
	$class(ClassReader$ClassAttributeProxy, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute)
public:
	ClassReader$ClassAttributeProxy();
	using ::com::sun::tools::javac::code::Attribute::accept;
	void init$(::com::sun::tools::javac::code::Type* classType);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Type* classType = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$ClassAttributeProxy_h_