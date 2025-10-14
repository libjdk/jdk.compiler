#ifndef _com_sun_tools_javac_util_ListBuffer$1_h_
#define _com_sun_tools_javac_util_ListBuffer$1_h_
//$ class com.sun.tools.javac.util.ListBuffer$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
					class ListBuffer;
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

class ListBuffer$1 : public ::java::util::Iterator {
	$class(ListBuffer$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ListBuffer$1();
	void init$(::com::sun::tools::javac::util::ListBuffer* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::tools::javac::util::ListBuffer* this$0 = nullptr;
	::com::sun::tools::javac::util::List* elems = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_ListBuffer$1_h_