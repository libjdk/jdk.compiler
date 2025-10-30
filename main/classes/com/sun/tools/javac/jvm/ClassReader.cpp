#include <com/sun/tools/javac/jvm/ClassReader.h>

#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/ClassFinder$BadEnclosingMethodAttr.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Directive$ExportsFlag.h>
#include <com/sun/tools/javac/code/Directive$OpensFlag.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleFlags.h>
#include <com/sun/tools/javac/code/Symbol$ModuleResolutionFlags.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ParamSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/ClassReader$1.h>
#include <com/sun/tools/javac/jvm/ClassReader$10.h>
#include <com/sun/tools/javac/jvm/ClassReader$11.h>
#include <com/sun/tools/javac/jvm/ClassReader$12.h>
#include <com/sun/tools/javac/jvm/ClassReader$13.h>
#include <com/sun/tools/javac/jvm/ClassReader$14.h>
#include <com/sun/tools/javac/jvm/ClassReader$15.h>
#include <com/sun/tools/javac/jvm/ClassReader$16.h>
#include <com/sun/tools/javac/jvm/ClassReader$17.h>
#include <com/sun/tools/javac/jvm/ClassReader$18.h>
#include <com/sun/tools/javac/jvm/ClassReader$19.h>
#include <com/sun/tools/javac/jvm/ClassReader$2.h>
#include <com/sun/tools/javac/jvm/ClassReader$20.h>
#include <com/sun/tools/javac/jvm/ClassReader$21.h>
#include <com/sun/tools/javac/jvm/ClassReader$22.h>
#include <com/sun/tools/javac/jvm/ClassReader$23.h>
#include <com/sun/tools/javac/jvm/ClassReader$24.h>
#include <com/sun/tools/javac/jvm/ClassReader$25.h>
#include <com/sun/tools/javac/jvm/ClassReader$26.h>
#include <com/sun/tools/javac/jvm/ClassReader$27.h>
#include <com/sun/tools/javac/jvm/ClassReader$28.h>
#include <com/sun/tools/javac/jvm/ClassReader$3.h>
#include <com/sun/tools/javac/jvm/ClassReader$4.h>
#include <com/sun/tools/javac/jvm/ClassReader$5.h>
#include <com/sun/tools/javac/jvm/ClassReader$6.h>
#include <com/sun/tools/javac/jvm/ClassReader$7.h>
#include <com/sun/tools/javac/jvm/ClassReader$8.h>
#include <com/sun/tools/javac/jvm/ClassReader$9.h>
#include <com/sun/tools/javac/jvm/ClassReader$AnnotationCompleter.h>
#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDefaultCompleter.h>
#include <com/sun/tools/javac/jvm/ClassReader$ArrayAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeKind.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompleterDeproxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$ParameterAnnotations.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyType.h>
#include <com/sun/tools/javac/jvm/ClassReader$TypeAnnotationCompleter.h>
#include <com/sun/tools/javac/jvm/ClassReader$TypeAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$UsesProvidesCompleter.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/PoolConstant$NameAndType.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/lang/Iterable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/ClosedFileSystemException.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ANNOTATION
#undef ARRAY
#undef CLASS
#undef CLASSFILE
#undef CLASS_ATTRIBUTE
#undef CLASS_OR_MEMBER_ATTRIBUTE
#undef DEFAULT
#undef ERR
#undef EXTENDS
#undef FORALL
#undef INITIAL_BUFFER_SIZE
#undef MDL
#undef MEMBER
#undef MEMBER_ATTRIBUTE
#undef METHOD
#undef MODULES
#undef MTH
#undef NONE
#undef NON_RECURSIVE
#undef PARAMETERS
#undef PCK
#undef PREVIEW_MINOR_VERSION
#undef RECORDS
#undef SEALED_CLASSES
#undef SUPER
#undef TYP
#undef TYPEVAR
#undef UNBOUND
#undef VERBOSE
#undef VOID

