#ifndef _com_sun_tools_javac_comp_TransTypes_h_
#define _com_sun_tools_javac_comp_TransTypes_h_
//$ class com.sun.tools.javac.comp.TransTypes
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$TypeSymbol;
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
					class Annotate;
					class Attr;
					class CompileStates;
					class Enter;
					class Env;
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
					class JCTree$JCBreak;
					class JCTree$JCCase;
					class JCTree$JCClassDecl;
					class JCTree$JCConditional;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCExpression;
					class JCTree$JCExpressionStatement;
					class JCTree$JCFieldAccess;
					class JCTree$JCForLoop;
					class JCTree$JCGuardPattern;
					class JCTree$JCIdent;
					class JCTree$JCIf;
					class JCTree$JCInstanceOf;
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCParens;
					class JCTree$JCParenthesizedPattern;
					class JCTree$JCReturn;
					class JCTree$JCSwitch;
					class JCTree$JCSwitchExpression;
					class JCTree$JCSynchronized;
					class JCTree$JCThrow;
					class JCTree$JCTry;
					class JCTree$JCTypeApply;
					class JCTree$JCTypeCast;
					class JCTree$JCTypeIntersection;
					class JCTree$JCUnary;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$JCYield;
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
				namespace comp {

class $import TransTypes : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(TransTypes, 0, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	TransTypes();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void addBridge(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$MethodSymbol* meth, ::com::sun::tools::javac::code::Symbol$MethodSymbol* impl, ::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::util::ListBuffer* bridges);
	virtual void addBridgeIfNeeded(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::util::ListBuffer* bridges);
	virtual void addBridges(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$TypeSymbol* i, ::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::util::ListBuffer* bridges);
	virtual void addBridges(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* origin, ::com::sun::tools::javac::util::ListBuffer* bridges);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* cast(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* target);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* coerce(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* target);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* coerce(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* target);
	::com::sun::tools::javac::util::List* createBridgeParams(::com::sun::tools::javac::code::Symbol$MethodSymbol* impl, ::com::sun::tools::javac::code::Symbol$MethodSymbol* bridge, ::com::sun::tools::javac::code::Type* bridgeType);
	::com::sun::tools::javac::code::Type* erasure(::com::sun::tools::javac::code::Type* t);
	static ::com::sun::tools::javac::comp::TransTypes* instance(::com::sun::tools::javac::util::Context* context);
	bool isBridgeNeeded(::com::sun::tools::javac::code::Symbol$MethodSymbol* method, ::com::sun::tools::javac::code::Symbol$MethodSymbol* impl, ::com::sun::tools::javac::code::Type* dest);
	bool isSameMemberWhenErased(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol$MethodSymbol* method, ::com::sun::tools::javac::code::Type* erasure);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* retype(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::code::Type* erasedType, ::com::sun::tools::javac::code::Type* target);
	using ::com::sun::tools::javac::tree::TreeTranslator::translate;
	virtual ::com::sun::tools::javac::tree::JCTree* translate(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* pt);
	virtual ::com::sun::tools::javac::util::List* translate(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::code::Type* pt);
	virtual ::com::sun::tools::javac::util::List* translateArgs(::com::sun::tools::javac::util::List* _args, ::com::sun::tools::javac::util::List* parameters, ::com::sun::tools::javac::code::Type* varargsElement);
	virtual ::com::sun::tools::javac::util::List* translateArgs(::com::sun::tools::javac::util::List* _args, ::com::sun::tools::javac::util::List* parameters, ::com::sun::tools::javac::code::Type* varargsElement, ::com::sun::tools::javac::comp::Env* localEnv);
	virtual void translateClass(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::tree::JCTree* translateTopLevelClass(::com::sun::tools::javac::tree::JCTree* cdef, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitAssert(::com::sun::tools::javac::tree::JCTree$JCAssert* tree) override;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* tree) override;
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitCase(::com::sun::tools::javac::tree::JCTree$JCCase* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitExec(::com::sun::tools::javac::tree::JCTree$JCExpressionStatement* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitGuardPattern(::com::sun::tools::javac::tree::JCTree$JCGuardPattern* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitIndexed(::com::sun::tools::javac::tree::JCTree$JCArrayAccess* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* tree) override;
	virtual void visitParenthesizedPattern(::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitSynchronized(::com::sun::tools::javac::tree::JCTree$JCSynchronized* tree) override;
	virtual void visitThrow(::com::sun::tools::javac::tree::JCTree$JCThrow* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* tree) override;
	virtual void visitTypeArray(::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	virtual void visitTypeIntersection(::com::sun::tools::javac::tree::JCTree$JCTypeIntersection* tree) override;
	virtual void visitTypeTest(::com::sun::tools::javac::tree::JCTree$JCInstanceOf* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	static ::com::sun::tools::javac::util::Context$Key* transTypesKey;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::Resolve* resolve = nullptr;
	::com::sun::tools::javac::comp::CompileStates* compileStates = nullptr;
	bool allowGraphInference = false;
	bool allowInterfaceBridges = false;
	::com::sun::tools::javac::code::Type* pt = nullptr;
	::com::sun::tools::javac::code::Type* returnType = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	static $String* statePreviousToFlowAssertMsg;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TransTypes_h_