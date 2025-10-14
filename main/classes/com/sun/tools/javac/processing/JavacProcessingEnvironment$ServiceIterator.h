#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$ServiceIterator_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$ServiceIterator_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$ServiceIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

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
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
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

class JavacProcessingEnvironment$ServiceIterator : public ::java::util::Iterator {
	$class(JavacProcessingEnvironment$ServiceIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JavacProcessingEnvironment$ServiceIterator();
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0, ::java::lang::ClassLoader* classLoader, ::com::sun::tools::javac::util::Log* log);
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0, ::java::util::ServiceLoader* loader, ::com::sun::tools::javac::util::Log* log);
	virtual void close();
	virtual bool hasNext() override;
	virtual bool internalHasNext();
	virtual ::javax::annotation::processing::Processor* internalNext();
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0 = nullptr;
	::java::util::Iterator* iterator = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::java::util::ServiceLoader* loader = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$ServiceIterator_h_