#ifndef _com_sun_tools_javac_util_List$2_h_
#define _com_sun_tools_javac_util_List$2_h_
//$ class com.sun.tools.javac.util.List$2
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class List$2 : public ::java::util::Iterator {
	$class(List$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	List$2();
	void init$();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_List$2_h_