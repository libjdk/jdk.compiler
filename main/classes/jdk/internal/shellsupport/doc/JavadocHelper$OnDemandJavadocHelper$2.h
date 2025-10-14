#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$2_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$2_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$2
//$ extends javax.tools.SimpleJavaFileObject

#include <javax/tools/SimpleJavaFileObject.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject$Kind;
	}
}
namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {
				class JavadocHelper$OnDemandJavadocHelper;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$2 : public ::javax::tools::SimpleJavaFileObject {
	$class(JavadocHelper$OnDemandJavadocHelper$2, $NO_CLASS_INIT, ::javax::tools::SimpleJavaFileObject)
public:
	JavadocHelper$OnDemandJavadocHelper$2();
	void init$(::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper* this$0, ::java::net::URI* arg0, ::javax::tools::JavaFileObject$Kind* arg1, $String* val$javadoc);
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper* this$0 = nullptr;
	$String* val$javadoc = nullptr;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$2_h_