#ifndef _com_sun_tools_javac_tree_JCTree$JCOperatorExpression$OperandPos_h_
#define _com_sun_tools_javac_tree_JCTree$JCOperatorExpression$OperandPos_h_
//$ class com.sun.tools.javac.tree.JCTree$JCOperatorExpression$OperandPos
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("RIGHT")
#undef RIGHT

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCOperatorExpression$OperandPos : public ::java::lang::Enum {
	$class(JCTree$JCOperatorExpression$OperandPos, 0, ::java::lang::Enum)
public:
	JCTree$JCOperatorExpression$OperandPos();
	static $Array<::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos* valueOf($String* name);
	static $Array<::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos>* values();
	static ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos* LEFT;
	static ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos* RIGHT;
	static $Array<::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos>* $VALUES;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("LEFT")
#pragma pop_macro("RIGHT")

#endif // _com_sun_tools_javac_tree_JCTree$JCOperatorExpression$OperandPos_h_