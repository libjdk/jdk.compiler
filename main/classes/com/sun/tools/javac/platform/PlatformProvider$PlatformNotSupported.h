#ifndef _com_sun_tools_javac_platform_PlatformProvider$PlatformNotSupported_h_
#define _com_sun_tools_javac_platform_PlatformProvider$PlatformNotSupported_h_
//$ class com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class $export PlatformProvider$PlatformNotSupported : public ::java::lang::Exception {
	$class(PlatformProvider$PlatformNotSupported, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	PlatformProvider$PlatformNotSupported();
	void init$();
	static const int64_t serialVersionUID = (int64_t)1;
	PlatformProvider$PlatformNotSupported(const PlatformProvider$PlatformNotSupported& e);
	virtual void throw$() override;
	inline PlatformProvider$PlatformNotSupported* operator ->() {
		return (PlatformProvider$PlatformNotSupported*)throwing$;
	}
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_PlatformProvider$PlatformNotSupported_h_