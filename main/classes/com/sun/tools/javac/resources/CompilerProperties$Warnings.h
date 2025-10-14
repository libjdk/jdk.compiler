#ifndef _com_sun_tools_javac_resources_CompilerProperties$Warnings_h_
#define _com_sun_tools_javac_resources_CompilerProperties$Warnings_h_
//$ class com.sun.tools.javac.resources.CompilerProperties$Warnings
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class Profile;
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
				namespace util {
					class JCDiagnostic;
					class JCDiagnostic$Fragment;
					class JCDiagnostic$Warning;
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
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			class SourceVersion;
		}
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

class $export CompilerProperties$Warnings : public ::java::lang::Object {
	$class(CompilerProperties$Warnings, 0, ::java::lang::Object)
public:
	CompilerProperties$Warnings();
	void init$();
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AccessToMemberFromSerializableElement(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AccessToMemberFromSerializableLambda(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AnnotationMethodNotFound(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::Name* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AnnotationMethodNotFoundReason(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AnnotationMethodNotFoundReason(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::util::Name* arg1, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AuxiliaryClassAccessedFromOutsideOfItsSourceFile(::com::sun::tools::javac::code::Symbol* arg0, ::java::io::File* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AuxiliaryClassAccessedFromOutsideOfItsSourceFile(::com::sun::tools::javac::code::Symbol* arg0, ::javax::tools::JavaFileObject* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AuxiliaryClassAccessedFromOutsideOfItsSourceFile(::com::sun::tools::javac::code::Symbol* arg0, ::java::nio::file::Path* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AuxiliaryClassAccessedFromOutsideOfItsSourceFile(::com::sun::tools::javac::code::Type* arg0, ::java::io::File* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AuxiliaryClassAccessedFromOutsideOfItsSourceFile(::com::sun::tools::javac::code::Type* arg0, ::javax::tools::JavaFileObject* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AuxiliaryClassAccessedFromOutsideOfItsSourceFile(::com::sun::tools::javac::code::Type* arg0, ::java::nio::file::Path* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* BadNameForOption(::com::sun::tools::javac::main::Option* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* BigMajorVersion(::java::io::File* arg0, int32_t arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* BigMajorVersion(::javax::tools::JavaFileObject* arg0, int32_t arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* BigMajorVersion(::java::nio::file::Path* arg0, int32_t arg1, int32_t arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ConstantSVUID(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DeclaredUsingPreview(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DeprecatedAnnotationHasNoEffect(::com::sun::tools::javac::code::Kinds$KindName* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DirPathElementNotDirectory(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DirPathElementNotDirectory(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DirPathElementNotDirectory(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DirPathElementNotFound(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* FileFromFuture(::java::io::File* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* FileFromFuture(::javax::tools::JavaFileObject* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* FileFromFuture(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ForwardRef(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* FutureAttr(::com::sun::tools::javac::util::Name* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* HasBeenDeprecated(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* HasBeenDeprecatedForRemoval(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* HasBeenDeprecatedForRemovalModule(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* HasBeenDeprecatedModule(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* IllegalRefToRestrictedType(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ImproperSVUID(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* IncubatingModules($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* InexactNonVarargsCall(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* InvalidArchiveFile(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* InvalidPath($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* IsPreview(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* IsPreviewReflective(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* LeaksNotAccessible(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* LeaksNotAccessibleNotRequiredTransitive(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* LeaksNotAccessibleUnexported(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* LeaksNotAccessibleUnexportedQualified(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* LintOption(::com::sun::tools::javac::main::Option* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* LocnUnknownFileOnModulePath(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* LongSVUID(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* MissingExplicitCtor(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* MissingSVUID(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ModuleForOptionNotFound(::com::sun::tools::javac::main::Option* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ModuleNotFound(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OptionObsoleteSource($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OptionObsoleteTarget(::com::sun::tools::javac::jvm::Target* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OptionParametersUnsupported(::com::sun::tools::javac::jvm::Target* arg0, ::com::sun::tools::javac::jvm::Target* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OutdirIsInExplodedModule(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideBridge(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideBridge(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideEqualsButNotHashcode(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideUncheckedRet(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideUncheckedRet(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideUncheckedThrown(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideUncheckedThrown(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideVarargsExtra(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideVarargsExtra(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideVarargsMissing(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OverrideVarargsMissing(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PackageEmptyOrNotFound(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PathElementNotFound(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PkgInfoAlreadySeen(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PoorChoiceForModuleName(::com::sun::tools::javac::util::Name* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PositionOverflow(int32_t arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PotentiallyAmbiguousOverload(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::code::Symbol* arg2, ::com::sun::tools::javac::code::Symbol* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PreviewFeatureUse(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PreviewFeatureUse(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PreviewFeatureUseClassfile(::javax::tools::JavaFileObject* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PreviewFeatureUsePlural(::com::sun::tools::javac::util::JCDiagnostic* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PreviewFeatureUsePlural(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProbFoundReq(::com::sun::tools::javac::util::JCDiagnostic* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProbFoundReq(::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg0, ::com::sun::tools::javac::code::Type* arg1, ::com::sun::tools::javac::code::Type* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcAnnotationsWithoutProcessors(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcDuplicateOptionName($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcDuplicateSupportedAnnotation($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcFileCreateLastRound($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcFileReopening($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcIllegalFileName($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcMalformedSupportedString($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcMessager($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcPackageDoesNotExist($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcProcessorIncompatibleSourceVersion(::javax::lang::model::SourceVersion* arg0, $String* arg1, $String* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcRedundantTypesWithWildcard($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcSuspiciousClassName($String* arg0, $String* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcTypeAlreadyExists($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcTypeRecreate($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcUnclosedTypeFiles(::java::util::Set* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcUnmatchedProcessorOptions($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProfileTargetConflict(::com::sun::tools::javac::jvm::Profile* arg0, ::com::sun::tools::javac::jvm::Target* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* RawClassUse(::com::sun::tools::javac::code::Type* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* RedundantCast(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* RestrictedTypeNotAllowed(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* RestrictedTypeNotAllowedPreview(::com::sun::tools::javac::util::Name* arg0, ::com::sun::tools::javac::code::Source* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* SelfRef(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ServiceProvidedButNotExportedOrUsed(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* SourceNoBootclasspath($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* SourceNoSystemModulesPath($String* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* SourceTargetConflict($String* arg0, ::com::sun::tools::javac::jvm::Target* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* StaticNotQualifiedByType(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::code::Symbol* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* SunProprietary(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* TargetDefaultSourceConflict($String* arg0, ::com::sun::tools::javac::jvm::Target* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* TryResourceNotReferenced(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* TryResourceThrowsInterruptedExc(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UncheckedAssignToVar(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UncheckedCallMbrOfRawType(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::code::Type* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UncheckedGenericArrayCreation(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UncheckedMethInvocationApplied(::com::sun::tools::javac::code::Kinds$KindName* arg0, ::com::sun::tools::javac::util::Name* arg1, Object$* arg2, Object$* arg3, ::com::sun::tools::javac::code::Kinds$KindName* arg4, ::com::sun::tools::javac::code::Symbol* arg5);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UncheckedVarargsNonReifiableType(::com::sun::tools::javac::code::Type* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UnexpectedArchiveFile(::java::nio::file::Path* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UnknownEnumConstant(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::Name* arg2);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UnknownEnumConstantReason(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::Name* arg2, ::com::sun::tools::javac::util::JCDiagnostic* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UnknownEnumConstantReason(::javax::tools::JavaFileObject* arg0, ::com::sun::tools::javac::code::Symbol* arg1, ::com::sun::tools::javac::util::Name* arg2, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg3);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UnreachableCatch(::java::util::List* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UnreachableCatch1(::java::util::List* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* VarargsRedundantTrustmeAnno(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* VarargsRedundantTrustmeAnno(::com::sun::tools::javac::code::Symbol* arg0, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* arg1);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* VarargsUnsafeUseVarargsParam(::com::sun::tools::javac::code::Symbol* arg0);
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AddopensIgnored;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* AttemptToSynchronizeOnInstanceOfValueBasedClass;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DiamondRedundantArgs;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DivZero;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* DoclintNotAvailable;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* EmptyIf;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* FinallyCannotComplete;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* IllegalCharForEncoding;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* InconsistentWhiteSpaceIndentation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* InvalidYield;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* LocalRedundantType;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* MethodRedundantTypeargs;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* MissingDeprecatedAnnotation;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* OptionObsoleteSuppression;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PossibleFallThroughIntoCase;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* PotentialLambdaFound;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcProcOnlyRequestedNoProcs;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcUseImplicit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* ProcUseProcOrImplicit;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* RequiresAutomatic;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* RequiresTransitiveAutomatic;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* Strictfp;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* TrailingWhiteSpaceWillBeRemoved;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* TryExplicitCloseCall;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UncheckedAssign;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UncheckedCastToType;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* UnderscoreAsIdentifier;
	static ::com::sun::tools::javac::util::JCDiagnostic$Warning* Warning;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_CompilerProperties$Warnings_h_