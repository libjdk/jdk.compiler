#ifndef _com_sun_tools_javac_util_List$1_h_
#define _com_sun_tools_javac_util_List$1_h_
//$ class com.sun.tools.javac.util.List$1
//$ extends com.sun.tools.javac.util.List

#include <com/sun/tools/javac/util/List.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class List$1 : public ::com::sun::tools::javac::util::List {
	$class(List$1, $NO_CLASS_INIT, ::com::sun::tools::javac::util::List)
public:
	List$1();
	using ::com::sun::tools::javac::util::List::addAll;
	using ::com::sun::tools::javac::util::List::add;
	void init$(Object$* head, ::com::sun::tools::javac::util::List* tail);
	virtual bool isEmpty() override;
	using ::com::sun::tools::javac::util::List::remove;
	virtual ::com::sun::tools::javac::util::List* setTail(::com::sun::tools::javac::util::List* tail) override;
	using ::com::sun::tools::javac::util::List::toArray;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_List$1_h_