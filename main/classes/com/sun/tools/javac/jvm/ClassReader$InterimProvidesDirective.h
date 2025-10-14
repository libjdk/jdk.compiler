#ifndef _com_sun_tools_javac_jvm_ClassReader$InterimProvidesDirective_h_
#define _com_sun_tools_javac_jvm_ClassReader$InterimProvidesDirective_h_
//$ class com.sun.tools.javac.jvm.ClassReader$InterimProvidesDirective
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
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

class ClassReader$InterimProvidesDirective : public ::java::lang::Object {
	$class(ClassReader$InterimProvidesDirective, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassReader$InterimProvidesDirective();
	void init$(::com::sun::tools::javac::util::Name* service, ::com::sun::tools::javac::util::List* impls);
	::com::sun::tools::javac::util::Name* service = nullptr;
	::com::sun::tools::javac::util::List* impls = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$InterimProvidesDirective_h_