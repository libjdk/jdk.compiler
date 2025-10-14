#ifndef _com_sun_tools_javac_util_Iterators$2_h_
#define _com_sun_tools_javac_util_Iterators$2_h_
//$ class com.sun.tools.javac.util.Iterators$2
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class Iterators$2 : public ::java::util::Iterator {
	$class(Iterators$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Iterators$2();
	void init$(::java::util::Iterator* val$input, ::java::util::function::Predicate* val$test);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	$Object* update();
	::java::util::function::Predicate* val$test = nullptr;
	::java::util::Iterator* val$input = nullptr;
	$Object* current = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Iterators$2_h_