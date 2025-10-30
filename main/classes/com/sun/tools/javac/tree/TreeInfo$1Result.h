#ifndef _com_sun_tools_javac_tree_TreeInfo$1Result_h_
#define _com_sun_tools_javac_tree_TreeInfo$1Result_h_
//$ class com.sun.tools.javac.tree.TreeInfo$1Result
//$ extends java.lang.Error

#include <java/lang/Error.h>

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
				namespace tree {

class TreeInfo$1Result : public ::java::lang::Error {
	$class(TreeInfo$1Result, $NO_CLASS_INIT, ::java::lang::Error)
public:
	TreeInfo$1Result();
	void init$(::com::sun::tools::javac::util::List* path);
	static const int64_t serialVersionUID = (int64_t)0xAD89763BB0F151E7;
	::com::sun::tools::javac::util::List* path = nullptr;
	TreeInfo$1Result(const TreeInfo$1Result& e);
	virtual void throw$() override;
	inline TreeInfo$1Result* operator ->() {
		return (TreeInfo$1Result*)throwing$;
	}
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeInfo$1Result_h_