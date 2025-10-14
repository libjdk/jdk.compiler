#ifndef _com_sun_tools_javac_util_Iterators_h_
#define _com_sun_tools_javac_util_Iterators_h_
//$ class com.sun.tools.javac.util.Iterators
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Iterators : public ::java::lang::Object {
	$class(Iterators, 0, ::java::lang::Object)
public:
	Iterators();
	void init$();
	static ::java::util::Iterator* createCompoundIterator(::java::lang::Iterable* inputs, ::java::util::function::Function* convertor);
	static ::java::util::Iterator* createFilterIterator(::java::util::Iterator* input, ::java::util::function::Predicate* test);
	static ::java::util::Iterator* EMPTY;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EMPTY")

#endif // _com_sun_tools_javac_util_Iterators_h_