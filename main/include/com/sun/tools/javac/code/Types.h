#ifndef _com_sun_tools_javac_code_Types_h_
#define _com_sun_tools_javac_code_Types_h_
//$ class com.sun.tools.javac.code.Types
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Attribute$RetentionPolicy;
					class Scope$CompoundScope;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$TypeSymbol;
					class Symtab;
					class Type;
					class Type$ArrayType;
					class Type$ForAll;
					class Type$IntersectionClassType;
					class Type$TypeVar;
					class Type$WildcardType;
					class Types$CandidatesCache;
					class Types$ClosureHolder;
					class Types$DescriptorCache;
					class Types$HashCodeVisitor;
					class Types$ImplementationCache;
					class Types$MapVisitor;
					class Types$MembersClosureCache;
					class Types$SimpleVisitor;
					class Types$TypeMapping;
					class Types$TypeRelation;
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
				namespace jvm {
					class PoolConstant$LoadableConstant;
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
					class JavacMessages;
					class List;
					class ListBuffer;
					class Name;
					class Names;
					class Warner;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
		class Optional;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiPredicate;
			class Predicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Collector;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Types : public ::java::lang::Object {
	$class(Types, 0, ::java::lang::Object)
public:
	Types();
	using ::java::lang::Object::hashCode;
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void adapt(::com::sun::tools::javac::code::Type* source, ::com::sun::tools::javac::code::Type* target, ::com::sun::tools::javac::util::ListBuffer* from, ::com::sun::tools::javac::util::ListBuffer* to);
	void adaptSelf(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::ListBuffer* from, ::com::sun::tools::javac::util::ListBuffer* to);
	void appendTyparamString(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::StringBuilder* buf);
	bool areDisjoint(::com::sun::tools::javac::code::Symbol$ClassSymbol* ts, ::com::sun::tools::javac::code::Symbol$ClassSymbol* ss);
	::com::sun::tools::javac::code::Type* arraySuperType();
	virtual ::com::sun::tools::javac::code::Type* asEnclosingSuper(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Type* asOuterSuper(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Type* asSub(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Type* asSuper(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* boxedClass(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* boxedTypeOrType(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* capture(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* capture(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* captures(::com::sun::tools::javac::code::Type* t);
	void checkUnsafeVarargsConversion(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::util::Warner* warn);
	virtual ::com::sun::tools::javac::code::Type* classBound(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* closure(::com::sun::tools::javac::code::Type* t);
	virtual ::java::util::stream::Collector* closureCollector(bool minClosure, ::java::util::function::BiPredicate* shouldSkip);
	::com::sun::tools::javac::util::List* closureMin(::com::sun::tools::javac::util::List* cl);
	::com::sun::tools::javac::code::Type* compoundMin(::com::sun::tools::javac::util::List* cl);
	virtual ::com::sun::tools::javac::code::Type* constantType(::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* c);
	virtual bool containedBy(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool containsType(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::List* ss);
	virtual bool containsType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool containsTypeEquivalent(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::List* ss);
	bool containsTypeEquivalent(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool covariantReturnType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::util::Warner* warner);
	virtual ::com::sun::tools::javac::code::Type* createErrorType(::com::sun::tools::javac::code::Type* originalType);
	virtual ::com::sun::tools::javac::code::Type* createErrorType(::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::code::Type* originalType);
	virtual ::com::sun::tools::javac::code::Type* createErrorType(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* container, ::com::sun::tools::javac::code::Type* originalType);
	virtual ::com::sun::tools::javac::code::Type* createMethodTypeWithParameters(::com::sun::tools::javac::code::Type* original, ::com::sun::tools::javac::util::List* newParams);
	virtual ::com::sun::tools::javac::code::Type* createMethodTypeWithReturn(::com::sun::tools::javac::code::Type* original, ::com::sun::tools::javac::code::Type* newReturn);
	virtual ::com::sun::tools::javac::code::Type* createMethodTypeWithThrown(::com::sun::tools::javac::code::Type* original, ::com::sun::tools::javac::util::List* newThrown);
	virtual ::com::sun::tools::javac::code::Type* cvarLowerBound(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* cvarLowerBounds(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* cvarUpperBound(::com::sun::tools::javac::code::Type* t);
	virtual int32_t dimensions(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* directSupertypes(::com::sun::tools::javac::code::Type* t);
	virtual bool disjointType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool disjointTypes(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::List* ss);
	virtual ::com::sun::tools::javac::code::Type* elemtype(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* elemtypeOrType(::com::sun::tools::javac::code::Type* t);
	bool eraseNotNeeded(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* erasedSupertypes(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* erasure(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Type* erasure(::com::sun::tools::javac::code::Type* t, bool recurse);
	virtual ::com::sun::tools::javac::util::List* erasure(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* erasureRecursive(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* erasureRecursive(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Symbol* findDescriptorSymbol(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin);
	virtual ::com::sun::tools::javac::code::Type* findDescriptorType(::com::sun::tools::javac::code::Type* origin);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* firstUnimplementedAbstract(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* firstUnimplementedAbstractImpl(::com::sun::tools::javac::code::Symbol$ClassSymbol* impl, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::util::List* freshTypeVariables(::com::sun::tools::javac::util::List* types);
	virtual ::com::sun::tools::javac::util::List* functionalInterfaceBridges(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin);
	virtual ::com::sun::tools::javac::util::List* getBounds(::com::sun::tools::javac::code::Type$TypeVar* t);
	virtual ::com::sun::tools::javac::code::Attribute$RetentionPolicy* getRetention(::com::sun::tools::javac::code::Attribute$Compound* a);
	virtual ::com::sun::tools::javac::code::Attribute$RetentionPolicy* getRetention(::com::sun::tools::javac::code::Symbol$TypeSymbol* sym);
	bool giveWarning(::com::sun::tools::javac::code::Type* from, ::com::sun::tools::javac::code::Type* to);
	virtual ::com::sun::tools::javac::code::Type* glb(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* glb(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	::com::sun::tools::javac::code::Type* glbFlattened(::com::sun::tools::javac::util::List* flatBounds, ::com::sun::tools::javac::code::Type* errT);
	virtual bool hasSameArgs(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool hasSameArgs(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, bool strict);
	bool hasSameArgs(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::code::Types$TypeRelation* hasSameArgs);
	virtual bool hasSameBounds(::com::sun::tools::javac::code::Type$ForAll* t, ::com::sun::tools::javac::code::Type$ForAll* s);
	virtual int32_t hashCode(::com::sun::tools::javac::code::Type* t);
	virtual int32_t hashCode(::com::sun::tools::javac::code::Type* t, bool strict);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* implementation(::com::sun::tools::javac::code::Symbol$MethodSymbol* ms, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, bool checkResult, ::java::util::function::Predicate* implFilter);
	virtual ::com::sun::tools::javac::util::List* insert(::com::sun::tools::javac::util::List* cl, ::com::sun::tools::javac::code::Type* t, ::java::util::function::BiPredicate* shouldSkip);
	virtual ::com::sun::tools::javac::util::List* insert(::com::sun::tools::javac::util::List* cl, ::com::sun::tools::javac::code::Type* t);
	static ::com::sun::tools::javac::code::Types* instance(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::util::List* interfaceCandidates(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol$MethodSymbol* ms);
	virtual ::com::sun::tools::javac::util::List* interfaces(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* intersect(::com::sun::tools::javac::util::List* cl1, ::com::sun::tools::javac::util::List* cl2);
	virtual bool isArray(::com::sun::tools::javac::code::Type* t);
	virtual bool isAssignable(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isAssignable(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool isCaptureOf(::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::code::Type$WildcardType* t);
	virtual bool isCastable(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isCastable(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool isConvertible(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool isConvertible(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isDerivedRaw(::com::sun::tools::javac::code::Type* t);
	virtual bool isDerivedRaw(::com::sun::tools::javac::util::List* ts);
	virtual bool isDerivedRawInternal(::com::sun::tools::javac::code::Type* t);
	virtual bool isDirectSuperInterface(::com::sun::tools::javac::code::Symbol$TypeSymbol* isym, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin);
	virtual bool isFunctionalInterface(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	virtual bool isFunctionalInterface(::com::sun::tools::javac::code::Type* site);
	virtual bool isReifiable(::com::sun::tools::javac::code::Type* t);
	virtual bool isSameType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isSameTypes(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::List* ss);
	virtual bool isSameWildcard(::com::sun::tools::javac::code::Type$WildcardType* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isSignaturePolymorphic(::com::sun::tools::javac::code::Symbol$MethodSymbol* msym);
	virtual bool isSubSignature(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isSubSignature(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, bool strict);
	bool isSubtype(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isSubtype(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, bool capture);
	bool isSubtypeNoCapture(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isSubtypeUnchecked(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isSubtypeUnchecked(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool isSubtypeUnchecked(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::Warner* warn);
	bool isSubtypeUncheckedInternal(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, bool capture, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool isSubtypes(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::List* ss);
	virtual bool isSubtypesUnchecked(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::List* ss, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool isSuperType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool isUnbounded(::com::sun::tools::javac::code::Type* t);
	bool lambda$areDisjoint$1(::com::sun::tools::javac::code::Symbol$ClassSymbol* other, ::com::sun::tools::javac::code::Symbol* sym);
	::com::sun::tools::javac::code::Types$ClosureHolder* lambda$closureCollector$3(bool minClosure, ::java::util::function::BiPredicate* shouldSkip);
	static $String* lambda$membersClosure$2(::com::sun::tools::javac::code::Type* site);
	static bool lambda$new$4(::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2);
	static bool lambda$removeWildcards$0(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* lub(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* lub($Array<::com::sun::tools::javac::code::Type>* ts);
	virtual ::com::sun::tools::javac::code::Type$ArrayType* makeArrayType(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Type$WildcardType* makeExtendsWildcard(::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Type$TypeVar* formal);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* makeFunctionalInterfaceClass(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* target, int64_t cflags);
	virtual ::com::sun::tools::javac::code::Type$IntersectionClassType* makeIntersectionType(::com::sun::tools::javac::util::List* bounds);
	virtual ::com::sun::tools::javac::code::Type$IntersectionClassType* makeIntersectionType(::com::sun::tools::javac::util::List* bounds, bool allInterfaces);
	::com::sun::tools::javac::code::Type$WildcardType* makeSuperWildcard(::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Type$TypeVar* formal);
	virtual ::com::sun::tools::javac::code::Type* memberType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Scope$CompoundScope* membersClosure(::com::sun::tools::javac::code::Type* site, bool skipInterface);
	::com::sun::tools::javac::code::Type* merge(::com::sun::tools::javac::code::Type* c1, ::com::sun::tools::javac::code::Type* c2);
	virtual ::java::util::Optional* mergeAbstracts(::com::sun::tools::javac::util::List* ambiguousInOrder, ::com::sun::tools::javac::code::Type* site, bool sigCheck);
	virtual ::com::sun::tools::javac::util::List* newInstances(::com::sun::tools::javac::util::List* tvars);
	virtual void newRound();
	virtual bool notSoftSubtype(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool overrideEquivalent(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual bool overridesObjectMethod(::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, ::com::sun::tools::javac::code::Symbol* msym);
	bool pendingBridges(::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::code::Symbol$TypeSymbol* s);
	virtual ::com::sun::tools::javac::util::List* prune(::com::sun::tools::javac::util::List* methods);
	virtual int32_t rank(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Type* relaxBound(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* removeWildcards(::com::sun::tools::javac::code::Type* site);
	virtual bool resultSubtype(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::util::Warner* warner);
	virtual bool returnTypeSubstitutable(::com::sun::tools::javac::code::Type* r1, ::com::sun::tools::javac::code::Type* r2);
	virtual bool returnTypeSubstitutable(::com::sun::tools::javac::code::Type* r1, ::com::sun::tools::javac::code::Type* r2, ::com::sun::tools::javac::code::Type* r2res, ::com::sun::tools::javac::util::Warner* warner);
	::com::sun::tools::javac::code::Type* rewriteQuantifiers(::com::sun::tools::javac::code::Type* t, bool high, bool rewriteTypeVars);
	virtual void setBounds(::com::sun::tools::javac::code::Type$TypeVar* t, ::com::sun::tools::javac::util::List* bounds);
	virtual void setBounds(::com::sun::tools::javac::code::Type$TypeVar* t, ::com::sun::tools::javac::util::List* bounds, bool allInterfaces);
	bool sideCast(::com::sun::tools::javac::code::Type* from, ::com::sun::tools::javac::code::Type* to, ::com::sun::tools::javac::util::Warner* warn);
	bool sideCastFinal(::com::sun::tools::javac::code::Type* from, ::com::sun::tools::javac::code::Type* to, ::com::sun::tools::javac::util::Warner* warn);
	virtual ::com::sun::tools::javac::code::Type* skipTypeVars(::com::sun::tools::javac::code::Type* site, bool capture);
	virtual ::com::sun::tools::javac::util::List* subst(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::List* from, ::com::sun::tools::javac::util::List* to);
	virtual ::com::sun::tools::javac::code::Type* subst(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* from, ::com::sun::tools::javac::util::List* to);
	virtual ::com::sun::tools::javac::code::Type$TypeVar* substBound(::com::sun::tools::javac::code::Type$TypeVar* t, ::com::sun::tools::javac::util::List* from, ::com::sun::tools::javac::util::List* to);
	virtual ::com::sun::tools::javac::util::List* substBounds(::com::sun::tools::javac::util::List* tvars, ::com::sun::tools::javac::util::List* from, ::com::sun::tools::javac::util::List* to);
	::com::sun::tools::javac::util::List* superClosure(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual ::com::sun::tools::javac::code::Type* supertype(::com::sun::tools::javac::code::Type* t);
	using ::java::lang::Object::toString;
	virtual $String* toString(::com::sun::tools::javac::code::Type* t, ::java::util::Locale* locale);
	virtual $String* toString(::com::sun::tools::javac::code::Symbol* t, ::java::util::Locale* locale);
	virtual $String* toString(::com::sun::tools::javac::code::Type* t);
	$String* typaramsString(::com::sun::tools::javac::util::List* tvars);
	virtual ::com::sun::tools::javac::code::Type* unboxedType(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* unboxedTypeOrType(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::util::List* union$(::com::sun::tools::javac::util::List* cl1, ::com::sun::tools::javac::util::List* cl2, ::java::util::function::BiPredicate* shouldSkip);
	virtual ::com::sun::tools::javac::util::List* union$(::com::sun::tools::javac::util::List* cl1, ::com::sun::tools::javac::util::List* cl2);
	virtual ::com::sun::tools::javac::code::Type* upward(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* vars);
	virtual ::com::sun::tools::javac::code::Type* wildLowerBound(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* wildUpperBound(::com::sun::tools::javac::code::Type* t);
	static ::com::sun::tools::javac::util::Context$Key* typesKey;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::util::JavacMessages* messages = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	bool allowDefaultMethods = false;
	bool mapCapturesToBounds = false;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::util::List* warnStack = nullptr;
	::com::sun::tools::javac::util::Name* capturedName = nullptr;
	::com::sun::tools::javac::util::Warner* noWarnings = nullptr;
	::com::sun::tools::javac::code::Types$UnaryVisitor* isUnbounded$ = nullptr;
	::com::sun::tools::javac::code::Types$SimpleVisitor* asSub$ = nullptr;
	::com::sun::tools::javac::code::Types$DescriptorCache* descCache = nullptr;
	::java::util::function::Predicate* bridgeFilter = nullptr;
	::com::sun::tools::javac::code::Types$TypeRelation* isSubtype$ = nullptr;
	::com::sun::tools::javac::code::Types$TypeRelation* isSameTypeVisitor = nullptr;
	::com::sun::tools::javac::code::Types$TypeRelation* containsType$ = nullptr;
	::com::sun::tools::javac::code::Types$TypeRelation* isCastable$ = nullptr;
	::com::sun::tools::javac::code::Types$TypeRelation* disjointType$ = nullptr;
	::com::sun::tools::javac::code::Types$TypeMapping* cvarLowerBoundMapping = nullptr;
	::com::sun::tools::javac::code::Types$UnaryVisitor* isReifiable$ = nullptr;
	::com::sun::tools::javac::code::Types$TypeMapping* elemTypeFun = nullptr;
	::com::sun::tools::javac::code::Types$SimpleVisitor* asSuper$ = nullptr;
	::com::sun::tools::javac::code::Types$SimpleVisitor* memberType$ = nullptr;
	::com::sun::tools::javac::code::Types$TypeMapping* erasure$ = nullptr;
	::com::sun::tools::javac::code::Types$UnaryVisitor* supertype$ = nullptr;
	::com::sun::tools::javac::code::Types$UnaryVisitor* interfaces$ = nullptr;
	::com::sun::tools::javac::code::Types$UnaryVisitor* directSupertypes$ = nullptr;
	::java::util::Map* isDerivedRawCache = nullptr;
	::com::sun::tools::javac::code::Types$UnaryVisitor* classBound$ = nullptr;
	::com::sun::tools::javac::code::Types$ImplementationCache* implCache = nullptr;
	::com::sun::tools::javac::code::Types$MembersClosureCache* membersCache = nullptr;
	::com::sun::tools::javac::code::Types$CandidatesCache* candidatesCache = nullptr;
	::com::sun::tools::javac::code::Types$TypeRelation* hasSameArgs_strict = nullptr;
	::com::sun::tools::javac::code::Types$TypeRelation* hasSameArgs_nonstrict = nullptr;
	static ::com::sun::tools::javac::code::Types$TypeMapping* newInstanceFun;
	::com::sun::tools::javac::code::Types$MapVisitor* methodWithParameters = nullptr;
	::com::sun::tools::javac::code::Types$MapVisitor* methodWithThrown = nullptr;
	::com::sun::tools::javac::code::Types$MapVisitor* methodWithReturn = nullptr;
	::java::util::Map* closureCache = nullptr;
	::java::util::function::BiPredicate* basicClosureSkip = nullptr;
	::java::util::Set* mergeCache = nullptr;
	::com::sun::tools::javac::code::Type* arraySuperType$ = nullptr;
	static ::com::sun::tools::javac::code::Types$HashCodeVisitor* hashCodeVisitor;
	static ::com::sun::tools::javac::code::Types$HashCodeVisitor* hashCodeStrictVisitor;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types_h_