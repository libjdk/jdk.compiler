#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>

#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/File.h>
#include <java/nio/file/Path.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Source = ::com::sun::tools::javac::code::Source;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties = ::com::sun::tools::javac::resources::CompilerProperties;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Name = ::com::sun::tools::javac::util::Name;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$FieldInfo _CompilerProperties$Warnings_FieldInfo_[] = {
	{"AddopensIgnored", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, AddopensIgnored)},
	{"AttemptToSynchronizeOnInstanceOfValueBasedClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, AttemptToSynchronizeOnInstanceOfValueBasedClass)},
	{"DiamondRedundantArgs", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, DiamondRedundantArgs)},
	{"DivZero", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, DivZero)},
	{"DoclintNotAvailable", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, DoclintNotAvailable)},
	{"EmptyIf", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, EmptyIf)},
	{"FinallyCannotComplete", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, FinallyCannotComplete)},
	{"IllegalCharForEncoding", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, IllegalCharForEncoding)},
	{"InconsistentWhiteSpaceIndentation", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, InconsistentWhiteSpaceIndentation)},
	{"InvalidYield", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, InvalidYield)},
	{"LocalRedundantType", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, LocalRedundantType)},
	{"MethodRedundantTypeargs", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, MethodRedundantTypeargs)},
	{"MissingDeprecatedAnnotation", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, MissingDeprecatedAnnotation)},
	{"OptionObsoleteSuppression", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, OptionObsoleteSuppression)},
	{"PossibleFallThroughIntoCase", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, PossibleFallThroughIntoCase)},
	{"PotentialLambdaFound", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, PotentialLambdaFound)},
	{"ProcProcOnlyRequestedNoProcs", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, ProcProcOnlyRequestedNoProcs)},
	{"ProcUseImplicit", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, ProcUseImplicit)},
	{"ProcUseProcOrImplicit", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, ProcUseProcOrImplicit)},
	{"RequiresAutomatic", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, RequiresAutomatic)},
	{"RequiresTransitiveAutomatic", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, RequiresTransitiveAutomatic)},
	{"Strictfp", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, Strictfp)},
	{"TrailingWhiteSpaceWillBeRemoved", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, TrailingWhiteSpaceWillBeRemoved)},
	{"TryExplicitCloseCall", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, TryExplicitCloseCall)},
	{"UncheckedAssign", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, UncheckedAssign)},
	{"UncheckedCastToType", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, UncheckedCastToType)},
	{"UnderscoreAsIdentifier", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, UnderscoreAsIdentifier)},
	{"Warning", "Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Warnings, Warning)},
	{}
};

