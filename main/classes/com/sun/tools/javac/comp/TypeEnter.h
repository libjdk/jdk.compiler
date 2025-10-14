#ifndef _com_sun_tools_javac_comp_TypeEnter_h_
#define _com_sun_tools_javac_comp_TypeEnter_h_
//$ class com.sun.tools.javac.comp.TypeEnter
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredLintHandler;
					class Lint;
					class Preview;
					class Symbol;
					class Symbol$MethodSymbol;
					class Symbol$TypeSymbol;
					class Symtab;
					class TypeAnnotations;
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
					class Check;
					class Enter;
					class Env;
					class MemberEnter;
					class Todo;
					class TypeEnter$DefaultConstructorHelper;
					class TypeEnter$ImportsPhase;
					class TypeEnter$Phase;
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
				namespace tree {
					class JCTree;
					class JCTree$JCAnnotation;
					class JCTree$JCAssign;
					class JCTree$JCCompilationUnit;
					class JCTree$JCExpression;
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
					class Dependencies;
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
	namespace lang {
		class Runnable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export TypeEnter : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(TypeEnter, 0, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	TypeEnter();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::com::sun::tools::javac::tree::JCTree* defaultConstructor(::com::sun::tools::javac::tree::TreeMaker* make, ::com::sun::tools::javac::comp::TypeEnter$DefaultConstructorHelper* helper);
	virtual void ensureImportsChecked(::com::sun::tools::javac::util::List* trees);
	virtual void finishImports(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel, ::java::lang::Runnable* resolve);
	void handleDeprecatedAnnotations(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::code::Symbol* sym);
	static ::com::sun::tools::javac::comp::TypeEnter* instance(::com::sun::tools::javac::util::Context* context);
	static void lambda$complete$1();
	void lambda$ensureImportsChecked$0(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree, ::com::sun::tools::javac::comp::Env* topEnv);
	static bool lambda$lookupMethod$2(::com::sun::tools::javac::code::Symbol* s);
	static bool lambda$setFlagIfAttributeTrue$3(::com::sun::tools::javac::tree::JCTree$JCExpression* e);
	static ::com::sun::tools::javac::tree::JCTree$JCAssign* lambda$setFlagIfAttributeTrue$4(::com::sun::tools::javac::tree::JCTree$JCExpression* e);
	static bool lambda$setFlagIfAttributeTrue$5(::com::sun::tools::javac::util::Name* attribute, ::com::sun::tools::javac::tree::JCTree$JCAssign* assign);
	static void lambda$setFlagIfAttributeTrue$6(::com::sun::tools::javac::code::Symbol* sym, int64_t flag, ::com::sun::tools::javac::tree::JCTree$JCAssign* assign);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* lookupMethod(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes);
	virtual void markDeprecated(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::comp::Env* env);
	void setFlagIfAttributeTrue(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::Name* attribute, int64_t flag);
	static ::com::sun::tools::javac::util::Context$Key* typeEnterKey;
	static const bool checkClash = true;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::comp::MemberEnter* memberEnter = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::comp::Todo* todo = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::code::TypeAnnotations* typeAnnotations = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::code::DeferredLintHandler* deferredLintHandler = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
	::com::sun::tools::javac::comp::TypeEnvs* typeEnvs = nullptr;
	::com::sun::tools::javac::util::Dependencies* dependencies = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	bool allowTypeAnnos = false;
	bool allowDeprecationOnImport = false;
	bool completionEnabled = false;
	::com::sun::tools::javac::comp::TypeEnter$ImportsPhase* completeClass = nullptr;
	::com::sun::tools::javac::comp::TypeEnter$Phase* topLevelPhase = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter_h_