#ifndef _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor_h_
#define _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor_h_
//$ class com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor
//$ extends javax.lang.model.util.SimpleElementVisitor14

#include <java/lang/Array.h>
#include <javax/lang/model/util/SimpleElementVisitor14.h>

namespace java {
	namespace io {
		class PrintWriter;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationMirror;
				class Element;
				class ExecutableElement;
				class ModuleElement;
				class ModuleElement$Directive;
				class PackageElement;
				class Parameterizable;
				class RecordComponentElement;
				class TypeElement;
				class TypeParameterElement;
				class VariableElement;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
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

class PrintingProcessor$PrintingElementVisitor : public ::javax::lang::model::util::SimpleElementVisitor14 {
	$class(PrintingProcessor$PrintingElementVisitor, 0, ::javax::lang::model::util::SimpleElementVisitor14)
public:
	PrintingProcessor$PrintingElementVisitor();
	void init$(::java::io::Writer* w, ::javax::lang::model::util::Elements* elementUtils);
	$String* annotationsToString(::javax::lang::model::element::Element* e);
	virtual ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* defaultAction(::javax::lang::model::element::Element* e, ::java::lang::Boolean* newLine);
	virtual $Object* defaultAction(::javax::lang::model::element::Element* e, Object$* newLine) override;
	virtual void flush();
	void indent();
	$String* lambda$printFormalTypeParameters$2(::javax::lang::model::element::TypeParameterElement* tpe);
	static $String* lambda$printPermittedSubclasses$3(::javax::lang::model::type::TypeMirror* subtype);
	$String* lambda$visitType$0(::javax::lang::model::element::RecordComponentElement* recordDes);
	bool lambda$visitType$1(::javax::lang::model::element::Element* elt);
	void printAnnotations(::javax::lang::model::element::Element* e);
	void printDirective(::javax::lang::model::element::ModuleElement$Directive* directive);
	void printDocComment(::javax::lang::model::element::Element* e);
	void printFormalTypeParameters(::javax::lang::model::element::Parameterizable* e, bool pad);
	void printInterfaces(::javax::lang::model::element::TypeElement* e);
	void printModifiers(::javax::lang::model::element::Element* e);
	void printParameters(::javax::lang::model::element::ExecutableElement* e);
	void printPermittedSubclasses(::javax::lang::model::element::TypeElement* e);
	void printThrows(::javax::lang::model::element::ExecutableElement* e);
	bool printedContainerAnnotation(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* annotationMirror);
	virtual ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* visitExecutable(::javax::lang::model::element::ExecutableElement* e, ::java::lang::Boolean* p);
	virtual $Object* visitExecutable(::javax::lang::model::element::ExecutableElement* e, Object$* p) override;
	virtual ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* visitModule(::javax::lang::model::element::ModuleElement* e, ::java::lang::Boolean* p);
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* e, Object$* p) override;
	virtual ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* visitPackage(::javax::lang::model::element::PackageElement* e, ::java::lang::Boolean* p);
	virtual $Object* visitPackage(::javax::lang::model::element::PackageElement* e, Object$* p) override;
	virtual ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, ::java::lang::Boolean* p);
	virtual $Object* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, Object$* p) override;
	virtual ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* visitType(::javax::lang::model::element::TypeElement* e, ::java::lang::Boolean* p);
	virtual $Object* visitType(::javax::lang::model::element::TypeElement* e, Object$* p) override;
	virtual ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* visitTypeParameter(::javax::lang::model::element::TypeParameterElement* e, ::java::lang::Boolean* p);
	virtual $Object* visitTypeParameter(::javax::lang::model::element::TypeParameterElement* e, Object$* p) override;
	virtual ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* visitVariable(::javax::lang::model::element::VariableElement* e, ::java::lang::Boolean* newLine);
	virtual $Object* visitVariable(::javax::lang::model::element::VariableElement* e, Object$* newLine) override;
	int32_t indentation = 0;
	::java::io::PrintWriter* writer = nullptr;
	::javax::lang::model::util::Elements* elementUtils = nullptr;
	static $StringArray* spaces;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor_h_