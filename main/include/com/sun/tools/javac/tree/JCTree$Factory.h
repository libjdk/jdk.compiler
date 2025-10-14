#ifndef _com_sun_tools_javac_tree_JCTree$Factory_h_
#define _com_sun_tools_javac_tree_JCTree$Factory_h_
//$ interface com.sun.tools.javac.tree.JCTree$Factory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CaseTree$CaseKind;
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
					class BoundKind;
					class TypeTag;
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
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCErroneous;
					class JCTree$JCExports;
					class JCTree$JCExpression;
					class JCTree$JCExpressionStatement;
					class JCTree$JCFieldAccess;
					class JCTree$JCForLoop;
					class JCTree$JCIdent;
					class JCTree$JCIf;
					class JCTree$JCImport;
					class JCTree$JCInstanceOf;
					class JCTree$JCLabeledStatement;
					class JCTree$JCLiteral;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCModifiers;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCOpens;
					class JCTree$JCPackageDecl;
					class JCTree$JCParens;
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
					class JCTree$JCTypeParameter;
					class JCTree$JCUnary;
					class JCTree$JCUses;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$JCWildcard;
					class JCTree$JCYield;
					class JCTree$LetExpr;
					class JCTree$Tag;
					class JCTree$TypeBoundKind;
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
					class Name;
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

