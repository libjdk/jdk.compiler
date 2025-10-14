#ifndef _com_sun_tools_javac_jvm_ClassReader$ArrayAttributeProxy_h_
#define _com_sun_tools_javac_jvm_ClassReader$ArrayAttributeProxy_h_
//$ class com.sun.tools.javac.jvm.ClassReader$ArrayAttributeProxy
//$ extends com.sun.tools.javac.code.Attribute

#include <com/sun/tools/javac/code/Attribute.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Visitor;
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
					class List;
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

class $import ClassReader$ArrayAttributeProxy : public ::com::sun::tools::javac::code::Attribute {
	$class(ClassReader$ArrayAttributeProxy, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute)
public:
	ClassReader$ArrayAttributeProxy();
	using ::com::sun::tools::javac::code::Attribute::accept;
	void init$(::com::sun::tools::javac::util::List* values);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* values = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$ArrayAttributeProxy_h_