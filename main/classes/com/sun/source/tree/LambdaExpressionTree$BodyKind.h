#ifndef _com_sun_source_tree_LambdaExpressionTree$BodyKind_h_
#define _com_sun_source_tree_LambdaExpressionTree$BodyKind_h_
//$ class com.sun.source.tree.LambdaExpressionTree$BodyKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXPRESSION")
#undef EXPRESSION
#pragma push_macro("STATEMENT")
#undef STATEMENT

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export LambdaExpressionTree$BodyKind : public ::java::lang::Enum {
	$class(LambdaExpressionTree$BodyKind, 0, ::java::lang::Enum)
public:
	LambdaExpressionTree$BodyKind();
	static $Array<::com::sun::source::tree::LambdaExpressionTree$BodyKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::source::tree::LambdaExpressionTree$BodyKind* valueOf($String* name);
	static $Array<::com::sun::source::tree::LambdaExpressionTree$BodyKind>* values();
	static ::com::sun::source::tree::LambdaExpressionTree$BodyKind* EXPRESSION;
	static ::com::sun::source::tree::LambdaExpressionTree$BodyKind* STATEMENT;
	static $Array<::com::sun::source::tree::LambdaExpressionTree$BodyKind>* $VALUES;
};

			} // tree
		} // source
	} // sun
} // com

#pragma pop_macro("EXPRESSION")
#pragma pop_macro("STATEMENT")

#endif // _com_sun_source_tree_LambdaExpressionTree$BodyKind_h_