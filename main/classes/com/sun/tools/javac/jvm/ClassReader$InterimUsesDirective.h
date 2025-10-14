#ifndef _com_sun_tools_javac_jvm_ClassReader$InterimUsesDirective_h_
#define _com_sun_tools_javac_jvm_ClassReader$InterimUsesDirective_h_
//$ class com.sun.tools.javac.jvm.ClassReader$InterimUsesDirective
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class ClassReader$InterimUsesDirective : public ::java::lang::Object {
	$class(ClassReader$InterimUsesDirective, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassReader$InterimUsesDirective();
	void init$(::com::sun::tools::javac::util::Name* service);
	::com::sun::tools::javac::util::Name* service = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$InterimUsesDirective_h_