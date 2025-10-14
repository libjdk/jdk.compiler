#ifndef _com_sun_tools_javac_tree_JCTree$JCMemberReference$ReferenceKind_h_
#define _com_sun_tools_javac_tree_JCTree$JCMemberReference$ReferenceKind_h_
//$ class com.sun.tools.javac.tree.JCTree$JCMemberReference$ReferenceKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARRAY_CTOR")
#undef ARRAY_CTOR
#pragma push_macro("BOUND")
#undef BOUND
#pragma push_macro("IMPLICIT_INNER")
#undef IMPLICIT_INNER
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("SUPER")
#undef SUPER
#pragma push_macro("TOPLEVEL")
#undef TOPLEVEL
#pragma push_macro("UNBOUND")
#undef UNBOUND

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class MemberReferenceTree$ReferenceMode;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCMemberReference$ReferenceKind : public ::java::lang::Enum {
	$class(JCTree$JCMemberReference$ReferenceKind, 0, ::java::lang::Enum)
public:
	JCTree$JCMemberReference$ReferenceKind();
	static $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::source::tree::MemberReferenceTree$ReferenceMode* mode, bool unbound);
	virtual bool isUnbound();
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind>* values();
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* SUPER;
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* UNBOUND;
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* STATIC;
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* BOUND;
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* IMPLICIT_INNER;
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* TOPLEVEL;
	static ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* ARRAY_CTOR;
	static $Array<::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind>* $VALUES;
	::com::sun::source::tree::MemberReferenceTree$ReferenceMode* mode = nullptr;
	bool unbound = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ARRAY_CTOR")
#pragma pop_macro("BOUND")
#pragma pop_macro("IMPLICIT_INNER")
#pragma pop_macro("STATIC")
#pragma pop_macro("SUPER")
#pragma pop_macro("TOPLEVEL")
#pragma pop_macro("UNBOUND")

#endif // _com_sun_tools_javac_tree_JCTree$JCMemberReference$ReferenceKind_h_