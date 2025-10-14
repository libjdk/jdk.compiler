#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager
//$ extends javax.tools.ForwardingJavaFileManager

#include <javax/tools/ForwardingJavaFileManager.h>

#pragma push_macro("PATCH_LOCATION")
#undef PATCH_LOCATION

namespace javax {
	namespace tools {
		class JavaFileManager;
		class JavaFileManager$Location;
		class JavaFileObject;
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager : public ::javax::tools::ForwardingJavaFileManager {
	$class(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager, 0, ::javax::tools::ForwardingJavaFileManager)
public:
	JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager();
	using ::javax::tools::ForwardingJavaFileManager::getLocationForModule;
	void init$(::javax::tools::JavaFileManager* fileManager, ::javax::tools::JavaFileObject* file, $String* moduleName);
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* fo) override;
	virtual bool hasLocation(::javax::tools::JavaFileManager$Location* location) override;
	virtual $String* inferModuleName(::javax::tools::JavaFileManager$Location* location) override;
	::javax::tools::JavaFileObject* file = nullptr;
	$String* moduleName = nullptr;
	static ::javax::tools::JavaFileManager$Location* PATCH_LOCATION;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#pragma pop_macro("PATCH_LOCATION")

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager_h_