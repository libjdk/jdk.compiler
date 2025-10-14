#ifndef _com_sun_tools_javac_comp_LambdaToMethod_h_
#define _com_sun_tools_javac_comp_LambdaToMethod_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>

#pragma push_macro("FLAG_BRIDGES")
#undef FLAG_BRIDGES
#pragma push_macro("FLAG_MARKERS")
#undef FLAG_MARKERS
#pragma push_macro("FLAG_SERIALIZABLE")
#undef FLAG_SERIALIZABLE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$MethodHandleSymbol;
					class Symbol$MethodSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class Type$MethodType;
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
					class LambdaToMethod$KlassInfo;
					class LambdaToMethod$LambdaAnalyzerPreprocessor;
					class LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
					class Lower;
					class Operators;
					class Resolve;
					class TransTypes;
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
					class JCTree$JCNewClass;
					class JCTree$JCVariableDecl;
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
					class JCDiagnostic$Factory;
					class List;
					class Log;
					class Name;
					class Names;
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
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Supplier;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import LambdaToMethod : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(LambdaToMethod, 0, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	LambdaToMethod();
	void init$(::com::sun::tools::javac::util::Context* context);
	void addDeserializationCase(::com::sun::tools::javac::code::Symbol$MethodHandleSymbol* refSym, ::com::sun::tools::javac::code::Type* targetType, ::com::sun::tools::javac::code::Symbol$MethodSymbol* samSym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::List* staticArgs, ::com::sun::tools::javac::code::Type$MethodType* indyType);
	void apportionTypeAnnotations(::com::sun::tools::javac::tree::JCTree$JCLambda* tree, ::java::util::function::Supplier* source, ::java::util::function::Consumer* owner, ::java::util::function::Consumer* lambda);
	$String* classSig(::com::sun::tools::javac::code::Type* type);
	::com::sun::tools::javac::util::List* convertArgs(::com::sun::tools::javac::code::Symbol* meth, ::com::sun::tools::javac::util::List* args, ::com::sun::tools::javac::code::Type* varargsElement);
	::com::sun::tools::javac::tree::JCTree$JCExpression* deserGetter($String* func, ::com::sun::tools::javac::code::Type* type);
	::com::sun::tools::javac::tree::JCTree$JCExpression* deserGetter($String* func, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::List* argTypes, ::com::sun::tools::javac::util::List* args);
	::com::sun::tools::javac::tree::JCTree$JCExpression* deserTest(::com::sun::tools::javac::tree::JCTree$JCExpression* prev, $String* func, $String* lit);
	::com::sun::tools::javac::tree::JCTree$JCExpression* eqTest(::com::sun::tools::javac::code::Type* argType, ::com::sun::tools::javac::tree::JCTree$JCExpression* arg1, ::com::sun::tools::javac::tree::JCTree$JCExpression* arg2);
	static ::com::sun::tools::javac::comp::LambdaToMethod* instance(::com::sun::tools::javac::util::Context* context);
	bool isProtectedInSuperClassOfEnclosingClassInOtherPackage(::com::sun::tools::javac::code::Symbol* targetReference, ::com::sun::tools::javac::code::Symbol* currentClass);
	::com::sun::tools::javac::tree::JCTree$JCMethodDecl* makeDeserializeMethod(::com::sun::tools::javac::code::Symbol* kSym);
	::com::sun::tools::javac::tree::JCTree$JCExpression* makeIndyCall(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* bsmName, ::com::sun::tools::javac::util::List* staticArgs, ::com::sun::tools::javac::code::Type$MethodType* indyType, ::com::sun::tools::javac::util::List* indyArgs, ::com::sun::tools::javac::util::Name* methName);
	::com::sun::tools::javac::tree::JCTree$JCBlock* makeLambdaBody(::com::sun::tools::javac::tree::JCTree$JCLambda* tree, ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* lambdaMethodDecl);
	::com::sun::tools::javac::tree::JCTree$JCBlock* makeLambdaExpressionBody(::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* lambdaMethodDecl);
	::com::sun::tools::javac::tree::JCTree$JCBlock* makeLambdaStatementBody(::com::sun::tools::javac::tree::JCTree$JCBlock* block, ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* lambdaMethodDecl, bool completeNormally);
	::com::sun::tools::javac::tree::JCTree$JCExpression* makeMetafactoryIndyCall(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* context, ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol* refSym, ::com::sun::tools::javac::util::List* indy_args);
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewClass* makeNewClass(::com::sun::tools::javac::code::Type* ctype, ::com::sun::tools::javac::util::List* args, ::com::sun::tools::javac::code::Symbol* cons);
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewClass* makeNewClass(::com::sun::tools::javac::code::Type* ctype, ::com::sun::tools::javac::util::List* args);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* makePrivateSyntheticMethod(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	::com::sun::tools::javac::code::Symbol$VarSymbol* makeSyntheticVar(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	::com::sun::tools::javac::tree::JCTree$JCIdent* makeThis(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	void setVarargsIfNeeded(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* varargsElement);
	using ::com::sun::tools::javac::tree::TreeTranslator::translate;
	virtual ::com::sun::tools::javac::tree::JCTree* translate(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual ::com::sun::tools::javac::tree::JCTree* translate(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* newContext);
	virtual ::com::sun::tools::javac::util::List* translate(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* newContext);
	virtual ::com::sun::tools::javac::tree::JCTree* translateTopLevelClass(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* cdef, ::com::sun::tools::javac::tree::TreeMaker* make);
	$String* typeSig(::com::sun::tools::javac::code::Type* type);
	$String* typeSig(::com::sun::tools::javac::code::Type* type, bool allowIllegalSignature);
	::com::sun::tools::javac::code::Type$MethodType* typeToMethodType(::com::sun::tools::javac::code::Type* mt);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::comp::Lower* lower = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::comp::Operators* operators = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::TransTypes* transTypes = nullptr;
	::com::sun::tools::javac::comp::Env* attrEnv = nullptr;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* analyzer = nullptr;
	::java::util::Map* contextMap = nullptr;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* context = nullptr;
	::com::sun::tools::javac::comp::LambdaToMethod$KlassInfo* kInfo = nullptr;
	bool dumpLambdaToMethodStats = false;
	bool forceSerializable = false;
	bool debugLinesOrVars = false;
	bool verboseDeduplication = false;
	bool deduplicateLambdas = false;
	bool nestmateLambdas = false;
	static const int32_t FLAG_SERIALIZABLE = 1; // 1 << 0
	static const int32_t FLAG_MARKERS = 2; // 1 << 1
	static const int32_t FLAG_BRIDGES = 4; // 1 << 2
	static ::com::sun::tools::javac::util::Context$Key* unlambdaKey;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("FLAG_BRIDGES")
#pragma pop_macro("FLAG_MARKERS")
#pragma pop_macro("FLAG_SERIALIZABLE")

#endif // _com_sun_tools_javac_comp_LambdaToMethod_h_