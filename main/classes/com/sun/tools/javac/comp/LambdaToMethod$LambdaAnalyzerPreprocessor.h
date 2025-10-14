#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
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
					class LambdaToMethod;
					class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;
					class LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter;
					class LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
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
					class JCTree$JCBlock;
					class JCTree$JCClassDecl;
					class JCTree$JCExpression;
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCNewClass;
					class JCTree$JCVariableDecl;
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
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export LambdaToMethod$LambdaAnalyzerPreprocessor : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod* this$0);
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* analyzeAndPreprocessClass(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	void analyzeLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* methodReferenceReceiver);
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* analyzeLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree, $String* statKey);
	virtual void captureLocalClassDefs(::com::sun::tools::javac::code::Symbol* csym, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* lambdaContext);
	::com::sun::tools::javac::tree::JCTree* capturedDecl(int32_t depth, ::com::sun::tools::javac::code::Symbol* sym);
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* context();
	::com::sun::tools::javac::code::Symbol$ClassSymbol* currentClass();
	virtual bool currentlyInClass(::com::sun::tools::javac::code::Symbol* csym);
	::com::sun::tools::javac::tree::JCTree* directlyEnclosingLambda();
	bool inClassWithinLambda();
	::com::sun::tools::javac::code::Symbol* initSym(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym, int64_t flags);
	bool lambdaFieldAccessFilter(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* fAccess);
	bool lambdaIdentSymbolFilter(::com::sun::tools::javac::code::Symbol* sym);
	bool lambdaNewClassFilter(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* context, ::com::sun::tools::javac::tree::JCTree$JCNewClass* tree);
	::com::sun::tools::javac::code::Symbol* owner();
	::com::sun::tools::javac::code::Symbol* owner(bool skipLambda);
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::comp::LambdaToMethod* this$0 = nullptr;
	::com::sun::tools::javac::util::List* frameStack = nullptr;
	int32_t lambdaCount = 0;
	::com::sun::tools::javac::util::List* typesUnderConstruction = nullptr;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter* syntheticMethodNameCounts = nullptr;
	::java::util::Map* localClassDefs = nullptr;
	::java::util::Map* clinits = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor_h_