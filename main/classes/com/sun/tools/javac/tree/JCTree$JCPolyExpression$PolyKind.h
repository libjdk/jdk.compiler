#ifndef _com_sun_tools_javac_tree_JCTree$JCPolyExpression$PolyKind_h_
#define _com_sun_tools_javac_tree_JCTree$JCPolyExpression$PolyKind_h_
//$ class com.sun.tools.javac.tree.JCTree$JCPolyExpression$PolyKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("POLY")
#undef POLY
#pragma push_macro("STANDALONE")
#undef STANDALONE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCPolyExpression$PolyKind : public ::java::lang::Enum {
	$class(JCTree$JCPolyExpression$PolyKind, 0, ::java::lang::Enum)
public:
	JCTree$JCPolyExpression$PolyKind();
	static $Array<::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind>* values();
	static ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind* STANDALONE;
	static ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind* POLY;
	static $Array<::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind>* $VALUES;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("POLY")
#pragma pop_macro("STANDALONE")

#endif // _com_sun_tools_javac_tree_JCTree$JCPolyExpression$PolyKind_h_