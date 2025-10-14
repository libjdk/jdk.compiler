#ifndef _com_sun_tools_javac_processing_JavacMessager_h_
#define _com_sun_tools_javac_processing_JavacMessager_h_
//$ class com.sun.tools.javac.processing.JavacMessager
//$ extends javax.annotation.processing.Messager

#include <javax/annotation/processing/Messager.h>

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
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Log;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationMirror;
				class AnnotationValue;
				class Element;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacMessager : public ::javax::annotation::processing::Messager {
	$class(JavacMessager, $NO_CLASS_INIT, ::javax::annotation::processing::Messager)
public:
	JavacMessager();
	void init$(::com::sun::tools::javac::util::Context* context, ::com::sun::tools::javac::processing::JavacProcessingEnvironment* processingEnv);
	virtual int32_t errorCount();
	virtual bool errorRaised();
	virtual void newRound();
	virtual void printError($String* msg);
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg) override;
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::javax::lang::model::element::Element* e) override;
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a) override;
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a, ::javax::lang::model::element::AnnotationValue* v) override;
	virtual void printNotice($String* msg);
	virtual void printWarning($String* msg);
	virtual $String* toString() override;
	virtual int32_t warningCount();
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment* processingEnv = nullptr;
	int32_t errorCount$ = 0;
	int32_t warningCount$ = 0;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacMessager_h_