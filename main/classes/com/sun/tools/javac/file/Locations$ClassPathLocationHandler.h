#ifndef _com_sun_tools_javac_file_Locations$ClassPathLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$ClassPathLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$ClassPathLocationHandler
//$ extends com.sun.tools.javac.file.Locations$SimpleLocationHandler

#include <com/sun/tools/javac/file/Locations$SimpleLocationHandler.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class Locations;
					class Locations$SearchPath;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ClassPathLocationHandler : public ::com::sun::tools::javac::file::Locations$SimpleLocationHandler {
	$class(Locations$ClassPathLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$SimpleLocationHandler)
public:
	Locations$ClassPathLocationHandler();
	void init$(::com::sun::tools::javac::file::Locations* this$0);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* computePath($String* value) override;
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* createPath() override;
	virtual ::java::util::Collection* getPaths() override;
	void lazy();
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$ClassPathLocationHandler_h_