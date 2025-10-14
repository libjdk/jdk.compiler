#ifndef _com_sun_tools_javac_comp_Flow$BaseAnalyzer$JumpKind_h_
#define _com_sun_tools_javac_comp_Flow$BaseAnalyzer$JumpKind_h_
//$ class com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BREAK")
#undef BREAK
#pragma push_macro("CONTINUE")
#undef CONTINUE
#pragma push_macro("YIELD")
#undef YIELD

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$Tag;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Flow$BaseAnalyzer$JumpKind : public ::java::lang::Enum {
	$class(Flow$BaseAnalyzer$JumpKind, 0, ::java::lang::Enum)
public:
	Flow$BaseAnalyzer$JumpKind();
	static $Array<::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::tree::JCTree$Tag* treeTag);
	virtual ::com::sun::tools::javac::tree::JCTree* getTarget(::com::sun::tools::javac::tree::JCTree* tree) {return nullptr;}
	static ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind>* values();
	static ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind* BREAK;
	static ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind* CONTINUE;
	static ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind* YIELD;
	static $Array<::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind>* $VALUES;
	::com::sun::tools::javac::tree::JCTree$Tag* treeTag = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BREAK")
#pragma pop_macro("CONTINUE")
#pragma pop_macro("YIELD")

#endif // _com_sun_tools_javac_comp_Flow$BaseAnalyzer$JumpKind_h_