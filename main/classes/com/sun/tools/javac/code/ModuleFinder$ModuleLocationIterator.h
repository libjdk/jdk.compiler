#ifndef _com_sun_tools_javac_code_ModuleFinder$ModuleLocationIterator_h_
#define _com_sun_tools_javac_code_ModuleFinder$ModuleLocationIterator_h_
//$ class com.sun.tools.javac.code.ModuleFinder$ModuleLocationIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class ModuleFinder;
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
	namespace tools {
		class StandardLocation;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export ModuleFinder$ModuleLocationIterator : public ::java::util::Iterator {
	$class(ModuleFinder$ModuleLocationIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ModuleFinder$ModuleLocationIterator();
	void init$(::com::sun::tools::javac::code::ModuleFinder* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::com::sun::tools::javac::code::ModuleFinder* this$0 = nullptr;
	::javax::tools::StandardLocation* outer = nullptr;
	::java::util::Set* next$ = nullptr;
	::java::util::Iterator* outerIter = nullptr;
	::java::util::Iterator* innerIter = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_ModuleFinder$ModuleLocationIterator_h_