using $Directive$ExportsFlagArray = $Array<::com::sun::tools::javac::code::Directive$ExportsFlag>;
using $Directive$OpensFlagArray = $Array<::com::sun::tools::javac::code::Directive$OpensFlag>;
using $Directive$RequiresFlagArray = $Array<::com::sun::tools::javac::code::Directive$RequiresFlag>;
using $Symbol$ModuleFlagsArray = $Array<::com::sun::tools::javac::code::Symbol$ModuleFlags>;
using $Symbol$ModuleResolutionFlagsArray = $Array<::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags>;
using $ClassReader$AttributeReaderArray = $Array<::com::sun::tools::javac::jvm::ClassReader$AttributeReader>;
using $ClassReader$ParameterAnnotationsArray = $Array<::com::sun::tools::javac::jvm::ClassReader$ParameterAnnotations>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $ClassFinder$BadEnclosingMethodAttr = ::com::sun::tools::javac::code::ClassFinder$BadEnclosingMethodAttr;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Directive$ExportsFlag = ::com::sun::tools::javac::code::Directive$ExportsFlag;
using $Directive$OpensFlag = ::com::sun::tools::javac::code::Directive$OpensFlag;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleFlags = ::com::sun::tools::javac::code::Symbol$ModuleFlags;
using $Symbol$ModuleResolutionFlags = ::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$ParamSymbol = ::com::sun::tools::javac::code::Symbol$ParamSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $TypeAnnotationPosition$TypePathEntry = ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntry;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Annotate$AnnotationTypeCompleter = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader$1 = ::com::sun::tools::javac::jvm::ClassReader$1;
using $ClassReader$10 = ::com::sun::tools::javac::jvm::ClassReader$10;
using $ClassReader$11 = ::com::sun::tools::javac::jvm::ClassReader$11;
using $ClassReader$12 = ::com::sun::tools::javac::jvm::ClassReader$12;
using $ClassReader$13 = ::com::sun::tools::javac::jvm::ClassReader$13;
using $ClassReader$14 = ::com::sun::tools::javac::jvm::ClassReader$14;
using $ClassReader$15 = ::com::sun::tools::javac::jvm::ClassReader$15;
using $ClassReader$16 = ::com::sun::tools::javac::jvm::ClassReader$16;
using $ClassReader$17 = ::com::sun::tools::javac::jvm::ClassReader$17;
using $ClassReader$18 = ::com::sun::tools::javac::jvm::ClassReader$18;
using $ClassReader$19 = ::com::sun::tools::javac::jvm::ClassReader$19;
using $ClassReader$2 = ::com::sun::tools::javac::jvm::ClassReader$2;
using $ClassReader$20 = ::com::sun::tools::javac::jvm::ClassReader$20;
using $ClassReader$21 = ::com::sun::tools::javac::jvm::ClassReader$21;
using $ClassReader$22 = ::com::sun::tools::javac::jvm::ClassReader$22;
using $ClassReader$23 = ::com::sun::tools::javac::jvm::ClassReader$23;
using $ClassReader$24 = ::com::sun::tools::javac::jvm::ClassReader$24;
using $ClassReader$25 = ::com::sun::tools::javac::jvm::ClassReader$25;
using $ClassReader$26 = ::com::sun::tools::javac::jvm::ClassReader$26;
using $ClassReader$27 = ::com::sun::tools::javac::jvm::ClassReader$27;
using $ClassReader$28 = ::com::sun::tools::javac::jvm::ClassReader$28;
using $ClassReader$3 = ::com::sun::tools::javac::jvm::ClassReader$3;
using $ClassReader$4 = ::com::sun::tools::javac::jvm::ClassReader$4;
using $ClassReader$5 = ::com::sun::tools::javac::jvm::ClassReader$5;
using $ClassReader$6 = ::com::sun::tools::javac::jvm::ClassReader$6;
using $ClassReader$7 = ::com::sun::tools::javac::jvm::ClassReader$7;
using $ClassReader$8 = ::com::sun::tools::javac::jvm::ClassReader$8;
using $ClassReader$9 = ::com::sun::tools::javac::jvm::ClassReader$9;
using $ClassReader$AnnotationCompleter = ::com::sun::tools::javac::jvm::ClassReader$AnnotationCompleter;
using $ClassReader$AnnotationDefaultCompleter = ::com::sun::tools::javac::jvm::ClassReader$AnnotationDefaultCompleter;
using $ClassReader$ArrayAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$ArrayAttributeProxy;
using $ClassReader$AttributeKind = ::com::sun::tools::javac::jvm::ClassReader$AttributeKind;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $ClassReader$ClassAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$ClassAttributeProxy;
using $ClassReader$CompleterDeproxy = ::com::sun::tools::javac::jvm::ClassReader$CompleterDeproxy;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $ClassReader$EnumAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$EnumAttributeProxy;
using $ClassReader$ParameterAnnotations = ::com::sun::tools::javac::jvm::ClassReader$ParameterAnnotations;
using $ClassReader$ProxyType = ::com::sun::tools::javac::jvm::ClassReader$ProxyType;
using $ClassReader$TypeAnnotationCompleter = ::com::sun::tools::javac::jvm::ClassReader$TypeAnnotationCompleter;
using $ClassReader$TypeAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$TypeAnnotationProxy;
using $ClassReader$UsesProvidesCompleter = ::com::sun::tools::javac::jvm::ClassReader$UsesProvidesCompleter;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $PoolConstant$NameAndType = ::com::sun::tools::javac::jvm::PoolConstant$NameAndType;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ClosedFileSystemException = ::java::nio::file::ClosedFileSystemException;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$$Lambda$getNameAndType : public $IntFunction {
	$class(ClassReader$$Lambda$getNameAndType, $NO_CLASS_INIT, $IntFunction)
public:
	void init$($PoolReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t index) override {
		 return $of($nc(inst$)->getNameAndType(index));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$$Lambda$getNameAndType>());
	}
	$PoolReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$$Lambda$getNameAndType::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$$Lambda$getNameAndType, inst$)},
	{}
};
$MethodInfo ClassReader$$Lambda$getNameAndType::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/PoolReader;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$$Lambda$getNameAndType::*)($PoolReader*)>(&ClassReader$$Lambda$getNameAndType::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$$Lambda$getNameAndType::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$$Lambda$getNameAndType",
	"java.lang.Object",
	"java.util.function.IntFunction",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$$Lambda$getNameAndType::load$($String* name, bool initialize) {
	$loadClass(ClassReader$$Lambda$getNameAndType, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$$Lambda$getNameAndType::class$ = nullptr;

class ClassReader$$Lambda$getName$1 : public $IntFunction {
	$class(ClassReader$$Lambda$getName$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$($PoolReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t index) override {
		 return $of($nc(inst$)->getName(index));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$$Lambda$getName$1>());
	}
	$PoolReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$$Lambda$getName$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$$Lambda$getName$1, inst$)},
	{}
};
$MethodInfo ClassReader$$Lambda$getName$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/PoolReader;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$$Lambda$getName$1::*)($PoolReader*)>(&ClassReader$$Lambda$getName$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$$Lambda$getName$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$$Lambda$getName$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$$Lambda$getName$1::load$($String* name, bool initialize) {
	$loadClass(ClassReader$$Lambda$getName$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$$Lambda$getName$1::class$ = nullptr;

class ClassReader$$Lambda$lambda$readClass$0$2 : public $IntFunction {
	$class(ClassReader$$Lambda$lambda$readClass$0$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$(ClassReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t idx) override {
		 return $of($nc(inst$)->lambda$readClass$0(idx));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$$Lambda$lambda$readClass$0$2>());
	}
	ClassReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$$Lambda$lambda$readClass$0$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$$Lambda$lambda$readClass$0$2, inst$)},
	{}
};
$MethodInfo ClassReader$$Lambda$lambda$readClass$0$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$$Lambda$lambda$readClass$0$2::*)(ClassReader*)>(&ClassReader$$Lambda$lambda$readClass$0$2::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$$Lambda$lambda$readClass$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$$Lambda$lambda$readClass$0$2",
	"java.lang.Object",
	"java.util.function.IntFunction",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$$Lambda$lambda$readClass$0$2::load$($String* name, bool initialize) {
	$loadClass(ClassReader$$Lambda$lambda$readClass$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$$Lambda$lambda$readClass$0$2::class$ = nullptr;

class ClassReader$$Lambda$lambda$lookupMethod$1$3 : public $Predicate {
	$class(ClassReader$$Lambda$lambda$lookupMethod$1$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return ClassReader::lambda$lookupMethod$1($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$$Lambda$lambda$lookupMethod$1$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ClassReader$$Lambda$lambda$lookupMethod$1$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$$Lambda$lambda$lookupMethod$1$3::*)()>(&ClassReader$$Lambda$lambda$lookupMethod$1$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$$Lambda$lambda$lookupMethod$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$$Lambda$lambda$lookupMethod$1$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ClassReader$$Lambda$lambda$lookupMethod$1$3::load$($String* name, bool initialize) {
	$loadClass(ClassReader$$Lambda$lambda$lookupMethod$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$$Lambda$lambda$lookupMethod$1$3::class$ = nullptr;

class ClassReader$$Lambda$getClass$4 : public $IntFunction {
	$class(ClassReader$$Lambda$getClass$4, $NO_CLASS_INIT, $IntFunction)
public:
	void init$($PoolReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(int32_t index) override {
		 return $of($nc(inst$)->getClass(index));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$$Lambda$getClass$4>());
	}
	$PoolReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$$Lambda$getClass$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$$Lambda$getClass$4, inst$)},
	{}
};
$MethodInfo ClassReader$$Lambda$getClass$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/PoolReader;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$$Lambda$getClass$4::*)($PoolReader*)>(&ClassReader$$Lambda$getClass$4::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$$Lambda$getClass$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$$Lambda$getClass$4",
	"java.lang.Object",
	"java.util.function.IntFunction",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$$Lambda$getClass$4::load$($String* name, bool initialize) {
	$loadClass(ClassReader$$Lambda$getClass$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$$Lambda$getClass$4::class$ = nullptr;

$FieldInfo _ClassReader_FieldInfo_[] = {
	{"classReaderKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/jvm/ClassReader;>;", $PROTECTED | $STATIC | $FINAL, $staticField(ClassReader, classReaderKey)},
	{"INITIAL_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassReader, INITIAL_BUFFER_SIZE)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PRIVATE | $FINAL, $field(ClassReader, annotate)},
	{"verbose", "Z", nullptr, 0, $field(ClassReader, verbose)},
	{"allowModules", "Z", nullptr, 0, $field(ClassReader, allowModules)},
	{"allowSealedTypes", "Z", nullptr, 0, $field(ClassReader, allowSealedTypes)},
	{"allowRecords", "Z", nullptr, 0, $field(ClassReader, allowRecords)},
	{"lintClassfile", "Z", nullptr, 0, $field(ClassReader, lintClassfile)},
	{"saveParameterNames", "Z", nullptr, $PUBLIC, $field(ClassReader, saveParameterNames)},
	{"profile", "Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $FINAL, $field(ClassReader, profile)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(ClassReader, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(ClassReader, syms)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(ClassReader, types)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(ClassReader, names)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(ClassReader, fileManager)},
	{"diagFactory", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $field(ClassReader, diagFactory)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, 0, $field(ClassReader, dcfh)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, 0, $field(ClassReader, preview)},
	{"typevars", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PROTECTED, $field(ClassReader, typevars)},
	{"interimUses", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$InterimUsesDirective;>;", $PRIVATE, $field(ClassReader, interimUses)},
	{"interimProvides", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$InterimProvidesDirective;>;", $PRIVATE, $field(ClassReader, interimProvides)},
	{"currentClassFile", "Ljavax/tools/JavaFileObject;", nullptr, $PROTECTED, $field(ClassReader, currentClassFile)},
	{"currentOwner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PROTECTED, $field(ClassReader, currentOwner)},
	{"currentModule", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PROTECTED, $field(ClassReader, currentModule)},
	{"buf", "Lcom/sun/tools/javac/util/ByteBuffer;", nullptr, 0, $field(ClassReader, buf)},
	{"bp", "I", nullptr, $PROTECTED, $field(ClassReader, bp)},
	{"poolReader", "Lcom/sun/tools/javac/jvm/PoolReader;", nullptr, 0, $field(ClassReader, poolReader)},
	{"majorVersion", "I", nullptr, 0, $field(ClassReader, majorVersion)},
	{"minorVersion", "I", nullptr, 0, $field(ClassReader, minorVersion)},
	{"parameterNameIndices", "[I", nullptr, 0, $field(ClassReader, parameterNameIndices)},
	{"parameterAccessFlags", "[I", nullptr, 0, $field(ClassReader, parameterAccessFlags)},
	{"parameterAnnotations", "[Lcom/sun/tools/javac/jvm/ClassReader$ParameterAnnotations;", nullptr, 0, $field(ClassReader, parameterAnnotations)},
	{"haveParameterNameIndices", "Z", nullptr, 0, $field(ClassReader, haveParameterNameIndices)},
	{"sawMethodParameters", "Z", nullptr, 0, $field(ClassReader, sawMethodParameters)},
	{"warnedAttrs", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;", 0, $field(ClassReader, warnedAttrs)},
	{"target", "Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, 0, $field(ClassReader, target)},
	{"repeatable", "Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, 0, $field(ClassReader, repeatable)},
	{"signature", "[B", nullptr, 0, $field(ClassReader, signature)},
	{"sigp", "I", nullptr, 0, $field(ClassReader, sigp)},
	{"siglimit", "I", nullptr, 0, $field(ClassReader, siglimit)},
	{"sigEnterPhase", "Z", nullptr, 0, $field(ClassReader, sigEnterPhase)},
	{"signatureBuffer", "[B", nullptr, 0, $field(ClassReader, signatureBuffer)},
	{"sbp", "I", nullptr, 0, $field(ClassReader, sbp)},
	{"CLASS_ATTRIBUTE", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;>;", $PROTECTED, $field(ClassReader, CLASS_ATTRIBUTE)},
	{"MEMBER_ATTRIBUTE", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;>;", $PROTECTED, $field(ClassReader, MEMBER_ATTRIBUTE)},
	{"CLASS_OR_MEMBER_ATTRIBUTE", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;>;", $PROTECTED, $field(ClassReader, CLASS_OR_MEMBER_ATTRIBUTE)},
	{"attributeReaders", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassReader$AttributeReader;>;", $PROTECTED, $field(ClassReader, attributeReaders)},
	{"readingClassAttr", "Z", nullptr, $PRIVATE, $field(ClassReader, readingClassAttr)},
	{"missingTypeVariables", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $field(ClassReader, missingTypeVariables)},
	{"foundTypeVariables", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $field(ClassReader, foundTypeVariables)},
	{"filling", "Z", nullptr, $PUBLIC, $field(ClassReader, filling)},
	{}
};

$MethodInfo _ClassReader_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(ClassReader::*)($Context*)>(&ClassReader::init$))},
	{"adjustClassFlags", "(J)J", nullptr, 0},
	{"adjustFieldFlags", "(J)J", nullptr, 0},
	{"adjustMethodFlags", "(J)J", nullptr, 0},
	{"adjustMethodParams", "(JLcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(JLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(static_cast<$List*(ClassReader::*)(int64_t,$List*)>(&ClassReader::adjustMethodParams))},
	{"attachAnnotationDefault", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"attachAnnotations", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"attachAnnotations", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;)V", 0},
	{"attachTypeAnnotations", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"badClassFile", "(Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/code/ClassFinder$BadClassFile;", nullptr, $PUBLIC | $TRANSIENT},
	{"badEnclosingMethod", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/ClassFinder$BadEnclosingMethodAttr;", nullptr, $PUBLIC},
	{"classSigToType", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"enterClass", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PROTECTED},
	{"enterClass", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PROTECTED},
	{"enterMember", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)($Symbol$ClassSymbol*,$Symbol*)>(&ClassReader::enterMember))},
	{"enterTypevars", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PROTECTED},
	{"findMethod", "(Lcom/sun/tools/javac/jvm/PoolConstant$NameAndType;Lcom/sun/tools/javac/code/Scope;J)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(ClassReader::*)($PoolConstant$NameAndType*,$Scope*,int64_t)>(&ClassReader::findMethod))},
	{"findTypeVar", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"initAttributeReaders", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)()>(&ClassReader::initAttributeReaders))},
	{"initParameterNames", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassReader*(*)($Context*)>(&ClassReader::instance))},
	{"isAsciiDigit", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&ClassReader::isAsciiDigit))},
	{"isSameBinaryType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/code/Type$MethodType;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ClassReader::*)($Type$MethodType*,$Type$MethodType*)>(&ClassReader::isSameBinaryType))},
	{"lambda$lookupMethod$1", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&ClassReader::lambda$lookupMethod$1))},
	{"lambda$readClass$0", "(I)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(ClassReader::*)(int32_t)>(&ClassReader::lambda$readClass$0))},
	{"lookupMethod", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(ClassReader::*)($Symbol$TypeSymbol*,$Name*,$List*)>(&ClassReader::lookupMethod))},
	{"nextByte", "()I", nullptr, 0},
	{"nextChar", "()C", nullptr, 0},
	{"nextInt", "()I", nullptr, 0},
	{"optPoolEntry", "(ILjava/util/function/IntFunction;Ljava/lang/Object;)Ljava/lang/Object;", "<Z:Ljava/lang/Object;>(ILjava/util/function/IntFunction<TZ;>;TZ;)TZ;", 0},
	{"parameter", "(ILcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/util/Set;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", "(ILcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/util/Set<Lcom/sun/tools/javac/util/Name;>;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", $PRIVATE, $method(static_cast<$Symbol$VarSymbol*(ClassReader::*)(int32_t,$Type*,$Symbol$MethodSymbol*,$Set*)>(&ClassReader::parameter))},
	{"readAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;", 0},
	{"readAttributeValue", "()Lcom/sun/tools/javac/code/Attribute;", nullptr, 0},
	{"readAttrs", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;)V", nullptr, 0},
	{"readClass", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"readClassAttrs", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"readClassBuffer", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)($Symbol$ClassSymbol*)>(&ClassReader::readClassBuffer)), "java.io.IOException"},
	{"readClassFile", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"readCode", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/jvm/Code;", nullptr, 0},
	{"readCompoundAnnotation", "()Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, 0},
	{"readEnclosingMethodAttr", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PROTECTED},
	{"readExportsFlags", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$ExportsFlag;>;", 0},
	{"readField", "()Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, 0},
	{"readInnerClasses", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0},
	{"readMemberAttrs", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"readMethod", "()Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0},
	{"readModuleFlags", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleFlags;>;", 0},
	{"readModuleResolutionFlags", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;>;", 0},
	{"readOpensFlags", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$OpensFlag;>;", 0},
	{"readParameterAnnotations", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0},
	{"readPosition", "()Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, 0},
	{"readRequiresFlags", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$RequiresFlag;>;", 0},
	{"readTypeAnnotation", "()Lcom/sun/tools/javac/jvm/ClassReader$TypeAnnotationProxy;", nullptr, 0},
	{"readTypeOrClassSymbol", "(I)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"readTypePath", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;", 0},
	{"readTypeToProxy", "(I)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"setFlagIfAttributeTrue", "(Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;J)V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)($ClassReader$CompoundAnnotationProxy*,$Symbol*,$Name*,int64_t)>(&ClassReader::setFlagIfAttributeTrue))},
	{"setParameters", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"sigToType", "([BII)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"sigToType", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"sigToTypeParam", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"sigToTypeParams", "([BII)Lcom/sun/tools/javac/util/List;", "([BII)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"sigToTypeParams", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"sigToTypes", "(C)Lcom/sun/tools/javac/util/List;", "(C)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"simpleBinaryName", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(ClassReader::*)($Name*,$Name*)>(&ClassReader::simpleBinaryName))},
	{"skipBytes", "(I)V", nullptr, 0},
	{"skipInnerClasses", "()V", nullptr, 0},
	{"skipMember", "()V", nullptr, 0},
	{"validateMethodType", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{}
};

$InnerClassInfo _ClassReader_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$28", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.jvm.ClassReader$UsesProvidesCompleter", "com.sun.tools.javac.jvm.ClassReader", "UsesProvidesCompleter", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.jvm.ClassReader$InterimProvidesDirective", "com.sun.tools.javac.jvm.ClassReader", "InterimProvidesDirective", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.tools.javac.jvm.ClassReader$InterimUsesDirective", "com.sun.tools.javac.jvm.ClassReader", "InterimUsesDirective", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.tools.javac.jvm.ClassReader$ProxyType", "com.sun.tools.javac.jvm.ClassReader", "ProxyType", $PRIVATE},
	{"com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy", "com.sun.tools.javac.jvm.ClassReader", "CompleterDeproxy", $PRIVATE},
	{"com.sun.tools.javac.jvm.ClassReader$SourceFileObject", "com.sun.tools.javac.jvm.ClassReader", "SourceFileObject", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.jvm.ClassReader$TypeAnnotationCompleter", "com.sun.tools.javac.jvm.ClassReader", "TypeAnnotationCompleter", 0},
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationCompleter", "com.sun.tools.javac.jvm.ClassReader", "AnnotationCompleter", 0},
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationDefaultCompleter", "com.sun.tools.javac.jvm.ClassReader", "AnnotationDefaultCompleter", 0},
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy", "com.sun.tools.javac.jvm.ClassReader", "AnnotationDeproxy", 0},
	{"com.sun.tools.javac.jvm.ClassReader$TypeAnnotationProxy", "com.sun.tools.javac.jvm.ClassReader", "TypeAnnotationProxy", $STATIC},
	{"com.sun.tools.javac.jvm.ClassReader$CompoundAnnotationProxy", "com.sun.tools.javac.jvm.ClassReader", "CompoundAnnotationProxy", $STATIC},
	{"com.sun.tools.javac.jvm.ClassReader$ArrayAttributeProxy", "com.sun.tools.javac.jvm.ClassReader", "ArrayAttributeProxy", $STATIC},
	{"com.sun.tools.javac.jvm.ClassReader$ClassAttributeProxy", "com.sun.tools.javac.jvm.ClassReader", "ClassAttributeProxy", $STATIC},
	{"com.sun.tools.javac.jvm.ClassReader$EnumAttributeProxy", "com.sun.tools.javac.jvm.ClassReader", "EnumAttributeProxy", $STATIC},
	{"com.sun.tools.javac.jvm.ClassReader$ProxyVisitor", "com.sun.tools.javac.jvm.ClassReader", "ProxyVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeKind", "com.sun.tools.javac.jvm.ClassReader", "AttributeKind", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.jvm.ClassReader$ParameterAnnotations", "com.sun.tools.javac.jvm.ClassReader", "ParameterAnnotations", $STATIC},
	{"com.sun.tools.javac.jvm.ClassReader$27", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$26", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$25", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$24", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$23", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$22", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$21", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$20", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$19", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$18", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$17", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$16", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$15", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$14", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$13", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$12", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$10", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$9", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$8", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader",
	"java.lang.Object",
	nullptr,
	_ClassReader_FieldInfo_,
	_ClassReader_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader$28,com.sun.tools.javac.jvm.ClassReader$UsesProvidesCompleter,com.sun.tools.javac.jvm.ClassReader$InterimProvidesDirective,com.sun.tools.javac.jvm.ClassReader$InterimUsesDirective,com.sun.tools.javac.jvm.ClassReader$ProxyType,com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy,com.sun.tools.javac.jvm.ClassReader$SourceFileObject,com.sun.tools.javac.jvm.ClassReader$TypeAnnotationCompleter,com.sun.tools.javac.jvm.ClassReader$AnnotationCompleter,com.sun.tools.javac.jvm.ClassReader$AnnotationDefaultCompleter,com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy,com.sun.tools.javac.jvm.ClassReader$TypeAnnotationProxy,com.sun.tools.javac.jvm.ClassReader$CompoundAnnotationProxy,com.sun.tools.javac.jvm.ClassReader$ArrayAttributeProxy,com.sun.tools.javac.jvm.ClassReader$ClassAttributeProxy,com.sun.tools.javac.jvm.ClassReader$EnumAttributeProxy,com.sun.tools.javac.jvm.ClassReader$ProxyVisitor,com.sun.tools.javac.jvm.ClassReader$AttributeReader,com.sun.tools.javac.jvm.ClassReader$AttributeKind,com.sun.tools.javac.jvm.ClassReader$ParameterAnnotations,com.sun.tools.javac.jvm.ClassReader$27,com.sun.tools.javac.jvm.ClassReader$26,com.sun.tools.javac.jvm.ClassReader$25,com.sun.tools.javac.jvm.ClassReader$24,com.sun.tools.javac.jvm.ClassReader$23,com.sun.tools.javac.jvm.ClassReader$22,com.sun.tools.javac.jvm.ClassReader$21,com.sun.tools.javac.jvm.ClassReader$20,com.sun.tools.javac.jvm.ClassReader$19,com.sun.tools.javac.jvm.ClassReader$18,com.sun.tools.javac.jvm.ClassReader$17,com.sun.tools.javac.jvm.ClassReader$16,com.sun.tools.javac.jvm.ClassReader$15,com.sun.tools.javac.jvm.ClassReader$14,com.sun.tools.javac.jvm.ClassReader$13,com.sun.tools.javac.jvm.ClassReader$12,com.sun.tools.javac.jvm.ClassReader$11,com.sun.tools.javac.jvm.ClassReader$10,com.sun.tools.javac.jvm.ClassReader$9,com.sun.tools.javac.jvm.ClassReader$8,com.sun.tools.javac.jvm.ClassReader$7,com.sun.tools.javac.jvm.ClassReader$6,com.sun.tools.javac.jvm.ClassReader$5,com.sun.tools.javac.jvm.ClassReader$4,com.sun.tools.javac.jvm.ClassReader$3,com.sun.tools.javac.jvm.ClassReader$2,com.sun.tools.javac.jvm.ClassReader$1"
};

$Object* allocate$ClassReader($Class* clazz) {
	return $of($alloc(ClassReader));
}

$Context$Key* ClassReader::classReaderKey = nullptr;

ClassReader* ClassReader::instance($Context* context) {
	$init(ClassReader);
	$var(ClassReader, instance, $cast(ClassReader, $nc(context)->get(ClassReader::classReaderKey)));
	if (instance == nullptr) {
		$assign(instance, $new(ClassReader, context));
	}
	return instance;
}

void ClassReader::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, interimUses, $List::nil());
	$set(this, interimProvides, $List::nil());
	$set(this, currentClassFile, nullptr);
	$set(this, currentOwner, nullptr);
	$set(this, currentModule, nullptr);
	$set(this, buf, $new($ByteBuffer, ClassReader::INITIAL_BUFFER_SIZE));
	$set(this, warnedAttrs, $new($HashSet));
	this->sigEnterPhase = false;
	$set(this, signatureBuffer, $new($bytes, 0));
	this->sbp = 0;
	$init($ClassReader$AttributeKind);
	$set(this, CLASS_ATTRIBUTE, $EnumSet::of($ClassReader$AttributeKind::CLASS));
	$set(this, MEMBER_ATTRIBUTE, $EnumSet::of($ClassReader$AttributeKind::MEMBER));
	$set(this, CLASS_OR_MEMBER_ATTRIBUTE, $EnumSet::of(static_cast<$Enum*>($ClassReader$AttributeKind::CLASS), static_cast<$Enum*>($ClassReader$AttributeKind::MEMBER)));
	$set(this, attributeReaders, $new($HashMap));
	this->readingClassAttr = false;
	$set(this, missingTypeVariables, $List::nil());
	$set(this, foundTypeVariables, $List::nil());
	this->filling = false;
	$nc(context)->put(ClassReader::classReaderKey, $of(this));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, types, $Types::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	if (this->fileManager == nullptr) {
		$throwNew($AssertionError, $of("FileManager initialization error"_s));
	}
	$set(this, diagFactory, $JCDiagnostic$Factory::instance(context));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
	$set(this, log, $Log::instance(context));
	$var($Options, options, $Options::instance(context));
	$init($Option);
	this->verbose = $nc(options)->isSet($Option::VERBOSE);
	$Source* source = $Source::instance(context);
	$set(this, preview, $Preview::instance(context));
	$init($Source$Feature);
	this->allowModules = $Source$Feature::MODULES->allowedInSource(source);
	this->allowRecords = $Source$Feature::RECORDS->allowedInSource(source);
	this->allowSealedTypes = $Source$Feature::SEALED_CLASSES->allowedInSource(source);
	this->saveParameterNames = options->isSet($Option::PARAMETERS);
	$set(this, profile, $Profile::instance(context));
	$set(this, typevars, $Scope$WriteableScope::create($nc(this->syms)->noSymbol));
	$init($Lint$LintCategory);
	this->lintClassfile = $nc($($Lint::instance(context)))->isEnabled($Lint$LintCategory::CLASSFILE);
	initAttributeReaders();
}

void ClassReader::enterMember($Symbol$ClassSymbol* c, $Symbol* sym) {
	if (((int64_t)($nc(sym)->flags_field & (uint64_t)(4096 | (int64_t)0x0000000080000000))) != 4096 || $nc($nc(sym)->name)->startsWith($nc(this->names)->lambda)) {
		$nc($nc(c)->members_field)->enter(sym);
	}
}

$ClassFinder$BadClassFile* ClassReader::badClassFile($String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$TypeSymbol, var$0, static_cast<$Symbol$TypeSymbol*>($nc(this->currentOwner)->enclClass()));
	$var($JavaFileObject, var$1, this->currentClassFile);
	return $new($ClassFinder$BadClassFile, var$0, var$1, $($nc(this->diagFactory)->fragment(key, args)), this->diagFactory, this->dcfh);
}

$ClassFinder$BadEnclosingMethodAttr* ClassReader::badEnclosingMethod($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$TypeSymbol, var$0, static_cast<$Symbol$TypeSymbol*>($nc(this->currentOwner)->enclClass()));
	$var($JavaFileObject, var$1, this->currentClassFile);
	return $new($ClassFinder$BadEnclosingMethodAttr, var$0, var$1, $($nc(this->diagFactory)->fragment($($CompilerProperties$Fragments::BadEnclosingMethod(sym)))), this->diagFactory, this->dcfh);
}

char16_t ClassReader::nextChar() {
	char16_t res = $nc(this->buf)->getChar(this->bp);
	this->bp += 2;
	return res;
}

int32_t ClassReader::nextByte() {
	return (int32_t)($nc(this->buf)->getByte(this->bp++) & (uint32_t)255);
}

int32_t ClassReader::nextInt() {
	int32_t res = $nc(this->buf)->getInt(this->bp);
	this->bp += 4;
	return res;
}

$Set* ClassReader::readModuleFlags(int32_t flags) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol$ModuleFlags);
	$var($Set, set, $EnumSet::noneOf($Symbol$ModuleFlags::class$));
	{
		$var($Symbol$ModuleFlagsArray, arr$, $Symbol$ModuleFlags::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Symbol$ModuleFlags* f = arr$->get(i$);
			{
				if (((int32_t)(flags & (uint32_t)$nc(f)->value$)) != 0) {
					$nc(set)->add(f);
				}
			}
		}
	}
	return set;
}

$Set* ClassReader::readModuleResolutionFlags(int32_t flags) {
	$useLocalCurrentObjectStackCache();
	$load($Symbol$ModuleResolutionFlags);
	$var($Set, set, $EnumSet::noneOf($Symbol$ModuleResolutionFlags::class$));
	{
		$var($Symbol$ModuleResolutionFlagsArray, arr$, $Symbol$ModuleResolutionFlags::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Symbol$ModuleResolutionFlags* f = arr$->get(i$);
			{
				if (((int32_t)(flags & (uint32_t)$nc(f)->value$)) != 0) {
					$nc(set)->add(f);
				}
			}
		}
	}
	return set;
}

$Set* ClassReader::readExportsFlags(int32_t flags) {
	$useLocalCurrentObjectStackCache();
	$load($Directive$ExportsFlag);
	$var($Set, set, $EnumSet::noneOf($Directive$ExportsFlag::class$));
	{
		$var($Directive$ExportsFlagArray, arr$, $Directive$ExportsFlag::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Directive$ExportsFlag* f = arr$->get(i$);
			{
				if (((int32_t)(flags & (uint32_t)$nc(f)->value$)) != 0) {
					$nc(set)->add(f);
				}
			}
		}
	}
	return set;
}

$Set* ClassReader::readOpensFlags(int32_t flags) {
	$useLocalCurrentObjectStackCache();
	$load($Directive$OpensFlag);
	$var($Set, set, $EnumSet::noneOf($Directive$OpensFlag::class$));
	{
		$var($Directive$OpensFlagArray, arr$, $Directive$OpensFlag::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Directive$OpensFlag* f = arr$->get(i$);
			{
				if (((int32_t)(flags & (uint32_t)$nc(f)->value$)) != 0) {
					$nc(set)->add(f);
				}
			}
		}
	}
	return set;
}

$Set* ClassReader::readRequiresFlags(int32_t flags) {
	$useLocalCurrentObjectStackCache();
	$load($Directive$RequiresFlag);
	$var($Set, set, $EnumSet::noneOf($Directive$RequiresFlag::class$));
	{
		$var($Directive$RequiresFlagArray, arr$, $Directive$RequiresFlag::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Directive$RequiresFlag* f = arr$->get(i$);
			{
				if (((int32_t)(flags & (uint32_t)$nc(f)->value$)) != 0) {
					$nc(set)->add(f);
				}
			}
		}
	}
	return set;
}

$Type* ClassReader::sigToType($bytes* sig, int32_t offset, int32_t len) {
	$set(this, signature, sig);
	this->sigp = offset;
	this->siglimit = offset + len;
	return sigToType();
}

$Type* ClassReader::sigToType() {
	$useLocalCurrentObjectStackCache();
	{
		int32_t start = 0;
		$var($List, argtypes, nullptr)
		$var($Type, restype, nullptr)
		$var($List, thrown, nullptr)
		$var($Type, poly, nullptr)
		switch ((char16_t)$nc(this->signature)->get(this->sigp)) {
		case u'T':
			{
				++this->sigp;
				start = this->sigp;
				while ($nc(this->signature)->get(this->sigp) != u';') {
					++this->sigp;
				}
				++this->sigp;
				$init($Type);
				return this->sigEnterPhase ? static_cast<$Type*>($Type::noType) : findTypeVar($($nc(this->names)->fromUtf(this->signature, start, this->sigp - 1 - start)));
			}
		case u'+':
			{
				{
					++this->sigp;
					$var($Type, t, sigToType());
					$init($BoundKind);
					return $new($Type$WildcardType, t, $BoundKind::EXTENDS, $nc(this->syms)->boundClass);
				}
			}
		case u'*':
			{
				++this->sigp;
				$init($BoundKind);
				return $new($Type$WildcardType, $nc(this->syms)->objectType, $BoundKind::UNBOUND, $nc(this->syms)->boundClass);
			}
		case u'-':
			{
				{
					++this->sigp;
					$var($Type, t, sigToType());
					$init($BoundKind);
					return $new($Type$WildcardType, t, $BoundKind::SUPER, $nc(this->syms)->boundClass);
				}
			}
		case u'B':
			{
				++this->sigp;
				return $nc(this->syms)->byteType;
			}
		case u'C':
			{
				++this->sigp;
				return $nc(this->syms)->charType;
			}
		case u'D':
			{
				++this->sigp;
				return $nc(this->syms)->doubleType;
			}
		case u'F':
			{
				++this->sigp;
				return $nc(this->syms)->floatType;
			}
		case u'I':
			{
				++this->sigp;
				return $nc(this->syms)->intType;
			}
		case u'J':
			{
				++this->sigp;
				return $nc(this->syms)->longType;
			}
		case u'L':
			{
				{
					$var($Type, t, classSigToType());
					if (this->sigp < this->siglimit && $nc(this->signature)->get(this->sigp) == u'.') {
						$throw($(badClassFile("deprecated inner class signature syntax (please recompile from source)"_s, $$new($ObjectArray, 0))));
					}
					return t;
				}
			}
		case u'S':
			{
				++this->sigp;
				return $nc(this->syms)->shortType;
			}
		case u'V':
			{
				++this->sigp;
				return $nc(this->syms)->voidType;
			}
		case u'Z':
			{
				++this->sigp;
				return $nc(this->syms)->booleanType;
			}
		case u'[':
			{
				++this->sigp;
				return $new($Type$ArrayType, $(sigToType()), $nc(this->syms)->arrayClass);
			}
		case u'(':
			{
				++this->sigp;
				$assign(argtypes, sigToTypes(u')'));
				$assign(restype, sigToType());
				$assign(thrown, $List::nil());
				while (this->sigp < this->siglimit && $nc(this->signature)->get(this->sigp) == u'^') {
					++this->sigp;
					$assign(thrown, $nc(thrown)->prepend($(sigToType())));
				}
				{
					$var($List, l, thrown);
					for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
						$init($TypeTag);
						if ($nc(($cast($Type, l->head)))->hasTag($TypeTag::TYPEVAR)) {
							$nc($nc(($cast($Type, l->head)))->tsym)->flags_field |= 0x0000800000000000;
						}
					}
				}
				return $new($Type$MethodType, argtypes, restype, $($nc(thrown)->reverse()), $nc(this->syms)->methodClass);
			}
		case u'<':
			{
				$set(this, typevars, $nc(this->typevars)->dup(this->currentOwner));
				$var($List, var$0, sigToTypeParams());
				$assign(poly, $new($Type$ForAll, var$0, $(sigToType())));
				$set(this, typevars, $nc(this->typevars)->leave());
				return poly;
			}
		default:
			{
				$throw($(badClassFile("bad.signature"_s, $$new($ObjectArray, {$($of($Convert::utf2string(this->signature, this->sigp, 10)))}))));
			}
		}
	}
}

$Type* ClassReader::classSigToType() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->signature)->get(this->sigp) != u'L') {
		$throw($(badClassFile("bad.class.signature"_s, $$new($ObjectArray, {$($of($Convert::utf2string(this->signature, this->sigp, 10)))}))));
	}
	++this->sigp;
	$init($Type);
	$var($Type, outer, $Type::noType);
	int32_t startSbp = this->sbp;
	while (true) {
		int8_t c = $nc(this->signature)->get(this->sigp++);
		{
			$var($Symbol$ClassSymbol, t, nullptr)
			switch (c) {
			case u';':
				{
					{
						$var($Symbol$ClassSymbol, t, enterClass($($nc(this->names)->fromUtf(this->signatureBuffer, startSbp, this->sbp - startSbp))));
						{
							$var($Throwable, var$0, nullptr);
							$var($Type, var$2, nullptr);
							bool return$1 = false;
							try {
								$assign(var$2, ($equals(outer, $Type::noType)) ? $nc(t)->erasure(this->types) : static_cast<$Type*>($new($Type$ClassType, outer, $($List::nil()), t)));
								return$1 = true;
								goto $finally;
							} catch ($Throwable& var$3) {
								$assign(var$0, var$3);
							} $finally: {
								this->sbp = startSbp;
							}
							if (var$0 != nullptr) {
								$throw(var$0);
							}
							if (return$1) {
								return var$2;
							}
						}
					}
				}
			case u'<':
				{
					$assign(t, enterClass($($nc(this->names)->fromUtf(this->signatureBuffer, startSbp, this->sbp - startSbp))));
					$assign(outer, $new($ClassReader$1, this, outer, $(sigToTypes(u'>')), t));
					switch ($nc(this->signature)->get(this->sigp++)) {
					case u';':
						{
							if (this->sigp < this->siglimit && $nc(this->signature)->get(this->sigp) == u'.') {
								this->sigp += (this->sbp - startSbp) + 3;
								$nc(this->signatureBuffer)->set(this->sbp++, (int8_t)u'$');
								break;
							} else {
								this->sbp = startSbp;
								return outer;
							}
						}
					case u'.':
						{
							$nc(this->signatureBuffer)->set(this->sbp++, (int8_t)u'$');
							break;
						}
					default:
						{
							$throwNew($AssertionError, (int32_t)$nc(this->signature)->get(this->sigp - 1));
						}
					}
					continue;
				}
			case u'.':
				{
					if (!$equals(outer, $Type::noType)) {
						$assign(t, enterClass($($nc(this->names)->fromUtf(this->signatureBuffer, startSbp, this->sbp - startSbp))));
						$assign(outer, $new($Type$ClassType, outer, $($List::nil()), t));
					}
					$nc(this->signatureBuffer)->set(this->sbp++, (int8_t)u'$');
					continue;
				}
			case u'/':
				{
					$nc(this->signatureBuffer)->set(this->sbp++, (int8_t)u'.');
					continue;
				}
			default:
				{
					$nc(this->signatureBuffer)->set(this->sbp++, c);
					continue;
				}
			}
		}
	}
}

$List* ClassReader::sigToTypes(char16_t terminator) {
	$useLocalCurrentObjectStackCache();
	$var($List, head, $List::of(nullptr));
	$var($List, tail, head);
	while ($nc(this->signature)->get(this->sigp) != terminator) {
		$assign(tail, $nc(tail)->setTail($($List::of($(sigToType())))));
	}
	++this->sigp;
	return $nc(head)->tail;
}

$List* ClassReader::sigToTypeParams($bytes* sig, int32_t offset, int32_t len) {
	$set(this, signature, sig);
	this->sigp = offset;
	this->siglimit = offset + len;
	return sigToTypeParams();
}

$List* ClassReader::sigToTypeParams() {
	$useLocalCurrentObjectStackCache();
	$var($List, tvars, $List::nil());
	if ($nc(this->signature)->get(this->sigp) == u'<') {
		++this->sigp;
		int32_t start = this->sigp;
		this->sigEnterPhase = true;
		while ($nc(this->signature)->get(this->sigp) != u'>') {
			$assign(tvars, $nc(tvars)->prepend($(sigToTypeParam())));
		}
		this->sigEnterPhase = false;
		this->sigp = start;
		while ($nc(this->signature)->get(this->sigp) != u'>') {
			sigToTypeParam();
		}
		++this->sigp;
	}
	return $nc(tvars)->reverse();
}

$Type* ClassReader::sigToTypeParam() {
	$useLocalCurrentObjectStackCache();
	int32_t start = this->sigp;
	while ($nc(this->signature)->get(this->sigp) != u':') {
		++this->sigp;
	}
	$var($Name, name, $nc(this->names)->fromUtf(this->signature, start, this->sigp - start));
	$var($Type$TypeVar, tvar, nullptr);
	if (this->sigEnterPhase) {
		$assign(tvar, $new($Type$TypeVar, name, this->currentOwner, $nc(this->syms)->botType));
		$nc(this->typevars)->enter(tvar->tsym);
	} else {
		$assign(tvar, $cast($Type$TypeVar, findTypeVar(name)));
	}
	$var($List, bounds, $List::nil());
	bool allInterfaces = false;
	if ($nc(this->signature)->get(this->sigp) == u':' && $nc(this->signature)->get(this->sigp + 1) == u':') {
		++this->sigp;
		allInterfaces = true;
	}
	while ($nc(this->signature)->get(this->sigp) == u':') {
		++this->sigp;
		$assign(bounds, $nc(bounds)->prepend($(sigToType())));
	}
	if (!this->sigEnterPhase) {
		$nc(this->types)->setBounds(tvar, $($nc(bounds)->reverse()), allInterfaces);
	}
	return tvar;
}

$Type* ClassReader::findTypeVar($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, s, $nc(this->typevars)->findFirst(name));
	if (s != nullptr) {
		return s->type;
	} else {
		if (this->readingClassAttr) {
			$var($Type$TypeVar, t, $new($Type$TypeVar, name, this->currentOwner, $nc(this->syms)->botType));
			$set(this, missingTypeVariables, $nc(this->missingTypeVariables)->prepend(t));
			return t;
		}
		$throw($(badClassFile("undecl.type.var"_s, $$new($ObjectArray, {$of(name)}))));
	}
}

void ClassReader::initAttributeReaders() {
	$useLocalCurrentObjectStackCache();
	$init($ClassFile$Version);
	$var($ClassReader$AttributeReaderArray, readers, $new($ClassReader$AttributeReaderArray, {
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$2, this, $nc(this->names)->Code, $ClassFile$Version::V45_3, this->MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$3, this, $nc(this->names)->ConstantValue, $ClassFile$Version::V45_3, this->MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$4, this, $nc(this->names)->Deprecated, $ClassFile$Version::V45_3, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$5, this, $nc(this->names)->Exceptions, $ClassFile$Version::V45_3, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$6, this, $nc(this->names)->InnerClasses, $ClassFile$Version::V45_3, this->CLASS_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$7, this, $nc(this->names)->LocalVariableTable, $ClassFile$Version::V45_3, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$8, this, $nc(this->names)->SourceFile, $ClassFile$Version::V45_3, this->CLASS_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$9, this, $nc(this->names)->Synthetic, $ClassFile$Version::V45_3, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$10, this, $nc(this->names)->EnclosingMethod, $ClassFile$Version::V49, this->CLASS_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$11, this, $nc(this->names)->Signature, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$12, this, $nc(this->names)->AnnotationDefault, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$13, this, $nc(this->names)->RuntimeInvisibleAnnotations, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$14, this, $nc(this->names)->RuntimeInvisibleParameterAnnotations, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$15, this, $nc(this->names)->RuntimeVisibleAnnotations, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$16, this, $nc(this->names)->RuntimeVisibleParameterAnnotations, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$17, this, $nc(this->names)->Annotation, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$18, this, $nc(this->names)->Bridge, $ClassFile$Version::V49, this->MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$19, this, $nc(this->names)->Enum, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$20, this, $nc(this->names)->Varargs, $ClassFile$Version::V49, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$21, this, $nc(this->names)->RuntimeVisibleTypeAnnotations, $ClassFile$Version::V52, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$22, this, $nc(this->names)->RuntimeInvisibleTypeAnnotations, $ClassFile$Version::V52, this->CLASS_OR_MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$23, this, $nc(this->names)->MethodParameters, $ClassFile$Version::V52, this->MEMBER_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$24, this, $nc(this->names)->Module, $ClassFile$Version::V53, this->CLASS_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$25, this, $nc(this->names)->ModuleResolution, $ClassFile$Version::V53, this->CLASS_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$26, this, $nc(this->names)->Record, $ClassFile$Version::V58, this->CLASS_ATTRIBUTE)),
		static_cast<$ClassReader$AttributeReader*>($$new($ClassReader$27, this, $nc(this->names)->PermittedSubclasses, $ClassFile$Version::V59, this->CLASS_ATTRIBUTE))
	}));
	{
		$var($ClassReader$AttributeReaderArray, arr$, readers);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ClassReader$AttributeReader, r, arr$->get(i$));
			$nc(this->attributeReaders)->put($nc(r)->name, r);
		}
	}
}

void ClassReader::readEnclosingMethodAttr($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($nc(sym)->owner)->members()))->remove(sym);
	$var($Symbol$ClassSymbol, self, $cast($Symbol$ClassSymbol, sym));
	$var($Symbol$ClassSymbol, c, $nc(this->poolReader)->getClass(nextChar()));
	int32_t var$0 = (int32_t)nextChar();
	$var($PoolConstant$NameAndType, nt, $cast($PoolConstant$NameAndType, optPoolEntry(var$0, static_cast<$IntFunction*>($$new(ClassReader$$Lambda$getNameAndType, static_cast<$PoolReader*>($nc(this->poolReader)))), nullptr)));
	$init($Kinds$Kind);
	if (c->members_field == nullptr || c->kind != $Kinds$Kind::TYP) {
		$throw($(badClassFile("bad.enclosing.class"_s, $$new($ObjectArray, {
			$of(self),
			$of(c)
		}))));
	}
	$var($Symbol$MethodSymbol, m, findMethod(nt, c->members_field, self->flags()));
	if (nt != nullptr && m == nullptr) {
		$throw($(badEnclosingMethod(self)));
	}
	$set(self, name, simpleBinaryName(self->flatname, c->flatname));
	$set(self, owner, m != nullptr ? static_cast<$Symbol*>(m) : static_cast<$Symbol*>(c));
	if ($nc(self->name)->isEmpty()) {
		$set(self, fullname, $nc(this->names)->empty);
	} else {
		$set(self, fullname, $Symbol$ClassSymbol::formFullName(self->name, self->owner));
	}
	if (m != nullptr) {
		$nc(($cast($Type$ClassType, sym->type)))->setEnclosingType(m->type);
	} else if (((int64_t)(self->flags_field & (uint64_t)(int64_t)8)) == 0) {
		$nc(($cast($Type$ClassType, sym->type)))->setEnclosingType(c->type);
	} else {
		$init($Type);
		$nc(($cast($Type$ClassType, sym->type)))->setEnclosingType($Type::noType);
	}
	enterTypevars(self, self->type);
	if (!$nc(this->missingTypeVariables)->isEmpty()) {
		$var($ListBuffer, typeVars, $new($ListBuffer));
		{
			$var($Iterator, i$, $nc(this->missingTypeVariables)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, typevar, $cast($Type, i$->next()));
				{
					typeVars->append($(findTypeVar($nc($nc(typevar)->tsym)->name)));
				}
			}
		}
		$set(this, foundTypeVariables, typeVars->toList());
	} else {
		$set(this, foundTypeVariables, $List::nil());
	}
}

$Name* ClassReader::simpleBinaryName($Name* self, $Name* enclosing) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(self)->startsWith(enclosing)) {
		$throw($(badClassFile("bad.enclosing.method"_s, $$new($ObjectArray, {$of(self)}))));
	}
	$var($String, simpleBinaryName, $nc($($nc(self)->toString()))->substring($nc($($nc(enclosing)->toString()))->length()));
	bool var$0 = simpleBinaryName->length() < 1;
	if (var$0 || simpleBinaryName->charAt(0) != u'$') {
		$throw($(badClassFile("bad.enclosing.method"_s, $$new($ObjectArray, {$of(self)}))));
	}
	int32_t index = 1;
	while (true) {
		bool var$1 = index < simpleBinaryName->length();
		if (!(var$1 && isAsciiDigit(simpleBinaryName->charAt(index)))) {
			break;
		}
		{
			++index;
		}
	}
	return $nc(this->names)->fromString($(simpleBinaryName->substring(index)));
}

$Symbol$MethodSymbol* ClassReader::findMethod($PoolConstant$NameAndType* nt$renamed, $Scope* scope, int64_t flags) {
	$useLocalCurrentObjectStackCache();
	$var($PoolConstant$NameAndType, nt, nt$renamed);
	if (nt == nullptr) {
		return nullptr;
	}
	$var($Type$MethodType, type, $nc($nc(nt)->type)->asMethodType());
	{
		$var($Iterator, i$, $nc($($nc(scope)->getSymbolsByName(nt->name)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::MTH && isSameBinaryType($($nc(sym->type)->asMethodType()), type)) {
					return $cast($Symbol$MethodSymbol, sym);
				}
			}
		}
	}
	if (nt->name != $nc(this->names)->init) {
		return nullptr;
	}
	if (((int64_t)(flags & (uint64_t)(int64_t)512)) != 0) {
		return nullptr;
	}
	if ($nc($($nc(nt->type)->getParameterTypes()))->isEmpty()) {
		return nullptr;
	}
	$var($List, var$0, $nc($($nc(nt->type)->getParameterTypes()))->tail);
	$var($Type, var$1, $nc(nt->type)->getReturnType());
	$assign(nt, $new($PoolConstant$NameAndType, nt->name, $$new($Type$MethodType, var$0, var$1, $($nc(nt->type)->getThrownTypes()), $nc(this->syms)->methodClass)));
	return findMethod(nt, scope, flags);
}

bool ClassReader::isSameBinaryType($Type$MethodType* mt1, $Type$MethodType* mt2) {
	$useLocalCurrentObjectStackCache();
	$var($List, types1, $nc($($nc(this->types)->erasure($($nc(mt1)->getParameterTypes()))))->prepend($($nc(this->types)->erasure($($nc(mt1)->getReturnType())))));
	$var($List, types2, $nc($($nc(mt2)->getParameterTypes()))->prepend($(mt2->getReturnType())));
	while (true) {
		bool var$0 = !$nc(types1)->isEmpty();
		if (!(var$0 && !$nc(types2)->isEmpty())) {
			break;
		}
		{
			if ($nc(($cast($Type, types1->head)))->tsym != $nc(($cast($Type, types2->head)))->tsym) {
				return false;
			}
			$assign(types1, types1->tail);
			$assign(types2, types2->tail);
		}
	}
	bool var$1 = $nc(types1)->isEmpty();
	return var$1 && $nc(types2)->isEmpty();
}

bool ClassReader::isAsciiDigit(char16_t c) {
	$init(ClassReader);
	return u'0' <= c && c <= u'9';
}

void ClassReader::readMemberAttrs($Symbol* sym) {
	$init($ClassReader$AttributeKind);
	readAttrs(sym, $ClassReader$AttributeKind::MEMBER);
}

void ClassReader::readAttrs($Symbol* sym, $ClassReader$AttributeKind* kind) {
	$useLocalCurrentObjectStackCache();
	char16_t ac = nextChar();
	for (int32_t i = 0; i < ac; ++i) {
		$var($Name, attrName, $nc(this->poolReader)->getName(nextChar()));
		int32_t attrLen = nextInt();
		$var($ClassReader$AttributeReader, r, $cast($ClassReader$AttributeReader, $nc(this->attributeReaders)->get(attrName)));
		if (r != nullptr && r->accepts(kind)) {
			r->read(sym, attrLen);
		} else {
			this->bp = this->bp + attrLen;
		}
	}
}

void ClassReader::readClassAttrs($Symbol$ClassSymbol* c) {
	$init($ClassReader$AttributeKind);
	readAttrs(c, $ClassReader$AttributeKind::CLASS);
}

$Code* ClassReader::readCode($Symbol* owner) {
	nextChar();
	nextChar();
	int32_t code_length = nextInt();
	this->bp += code_length;
	char16_t exception_table_length = nextChar();
	this->bp += exception_table_length * 8;
	readMemberAttrs(owner);
	return nullptr;
}

$List* ClassReader::readAnnotations() {
	$useLocalCurrentObjectStackCache();
	int32_t numAttributes = nextChar();
	$var($ListBuffer, annotations, $new($ListBuffer));
	for (int32_t i = 0; i < numAttributes; ++i) {
		annotations->append($(readCompoundAnnotation()));
	}
	return annotations->toList();
}

void ClassReader::attachAnnotations($Symbol* sym) {
	attachAnnotations(sym, $(readAnnotations()));
}

void ClassReader::attachAnnotations($Symbol* sym, $List* annotations) {
	$useLocalCurrentObjectStackCache();
	if ($nc(annotations)->isEmpty()) {
		return;
	}
	$var($ListBuffer, proxies, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ClassReader$CompoundAnnotationProxy, proxy, $cast($ClassReader$CompoundAnnotationProxy, i$->next()));
			{
				if ($nc($nc($nc(proxy)->type)->tsym)->flatName() == $nc($nc($nc(this->syms)->proprietaryType)->tsym)->flatName()) {
					$nc(sym)->flags_field |= 0x0000004000000000;
				} else if ($nc($nc(proxy->type)->tsym)->flatName() == $nc($nc($nc(this->syms)->profileType)->tsym)->flatName()) {
					$init($Profile);
					if (this->profile != $Profile::DEFAULT) {
						{
							$var($Iterator, i$, $nc(proxy->values)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Pair, v, $cast($Pair, i$->next()));
								{
									{
										$var($Attribute$Constant, constant, nullptr);
										bool var$0 = $equals($nc(v)->fst, $nc(this->names)->value);
										if (var$0) {
											$var($Object, patt56540$temp, v->snd);
											bool var$1 = $instanceOf($Attribute$Constant, patt56540$temp);
											if (var$1) {
												$assign(constant, $cast($Attribute$Constant, patt56540$temp));
												var$1 = true;
											}
											var$0 = var$1;
										}
										if (var$0) {
											if ($equals($nc(constant)->type, $nc(this->syms)->intType) && $nc(($cast($Integer, constant->value)))->intValue() > this->profile->value) {
												$nc(sym)->flags_field |= 0x0000200000000000;
											}
										}
									}
								}
							}
						}
					}
				} else if ($nc($nc(proxy->type)->tsym)->flatName() == $nc($nc($nc(this->syms)->previewFeatureInternalType)->tsym)->flatName()) {
					$nc(sym)->flags_field |= 0x0100000000000000;
					setFlagIfAttributeTrue(proxy, sym, $nc(this->names)->reflective, 0x0400000000000000);
				} else if ($nc($nc(proxy->type)->tsym)->flatName() == $nc($nc($nc(this->syms)->valueBasedInternalType)->tsym)->flatName()) {
					$init($Kinds$Kind);
					$Assert::check($nc(sym)->kind == $Kinds$Kind::TYP);
					$nc(sym)->flags_field |= 0x0020000000000000;
				} else {
					if ($nc(proxy->type)->tsym == $nc($nc(this->syms)->annotationTargetType)->tsym) {
						$set(this, target, proxy);
					} else if ($nc(proxy->type)->tsym == $nc($nc(this->syms)->repeatableType)->tsym) {
						$set(this, repeatable, proxy);
					} else if ($nc(proxy->type)->tsym == $nc($nc(this->syms)->deprecatedType)->tsym) {
						$nc(sym)->flags_field |= (0x00020000 | (int64_t)0x0040000000000000);
						setFlagIfAttributeTrue(proxy, sym, $nc(this->names)->forRemoval, 0x0080000000000000);
					} else if ($nc(proxy->type)->tsym == $nc($nc(this->syms)->previewFeatureType)->tsym) {
						$nc(sym)->flags_field |= 0x0100000000000000;
						setFlagIfAttributeTrue(proxy, sym, $nc(this->names)->reflective, 0x0400000000000000);
					} else {
						$init($Kinds$Kind);
						if ($nc(proxy->type)->tsym == $nc($nc(this->syms)->valueBasedType)->tsym && $nc(sym)->kind == $Kinds$Kind::TYP) {
							sym->flags_field |= 0x0020000000000000;
						}
					}
					proxies->append(proxy);
				}
			}
		}
	}
	$nc(this->annotate)->normal($$new($ClassReader$AnnotationCompleter, this, sym, $(proxies->toList())));
}

void ClassReader::setFlagIfAttributeTrue($ClassReader$CompoundAnnotationProxy* proxy, $Symbol* sym, $Name* attribute, int64_t flag) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(proxy)->values)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, v, $cast($Pair, i$->next()));
			{
				{
					$var($Attribute$Constant, constant, nullptr);
					bool var$0 = $equals($nc(v)->fst, attribute);
					if (var$0) {
						$var($Object, patt58549$temp, v->snd);
						bool var$1 = $instanceOf($Attribute$Constant, patt58549$temp);
						if (var$1) {
							$assign(constant, $cast($Attribute$Constant, patt58549$temp));
							var$1 = true;
						}
						var$0 = var$1;
					}
					if (var$0) {
						if ($equals($nc(constant)->type, $nc(this->syms)->booleanType) && $nc(($cast($Integer, constant->value)))->intValue() != 0) {
							$nc(sym)->flags_field |= flag;
						}
					}
				}
			}
		}
	}
}

