#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class JavacProcessingEnvironment$DiscoveredProcessors;
				}
			}
		}
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class RoundEnvironment;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator : public ::java::util::Iterator {
	$class(JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator();
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors* this$1, ::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors* psi);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	virtual void runContributingProcs(::javax::annotation::processing::RoundEnvironment* re);
	::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors* this$1 = nullptr;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors* psi = nullptr;
	::java::util::Iterator* innerIter = nullptr;
	bool onProcIterator = false;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_h_