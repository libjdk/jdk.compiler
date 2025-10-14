#ifndef _com_sun_tools_javac_comp_InferenceContext_h_
#define _com_sun_tools_javac_comp_InferenceContext_h_
//$ class com.sun.tools.javac.comp.InferenceContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$TypeVar;
					class Type$UndetVar;
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
					class Infer;
					class Infer$FreeTypeListener;
					class Infer$GraphStrategy;
					class InferenceContext$ReachabilityVisitor;
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
					class List;
					class Warner;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import InferenceContext : public ::java::lang::Object {
	$class(InferenceContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InferenceContext();
	void init$(::com::sun::tools::javac::comp::Infer* infer, ::com::sun::tools::javac::util::List* inferencevars);
	void init$(::com::sun::tools::javac::comp::Infer* infer, ::com::sun::tools::javac::util::List* inferencevars, ::com::sun::tools::javac::util::List* undetvars);
	virtual void addFreeTypeListener(::com::sun::tools::javac::util::List* types, ::com::sun::tools::javac::comp::Infer$FreeTypeListener* ftl);
	virtual void addVar(::com::sun::tools::javac::code::Type$TypeVar* t);
	virtual ::com::sun::tools::javac::code::Type* asInstType(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* asInstTypes(::com::sun::tools::javac::util::List* ts);
	::com::sun::tools::javac::code::Type* asUndetVar(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::util::List* asUndetVars(::com::sun::tools::javac::util::List* ts);
	::com::sun::tools::javac::util::List* boundedVars();
	virtual ::com::sun::tools::javac::code::Type* cachedCapture(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* t, bool readOnly);
	virtual void dupTo(::com::sun::tools::javac::comp::InferenceContext* that);
	virtual void dupTo(::com::sun::tools::javac::comp::InferenceContext* that, bool clone);
	::com::sun::tools::javac::util::List* filterVars(::java::util::function::Predicate* fu);
	bool free(::com::sun::tools::javac::code::Type* t);
	bool free(::com::sun::tools::javac::util::List* ts);
	::com::sun::tools::javac::util::List* freeVarsIn(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::util::List* freeVarsIn(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::util::List* inferenceVars();
	virtual ::com::sun::tools::javac::util::List* instTypes();
	virtual ::com::sun::tools::javac::util::List* instvars();
	static bool lambda$boundedVars$2(::com::sun::tools::javac::code::Type$UndetVar* uv);
	void lambda$dupTo$3(::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	static bool lambda$instvars$1(::com::sun::tools::javac::code::Type$UndetVar* uv);
	static bool lambda$min$4(::com::sun::tools::javac::util::List* redundantVars, ::com::sun::tools::javac::code::Type* b);
	void lambda$min$5(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::comp::InferenceContext$ReachabilityVisitor* rv, ::com::sun::tools::javac::util::Warner* warn, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	void lambda$min$6(::com::sun::tools::javac::util::List* unreachableVars, ::com::sun::tools::javac::util::Warner* warn, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	static bool lambda$restvars$0(::com::sun::tools::javac::code::Type$UndetVar* uv);
	virtual ::com::sun::tools::javac::comp::InferenceContext* min(::com::sun::tools::javac::util::List* roots, bool shouldSolve, ::com::sun::tools::javac::util::Warner* warn);
	virtual void notifyChange();
	virtual void notifyChange(::com::sun::tools::javac::util::List* inferredVars);
	virtual ::com::sun::tools::javac::util::List* restvars();
	virtual void rollback(::com::sun::tools::javac::util::List* saved_undet);
	virtual ::com::sun::tools::javac::util::List* save();
	void solve(::com::sun::tools::javac::comp::Infer$GraphStrategy* ss, ::com::sun::tools::javac::util::Warner* warn);
	virtual void solve(::com::sun::tools::javac::util::Warner* warn);
	virtual void solve(::com::sun::tools::javac::util::List* vars, ::com::sun::tools::javac::util::Warner* warn);
	virtual void solveAny(::com::sun::tools::javac::util::List* varsToSolve, ::com::sun::tools::javac::util::Warner* warn);
	::com::sun::tools::javac::util::List* solveBasic(::java::util::EnumSet* steps);
	virtual ::com::sun::tools::javac::util::List* solveBasic(::com::sun::tools::javac::util::List* varsToSolve, ::java::util::EnumSet* steps);
	virtual void solveLegacy(bool partial, ::com::sun::tools::javac::util::Warner* warn, ::java::util::EnumSet* steps);
	virtual $String* toString() override;
	virtual ::com::sun::tools::javac::util::List* undetVars();
	virtual ::com::sun::tools::javac::code::Type* update(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::util::List* undetvars = nullptr;
	::com::sun::tools::javac::util::List* inferencevars = nullptr;
	::java::util::Map* freeTypeListeners = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Infer* infer = nullptr;
	::java::util::Map* captureTypeCache = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_InferenceContext_h_