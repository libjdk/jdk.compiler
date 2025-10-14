#ifndef _com_sun_tools_javac_comp_Infer_h_
#define _com_sun_tools_javac_comp_Infer_h_
//$ class com.sun.tools.javac.comp.Infer
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_INCORPORATION_STEPS")
#undef MAX_INCORPORATION_STEPS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$MethodSymbol;
					class Symtab;
					class Type;
					class Type$MethodType;
					class Type$UndetVar;
					class Type$UndetVar$InferenceBound;
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
					class Attr$ResultInfo;
					class Check;
					class Check$CheckContext;
					class DeferredAttr$DeferredAttrContext;
					class Env;
					class Infer$AbstractIncorporationEngine;
					class Infer$IncorporationBinaryOpKind;
					class Infer$InferenceException;
					class InferenceContext;
					class Resolve;
					class Resolve$MethodResolutionContext;
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
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Factory;
					class JCDiagnostic$Fragment;
					class List;
					class Log;
					class Warner;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Infer : public ::java::lang::Object {
	$class(Infer, 0, ::java::lang::Object)
public:
	Infer();
	void init$(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::code::Type* asSuper(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* sup);
	bool commonSuperWithDiffParameterization(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual void doIncorporation(::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool doIncorporationOp(::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind* opKind, ::com::sun::tools::javac::code::Type* op1, ::com::sun::tools::javac::code::Type* op2, ::com::sun::tools::javac::util::Warner* warn);
	void dumpGraphsIfNeeded(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* rsContext);
	virtual ::com::sun::tools::javac::comp::Infer$InferenceException* error(::com::sun::tools::javac::util::JCDiagnostic* diag);
	::com::sun::tools::javac::code::Type* generateReferenceToTargetConstraint(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type$UndetVar* from, ::com::sun::tools::javac::code::Type* to, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual ::com::sun::tools::javac::code::Type* generateReturnConstraints(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::code::Type$MethodType* mt, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* getBoundFragment(::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::util::List* types);
	::com::sun::tools::javac::util::List* getParameterizedSupers(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual ::com::sun::tools::javac::comp::Infer$AbstractIncorporationEngine* incorporationEngine();
	static ::com::sun::tools::javac::comp::Infer* instance(::com::sun::tools::javac::util::Context* context);
	virtual void instantiateAsUninferredVars(::com::sun::tools::javac::util::List* vars, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual ::com::sun::tools::javac::code::Type* instantiateFunctionalInterface(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* funcInterface, ::com::sun::tools::javac::util::List* paramTypes, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	virtual ::com::sun::tools::javac::code::Type* instantiateMethod(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::List* tvars, ::com::sun::tools::javac::code::Type$MethodType* mt, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::code::Symbol$MethodSymbol* msym, ::com::sun::tools::javac::util::List* argtypes, bool allowBoxing, bool useVarargs, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolveContext, ::com::sun::tools::javac::util::Warner* warn);
	virtual ::com::sun::tools::javac::code::Type* instantiatePolymorphicSignatureInstance(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$MethodSymbol* spMethod, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolveContext, ::com::sun::tools::javac::util::List* argtypes);
	static bool lambda$instantiateFunctionalInterface$1(::com::sun::tools::javac::code::Type* formalInterface, ::com::sun::tools::javac::code::Type* b);
	static bool lambda$roots$0(::com::sun::tools::javac::code::Type* tv);
	bool needsEagerInstantiation(::com::sun::tools::javac::code::Type$UndetVar* from, ::com::sun::tools::javac::code::Type* to, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual void reportBoundError(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib);
	virtual void reportBoundError(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib1, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib2);
	virtual void reportInstError(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib);
	::com::sun::tools::javac::util::List* roots(::com::sun::tools::javac::code::Type$MethodType* mt, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext);
	bool shouldPropagate(::com::sun::tools::javac::code::Type* restype, ::com::sun::tools::javac::comp::Attr$ResultInfo* target, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	static ::com::sun::tools::javac::util::Context$Key* inferKey;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	bool allowGraphInference = false;
	$String* dependenciesFolder = nullptr;
	::com::sun::tools::javac::util::List* pendingGraphs = nullptr;
	static ::com::sun::tools::javac::code::Type* anyPoly;
	::com::sun::tools::javac::code::Types$TypeMapping* fromTypeVarFun = nullptr;
	::com::sun::tools::javac::comp::Infer$AbstractIncorporationEngine* legacyEngine = nullptr;
	::com::sun::tools::javac::comp::Infer$AbstractIncorporationEngine* graphEngine = nullptr;
	static const int32_t MAX_INCORPORATION_STEPS = 10000;
	::java::util::Map* incorporationCache = nullptr;
	::com::sun::tools::javac::comp::InferenceContext* emptyContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("MAX_INCORPORATION_STEPS")

#endif // _com_sun_tools_javac_comp_Infer_h_