#ifndef _com_sun_tools_javac_processing_PrintingProcessor_h_
#define _com_sun_tools_javac_processing_PrintingProcessor_h_
//$ class com.sun.tools.javac.processing.PrintingProcessor
//$ extends javax.annotation.processing.AbstractProcessor

#include <javax/annotation/processing/AbstractProcessor.h>

namespace java {
	namespace io {
		class PrintWriter;
		class Writer;
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
			class RoundEnvironment;
		}
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class PrintingProcessor : public ::javax::annotation::processing::AbstractProcessor {
	$class(PrintingProcessor, $NO_CLASS_INIT, ::javax::annotation::processing::AbstractProcessor)
public:
	PrintingProcessor();
	void init$();
	virtual void print(::javax::lang::model::element::Element* element);
	virtual bool process(::java::util::Set* tes, ::javax::annotation::processing::RoundEnvironment* renv) override;
	virtual void setWriter(::java::io::Writer* w);
	::java::io::PrintWriter* writer = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_PrintingProcessor_h_