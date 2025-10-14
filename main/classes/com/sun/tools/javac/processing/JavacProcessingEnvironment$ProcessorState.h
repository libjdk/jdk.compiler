#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$ProcessorState_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$ProcessorState_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$ProcessorState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
					class Source;
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
		class Set;
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class ProcessingEnvironment;
			class Processor;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$ProcessorState : public ::java::lang::Object {
	$class(JavacProcessingEnvironment$ProcessorState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavacProcessingEnvironment$ProcessorState();
	void init$(::javax::annotation::processing::Processor* p, ::com::sun::tools::javac::util::Log* log, ::com::sun::tools::javac::code::Source* source, ::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh, bool allowModules, ::javax::annotation::processing::ProcessingEnvironment* env, bool lint);
	virtual bool annotationSupported($String* annotationName);
	bool checkOptionName($String* optionName, ::com::sun::tools::javac::util::Log* log);
	void checkSourceVersionCompatibility(::com::sun::tools::javac::code::Source* source, ::com::sun::tools::javac::util::Log* log);
	virtual void removeSupportedOptions(::java::util::Set* unmatchedProcessorOptions);
	::javax::annotation::processing::Processor* processor = nullptr;
	bool contributed = false;
	::java::util::Set* supportedAnnotationStrings = nullptr;
	::java::util::Set* supportedAnnotationPatterns = nullptr;
	::java::util::Set* supportedOptionNames = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$ProcessorState_h_