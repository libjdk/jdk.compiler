#ifndef _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$2_h_
#define _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$2_h_
//$ class com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$2
//$ extends javax.lang.model.util.SimpleAnnotationValueVisitor14

#include <javax/lang/model/util/SimpleAnnotationValueVisitor14.h>

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
		class Boolean;
		class Void;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class PrintingProcessor$PrintingElementVisitor$2 : public ::javax::lang::model::util::SimpleAnnotationValueVisitor14 {
	$class(PrintingProcessor$PrintingElementVisitor$2, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleAnnotationValueVisitor14)
public:
	PrintingProcessor$PrintingElementVisitor$2();
	void init$(::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* this$0, ::java::lang::Boolean* arg0);
	virtual ::java::lang::Boolean* visitArray(::java::util::List* vals, ::java::lang::Void* p);
	virtual $Object* visitArray(::java::util::List* vals, Object$* p) override;
	::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor* this$0 = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_PrintingProcessor$PrintingElementVisitor$2_h_