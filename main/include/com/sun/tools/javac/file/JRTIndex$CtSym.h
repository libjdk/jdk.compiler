#ifndef _com_sun_tools_javac_file_JRTIndex$CtSym_h_
#define _com_sun_tools_javac_file_JRTIndex$CtSym_h_
//$ class com.sun.tools.javac.file.JRTIndex$CtSym
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import JRTIndex$CtSym : public ::java::lang::Object {
	$class(JRTIndex$CtSym, 0, ::java::lang::Object)
public:
	JRTIndex$CtSym();
	void init$(bool hidden, bool proprietary, $String* minProfile);
	virtual $String* toString() override;
	bool hidden = false;
	bool proprietary = false;
	$String* minProfile = nullptr;
	static ::com::sun::tools::javac::file::JRTIndex$CtSym* EMPTY;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EMPTY")

#endif // _com_sun_tools_javac_file_JRTIndex$CtSym_h_