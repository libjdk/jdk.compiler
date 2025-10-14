#ifndef _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$1_h_
#define _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$1_h_
//$ class com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1
//$ extends javax.lang.model.util.SimpleElementVisitor14

#include <javax/lang/model/util/SimpleElementVisitor14.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class PrintingProcessor$PrintingElementVisitor;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class NestingKind;
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

class PrintingProcessor$PrintingElementVisitor$1 : public ::javax::lang::model::util::SimpleElementVisitor14 {
	$class(PrintingProcessor$PrintingElementVisitor$1, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleElementVisitor14)
public:
	PrintingProcessor$PrintingElementVisitor$1();
	void init$(::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* this$0);
	virtual ::javax::lang::model::element::NestingKind* visitType(::javax::lang::model::element::TypeElement* e, ::java::lang::Void* p);
	virtual $Object* visitType(::javax::lang::model::element::TypeElement* e, Object$* p) override;
	::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* this$0 = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$1_h_