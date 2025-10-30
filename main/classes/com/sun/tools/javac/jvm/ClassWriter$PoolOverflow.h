#ifndef _com_sun_tools_javac_jvm_ClassWriter$PoolOverflow_h_
#define _com_sun_tools_javac_jvm_ClassWriter$PoolOverflow_h_
//$ class com.sun.tools.javac.jvm.ClassWriter$PoolOverflow
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export ClassWriter$PoolOverflow : public ::java::lang::RuntimeException {
	$class(ClassWriter$PoolOverflow, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ClassWriter$PoolOverflow();
	void init$();
	static const int64_t serialVersionUID = 0;
	ClassWriter$PoolOverflow(const ClassWriter$PoolOverflow& e);
	virtual void throw$() override;
	inline ClassWriter$PoolOverflow* operator ->() {
		return (ClassWriter$PoolOverflow*)throwing$;
	}
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassWriter$PoolOverflow_h_