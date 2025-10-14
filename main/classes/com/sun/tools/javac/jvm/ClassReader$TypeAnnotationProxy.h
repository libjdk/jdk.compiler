#ifndef _com_sun_tools_javac_jvm_ClassReader$TypeAnnotationProxy_h_
#define _com_sun_tools_javac_jvm_ClassReader$TypeAnnotationProxy_h_
//$ class com.sun.tools.javac.jvm.ClassReader$TypeAnnotationProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TypeAnnotationPosition;
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
					class ClassReader$CompoundAnnotationProxy;
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

class $export ClassReader$TypeAnnotationProxy : public ::java::lang::Object {
	$class(ClassReader$TypeAnnotationProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassReader$TypeAnnotationProxy();
	void init$(::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* compound, ::com::sun::tools::javac::code::TypeAnnotationPosition* position);
	::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* compound = nullptr;
	::com::sun::tools::javac::code::TypeAnnotationPosition* position = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$TypeAnnotationProxy_h_