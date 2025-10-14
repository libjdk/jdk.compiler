#ifndef _com_sun_tools_javac_tree_JCTree$JCLambda$ParameterKind_h_
#define _com_sun_tools_javac_tree_JCTree$JCLambda$ParameterKind_h_
//$ class com.sun.tools.javac.tree.JCTree$JCLambda$ParameterKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXPLICIT")
#undef EXPLICIT
#pragma push_macro("IMPLICIT")
#undef IMPLICIT

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCLambda$ParameterKind : public ::java::lang::Enum {
	$class(JCTree$JCLambda$ParameterKind, 0, ::java::lang::Enum)
public:
	JCTree$JCLambda$ParameterKind();
	static $Array<::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind>* values();
	static ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind* IMPLICIT;
	static ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind* EXPLICIT;
	static $Array<::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind>* $VALUES;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EXPLICIT")
#pragma pop_macro("IMPLICIT")

#endif // _com_sun_tools_javac_tree_JCTree$JCLambda$ParameterKind_h_