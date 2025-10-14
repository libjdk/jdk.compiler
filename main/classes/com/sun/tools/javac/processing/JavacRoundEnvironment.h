#ifndef _com_sun_tools_javac_processing_JavacRoundEnvironment_h_
#define _com_sun_tools_javac_processing_JavacRoundEnvironment_h_
//$ class com.sun.tools.javac.processing.JavacRoundEnvironment
//$ extends javax.annotation.processing.RoundEnvironment

#include <java/lang/Array.h>
#include <javax/annotation/processing/RoundEnvironment.h>

#pragma push_macro("NOT_AN_ANNOTATION_TYPE")
#undef NOT_AN_ANNOTATION_TYPE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class JavacProcessingEnvironment;
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
	namespace annotation {
		namespace processing {
			class ProcessingEnvironment;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationMirror;
				class Element;
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

class JavacRoundEnvironment : public ::javax::annotation::processing::RoundEnvironment {
	$class(JavacRoundEnvironment, 0, ::javax::annotation::processing::RoundEnvironment)
public:
	JavacRoundEnvironment();
	void init$(bool processingOver, bool errorRaised, ::java::util::Set* rootElements, ::com::sun::tools::javac::processing::JavacProcessingEnvironment* processingEnv);
	::javax::lang::model::element::TypeElement* annotationToElement($Class* annotation);
	virtual bool errorRaised() override;
	virtual ::java::util::Set* getElementsAnnotatedWith(::javax::lang::model::element::TypeElement* a) override;
	virtual ::java::util::Set* getElementsAnnotatedWith($Class* a) override;
	virtual ::java::util::Set* getElementsAnnotatedWithAny($Array<::javax::lang::model::element::TypeElement>* annotations) override;
	virtual ::java::util::Set* getElementsAnnotatedWithAny(::java::util::Set* annotations) override;
	virtual ::java::util::Set* getRootElements() override;
	::javax::lang::model::element::Element* mirrorAsElement(::javax::lang::model::element::AnnotationMirror* annotationMirror);
	virtual bool processingOver() override;
	void throwIfNotAnnotation($Class* a);
	void throwIfNotAnnotation(::javax::lang::model::element::TypeElement* a);
	virtual $String* toString() override;
	bool processingOver$ = false;
	bool errorRaised$ = false;
	::javax::annotation::processing::ProcessingEnvironment* processingEnv = nullptr;
	::javax::lang::model::util::Elements* eltUtils = nullptr;
	bool allowModules = false;
	::java::util::Set* rootElements = nullptr;
	static $String* NOT_AN_ANNOTATION_TYPE;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NOT_AN_ANNOTATION_TYPE")

#endif // _com_sun_tools_javac_processing_JavacRoundEnvironment_h_