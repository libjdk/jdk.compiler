#ifndef _com_sun_tools_javac_processing_JavacRoundEnvironment$AnnotationSetScanner_h_
#define _com_sun_tools_javac_processing_JavacRoundEnvironment$AnnotationSetScanner_h_
//$ class com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetScanner
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
				class TypeElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacRoundEnvironment$AnnotationSetScanner : public ::javax::lang::model::util::ElementScanner14 {
	$class(JavacRoundEnvironment$AnnotationSetScanner, $NO_CLASS_INIT, ::javax::lang::model::util::ElementScanner14)
public:
	JavacRoundEnvironment$AnnotationSetScanner();
	void init$(::com::sun::tools::javac::processing::JavacRoundEnvironment* this$0, ::java::util::Set* defaultSet);
	using ::javax::lang::model::util::ElementScanner14::scan;
	virtual ::java::util::Set* scan(::javax::lang::model::element::Element* e, ::javax::lang::model::element::TypeElement* annotation);
	virtual $Object* scan(::javax::lang::model::element::Element* e, Object$* annotation) override;
	virtual ::java::util::Set* visitModule(::javax::lang::model::element::ModuleElement* e, ::javax::lang::model::element::TypeElement* annotation);
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* e, Object$* annotation) override;
	virtual ::java::util::Set* visitPackage(::javax::lang::model::element::PackageElement* e, ::javax::lang::model::element::TypeElement* annotation);
	virtual $Object* visitPackage(::javax::lang::model::element::PackageElement* e, Object$* annotation) override;
	::com::sun::tools::javac::processing::JavacRoundEnvironment* this$0 = nullptr;
	::java::util::Set* annotatedElements = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacRoundEnvironment$AnnotationSetScanner_h_