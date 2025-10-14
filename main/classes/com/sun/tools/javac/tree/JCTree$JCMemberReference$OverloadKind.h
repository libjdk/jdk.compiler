#ifndef _com_sun_tools_javac_tree_JCTree$JCMemberReference$OverloadKind_h_
#define _com_sun_tools_javac_tree_JCTree$JCMemberReference$OverloadKind_h_
//$ class com.sun.tools.javac.tree.JCTree$JCMemberReference$OverloadKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("OVERLOADED")
#undef OVERLOADED
#pragma push_macro("UNOVERLOADED")
#undef UNOVERLOADED

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCMemberReference$OverloadKind : public ::java::lang::Enum {
	$class(JCTree$JCMemberReference$OverloadKind, 0, ::java::lang::Enum)
public:
	JCTree$JCMemberReference$OverloadKind();
	static $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind>* values();
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* OVERLOADED;
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* UNOVERLOADED;
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* ERROR;
	static $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind>* $VALUES;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ERROR")
#pragma pop_macro("OVERLOADED")
#pragma pop_macro("UNOVERLOADED")

#endif // _com_sun_tools_javac_tree_JCTree$JCMemberReference$OverloadKind_h_