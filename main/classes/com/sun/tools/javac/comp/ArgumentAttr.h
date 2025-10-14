#ifndef _com_sun_tools_javac_comp_ArgumentAttr_h_
#define _com_sun_tools_javac_comp_ArgumentAttr_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symtab;
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
					class ArgumentAttr$ArgumentType;
					class ArgumentAttr$ConditionalType;
					class ArgumentAttr$ExplicitLambdaType;
					class ArgumentAttr$LocalCacheContext;
					class ArgumentAttr$ParensType;
					class ArgumentAttr$ResolvedConstructorType;
					class ArgumentAttr$ResolvedMethodType;
					class ArgumentAttr$SwitchExpressionType;
					class ArgumentAttr$UniquePos;
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
					class JCTree$JCConditional;
					class JCTree$JCExpression;
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
					class JCTree$JCMethodInvocation;
					class JCTree$JCNewClass;
					class JCTree$JCParens;
					class JCTree$JCSwitchExpression;
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
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Factory;
					class Log;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
			class Supplier;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export ArgumentAttr : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(ArgumentAttr, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	ArgumentAttr();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::code::Type* attribArg(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Type* checkSpeculative(::com::sun::tools::javac::tree::JCTree* expr, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual ::com::sun::tools::javac::code::Type* checkSpeculative(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	static ::com::sun::tools::javac::comp::ArgumentAttr* instance(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* lambda$processArg$0(::com::sun::tools::javac::tree::JCTree$JCExpression* that, ::com::sun::tools::javac::comp::ArgumentAttr$UniquePos* pos, ::java::util::function::Function* argumentTypeFactory);
	::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMethodType* lambda$visitApply$5(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* that, ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* speculativeTree);
	::com::sun::tools::javac::comp::ArgumentAttr$ConditionalType* lambda$visitConditional$2(::com::sun::tools::javac::tree::JCTree$JCConditional* that, ::com::sun::tools::javac::tree::JCTree$JCConditional* speculativeTree);
	::com::sun::tools::javac::comp::ArgumentAttr$ExplicitLambdaType* lambda$visitLambda$4(::com::sun::tools::javac::tree::JCTree$JCLambda* that);
	::com::sun::tools::javac::comp::ArgumentAttr$ResolvedConstructorType* lambda$visitNewClass$6(::com::sun::tools::javac::tree::JCTree$JCNewClass* that, ::com::sun::tools::javac::tree::JCTree$JCNewClass* speculativeTree);
	::com::sun::tools::javac::comp::ArgumentAttr$ParensType* lambda$visitParens$1(::com::sun::tools::javac::tree::JCTree$JCParens* that, ::com::sun::tools::javac::tree::JCTree$JCParens* speculativeTree);
	::com::sun::tools::javac::comp::ArgumentAttr$SwitchExpressionType* lambda$visitSwitchExpression$3(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* that, ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* speculativeTree);
	virtual void processArg(::com::sun::tools::javac::tree::JCTree$JCExpression* that, ::java::util::function::Function* argumentTypeFactory);
	virtual void processArg(::com::sun::tools::javac::tree::JCTree$JCExpression* that, ::java::util::function::Supplier* argumentTypeFactory);
	virtual void setResult(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* type);
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* that) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* that) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* that) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* that) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* that) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* that) override;
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* that) override;
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext* withLocalCacheContext();
	static ::com::sun::tools::javac::util::Context$Key* methodAttrKey;
	::com::sun::tools::javac::comp::DeferredAttr* deferredAttr = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::code::Type* result = nullptr;
	::java::util::Map* argumentTypeCache = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr_h_