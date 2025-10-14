#ifndef _com_sun_tools_javac_util_List$3_h_
#define _com_sun_tools_javac_util_List$3_h_
//$ class com.sun.tools.javac.util.List$3
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
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

class List$3 : public ::java::util::Iterator {
	$class(List$3, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	List$3();
	void init$(::com::sun::tools::javac::util::List* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::tools::javac::util::List* this$0 = nullptr;
	::com::sun::tools::javac::util::List* elems = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_List$3_h_