void ClassReader::readParameterAnnotations($Symbol* meth) {
	$useLocalCurrentObjectStackCache();
	int32_t numParameters = (int32_t)($nc(this->buf)->getByte(this->bp++) & (uint32_t)255);
	if (this->parameterAnnotations == nullptr) {
		$set(this, parameterAnnotations, $new($ClassReader$ParameterAnnotationsArray, numParameters));
	} else if ($nc(this->parameterAnnotations)->length != numParameters) {
		$throw($(badClassFile("bad.runtime.invisible.param.annotations"_s, $$new($ObjectArray, {$of(meth)}))));
	}
	for (int32_t pnum = 0; pnum < numParameters; ++pnum) {
		if ($nc(this->parameterAnnotations)->get(pnum) == nullptr) {
			$nc(this->parameterAnnotations)->set(pnum, $$new($ClassReader$ParameterAnnotations));
		}
		$nc($nc(this->parameterAnnotations)->get(pnum))->add($(readAnnotations()));
	}
}

void ClassReader::attachTypeAnnotations($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	int32_t numAttributes = nextChar();
	if (numAttributes != 0) {
		$var($ListBuffer, proxies, $new($ListBuffer));
		for (int32_t i = 0; i < numAttributes; ++i) {
			proxies->append($(readTypeAnnotation()));
		}
		$nc(this->annotate)->normal($$new($ClassReader$TypeAnnotationCompleter, this, sym, $(proxies->toList())));
	}
}

