#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$DiscoveredProcessors_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$DiscoveredProcessors_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

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
		class ArrayList;
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$DiscoveredProcessors : public ::java::lang::Iterable {
	$class(JavacProcessingEnvironment$DiscoveredProcessors, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	JavacProcessingEnvironment$DiscoveredProcessors();
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0, ::java::util::Iterator* processorIterator);
	virtual void close();
	virtual ::java::util::Iterator* iterator() override;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0 = nullptr;
	::java::util::Iterator* processorIterator = nullptr;
	::java::util::ArrayList* procStateList = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$DiscoveredProcessors_h_