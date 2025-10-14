#ifndef _com_sun_tools_javac_tree_TreeInfo$PosKind_h_
#define _com_sun_tools_javac_tree_TreeInfo$PosKind_h_
//$ class com.sun.tools.javac.tree.TreeInfo$PosKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("END_POS")
#undef END_POS
#pragma push_macro("FIRST_STAT_POS")
#undef FIRST_STAT_POS
#pragma push_macro("START_POS")
#undef START_POS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class ToIntFunction;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export TreeInfo$PosKind : public ::java::lang::Enum {
	$class(TreeInfo$PosKind, 0, ::java::lang::Enum)
public:
	TreeInfo$PosKind();
	static $Array<::com::sun::tools::javac::tree::TreeInfo$PosKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::util::function::ToIntFunction* posFunc);
	virtual int32_t toPos(::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::tree::TreeInfo$PosKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::tree::TreeInfo$PosKind>* values();
	static ::com::sun::tools::javac::tree::TreeInfo$PosKind* START_POS;
	static ::com::sun::tools::javac::tree::TreeInfo$PosKind* FIRST_STAT_POS;
	static ::com::sun::tools::javac::tree::TreeInfo$PosKind* END_POS;
	static $Array<::com::sun::tools::javac::tree::TreeInfo$PosKind>* $VALUES;
	::java::util::function::ToIntFunction* posFunc = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("END_POS")
#pragma pop_macro("FIRST_STAT_POS")
#pragma pop_macro("START_POS")

#endif // _com_sun_tools_javac_tree_TreeInfo$PosKind_h_