void ClassReader::attachAnnotationDefault($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, meth, $cast($Symbol$MethodSymbol, sym));
	$var($Attribute, value, readAttributeValue());
	$set($nc(meth), defaultValue, value);
	$nc(this->annotate)->normal($$new($ClassReader$AnnotationDefaultCompleter, this, meth, value));
}

$Type* ClassReader::readTypeOrClassSymbol(int32_t i) {
	return readTypeToProxy(i);
}

$Type* ClassReader::readTypeToProxy(int32_t i) {
	if ($equals($nc(this->currentModule)->module_info, this->currentOwner)) {
		return $new($ClassReader$ProxyType, this, i);
	} else {
		return $nc(this->poolReader)->getType(i);
	}
}

$ClassReader$CompoundAnnotationProxy* ClassReader::readCompoundAnnotation() {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, nullptr);
	if ($equals($nc(this->currentModule)->module_info, this->currentOwner)) {
		int32_t cpIndex = nextChar();
		$assign(t, $new($ClassReader$ProxyType, this, cpIndex));
	} else {
		$assign(t, readTypeOrClassSymbol(nextChar()));
	}
	int32_t numFields = nextChar();
	$var($ListBuffer, pairs, $new($ListBuffer));
	for (int32_t i = 0; i < numFields; ++i) {
		$var($Name, name, $nc(this->poolReader)->getName(nextChar()));
		$var($Attribute, value, readAttributeValue());
		pairs->append($$new($Pair, name, value));
	}
	return $new($ClassReader$CompoundAnnotationProxy, t, $(pairs->toList()));
}

