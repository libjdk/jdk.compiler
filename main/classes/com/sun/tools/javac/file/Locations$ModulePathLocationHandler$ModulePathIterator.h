#ifndef _com_sun_tools_javac_file_Locations$ModulePathLocationHandler$ModulePathIterator_h_
#define _com_sun_tools_javac_file_Locations$ModulePathLocationHandler$ModulePathIterator_h_
//$ class com.sun.tools.javac.file.Locations$ModulePathLocationHandler$ModulePathIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class Locations$ModulePathLocationHandler;
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
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ModulePathLocationHandler$ModulePathIterator : public ::java::util::Iterator {
	$class(Locations$ModulePathLocationHandler$ModulePathIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Locations$ModulePathLocationHandler$ModulePathIterator();
	void init$(::com::sun::tools::javac::file::Locations$ModulePathLocationHandler* this$1);
	virtual bool hasNext() override;
	::com::sun::tools::javac::util::Pair* inferModuleName(::java::nio::file::Path* p);
	virtual $Object* next() override;
	$String* readModuleName(::java::nio::file::Path* path);
	::java::util::Set* scanDirectory(::java::nio::file::Path* path);
	::java::util::Set* scanFile(::java::nio::file::Path* path);
	::com::sun::tools::javac::file::Locations$ModulePathLocationHandler* this$1 = nullptr;
	::java::util::Iterator* pathIter = nullptr;
	int32_t pathIndex = 0;
	::java::util::Set* next$ = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$ModulePathLocationHandler$ModulePathIterator_h_