#ifndef _com_sun_tools_javac_resources_CompilerProperties$Errors_h_
#define _com_sun_tools_javac_resources_CompilerProperties$Errors_h_
//$ class com.sun.tools.javac.resources.CompilerProperties$Errors
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Kinds$Kind;
					class Kinds$KindName;
					class Source;
					class Symbol;
					class Type;
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
				namespace main {
					class Option;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class Tokens$TokenKind;
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
					class JCDiagnostic;
					class JCDiagnostic$Error;
					class JCDiagnostic$Fragment;
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

class $import CompilerProperties$Errors : public ::java::lang::Object {
	$class(CompilerProperties$Errors, 0, ::java::lang::Object)
public:
	CompilerProperties$Errors();
	void init$();
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AbstractCantBeAccessedDirectly(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AbstractCantBeInstantiated(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AddExportsWithRelease(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AddReadsWithRelease(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AlreadyAnnotated(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AlreadyDefined(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Kinds$KindName* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AlreadyDefinedInClinit(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Kinds$KindName* arg2, ::com::sun::tools::javac::code::Kinds$KindName* arg3, ::com::sun::tools::javac::code::Symbol* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AlreadyDefinedSingleImport(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AlreadyDefinedStaticSingleImport(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AlreadyDefinedThisUnit(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationMissingDefaultValue(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationMissingDefaultValue1(::com::sun::tools::javac::code::Type* arg0, ::java::util::List* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationNotValidForType(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationTypeNotApplicableToType(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnonymousDiamondMethodDoesNotOverrideSuperclass(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnonymousDiamondMethodDoesNotOverrideSuperclass(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ArrayAndVarargs(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ArrayReqButFound(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* BadFunctionalIntfAnno1(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* BadFunctionalIntfAnno1(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* BadInitializer($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* BadNameForOption(::com::sun::tools::javac::main::Option* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* BadValueForOption($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CallMustBeFirstStmtInCtor(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CallToSuperNotAllowedInEnumCtor(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CannotGenerateClass(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplyDiamond(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::java::lang::Void* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplyDiamond(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::java::lang::Void* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplyDiamond1(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplyDiamond1(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplyDiamond1(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplyDiamond1(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplyDiamond1(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplyDiamond1(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbol(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Type* arg5, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantApplySymbols(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantAssignValToFinalVar(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantDeref(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantInferLocalVarType(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantInferLocalVarType(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantInheritDiffArg(::com::sun::tools::javac::code::Symbol* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantInheritFromFinal(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantInheritFromSealed(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantRefBeforeCtorCalled(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantRefBeforeCtorCalled($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantRefNonEffectivelyFinalVar(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantRefNonEffectivelyFinalVar(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolve(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::lang::Void* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolveArgs(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::util::List* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolveArgsParams(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolveLocation(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::lang::Void* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolveLocation(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::lang::Void* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolveLocationArgs(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolveLocationArgs(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::lang::Void* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolveLocationArgsParams(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::util::JCDiagnostic* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantResolveLocationArgsParams(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, ::java::util::List* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantTypeAnnotateScoping(::java::util::List* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantTypeAnnotateScoping1(::com::sun::tools::javac::code::Attribute$Compound* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ClashWithPkgOfSameName(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ClassCantWrite(::com::sun::tools::javac::code::Symbol* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ClassInModuleCantExtendSealedInDiffModule(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ClassInUnnamedModuleCantExtendSealedInDiffPackage(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ClassPublicShouldBeInFile(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ConcreteInheritanceConflict(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Type* arg3, ::com::sun::tools::javac::code::Type* arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ConflictingExports(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ConflictingExportsToModule(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ConflictingOpens(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ConflictingOpensToModule(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ConstantLabelNotCompatible(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CyclicAnnotationElement(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CyclicInheritance(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CyclicInheritance(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CyclicRequires(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DefaultOverridesObjectMember(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Kinds$KindName* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DoesNotOverrideAbstract(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DoesntExist(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateAnnotationInvalidRepeated(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateAnnotationMemberValue(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateAnnotationMissingContainer(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateClass(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateModule(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateModuleOnPath(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::util::Name* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateProvides(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateRequires(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateUses(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnclClassRequired(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ErrorReadingFile(::java::io::File* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ErrorReadingFile(::javax::tools::JavaFileObject* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ErrorReadingFile(::java::nio::file::Path* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ErrorWritingFile($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ExceptAlreadyCaught(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ExceptNeverThrownInTry(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* Expected(::com::sun::tools::javac::parser::Tokens$TokenKind* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* Expected2(::com::sun::tools::javac::parser::Tokens$TokenKind* arg0, ::com::sun::tools::javac::parser::Tokens$TokenKind* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* Expected3(::com::sun::tools::javac::parser::Tokens$TokenKind* arg0, ::com::sun::tools::javac::parser::Tokens$TokenKind* arg1, ::com::sun::tools::javac::parser::Tokens$TokenKind* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* Expected4(::com::sun::tools::javac::parser::Tokens$TokenKind* arg0, ::com::sun::tools::javac::parser::Tokens$TokenKind* arg1, ::com::sun::tools::javac::parser::Tokens$TokenKind* arg2, $String* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ExpectedStr($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FeatureNotSupportedInSource(::com::sun::tools::javac::util::JCDiagnostic* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FeatureNotSupportedInSource(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FeatureNotSupportedInSourcePlural(::com::sun::tools::javac::util::JCDiagnostic* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FeatureNotSupportedInSourcePlural(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FileNotDirectory($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FileNotFile(Object$* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FileNotFound($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FilePatchedAndMsp(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::util::Name* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FinalParameterMayNotBeAssigned(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FirstStatementMustBeCallToAnotherConstructor(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ForeachNotApplicableToType(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ForeachNotApplicableToType(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IclsCantHaveStaticDecl(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalArgumentForOption($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalChar($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalCharForEncoding($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalCombinationOfModifiers(::java::util::Set* arg0, ::java::util::Set* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalDefaultSuperCall(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalDefaultSuperCall(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalDefaultSuperCall(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalDefaultSuperCall(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalInitializerForType(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalQualNotIcls(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalRecordComponentName(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalRefToRestrictedType(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalStaticIntfMethCall(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ImportRequiresCanonical(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IncomparableTypes(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IncompatibleThrownTypesInMref(::java::util::List* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IncorrectConstructorReceiverName(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IncorrectConstructorReceiverType(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IncorrectReceiverName(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IncorrectReceiverType(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InstanceofPatternNoSubtype(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InstanceofReifiableNotSafe(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IntNumberTooLarge($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IntfAnnotationCantHaveTypeParams(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IntfAnnotationMemberClash(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidAKey($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidAccessorMethodInRecord(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidCanonicalConstructorInRecord(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidFlag($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidLambdaParameterDeclaration(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidModuleSpecifier($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidMref(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidMref(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidPath($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidPermitsClause(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidProfile($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotation(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationElemNondefault(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationElemNondefault(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationIncompatibleTarget(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationInvalidValue(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationMultipleValues(::com::sun::tools::javac::code::Type* arg0, int32_t arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationNoValue(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationNoValue(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationNotApplicable(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationNotApplicableInContext(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationNotDocumented(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationNotInherited(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationRepeatedAndContainerPresent(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationRetention(::com::sun::tools::javac::code::Symbol* arg0, $String* arg1, ::com::sun::tools::javac::code::Symbol* arg2, $String* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationValueReturn(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidRepeatableAnnotationValueReturn(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidSource($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidSupertypeRecord(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidTarget($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IsPreview(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LabelAlreadyInUse(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitStringOverflow($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocalClassesCantExtendSealed(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocalVarAccessedFromIclsNeedsFinal(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocnBadModuleInfo(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocnCantGetModuleNameForJar(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocnCantReadDirectory(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocnCantReadFile(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocnInvalidArgForXpatch($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocnModuleInfoNotAllowedOnPatchPath(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModNotAllowedHere(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModifierNotAllowedHere(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModuleNameMismatch(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::util::Name* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModuleNonZeroOpens(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModuleNotFound(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModuleNotFoundInModuleSourcePath($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MultiModuleOutdirCannotBeExplodedModule(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MulticatchParameterMayNotBeAssigned(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MulticatchTypesMustBeDisjoint(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NameClashSameErasure(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NameClashSameErasureNoHide(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NameClashSameErasureNoOverride(::com::sun::tools::javac::util::Name* arg0, ::java::util::List* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::Name* arg3, ::java::util::List* arg4, ::com::sun::tools::javac::code::Symbol* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NameClashSameErasureNoOverride1($String* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::Name* arg2, ::java::util::List* arg3, ::com::sun::tools::javac::code::Symbol* arg4, ::com::sun::tools::javac::util::Name* arg5, ::java::util::List* arg6, ::com::sun::tools::javac::code::Symbol* arg7);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoAnnotationMember(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoEnclInstanceOfTypeInScope(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoSuperclass(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoValueForOption($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoZipfsForArchive(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NonSealedWithNoSealedSupertype(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NonStaticCantBeRef(::com::sun::tools::javac::code::Kinds$Kind* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotAnnotationType(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotDefAccessClassIntfCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotDefAccessClassIntfCantAccessReason(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotDefAccessClassIntfCantAccessReason(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotDefAccessPackageCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotDefAccessPackageCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotDefPublic(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotDefPublicCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotEnclClass(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotInProfile(::com::sun::tools::javac::code::Symbol* arg0, Object$* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotLoopLabel(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotWithinBounds(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotWithinBounds(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OperatorCantBeApplied(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OperatorCantBeApplied1(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OptionNotAllowedWithTarget(::com::sun::tools::javac::main::Option* arg0, ::com::sun::tools::javac::jvm::Target* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OptionRemovedSource($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OptionRemovedTarget(::com::sun::tools::javac::jvm::Target* arg0, ::com::sun::tools::javac::jvm::Target* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OptionTooMany($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* Orphaned(::com::sun::tools::javac::parser::Tokens$TokenKind* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideIncompatibleRet(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideIncompatibleRet(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideMeth(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::java::util::Set* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideMeth(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::java::util::Set* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideMethDoesntThrow(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideMethDoesntThrow(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideStatic(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideStatic(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideWeakerAccess(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::java::util::Set* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideWeakerAccess(::com::sun::tools::javac::util::JCDiagnostic* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideWeakerAccess(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::java::util::Set* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OverrideWeakerAccess(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PackageClashFromRequires(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PackageClashFromRequiresInUnnamed(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PackageEmptyOrNotFound(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PackageInOtherModule(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PackageNotVisible(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PackageNotVisible(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PkgClashesWithClassOfSameName(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PluginNotFound($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PreviewFeatureDisabled(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PreviewFeatureDisabled(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PreviewFeatureDisabledClassfile(::javax::tools::JavaFileObject* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PreviewFeatureDisabledPlural(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PreviewFeatureDisabledPlural(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PreviewNotLatest($String* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProbFoundReq(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProbFoundReq(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcBadConfigFile($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcCantAccess(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcCantAccess1(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcCantAccess1(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcCantFindClass($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcCantLoadClass($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcMessager($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcNoExplicitAnnotationProcessingRequested(::java::util::Collection* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcProcessorBadOptionName($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcProcessorCantInstantiate($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcProcessorNotFound($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcProcessorWrongType($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* QualifiedNewOfStaticClass(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RefAmbiguous(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Kinds$Kind* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3, ::com::sun::tools::javac::code::Kinds$Kind* arg4, ::com::sun::tools::javac::code::Symbol* arg5, ::com::sun::tools::javac::code::Symbol* arg6);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ReleaseBootclasspathConflict(::com::sun::tools::javac::main::Option* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RepeatedProvidesForService(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RepeatedValueForModuleSourcePath($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RepeatedValueForPatchModule($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ReportAccess(::com::sun::tools::javac::code::Symbol* arg0, ::java::util::Set* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ReqArg($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RestrictedTypeNotAllowed(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RestrictedTypeNotAllowedArray(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RestrictedTypeNotAllowedCompound(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RestrictedTypeNotAllowedHere(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SameBinaryName(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::util::Name* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ServiceDefinitionIsEnum(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ServiceImplementationDoesntHaveANoArgsConstructor(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ServiceImplementationIsAbstract(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ServiceImplementationIsInner(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ServiceImplementationNoArgsConstructorNotPublic(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ServiceImplementationNotInRightModule(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SourceCantOverwriteInputFile(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* StackSimError(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TooManyPatchedModules(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TryResourceMayNotBeAssigned(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TryWithResourcesExprEffectivelyFinalVar(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TwoClassLoaders2(::java::net::URL* arg0, ::java::net::URL* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TypeDoesntTakeParams(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TypeFoundReq(Object$* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TypeFoundReq(Object$* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TypesIncompatible(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UndefLabel(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnexpectedType(::java::util::Set* arg0, ::java::util::Set* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnmatchedQuote($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnreportedExceptionDefaultConstructor(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnreportedExceptionImplicitClose(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::Name* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnreportedExceptionNeedToCatchOrThrow(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnsupportedEncoding($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnsupportedReleaseVersion($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarMightAlreadyBeAssigned(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarMightBeAssignedInLoop(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarMightNotHaveBeenInitialized(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarNotInitializedInDefaultConstructor(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarargsInvalidTrustmeAnno(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarargsInvalidTrustmeAnno(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* WrongNumberTypeArgs($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AbstractMethCantHaveBody;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AddmodsAllModulePathInvalid;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationDeclNotAllowedHere;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationTypeNotApplicable;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationValueMustBeAnnotation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationValueMustBeClassLiteral;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationValueMustBeNameValue;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnnotationValueNotAllowableType;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnonClassImplIntfNoArgs;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnonClassImplIntfNoQualForNew;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AnonClassImplIntfNoTypeargs;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ArrayAndReceiver;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ArrayDimensionMissing;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AssertAsIdentifier;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* AttributeValueMustBeConstant;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* BadFunctionalIntfAnno;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* BreakOutsideSwitchExpression;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* BreakOutsideSwitchLoop;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CannotCreateArrayWithDiamond;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CannotCreateArrayWithTypeArguments;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantAssignValToThis;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantExtendIntfAnnotation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantInheritFromAnon;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantReadFile;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CantSelectStaticClassFromParamType;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* CatchWithoutTry;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ClassNotAllowed;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ConstExprReq;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ContOutsideLoop;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ContinueOutsideSwitchExpression;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcBadEntity;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcBadInlineTag;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcGtExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcIdentifierExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcMalformedHtml;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcMissingSemicolon;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcNoContent;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcNoTagName;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcRefBadParens;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcRefSyntaxError;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcRefUnexpectedInput;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcUnexpectedContent;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcUnterminatedInlineTag;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcUnterminatedSignature;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DcUnterminatedString;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DefaultAllowedInIntfAnnotationMember;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DotClassExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateCaseLabel;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateDefaultLabel;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* DuplicateTotalPattern;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ElseWithoutIf;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EmptyAArgument;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EmptyCharLit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumAnnotationMustBeEnumConstant;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumAsIdentifier;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumCantBeInstantiated;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumConstantExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumConstantNotExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumLabelMustBeUnqualifiedEnum;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumNoFinalize;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumNoSubclassing;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* EnumTypesNotExtensible;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* Error;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ExpectedModule;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ExpectedModuleOrOpen;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ExpressionNotAllowableAsAnnotationValue;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FileSbOnSourceOrPatchPathForModule;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FinallyWithoutTry;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FlowsThroughFromPattern;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FlowsThroughToPattern;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FpNumberTooLarge;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* FpNumberTooSmall;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* GenericArrayCreation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* GenericThrowable;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalArrayCreationBothDimensionAndInitialization;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalDot;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalEnumStaticRef;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalEscChar;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalForwardRef;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalLineEndInCharLit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalNonasciiDigit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalParenthesizedExpression;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalSelfRef;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalStartOfExpr;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalStartOfStmt;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalStartOfType;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalTextBlockOpen;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalUnderscore;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IllegalUnicodeEsc;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ImproperlyFormedTypeInnerRawParam;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ImproperlyFormedTypeParamMissing;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InitializerMustBeAbleToCompleteNormally;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InitializerNotAllowed;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InstanceInitializerNotAllowedInRecords;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IntfAnnotationMembersCantHaveParams;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IntfAnnotationMembersCantHaveTypeParams;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IntfExpectedHere;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IntfMethCantHaveBody;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IntfNotAllowedHere;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidAnnotationMemberType;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidBinaryNumber;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidHexNumber;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidMethDeclRetTypeReq;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidModuleDirective;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* InvalidYield;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* IoException;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LambdaBodyNeitherValueNorVoidCompatible;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitCode;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitCodeTooLargeForTryStmt;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitDimensions;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitLocals;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitParameters;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitPool;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitPoolInClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitStack;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LimitString;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* LocalEnum;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MalformedFpLit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MatchBindingExists;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MethodDoesNotOverrideSuperclass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MissingMethBodyOrDeclAbstract;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MissingRetStmt;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModuleDeclSbInModuleInfoJava;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModuleNotFoundOnModuleSourcePath;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ModulesourcepathMustBeSpecifiedWithDashMOption;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* MultipleValuesForModuleSourcePath;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NameReservedForInternalUse;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NativeMethCantHaveBody;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NewNotAllowedInAnnotation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoAnnotationsOnDotClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoIntfExpectedHere;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoMatchEntry;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoOpensUnlessStrong;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoOutputDir;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoPkgInModuleInfoJava;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoSourceFiles;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoSourceFilesClasses;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoSwitchExpression;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NoSwitchExpressionQualify;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NonSealedOrSealedExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NonSealedSealedOrFinalExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotExhaustive;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotExhaustiveStatement;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotInModuleOnModuleSourcePath;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* NotStmt;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* OutputDirMustBeSpecifiedWithDashMOption;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PatternDominated;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PatternExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PkgAnnotationsSbInPackageInfoJava;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PrematureEof;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* PreviewWithoutSourceOrRelease;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcCantCreateLoader;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcNoService;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcServiceProblem;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProcessorpathNoProcessormodulepath;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ProfileBootclasspathConflict;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ReceiverParameterNotApplicableConstructorToplevelClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RecordCannotDeclareInstanceFields;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RecordCantDeclareFieldModifiers;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RecordComponentAndOldArraySyntax;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RecordHeaderExpected;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RecursiveCtorInvocation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RepeatedAnnotationTarget;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RepeatedInterface;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RepeatedModifier;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RetOutsideMeth;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ReturnOutsideSwitchExpression;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* RuleCompletesNormally;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SealedClassMustHaveSubclasses;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SealedOrNonSealedLocalClassesNotAllowed;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ServiceImplementationMustBeSubtypeOfServiceInterface;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ServiceImplementationProviderReturnMustBeSubtypeOfServiceInterface;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SignatureDoesntMatchIntf;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SignatureDoesntMatchSupertype;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SourcepathModulesourcepathConflict;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* StaticDeclarationNotAllowedInInnerClasses;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* StaticImpOnlyClassesAndInterfaces;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* StaticMethodsCannotBeAnnotatedWithOverride;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* StringConstReq;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SwitchCaseUnexpectedStatement;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SwitchExpressionCompletesNormally;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SwitchExpressionEmpty;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SwitchExpressionNoResultExpressions;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* SwitchMixingCaseTypes;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ThisAsIdentifier;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* ThrowsNotAllowedInIntfAnnotation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TooManyModules;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TotalPatternAndDefault;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TryWithResourcesExprNeedsVar;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TryWithoutCatchFinallyOrResourceDecls;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TwoClassLoaders1;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TypeVarCantBeDeref;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TypeVarMayNotBeFollowedByOtherBounds;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TypeVarMoreThanOnce;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* TypeVarMoreThanOnceInResult;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnclosedCharLit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnclosedComment;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnclosedStrLit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnclosedTextBlock;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnderscoreAsIdentifier;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnderscoreAsIdentifierInLambda;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnexpectedLambda;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnexpectedMref;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnnamedPkgNotAllowedNamedModules;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* UnreachableStmt;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarargsAndOldArraySyntax;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarargsAndReceiver;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VarargsMustBeLast;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VariableNotAllowed;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* VoidNotAllowedHere;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* WarningsAndWerror;
	static ::com::sun::tools::javac::util::JCDiagnostic$Error* WrongReceiver;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_CompilerProperties$Errors_h_