#ifndef _com_sun_tools_javac_comp_Lower_h_
#define _com_sun_tools_javac_comp_Lower_h_
//$ class com.sun.tools.javac.comp.Lower
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Scope$WriteableScope;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodHandleSymbol;
					class Symbol$MethodSymbol;
					class Symbol$OperatorSymbol;
					class Symbol$RecordComponent;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
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
					class Check;
					class ConstFold;
					class Env;
					class Lower$ClassMap;
					class Lower$EnumMapping;
					class Lower$TreeBuilder;
					class Operators;
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
				namespace jvm {
					class PoolConstant$LoadableConstant;
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
				namespace main {
					class Option$PkgInfo;
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
					class EndPosTable;
					class JCTree;
					class JCTree$JCAnnotation;
					class JCTree$JCArrayAccess;
					class JCTree$JCAssert;
					class JCTree$JCAssign;
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
					class JCTree$JCBlock;
					class JCTree$JCBreak;
					class JCTree$JCCase;
					class JCTree$JCCaseLabel;
					class JCTree$JCClassDecl;
					class JCTree$JCConditional;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCExpression;
					class JCTree$JCFieldAccess;
					class JCTree$JCForLoop;
					class JCTree$JCIdent;
					class JCTree$JCIf;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCPackageDecl;
					class JCTree$JCParens;
					class JCTree$JCReturn;
					class JCTree$JCStatement;
					class JCTree$JCSwitch;
					class JCTree$JCSwitchExpression;
					class JCTree$JCTry;
					class JCTree$JCTypeCast;
					class JCTree$JCUnary;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$JCYield;
					class JCTree$LetExpr;
					class JCTree$Tag;
					class JCTree$Visitor;
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
					class JCDiagnostic$DiagnosticPosition;
					class List;
					class ListBuffer;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Map;
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

class $import Lower : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(Lower, 0, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	Lower();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* abstractLval(::com::sun::tools::javac::tree::JCTree$JCExpression* lval, ::com::sun::tools::javac::comp::Lower$TreeBuilder* builder);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* abstractRval(::com::sun::tools::javac::tree::JCTree$JCExpression* rval, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::comp::Lower$TreeBuilder* builder);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* abstractRval(::com::sun::tools::javac::tree::JCTree$JCExpression* rval, ::com::sun::tools::javac::comp::Lower$TreeBuilder* builder);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* access(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* enclOp, bool refSuper);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* access(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* accessBase(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* accessClass(::com::sun::tools::javac::code::Symbol* sym, bool protAccess, ::com::sun::tools::javac::tree::JCTree* tree);
	static int32_t accessCode(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree* enclOp);
	virtual ::com::sun::tools::javac::code::Symbol* accessConstructor(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* constr);
	virtual ::com::sun::tools::javac::tree::JCTree* accessConstructorDef(int32_t pos, ::com::sun::tools::javac::code::Symbol* constr, ::com::sun::tools::javac::code::Symbol$MethodSymbol* accessor);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* accessConstructorTag();
	virtual ::com::sun::tools::javac::tree::JCTree* accessDef(int32_t pos, ::com::sun::tools::javac::code::Symbol* vsym, ::com::sun::tools::javac::code::Symbol$MethodSymbol* accessor, int32_t acode);
	virtual ::com::sun::tools::javac::util::Name* accessName(int32_t anum, int32_t acode);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* accessSymbol(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree* enclOp, bool protAccess, bool refSuper);
	::com::sun::tools::javac::util::List* addDefaultIfNeeded(::com::sun::tools::javac::util::List* cases);
	void addPrunedInfo(::com::sun::tools::javac::tree::JCTree* tree);
	$String* argsTypeSig(::com::sun::tools::javac::util::List* typeList);
	::com::sun::tools::javac::tree::JCTree$JCExpression* assertFlagTest(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	::com::sun::tools::javac::code::Symbol$ClassSymbol* assertionsDisabledClass();
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* binaryAccessOperator(int32_t acode, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual ::com::sun::tools::javac::util::List* boxArgs(::com::sun::tools::javac::util::List* parameters, ::com::sun::tools::javac::util::List* _args, ::com::sun::tools::javac::code::Type* varargsElement);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* boxIfNeeded(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* boxPrimitive(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* boxPrimitive(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* box);
	void checkAccessConstructorTags();
	virtual void checkConflicts(::com::sun::tools::javac::util::List* translatedTrees);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* classDef(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	::com::sun::tools::javac::tree::JCTree$JCExpression* classOf(::com::sun::tools::javac::tree::JCTree* clazz);
	::com::sun::tools::javac::tree::JCTree$JCExpression* classOfType(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	::com::sun::tools::javac::tree::JCTree$JCExpression* convert(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* pt);
	void createInfoClass(::com::sun::tools::javac::util::List* annots, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void enterSynthetic(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope$WriteableScope* s);
	::java::lang::Boolean* expValue(::com::sun::tools::javac::tree::JCTree* exp);
	::java::lang::Boolean* expValueIsNull(bool eq, ::com::sun::tools::javac::tree::JCTree* t);
	virtual ::com::sun::tools::javac::util::List* freevarDefs(int32_t pos, ::com::sun::tools::javac::util::List* freevars, ::com::sun::tools::javac::code::Symbol* owner);
	virtual ::com::sun::tools::javac::util::List* freevarDefs(int32_t pos, ::com::sun::tools::javac::util::List* freevars, ::com::sun::tools::javac::code::Symbol* owner, int64_t additionalFlags);
	virtual ::com::sun::tools::javac::util::List* freevars(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::util::List* generateMandatedAccessors(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual ::com::sun::tools::javac::tree::JCTree* generateRecordMethod(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* vars, $Array<::com::sun::tools::javac::code::Symbol$MethodHandleSymbol>* getterMethHandles);
	void handleSwitch(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases);
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* initField(int32_t pos, ::com::sun::tools::javac::code::Symbol* rhs, ::com::sun::tools::javac::code::Symbol* lhs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* initOuterThis(int32_t pos);
	static ::com::sun::tools::javac::comp::Lower* instance(::com::sun::tools::javac::util::Context* context);
	bool isFalse(::com::sun::tools::javac::tree::JCTree* exp);
	bool isTranslatedClassAvailable(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	bool isTrue(::com::sun::tools::javac::tree::JCTree* exp);
	::com::sun::tools::javac::tree::JCTree$JCExpression* lambda$abstractLval$1(::com::sun::tools::javac::comp::Lower$TreeBuilder* builder, ::com::sun::tools::javac::tree::JCTree$JCFieldAccess* s, ::com::sun::tools::javac::tree::JCTree$JCExpression* selected);
	::com::sun::tools::javac::tree::JCTree$JCExpression* lambda$abstractLval$2(::com::sun::tools::javac::tree::JCTree$JCExpression* indexed, ::com::sun::tools::javac::tree::JCTree$JCArrayAccess* i, ::com::sun::tools::javac::comp::Lower$TreeBuilder* builder, ::com::sun::tools::javac::tree::JCTree$JCExpression* index);
	::com::sun::tools::javac::tree::JCTree$JCExpression* lambda$abstractLval$3(::com::sun::tools::javac::tree::JCTree$JCArrayAccess* i, ::com::sun::tools::javac::comp::Lower$TreeBuilder* builder, ::com::sun::tools::javac::tree::JCTree$JCExpression* indexed);
	static ::java::util::stream::Stream* lambda$addDefaultIfNeeded$13(::com::sun::tools::javac::tree::JCTree$JCCase* c);
	static bool lambda$addDefaultIfNeeded$14(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* p);
	static bool lambda$binaryAccessOperator$0(::com::sun::tools::javac::tree::JCTree$Tag* tag, int32_t acode, ::com::sun::tools::javac::code::Symbol$OperatorSymbol* op);
	static bool lambda$generateMandatedAccessors$4(::com::sun::tools::javac::code::Symbol$RecordComponent* rc);
	static bool lambda$generateMandatedAccessors$5(::com::sun::tools::javac::code::Symbol$RecordComponent* rc, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* f);
	::com::sun::tools::javac::tree::JCTree$JCMethodDecl* lambda$generateMandatedAccessors$6(::com::sun::tools::javac::util::List* fields, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::code::Symbol$RecordComponent* rc);
	static ::com::sun::tools::javac::util::Name* lambda$generateRecordMethod$8(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	::com::sun::tools::javac::tree::JCTree$JCExpression* lambda$lowerBoxedPostop$11(::com::sun::tools::javac::tree::JCTree$JCUnary* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* tmp1, bool cast, ::com::sun::tools::javac::tree::JCTree$JCExpression* tmp2);
	::com::sun::tools::javac::tree::JCTree$JCExpression* lambda$lowerBoxedPostop$12(::com::sun::tools::javac::tree::JCTree$JCUnary* tree, bool cast, ::com::sun::tools::javac::tree::JCTree$JCExpression* tmp1);
	static bool lambda$recordVars$7(::com::sun::tools::javac::code::Symbol* s);
	::com::sun::tools::javac::tree::JCTree$JCExpression* lambda$visitAssignop$10(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree, bool boxingReq, ::com::sun::tools::javac::tree::JCTree$JCExpression* lhs);
	static bool lambda$visitEnumSwitch$15(::com::sun::tools::javac::tree::JCTree$JCCase* c);
	static bool lambda$visitMethodDefInternal$9(::com::sun::tools::javac::code::Symbol$VarSymbol* field, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* p);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* loadFreevar(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual ::com::sun::tools::javac::util::List* loadFreevars(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::List* freevars);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* lookupMethod(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* qual, ::com::sun::tools::javac::util::List* args);
	::com::sun::tools::javac::code::Symbol* lookupSynthetic(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Scope* s);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* lowerBoxedPostop(::com::sun::tools::javac::tree::JCTree$JCUnary* tree);
	virtual void makeAccessible(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAssignOp* makeAssignop(::com::sun::tools::javac::tree::JCTree$Tag* optag, ::com::sun::tools::javac::tree::JCTree* lhs, ::com::sun::tools::javac::tree::JCTree* rhs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCBinary* makeBinary(::com::sun::tools::javac::tree::JCTree$Tag* optag, ::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs);
	::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* makeCall(::com::sun::tools::javac::tree::JCTree$JCExpression* left, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* args);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeComma(::com::sun::tools::javac::tree::JCTree$JCExpression* expr1, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr2);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* makeEmptyClass(int64_t flags, ::com::sun::tools::javac::code::Symbol$ClassSymbol* owner);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* makeEmptyClass(int64_t flags, ::com::sun::tools::javac::code::Symbol$ClassSymbol* owner, ::com::sun::tools::javac::util::Name* flatname, bool addToDefs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCFieldAccess* makeIndyQualifier(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::code::Symbol$MethodSymbol* msym, ::com::sun::tools::javac::util::List* staticArgTypes, $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>* staticArgValues, ::com::sun::tools::javac::util::Name* bootstrapName, ::com::sun::tools::javac::util::Name* argName, bool isStatic);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeLit(::com::sun::tools::javac::code::Type* type, Object$* value);
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewClass* makeNewClass(::com::sun::tools::javac::code::Type* ctype, ::com::sun::tools::javac::util::List* args);
	::com::sun::tools::javac::tree::JCTree$JCExpression* makeNonNullCheck(::com::sun::tools::javac::tree::JCTree$JCExpression* expression);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeNull();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeOuterThis(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c);
	::com::sun::tools::javac::tree::JCTree$JCVariableDecl* makeOuterThisVarDecl(int32_t pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	::com::sun::tools::javac::code::Symbol$VarSymbol* makeOuterThisVarSymbol(::com::sun::tools::javac::code::Symbol* owner, int64_t flags);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeOwnerThis(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym, bool preciseMatch);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeOwnerThisN(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym, bool preciseMatch);
	::com::sun::tools::javac::tree::JCTree$JCStatement* makeResourceCloseInvocation(::com::sun::tools::javac::tree::JCTree$JCExpression* resource);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeString(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	::com::sun::tools::javac::util::Name* makeSyntheticName(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Scope* s);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeThis(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$TypeSymbol* c);
	::java::util::Map* makeTranslationMap(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree);
	::com::sun::tools::javac::tree::JCTree$JCBlock* makeTwrBlock(::com::sun::tools::javac::util::List* resources, ::com::sun::tools::javac::tree::JCTree$JCBlock* block, int32_t depth);
	virtual ::com::sun::tools::javac::tree::JCTree* makeTwrTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree);
	virtual ::com::sun::tools::javac::tree::JCTree$JCUnary* makeUnary(::com::sun::tools::javac::tree::JCTree$Tag* optag, ::com::sun::tools::javac::tree::JCTree$JCExpression* arg);
	virtual ::com::sun::tools::javac::tree::TreeMaker* make_at(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual ::com::sun::tools::javac::comp::Lower$EnumMapping* mapForEnum(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$TypeSymbol* enumClass);
	bool needPackageInfoClass(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* pd);
	virtual bool needsPrivateAccess(::com::sun::tools::javac::code::Symbol* sym);
	virtual bool needsProtectedAccess(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree* tree);
	::com::sun::tools::javac::code::Symbol$ClassSymbol* outerCacheClass();
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* outerThisDef(int32_t pos, ::com::sun::tools::javac::code::Symbol$MethodSymbol* owner);
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* outerThisDef(int32_t pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* owner);
	virtual ::com::sun::tools::javac::util::Name* outerThisName(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* ownerToCopyFreeVarsFrom(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void patchTargets(::com::sun::tools::javac::tree::JCTree* body, ::com::sun::tools::javac::tree::JCTree* src, ::com::sun::tools::javac::tree::JCTree* dest);
	virtual ::com::sun::tools::javac::util::Name* proxyName(::com::sun::tools::javac::util::Name* name, int32_t index);
	::com::sun::tools::javac::util::List* recordVars(::com::sun::tools::javac::code::Type* t);
	virtual void swapAccessConstructorTag(::com::sun::tools::javac::code::Symbol$ClassSymbol* oldCTag, ::com::sun::tools::javac::code::Symbol$ClassSymbol* newCTag);
	::com::sun::tools::javac::util::Name* syntheticName(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, $String* baseName);
	using ::com::sun::tools::javac::tree::TreeTranslator::translate;
	virtual ::com::sun::tools::javac::tree::JCTree* translate(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* translate(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::tree::JCTree* translate(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* enclOp);
	virtual ::com::sun::tools::javac::util::List* translate(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::util::List* translateTopLevelClass(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* cdef, ::com::sun::tools::javac::tree::TreeMaker* make);
	static ::com::sun::tools::javac::tree::JCTree$Tag* treeTag(::com::sun::tools::javac::code::Symbol$OperatorSymbol* operator$);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* unbox(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* primitive);
	bool useClone();
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	void visitArrayForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree);
	virtual void visitAssert(::com::sun::tools::javac::tree::JCTree$JCAssert* tree) override;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	::com::sun::tools::javac::tree::JCTree* visitBoxedPrimitiveSwitch(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases);
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	void visitEnumConstantDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var, int32_t ordinal);
	void visitEnumDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual ::com::sun::tools::javac::tree::JCTree* visitEnumSwitch(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases);
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitIndexed(::com::sun::tools::javac::tree::JCTree$JCArrayAccess* tree) override;
	void visitIterableForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree);
	virtual void visitLetExpr(::com::sun::tools::javac::tree::JCTree$LetExpr* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	void visitMethodDefInternal(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree);
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* tree) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* tree) override;
	void visitRecordDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual ::com::sun::tools::javac::tree::JCTree* visitStringSwitch(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* caseList);
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	static ::com::sun::tools::javac::util::Context$Key* lowerKey;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::comp::Operators* operators = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* make_pos = nullptr;
	::com::sun::tools::javac::comp::ConstFold* cfolder = nullptr;
	::com::sun::tools::javac::jvm::Target* target = nullptr;
	::com::sun::tools::javac::comp::TypeEnvs* typeEnvs = nullptr;
	::com::sun::tools::javac::util::Name* dollarAssertionsDisabled = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	bool debugLower = false;
	bool disableProtectedAccessors = false;
	::com::sun::tools::javac::main::Option$PkgInfo* pkginfoOpt = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* currentClass = nullptr;
	::com::sun::tools::javac::util::ListBuffer* translated = nullptr;
	::com::sun::tools::javac::comp::Env* attrEnv = nullptr;
	::com::sun::tools::javac::tree::EndPosTable* endPosTable = nullptr;
	::java::util::Map* classdefs = nullptr;
	::java::util::Map* prunedTree = nullptr;
	::java::util::Map* actualSymbols = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCMethodDecl* currentMethodDef = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* currentMethodSym = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* outermostClassDef = nullptr;
	::com::sun::tools::javac::tree::JCTree* outermostMemberDef = nullptr;
	::java::util::Map* lambdaTranslationMap = nullptr;
	::com::sun::tools::javac::comp::Lower$ClassMap* classMap = nullptr;
	::java::util::Map* freevarCache = nullptr;
	::java::util::Map* enumSwitchMap = nullptr;
	::com::sun::tools::javac::tree::JCTree$Visitor* conflictsChecker = nullptr;
	::java::util::Map* accessNums = nullptr;
	::java::util::Map* accessSyms = nullptr;
	::java::util::Map* accessConstrs = nullptr;
	::com::sun::tools::javac::util::List* accessConstrTags = nullptr;
	::com::sun::tools::javac::util::ListBuffer* accessed = nullptr;
	::java::util::Map* proxies = nullptr;
	::com::sun::tools::javac::code::Scope$WriteableScope* twrVars = nullptr;
	::com::sun::tools::javac::util::List* outerThisStack = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* assertionsDisabledClassCache = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* enclOp = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* systemArraycopyMethod = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower_h_