#ifndef _com_sun_tools_javac_code_ClassFinder$1_h_
#define _com_sun_tools_javac_code_ClassFinder$1_h_
//$ class com.sun.tools.javac.code.ClassFinder$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class ClassFinder;
					class Symbol$PackageSymbol;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class ClassFinder$1 : public ::java::util::Iterator {
	$class(ClassFinder$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ClassFinder$1();
	void init$(::com::sun::tools::javac::code::ClassFinder* this$0, ::java::lang::Iterable* val$listed, ::com::sun::tools::javac::code::Symbol$PackageSymbol* val$p, ::java::util::Set* val$kinds);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::com::sun::tools::javac::code::ClassFinder* this$0 = nullptr;
	::java::util::Set* val$kinds = nullptr;
	::com::sun::tools::javac::code::Symbol$PackageSymbol* val$p = nullptr;
	::java::lang::Iterable* val$listed = nullptr;
	::java::util::Iterator* original = nullptr;
	::javax::tools::JavaFileObject* next$ = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_ClassFinder$1_h_