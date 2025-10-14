#ifndef _com_sun_tools_javac_comp_AttrRecover_h_
#define _com_sun_tools_javac_comp_AttrRecover_h_
//$ class com.sun.tools.javac.comp.AttrRecover
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$TypeSymbol;
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
					class Attr;
					class Attr$ResultInfo;
					class DeferredAttr;
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
					class JCTree$JCLambda;
					class JCTree$JCMethodInvocation;
					class JCTree$JCReturn;
					class TreeMaker;
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
					class JCDiagnostic;
					class List;
					class ListBuffer;
					class Names;
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

class $import AttrRecover : public ::java::lang::Object {
	$class(AttrRecover, 0, ::java::lang::Object)
public:
	AttrRecover();
	void init$(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::code::Type* basicMethodInvocationRecovery(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual void doRecovery();
	static ::com::sun::tools::javac::comp::AttrRecover* instance(::com::sun::tools::javac::util::Context* context);
	static void lambda$doRecovery$0(::com::sun::tools::javac::tree::JCTree$JCLambda* lambda, ::com::sun::tools::javac::tree::JCTree$JCReturn* ret);
	static void lambda$doRecovery$1(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* mit, ::com::sun::tools::javac::util::List* prevArgs);
	virtual ::com::sun::tools::javac::code::Type* recoverMethodInvocation(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual void wrongMethodSymbolCandidate(::com::sun::tools::javac::code::Symbol$TypeSymbol* errSymbol, ::com::sun::tools::javac::code::Symbol* candSym, ::com::sun::tools::javac::util::JCDiagnostic* diag);
	static ::com::sun::tools::javac::util::Context$Key* attrRepairKey;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr* deferredAttr = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::util::ListBuffer* recoveryTodo = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_AttrRecover_h_