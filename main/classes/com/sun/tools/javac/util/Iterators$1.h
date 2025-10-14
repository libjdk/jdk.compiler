#ifndef _com_sun_tools_javac_util_Iterators$1_h_
#define _com_sun_tools_javac_util_Iterators$1_h_
//$ class com.sun.tools.javac.util.Iterators$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class Iterators$1 : public ::java::util::Iterator {
	$class(Iterators$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Iterators$1();
	void init$();
	virtual bool hasNext() override;
	virtual $Object* next() override;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Iterators$1_h_