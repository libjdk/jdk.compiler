#ifndef _com_sun_tools_javac_comp_MemberEnter_h_
#define _com_sun_tools_javac_comp_MemberEnter_h_
//$ class com.sun.tools.javac.comp.MemberEnter
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredLintHandler;
					class Symbol$MethodSymbol;
					class Symtab;
					class Type;
					class Types;
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
					class Annotate;
					class Attr;
					class Check;
					class Enter;
					class Env;
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
					class JCTree$JCErroneous;
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
				namespace util {
					class Context;
					class Context$Key;
					class JCDiagnostic$Error;
					class List;
					class Log;
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

class $export MemberEnter : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(MemberEnter, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	MemberEnter();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void checkReceiver(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree, ::com::sun::tools::javac::comp::Env* localEnv);
	virtual void checkType(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual ::com::sun::tools::javac::comp::Env* getInitEnv(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* getMethodEnv(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* initEnv(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	static ::com::sun::tools::javac::comp::MemberEnter* instance(::com::sun::tools::javac::util::Context* context);
	virtual void memberEnter(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual void memberEnter(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* methodEnv(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual bool needsLazyConstValue(::com::sun::tools::javac::tree::JCTree* tree);
	virtual ::com::sun::tools::javac::code::Type* signature(::com::sun::tools::javac::code::Symbol$MethodSymbol* msym, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::util::List* params, ::com::sun::tools::javac::tree::JCTree* res, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* recvparam, ::com::sun::tools::javac::util::List* thrown, ::com::sun::tools::javac::comp::Env* env);
	virtual void visitErroneous(::com::sun::tools::javac::tree::JCTree$JCErroneous* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	static ::com::sun::tools::javac::util::Context$Key* memberEnterKey;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::DeferredLintHandler* deferredLintHandler = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_MemberEnter_h_