$MethodInfo _CompilerProperties$Warnings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompilerProperties$Warnings::*)()>(&CompilerProperties$Warnings::init$))},
	{"AccessToMemberFromSerializableElement", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::AccessToMemberFromSerializableElement))},
	{"AccessToMemberFromSerializableLambda", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::AccessToMemberFromSerializableLambda))},
	{"AnnotationMethodNotFound", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*,$Name*)>(&CompilerProperties$Warnings::AnnotationMethodNotFound))},
	{"AnnotationMethodNotFoundReason", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*,$Name*,$JCDiagnostic*)>(&CompilerProperties$Warnings::AnnotationMethodNotFoundReason))},
	{"AnnotationMethodNotFoundReason", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*,$Name*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Warnings::AnnotationMethodNotFoundReason))},
	{"AuxiliaryClassAccessedFromOutsideOfItsSourceFile", "(Lcom/sun/tools/javac/code/Symbol;Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$File*)>(&CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile))},
	{"AuxiliaryClassAccessedFromOutsideOfItsSourceFile", "(Lcom/sun/tools/javac/code/Symbol;Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$JavaFileObject*)>(&CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile))},
	{"AuxiliaryClassAccessedFromOutsideOfItsSourceFile", "(Lcom/sun/tools/javac/code/Symbol;Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$Path*)>(&CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile))},
	{"AuxiliaryClassAccessedFromOutsideOfItsSourceFile", "(Lcom/sun/tools/javac/code/Type;Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*,$File*)>(&CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile))},
	{"AuxiliaryClassAccessedFromOutsideOfItsSourceFile", "(Lcom/sun/tools/javac/code/Type;Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*,$JavaFileObject*)>(&CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile))},
	{"AuxiliaryClassAccessedFromOutsideOfItsSourceFile", "(Lcom/sun/tools/javac/code/Type;Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*,$Path*)>(&CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile))},
	{"BadNameForOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Option*,$String*)>(&CompilerProperties$Warnings::BadNameForOption))},
	{"BigMajorVersion", "(Ljava/io/File;II)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($File*,int32_t,int32_t)>(&CompilerProperties$Warnings::BigMajorVersion))},
	{"BigMajorVersion", "(Ljavax/tools/JavaFileObject;II)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JavaFileObject*,int32_t,int32_t)>(&CompilerProperties$Warnings::BigMajorVersion))},
	{"BigMajorVersion", "(Ljava/nio/file/Path;II)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*,int32_t,int32_t)>(&CompilerProperties$Warnings::BigMajorVersion))},
	{"ConstantSVUID", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::ConstantSVUID))},
	{"DeclaredUsingPreview", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Kinds$KindName*,$Symbol*)>(&CompilerProperties$Warnings::DeclaredUsingPreview))},
	{"DeprecatedAnnotationHasNoEffect", "(Lcom/sun/tools/javac/code/Kinds$KindName;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Kinds$KindName*)>(&CompilerProperties$Warnings::DeprecatedAnnotationHasNoEffect))},
	{"DirPathElementNotDirectory", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($File*)>(&CompilerProperties$Warnings::DirPathElementNotDirectory))},
	{"DirPathElementNotDirectory", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JavaFileObject*)>(&CompilerProperties$Warnings::DirPathElementNotDirectory))},
	{"DirPathElementNotDirectory", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*)>(&CompilerProperties$Warnings::DirPathElementNotDirectory))},
	{"DirPathElementNotFound", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*)>(&CompilerProperties$Warnings::DirPathElementNotFound))},
	{"FileFromFuture", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($File*)>(&CompilerProperties$Warnings::FileFromFuture))},
	{"FileFromFuture", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JavaFileObject*)>(&CompilerProperties$Warnings::FileFromFuture))},
	{"FileFromFuture", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*)>(&CompilerProperties$Warnings::FileFromFuture))},
	{"ForwardRef", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::ForwardRef))},
	{"FutureAttr", "(Lcom/sun/tools/javac/util/Name;IIII)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Name*,int32_t,int32_t,int32_t,int32_t)>(&CompilerProperties$Warnings::FutureAttr))},
	{"HasBeenDeprecated", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Warnings::HasBeenDeprecated))},
	{"HasBeenDeprecatedForRemoval", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Warnings::HasBeenDeprecatedForRemoval))},
	{"HasBeenDeprecatedForRemovalModule", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::HasBeenDeprecatedForRemovalModule))},
	{"HasBeenDeprecatedModule", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::HasBeenDeprecatedModule))},
	{"IllegalRefToRestrictedType", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Name*)>(&CompilerProperties$Warnings::IllegalRefToRestrictedType))},
	{"ImproperSVUID", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::ImproperSVUID))},
	{"IncubatingModules", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::IncubatingModules))},
	{"InexactNonVarargsCall", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*,$Type*)>(&CompilerProperties$Warnings::InexactNonVarargsCall))},
	{"InvalidArchiveFile", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*)>(&CompilerProperties$Warnings::InvalidArchiveFile))},
	{"InvalidPath", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::InvalidPath))},
	{"IsPreview", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::IsPreview))},
	{"IsPreviewReflective", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::IsPreviewReflective))},
	{"LeaksNotAccessible", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Kinds$KindName*,$Symbol*,$Symbol*)>(&CompilerProperties$Warnings::LeaksNotAccessible))},
	{"LeaksNotAccessibleNotRequiredTransitive", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Kinds$KindName*,$Symbol*,$Symbol*)>(&CompilerProperties$Warnings::LeaksNotAccessibleNotRequiredTransitive))},
	{"LeaksNotAccessibleUnexported", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Kinds$KindName*,$Symbol*,$Symbol*)>(&CompilerProperties$Warnings::LeaksNotAccessibleUnexported))},
	{"LeaksNotAccessibleUnexportedQualified", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Kinds$KindName*,$Symbol*,$Symbol*)>(&CompilerProperties$Warnings::LeaksNotAccessibleUnexportedQualified))},
	{"LintOption", "(Lcom/sun/tools/javac/main/Option;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Option*)>(&CompilerProperties$Warnings::LintOption))},
	{"LocnUnknownFileOnModulePath", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*)>(&CompilerProperties$Warnings::LocnUnknownFileOnModulePath))},
	{"LongSVUID", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::LongSVUID))},
	{"MissingExplicitCtor", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Warnings::MissingExplicitCtor))},
	{"MissingSVUID", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::MissingSVUID))},
	{"ModuleForOptionNotFound", "(Lcom/sun/tools/javac/main/Option;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Option*,$Symbol*)>(&CompilerProperties$Warnings::ModuleForOptionNotFound))},
	{"ModuleNotFound", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::ModuleNotFound))},
	{"OptionObsoleteSource", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::OptionObsoleteSource))},
	{"OptionObsoleteTarget", "(Lcom/sun/tools/javac/jvm/Target;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Target*)>(&CompilerProperties$Warnings::OptionObsoleteTarget))},
	{"OptionParametersUnsupported", "(Lcom/sun/tools/javac/jvm/Target;Lcom/sun/tools/javac/jvm/Target;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Target*,$Target*)>(&CompilerProperties$Warnings::OptionParametersUnsupported))},
	{"OutdirIsInExplodedModule", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*)>(&CompilerProperties$Warnings::OutdirIsInExplodedModule))},
	{"OverrideBridge", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic*)>(&CompilerProperties$Warnings::OverrideBridge))},
	{"OverrideBridge", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Warnings::OverrideBridge))},
	{"OverrideEqualsButNotHashcode", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::OverrideEqualsButNotHashcode))},
	{"OverrideUncheckedRet", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic*,$Type*,$Type*)>(&CompilerProperties$Warnings::OverrideUncheckedRet))},
	{"OverrideUncheckedRet", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic$Fragment*,$Type*,$Type*)>(&CompilerProperties$Warnings::OverrideUncheckedRet))},
	{"OverrideUncheckedThrown", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic*,$Type*)>(&CompilerProperties$Warnings::OverrideUncheckedThrown))},
	{"OverrideUncheckedThrown", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic$Fragment*,$Type*)>(&CompilerProperties$Warnings::OverrideUncheckedThrown))},
	{"OverrideVarargsExtra", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic*)>(&CompilerProperties$Warnings::OverrideVarargsExtra))},
	{"OverrideVarargsExtra", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Warnings::OverrideVarargsExtra))},
	{"OverrideVarargsMissing", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic*)>(&CompilerProperties$Warnings::OverrideVarargsMissing))},
	{"OverrideVarargsMissing", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Warnings::OverrideVarargsMissing))},
	{"PackageEmptyOrNotFound", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::PackageEmptyOrNotFound))},
	{"PathElementNotFound", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*)>(&CompilerProperties$Warnings::PathElementNotFound))},
	{"PkgInfoAlreadySeen", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::PkgInfoAlreadySeen))},
	{"PoorChoiceForModuleName", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Name*)>(&CompilerProperties$Warnings::PoorChoiceForModuleName))},
	{"PositionOverflow", "(I)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)(int32_t)>(&CompilerProperties$Warnings::PositionOverflow))},
	{"PotentiallyAmbiguousOverload", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Warnings::PotentiallyAmbiguousOverload))},
	{"PreviewFeatureUse", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic*)>(&CompilerProperties$Warnings::PreviewFeatureUse))},
	{"PreviewFeatureUse", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Warnings::PreviewFeatureUse))},
	{"PreviewFeatureUseClassfile", "(Ljavax/tools/JavaFileObject;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JavaFileObject*,$String*)>(&CompilerProperties$Warnings::PreviewFeatureUseClassfile))},
	{"PreviewFeatureUsePlural", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic*)>(&CompilerProperties$Warnings::PreviewFeatureUsePlural))},
	{"PreviewFeatureUsePlural", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Warnings::PreviewFeatureUsePlural))},
	{"ProbFoundReq", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic*,$Type*,$Type*)>(&CompilerProperties$Warnings::ProbFoundReq))},
	{"ProbFoundReq", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JCDiagnostic$Fragment*,$Type*,$Type*)>(&CompilerProperties$Warnings::ProbFoundReq))},
	{"ProcAnnotationsWithoutProcessors", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", "(Ljava/util/Set<+Ljava/lang/String;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Set*)>(&CompilerProperties$Warnings::ProcAnnotationsWithoutProcessors))},
	{"ProcDuplicateOptionName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*,$String*)>(&CompilerProperties$Warnings::ProcDuplicateOptionName))},
	{"ProcDuplicateSupportedAnnotation", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*,$String*)>(&CompilerProperties$Warnings::ProcDuplicateSupportedAnnotation))},
	{"ProcFileCreateLastRound", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcFileCreateLastRound))},
	{"ProcFileReopening", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcFileReopening))},
	{"ProcIllegalFileName", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcIllegalFileName))},
	{"ProcMalformedSupportedString", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*,$String*)>(&CompilerProperties$Warnings::ProcMalformedSupportedString))},
	{"ProcMessager", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcMessager))},
	{"ProcPackageDoesNotExist", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcPackageDoesNotExist))},
	{"ProcProcessorIncompatibleSourceVersion", "(Ljavax/lang/model/SourceVersion;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($SourceVersion*,$String*,$String*)>(&CompilerProperties$Warnings::ProcProcessorIncompatibleSourceVersion))},
	{"ProcRedundantTypesWithWildcard", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcRedundantTypesWithWildcard))},
	{"ProcSuspiciousClassName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*,$String*)>(&CompilerProperties$Warnings::ProcSuspiciousClassName))},
	{"ProcTypeAlreadyExists", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcTypeAlreadyExists))},
	{"ProcTypeRecreate", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcTypeRecreate))},
	{"ProcUnclosedTypeFiles", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", "(Ljava/util/Set<+Ljava/lang/String;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Set*)>(&CompilerProperties$Warnings::ProcUnclosedTypeFiles))},
	{"ProcUnmatchedProcessorOptions", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::ProcUnmatchedProcessorOptions))},
	{"ProfileTargetConflict", "(Lcom/sun/tools/javac/jvm/Profile;Lcom/sun/tools/javac/jvm/Target;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Profile*,$Target*)>(&CompilerProperties$Warnings::ProfileTargetConflict))},
	{"RawClassUse", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*,$Type*)>(&CompilerProperties$Warnings::RawClassUse))},
	{"RedundantCast", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*)>(&CompilerProperties$Warnings::RedundantCast))},
	{"RestrictedTypeNotAllowed", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Name*,$Source*)>(&CompilerProperties$Warnings::RestrictedTypeNotAllowed))},
	{"RestrictedTypeNotAllowedPreview", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Name*,$Source*)>(&CompilerProperties$Warnings::RestrictedTypeNotAllowedPreview))},
	{"SelfRef", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::SelfRef))},
	{"ServiceProvidedButNotExportedOrUsed", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::ServiceProvidedButNotExportedOrUsed))},
	{"SourceNoBootclasspath", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::SourceNoBootclasspath))},
	{"SourceNoSystemModulesPath", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*)>(&CompilerProperties$Warnings::SourceNoSystemModulesPath))},
	{"SourceTargetConflict", "(Ljava/lang/String;Lcom/sun/tools/javac/jvm/Target;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*,$Target*)>(&CompilerProperties$Warnings::SourceTargetConflict))},
	{"StaticNotQualifiedByType", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Kinds$KindName*,$Symbol*)>(&CompilerProperties$Warnings::StaticNotQualifiedByType))},
	{"SunProprietary", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::SunProprietary))},
	{"TargetDefaultSourceConflict", "(Ljava/lang/String;Lcom/sun/tools/javac/jvm/Target;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($String*,$Target*)>(&CompilerProperties$Warnings::TargetDefaultSourceConflict))},
	{"TryResourceNotReferenced", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::TryResourceNotReferenced))},
	{"TryResourceThrowsInterruptedExc", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*)>(&CompilerProperties$Warnings::TryResourceThrowsInterruptedExc))},
	{"UncheckedAssignToVar", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$Type*)>(&CompilerProperties$Warnings::UncheckedAssignToVar))},
	{"UncheckedCallMbrOfRawType", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$Type*)>(&CompilerProperties$Warnings::UncheckedCallMbrOfRawType))},
	{"UncheckedGenericArrayCreation", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*)>(&CompilerProperties$Warnings::UncheckedGenericArrayCreation))},
	{"UncheckedMethInvocationApplied", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Object;Ljava/lang/Object;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Kinds$KindName*,$Name*,Object$*,Object$*,$Kinds$KindName*,$Symbol*)>(&CompilerProperties$Warnings::UncheckedMethInvocationApplied))},
	{"UncheckedVarargsNonReifiableType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Type*)>(&CompilerProperties$Warnings::UncheckedVarargsNonReifiableType))},
	{"UnexpectedArchiveFile", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Path*)>(&CompilerProperties$Warnings::UnexpectedArchiveFile))},
	{"UnknownEnumConstant", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JavaFileObject*,$Symbol*,$Name*)>(&CompilerProperties$Warnings::UnknownEnumConstant))},
	{"UnknownEnumConstantReason", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JavaFileObject*,$Symbol*,$Name*,$JCDiagnostic*)>(&CompilerProperties$Warnings::UnknownEnumConstantReason))},
	{"UnknownEnumConstantReason", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($JavaFileObject*,$Symbol*,$Name*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Warnings::UnknownEnumConstantReason))},
	{"UnreachableCatch", "(Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($List*)>(&CompilerProperties$Warnings::UnreachableCatch))},
	{"UnreachableCatch1", "(Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($List*)>(&CompilerProperties$Warnings::UnreachableCatch1))},
	{"VarargsRedundantTrustmeAnno", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$JCDiagnostic*)>(&CompilerProperties$Warnings::VarargsRedundantTrustmeAnno))},
	{"VarargsRedundantTrustmeAnno", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Warnings::VarargsRedundantTrustmeAnno))},
	{"VarargsUnsafeUseVarargsParam", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Warning;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Warning*(*)($Symbol*)>(&CompilerProperties$Warnings::VarargsUnsafeUseVarargsParam))},
	{}
};

