#ifndef _com_sun_tools_javac_comp_Check_h_
#define _com_sun_tools_javac_comp_Check_h_
//$ class com.sun.tools.javac.comp.Check
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Attribute$Array;
					class Attribute$Compound;
					class DeferredLintHandler;
					class Directive$ExportsDirective;
					class Directive$RequiresDirective;
					class Lint;
					class Preview;
					class Scope;
					class Source;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$CompletionFailure;
					class Symbol$MethodSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
					class Symbol$RecordComponent;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class Type$ClassType;
					class Type$TypeVar;
					class TypeAnnotations;
					class Types;
					class Types$SimpleVisitor;
					class Types$UnaryVisitor;
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
					class Check$CheckContext;
					class DeferredAttr;
					class Enter;
					class Env;
					class Infer;
					class InferenceContext;
					class Resolve;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Profile;
					class Target;
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
					class JCTree$JCAnnotation;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCIf;
					class JCTree$JCMethodDecl;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewClass;
					class JCTree$JCTypeCast;
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
					class JCDiagnostic$Warning;
					class List;
					class Log;
					class MandatoryWarningHandler;
					class Name;
					class Names;
					class Warner;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Optional;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
			class Supplier;
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Check : public ::java::lang::Object {
	$class(Check, 0, ::java::lang::Object)
public:
	Check();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual bool annotationApplicable(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a, ::com::sun::tools::javac::code::Symbol* s);
	$Object* asTypeParam(::com::sun::tools::javac::code::Type* t);
	void assertConvertible(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* actual, ::com::sun::tools::javac::code::Type* formal, ::com::sun::tools::javac::util::Warner* warn);
	bool belongsToRestrictedPackage(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* cannotOverride(::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::code::Symbol$MethodSymbol* other);
	virtual ::com::sun::tools::javac::util::Warner* castWarner(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* expected);
	virtual void checkAccessFromSerializableElement(::com::sun::tools::javac::tree::JCTree* tree, bool isLambda);
	virtual void checkAllDefined(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void checkAnnotationResType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* type);
	virtual void checkCanonical(::com::sun::tools::javac::tree::JCTree* tree);
	virtual ::com::sun::tools::javac::code::Type* checkCastable(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req);
	virtual ::com::sun::tools::javac::code::Type* checkCastable(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	virtual void checkClassBounds(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* type);
	virtual void checkClassBounds(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::java::util::Map* seensofar, ::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::code::Type* checkClassOrArrayType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	void checkClassOverrideEqualsAndHash(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* someClass);
	virtual void checkClassOverrideEqualsAndHashIfNeeded(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* someClass);
	virtual ::com::sun::tools::javac::code::Type* checkClassType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* checkClassType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t, bool noBounds);
	virtual bool checkCommonOverriderIn(::com::sun::tools::javac::code::Symbol* s1, ::com::sun::tools::javac::code::Symbol* s2, ::com::sun::tools::javac::code::Type* site);
	virtual bool checkCompatibleAbstracts(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2, ::com::sun::tools::javac::code::Type* site);
	virtual void checkCompatibleConcretes(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site);
	virtual void checkCompatibleSupertypes(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* c);
	virtual ::com::sun::tools::javac::code::Type* checkConstructorRefType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	void checkCyclicConstructor(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::code::Symbol* ctor, ::java::util::Map* callMap);
	virtual void checkCyclicConstructors(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual void checkDefaultConstructor(::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual void checkDefaultMethodClashes(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site);
	virtual bool checkDenotable(::com::sun::tools::javac::code::Type* t);
	virtual void checkDeprecated(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* other, ::com::sun::tools::javac::code::Symbol* s);
	virtual void checkDeprecated(::java::util::function::Supplier* pos, ::com::sun::tools::javac::code::Symbol* other, ::com::sun::tools::javac::code::Symbol* s);
	virtual void checkDeprecatedAnnotation(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* s);
	virtual ::com::sun::tools::javac::code::Type* checkDiamond(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree, ::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* checkDiamondDenotable(::com::sun::tools::javac::code::Type$ClassType* t);
	virtual bool checkDisjoint(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, int64_t flags, int64_t set1, int64_t set2);
	virtual void checkDivZero(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* operator$, ::com::sun::tools::javac::code::Type* operand);
	virtual void checkEmptyIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree);
	bool checkExtends(::com::sun::tools::javac::code::Type* a, ::com::sun::tools::javac::code::Type* bound);
	virtual int64_t checkFlags(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, int64_t flags, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree* tree);
	virtual void checkForBadAuxiliaryClassAccess(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void checkFunctionalInterface(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::code::Symbol$ClassSymbol* cs);
	virtual void checkHideClashes(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol$MethodSymbol* sym);
	virtual void checkImplementations(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual void checkImplementations(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::code::Symbol$ClassSymbol* ic);
	virtual void checkImportedPackagesObservable(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel);
	virtual void checkImportsResolvable(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel);
	virtual void checkImportsUnique(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel);
	virtual void checkLeaksNotAccessible(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* check);
	virtual ::com::sun::tools::javac::code::Type* checkLocalVarType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Type* checkMethod(::com::sun::tools::javac::code::Type* mtype, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::List* argtrees, ::com::sun::tools::javac::util::List* argtypes, bool useVarargs, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual void checkModuleExists(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	virtual void checkModuleName(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree);
	virtual void checkModuleRequires(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Directive$RequiresDirective* rd);
	bool checkNameClash(::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::code::Symbol* s1, ::com::sun::tools::javac::code::Symbol* s2);
	virtual void checkNonCyclic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	virtual void checkNonCyclic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type$TypeVar* t);
	void checkNonCyclic1(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* seen);
	virtual void checkNonCyclicDecl(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual void checkNonCyclicElements(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual void checkNonCyclicElementsInternal(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	bool checkNonCyclicInternal(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* checkNonVoid(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	virtual void checkNotRepeated(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* it, ::java::util::Set* its);
	virtual ::com::sun::tools::javac::code::Type* checkNullOrRefType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	virtual void checkOverride(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::code::Symbol$MethodSymbol* other, ::com::sun::tools::javac::code::Symbol$ClassSymbol* origin);
	virtual void checkOverride(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree, ::com::sun::tools::javac::code::Symbol$MethodSymbol* m);
	virtual void checkOverride(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::code::Symbol$MethodSymbol* m);
	virtual void checkOverrideClashes(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol$MethodSymbol* sym);
	virtual void checkPackageExistsForOpens(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$PackageSymbol* packge);
	virtual void checkPotentiallyAmbiguousOverloads(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol$MethodSymbol* msym1, ::com::sun::tools::javac::code::Symbol$MethodSymbol* msym2);
	virtual void checkPreview(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* other, ::com::sun::tools::javac::code::Symbol* s);
	virtual void checkProfile(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* s);
	virtual void checkRaw(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual void checkRedundantCast(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree);
	virtual ::com::sun::tools::javac::code::Type* checkRefType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* checkRefTypes(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::util::List* types);
	virtual void checkSunAPI(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* s);
	virtual void checkSwitchCaseStructure(::com::sun::tools::javac::util::List* cases);
	virtual void checkTransparentClass(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::code::Scope* s);
	virtual void checkTransparentVar(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* v, ::com::sun::tools::javac::code::Scope* s);
	virtual ::com::sun::tools::javac::code::Type* checkType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req);
	virtual ::com::sun::tools::javac::code::Type* checkType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	bool checkTypeContainsImportableElement(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Symbol$PackageSymbol* packge, ::com::sun::tools::javac::util::Name* name, ::java::util::Set* processed);
	virtual bool checkUnique(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* s);
	virtual bool checkUniqueClassName(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Scope* s);
	bool checkUniqueImport(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Scope* ordinallyImportedSoFar, ::com::sun::tools::javac::code::Scope* staticallyImportedSoFar, ::com::sun::tools::javac::code::Scope* topLevelScope, ::com::sun::tools::javac::code::Symbol* sym, bool staticImport);
	virtual bool checkValidGenericType(::com::sun::tools::javac::code::Type* t);
	virtual void checkVarargsMethodDecl(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree);
	void checkVisible(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* what, ::com::sun::tools::javac::code::Symbol$PackageSymbol* inPackage, bool inSuperType);
	virtual void clear();
	virtual void clearLocalClassNameIndexes(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void closure(::com::sun::tools::javac::code::Type* t, ::java::util::Map* typeMap);
	void closure(::com::sun::tools::javac::code::Type* t, ::java::util::Map* typesSkip, ::java::util::Map* typeMap);
	virtual ::com::sun::tools::javac::code::Type* completionError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$CompletionFailure* ex);
	virtual ::com::sun::tools::javac::util::Warner* convertWarner(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* expected);
	$Array<::com::sun::tools::javac::util::Name>* defaultTargetMetaInfo();
	virtual ::com::sun::tools::javac::util::List* diff(::com::sun::tools::javac::util::List* ts1, ::com::sun::tools::javac::util::List* ts2);
	virtual void duplicateErasureError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym1, ::com::sun::tools::javac::code::Symbol* sym2);
	virtual void duplicateError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual void earlyRefError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::util::List* excl(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* ts);
	::com::sun::tools::javac::code::Directive$ExportsDirective* findExport(::com::sun::tools::javac::code::Symbol$PackageSymbol* pack);
	::com::sun::tools::javac::code::Symbol* firstDirectIncompatibility(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2, ::com::sun::tools::javac::code::Type* site);
	::com::sun::tools::javac::code::Symbol* firstIncompatibility(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2, ::com::sun::tools::javac::code::Type* site);
	::com::sun::tools::javac::code::Type* firstIncompatibleTypeArg(::com::sun::tools::javac::code::Type* type);
	virtual ::java::util::Optional* getApplicableTargets(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a, ::com::sun::tools::javac::code::Symbol* s);
	virtual ::com::sun::tools::javac::code::Attribute$Array* getAttributeTargetAttribute(::com::sun::tools::javac::code::Symbol$TypeSymbol* s);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* getCompiled(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* getCompiled(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* flatname);
	::java::util::Set* getDefaultTargetSet();
	virtual $Array<::com::sun::tools::javac::util::Name>* getTargetNames(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a);
	virtual $Array<::com::sun::tools::javac::util::Name>* getTargetNames(::com::sun::tools::javac::code::Symbol$TypeSymbol* annoSym);
	int64_t implicitEnumFinalFlag(::com::sun::tools::javac::tree::JCTree* tree);
	virtual bool importAccessible(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol$PackageSymbol* packge);
	virtual ::com::sun::tools::javac::util::List* incl(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* ts);
	static ::com::sun::tools::javac::comp::Check* instance(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::util::List* intersect(::com::sun::tools::javac::util::List* ts1, ::com::sun::tools::javac::util::List* ts2);
	virtual bool intersects(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* ts);
	bool is292targetTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree);
	bool isAPISymbol(::com::sun::tools::javac::code::Symbol* sym);
	bool isCanonical(::com::sun::tools::javac::tree::JCTree* tree);
	virtual bool isChecked(::com::sun::tools::javac::code::Type* exc);
	bool isDeprecatedOverrideIgnorable(::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::code::Symbol$ClassSymbol* origin);
	bool isEffectivelyNonPublic(::com::sun::tools::javac::code::Symbol* sym);
	virtual bool isHandled(::com::sun::tools::javac::code::Type* exc, ::com::sun::tools::javac::util::List* handled);
	virtual bool isOverrider(::com::sun::tools::javac::code::Symbol* s);
	bool isTargetSubsetOf(::java::util::Set* s, ::java::util::Set* t);
	bool isTrustMeAllowedOnMethod(::com::sun::tools::javac::code::Symbol* s);
	virtual bool isTypeAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a, bool isTypeParameter);
	virtual bool isTypeAnnotation(::com::sun::tools::javac::code::Attribute* a, bool isTypeParameter);
	virtual bool isTypeArgErroneous(::com::sun::tools::javac::code::Type* t);
	virtual bool isUnchecked(::com::sun::tools::javac::code::Symbol$ClassSymbol* exc);
	virtual bool isUnchecked(::com::sun::tools::javac::code::Type* exc);
	virtual bool isUnchecked(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* exc);
	void lambda$checkDefaultConstructor$19(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::code::Symbol$PackageSymbol* pkg, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* modle);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* lambda$checkDeprecated$10(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	void lambda$checkDeprecated$11(::java::util::function::Supplier* pos, ::com::sun::tools::javac::code::Symbol* s);
	void lambda$checkDivZero$16(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	static bool lambda$checkImportsUnique$17(::com::sun::tools::javac::code::Symbol* sym);
	void lambda$checkMethod$2(::com::sun::tools::javac::code::Type* mtype, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::List* argtrees, ::com::sun::tools::javac::util::List* argtypes, bool useVarargs, ::com::sun::tools::javac::comp::InferenceContext* solvedContext);
	void lambda$checkModuleExists$20(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	void lambda$checkModuleRequires$22(::com::sun::tools::javac::code::Directive$RequiresDirective* rd, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* lambda$checkOverride$4(::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::tree::JCTree* tree);
	static bool lambda$checkOverride$5(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree, ::com::sun::tools::javac::code::Symbol$RecordComponent* rc);
	void lambda$checkPackageExistsForOpens$21(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$PackageSymbol* packge);
	void lambda$checkPreview$13(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* s);
	void lambda$checkPreview$14(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* s);
	void lambda$checkPreview$15(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* s);
	void lambda$checkRedundantCast$1(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree);
	void lambda$checkSunAPI$12(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* s);
	void lambda$checkType$0(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext, ::com::sun::tools::javac::comp::InferenceContext* solvedContext);
	static bool lambda$checkUniqueImport$18(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol* candidate);
	bool lambda$isTypeAnnotation$9(bool isTypeParameter, ::com::sun::tools::javac::code::Attribute* attr);
	static bool lambda$new$6(::com::sun::tools::javac::code::Symbol* s);
	bool lambda$validateAnnotation$7(::com::sun::tools::javac::util::Name* name);
	bool lambda$validateAnnotation$8(::com::sun::tools::javac::code::Attribute$Compound* anno);
	void lambda$warnOnExplicitStrictfp$3(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual ::com::sun::tools::javac::util::Name* localClassName(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void newRound();
	void noteCyclic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	static int32_t protection(int64_t flags);
	virtual void putCompiled(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym);
	virtual void removeCompiled(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym);
	virtual void reportDeferredDiagnostics();
	virtual ::com::sun::tools::javac::code::Lint* setLint(::com::sun::tools::javac::code::Lint* newLint);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* setMethod(::com::sun::tools::javac::code::Symbol$MethodSymbol* newMethod);
	virtual bool subset(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* typeTagError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* required, Object$* found);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* uncheckedOverrides(::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::code::Symbol$MethodSymbol* other);
	virtual ::com::sun::tools::javac::util::List* unhandled(::com::sun::tools::javac::util::List* thrown, ::com::sun::tools::javac::util::List* handled);
	virtual ::com::sun::tools::javac::util::List* union$(::com::sun::tools::javac::util::List* ts1, ::com::sun::tools::javac::util::List* ts2);
	virtual void validate(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual void validate(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, bool checkRaw);
	virtual void validate(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env);
	void validateAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a, ::com::sun::tools::javac::tree::JCTree* declarationTree, ::com::sun::tools::javac::code::Symbol* s);
	bool validateAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a);
	virtual bool validateAnnotationDeferErrors(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a);
	virtual void validateAnnotationMethod(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$MethodSymbol* m);
	virtual void validateAnnotationTree(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void validateAnnotationType(::com::sun::tools::javac::tree::JCTree* restype);
	virtual void validateAnnotationType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* type);
	virtual void validateAnnotations(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::tree::JCTree* declarationTree, ::com::sun::tools::javac::code::Symbol* s);
	void validateDefault(::com::sun::tools::javac::code::Symbol* container, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	void validateDocumented(::com::sun::tools::javac::code::Symbol* container, ::com::sun::tools::javac::code::Symbol* contained, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	void validateInherited(::com::sun::tools::javac::code::Symbol* container, ::com::sun::tools::javac::code::Symbol* contained, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual void validateRepeatable(::com::sun::tools::javac::code::Symbol$TypeSymbol* s, ::com::sun::tools::javac::code::Attribute$Compound* repeatable, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	void validateRetention(::com::sun::tools::javac::code::Symbol$TypeSymbol* container, ::com::sun::tools::javac::code::Symbol$TypeSymbol* contained, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	void validateTarget(::com::sun::tools::javac::code::Symbol$TypeSymbol* container, ::com::sun::tools::javac::code::Symbol$TypeSymbol* contained, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual bool validateTargetAnnotationValue(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a);
	virtual void validateTypeAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a, bool isTypeParameter);
	virtual void validateTypeAnnotations(::com::sun::tools::javac::util::List* annotations, bool isTypeParameter);
	void validateValue(::com::sun::tools::javac::code::Symbol$TypeSymbol* container, ::com::sun::tools::javac::code::Symbol$TypeSymbol* contained, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual void varargsDuplicateError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym1, ::com::sun::tools::javac::code::Symbol* sym2);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* varargsOverrides(::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::code::Symbol$MethodSymbol* other);
	virtual void warnDeclaredUsingPreview(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual void warnDeprecated(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual void warnDivZero(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	void warnOnExplicitStrictfp(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual void warnPreviewAPI(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warnKey);
	virtual void warnStatic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warnKey);
	virtual void warnUnchecked(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warnKey);
	virtual void warnUnsafeVararg(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warnKey);
	bool withinAnonConstr(::com::sun::tools::javac::comp::Env* env);
	static ::com::sun::tools::javac::util::Context$Key* checkKey;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr* deferredAttr = nullptr;
	::com::sun::tools::javac::comp::Infer* infer = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::TypeAnnotations* typeAnnotations = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::com::sun::tools::javac::jvm::Target* target = nullptr;
	::com::sun::tools::javac::jvm::Profile* profile = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	bool warnOnAnyAccessToMembers = false;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* method = nullptr;
	char16_t syntheticNameChar = 0;
	::java::util::Map* compiled = nullptr;
	::com::sun::tools::javac::util::MandatoryWarningHandler* deprecationHandler = nullptr;
	::com::sun::tools::javac::util::MandatoryWarningHandler* removalHandler = nullptr;
	::com::sun::tools::javac::util::MandatoryWarningHandler* uncheckedHandler = nullptr;
	::com::sun::tools::javac::util::MandatoryWarningHandler* sunApiHandler = nullptr;
	::com::sun::tools::javac::code::DeferredLintHandler* deferredLintHandler = nullptr;
	bool allowRecords = false;
	bool allowSealed = false;
	::java::util::Map* localClassNameIndexes = nullptr;
	::com::sun::tools::javac::comp::Check$CheckContext* basicHandler = nullptr;
	static const bool ignoreAnnotatedCasts = true;
	static ::com::sun::tools::javac::code::Types$SimpleVisitor* denotableChecker;
	::com::sun::tools::javac::code::Types$UnaryVisitor* isTypeArgErroneous$ = nullptr;
	::com::sun::tools::javac::util::Warner* overrideWarner = nullptr;
	::java::util::function::Predicate* equalsHasCodeFilter = nullptr;
	::java::util::Set* defaultTargets = nullptr;
	$Array<::com::sun::tools::javac::util::Name>* dfltTargetMeta = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check_h_