$ClassReader$TypeAnnotationProxy* ClassReader::readTypeAnnotation() {
	$useLocalCurrentObjectStackCache();
	$var($TypeAnnotationPosition, position, readPosition());
	$var($ClassReader$CompoundAnnotationProxy, proxy, readCompoundAnnotation());
	return $new($ClassReader$TypeAnnotationProxy, proxy, position);
}

$TypeAnnotationPosition* ClassReader::readPosition() {
	$useLocalCurrentObjectStackCache();
	int32_t tag = nextByte();
	if (!$TargetType::isValidTargetTypeValue(tag)) {
		$throw($(badClassFile("bad.type.annotation.value"_s, $$new($ObjectArray, {$($of($String::format("0x%02X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(tag)))}))))}))));
	}
	$TargetType* type = $TargetType::fromTargetTypeValue(tag);
	$init($ClassReader$28);
	switch ($nc($ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType)->get($nc((type))->ordinal())) {
	case 1:
		{
			{
				int32_t offset = nextChar();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::instanceOf($(readTypePath())));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 2:
		{
			{
				int32_t offset = nextChar();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::newObj($(readTypePath())));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 3:
		{
			{
				int32_t offset = nextChar();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::constructorRef($(readTypePath())));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 4:
		{
			{
				int32_t offset = nextChar();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::methodRef($(readTypePath())));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 5:
		{
			{
				int32_t table_length = nextChar();
				$var($ints, newLvarOffset, $new($ints, table_length));
				$var($ints, newLvarLength, $new($ints, table_length));
				$var($ints, newLvarIndex, $new($ints, table_length));
				for (int32_t i = 0; i < table_length; ++i) {
					newLvarOffset->set(i, nextChar());
					newLvarLength->set(i, nextChar());
					newLvarIndex->set(i, nextChar());
				}
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::localVariable($(readTypePath())));
				$set($nc(position), lvarOffset, newLvarOffset);
				$set(position, lvarLength, newLvarLength);
				$set(position, lvarIndex, newLvarIndex);
				return position;
			}
		}
	case 6:
		{
			{
				int32_t table_length = nextChar();
				$var($ints, newLvarOffset, $new($ints, table_length));
				$var($ints, newLvarLength, $new($ints, table_length));
				$var($ints, newLvarIndex, $new($ints, table_length));
				for (int32_t i = 0; i < table_length; ++i) {
					newLvarOffset->set(i, nextChar());
					newLvarLength->set(i, nextChar());
					newLvarIndex->set(i, nextChar());
				}
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::resourceVariable($(readTypePath())));
				$set($nc(position), lvarOffset, newLvarOffset);
				$set(position, lvarLength, newLvarLength);
				$set(position, lvarIndex, newLvarIndex);
				return position;
			}
		}
	case 7:
		{
			{
				int32_t exception_index = nextChar();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::exceptionParameter($(readTypePath())));
				$nc(position)->setExceptionIndex(exception_index);
				return position;
			}
		}
	case 8:
		{
			return $TypeAnnotationPosition::methodReceiver($(readTypePath()));
		}
	case 9:
		{
			{
				int32_t parameter_index = nextByte();
				return $TypeAnnotationPosition::typeParameter($(readTypePath()), parameter_index);
			}
		}
	case 10:
		{
			{
				int32_t parameter_index = nextByte();
				return $TypeAnnotationPosition::methodTypeParameter($(readTypePath()), parameter_index);
			}
		}
	case 11:
		{
			{
				int32_t parameter_index = nextByte();
				int32_t bound_index = nextByte();
				return $TypeAnnotationPosition::typeParameterBound($(readTypePath()), parameter_index, bound_index);
			}
		}
	case 12:
		{
			{
				int32_t parameter_index = nextByte();
				int32_t bound_index = nextByte();
				return $TypeAnnotationPosition::methodTypeParameterBound($(readTypePath()), parameter_index, bound_index);
			}
		}
	case 13:
		{
			{
				int32_t type_index = nextChar();
				return $TypeAnnotationPosition::classExtends($(readTypePath()), type_index);
			}
		}
	case 14:
		{
			{
				int32_t type_index = nextChar();
				return $TypeAnnotationPosition::methodThrows($(readTypePath()), type_index);
			}
		}
	case 15:
		{
			{
				int32_t parameter_index = nextByte();
				return $TypeAnnotationPosition::methodParameter($(readTypePath()), parameter_index);
			}
		}
	case 16:
		{
			{
				int32_t offset = nextChar();
				int32_t type_index = nextByte();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::typeCast($(readTypePath()), type_index));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 17:
		{
			{
				int32_t offset = nextChar();
				int32_t type_index = nextByte();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::constructorInvocationTypeArg($(readTypePath()), type_index));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 18:
		{
			{
				int32_t offset = nextChar();
				int32_t type_index = nextByte();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::methodInvocationTypeArg($(readTypePath()), type_index));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 19:
		{
			{
				int32_t offset = nextChar();
				int32_t type_index = nextByte();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::constructorRefTypeArg($(readTypePath()), type_index));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 20:
		{
			{
				int32_t offset = nextChar();
				int32_t type_index = nextByte();
				$var($TypeAnnotationPosition, position, $TypeAnnotationPosition::methodRefTypeArg($(readTypePath()), type_index));
				$nc(position)->offset = offset;
				return position;
			}
		}
	case 21:
		{
			return $TypeAnnotationPosition::methodReturn($(readTypePath()));
		}
	case 22:
		{
			return $TypeAnnotationPosition::field($(readTypePath()));
		}
	case 23:
		{
			$throwNew($AssertionError, $of("jvm.ClassReader: UNKNOWN target type should never occur!"_s));
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"jvm.ClassReader: Unknown target type for position: "_s, type})));
		}
	}
}

$List* ClassReader::readTypePath() {
	$useLocalCurrentObjectStackCache();
	int32_t len = nextByte();
	$var($ListBuffer, loc, $new($ListBuffer));
	for (int32_t i = 0; i < len * $TypeAnnotationPosition$TypePathEntry::bytesPerEntry; ++i) {
		$assign(loc, $nc(loc)->append($($Integer::valueOf(nextByte()))));
	}
	return $TypeAnnotationPosition::getTypePathFromBinary($($nc(loc)->toList()));
}

$Object* ClassReader::optPoolEntry(int32_t index, $IntFunction* poolFunc, Object$* defaultValue) {
	return $of((index == 0) ? $of(defaultValue) : $nc(poolFunc)->apply(index));
}

$Attribute* ClassReader::readAttributeValue() {
	$useLocalCurrentObjectStackCache();
	char16_t c = (char16_t)$nc(this->buf)->getByte(this->bp++);
	switch (c) {
	case u'B':
		{
			return $new($Attribute$Constant, $nc(this->syms)->byteType, $($nc(this->poolReader)->getConstant(nextChar())));
		}
	case u'C':
		{
			return $new($Attribute$Constant, $nc(this->syms)->charType, $($nc(this->poolReader)->getConstant(nextChar())));
		}
	case u'D':
		{
			return $new($Attribute$Constant, $nc(this->syms)->doubleType, $($nc(this->poolReader)->getConstant(nextChar())));
		}
	case u'F':
		{
			return $new($Attribute$Constant, $nc(this->syms)->floatType, $($nc(this->poolReader)->getConstant(nextChar())));
		}
	case u'I':
		{
			return $new($Attribute$Constant, $nc(this->syms)->intType, $($nc(this->poolReader)->getConstant(nextChar())));
		}
	case u'J':
		{
			return $new($Attribute$Constant, $nc(this->syms)->longType, $($nc(this->poolReader)->getConstant(nextChar())));
		}
	case u'S':
		{
			return $new($Attribute$Constant, $nc(this->syms)->shortType, $($nc(this->poolReader)->getConstant(nextChar())));
		}
	case u'Z':
		{
			return $new($Attribute$Constant, $nc(this->syms)->booleanType, $($nc(this->poolReader)->getConstant(nextChar())));
		}
	case u's':
		{
			return $new($Attribute$Constant, $nc(this->syms)->stringType, $($nc($($nc(this->poolReader)->getName(nextChar())))->toString()));
		}
	case u'e':
		{
			$var($Type, var$0, readTypeToProxy(nextChar()));
			return $new($ClassReader$EnumAttributeProxy, var$0, $($nc(this->poolReader)->getName(nextChar())));
		}
	case u'c':
		{
			return $new($ClassReader$ClassAttributeProxy, $(readTypeOrClassSymbol(nextChar())));
		}
	case u'[':
		{
			{
				int32_t n = nextChar();
				$var($ListBuffer, l, $new($ListBuffer));
				for (int32_t i = 0; i < n; ++i) {
					l->append($(readAttributeValue()));
				}
				return $new($ClassReader$ArrayAttributeProxy, $(l->toList()));
			}
		}
	case u'@':
		{
			return readCompoundAnnotation();
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"unknown annotation tag \'"_s, $$str(c), "\'"_s})));
		}
	}
}

$Symbol$VarSymbol* ClassReader::readField() {
	$useLocalCurrentObjectStackCache();
	int64_t flags = adjustFieldFlags(nextChar());
	$var($Name, name, $nc(this->poolReader)->getName(nextChar()));
	$var($Type, type, $nc(this->poolReader)->getType(nextChar()));
	$var($Symbol$VarSymbol, v, $new($Symbol$VarSymbol, flags, name, type, this->currentOwner));
	readMemberAttrs(v);
	return v;
}

$Symbol$MethodSymbol* ClassReader::readMethod() {
	$useLocalCurrentObjectStackCache();
	int64_t flags = adjustMethodFlags(nextChar());
	$var($Name, name, $nc(this->poolReader)->getName(nextChar()));
	$var($Type, type, $nc(this->poolReader)->getType(nextChar()));
	bool var$0 = $nc(this->currentOwner)->isInterface() && ((int64_t)(flags & (uint64_t)(int64_t)1024)) == 0;
	if (var$0 && !$nc($of(name))->equals($nc(this->names)->clinit)) {
		$init($ClassFile$Version);
		if (this->majorVersion > $ClassFile$Version::V52->major || (this->majorVersion == $ClassFile$Version::V52->major && this->minorVersion >= $ClassFile$Version::V52->minor)) {
			if (((int64_t)(flags & (uint64_t)(int64_t)(8 | 2))) == 0) {
				$nc(this->currentOwner)->flags_field |= 0x0000080000000000;
				flags |= (int64_t)0x0000080000000000 | 1024;
			}
		} else {
			$throw($(badClassFile(((int64_t)(flags & (uint64_t)(int64_t)8)) == 0 ? "invalid.default.interface"_s : "invalid.static.interface"_s, $$new($ObjectArray, {
				$($of($Integer::toString(this->majorVersion))),
				$($of($Integer::toString(this->minorVersion)))
			}))));
		}
	}
	validateMethodType(name, type);
	if (name == $nc(this->names)->init && $nc(this->currentOwner)->hasOuterInstance()) {
		$init($Scope$LookupKind);
		bool local = !$nc($($nc($nc(this->currentOwner)->owner)->members()))->includes(this->currentOwner, $Scope$LookupKind::NON_RECURSIVE);
		if (!$nc($nc(this->currentOwner)->name)->isEmpty() && !local) {
			$var($List, var$1, adjustMethodParams(flags, $($nc(type)->getParameterTypes())));
			$var($Type, var$2, $nc(type)->getReturnType());
			$assign(type, $new($Type$MethodType, var$1, var$2, $(type->getThrownTypes()), $nc(this->syms)->methodClass));
		}
	}
	$var($Symbol$MethodSymbol, m, $new($Symbol$MethodSymbol, flags, name, type, this->currentOwner));
	if ($nc(this->types)->isSignaturePolymorphic(m)) {
		m->flags_field |= 0x0000400000000000;
	}
	if (this->saveParameterNames) {
		initParameterNames(m);
	}
	$var($Symbol, prevOwner, this->currentOwner);
	$set(this, currentOwner, m);
	{
		$var($Throwable, var$3, nullptr);
		try {
			readMemberAttrs(m);
		} catch ($Throwable& var$4) {
			$assign(var$3, var$4);
		} /*finally*/ {
			$set(this, currentOwner, prevOwner);
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
	validateMethodType(name, m->type);
	setParameters(m, type);
	if (((int64_t)(flags & (uint64_t)(int64_t)0x0000000400000000)) != 0) {
		$var($Type, last, $cast($Type, $nc($($nc(type)->getParameterTypes()))->last()));
		$init($TypeTag);
		if (last == nullptr || !$nc(last)->hasTag($TypeTag::ARRAY)) {
			m->flags_field &= (uint64_t)~0x0000000400000000;
			$throw($(badClassFile("malformed.vararg.method"_s, $$new($ObjectArray, {$of(m)}))));
		}
	}
	return m;
}

void ClassReader::validateMethodType($Name* name, $Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$1 = !$nc(t)->hasTag($TypeTag::METHOD);
	bool var$0 = (var$1 && !t->hasTag($TypeTag::FORALL));
	if (var$0 || (name == $nc(this->names)->init && !$nc($($nc(t)->getReturnType()))->hasTag($TypeTag::VOID))) {
		$throw($(badClassFile("method.descriptor.invalid"_s, $$new($ObjectArray, {$of(name)}))));
	}
}

$List* ClassReader::adjustMethodParams(int64_t flags, $List* args$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, args, args$renamed);
	if ($nc(args)->isEmpty()) {
		return args;
	}
	bool isVarargs = ((int64_t)(flags & (uint64_t)(int64_t)0x0000000400000000)) != 0;
	if (isVarargs) {
		$var($Type, varargsElem, $cast($Type, $nc(args)->last()));
		$var($ListBuffer, adjustedArgs, $new($ListBuffer));
		{
			$var($Iterator, i$, args->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					adjustedArgs->append(t != varargsElem ? t : $(static_cast<$Type*>($nc(($cast($Type$ArrayType, t)))->makeVarargs())));
				}
			}
		}
		$assign(args, adjustedArgs->toList());
	}
	return $nc(args)->tail;
}

void ClassReader::initParameterNames($Symbol$MethodSymbol* sym) {
	int32_t excessSlots = 4;
	int32_t expectedParameterSlots = $Code::width($($nc($nc(sym)->type)->getParameterTypes())) + excessSlots;
	if (this->parameterNameIndices == nullptr || $nc(this->parameterNameIndices)->length < expectedParameterSlots) {
		$set(this, parameterNameIndices, $new($ints, expectedParameterSlots));
	} else {
		$Arrays::fill(this->parameterNameIndices, 0);
	}
	this->haveParameterNameIndices = false;
	this->sawMethodParameters = false;
}

void ClassReader::setParameters($Symbol$MethodSymbol* sym, $Type* jvmType) {
	$useLocalCurrentObjectStackCache();
	int32_t firstParam = 0;
	if (!this->sawMethodParameters) {
		firstParam = (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) == 0) ? 1 : 0;
		if ($nc(sym)->name == $nc(this->names)->init && $nc(this->currentOwner)->hasOuterInstance()) {
			if (!$nc($nc(this->currentOwner)->name)->isEmpty()) {
				firstParam += 1;
			}
		}
		if ($nc(sym)->type != jvmType) {
			int32_t var$0 = $Code::width($($nc(jvmType)->getParameterTypes()));
			int32_t skip = var$0 - $Code::width($($nc(sym->type)->getParameterTypes()));
			firstParam += skip;
		}
	}
	$var($Set, paramNames, $new($HashSet));
	$var($ListBuffer, params, $new($ListBuffer));
	int32_t nameIndex = firstParam;
	int32_t annotationIndex = 0;
	{
		$var($Iterator, i$, $nc($($nc($nc(sym)->type)->getParameterTypes()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Symbol$VarSymbol, param, parameter(nameIndex, t, sym, paramNames));
				params->append(param);
				if (this->parameterAnnotations != nullptr) {
					$var($ClassReader$ParameterAnnotations, annotations, $nc(this->parameterAnnotations)->get(annotationIndex));
					if (annotations != nullptr && annotations->proxies != nullptr && !$nc(annotations->proxies)->isEmpty()) {
						$nc(this->annotate)->normal($$new($ClassReader$AnnotationCompleter, this, param, annotations->proxies));
					}
				}
				nameIndex += this->sawMethodParameters ? 1 : $Code::width(t);
				++annotationIndex;
			}
		}
	}
	if (this->parameterAnnotations != nullptr && $nc(this->parameterAnnotations)->length != annotationIndex) {
		$throw($(badClassFile("bad.runtime.invisible.param.annotations"_s, $$new($ObjectArray, {$of(sym)}))));
	}
	$Assert::checkNull(sym->params$);
	$set(sym, params$, params->toList());
	$set(this, parameterAnnotations, nullptr);
	$set(this, parameterNameIndices, nullptr);
	$set(this, parameterAccessFlags, nullptr);
}

$Symbol$VarSymbol* ClassReader::parameter(int32_t index, $Type* t, $Symbol$MethodSymbol* owner, $Set* exclude) {
	$useLocalCurrentObjectStackCache();
	int64_t flags = 0x0000000200000000;
	$var($Name, argName, nullptr);
	if (this->parameterAccessFlags != nullptr && index < $nc(this->parameterAccessFlags)->length && $nc(this->parameterAccessFlags)->get(index) != 0) {
		flags |= $nc(this->parameterAccessFlags)->get(index);
	}
	if (this->parameterNameIndices != nullptr && index < $nc(this->parameterNameIndices)->length && $nc(this->parameterNameIndices)->get(index) != 0) {
		$assign(argName, $cast($Name, optPoolEntry($nc(this->parameterNameIndices)->get(index), static_cast<$IntFunction*>($$new(ClassReader$$Lambda$getName$1, static_cast<$PoolReader*>($nc(this->poolReader)))), $nc(this->names)->empty)));
		flags |= 0x0010000000000000;
	} else {
		$var($String, prefix, "arg"_s);
		while (true) {
			$assign(argName, $nc(this->names)->fromString($$str({prefix, $$str($nc(exclude)->size())})));
			if (!$nc(exclude)->contains(argName)) {
				break;
			}
			$plusAssign(prefix, "$"_s);
		}
	}
	$nc(exclude)->add(argName);
	return $new($Symbol$ParamSymbol, flags, argName, t, owner);
}

void ClassReader::skipBytes(int32_t n) {
	this->bp = this->bp + n;
}

void ClassReader::skipMember() {
	this->bp = this->bp + 6;
	char16_t ac = nextChar();
	for (int32_t i = 0; i < ac; ++i) {
		this->bp = this->bp + 2;
		int32_t attrLen = nextInt();
		this->bp = this->bp + attrLen;
	}
}

void ClassReader::skipInnerClasses() {
	int32_t n = nextChar();
	for (int32_t i = 0; i < n; ++i) {
		nextChar();
		nextChar();
		nextChar();
		nextChar();
	}
}

void ClassReader::enterTypevars($Symbol* sym, $Type* t) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->getEnclosingType() != nullptr) {
		$init($TypeTag);
		if (!$nc($(t->getEnclosingType()))->hasTag($TypeTag::NONE)) {
			enterTypevars($nc(sym)->owner, $(t->getEnclosingType()));
		}
	} else {
		$init($Kinds$Kind);
		if ($nc(sym)->kind == $Kinds$Kind::MTH && !sym->isStatic()) {
			enterTypevars(sym->owner, $nc(sym->owner)->type);
		}
	}
	{
		$var($List, xs, $nc(t)->getTypeArguments());
		for (; $nc(xs)->nonEmpty(); $assign(xs, $nc(xs)->tail)) {
			$nc(this->typevars)->enter($nc(($cast($Type, xs->head)))->tsym);
		}
	}
}

$Symbol$ClassSymbol* ClassReader::enterClass($Name* name) {
	return $nc(this->syms)->enterClass(this->currentModule, name);
}

$Symbol$ClassSymbol* ClassReader::enterClass($Name* name, $Symbol$TypeSymbol* owner) {
	return $nc(this->syms)->enterClass(this->currentModule, name, owner);
}

void ClassReader::readClass($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(c)->type));
	$set(c, members_field, $Scope$WriteableScope::create(c));
	$set(this, typevars, $nc(this->typevars)->dup(this->currentOwner));
	$init($TypeTag);
	if ($nc($($nc(ct)->getEnclosingType()))->hasTag($TypeTag::CLASS)) {
		enterTypevars(c->owner, $(ct->getEnclosingType()));
	}
	int64_t f = nextChar();
	int64_t flags = adjustClassFlags(f);
	if (((int64_t)(flags & (uint64_t)(int64_t)0x0008000000000000)) == 0) {
		$init($Kinds$Kind);
		if ($nc(c->owner)->kind == $Kinds$Kind::PCK || $nc(c->owner)->kind == $Kinds$Kind::ERR) {
			c->flags_field = flags;
		}
		$set(this, currentModule, $nc($(c->packge()))->modle);
		$var($Symbol$ClassSymbol, self, $nc(this->poolReader)->getClass(nextChar()));
		if (c != self) {
			$throw($(badClassFile("class.file.wrong.class"_s, $$new($ObjectArray, {$of(self->flatname)}))));
		}
	} else {
		$init($ClassFile$Version);
		if (this->majorVersion < $ClassFile$Version::V53->major) {
			$throw($(badClassFile("anachronistic.module.info"_s, $$new($ObjectArray, {
				$($of($Integer::toString(this->majorVersion))),
				$($of($Integer::toString(this->minorVersion)))
			}))));
		}
		c->flags_field = flags;
		$init($Kinds$Kind);
		if ($nc(c->owner)->kind != $Kinds$Kind::MDL) {
			$throw($(badClassFile("module.info.definition.expected"_s, $$new($ObjectArray, 0))));
		}
		$set(this, currentModule, $cast($Symbol$ModuleSymbol, c->owner));
		int32_t this_class = nextChar();
	}
	int32_t startbp = this->bp;
	nextChar();
	char16_t interfaceCount = nextChar();
	this->bp += interfaceCount * 2;
	char16_t fieldCount = nextChar();
	for (int32_t i = 0; i < fieldCount; ++i) {
		skipMember();
	}
	char16_t methodCount = nextChar();
	for (int32_t i = 0; i < methodCount; ++i) {
		skipMember();
	}
	readClassAttrs(c);
	if (c->permitted != nullptr && !$nc(c->permitted)->isEmpty()) {
		c->flags_field |= 0x4000000000000000;
	}
	this->bp = startbp;
	int32_t n = nextChar();
	if (((int64_t)(flags & (uint64_t)(int64_t)0x0008000000000000)) != 0 && n > 0) {
		$throw($(badClassFile("module.info.invalid.super.class"_s, $$new($ObjectArray, 0))));
	}
	if ($nc(ct)->supertype_field == nullptr) {
		$set(ct, supertype_field, $cast($Type, optPoolEntry(n, static_cast<$IntFunction*>($$new(ClassReader$$Lambda$lambda$readClass$0$2, this)), $Type::noType)));
	}
	n = nextChar();
	$var($List, is, $List::nil());
	for (int32_t i = 0; i < n; ++i) {
		$var($Type, _inter, $nc($($nc(this->poolReader)->getClass(nextChar())))->erasure(this->types));
		$assign(is, $nc(is)->prepend(_inter));
	}
	if ($nc(ct)->interfaces_field == nullptr) {
		$set(ct, interfaces_field, $nc(is)->reverse());
	}
	$Assert::check(fieldCount == nextChar());
	for (int32_t i = 0; i < fieldCount; ++i) {
		enterMember(c, $(readField()));
	}
	$Assert::check(methodCount == nextChar());
	for (int32_t i = 0; i < methodCount; ++i) {
		enterMember(c, $(readMethod()));
	}
	if (c->isRecord()) {
		{
			$var($Iterator, i$, $nc($(c->getRecordComponents()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$RecordComponent, rc, $cast($Symbol$RecordComponent, i$->next()));
				{
					$set($nc(rc), accessor, lookupMethod(c, rc->name, $($List::nil())));
				}
			}
		}
	}
	$set(this, typevars, $nc(this->typevars)->leave());
}

$Symbol$MethodSymbol* ClassReader::lookupMethod($Symbol$TypeSymbol* tsym, $Name* name, $List* argtypes) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc($($nc(tsym)->members()))->getSymbolsByName(name, static_cast<$Predicate*>($$new(ClassReader$$Lambda$lambda$lookupMethod$1$3)))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				if ($nc(this->types)->isSameTypes($($nc($nc(s)->type)->getParameterTypes()), argtypes)) {
					return $cast($Symbol$MethodSymbol, s);
				}
			}
		}
	}
	return nullptr;
}