$InnerClassInfo _CompilerProperties$Warnings_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.resources.CompilerProperties$Warnings", "com.sun.tools.javac.resources.CompilerProperties", "Warnings", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CompilerProperties$Warnings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.resources.CompilerProperties$Warnings",
	"java.lang.Object",
	nullptr,
	_CompilerProperties$Warnings_FieldInfo_,
	_CompilerProperties$Warnings_MethodInfo_,
	nullptr,
	nullptr,
	_CompilerProperties$Warnings_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.resources.CompilerProperties"
};

$Object* allocate$CompilerProperties$Warnings($Class* clazz) {
	return $of($alloc(CompilerProperties$Warnings));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AddopensIgnored = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::AttemptToSynchronizeOnInstanceOfValueBasedClass = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::DiamondRedundantArgs = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::DivZero = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::DoclintNotAvailable = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::EmptyIf = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::FinallyCannotComplete = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::IllegalCharForEncoding = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::InconsistentWhiteSpaceIndentation = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::InvalidYield = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::LocalRedundantType = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::MethodRedundantTypeargs = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::MissingDeprecatedAnnotation = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::OptionObsoleteSuppression = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::PossibleFallThroughIntoCase = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::PotentialLambdaFound = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcProcOnlyRequestedNoProcs = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcUseImplicit = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcUseProcOrImplicit = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::RequiresAutomatic = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::RequiresTransitiveAutomatic = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::Strictfp = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::TrailingWhiteSpaceWillBeRemoved = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::TryExplicitCloseCall = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::UncheckedAssign = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::UncheckedCastToType = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::UnderscoreAsIdentifier = nullptr;
$JCDiagnostic$Warning* CompilerProperties$Warnings::Warning = nullptr;

void CompilerProperties$Warnings::init$() {
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AccessToMemberFromSerializableElement($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "access.to.member.from.serializable.element"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AccessToMemberFromSerializableLambda($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "access.to.member.from.serializable.lambda"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AnnotationMethodNotFound($Type* arg0, $Name* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "annotation.method.not.found"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AnnotationMethodNotFoundReason($Type* arg0, $Name* arg1, $JCDiagnostic* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "annotation.method.not.found.reason"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AnnotationMethodNotFoundReason($Type* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "annotation.method.not.found.reason"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile($Symbol* arg0, $File* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "auxiliary.class.accessed.from.outside.of.its.source.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile($Symbol* arg0, $JavaFileObject* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "auxiliary.class.accessed.from.outside.of.its.source.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile($Symbol* arg0, $Path* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "auxiliary.class.accessed.from.outside.of.its.source.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile($Type* arg0, $File* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "auxiliary.class.accessed.from.outside.of.its.source.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile($Type* arg0, $JavaFileObject* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "auxiliary.class.accessed.from.outside.of.its.source.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::AuxiliaryClassAccessedFromOutsideOfItsSourceFile($Type* arg0, $Path* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "auxiliary.class.accessed.from.outside.of.its.source.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::BadNameForOption($Option* arg0, $String* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "bad.name.for.option"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::BigMajorVersion($File* arg0, int32_t arg1, int32_t arg2) {
	$init(CompilerProperties$Warnings);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Warning, "compiler"_s, "big.major.version"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1))),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::BigMajorVersion($JavaFileObject* arg0, int32_t arg1, int32_t arg2) {
	$init(CompilerProperties$Warnings);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Warning, "compiler"_s, "big.major.version"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1))),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::BigMajorVersion($Path* arg0, int32_t arg1, int32_t arg2) {
	$init(CompilerProperties$Warnings);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Warning, "compiler"_s, "big.major.version"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1))),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ConstantSVUID($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "constant.SVUID"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::DeclaredUsingPreview($Kinds$KindName* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "declared.using.preview"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::DeprecatedAnnotationHasNoEffect($Kinds$KindName* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "deprecated.annotation.has.no.effect"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::DirPathElementNotDirectory($File* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "dir.path.element.not.directory"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::DirPathElementNotDirectory($JavaFileObject* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "dir.path.element.not.directory"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::DirPathElementNotDirectory($Path* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "dir.path.element.not.directory"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::DirPathElementNotFound($Path* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "dir.path.element.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::FileFromFuture($File* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "file.from.future"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::FileFromFuture($JavaFileObject* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "file.from.future"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::FileFromFuture($Path* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "file.from.future"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ForwardRef($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "forward.ref"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::FutureAttr($Name* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	$init(CompilerProperties$Warnings);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Warning, "compiler"_s, "future.attr"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1))),
		$($of($Integer::valueOf(arg2))),
		$($of($Integer::valueOf(arg3))),
		$($of($Integer::valueOf(arg4)))
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::HasBeenDeprecated($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "has.been.deprecated"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::HasBeenDeprecatedForRemoval($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "has.been.deprecated.for.removal"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::HasBeenDeprecatedForRemovalModule($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "has.been.deprecated.for.removal.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::HasBeenDeprecatedModule($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "has.been.deprecated.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::IllegalRefToRestrictedType($Name* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "illegal.ref.to.restricted.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ImproperSVUID($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "improper.SVUID"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::IncubatingModules($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "incubating.modules"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::InexactNonVarargsCall($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "inexact.non-varargs.call"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::InvalidArchiveFile($Path* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "invalid.archive.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::InvalidPath($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "invalid.path"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::IsPreview($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "is.preview"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::IsPreviewReflective($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "is.preview.reflective"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::LeaksNotAccessible($Kinds$KindName* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "leaks.not.accessible"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::LeaksNotAccessibleNotRequiredTransitive($Kinds$KindName* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "leaks.not.accessible.not.required.transitive"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::LeaksNotAccessibleUnexported($Kinds$KindName* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "leaks.not.accessible.unexported"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::LeaksNotAccessibleUnexportedQualified($Kinds$KindName* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "leaks.not.accessible.unexported.qualified"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::LintOption($Option* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "lintOption"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::LocnUnknownFileOnModulePath($Path* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "locn.unknown.file.on.module.path"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::LongSVUID($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "long.SVUID"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::MissingExplicitCtor($Symbol* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "missing-explicit-ctor"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::MissingSVUID($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "missing.SVUID"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ModuleForOptionNotFound($Option* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "module.for.option.not.found"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ModuleNotFound($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "module.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OptionObsoleteSource($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "option.obsolete.source"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OptionObsoleteTarget($Target* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "option.obsolete.target"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OptionParametersUnsupported($Target* arg0, $Target* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "option.parameters.unsupported"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OutdirIsInExplodedModule($Path* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "outdir.is.in.exploded.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideBridge($JCDiagnostic* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.bridge"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideBridge($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.bridge"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideEqualsButNotHashcode($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.equals.but.not.hashcode"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideUncheckedRet($JCDiagnostic* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.unchecked.ret"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideUncheckedRet($JCDiagnostic$Fragment* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.unchecked.ret"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideUncheckedThrown($JCDiagnostic* arg0, $Type* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.unchecked.thrown"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideUncheckedThrown($JCDiagnostic$Fragment* arg0, $Type* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.unchecked.thrown"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideVarargsExtra($JCDiagnostic* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.varargs.extra"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideVarargsExtra($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.varargs.extra"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideVarargsMissing($JCDiagnostic* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.varargs.missing"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::OverrideVarargsMissing($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "override.varargs.missing"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PackageEmptyOrNotFound($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "package.empty.or.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PathElementNotFound($Path* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "path.element.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PkgInfoAlreadySeen($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "pkg-info.already.seen"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PoorChoiceForModuleName($Name* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "poor.choice.for.module.name"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PositionOverflow(int32_t arg0) {
	$init(CompilerProperties$Warnings);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Warning, "compiler"_s, "position.overflow"_s, $$new($ObjectArray, {$($of($Integer::valueOf(arg0)))}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PotentiallyAmbiguousOverload($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "potentially.ambiguous.overload"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PreviewFeatureUse($JCDiagnostic* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "preview.feature.use"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PreviewFeatureUse($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "preview.feature.use"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PreviewFeatureUseClassfile($JavaFileObject* arg0, $String* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "preview.feature.use.classfile"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PreviewFeatureUsePlural($JCDiagnostic* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "preview.feature.use.plural"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::PreviewFeatureUsePlural($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "preview.feature.use.plural"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProbFoundReq($JCDiagnostic* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "prob.found.req"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProbFoundReq($JCDiagnostic$Fragment* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "prob.found.req"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcAnnotationsWithoutProcessors($Set* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.annotations.without.processors"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcDuplicateOptionName($String* arg0, $String* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.duplicate.option.name"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcDuplicateSupportedAnnotation($String* arg0, $String* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.duplicate.supported.annotation"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcFileCreateLastRound($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.file.create.last.round"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcFileReopening($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.file.reopening"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcIllegalFileName($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.illegal.file.name"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcMalformedSupportedString($String* arg0, $String* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.malformed.supported.string"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcMessager($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.messager"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcPackageDoesNotExist($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.package.does.not.exist"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcProcessorIncompatibleSourceVersion($SourceVersion* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.processor.incompatible.source.version"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcRedundantTypesWithWildcard($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.redundant.types.with.wildcard"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcSuspiciousClassName($String* arg0, $String* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.suspicious.class.name"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcTypeAlreadyExists($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.type.already.exists"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcTypeRecreate($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.type.recreate"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcUnclosedTypeFiles($Set* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.unclosed.type.files"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProcUnmatchedProcessorOptions($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "proc.unmatched.processor.options"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ProfileTargetConflict($Profile* arg0, $Target* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "profile.target.conflict"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::RawClassUse($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "raw.class.use"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::RedundantCast($Type* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "redundant.cast"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::RestrictedTypeNotAllowed($Name* arg0, $Source* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "restricted.type.not.allowed"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::RestrictedTypeNotAllowedPreview($Name* arg0, $Source* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "restricted.type.not.allowed.preview"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::SelfRef($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "self.ref"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::ServiceProvidedButNotExportedOrUsed($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "service.provided.but.not.exported.or.used"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::SourceNoBootclasspath($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "source.no.bootclasspath"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::SourceNoSystemModulesPath($String* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "source.no.system.modules.path"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::SourceTargetConflict($String* arg0, $Target* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "source.target.conflict"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::StaticNotQualifiedByType($Kinds$KindName* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "static.not.qualified.by.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::SunProprietary($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "sun.proprietary"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::TargetDefaultSourceConflict($String* arg0, $Target* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "target.default.source.conflict"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::TryResourceNotReferenced($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "try.resource.not.referenced"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::TryResourceThrowsInterruptedExc($Type* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "try.resource.throws.interrupted.exc"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UncheckedAssignToVar($Symbol* arg0, $Type* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unchecked.assign.to.var"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UncheckedCallMbrOfRawType($Symbol* arg0, $Type* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unchecked.call.mbr.of.raw.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UncheckedGenericArrayCreation($Type* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unchecked.generic.array.creation"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UncheckedMethInvocationApplied($Kinds$KindName* arg0, $Name* arg1, Object$* arg2, Object$* arg3, $Kinds$KindName* arg4, $Symbol* arg5) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unchecked.meth.invocation.applied"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		arg2,
		arg3,
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UncheckedVarargsNonReifiableType($Type* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unchecked.varargs.non.reifiable.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UnexpectedArchiveFile($Path* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unexpected.archive.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UnknownEnumConstant($JavaFileObject* arg0, $Symbol* arg1, $Name* arg2) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unknown.enum.constant"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UnknownEnumConstantReason($JavaFileObject* arg0, $Symbol* arg1, $Name* arg2, $JCDiagnostic* arg3) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unknown.enum.constant.reason"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UnknownEnumConstantReason($JavaFileObject* arg0, $Symbol* arg1, $Name* arg2, $JCDiagnostic$Fragment* arg3) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unknown.enum.constant.reason"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UnreachableCatch($List* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unreachable.catch"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::UnreachableCatch1($List* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "unreachable.catch.1"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::VarargsRedundantTrustmeAnno($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "varargs.redundant.trustme.anno"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::VarargsRedundantTrustmeAnno($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "varargs.redundant.trustme.anno"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Warning* CompilerProperties$Warnings::VarargsUnsafeUseVarargsParam($Symbol* arg0) {
	$init(CompilerProperties$Warnings);
	return $new($JCDiagnostic$Warning, "compiler"_s, "varargs.unsafe.use.varargs.param"_s, $$new($ObjectArray, {$of(arg0)}));
}

void clinit$CompilerProperties$Warnings($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CompilerProperties$Warnings::AddopensIgnored, $new($JCDiagnostic$Warning, "compiler"_s, "addopens.ignored"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::AttemptToSynchronizeOnInstanceOfValueBasedClass, $new($JCDiagnostic$Warning, "compiler"_s, "attempt.to.synchronize.on.instance.of.value.based.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::DiamondRedundantArgs, $new($JCDiagnostic$Warning, "compiler"_s, "diamond.redundant.args"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::DivZero, $new($JCDiagnostic$Warning, "compiler"_s, "div.zero"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::DoclintNotAvailable, $new($JCDiagnostic$Warning, "compiler"_s, "doclint.not.available"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::EmptyIf, $new($JCDiagnostic$Warning, "compiler"_s, "empty.if"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::FinallyCannotComplete, $new($JCDiagnostic$Warning, "compiler"_s, "finally.cannot.complete"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::IllegalCharForEncoding, $new($JCDiagnostic$Warning, "compiler"_s, "illegal.char.for.encoding"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::InconsistentWhiteSpaceIndentation, $new($JCDiagnostic$Warning, "compiler"_s, "inconsistent.white.space.indentation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::InvalidYield, $new($JCDiagnostic$Warning, "compiler"_s, "invalid.yield"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::LocalRedundantType, $new($JCDiagnostic$Warning, "compiler"_s, "local.redundant.type"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::MethodRedundantTypeargs, $new($JCDiagnostic$Warning, "compiler"_s, "method.redundant.typeargs"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::MissingDeprecatedAnnotation, $new($JCDiagnostic$Warning, "compiler"_s, "missing.deprecated.annotation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::OptionObsoleteSuppression, $new($JCDiagnostic$Warning, "compiler"_s, "option.obsolete.suppression"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::PossibleFallThroughIntoCase, $new($JCDiagnostic$Warning, "compiler"_s, "possible.fall-through.into.case"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::PotentialLambdaFound, $new($JCDiagnostic$Warning, "compiler"_s, "potential.lambda.found"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::ProcProcOnlyRequestedNoProcs, $new($JCDiagnostic$Warning, "compiler"_s, "proc.proc-only.requested.no.procs"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::ProcUseImplicit, $new($JCDiagnostic$Warning, "compiler"_s, "proc.use.implicit"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::ProcUseProcOrImplicit, $new($JCDiagnostic$Warning, "compiler"_s, "proc.use.proc.or.implicit"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::RequiresAutomatic, $new($JCDiagnostic$Warning, "compiler"_s, "requires.automatic"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::RequiresTransitiveAutomatic, $new($JCDiagnostic$Warning, "compiler"_s, "requires.transitive.automatic"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::Strictfp, $new($JCDiagnostic$Warning, "compiler"_s, "strictfp"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::TrailingWhiteSpaceWillBeRemoved, $new($JCDiagnostic$Warning, "compiler"_s, "trailing.white.space.will.be.removed"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::TryExplicitCloseCall, $new($JCDiagnostic$Warning, "compiler"_s, "try.explicit.close.call"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::UncheckedAssign, $new($JCDiagnostic$Warning, "compiler"_s, "unchecked.assign"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::UncheckedCastToType, $new($JCDiagnostic$Warning, "compiler"_s, "unchecked.cast.to.type"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::UnderscoreAsIdentifier, $new($JCDiagnostic$Warning, "compiler"_s, "underscore.as.identifier"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Warnings::Warning, $new($JCDiagnostic$Warning, "compiler"_s, "warning"_s, $$new($ObjectArray, 0)));
}

CompilerProperties$Warnings::CompilerProperties$Warnings() {
}

$Class* CompilerProperties$Warnings::load$($String* name, bool initialize) {
	$loadClass(CompilerProperties$Warnings, name, initialize, &_CompilerProperties$Warnings_ClassInfo_, clinit$CompilerProperties$Warnings, allocate$CompilerProperties$Warnings);
	return class$;
}

$Class* CompilerProperties$Warnings::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com