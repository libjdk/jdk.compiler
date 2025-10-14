#ifndef _com_sun_tools_javac_jvm_ClassReader$CompoundAnnotationProxy_h_
#define _com_sun_tools_javac_jvm_ClassReader$CompoundAnnotationProxy_h_
//$ class com.sun.tools.javac.jvm.ClassReader$CompoundAnnotationProxy
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

class $export ClassReader$CompoundAnnotationProxy : public ::com::sun::tools::javac::code::Attribute {
	$class(ClassReader$CompoundAnnotationProxy, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute)
public:
	ClassReader$CompoundAnnotationProxy();
	using ::com::sun::tools::javac::code::Attribute::accept;
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::List* values);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* values = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$CompoundAnnotationProxy_h_