#ifndef _com_sun_source_util_TreePath$1Result_h_
#define _com_sun_source_util_TreePath$1Result_h_
//$ class com.sun.source.util.TreePath$1Result
//$ extends java.lang.Error

#include <java/lang/Error.h>

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

class TreePath$1Result : public ::java::lang::Error {
	$class(TreePath$1Result, $NO_CLASS_INIT, ::java::lang::Error)
public:
	TreePath$1Result();
	void init$(::com::sun::source::util::TreePath* path);
	static const int64_t serialVersionUID = (int64_t)0xAD89763BB0F151E7;
	::com::sun::source::util::TreePath* path = nullptr;
	TreePath$1Result(const TreePath$1Result& e);
	virtual void throw$() override;
	inline TreePath$1Result* operator ->() {
		return (TreePath$1Result*)throwing$;
	}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_TreePath$1Result_h_