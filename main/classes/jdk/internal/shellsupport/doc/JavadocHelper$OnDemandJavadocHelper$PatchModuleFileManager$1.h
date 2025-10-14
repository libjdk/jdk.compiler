#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1
//$ extends javax.tools.JavaFileManager$Location

#include <javax/tools/JavaFileManager$Location.h>

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1 : public ::javax::tools::JavaFileManager$Location {
	$class(JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1, $NO_CLASS_INIT, ::javax::tools::JavaFileManager$Location)
public:
	JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1();
	void init$();
	virtual $String* getName() override;
	virtual bool isModuleOrientedLocation() override;
	virtual bool isOutputLocation() override;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1_h_