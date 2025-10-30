#ifndef _com_sun_tools_javac_jvm_ModuleNameReader$BadClassFile_h_
#define _com_sun_tools_javac_jvm_ModuleNameReader$BadClassFile_h_
//$ class com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import ModuleNameReader$BadClassFile : public ::java::lang::Exception {
	$class(ModuleNameReader$BadClassFile, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ModuleNameReader$BadClassFile();
	void init$($String* msg);
	static const int64_t serialVersionUID = 0;
	ModuleNameReader$BadClassFile(const ModuleNameReader$BadClassFile& e);
	virtual void throw$() override;
	inline ModuleNameReader$BadClassFile* operator ->() {
		return (ModuleNameReader$BadClassFile*)throwing$;
	}
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ModuleNameReader$BadClassFile_h_