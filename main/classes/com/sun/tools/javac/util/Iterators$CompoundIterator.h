#ifndef _com_sun_tools_javac_util_Iterators$CompoundIterator_h_
#define _com_sun_tools_javac_util_Iterators$CompoundIterator_h_
//$ class com.sun.tools.javac.util.Iterators$CompoundIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class Iterators$CompoundIterator : public ::java::util::Iterator {
	$class(Iterators$CompoundIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Iterators$CompoundIterator();
	void init$(::java::lang::Iterable* inputs, ::java::util::function::Function* convertor);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	void update();
	::java::util::Iterator* inputs = nullptr;
	::java::util::function::Function* convertor = nullptr;
	::java::util::Iterator* currentIterator = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Iterators$CompoundIterator_h_