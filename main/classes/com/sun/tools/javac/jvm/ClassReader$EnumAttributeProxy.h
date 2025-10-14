#ifndef _com_sun_tools_javac_jvm_ClassReader$EnumAttributeProxy_h_
#define _com_sun_tools_javac_jvm_ClassReader$EnumAttributeProxy_h_
//$ class com.sun.tools.javac.jvm.ClassReader$EnumAttributeProxy
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
				namespace util {
					class Name;
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

class $export ClassReader$EnumAttributeProxy : public ::com::sun::tools::javac::code::Attribute {
	$class(ClassReader$EnumAttributeProxy, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute)
public:
	ClassReader$EnumAttributeProxy();
	using ::com::sun::tools::javac::code::Attribute::accept;
	void init$(::com::sun::tools::javac::code::Type* enumType, ::com::sun::tools::javac::util::Name* enumerator);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Type* enumType = nullptr;
	::com::sun::tools::javac::util::Name* enumerator = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$EnumAttributeProxy_h_