void ClassReader::readInnerClasses($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	int32_t n = nextChar();
	for (int32_t i = 0; i < n; ++i) {
		nextChar();
		int32_t outerIdx = nextChar();
		int32_t nameIdx = nextChar();
		$var($Symbol$ClassSymbol, outer, $cast($Symbol$ClassSymbol, optPoolEntry(outerIdx, static_cast<$IntFunction*>($$new(ClassReader$$Lambda$getClass$4, static_cast<$PoolReader*>($nc(this->poolReader)))), nullptr)));
		$var($Name, name, $cast($Name, optPoolEntry(nameIdx, static_cast<$IntFunction*>($$new(ClassReader$$Lambda$getName$1, static_cast<$PoolReader*>($nc(this->poolReader)))), $nc(this->names)->empty)));
		if (name == nullptr) {
			$assign(name, $nc(this->names)->empty);
		}
		int64_t flags = adjustClassFlags(nextChar());
		if (outer != nullptr) {
			if (name == $nc(this->names)->empty) {
				$assign(name, $nc(this->names)->one);
			}
			$var($Symbol$ClassSymbol, member, enterClass(name, outer));
			if (((int64_t)(flags & (uint64_t)(int64_t)8)) == 0) {
				$nc(($cast($Type$ClassType, $nc(member)->type)))->setEnclosingType(outer->type);
				if (member->erasure_field != nullptr) {
					$nc(($cast($Type$ClassType, member->erasure_field)))->setEnclosingType($($nc(this->types)->erasure(outer->type)));
				}
			}
			if (c == outer) {
				$nc(member)->flags_field = flags;
				enterMember(c, member);
			}
		}
	}
}

