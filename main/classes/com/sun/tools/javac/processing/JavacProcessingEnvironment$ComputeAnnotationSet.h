#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$ComputeAnnotationSet_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$ComputeAnnotationSet_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$ComputeAnnotationSet
//$ extends javax.lang.model.util.ElementScanner14

#include <javax/lang/model/util/ElementScanner14.h>

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
				class ExecutableElement;
				class PackageElement;
				class TypeElement;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace util {
				class Elements;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$ComputeAnnotationSet : public ::javax::lang::model::util::ElementScanner14 {
	$class(JavacProcessingEnvironment$ComputeAnnotationSet, $NO_CLASS_INIT, ::javax::lang::model::util::ElementScanner14)
public:
	JavacProcessingEnvironment$ComputeAnnotationSet();
	void init$(::javax::lang::model::util::Elements* elements);
	virtual void addAnnotations(::javax::lang::model::element::Element* e, ::java::util::Set* p);
	using ::javax::lang::model::util::ElementScanner14::scan;
	virtual ::java::util::Set* scan(::javax::lang::model::element::Element* e, ::java::util::Set* p);
	virtual $Object* scan(::javax::lang::model::element::Element* e, Object$* p) override;
	virtual ::java::util::Set* visitExecutable(::javax::lang::model::element::ExecutableElement* e, ::java::util::Set* p);
	virtual $Object* visitExecutable(::javax::lang::model::element::ExecutableElement* e, Object$* p) override;
	virtual ::java::util::Set* visitPackage(::javax::lang::model::element::PackageElement* e, ::java::util::Set* p);
	virtual $Object* visitPackage(::javax::lang::model::element::PackageElement* e, Object$* p) override;
	virtual ::java::util::Set* visitType(::javax::lang::model::element::TypeElement* e, ::java::util::Set* p);
	virtual $Object* visitType(::javax::lang::model::element::TypeElement* e, Object$* p) override;
	::javax::lang::model::util::Elements* elements = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$ComputeAnnotationSet_h_