#ifndef _com_sun_tools_javac_comp_DeferredAttr_h_
#define _com_sun_tools_javac_comp_DeferredAttr_h_
//$ class com.sun.tools.javac.comp.DeferredAttr
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
					class Symtab;
					class Types;
					class Types$TypeMapping;
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
					class ArgumentAttr;
					class ArgumentAttr$LocalCacheContext;
					class Attr;
					class Attr$ResultInfo;
					class Check;
					class DeferredAttr$AttributionMode;
					class DeferredAttr$DeferredAttrContext;
					class DeferredAttr$DeferredStuckPolicy;
					class Enter;
					class Env;
					class Flow;
					class Infer;
					class Resolve;
					class TypeEnvs;
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
					class JCTree$JCStatement;
					class JCTree$JCVariableDecl;
					class TreeCopier;
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
					class JCDiagnostic$Factory;
					class Log;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export DeferredAttr : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(DeferredAttr, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	DeferredAttr();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::tree::JCTree* attribSpeculative(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual ::com::sun::tools::javac::tree::JCTree* attribSpeculative(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext* localCache);
	virtual ::com::sun::tools::javac::tree::JCTree* attribSpeculative(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::tree::TreeCopier* deferredCopier, ::java::util::function::Supplier* diagHandlerCreator, ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode* attributionMode, ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext* localCache);
	virtual ::com::sun::tools::javac::tree::JCTree* attribSpeculative(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::java::util::function::Supplier* diagHandlerCreator, ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode* attributionMode, ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext* localCache);
	virtual ::com::sun::tools::javac::tree::JCTree$JCLambda* attribSpeculativeLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* that, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	static ::com::sun::tools::javac::comp::DeferredAttr* instance(::com::sun::tools::javac::util::Context* context);
	static bool lambda$attribSpeculativeLambda$0(::com::sun::tools::javac::tree::JCTree$JCStatement* s);
	static ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* lambda$attribSpeculativeLambda$1(::com::sun::tools::javac::tree::JCTree$JCStatement* t);
	static ::com::sun::tools::javac::util::Context$Key* deferredAttrKey;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::ArgumentAttr* argumentAttr = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::comp::Infer* infer = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::tree::TreeCopier* treeCopier = nullptr;
	::com::sun::tools::javac::code::Types$TypeMapping* deferredCopier = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Flow* flow = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::comp::TypeEnvs* typeEnvs = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	::com::sun::tools::javac::tree::JCTree* stuckTree = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy* dummyStuckPolicy = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* emptyDeferredAttrContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr_h_