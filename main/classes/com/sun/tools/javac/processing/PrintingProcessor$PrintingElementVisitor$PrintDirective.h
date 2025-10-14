#ifndef _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$PrintDirective_h_
#define _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$PrintDirective_h_
//$ class com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective
//$ extends javax.lang.model.element.ModuleElement$DirectiveVisitor

#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement$ExportsDirective;
				class ModuleElement$OpensDirective;
				class ModuleElement$ProvidesDirective;
				class ModuleElement$RequiresDirective;
				class ModuleElement$UsesDirective;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class PrintingProcessor$PrintingElementVisitor$PrintDirective : public ::javax::lang::model::element::ModuleElement$DirectiveVisitor {
	$class(PrintingProcessor$PrintingElementVisitor$PrintDirective, $NO_CLASS_INIT, ::javax::lang::model::element::ModuleElement$DirectiveVisitor)
public:
	PrintingProcessor$PrintingElementVisitor$PrintDirective();
	void init$(::java::io::PrintWriter* writer);
	void printModuleList(::java::util::List* modules);
	void printNameableList(::java::util::List* nameables);
	virtual ::java::lang::Void* visitExports(::javax::lang::model::element::ModuleElement$ExportsDirective* d, ::java::lang::Void* p);
	virtual $Object* visitExports(::javax::lang::model::element::ModuleElement$ExportsDirective* d, Object$* p) override;
	virtual ::java::lang::Void* visitOpens(::javax::lang::model::element::ModuleElement$OpensDirective* d, ::java::lang::Void* p);
	virtual $Object* visitOpens(::javax::lang::model::element::ModuleElement$OpensDirective* d, Object$* p) override;
	virtual ::java::lang::Void* visitProvides(::javax::lang::model::element::ModuleElement$ProvidesDirective* d, ::java::lang::Void* p);
	virtual $Object* visitProvides(::javax::lang::model::element::ModuleElement$ProvidesDirective* d, Object$* p) override;
	virtual ::java::lang::Void* visitRequires(::javax::lang::model::element::ModuleElement$RequiresDirective* d, ::java::lang::Void* p);
	virtual $Object* visitRequires(::javax::lang::model::element::ModuleElement$RequiresDirective* d, Object$* p) override;
	virtual ::java::lang::Void* visitUses(::javax::lang::model::element::ModuleElement$UsesDirective* d, ::java::lang::Void* p);
	virtual $Object* visitUses(::javax::lang::model::element::ModuleElement$UsesDirective* d, Object$* p) override;
	::java::io::PrintWriter* writer = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$PrintDirective_h_