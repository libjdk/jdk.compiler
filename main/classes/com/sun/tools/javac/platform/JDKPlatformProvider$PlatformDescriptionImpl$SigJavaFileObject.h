#ifndef _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_h_
#define _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_h_
//$ class com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject
//$ extends javax.tools.ForwardingJavaFileObject

#include <javax/tools/ForwardingJavaFileObject.h>

namespace javax {
	namespace tools {
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject : public ::javax::tools::ForwardingJavaFileObject {
	$class(JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject, $NO_CLASS_INIT, ::javax::tools::ForwardingJavaFileObject)
public:
	JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject();
	void init$(::javax::tools::JavaFileObject* fileObject);
	virtual ::javax::tools::JavaFileObject* getDelegate();
	virtual ::javax::tools::JavaFileObject$Kind* getKind() override;
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject_h_