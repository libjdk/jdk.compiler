#ifndef _com_sun_tools_javac_jvm_Gen$CodeSizeOverflow_h_
#define _com_sun_tools_javac_jvm_Gen$CodeSizeOverflow_h_
//$ class com.sun.tools.javac.jvm.Gen$CodeSizeOverflow
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export Gen$CodeSizeOverflow : public ::java::lang::RuntimeException {
	$class(Gen$CodeSizeOverflow, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Gen$CodeSizeOverflow();
	void init$();
	static const int64_t serialVersionUID = 0;
	Gen$CodeSizeOverflow(const Gen$CodeSizeOverflow& e);
	Gen$CodeSizeOverflow wrapper$();
	virtual void throwWrapper$() override;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Gen$CodeSizeOverflow_h_