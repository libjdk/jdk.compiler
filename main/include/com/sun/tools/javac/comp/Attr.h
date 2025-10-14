#ifndef _com_sun_tools_javac_comp_Attr_h_
#define _com_sun_tools_javac_comp_Attr_h_
//$ class com.sun.tools.javac.comp.Attr
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class TreeVisitor;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredLintHandler;
					class Kinds$KindSelector;
					class Preview;
					class Scope$WriteableScope;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
					class Symbol$RecordComponent;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class TypeAnnotations;
					class TypeTag;
					class Types;
					class Types$MapVisitor;
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
					class Analyzer;
					class Annotate;
					class ArgumentAttr;
					class Attr$ResultInfo;
					class Attr$TargetInfo;
					class AttrRecover;
					class Check;
					class Check$CheckContext;
					class ConstFold;
					class DeferredAttr;
					class Enter;
					class Env;
					class Flow;
					class Infer;
					class InferenceContext;
					class MatchBindingsComputer;
					class MatchBindingsComputer$MatchBindings;
					class MemberEnter;
					class Operators;
					class Resolve;
					class TypeEnter;
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
				namespace jvm {
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
					class JCTree$JCAnnotatedType;
					class JCTree$JCAnnotation;
					class JCTree$JCArrayAccess;
					class JCTree$JCArrayTypeTree;
					class JCTree$JCAssert;
					class JCTree$JCAssign;
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
					class JCTree$JCBindingPattern;
					class JCTree$JCBlock;
					class JCTree$JCBreak;
					class JCTree$JCCase;
					class JCTree$JCCaseLabel;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCConditional;
					class JCTree$JCContinue;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCErroneous;
					class JCTree$JCExpression;
					class JCTree$JCExpressionStatement;
					class JCTree$JCFieldAccess;
					class JCTree$JCForLoop;
					class JCTree$JCFunctionalExpression;
					class JCTree$JCGuardPattern;
					class JCTree$JCIdent;
					class JCTree$JCIf;
					class JCTree$JCImport;
					class JCTree$JCInstanceOf;
					class JCTree$JCLabeledStatement;
					class JCTree$JCLambda;
					class JCTree$JCLiteral;
					class JCTree$JCMemberReference;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCParens;
					class JCTree$JCParenthesizedPattern;
					class JCTree$JCPolyExpression;
					class JCTree$JCPrimitiveTypeTree;
					class JCTree$JCReturn;
					class JCTree$JCSkip;
					class JCTree$JCSwitch;
					class JCTree$JCSwitchExpression;
					class JCTree$JCSynchronized;
					class JCTree$JCThrow;
					class JCTree$JCTry;
					class JCTree$JCTypeApply;
					class JCTree$JCTypeCast;
					class JCTree$JCTypeIntersection;
					class JCTree$JCTypeParameter;
					class JCTree$JCTypeUnion;
					class JCTree$JCUnary;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$JCWildcard;
					class JCTree$JCYield;
					class JCTree$Tag;
					class TreeMaker;
					class TreeTranslator;
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
					class Dependencies;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Factory;
					class JCDiagnostic$Fragment;
					class List;
					class ListBuffer;
					class Log;
					class Name;
					class Names;
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Attr : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Attr, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Attr();
	void init$(::com::sun::tools::javac::util::Context* context);
	static void addVars(::com::sun::tools::javac::util::List* stats, ::com::sun::tools::javac::code::Scope$WriteableScope* switchScope);
	virtual ::com::sun::tools::javac::code::Type* adjustMethodReturnType(::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::code::Type* qualifierType, ::com::sun::tools::javac::util::Name* methodName, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::code::Type* restype);
	virtual void attrib(::com::sun::tools::javac::comp::Env* env);
	virtual void attribAnnotationTypes(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::util::List* attribAnyTypes(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Kinds$KindSelector* attribArgs(::com::sun::tools::javac::code::Kinds$KindSelector* initialKind, ::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::ListBuffer* argtypes);
	virtual ::com::sun::tools::javac::code::Type* attribBase(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, bool classExpected, bool interfaceExpected, bool checkExtensible);
	virtual void attribClass(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void attribClass(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void attribClassBody(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::code::Type* attribExpr(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* pt);
	virtual ::com::sun::tools::javac::code::Type* attribExpr(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* attribExprToTree(::com::sun::tools::javac::tree::JCTree* expr, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree);
	virtual ::com::sun::tools::javac::util::List* attribExprs(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* pt);
	virtual ::com::sun::tools::javac::code::Symbol* attribIdent(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* topLevel);
	virtual ::com::sun::tools::javac::code::Symbol* attribIdent(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Type* attribIdentAsEnumType(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCIdent* id);
	virtual ::com::sun::tools::javac::code::Type* attribImportQualifier(::com::sun::tools::javac::tree::JCTree$JCImport* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual $Object* attribLazyConstantValue(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* variable, ::com::sun::tools::javac::code::Type* type);
	virtual void attribModule(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	virtual void attribModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	virtual void attribPackage(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$PackageSymbol* p);
	virtual void attribPackage(::com::sun::tools::javac::code::Symbol$PackageSymbol* p);
	virtual ::com::sun::tools::javac::code::Type* attribStat(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* attribStatToTree(::com::sun::tools::javac::tree::JCTree* stmt, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree);
	virtual void attribStats(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::comp::Env* attribToTree(::com::sun::tools::javac::tree::JCTree* root, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual void attribTopLevel(::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Type* attribTree(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual ::com::sun::tools::javac::code::Type* attribType(::com::sun::tools::javac::tree::JCTree* node, ::com::sun::tools::javac::code::Symbol$TypeSymbol* sym);
	virtual ::com::sun::tools::javac::code::Type* attribType(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Type* attribType(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* pt);
	virtual void attribTypeVariables(::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::comp::Env* env, bool checkCyclic);
	virtual ::com::sun::tools::javac::util::List* attribTypes(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* bindingEnv(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::List* bindings);
	virtual ::com::sun::tools::javac::comp::Env* bindingEnv(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* newTree, ::com::sun::tools::javac::util::List* bindings);
	virtual void breakTreeFound(::com::sun::tools::javac::comp::Env* env);
	bool breaksOutOf(::com::sun::tools::javac::tree::JCTree* loop, ::com::sun::tools::javac::tree::JCTree* body);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* canInferLocalVarType(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree);
	::com::sun::tools::javac::code::Type* capture(::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::code::Type* check(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Kinds$KindSelector* ownkind, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	void checkAccessibleTypes(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, $Array<::com::sun::tools::javac::code::Type>* ts);
	void checkAccessibleTypes(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::util::List* ts);
	virtual void checkAssignable(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* v, ::com::sun::tools::javac::tree::JCTree* base, ::com::sun::tools::javac::comp::Env* env);
	virtual void checkAutoCloseable(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* resource);
	virtual ::com::sun::tools::javac::code::Type* checkBase(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, bool classExpected, bool interfaceExpected, bool checkExtensible);
	void checkCaseLabelDominated(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::List* coveredTypes, ::com::sun::tools::javac::code::Type* patternType);
	bool checkCastablePattern(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* exprType, ::com::sun::tools::javac::code::Type* pattType);
	void checkEnumInitializer(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual bool checkExConstraints(::com::sun::tools::javac::util::List* thrownByFuncExpr, ::com::sun::tools::javac::util::List* thrownAtFuncType, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual bool checkFirstConstructorStat(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree, ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* enclMethod, bool error);
	virtual ::com::sun::tools::javac::code::Type* checkId(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual ::com::sun::tools::javac::code::Type* checkIdInternal(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Type* pt, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	void checkInit(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol$VarSymbol* v, bool onlyWarning);
	virtual ::com::sun::tools::javac::code::Type* checkIntersection(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::List* bounds);
	virtual void checkLambdaCompatible(::com::sun::tools::javac::tree::JCTree$JCLambda* tree, ::com::sun::tools::javac::code::Type* descriptor, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	virtual ::com::sun::tools::javac::code::Type* checkMethod(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::List* argtrees, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Type* checkMethodIdInternal(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual void checkReferenceCompatible(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree, ::com::sun::tools::javac::code::Type* descriptor, ::com::sun::tools::javac::code::Type* refType, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext, bool speculativeAttr);
	void checkSerialVersionUID(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Type* coerce(::com::sun::tools::javac::code::Type* etype, ::com::sun::tools::javac::code::Type* ttype);
	virtual ::com::sun::tools::javac::code::Type* condType(::com::sun::tools::javac::util::List* positions, ::com::sun::tools::javac::util::List* condTypes);
	virtual ::com::sun::tools::javac::comp::Check$CheckContext* conditionalContext(::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	virtual ::com::sun::tools::javac::comp::Env* copyEnv(::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* copyScope(::com::sun::tools::javac::code::Scope$WriteableScope* sc);
	virtual ::com::sun::tools::javac::comp::Check$CheckContext* diamondContext(::com::sun::tools::javac::tree::JCTree$JCNewClass* clazz, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	virtual ::com::sun::tools::javac::comp::Env* enclosingInitEnv(::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::code::Symbol* enumConstant(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* enumType);
	::com::sun::tools::javac::code::Type* fallbackDescriptorType(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	::com::sun::tools::javac::tree::JCTree* findJumpTarget(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::tree::JCTree$Tag* tag, ::com::sun::tools::javac::util::Name* label, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::util::Pair* findJumpTargetNoError(::com::sun::tools::javac::tree::JCTree$Tag* tag, ::com::sun::tools::javac::util::Name* label, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* getDiagnosticPosition(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::comp::Attr$TargetInfo* getTargetInfo(::com::sun::tools::javac::tree::JCTree$JCPolyExpression* that, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::util::List* explicitParamTypes);
	void handleSwitch(::com::sun::tools::javac::tree::JCTree* switchTree, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases, ::java::util::function::BiConsumer* attribCase);
	static ::com::sun::tools::javac::comp::Attr* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isAssignableAsBlankFinal(::com::sun::tools::javac::code::Symbol$VarSymbol* v, ::com::sun::tools::javac::comp::Env* env);
	bool isBooleanOrNumeric(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	bool isNonArgsMethodInObject(::com::sun::tools::javac::util::Name* name);
	virtual bool isSerializable(::com::sun::tools::javac::code::Type* t);
	bool isStaticEnumField(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual bool isStaticReference(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isType(::com::sun::tools::javac::code::Symbol* sym);
	bool isValueBased(::com::sun::tools::javac::code::Type* t);
	static bool lambda$attribClass$33(::com::sun::tools::javac::code::Symbol* subTypeSym, ::com::sun::tools::javac::tree::JCTree$JCExpression* permittedExpr);
	static bool lambda$attribClass$34(::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::code::Type* d);
	static bool lambda$attribClass$35(::com::sun::tools::javac::code::Type* s);
	static ::com::sun::tools::javac::code::Symbol$ClassSymbol* lambda$attribClass$36(::com::sun::tools::javac::code::Type* s);
	static bool lambda$attribClass$37(::com::sun::tools::javac::code::Type* s);
	void lambda$check$0(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Kinds$KindSelector* ownkind, ::com::sun::tools::javac::comp::InferenceContext* instantiatedContext);
	void lambda$checkAccessibleTypes$24(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::comp::InferenceContext* solvedContext);
	static bool lambda$checkExConstraints$26(::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::code::Type* e);
	bool lambda$checkExConstraints$27(::com::sun::tools::javac::code::Type* e);
	void lambda$checkExConstraints$28(::com::sun::tools::javac::code::Type* checkedEx, ::com::sun::tools::javac::code::Type* nonProper);
	void lambda$checkExConstraints$29(::com::sun::tools::javac::util::List* nonProperAsUndet, ::com::sun::tools::javac::code::Type* checkedEx);
	static bool lambda$checkExConstraints$30(::com::sun::tools::javac::code::Type* t);
	static void lambda$checkExConstraints$31(::com::sun::tools::javac::code::Type* t);
	static void lambda$checkReferenceCompatible$25(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree, ::com::sun::tools::javac::code::Type* refType, ::com::sun::tools::javac::comp::InferenceContext* instantiatedContext);
	bool lambda$condType$10(::com::sun::tools::javac::code::Type* first, ::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Type* lambda$condType$11(::com::sun::tools::javac::code::Type* t);
	static bool lambda$condType$12(::com::sun::tools::javac::code::Type* t);
	static bool lambda$condType$13(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Type* t);
	bool lambda$condType$14(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Type* t);
	bool lambda$condType$15(::com::sun::tools::javac::code::Type* candidate, ::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Type* lambda$condType$16(::com::sun::tools::javac::code::Type* t);
	bool lambda$condType$18(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Type* lambda$condType$19(::java::util::Iterator* posIt, ::com::sun::tools::javac::code::Type* t);
	static ::com::sun::tools::javac::code::Type* lambda$condType$20(::com::sun::tools::javac::code::Type* t);
	static bool lambda$condType$21(::com::sun::tools::javac::code::Type* t);
	static ::java::util::stream::Stream* lambda$handleSwitch$8(::com::sun::tools::javac::tree::JCTree$JCCase* c);
	static bool lambda$handleSwitch$9(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* l);
	static bool lambda$isNonArgsMethodInObject$5(::com::sun::tools::javac::code::Symbol* s);
	void lambda$setFunctionalInfo$32(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression* fExpr, ::com::sun::tools::javac::code::Type* pt, ::com::sun::tools::javac::code::Type* descriptorType, ::com::sun::tools::javac::code::Type* primaryTarget, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	void lambda$visitAnonymousClassDefinition$23(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfoForClassDefinition, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* cdef, ::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::code::Kinds$KindSelector* pkind, ::com::sun::tools::javac::comp::InferenceContext* instantiatedContext);
	static bool lambda$visitMethodDef$1(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree, ::com::sun::tools::javac::code::Symbol$RecordComponent* rc);
	static ::com::sun::tools::javac::code::Type* lambda$visitMethodDef$2(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	static ::com::sun::tools::javac::util::Name* lambda$visitMethodDef$3(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	static ::com::sun::tools::javac::util::Name* lambda$visitMethodDef$4(::com::sun::tools::javac::code::Symbol$VarSymbol* p);
	static void lambda$visitNewClass$22(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree, ::com::sun::tools::javac::comp::InferenceContext* instantiatedContext);
	void lambda$visitSwitch$6(::com::sun::tools::javac::tree::JCTree$JCCase* c, ::com::sun::tools::javac::comp::Env* caseEnv);
	void lambda$visitSwitchExpression$7(::com::sun::tools::javac::comp::Attr$ResultInfo* condInfo, ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree, ::com::sun::tools::javac::util::ListBuffer* caseTypePositions, ::com::sun::tools::javac::util::ListBuffer* caseTypes, ::com::sun::tools::javac::tree::JCTree$JCCase* c, ::com::sun::tools::javac::comp::Env* caseEnv);
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* lambdaBodyResult(::com::sun::tools::javac::tree::JCTree$JCLambda* that, ::com::sun::tools::javac::code::Type* descriptor, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual ::com::sun::tools::javac::comp::Env* lambdaEnv(::com::sun::tools::javac::tree::JCTree$JCLambda* that, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Type* litType(::com::sun::tools::javac::code::TypeTag* tag);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeNullCheck(::com::sun::tools::javac::tree::JCTree$JCExpression* arg);
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* memberReferenceQualifierResult(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree);
	virtual ::com::sun::tools::javac::code::Type* newMethodTemplate(::com::sun::tools::javac::code::Type* restype, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes);
	virtual ::com::sun::tools::javac::code::Kinds$KindSelector* pkind();
	virtual void postAttr(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void preFlow(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void preFlow(::com::sun::tools::javac::tree::JCTree$JCLambda* tree);
	virtual bool primitiveOrBoxed(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* pt();
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* removeClinit(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	::com::sun::tools::javac::code::Symbol* selectSym(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree, ::com::sun::tools::javac::code::Symbol* location, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	void setFunctionalInfo(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression* fExpr, ::com::sun::tools::javac::code::Type* pt, ::com::sun::tools::javac::code::Type* descriptorType, ::com::sun::tools::javac::code::Type* primaryTarget, ::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	virtual void setPackageSymbols(::com::sun::tools::javac::tree::JCTree$JCExpression* pid, ::com::sun::tools::javac::code::Symbol* pkg);
	void setSyntheticVariableType(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree, ::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::comp::Check$CheckContext* switchExpressionContext(::com::sun::tools::javac::comp::Check$CheckContext* checkContext);
	virtual ::com::sun::tools::javac::code::Symbol* thisSym(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Env* env);
	virtual void validateTypeAnnotations(::com::sun::tools::javac::tree::JCTree* tree, bool sigOnly);
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	void visitAnonymousClassDefinition(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::code::Type* clazztype, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* cdef, ::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::code::Kinds$KindSelector* pkind);
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitAssert(::com::sun::tools::javac::tree::JCTree$JCAssert* tree) override;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitContinue(::com::sun::tools::javac::tree::JCTree$JCContinue* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitErroneous(::com::sun::tools::javac::tree::JCTree$JCErroneous* tree) override;
	virtual void visitExec(::com::sun::tools::javac::tree::JCTree$JCExpressionStatement* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitGuardPattern(::com::sun::tools::javac::tree::JCTree$JCGuardPattern* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitImport(::com::sun::tools::javac::tree::JCTree$JCImport* tree) override;
	virtual void visitIndexed(::com::sun::tools::javac::tree::JCTree$JCArrayAccess* tree) override;
	virtual void visitLabelled(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* that) override;
	virtual void visitLiteral(::com::sun::tools::javac::tree::JCTree$JCLiteral* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* tree) override;
	virtual void visitParenthesizedPattern(::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* that) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitSkip(::com::sun::tools::javac::tree::JCTree$JCSkip* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitSynchronized(::com::sun::tools::javac::tree::JCTree$JCSynchronized* tree) override;
	virtual void visitThrow(::com::sun::tools::javac::tree::JCTree$JCThrow* tree) override;
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* tree) override;
	virtual void visitTypeArray(::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	virtual void visitTypeIdent(::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree* tree) override;
	virtual void visitTypeIntersection(::com::sun::tools::javac::tree::JCTree$JCTypeIntersection* tree) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* tree) override;
	virtual void visitTypeTest(::com::sun::tools::javac::tree::JCTree$JCInstanceOf* tree) override;
	virtual void visitTypeUnion(::com::sun::tools::javac::tree::JCTree$JCTypeUnion* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	virtual void visitWildcard(::com::sun::tools::javac::tree::JCTree$JCWildcard* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	static ::com::sun::tools::javac::util::Context$Key* attrKey;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::comp::Operators* operators = nullptr;
	::com::sun::tools::javac::comp::Infer* infer = nullptr;
	::com::sun::tools::javac::comp::Analyzer* analyzer = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr* deferredAttr = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::Flow* flow = nullptr;
	::com::sun::tools::javac::comp::MemberEnter* memberEnter = nullptr;
	::com::sun::tools::javac::comp::TypeEnter* typeEnter = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::comp::ConstFold* cfolder = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::jvm::Target* target = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::code::TypeAnnotations* typeAnnotations = nullptr;
	::com::sun::tools::javac::code::DeferredLintHandler* deferredLintHandler = nullptr;
	::com::sun::tools::javac::comp::TypeEnvs* typeEnvs = nullptr;
	::com::sun::tools::javac::util::Dependencies* dependencies = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::comp::ArgumentAttr* argumentAttr = nullptr;
	::com::sun::tools::javac::comp::MatchBindingsComputer* matchBindingsComputer = nullptr;
	::com::sun::tools::javac::comp::AttrRecover* attrRecover = nullptr;
	bool allowPoly = false;
	bool allowTypeAnnos = false;
	bool allowLambda = false;
	bool allowDefaultMethods = false;
	bool allowStaticInterfaceMethods = false;
	bool allowReifiableTypesInInstanceof = false;
	bool allowRecords = false;
	bool allowPatternSwitch = false;
	bool useBeforeDeclarationWarning = false;
	$String* sourceName = nullptr;
	::com::sun::source::tree::TreeVisitor* identAttributer = nullptr;
	::com::sun::tools::javac::tree::JCTree* breakTree = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* statInfo = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* varAssignmentInfo = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* methodAttrInfo = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* unknownExprInfo = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* unknownTypeInfo = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* unknownTypeExprInfo = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* recoveryInfo = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo = nullptr;
	::com::sun::tools::javac::code::Type* result = nullptr;
	::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* matchBindings = nullptr;
	::com::sun::tools::javac::tree::TreeTranslator* removeClassParams = nullptr;
	static $Array<::com::sun::tools::javac::code::TypeTag>* primitiveTags;
	::com::sun::tools::javac::code::Types$MapVisitor* targetChecker = nullptr;
	::java::util::Map* clinits = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr_h_