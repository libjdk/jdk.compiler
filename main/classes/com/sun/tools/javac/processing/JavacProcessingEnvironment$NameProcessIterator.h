#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$NameProcessIterator_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$NameProcessIterator_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$NameProcessIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

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
	namespace lang {
		class ClassLoader;
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

class JavacProcessingEnvironment$NameProcessIterator : public ::java::util::Iterator {
	$class(JavacProcessingEnvironment$NameProcessIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JavacProcessingEnvironment$NameProcessIterator();
	void init$($String* names, ::java::lang::ClassLoader* processorCL, ::com::sun::tools::javac::util::Log* log);
	void ensureReadable($Class* targetClass);
	::javax::annotation::processing::Processor* getNextProcessor($String* processorName);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::javax::annotation::processing::Processor* nextProc = nullptr;
	::java::util::Iterator* names = nullptr;
	::java::lang::ClassLoader* processorCL = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$NameProcessIterator_h_