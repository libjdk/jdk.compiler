#ifndef _com_sun_tools_javac_tree_TreeMaker_h_
#define _com_sun_tools_javac_tree_TreeMaker_h_
//$ class com.sun.tools.javac.tree.TreeMaker
//$ extends com.sun.tools.javac.tree.JCTree$Factory

#include <com/sun/tools/javac/tree/JCTree$Factory.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CaseTree$CaseKind;
				class MemberReferenceTree$ReferenceMode;
				class ModuleTree$ModuleKind;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class BoundKind;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class Type$TypeVar;
					class TypeTag;
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
					class JCTree$JCCatch;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCConditional;
					class JCTree$JCContinue;
					class JCTree$JCDefaultCaseLabel;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCErroneous;
					class JCTree$JCExports;
					class JCTree$JCExpression;
					class JCTree$JCExpressionStatement;
					class JCTree$JCFieldAccess;
					class JCTree$JCForLoop;
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
					class JCTree$JCModifiers;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCOpens;
					class JCTree$JCPackageDecl;
					class JCTree$JCParens;
					class JCTree$JCParenthesizedPattern;
					class JCTree$JCPattern;
					class JCTree$JCPrimitiveTypeTree;
					class JCTree$JCProvides;
					class JCTree$JCRequires;
					class JCTree$JCReturn;
					class JCTree$JCSkip;
					class JCTree$JCStatement;
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
					class JCTree$JCUses;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$JCWildcard;
					class JCTree$JCYield;
					class JCTree$LetExpr;
					class JCTree$Tag;
					class JCTree$TypeBoundKind;
					class TreeMaker$AnnotationBuilder;
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
					class Name;
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
				namespace tree {

class $import TreeMaker : public ::com::sun::tools::javac::tree::JCTree$Factory {
	$class(TreeMaker, 0, ::com::sun::tools::javac::tree::JCTree$Factory)
public:
	TreeMaker();
	void init$(::com::sun::tools::javac::util::Context* context);
	void init$(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel, ::com::sun::tools::javac::util::Names* names, ::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::code::Symtab* syms);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* AnnotatedType(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::tree::JCTree$JCExpression* underlyingType);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* Annotation(::com::sun::tools::javac::tree::JCTree* annotationType, ::com::sun::tools::javac::util::List* args) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* Annotation(::com::sun::tools::javac::code::Attribute* a);
	virtual ::com::sun::tools::javac::util::List* Annotations(::com::sun::tools::javac::util::List* attributes);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* AnonymousClassDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::List* defs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* App(::com::sun::tools::javac::tree::JCTree$JCExpression* meth, ::com::sun::tools::javac::util::List* args);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* App(::com::sun::tools::javac::tree::JCTree$JCExpression* meth);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* Apply(::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCExpression* fn, ::com::sun::tools::javac::util::List* args) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCAssert* Assert(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCExpression* detail) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCAssign* Assign(::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* Assignment(::com::sun::tools::javac::code::Symbol* v, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAssignOp* Assignop(::com::sun::tools::javac::tree::JCTree$Tag* opcode, ::com::sun::tools::javac::tree::JCTree* lhs, ::com::sun::tools::javac::tree::JCTree* rhs) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCBinary* Binary(::com::sun::tools::javac::tree::JCTree$Tag* opcode, ::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCBindingPattern* BindingPattern(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCBlock* Block(int64_t flags, ::com::sun::tools::javac::util::List* stats) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCBreak* Break(::com::sun::tools::javac::util::Name* label) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* Call(::com::sun::tools::javac::tree::JCTree$JCExpression* apply);
	virtual ::com::sun::tools::javac::tree::JCTree$JCCase* Case(::com::sun::source::tree::CaseTree$CaseKind* caseKind, ::com::sun::tools::javac::util::List* labels, ::com::sun::tools::javac::util::List* stats, ::com::sun::tools::javac::tree::JCTree* body) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCCatch* Catch(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* param, ::com::sun::tools::javac::tree::JCTree$JCBlock* body) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* ClassDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::tree::JCTree$JCExpression* extending, ::com::sun::tools::javac::util::List* implementing, ::com::sun::tools::javac::util::List* defs) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* ClassDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::tree::JCTree$JCExpression* extending, ::com::sun::tools::javac::util::List* implementing, ::com::sun::tools::javac::util::List* permitting, ::com::sun::tools::javac::util::List* defs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* ClassLiteral(::com::sun::tools::javac::code::Symbol$ClassSymbol* clazz);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* ClassLiteral(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCConditional* Conditional(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCExpression* thenpart, ::com::sun::tools::javac::tree::JCTree$JCExpression* elsepart) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCContinue* Continue(::com::sun::tools::javac::util::Name* label) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* Create(::com::sun::tools::javac::code::Symbol* ctor, ::com::sun::tools::javac::util::List* args);
	virtual ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel* DefaultCaseLabel();
	virtual ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* DoLoop(::com::sun::tools::javac::tree::JCTree$JCStatement* body, ::com::sun::tools::javac::tree::JCTree$JCExpression* cond) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCErroneous* Erroneous();
	virtual ::com::sun::tools::javac::tree::JCTree$JCErroneous* Erroneous(::com::sun::tools::javac::util::List* errs) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement* Exec(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExports* Exports(::com::sun::tools::javac::tree::JCTree$JCExpression* qualId, ::com::sun::tools::javac::util::List* moduleNames) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCForLoop* ForLoop(::com::sun::tools::javac::util::List* init, ::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::util::List* step, ::com::sun::tools::javac::tree::JCTree$JCStatement* body) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* ForeachLoop(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::tree::JCTree$JCStatement* body) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCGuardPattern* GuardPattern(::com::sun::tools::javac::tree::JCTree$JCPattern* guardedPattern, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr);
	virtual ::com::sun::tools::javac::tree::JCTree$JCIdent* Ident(::com::sun::tools::javac::util::Name* name) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCIdent* Ident(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* Ident(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* param);
	virtual ::com::sun::tools::javac::util::List* Idents(::com::sun::tools::javac::util::List* params);
	virtual ::com::sun::tools::javac::tree::JCTree$JCIf* If(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCStatement* thenpart, ::com::sun::tools::javac::tree::JCTree$JCStatement* elsepart) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCImport* Import(::com::sun::tools::javac::tree::JCTree* qualid, bool importStatic) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCArrayAccess* Indexed(::com::sun::tools::javac::tree::JCTree$JCExpression* indexed, ::com::sun::tools::javac::tree::JCTree$JCExpression* index) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCArrayAccess* Indexed(::com::sun::tools::javac::code::Symbol* v, ::com::sun::tools::javac::tree::JCTree$JCExpression* index);
	virtual ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* Labelled(::com::sun::tools::javac::util::Name* label, ::com::sun::tools::javac::tree::JCTree$JCStatement* body) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCLambda* Lambda(::com::sun::tools::javac::util::List* params, ::com::sun::tools::javac::tree::JCTree* body);
	virtual ::com::sun::tools::javac::tree::JCTree$LetExpr* LetExpr(::com::sun::tools::javac::util::List* defs, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr) override;
	virtual ::com::sun::tools::javac::tree::JCTree$LetExpr* LetExpr(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* def, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr);
	virtual ::com::sun::tools::javac::tree::JCTree$JCLiteral* Literal(::com::sun::tools::javac::code::TypeTag* tag, Object$* value) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCLiteral* Literal(Object$* value);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* MethodDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* restype, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::util::List* params, ::com::sun::tools::javac::util::List* thrown, ::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* MethodDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* restype, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* recvparam, ::com::sun::tools::javac::util::List* params, ::com::sun::tools::javac::util::List* thrown, ::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* MethodDef(::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::tree::JCTree$JCBlock* body);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* MethodDef(::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::code::Type* mtype, ::com::sun::tools::javac::tree::JCTree$JCBlock* body);
	virtual ::com::sun::tools::javac::tree::JCTree$JCModifiers* Modifiers(int64_t flags, ::com::sun::tools::javac::util::List* annotations) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCModifiers* Modifiers(int64_t flags);
	virtual ::com::sun::tools::javac::tree::JCTree$JCModuleDecl* ModuleDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::source::tree::ModuleTree$ModuleKind* kind, ::com::sun::tools::javac::tree::JCTree$JCExpression* qualid, ::com::sun::tools::javac::util::List* directives) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewArray* NewArray(::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype, ::com::sun::tools::javac::util::List* dims, ::com::sun::tools::javac::util::List* elems) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewClass* NewClass(::com::sun::tools::javac::tree::JCTree$JCExpression* encl, ::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::util::List* args, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* def) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCOpens* Opens(::com::sun::tools::javac::tree::JCTree$JCExpression* qualId, ::com::sun::tools::javac::util::List* moduleNames) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCPackageDecl* PackageDecl(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::tree::JCTree$JCExpression* pid) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* Param(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* argtype, ::com::sun::tools::javac::code::Symbol* owner);
	virtual ::com::sun::tools::javac::util::List* Params(::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::code::Symbol* owner);
	virtual ::com::sun::tools::javac::tree::JCTree$JCParens* Parens(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern* ParenthesizedPattern(::com::sun::tools::javac::tree::JCTree$JCPattern* pattern);
	virtual ::com::sun::tools::javac::tree::JCTree$JCProvides* Provides(::com::sun::tools::javac::tree::JCTree$JCExpression* serviceName, ::com::sun::tools::javac::util::List* implNames) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* QualIdent(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* QualThis(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* ReceiverVarDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* vartype);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMemberReference* Reference(::com::sun::source::tree::MemberReferenceTree$ReferenceMode* mode, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::util::List* typeargs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCRequires* Requires(bool isTransitive, bool isStaticPhase, ::com::sun::tools::javac::tree::JCTree$JCExpression* qualId) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCReturn* Return(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCFieldAccess* Select(::com::sun::tools::javac::tree::JCTree$JCExpression* selected, ::com::sun::tools::javac::util::Name* selector) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* Select(::com::sun::tools::javac::tree::JCTree$JCExpression* base, ::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::tree::JCTree$JCSkip* Skip() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewClass* SpeculativeNewClass(::com::sun::tools::javac::tree::JCTree$JCExpression* encl, ::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::util::List* args, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* def, bool classDefRemoved);
	virtual ::com::sun::tools::javac::tree::JCTree$JCIdent* Super(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol$TypeSymbol* owner);
	virtual ::com::sun::tools::javac::tree::JCTree$JCSwitch* Switch(::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* SwitchExpression(::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCSynchronized* Synchronized(::com::sun::tools::javac::tree::JCTree$JCExpression* lock, ::com::sun::tools::javac::tree::JCTree$JCBlock* body) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* This(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCThrow* Throw(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* TopLevel(::com::sun::tools::javac::util::List* defs) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCTry* Try(::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::util::List* catchers, ::com::sun::tools::javac::tree::JCTree$JCBlock* finalizer) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCTry* Try(::com::sun::tools::javac::util::List* resources, ::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::util::List* catchers, ::com::sun::tools::javac::tree::JCTree$JCBlock* finalizer) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* Type(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* TypeAnnotation(::com::sun::tools::javac::tree::JCTree* annotationType, ::com::sun::tools::javac::util::List* args);
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* TypeAnnotation(::com::sun::tools::javac::code::Attribute* a);
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeApply* TypeApply(::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::util::List* arguments) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* TypeArray(::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype) override;
	virtual ::com::sun::tools::javac::tree::JCTree$TypeBoundKind* TypeBoundKind(::com::sun::tools::javac::code::BoundKind* kind) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeCast* TypeCast(::com::sun::tools::javac::tree::JCTree* clazz, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeCast* TypeCast(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr);
	virtual ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree* TypeIdent(::com::sun::tools::javac::code::TypeTag* typetag) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection* TypeIntersection(::com::sun::tools::javac::util::List* components);
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeParameter* TypeParam(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type$TypeVar* tvar);
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeParameter* TypeParameter(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* bounds) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeParameter* TypeParameter(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* bounds, ::com::sun::tools::javac::util::List* annos);
	virtual ::com::sun::tools::javac::util::List* TypeParams(::com::sun::tools::javac::util::List* typarams);
	virtual ::com::sun::tools::javac::tree::JCTree$JCInstanceOf* TypeTest(::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::tree::JCTree* clazz) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeUnion* TypeUnion(::com::sun::tools::javac::util::List* components);
	virtual ::com::sun::tools::javac::util::List* Types(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::tree::JCTree$JCUnary* Unary(::com::sun::tools::javac::tree::JCTree$Tag* opcode, ::com::sun::tools::javac::tree::JCTree$JCExpression* arg) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCUses* Uses(::com::sun::tools::javac::tree::JCTree$JCExpression* qualId) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* VarDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* vartype, ::com::sun::tools::javac::tree::JCTree$JCExpression* init) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* VarDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* vartype, ::com::sun::tools::javac::tree::JCTree$JCExpression* init, bool declaredUsingVar);
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* VarDef(::com::sun::tools::javac::code::Symbol$VarSymbol* v, ::com::sun::tools::javac::tree::JCTree$JCExpression* init);
	virtual ::com::sun::tools::javac::tree::JCTree$JCWhileLoop* WhileLoop(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCStatement* body) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCWildcard* Wildcard(::com::sun::tools::javac::tree::JCTree$TypeBoundKind* kind, ::com::sun::tools::javac::tree::JCTree* type) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCYield* Yield(::com::sun::tools::javac::tree::JCTree$JCExpression* value) override;
	virtual ::com::sun::tools::javac::tree::TreeMaker* at(int32_t pos);
	virtual ::com::sun::tools::javac::tree::TreeMaker* at(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual ::com::sun::tools::javac::tree::TreeMaker* forToplevel(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel);
	static ::com::sun::tools::javac::tree::TreeMaker* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isUnqualifiable(::com::sun::tools::javac::code::Symbol* sym);
	static $String* lambda$TopLevel$0(::com::sun::tools::javac::tree::JCTree* node);
	virtual ::com::sun::tools::javac::util::Name* paramName(int32_t i);
	virtual ::com::sun::tools::javac::util::Name* typaramName(int32_t i);
	static ::com::sun::tools::javac::util::Context$Key* treeMakerKey;
	int32_t pos = 0;
	::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::tree::TreeMaker$AnnotationBuilder* annotationBuilder = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeMaker_h_