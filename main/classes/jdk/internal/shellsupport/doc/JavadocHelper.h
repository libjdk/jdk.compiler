#ifndef _jdk_internal_shellsupport_doc_JavadocHelper_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class JavacTask;
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaCompiler;
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class $export JavadocHelper : public ::java::lang::AutoCloseable {
	$class(JavadocHelper, 0, ::java::lang::AutoCloseable)
public:
	JavadocHelper();
	virtual void close() override {}
	void init$();
	static ::jdk::internal::shellsupport::doc::JavadocHelper* create(::com::sun::source::util::JavacTask* mainTask, ::java::util::Collection* sourceLocations);
	virtual $String* getResolvedDocComment(::javax::lang::model::element::Element* forElement) {return nullptr;}
	virtual ::javax::lang::model::element::Element* getSourceElement(::javax::lang::model::element::Element* forElement) {return nullptr;}
	static ::javax::tools::JavaCompiler* compiler;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper_h_