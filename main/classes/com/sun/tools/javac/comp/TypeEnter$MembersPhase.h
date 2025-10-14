#ifndef _com_sun_tools_javac_comp_TypeEnter$MembersPhase_h_
#define _com_sun_tools_javac_comp_TypeEnter$MembersPhase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$MembersPhase
//$ extends com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase

#include <com/sun/tools/javac/comp/TypeEnter$AbstractMembersPhase.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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
					class Env;
					class TypeEnter;
					class TypeEnter$DefaultConstructorHelper;
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
					class JCTree;
					class JCTree$JCClassDecl;
					class JCTree$JCMethodDecl;
					class JCTree$JCVariableDecl;
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

class TypeEnter$MembersPhase : public ::com::sun::tools::javac::comp::TypeEnter$AbstractMembersPhase {
	$class(TypeEnter$MembersPhase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$AbstractMembersPhase)
public:
	TypeEnter$MembersPhase();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0);
	void addAccessor(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	void addEnumMembers(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	void addRecordMembersIfNeeded(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	void finishClass(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::tree::JCTree* defaultConstructor, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::tree::JCTree$JCMethodDecl* getCanonicalConstructorDecl(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	::com::sun::tools::javac::comp::TypeEnter$DefaultConstructorHelper* getDefaultConstructorHelper(::com::sun::tools::javac::comp::Env* env);
	static bool lambda$addAccessor$1(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* rf);
	bool lambda$addRecordMembersIfNeeded$4(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	void lambda$addRecordMembersIfNeeded$5(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	static bool lambda$finishClass$0(::com::sun::tools::javac::tree::JCTree* defaultConstructor, ::com::sun::tools::javac::tree::JCTree* t);
	static ::com::sun::tools::javac::code::Type* lambda$getCanonicalConstructorDecl$2(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	virtual void runPhase(::com::sun::tools::javac::comp::Env* env) override;
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$MembersPhase_h_