class $import JCTree$Factory : public ::java::lang::Object {
	$interface(JCTree$Factory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::tree::JCTree$JCAnnotation* Annotation(::com::sun::tools::javac::tree::JCTree* annotationType, ::com::sun::tools::javac::util::List* args) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* Apply(::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCExpression* fn, ::com::sun::tools::javac::util::List* args) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCAssert* Assert(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCExpression* detail) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCAssign* Assign(::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCAssignOp* Assignop(::com::sun::tools::javac::tree::JCTree$Tag* opcode, ::com::sun::tools::javac::tree::JCTree* lhs, ::com::sun::tools::javac::tree::JCTree* rhs) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCBinary* Binary(::com::sun::tools::javac::tree::JCTree$Tag* opcode, ::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCBindingPattern* BindingPattern(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCBlock* Block(int64_t flags, ::com::sun::tools::javac::util::List* stats) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCBreak* Break(::com::sun::tools::javac::util::Name* label) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCCase* Case(::com::sun::source::tree::CaseTree$CaseKind* caseKind, ::com::sun::tools::javac::util::List* labels, ::com::sun::tools::javac::util::List* stats, ::com::sun::tools::javac::tree::JCTree* body) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCCatch* Catch(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* param, ::com::sun::tools::javac::tree::JCTree$JCBlock* body) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* ClassDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::tree::JCTree$JCExpression* extending, ::com::sun::tools::javac::util::List* implementing, ::com::sun::tools::javac::util::List* defs) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCConditional* Conditional(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCExpression* thenpart, ::com::sun::tools::javac::tree::JCTree$JCExpression* elsepart) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCContinue* Continue(::com::sun::tools::javac::util::Name* label) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* DoLoop(::com::sun::tools::javac::tree::JCTree$JCStatement* body, ::com::sun::tools::javac::tree::JCTree$JCExpression* cond) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCErroneous* Erroneous(::com::sun::tools::javac::util::List* errs) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement* Exec(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCExports* Exports(::com::sun::tools::javac::tree::JCTree$JCExpression* qualId, ::com::sun::tools::javac::util::List* moduleNames) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCForLoop* ForLoop(::com::sun::tools::javac::util::List* init, ::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::util::List* step, ::com::sun::tools::javac::tree::JCTree$JCStatement* body) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* ForeachLoop(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::tree::JCTree$JCStatement* body) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCIdent* Ident(::com::sun::tools::javac::util::Name* idname) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCIf* If(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCStatement* thenpart, ::com::sun::tools::javac::tree::JCTree$JCStatement* elsepart) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCImport* Import(::com::sun::tools::javac::tree::JCTree* qualid, bool staticImport) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCArrayAccess* Indexed(::com::sun::tools::javac::tree::JCTree$JCExpression* indexed, ::com::sun::tools::javac::tree::JCTree$JCExpression* index) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* Labelled(::com::sun::tools::javac::util::Name* label, ::com::sun::tools::javac::tree::JCTree$JCStatement* body) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$LetExpr* LetExpr(::com::sun::tools::javac::util::List* defs, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCLiteral* Literal(::com::sun::tools::javac::code::TypeTag* tag, Object$* value) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* MethodDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* restype, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* recvparam, ::com::sun::tools::javac::util::List* params, ::com::sun::tools::javac::util::List* thrown, ::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCModifiers* Modifiers(int64_t flags, ::com::sun::tools::javac::util::List* annotations) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCModuleDecl* ModuleDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::source::tree::ModuleTree$ModuleKind* kind, ::com::sun::tools::javac::tree::JCTree$JCExpression* qualId, ::com::sun::tools::javac::util::List* directives) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewArray* NewArray(::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype, ::com::sun::tools::javac::util::List* dims, ::com::sun::tools::javac::util::List* elems) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewClass* NewClass(::com::sun::tools::javac::tree::JCTree$JCExpression* encl, ::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::util::List* args, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* def) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCOpens* Opens(::com::sun::tools::javac::tree::JCTree$JCExpression* qualId, ::com::sun::tools::javac::util::List* moduleNames) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCPackageDecl* PackageDecl(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::tree::JCTree$JCExpression* pid) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCParens* Parens(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCProvides* Provides(::com::sun::tools::javac::tree::JCTree$JCExpression* serviceName, ::com::sun::tools::javac::util::List* implNames) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCRequires* Requires(bool isTransitive, bool isStaticPhase, ::com::sun::tools::javac::tree::JCTree$JCExpression* qualId) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCReturn* Return(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCFieldAccess* Select(::com::sun::tools::javac::tree::JCTree$JCExpression* selected, ::com::sun::tools::javac::util::Name* selector) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCSkip* Skip() {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCSwitch* Switch(::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* SwitchExpression(::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCSynchronized* Synchronized(::com::sun::tools::javac::tree::JCTree$JCExpression* lock, ::com::sun::tools::javac::tree::JCTree$JCBlock* body) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCThrow* Throw(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* TopLevel(::com::sun::tools::javac::util::List* defs) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCTry* Try(::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::util::List* catchers, ::com::sun::tools::javac::tree::JCTree$JCBlock* finalizer) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCTry* Try(::com::sun::tools::javac::util::List* resources, ::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::util::List* catchers, ::com::sun::tools::javac::tree::JCTree$JCBlock* finalizer) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeApply* TypeApply(::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::util::List* arguments) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* TypeArray(::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$TypeBoundKind* TypeBoundKind(::com::sun::tools::javac::code::BoundKind* kind) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeCast* TypeCast(::com::sun::tools::javac::tree::JCTree* expr, ::com::sun::tools::javac::tree::JCTree$JCExpression* type) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree* TypeIdent(::com::sun::tools::javac::code::TypeTag* typetag) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCTypeParameter* TypeParameter(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* bounds) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCInstanceOf* TypeTest(::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::tree::JCTree* clazz) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCUnary* Unary(::com::sun::tools::javac::tree::JCTree$Tag* opcode, ::com::sun::tools::javac::tree::JCTree$JCExpression* arg) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCUses* Uses(::com::sun::tools::javac::tree::JCTree$JCExpression* qualId) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* VarDef(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* vartype, ::com::sun::tools::javac::tree::JCTree$JCExpression* init) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCWhileLoop* WhileLoop(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCStatement* body) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCWildcard* Wildcard(::com::sun::tools::javac::tree::JCTree$TypeBoundKind* kind, ::com::sun::tools::javac::tree::JCTree* type) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCYield* Yield(::com::sun::tools::javac::tree::JCTree$JCExpression* value) {return nullptr;}
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$Factory_h_