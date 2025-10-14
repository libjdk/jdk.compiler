#ifndef _com_sun_tools_javac_processing_JavacRoundEnvironment$AnnotationSetMultiScanner_h_
#define _com_sun_tools_javac_processing_JavacRoundEnvironment$AnnotationSetMultiScanner_h_
//$ class com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner
//$ extends javax.lang.model.util.ElementScanner14

#include <javax/lang/model/util/ElementScanner14.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class JavacRoundEnvironment;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class ModuleElement;
				class PackageElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacRoundEnvironment$AnnotationSetMultiScanner : public ::javax::lang::model::util::ElementScanner14 {
	$class(JavacRoundEnvironment$AnnotationSetMultiScanner, $NO_CLASS_INIT, ::javax::lang::model::util::ElementScanner14)
public:
	JavacRoundEnvironment$AnnotationSetMultiScanner();
	void init$(::com::sun::tools::javac::processing::JavacRoundEnvironment* this$0, ::java::util::Set* defaultSet);
	using ::javax::lang::model::util::ElementScanner14::scan;
	virtual ::java::util::Set* scan(::javax::lang::model::element::Element* e, ::java::util::Set* annotations);
	virtual $Object* scan(::javax::lang::model::element::Element* e, Object$* annotations) override;
	virtual ::java::util::Set* visitModule(::javax::lang::model::element::ModuleElement* e, ::java::util::Set* annotations);
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* e, Object$* annotations) override;
	virtual ::java::util::Set* visitPackage(::javax::lang::model::element::PackageElement* e, ::java::util::Set* annotations);
	virtual $Object* visitPackage(::javax::lang::model::element::PackageElement* e, Object$* annotations) override;
	::com::sun::tools::javac::processing::JavacRoundEnvironment* this$0 = nullptr;
	::java::util::Set* annotatedElements = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacRoundEnvironment$AnnotationSetMultiScanner_h_