void ClassReader::readClassBuffer($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	int32_t magic = nextInt();
	if (magic != (int32_t)0xCAFEBABE) {
		$throw($(badClassFile("illegal.start.of.class.file"_s, $$new($ObjectArray, 0))));
	}
	this->minorVersion = nextChar();
	this->majorVersion = nextChar();
	int32_t maxMajor = $nc($($ClassFile$Version::MAX()))->major;
	int32_t maxMinor = $nc($($ClassFile$Version::MAX()))->minor;
	bool previewClassFile = this->minorVersion == $ClassFile::PREVIEW_MINOR_VERSION;
	bool var$0 = this->majorVersion > maxMajor;
	if (!var$0) {
		int32_t var$1 = this->majorVersion * 1000 + this->minorVersion;
		int32_t var$3 = $nc($($ClassFile$Version::MIN()))->major * 1000;
		int32_t var$2 = var$3 + $nc($($ClassFile$Version::MIN()))->minor;
		var$0 = var$1 < var$2;
	}
	if (var$0) {
		if (this->majorVersion == (maxMajor + 1) && !previewClassFile) {
			$nc(this->log)->warning($($CompilerProperties$Warnings::BigMajorVersion(this->currentClassFile, this->majorVersion, maxMajor)));
		} else {
			$throw($(badClassFile("wrong.version"_s, $$new($ObjectArray, {
				$($of($Integer::toString(this->majorVersion))),
				$($of($Integer::toString(this->minorVersion))),
				$($of($Integer::toString(maxMajor))),
				$($of($Integer::toString(maxMinor)))
			}))));
		}
	}
	if (previewClassFile) {
		if (!$nc(this->preview)->isEnabled()) {
			$nc(this->log)->error($($nc(this->preview)->disabledError(this->currentClassFile, this->majorVersion)));
		} else {
			$nc(this->preview)->warnPreview($nc(c)->classfile, this->majorVersion);
		}
	}
	$set(this, poolReader, $new($PoolReader, this, this->names, this->syms));
	this->bp = $nc(this->poolReader)->readPool(this->buf, this->bp);
	if ($nc(this->signatureBuffer)->length < this->bp) {
		int32_t ns = $Integer::highestOneBit(this->bp) << 1;
		$set(this, signatureBuffer, $new($bytes, ns));
	}
	readClass(c);
}

