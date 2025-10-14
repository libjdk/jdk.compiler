#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$NameServiceIterator_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$NameServiceIterator_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$NameServiceIterator
//$ extends com.sun.tools.javac.processing.JavacProcessingEnvironment$ServiceIterator

#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ServiceIterator.h>

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
					class Log;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
		class ServiceLoader;
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class Processor;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$NameServiceIterator : public ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ServiceIterator {
	$class(JavacProcessingEnvironment$NameServiceIterator, $NO_CLASS_INIT, ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ServiceIterator)
public:
	JavacProcessingEnvironment$NameServiceIterator();
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0, ::java::util::ServiceLoader* loader, ::com::sun::tools::javac::util::Log* log, $String* theNames);
	virtual bool internalHasNext() override;
	virtual ::javax::annotation::processing::Processor* internalNext() override;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0 = nullptr;
	::java::util::Map* namedProcessorsMap = nullptr;
	::java::util::Iterator* processorNames = nullptr;
	::javax::annotation::processing::Processor* nextProc = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$NameServiceIterator_h_