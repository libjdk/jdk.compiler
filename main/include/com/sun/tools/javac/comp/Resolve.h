#ifndef _com_sun_tools_javac_comp_Resolve_h_
#define _com_sun_tools_javac_comp_Resolve_h_
//$ class com.sun.tools.javac.comp.Resolve
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class Formattable$LocalizedString;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class ClassFinder;
					class Directive$ExportsDirective;
					class Kinds$KindSelector;
					class ModuleFinder;
					class Scope;
					class Scope$WriteableScope;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$PackageSymbol;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class Types;
					class Types$SimpleVisitor;
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
					class AttrRecover;
					class Check;
					class DeferredAttr;
					class Env;
					class Infer;
					class InferenceContext;
					class Resolve$LogResolveHelper;
					class Resolve$LookupHelper;
					class Resolve$MethodCheck;
					class Resolve$MethodResolutionContext;
					class Resolve$MethodResolutionPhase;
					class Resolve$RecoveryLoadClass;
					class Resolve$ReferenceChooser;
					class Resolve$ReferenceLookupHelper;
					class Resolve$ReferenceLookupResult;
					class Resolve$ResolveError;
					class Resolve$SymbolNotFoundError;
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
					class JCTree$JCMemberReference;
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
					class List;
					class Log;
					class Name;
					class Names;
					class Pair;
					class Warner;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class Function;
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Resolve : public ::java::lang::Object {
	$class(Resolve, 0, ::java::lang::Object)
public:
	Resolve();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::code::Symbol* accessBase(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, bool qualified);
	virtual ::com::sun::tools::javac::code::Symbol* accessBase(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, bool qualified);
	virtual ::com::sun::tools::javac::code::Symbol* accessInternal(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, bool qualified, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::comp::Resolve$LogResolveHelper* logResolveHelper);
	virtual ::com::sun::tools::javac::code::Symbol* accessMethod(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, bool qualified, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Symbol* accessMethod(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, bool qualified, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::util::List* adjustArgs(::com::sun::tools::javac::util::List* args, ::com::sun::tools::javac::code::Symbol* msym, int32_t length, bool allowVarargs);
	virtual ::com::sun::tools::javac::code::Symbol* ambiguityError(::com::sun::tools::javac::code::Symbol* m1, ::com::sun::tools::javac::code::Symbol* m2);
	static ::com::sun::tools::javac::code::Symbol* bestOf(::com::sun::tools::javac::code::Symbol* s1, ::com::sun::tools::javac::code::Symbol* s2);
	virtual void checkAccessibleType(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* checkMethod(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* m, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::util::Warner* warn);
	virtual void checkNonAbstract(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	::com::sun::tools::javac::code::Symbol* checkRestrictedType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* bestSoFar, ::com::sun::tools::javac::util::Name* name);
	::com::sun::tools::javac::code::Symbol* createInvisibleSymbolError(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* sym);
	void dumpMethodReferenceSearchResults(::com::sun::tools::javac::tree::JCTree$JCMemberReference* referenceTree, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolutionContext, ::com::sun::tools::javac::code::Symbol* bestSoFar, bool bound);
	virtual bool enclosingInstanceMissing(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::code::Symbol* findConstructor(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, bool allowBoxing, bool useVarargs);
	::com::sun::tools::javac::code::Symbol* findDiamond(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, bool allowBoxing, bool useVarargs);
	::com::sun::tools::javac::code::Symbol* findDiamond(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, bool allowBoxing, bool useVarargs);
	virtual ::com::sun::tools::javac::code::Symbol* findField(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c);
	virtual ::com::sun::tools::javac::code::Symbol* findFun(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, bool allowBoxing, bool useVarargs);
	virtual ::com::sun::tools::javac::code::Symbol* findGlobalType(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Scope* scope, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass* recoveryLoadClass);
	virtual ::com::sun::tools::javac::code::Symbol* findIdent(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Kinds$KindSelector* kind);
	virtual ::com::sun::tools::javac::code::Symbol* findIdentInPackage(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$TypeSymbol* pck, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Kinds$KindSelector* kind);
	virtual ::com::sun::tools::javac::code::Symbol* findIdentInPackageInternal(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$TypeSymbol* pck, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Kinds$KindSelector* kind);
	virtual ::com::sun::tools::javac::code::Symbol* findIdentInType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Kinds$KindSelector* kind);
	virtual ::com::sun::tools::javac::code::Symbol* findIdentInTypeInternal(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Kinds$KindSelector* kind);
	virtual ::com::sun::tools::javac::code::Symbol* findIdentInternal(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Kinds$KindSelector* kind);
	virtual ::com::sun::tools::javac::code::Symbol* findImmediateMemberType(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c);
	virtual ::com::sun::tools::javac::code::Symbol* findInheritedMemberType(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c);
	virtual ::com::sun::tools::javac::code::Symbol* findMemberType(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c);
	virtual ::com::sun::tools::javac::code::Symbol* findMethod(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, bool allowBoxing, bool useVarargs);
	::com::sun::tools::javac::code::Symbol* findMethod(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::code::Type* intype, ::com::sun::tools::javac::code::Symbol* bestSoFar, bool allowBoxing, bool useVarargs);
	virtual ::com::sun::tools::javac::code::Symbol* findMethodInScope(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::code::Scope* sc, ::com::sun::tools::javac::code::Symbol* bestSoFar, bool allowBoxing, bool useVarargs, bool abstractok);
	virtual ::com::sun::tools::javac::code::Symbol* findPolymorphicSignatureInstance(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* spMethod, ::com::sun::tools::javac::util::List* argtypes);
	virtual ::com::sun::tools::javac::code::Symbol* findPolymorphicSignatureInstance(::com::sun::tools::javac::code::Symbol* spMethod, ::com::sun::tools::javac::code::Type* mtype);
	virtual ::com::sun::tools::javac::code::Symbol* findType(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol* findTypeVar(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, bool staticOnly);
	virtual ::com::sun::tools::javac::code::Symbol* findVar(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol* getMemberReference(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCMemberReference* referenceTree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getVerboseApplicableCandidateDiag(int32_t pos, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Type* inst);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getVerboseInapplicableCandidateDiag(int32_t pos, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic* subDiag);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* inaccessiblePackageReason(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$PackageSymbol* sym);
	static ::com::sun::tools::javac::comp::Resolve* instance(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::code::Type* instantiate(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* m, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, bool allowBoxing, bool useVarargs, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool isAccessible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c);
	virtual bool isAccessible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c, bool checkInner);
	virtual bool isAccessible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* t);
	virtual bool isAccessible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* t, bool checkInner);
	virtual bool isAccessible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym);
	virtual bool isAccessible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym, bool checkInner);
	bool isImportOnDemand(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name);
	static bool isInitializer(::com::sun::tools::javac::comp::Env* env);
	bool isInnerSubClass(::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::code::Symbol* base);
	bool isProtectedAccessible(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::code::Type* site);
	static bool isStatic(::com::sun::tools::javac::comp::Env* env);
	static bool lambda$inaccessiblePackageReason$8(::com::sun::tools::javac::code::Symbol$PackageSymbol* sym, ::com::sun::tools::javac::code::Directive$ExportsDirective* e);
	bool lambda$isAccessible$0(::com::sun::tools::javac::comp::Env* env, bool checkInner, ::com::sun::tools::javac::code::Type* alternative);
	static bool lambda$lookupPackage$7(::com::sun::tools::javac::code::Symbol$PackageSymbol* sym);
	static ::com::sun::tools::javac::code::Symbol* lambda$new$2(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name);
	static bool lambda$new$3(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* sym);
	::com::sun::tools::javac::code::Symbol* lambda$new$4(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name);
	::com::sun::tools::javac::code::Symbol* lambda$new$6(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name);
	::java::util::Iterator* lambda$superclasses$1(::com::sun::tools::javac::code::Type* intype);
	virtual ::com::sun::tools::javac::code::Symbol* loadClass(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass* recoveryLoadClass);
	virtual void logAccessErrorInternal(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* type);
	void logResolveError(::com::sun::tools::javac::comp::Resolve$ResolveError* error, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	::com::sun::tools::javac::code::Symbol* lookupInvisibleSymbol(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, ::java::util::function::Function* get, ::java::util::function::BiFunction* load, ::java::util::function::Predicate* validate, ::com::sun::tools::javac::code::Symbol* defaultResult);
	virtual ::com::sun::tools::javac::code::Symbol* lookupMethod(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::comp::Resolve$MethodCheck* methodCheck, ::com::sun::tools::javac::comp::Resolve$LookupHelper* lookupHelper);
	virtual ::com::sun::tools::javac::code::Symbol* lookupMethod(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolveContext, ::com::sun::tools::javac::comp::Resolve$LookupHelper* lookupHelper);
	virtual ::com::sun::tools::javac::code::Symbol* lookupPackage(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper* makeReferenceLookupHelper(::com::sun::tools::javac::tree::JCTree$JCMemberReference* referenceTree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* maxPhase);
	virtual $Object* methodArguments(::com::sun::tools::javac::util::List* argtypes);
	virtual ::com::sun::tools::javac::code::Symbol* mostSpecific(::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::code::Symbol* m1, ::com::sun::tools::javac::code::Symbol* m2, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, bool useVarargs);
	bool notOverriddenIn(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym);
	::com::sun::tools::javac::util::List* pruneInterfaces(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* rawInstantiate(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* m, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, bool allowBoxing, bool useVarargs, ::com::sun::tools::javac::util::Warner* warn);
	virtual void reportVerboseResolutionDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* dpos, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::code::Symbol* bestSoFar);
	virtual ::com::sun::tools::javac::code::Symbol* resolveConstructor(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	::com::sun::tools::javac::code::Symbol* resolveConstructor(::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolveContext, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Symbol* resolveDiamond(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Symbol* resolveIdent(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Kinds$KindSelector* kind);
	virtual ::com::sun::tools::javac::code::Type* resolveImplicitThis(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* resolveImplicitThis(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* t, bool isSuperCall);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* resolveInternalConstructor(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* resolveInternalField(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* resolveInternalMethod(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::util::Pair* resolveMemberReference(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCMemberReference* referenceTree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::code::Type* descriptor, ::com::sun::tools::javac::comp::Resolve$MethodCheck* methodCheck, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::comp::Resolve$ReferenceChooser* referenceChooser);
	virtual ::com::sun::tools::javac::code::Symbol* resolveMethod(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Symbol* resolveQualifiedMethod(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Symbol* resolveQualifiedMethod(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	::com::sun::tools::javac::code::Symbol* resolveQualifiedMethod(::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolveContext, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Symbol* resolveSelf(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol* resolveSelfContaining(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* member, bool isSuperCall);
	::com::sun::tools::javac::code::Symbol* resolveSelfContainingInternal(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* member, bool isSuperCall);
	virtual ::com::sun::tools::javac::code::Symbol* selectBest(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol* bestSoFar, bool allowBoxing, bool useVarargs);
	bool signatureMoreSpecific(::com::sun::tools::javac::util::List* actuals, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* m1, ::com::sun::tools::javac::code::Symbol* m2, bool useVarargs);
	virtual ::java::lang::Iterable* superclasses(::com::sun::tools::javac::code::Type* intype);
	bool symbolPackageVisible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* sym);
	static ::com::sun::tools::javac::util::Context$Key* resolveKey;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::AttrRecover* attrRecover = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr* deferredAttr = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::Infer* infer = nullptr;
	::com::sun::tools::javac::code::ClassFinder* finder = nullptr;
	::com::sun::tools::javac::code::ModuleFinder* moduleFinder = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	bool allowFunctionalInterfaceMostSpecific = false;
	bool allowModules = false;
	bool allowRecords = false;
	bool checkVarargsAccessAfterResolution = false;
	bool compactMethodDiags = false;
	bool allowLocalVariableTypeInference = false;
	bool allowYieldStatement = false;
	::java::util::EnumSet* verboseResolutionMode = nullptr;
	bool dumpMethodReferenceSearchResults$ = false;
	::com::sun::tools::javac::code::Scope$WriteableScope* polymorphicSignatureScope = nullptr;
	::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError* varNotFound = nullptr;
	::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError* methodNotFound = nullptr;
	::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError* typeNotFound = nullptr;
	::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* referenceNotFound = nullptr;
	::com::sun::tools::javac::code::Types$SimpleVisitor* accessibilityChecker = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodCheck* nilMethodCheck = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodCheck* arityMethodCheck = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodCheck* resolveMethodCheck = nullptr;
	::com::sun::tools::javac::util::Warner* noteWarner = nullptr;
	::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass* noRecovery = nullptr;
	::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass* doRecoveryLoadClass = nullptr;
	::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass* namedImportScopeRecovery = nullptr;
	::com::sun::tools::javac::comp::Resolve$RecoveryLoadClass* starImportScopeRecovery = nullptr;
	::com::sun::tools::javac::comp::Resolve$LogResolveHelper* basicLogResolveHelper = nullptr;
	::com::sun::tools::javac::comp::Resolve$LogResolveHelper* silentLogResolveHelper = nullptr;
	::com::sun::tools::javac::comp::Resolve$LogResolveHelper* methodLogResolveHelper = nullptr;
	::com::sun::tools::javac::comp::Resolve$ReferenceChooser* basicReferenceChooser = nullptr;
	::com::sun::tools::javac::comp::Resolve$ReferenceChooser* structuralReferenceChooser = nullptr;
	::com::sun::tools::javac::api::Formattable$LocalizedString* noArgs = nullptr;
	::com::sun::tools::javac::util::List* methodResolutionSteps = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* currentResolutionContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve_h_