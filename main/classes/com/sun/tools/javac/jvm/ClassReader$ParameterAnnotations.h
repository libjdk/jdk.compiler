#ifndef _com_sun_tools_javac_jvm_ClassReader$ParameterAnnotations_h_
#define _com_sun_tools_javac_jvm_ClassReader$ParameterAnnotations_h_
//$ class com.sun.tools.javac.jvm.ClassReader$ParameterAnnotations
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export ClassReader$ParameterAnnotations : public ::java::lang::Object {
	$class(ClassReader$ParameterAnnotations, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassReader$ParameterAnnotations();
	void init$();
	virtual void add(::com::sun::tools::javac::util::List* newAnnotations);
	::com::sun::tools::javac::util::List* proxies = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$ParameterAnnotations_h_