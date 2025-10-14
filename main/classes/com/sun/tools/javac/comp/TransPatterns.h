#ifndef _com_sun_tools_javac_comp_TransPatterns_h_
#define _com_sun_tools_javac_comp_TransPatterns_h_
//$ class com.sun.tools.javac.comp.TransPatterns
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Preview;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
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
					class Env;
					class Operators;
					class Resolve;
					class TransPatterns$BindingContext;
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
				namespace tree {
					class JCTree;
					class JCTree$JCBinary;
					class JCTree$JCBindingPattern;
					class JCTree$JCBlock;
					class JCTree$JCCase;
					class JCTree$JCCaseLabel;
					class JCTree$JCClassDecl;
					class JCTree$JCConditional;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCExpression;
					class JCTree$JCForLoop;
					class JCTree$JCGuardPattern;
					class JCTree$JCIdent;
					class JCTree$JCIf;
					class JCTree$JCInstanceOf;
					class JCTree$JCLabeledStatement;
					class JCTree$JCLambda;
					class JCTree$JCMethodDecl;
					class JCTree$JCParenthesizedPattern;
					class JCTree$JCPattern;
					class JCTree$JCSwitch;
					class JCTree$JCSwitchExpression;
					class JCTree$JCUnary;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$Tag;
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
					class List;
					class Names;
				}
			}
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

class $export TransPatterns : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(TransPatterns, 0, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	TransPatterns();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* convert(::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::code::Type* target);
	void handleSwitch(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases, bool hasTotalPattern, bool patternSwitch);
	static ::com::sun::tools::javac::comp::TransPatterns* instance(::com::sun::tools::javac::util::Context* context);
	static ::java::util::stream::Stream* lambda$handleSwitch$0(::com::sun::tools::javac::tree::JCTree$JCCase* c);
	static bool lambda$handleSwitch$1(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* p);
	static bool lambda$handleSwitch$2(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* l);
	::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* lambda$handleSwitch$4(::com::sun::tools::javac::code::Type* seltype, ::com::sun::tools::javac::tree::JCTree$JCCaseLabel* l);
	static bool lambda$handleSwitch$5(::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* c);
	static $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>* lambda$handleSwitch$6(int32_t s);
	static bool lambda$handleSwitch$7(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* l);
	static bool lambda$handleSwitch$8(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* l);
	virtual ::com::sun::tools::javac::tree::JCTree$JCBinary* makeBinary(::com::sun::tools::javac::tree::JCTree$Tag* optag, ::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* makeLit(::com::sun::tools::javac::code::Type* type, Object$* value);
	virtual ::com::sun::tools::javac::tree::JCTree$JCInstanceOf* makeTypeTest(::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* type);
	virtual ::com::sun::tools::javac::tree::JCTree$JCUnary* makeUnary(::com::sun::tools::javac::tree::JCTree$Tag* optag, ::com::sun::tools::javac::tree::JCTree$JCExpression* arg);
	::com::sun::tools::javac::code::Type* principalType(::com::sun::tools::javac::tree::JCTree$JCPattern* p);
	::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* toLoadableConstant(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* l, ::com::sun::tools::javac::code::Type* selector);
	virtual ::com::sun::tools::javac::tree::JCTree* translateTopLevelClass(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* cdef, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitGuardPattern(::com::sun::tools::javac::tree::JCTree$JCGuardPattern* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitParenthesizedPattern(::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitTypeTest(::com::sun::tools::javac::tree::JCTree$JCInstanceOf* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	static ::com::sun::tools::javac::util::Context$Key* transPatternsKey;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Operators* operators = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::jvm::Target* target = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::comp::TransPatterns$BindingContext* bindingContext = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* pendingMatchLabel = nullptr;
	bool debugTransPatterns = false;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* currentClass = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* currentMethodSym = nullptr;
	::com::sun::tools::javac::code::Symbol$VarSymbol* currentValue = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TransPatterns_h_