void ClassReader::readClassFile($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, currentOwner, c);
	$set(this, currentClassFile, $nc(c)->classfile);
	$nc(this->warnedAttrs)->clear();
	this->filling = true;
	$set(this, target, nullptr);
	$set(this, repeatable, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				this->bp = 0;
				$nc(this->buf)->reset();
				$nc(this->buf)->appendStream($($nc(c->classfile)->openInputStream()));
				readClassBuffer(c);
				bool var$1 = !$nc(this->missingTypeVariables)->isEmpty();
				if (var$1 && !$nc(this->foundTypeVariables)->isEmpty()) {
					$var($List, missing, this->missingTypeVariables);
					$var($List, found, this->foundTypeVariables);
					$set(this, missingTypeVariables, $List::nil());
					$set(this, foundTypeVariables, $List::nil());
					$set(this, interimUses, $List::nil());
					$set(this, interimProvides, $List::nil());
					this->filling = false;
					$var($Type$ClassType, ct, $cast($Type$ClassType, $nc(this->currentOwner)->type));
					$set($nc(ct), supertype_field, $nc(this->types)->subst(ct->supertype_field, missing, found));
					$set(ct, interfaces_field, $nc(this->types)->subst(ct->interfaces_field, missing, found));
					$set(ct, typarams_field, $nc(this->types)->substBounds(ct->typarams_field, missing, found));
					{
						$var($List, types, ct->typarams_field);
						for (; $nc(types)->nonEmpty(); $assign(types, $nc(types)->tail)) {
							$set($nc($nc(($cast($Type, types->head)))->tsym), type, $cast($Type, types->head));
						}
					}
				} else {
					bool var$3 = $nc(this->missingTypeVariables)->isEmpty();
					if (var$3 != $nc(this->foundTypeVariables)->isEmpty()) {
						$var($Name, name, $nc($nc(($cast($Type, $nc(this->missingTypeVariables)->head)))->tsym)->name);
						$throw($(badClassFile("undecl.type.var"_s, $$new($ObjectArray, {$of(name)}))));
					}
				}
				if (((int64_t)(c->flags_field & (uint64_t)(int64_t)$Flags::ANNOTATION)) != 0) {
					c->setAnnotationTypeMetadata($$new($Annotate$AnnotationTypeMetadata, c, $$new($ClassReader$CompleterDeproxy, this, c, this->target, this->repeatable)));
				} else {
					c->setAnnotationTypeMetadata($($Annotate$AnnotationTypeMetadata::notAnAnnotationType()));
				}
				if (c == $nc(this->currentModule)->module_info) {
					bool var$4 = $nc(this->interimUses)->nonEmpty();
					if (var$4 || $nc(this->interimProvides)->nonEmpty()) {
						$Assert::check($nc(this->currentModule)->isCompleted());
						$set($nc(this->currentModule), usesProvidesCompleter, $new($ClassReader$UsesProvidesCompleter, this, this->currentModule, this->interimUses, this->interimProvides));
					} else {
						$set($nc(this->currentModule), uses, $List::nil());
						$set($nc(this->currentModule), provides, $List::nil());
					}
				}
			} catch ($IOException& ex) {
				$throw($(badClassFile("unable.to.access.file"_s, $$new($ObjectArray, {$($of(ex->toString()))}))));
			} catch ($ClosedFileSystemException& ex) {
				$throw($(badClassFile("unable.to.access.file"_s, $$new($ObjectArray, {$($of(ex->toString()))}))));
			} catch ($ArrayIndexOutOfBoundsException& ex) {
				$throw($(badClassFile("bad.class.file"_s, $$new($ObjectArray, {$of(c->flatname)}))));
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$set(this, interimUses, $List::nil());
			$set(this, interimProvides, $List::nil());
			$set(this, missingTypeVariables, $List::nil());
			$set(this, foundTypeVariables, $List::nil());
			this->filling = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t ClassReader::adjustFieldFlags(int64_t flags) {
	return flags;
}

int64_t ClassReader::adjustMethodFlags(int64_t flags) {
	if (((int64_t)(flags & (uint64_t)(int64_t)64)) != 0) {
		flags &= (uint64_t)~64;
		flags |= 0x0000000080000000;
	}
	if (((int64_t)(flags & (uint64_t)(int64_t)128)) != 0) {
		flags &= (uint64_t)~128;
		flags |= 0x0000000400000000;
	}
	return flags;
}

int64_t ClassReader::adjustClassFlags(int64_t flags) {
	if (((int64_t)(flags & (uint64_t)(int64_t)32768)) != 0) {
		flags &= (uint64_t)~32768;
		flags |= 0x0008000000000000;
	}
	return (int64_t)(flags & (uint64_t)(int64_t)~32);
}

bool ClassReader::lambda$lookupMethod$1($Symbol* s) {
	$init(ClassReader);
	$init($Kinds$Kind);
	return $nc(s)->kind == $Kinds$Kind::MTH;
}

$Type* ClassReader::lambda$readClass$0(int32_t idx) {
	return $nc($($nc(this->poolReader)->getClass(idx)))->erasure(this->types);
}

void clinit$ClassReader($Class* class$) {
	$assignStatic(ClassReader::classReaderKey, $new($Context$Key));
}

ClassReader::ClassReader() {
}

$Class* ClassReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassReader$$Lambda$getNameAndType::classInfo$.name)) {
			return ClassReader$$Lambda$getNameAndType::load$(name, initialize);
		}
		if (name->equals(ClassReader$$Lambda$getName$1::classInfo$.name)) {
			return ClassReader$$Lambda$getName$1::load$(name, initialize);
		}
		if (name->equals(ClassReader$$Lambda$lambda$readClass$0$2::classInfo$.name)) {
			return ClassReader$$Lambda$lambda$readClass$0$2::load$(name, initialize);
		}
		if (name->equals(ClassReader$$Lambda$lambda$lookupMethod$1$3::classInfo$.name)) {
			return ClassReader$$Lambda$lambda$lookupMethod$1$3::load$(name, initialize);
		}
		if (name->equals(ClassReader$$Lambda$getClass$4::classInfo$.name)) {
			return ClassReader$$Lambda$getClass$4::load$(name, initialize);
		}
	}
	$loadClass(ClassReader, name, initialize, &_ClassReader_ClassInfo_, clinit$ClassReader, allocate$ClassReader);
	return class$;
}

$Class* ClassReader::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com