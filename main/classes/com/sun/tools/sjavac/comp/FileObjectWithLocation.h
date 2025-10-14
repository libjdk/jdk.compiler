#ifndef _com_sun_tools_sjavac_comp_FileObjectWithLocation_h_
#define _com_sun_tools_sjavac_comp_FileObjectWithLocation_h_
//$ class com.sun.tools.sjavac.comp.FileObjectWithLocation
//$ extends javax.tools.ForwardingFileObject

#include <javax/tools/ForwardingFileObject.h>

namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager$Location;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class FileObjectWithLocation : public ::javax::tools::ForwardingFileObject {
	$class(FileObjectWithLocation, $NO_CLASS_INIT, ::javax::tools::ForwardingFileObject)
public:
	FileObjectWithLocation();
	void init$(::javax::tools::FileObject* delegate, ::javax::tools::JavaFileManager$Location* loc);
	virtual ::javax::tools::FileObject* getDelegate();
	virtual ::javax::tools::JavaFileManager$Location* getLocation();
	virtual $String* toString() override;
	::javax::tools::JavaFileManager$Location* loc = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_FileObjectWithLocation_h_