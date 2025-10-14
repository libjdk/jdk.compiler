#ifndef _com_sun_source_util_TreePath$1_h_
#define _com_sun_source_util_TreePath$1_h_
//$ class com.sun.source.util.TreePath$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class TreePath;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class TreePath$1 : public ::java::util::Iterator {
	$class(TreePath$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	TreePath$1();
	void init$(::com::sun::source::util::TreePath* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::source::util::TreePath* this$0 = nullptr;
	::com::sun::source::util::TreePath* next$ = nullptr;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_TreePath$1_h_