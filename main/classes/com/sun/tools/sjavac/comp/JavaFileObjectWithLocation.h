#ifndef _com_sun_tools_sjavac_comp_JavaFileObjectWithLocation_h_
#define _com_sun_tools_sjavac_comp_JavaFileObjectWithLocation_h_
//$ class com.sun.tools.sjavac.comp.JavaFileObjectWithLocation
//$ extends javax.tools.ForwardingJavaFileObject

#include <javax/tools/ForwardingJavaFileObject.h>

namespace javax {
	namespace tools {
		class JavaFileManager$Location;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class JavaFileObjectWithLocation : public ::javax::tools::ForwardingJavaFileObject {
	$class(JavaFileObjectWithLocation, $NO_CLASS_INIT, ::javax::tools::ForwardingJavaFileObject)
public:
	JavaFileObjectWithLocation();
	void init$(::javax::tools::JavaFileObject* delegate, ::javax::tools::JavaFileManager$Location* loc);
	virtual bool equals(Object$* obj) override;
	virtual ::javax::tools::JavaFileObject* getDelegate();
	virtual ::javax::tools::JavaFileManager$Location* getLocation();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::javax::tools::JavaFileManager$Location* loc = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_JavaFileObjectWithLocation_h_