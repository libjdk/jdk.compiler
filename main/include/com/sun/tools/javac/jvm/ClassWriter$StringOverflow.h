#ifndef _com_sun_tools_javac_jvm_ClassWriter$StringOverflow_h_
#define _com_sun_tools_javac_jvm_ClassWriter$StringOverflow_h_
//$ class com.sun.tools.javac.jvm.ClassWriter$StringOverflow
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import ClassWriter$StringOverflow : public ::java::lang::RuntimeException {
	$class(ClassWriter$StringOverflow, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ClassWriter$StringOverflow();
	void init$($String* s);
	static const int64_t serialVersionUID = 0;
	$String* value = nullptr;
	ClassWriter$StringOverflow(const ClassWriter$StringOverflow& e);
	virtual void throw$() override;
	inline ClassWriter$StringOverflow* operator ->() {
		return (ClassWriter$StringOverflow*)throwing$;
	}
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassWriter$StringOverflow_h_