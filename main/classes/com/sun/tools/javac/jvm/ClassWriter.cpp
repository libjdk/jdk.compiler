#include <com/sun/tools/javac/jvm/ClassWriter.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$RetentionPolicy.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Directive$ExportsFlag.h>
#include <com/sun/tools/javac/code/Directive$OpensDirective.h>
#include <com/sun/tools/javac/code/Directive$OpensFlag.h>
#include <com/sun/tools/javac/code/Directive$ProvidesDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Directive$UsesDirective.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleFlags.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator$InvalidSignatureException.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/jvm/CRTable.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/ClassWriter$1.h>
#include <com/sun/tools/javac/jvm/ClassWriter$AttributeWriter.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>
#include <com/sun/tools/javac/jvm/Code$LocalVar$Range.h>
#include <com/sun/tools/javac/jvm/Code$LocalVar.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFrame.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic$BsmKey.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolWriter$SharedSignatureGenerator.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/jvm/UninitializedType.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/ToIntFunction.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS
#undef CLASS_BUF_SIZE
#undef CLASS_OUTPUT
#undef DATA_BUF_SIZE
#undef ERROR
#undef EXTRA
#undef FULL_FRAME
#undef G_CUSTOM
#undef JAVA_MAGIC
#undef MAX_LOCAL_LENGTH_DIFF
#undef MDL
#undef MTH
#undef NON_RECURSIVE
#undef PARAMETERS
#undef PCK
#undef PREVIEW_MINOR_VERSION
#undef RUNTIME
#undef SAME_FRAME_EXTENDED
#undef SAME_FRAME_SIZE
#undef SAME_LOCALS_1_STACK_ITEM_EXTENDED
#undef TYP
#undef VAR
#undef VERBOSE
#undef XJCOV

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $ClassWriter$StackMapTableFrameArray = $Array<::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame>;
using $Code$LocalVarArray = $Array<::com::sun::tools::javac::jvm::Code$LocalVar>;
using $Code$StackMapFrameArray = $Array<::com::sun::tools::javac::jvm::Code$StackMapFrame>;
using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$RetentionPolicy = ::com::sun::tools::javac::code::Attribute$RetentionPolicy;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Directive$ExportsFlag = ::com::sun::tools::javac::code::Directive$ExportsFlag;
using $Directive$OpensDirective = ::com::sun::tools::javac::code::Directive$OpensDirective;
using $Directive$OpensFlag = ::com::sun::tools::javac::code::Directive$OpensFlag;
using $Directive$ProvidesDirective = ::com::sun::tools::javac::code::Directive$ProvidesDirective;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Directive$UsesDirective = ::com::sun::tools::javac::code::Directive$UsesDirective;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleFlags = ::com::sun::tools::javac::code::Symbol$ModuleFlags;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $Types$SignatureGenerator$InvalidSignatureException = ::com::sun::tools::javac::code::Types$SignatureGenerator$InvalidSignatureException;
using $Check = ::com::sun::tools::javac::comp::Check;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $CRTable = ::com::sun::tools::javac::jvm::CRTable;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $ClassWriter$1 = ::com::sun::tools::javac::jvm::ClassWriter$1;
using $ClassWriter$AttributeWriter = ::com::sun::tools::javac::jvm::ClassWriter$AttributeWriter;
using $ClassWriter$StackMapTableFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$LocalVar = ::com::sun::tools::javac::jvm::Code$LocalVar;
using $Code$LocalVar$Range = ::com::sun::tools::javac::jvm::Code$LocalVar$Range;
using $Code$StackMapFormat = ::com::sun::tools::javac::jvm::Code$StackMapFormat;
using $Code$StackMapFrame = ::com::sun::tools::javac::jvm::Code$StackMapFrame;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $PoolConstant$Dynamic$BsmKey = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic$BsmKey;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $PoolWriter$SharedSignatureGenerator = ::com::sun::tools::javac::jvm::PoolWriter$SharedSignatureGenerator;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $UninitializedType = ::com::sun::tools::javac::jvm::UninitializedType;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $ToIntFunction = ::java::util::function::ToIntFunction;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassWriter$$Lambda$lambda$writeModuleAttribute$0 : public $Function {
	$class(ClassWriter$$Lambda$lambda$writeModuleAttribute$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(ClassWriter::lambda$writeModuleAttribute$0($cast($Symbol$ClassSymbol, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassWriter$$Lambda$lambda$writeModuleAttribute$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ClassWriter$$Lambda$lambda$writeModuleAttribute$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassWriter$$Lambda$lambda$writeModuleAttribute$0::*)()>(&ClassWriter$$Lambda$lambda$writeModuleAttribute$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassWriter$$Lambda$lambda$writeModuleAttribute$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassWriter$$Lambda$lambda$writeModuleAttribute$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ClassWriter$$Lambda$lambda$writeModuleAttribute$0::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$$Lambda$lambda$writeModuleAttribute$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassWriter$$Lambda$lambda$writeModuleAttribute$0::class$ = nullptr;

class ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1 : public $BiConsumer {
	$class(ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(ClassWriter* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* srvc, Object$* impls) override {
		$nc(inst$)->lambda$writeModuleAttribute$2($cast($Symbol$ClassSymbol, srvc), $cast($Set, impls));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1>());
	}
	ClassWriter* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1, inst$)},
	{}
};
$MethodInfo ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::*)(ClassWriter*)>(&ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::class$ = nullptr;

class ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2 : public $Consumer {
	$class(ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ClassWriter* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* impl) override {
		$nc(inst$)->lambda$writeModuleAttribute$1($cast($Symbol$ClassSymbol, impl));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2>());
	}
	ClassWriter* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2, inst$)},
	{}
};
$MethodInfo ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::*)(ClassWriter*)>(&ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::class$ = nullptr;

$FieldInfo _ClassWriter_FieldInfo_[] = {
	{"classWriterKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/jvm/ClassWriter;>;", $PROTECTED | $STATIC | $FINAL, $staticField(ClassWriter, classWriterKey)},
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $PRIVATE | $FINAL, $field(ClassWriter, options)},
	{"verbose", "Z", nullptr, $PRIVATE, $field(ClassWriter, verbose)},
	{"emitSourceFile", "Z", nullptr, $PRIVATE, $field(ClassWriter, emitSourceFile)},
	{"genCrt", "Z", nullptr, $PRIVATE, $field(ClassWriter, genCrt)},
	{"debugstackmap", "Z", nullptr, $PRIVATE, $field(ClassWriter, debugstackmap)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PRIVATE, $field(ClassWriter, preview)},
	{"target", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE, $field(ClassWriter, target)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE, $field(ClassWriter, source)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE, $field(ClassWriter, types)},
	{"check", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE, $field(ClassWriter, check)},
	{"multiModuleMode", "Z", nullptr, $PUBLIC, $field(ClassWriter, multiModuleMode)},
	{"extraAttributeHooks", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/util/function/ToIntFunction<Lcom/sun/tools/javac/code/Symbol;>;>;", $PRIVATE, $field(ClassWriter, extraAttributeHooks)},
	{"DATA_BUF_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ClassWriter, DATA_BUF_SIZE)},
	{"CLASS_BUF_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ClassWriter, CLASS_BUF_SIZE)},
	{"databuf", "Lcom/sun/tools/javac/util/ByteBuffer;", nullptr, $PUBLIC, $field(ClassWriter, databuf)},
	{"poolbuf", "Lcom/sun/tools/javac/util/ByteBuffer;", nullptr, 0, $field(ClassWriter, poolbuf)},
	{"poolWriter", "Lcom/sun/tools/javac/jvm/PoolWriter;", nullptr, $FINAL, $field(ClassWriter, poolWriter)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(ClassWriter, log)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(ClassWriter, names)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(ClassWriter, fileManager)},
	{"SAME_FRAME_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ClassWriter, SAME_FRAME_SIZE)},
	{"SAME_LOCALS_1_STACK_ITEM_EXTENDED", "I", nullptr, $STATIC | $FINAL, $constField(ClassWriter, SAME_LOCALS_1_STACK_ITEM_EXTENDED)},
	{"SAME_FRAME_EXTENDED", "I", nullptr, $STATIC | $FINAL, $constField(ClassWriter, SAME_FRAME_EXTENDED)},
	{"FULL_FRAME", "I", nullptr, $STATIC | $FINAL, $constField(ClassWriter, FULL_FRAME)},
	{"MAX_LOCAL_LENGTH_DIFF", "I", nullptr, $STATIC | $FINAL, $constField(ClassWriter, MAX_LOCAL_LENGTH_DIFF)},
	{"dumpClassModifiers", "Z", nullptr, $PRIVATE, $field(ClassWriter, dumpClassModifiers)},
	{"dumpFieldModifiers", "Z", nullptr, $PRIVATE, $field(ClassWriter, dumpFieldModifiers)},
	{"dumpInnerClassModifiers", "Z", nullptr, $PRIVATE, $field(ClassWriter, dumpInnerClassModifiers)},
	{"dumpMethodModifiers", "Z", nullptr, $PRIVATE, $field(ClassWriter, dumpMethodModifiers)},
	{"flagName", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassWriter, flagName)},
	{"awriter", "Lcom/sun/tools/javac/jvm/ClassWriter$AttributeWriter;", nullptr, 0, $field(ClassWriter, awriter)},
	{}
};

$MethodInfo _ClassWriter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(ClassWriter::*)($Context*)>(&ClassWriter::init$))},
	{"addExtraAttributes", "(Ljava/util/function/ToIntFunction;)V", "(Ljava/util/function/ToIntFunction<Lcom/sun/tools/javac/code/Symbol;>;)V", $PUBLIC},
	{"adjustFlags", "(J)I", nullptr, 0},
	{"beginAttrs", "()I", nullptr, 0},
	{"endAttr", "(I)V", nullptr, $PUBLIC},
	{"endAttrs", "(II)V", nullptr, 0},
	{"flagNames", "(J)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int64_t)>(&ClassWriter::flagNames))},
	{"getLastModified", "(Ljavax/tools/FileObject;)J", nullptr, 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/jvm/ClassWriter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassWriter*(*)($Context*)>(&ClassWriter::instance))},
	{"lambda$writeModuleAttribute$0", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljava/util/Set;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Set*(*)($Symbol$ClassSymbol*)>(&ClassWriter::lambda$writeModuleAttribute$0))},
	{"lambda$writeModuleAttribute$1", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ClassWriter::*)($Symbol$ClassSymbol*)>(&ClassWriter::lambda$writeModuleAttribute$1))},
	{"lambda$writeModuleAttribute$2", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/util/Set;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ClassWriter::*)($Symbol$ClassSymbol*,$Set*)>(&ClassWriter::lambda$writeModuleAttribute$2))},
	{"listNested", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;)V", $PRIVATE, $method(static_cast<void(ClassWriter::*)($Symbol*,$ListBuffer*)>(&ClassWriter::listNested))},
	{"needsLocalVariableTypeEntry", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ClassWriter::*)($Type*)>(&ClassWriter::needsLocalVariableTypeEntry))},
	{"putChar", "(Lcom/sun/tools/javac/util/ByteBuffer;II)V", nullptr, 0},
	{"putInt", "(Lcom/sun/tools/javac/util/ByteBuffer;II)V", nullptr, 0},
	{"writeAttr", "(Lcom/sun/tools/javac/util/Name;)I", nullptr, $PUBLIC},
	{"writeBootstrapMethods", "()V", nullptr, 0},
	{"writeClass", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException,com.sun.tools.javac.jvm.ClassWriter$PoolOverflow,com.sun.tools.javac.jvm.ClassWriter$StringOverflow"},
	{"writeClassFile", "(Ljava/io/OutputStream;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,com.sun.tools.javac.jvm.ClassWriter$PoolOverflow,com.sun.tools.javac.jvm.ClassWriter$StringOverflow"},
	{"writeCode", "(Lcom/sun/tools/javac/jvm/Code;)V", nullptr, 0},
	{"writeCompoundAttribute", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, 0},
	{"writeEnclosingMethodAttribute", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, 0},
	{"writeEnclosingMethodAttribute", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, $PROTECTED},
	{"writeExtraAttributes", "(Lcom/sun/tools/javac/code/Symbol;)I", nullptr, $PROTECTED},
	{"writeExtraClassAttributes", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, $PROTECTED},
	{"writeField", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, 0},
	{"writeFields", "(Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0},
	{"writeFlagAttrs", "(J)I", nullptr, 0},
	{"writeInnerClasses", "()V", nullptr, 0},
	{"writeJavaAnnotations", "(Lcom/sun/tools/javac/util/List;)I", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)I", 0},
	{"writeMemberAttrs", "(Lcom/sun/tools/javac/code/Symbol;Z)I", nullptr, 0},
	{"writeMethod", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0},
	{"writeMethodParametersAttr", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)I", nullptr, 0},
	{"writeMethods", "(Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0},
	{"writeModuleAttribute", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, 0},
	{"writeNestHostIfNeeded", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, 0},
	{"writeNestMembersIfNeeded", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, 0},
	{"writeParamAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;)V", $PRIVATE, $method(static_cast<void(ClassWriter::*)($List*,$Attribute$RetentionPolicy*)>(&ClassWriter::writeParamAnnotations))},
	{"writeParamAnnotations", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassWriter::*)($Symbol$MethodSymbol*,$Attribute$RetentionPolicy*)>(&ClassWriter::writeParamAnnotations))},
	{"writeParameterAttrs", "(Lcom/sun/tools/javac/util/List;)I", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;)I", 0},
	{"writePermittedSubclassesIfNeeded", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, 0},
	{"writePosition", "(Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", nullptr, 0},
	{"writeRecordAttribute", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)I", nullptr, 0},
	{"writeStackMap", "(Lcom/sun/tools/javac/jvm/Code;)V", nullptr, 0},
	{"writeStackMapType", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"writeTypeAnnotation", "(Lcom/sun/tools/javac/code/Attribute$TypeCompound;)V", nullptr, 0},
	{"writeTypeAnnotations", "(Lcom/sun/tools/javac/util/List;Z)I", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;Z)I", 0},
	{}
};

$InnerClassInfo _ClassWriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassWriter$AttributeWriter", "com.sun.tools.javac.jvm.ClassWriter", "AttributeWriter", 0},
	{"com.sun.tools.javac.jvm.ClassWriter$StringOverflow", "com.sun.tools.javac.jvm.ClassWriter", "StringOverflow", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.jvm.ClassWriter$PoolOverflow", "com.sun.tools.javac.jvm.ClassWriter", "PoolOverflow", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ClassWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter",
	"com.sun.tools.javac.jvm.ClassFile",
	nullptr,
	_ClassWriter_FieldInfo_,
	_ClassWriter_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter$1,com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame,com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$FullFrame,com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$AppendFrame,com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$ChopFrame,com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame,com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameFrame,com.sun.tools.javac.jvm.ClassWriter$AttributeWriter,com.sun.tools.javac.jvm.ClassWriter$StringOverflow,com.sun.tools.javac.jvm.ClassWriter$PoolOverflow"
};

$Object* allocate$ClassWriter($Class* clazz) {
	return $of($alloc(ClassWriter));
}

$Context$Key* ClassWriter::classWriterKey = nullptr;
$StringArray* ClassWriter::flagName = nullptr;

ClassWriter* ClassWriter::instance($Context* context) {
	$init(ClassWriter);
	$var(ClassWriter, instance, $cast(ClassWriter, $nc(context)->get(ClassWriter::classWriterKey)));
	if (instance == nullptr) {
		$assign(instance, $new(ClassWriter, context));
	}
	return instance;
}

void ClassWriter::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$ClassFile::init$();
	$set(this, extraAttributeHooks, $List::nil());
	$set(this, databuf, $new($ByteBuffer, ClassWriter::DATA_BUF_SIZE));
	$set(this, poolbuf, $new($ByteBuffer, ClassWriter::CLASS_BUF_SIZE));
	$set(this, awriter, $new($ClassWriter$AttributeWriter, this));
	$nc(context)->put(ClassWriter::classWriterKey, $of(this));
	$set(this, log, $Log::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, options, $Options::instance(context));
	$set(this, preview, $Preview::instance(context));
	$set(this, target, $Target::instance(context));
	$set(this, source, $Source::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, check, $Check::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, poolWriter, $nc($($Gen::instance(context)))->poolWriter);
	$init($Option);
	this->verbose = $nc(this->options)->isSet($Option::VERBOSE);
	this->genCrt = $nc(this->options)->isSet($Option::XJCOV);
	this->debugstackmap = $nc(this->options)->isSet("debug.stackmap"_s);
	bool var$0 = $nc(this->options)->isUnset($Option::G_CUSTOM);
	this->emitSourceFile = var$0 || $nc(this->options)->isSet($Option::G_CUSTOM, "source"_s);
	$var($String, modifierFlags, $nc(this->options)->get("debug.dumpmodifiers"_s));
	if (modifierFlags != nullptr) {
		this->dumpClassModifiers = modifierFlags->indexOf((int32_t)u'c') != -1;
		this->dumpFieldModifiers = modifierFlags->indexOf((int32_t)u'f') != -1;
		this->dumpInnerClassModifiers = modifierFlags->indexOf((int32_t)u'i') != -1;
		this->dumpMethodModifiers = modifierFlags->indexOf((int32_t)u'm') != -1;
	}
}

void ClassWriter::addExtraAttributes($ToIntFunction* addExtraAttributes) {
	$set(this, extraAttributeHooks, $nc(this->extraAttributeHooks)->prepend(addExtraAttributes));
}

$String* ClassWriter::flagNames(int64_t flags) {
	$init(ClassWriter);
	$var($StringBuilder, sbuf, $new($StringBuilder));
	int32_t i = 0;
	int64_t f = (int64_t)(flags & (uint64_t)(int64_t)4095);
	while (f != 0) {
		if (((int64_t)(f & (uint64_t)(int64_t)1)) != 0) {
			sbuf->append(" "_s);
			sbuf->append($nc(ClassWriter::flagName)->get(i));
		}
		f = f >> 1;
		++i;
	}
	return sbuf->toString();
}

void ClassWriter::putChar($ByteBuffer* buf, int32_t op, int32_t x) {
	$nc($nc(buf)->elems)->set(op, (int8_t)((int32_t)((x >> 8) & (uint32_t)255)));
	$nc(buf->elems)->set(op + 1, (int8_t)((int32_t)((x) & (uint32_t)255)));
}

void ClassWriter::putInt($ByteBuffer* buf, int32_t adr, int32_t x) {
	$nc($nc(buf)->elems)->set(adr, (int8_t)((int32_t)((x >> 24) & (uint32_t)255)));
	$nc(buf->elems)->set(adr + 1, (int8_t)((int32_t)((x >> 16) & (uint32_t)255)));
	$nc(buf->elems)->set(adr + 2, (int8_t)((int32_t)((x >> 8) & (uint32_t)255)));
	$nc(buf->elems)->set(adr + 3, (int8_t)((int32_t)((x) & (uint32_t)255)));
}

int32_t ClassWriter::writeAttr($Name* attrName) {
	int32_t index = $nc(this->poolWriter)->putName(attrName);
	$nc(this->databuf)->appendChar(index);
	$nc(this->databuf)->appendInt(0);
	return $nc(this->databuf)->length;
}

void ClassWriter::endAttr(int32_t index) {
	putInt(this->databuf, index - 4, $nc(this->databuf)->length - index);
}

int32_t ClassWriter::beginAttrs() {
	$nc(this->databuf)->appendChar(0);
	return $nc(this->databuf)->length;
}

void ClassWriter::endAttrs(int32_t index, int32_t count) {
	putChar(this->databuf, index - 2, count);
}

int32_t ClassWriter::writeEnclosingMethodAttribute($Symbol$ClassSymbol* c) {
	return writeEnclosingMethodAttribute($nc(this->names)->EnclosingMethod, c);
}

int32_t ClassWriter::writeEnclosingMethodAttribute($Name* attributeName, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc($nc(c)->owner)->kind != $Kinds$Kind::MTH && c->name != $nc(this->names)->empty) {
		return 0;
	}
	int32_t alenIdx = writeAttr(attributeName);
	$var($Symbol$ClassSymbol, enclClass, $nc($nc(c)->owner)->enclClass());
	$var($Symbol$MethodSymbol, enclMethod, ($nc(c->owner)->type == nullptr || $nc(c->owner)->kind != $Kinds$Kind::MTH) ? ($Symbol$MethodSymbol*)nullptr : $nc(($cast($Symbol$MethodSymbol, c->owner)))->originalEnclosingMethod());
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass(enclClass));
	$nc(this->databuf)->appendChar(enclMethod == nullptr ? 0 : $nc(this->poolWriter)->putNameAndType(enclMethod));
	endAttr(alenIdx);
	return 1;
}

int32_t ClassWriter::writeFlagAttrs(int64_t flags) {
	int32_t acount = 0;
	if (((int64_t)(flags & (uint64_t)(int64_t)0x00020000)) != 0) {
		int32_t alenIdx = writeAttr($nc(this->names)->Deprecated);
		endAttr(alenIdx);
		++acount;
	}
	return acount;
}

int32_t ClassWriter::writeMemberAttrs($Symbol* sym, bool isRecordComponent) {
	$useLocalCurrentObjectStackCache();
	int32_t acount = 0;
	if (!isRecordComponent) {
		acount = writeFlagAttrs($nc(sym)->flags());
	}
	int64_t flags = $nc(sym)->flags();
	bool var$0 = ((int64_t)(flags & (uint64_t)(4096 | (int64_t)0x0000000080000000))) != 4096 && ((int64_t)(flags & (uint64_t)(int64_t)0x20000000)) == 0;
	if (var$0) {
		bool var$1 = !$nc(this->types)->isSameType(sym->type, $(sym->erasure(this->types)));
		var$0 = (var$1 || $nc($nc(this->poolWriter)->signatureGen)->hasTypeVar($($nc(sym->type)->getThrownTypes())));
	}
	if (var$0) {
		int32_t alenIdx = writeAttr($nc(this->names)->Signature);
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putSignature(sym));
		endAttr(alenIdx);
		++acount;
	}
	acount += writeJavaAnnotations($(sym->getRawAttributes()));
	acount += writeTypeAnnotations($(sym->getRawTypeAttributes()), false);
	return acount;
}

int32_t ClassWriter::writeMethodParametersAttr($Symbol$MethodSymbol* m) {
	$useLocalCurrentObjectStackCache();
	$var($Type$MethodType, ty, $nc($($nc(m)->externalType(this->types)))->asMethodType());
	int32_t allparams = $nc($nc(ty)->argtypes$)->size();
	if (m->params$ != nullptr && allparams != 0) {
		int32_t attrIndex = writeAttr($nc(this->names)->MethodParameters);
		$nc(this->databuf)->appendByte(allparams);
		{
			$var($Iterator, i$, $nc(m->extraParams)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$VarSymbol, s, $cast($Symbol$VarSymbol, i$->next()));
				{
					int32_t var$0 = ((int32_t)((int32_t)$nc(s)->flags() & (uint32_t)((16 | 4096) | 32768)));
					int32_t flags = var$0 | ((int32_t)((int32_t)m->flags() & (uint32_t)4096));
					$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName(s->name));
					$nc(this->databuf)->appendChar(flags);
				}
			}
		}
		{
			$var($Iterator, i$, $nc(m->params$)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$VarSymbol, s, $cast($Symbol$VarSymbol, i$->next()));
				{
					int32_t var$1 = ((int32_t)((int32_t)$nc(s)->flags() & (uint32_t)((16 | 4096) | 32768)));
					int32_t flags = var$1 | ((int32_t)((int32_t)m->flags() & (uint32_t)4096));
					$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName(s->name));
					$nc(this->databuf)->appendChar(flags);
				}
			}
		}
		{
			$var($Iterator, i$, $nc(m->capturedLocals)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$VarSymbol, s, $cast($Symbol$VarSymbol, i$->next()));
				{
					int32_t var$2 = ((int32_t)((int32_t)$nc(s)->flags() & (uint32_t)((16 | 4096) | 32768)));
					int32_t flags = var$2 | ((int32_t)((int32_t)m->flags() & (uint32_t)4096));
					$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName(s->name));
					$nc(this->databuf)->appendChar(flags);
				}
			}
		}
		endAttr(attrIndex);
		return 1;
	} else {
		return 0;
	}
}

void ClassWriter::writeParamAnnotations($List* params, $Attribute$RetentionPolicy* retention) {
	$useLocalCurrentObjectStackCache();
	$nc(this->databuf)->appendByte($nc(params)->length());
	{
		$var($Iterator, i$, $nc(params)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$VarSymbol, s, $cast($Symbol$VarSymbol, i$->next()));
			{
				$var($ListBuffer, buf, $new($ListBuffer));
				{
					$var($Iterator, i$, $nc($($nc(s)->getRawAttributes()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
						if ($nc(this->types)->getRetention(a) == retention) {
							buf->append(a);
						}
					}
				}
				$nc(this->databuf)->appendChar(buf->length());
				{
					$var($Iterator, i$, buf->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
						writeCompoundAttribute(a);
					}
				}
			}
		}
	}
}

void ClassWriter::writeParamAnnotations($Symbol$MethodSymbol* m, $Attribute$RetentionPolicy* retention) {
	$nc(this->databuf)->appendByte($nc($nc(m)->params$)->length());
	writeParamAnnotations($nc(m)->params$, retention);
}

int32_t ClassWriter::writeParameterAttrs($List* vars) {
	$useLocalCurrentObjectStackCache();
	bool hasVisible = false;
	bool hasInvisible = false;
	if (vars != nullptr) {
		{
			$var($Iterator, i$, vars->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$VarSymbol, s, $cast($Symbol$VarSymbol, i$->next()));
				{
					{
						$var($Iterator, i$, $nc($($nc(s)->getRawAttributes()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
							{
								$init($ClassWriter$1);
								switch ($nc($ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)->get($nc(($($nc(this->types)->getRetention(a))))->ordinal())) {
								case 1:
									{
										break;
									}
								case 2:
									{
										hasInvisible = true;
										break;
									}
								case 3:
									{
										hasVisible = true;
										break;
									}
								default:
									{}
								}
							}
						}
					}
				}
			}
		}
	}
	int32_t attrCount = 0;
	if (hasVisible) {
		int32_t attrIndex = writeAttr($nc(this->names)->RuntimeVisibleParameterAnnotations);
		$init($Attribute$RetentionPolicy);
		writeParamAnnotations(vars, $Attribute$RetentionPolicy::RUNTIME);
		endAttr(attrIndex);
		++attrCount;
	}
	if (hasInvisible) {
		int32_t attrIndex = writeAttr($nc(this->names)->RuntimeInvisibleParameterAnnotations);
		$init($Attribute$RetentionPolicy);
		writeParamAnnotations(vars, $Attribute$RetentionPolicy::CLASS);
		endAttr(attrIndex);
		++attrCount;
	}
	return attrCount;
}

int32_t ClassWriter::writeJavaAnnotations($List* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(attrs)->isEmpty()) {
		return 0;
	}
	$var($ListBuffer, visibles, $new($ListBuffer));
	$var($ListBuffer, invisibles, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(attrs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
			{
				$init($ClassWriter$1);
				switch ($nc($ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)->get($nc(($($nc(this->types)->getRetention(a))))->ordinal())) {
				case 1:
					{
						break;
					}
				case 2:
					{
						invisibles->append(a);
						break;
					}
				case 3:
					{
						visibles->append(a);
						break;
					}
				default:
					{}
				}
			}
		}
	}
	int32_t attrCount = 0;
	if (visibles->length() != 0) {
		int32_t attrIndex = writeAttr($nc(this->names)->RuntimeVisibleAnnotations);
		$nc(this->databuf)->appendChar(visibles->length());
		{
			$var($Iterator, i$, visibles->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
				writeCompoundAttribute(a);
			}
		}
		endAttr(attrIndex);
		++attrCount;
	}
	if (invisibles->length() != 0) {
		int32_t attrIndex = writeAttr($nc(this->names)->RuntimeInvisibleAnnotations);
		$nc(this->databuf)->appendChar(invisibles->length());
		{
			$var($Iterator, i$, invisibles->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
				writeCompoundAttribute(a);
			}
		}
		endAttr(attrIndex);
		++attrCount;
	}
	return attrCount;
}

int32_t ClassWriter::writeTypeAnnotations($List* typeAnnos, bool inCode) {
	$useLocalCurrentObjectStackCache();
	if ($nc(typeAnnos)->isEmpty()) {
		return 0;
	}
	$var($ListBuffer, visibles, $new($ListBuffer));
	$var($ListBuffer, invisibles, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(typeAnnos)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, tc, $cast($Attribute$TypeCompound, i$->next()));
			{
				if ($nc(tc)->hasUnknownPosition()) {
					bool fixed = tc->tryFixPosition();
					if (!fixed) {
						$init($Log$WriterKind);
						$var($PrintWriter, pw, $nc(this->log)->getWriter($Log$WriterKind::ERROR));
						$nc(pw)->println($$str({"ClassWriter: Position UNKNOWN in type annotation: "_s, tc}));
						continue;
					}
				}
				if ($nc($nc(tc)->position)->type->isLocal() != inCode) {
					continue;
				}
				if (!$nc($nc(tc)->position)->emitToClassfile()) {
					continue;
				}
				$init($ClassWriter$1);
				switch ($nc($ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Attribute$RetentionPolicy)->get($nc(($($nc(this->types)->getRetention(static_cast<$Attribute$Compound*>(tc)))))->ordinal())) {
				case 1:
					{
						break;
					}
				case 2:
					{
						invisibles->append(tc);
						break;
					}
				case 3:
					{
						visibles->append(tc);
						break;
					}
				default:
					{}
				}
			}
		}
	}
	int32_t attrCount = 0;
	if (visibles->length() != 0) {
		int32_t attrIndex = writeAttr($nc(this->names)->RuntimeVisibleTypeAnnotations);
		$nc(this->databuf)->appendChar(visibles->length());
		{
			$var($Iterator, i$, visibles->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$TypeCompound, p, $cast($Attribute$TypeCompound, i$->next()));
				writeTypeAnnotation(p);
			}
		}
		endAttr(attrIndex);
		++attrCount;
	}
	if (invisibles->length() != 0) {
		int32_t attrIndex = writeAttr($nc(this->names)->RuntimeInvisibleTypeAnnotations);
		$nc(this->databuf)->appendChar(invisibles->length());
		{
			$var($Iterator, i$, invisibles->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$TypeCompound, p, $cast($Attribute$TypeCompound, i$->next()));
				writeTypeAnnotation(p);
			}
		}
		endAttr(attrIndex);
		++attrCount;
	}
	return attrCount;
}

void ClassWriter::writeCompoundAttribute($Attribute$Compound* c) {
	$useLocalCurrentObjectStackCache();
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putDescriptor($nc(c)->type));
	$nc(this->databuf)->appendChar($nc($nc(c)->values)->length());
	{
		$var($Iterator, i$, $nc($nc(c)->values)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, p, $cast($Pair, i$->next()));
			{
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($nc(($cast($Symbol$MethodSymbol, $nc(p)->fst)))->name));
				$nc(($cast($Attribute, $nc(p)->snd)))->accept(this->awriter);
			}
		}
	}
}

void ClassWriter::writeTypeAnnotation($Attribute$TypeCompound* c) {
	writePosition($nc(c)->position);
	writeCompoundAttribute(c);
}

void ClassWriter::writePosition($TypeAnnotationPosition* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->databuf)->appendByte($nc(p)->type->targetTypeValue());
	$init($ClassWriter$1);
	switch ($nc($ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->get(($nc(p)->type)->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			$nc(this->databuf)->appendChar(p->offset);
			break;
		}
	case 5:
		{}
	case 6:
		{
			$nc(this->databuf)->appendChar($nc(p->lvarOffset)->length);
			for (int32_t i = 0; i < $nc(p->lvarOffset)->length; ++i) {
				$nc(this->databuf)->appendChar($nc(p->lvarOffset)->get(i));
				$nc(this->databuf)->appendChar($nc(p->lvarLength)->get(i));
				$nc(this->databuf)->appendChar($nc(p->lvarIndex)->get(i));
			}
			break;
		}
	case 7:
		{
			$nc(this->databuf)->appendChar(p->getExceptionIndex());
			break;
		}
	case 8:
		{
			break;
		}
	case 9:
		{}
	case 10:
		{
			$nc(this->databuf)->appendByte(p->parameter_index);
			break;
		}
	case 11:
		{}
	case 12:
		{
			$nc(this->databuf)->appendByte(p->parameter_index);
			$nc(this->databuf)->appendByte(p->bound_index);
			break;
		}
	case 13:
		{
			$nc(this->databuf)->appendChar(p->type_index);
			break;
		}
	case 14:
		{
			$nc(this->databuf)->appendChar(p->type_index);
			break;
		}
	case 15:
		{
			$nc(this->databuf)->appendByte(p->parameter_index);
			break;
		}
	case 16:
		{}
	case 17:
		{}
	case 18:
		{}
	case 19:
		{}
	case 20:
		{
			$nc(this->databuf)->appendChar(p->offset);
			$nc(this->databuf)->appendByte(p->type_index);
			break;
		}
	case 21:
		{}
	case 22:
		{
			break;
		}
	case 23:
		{
			$throwNew($AssertionError, $of("jvm.ClassWriter: UNKNOWN target type should never occur!"_s));
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"jvm.ClassWriter: Unknown target type for position: "_s, p})));
		}
	}
	{
		$nc(this->databuf)->appendByte($nc(p->location)->size());
		$var($1List, loc, $TypeAnnotationPosition::getBinaryFromTypePath(p->location));
		{
			$var($Iterator, i$, $nc(loc)->iterator());
			for (; $nc(i$)->hasNext();) {
				int32_t i = $nc(($cast($Integer, $(i$->next()))))->intValue();
				$nc(this->databuf)->appendByte((int8_t)i);
			}
		}
	}
}

int32_t ClassWriter::writeModuleAttribute($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ModuleSymbol, m, $cast($Symbol$ModuleSymbol, $nc(c)->owner));
	int32_t alenIdx = writeAttr($nc(this->names)->Module);
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putModule(m));
	$nc(this->databuf)->appendChar($Symbol$ModuleFlags::value($nc(m)->flags$));
	$nc(this->databuf)->appendChar($nc(m)->version != nullptr ? $nc(this->poolWriter)->putName($nc(m)->version) : 0);
	$var($ListBuffer, requires, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($nc(m)->requires)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$RequiresDirective, r, $cast($Directive$RequiresDirective, i$->next()));
			{
				$init($Directive$RequiresFlag);
				if (!$nc($nc(r)->flags)->contains($Directive$RequiresFlag::EXTRA)) {
					requires->add(r);
				}
			}
		}
	}
	$nc(this->databuf)->appendChar(requires->size());
	{
		$var($Iterator, i$, requires->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$RequiresDirective, r, $cast($Directive$RequiresDirective, i$->next()));
			{
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putModule($nc(r)->module));
				$nc(this->databuf)->appendChar($Directive$RequiresFlag::value($nc(r)->flags));
				$nc(this->databuf)->appendChar($nc($nc(r)->module)->version != nullptr ? $nc(this->poolWriter)->putName($nc($nc(r)->module)->version) : 0);
			}
		}
	}
	$var($List, exports, m->exports);
	$nc(this->databuf)->appendChar($nc(exports)->size());
	{
		$var($Iterator, i$, $nc(exports)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$ExportsDirective, e, $cast($Directive$ExportsDirective, i$->next()));
			{
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putPackage($nc(e)->packge));
				$nc(this->databuf)->appendChar($Directive$ExportsFlag::value($nc(e)->flags));
				if ($nc(e)->modules == nullptr) {
					$nc(this->databuf)->appendChar(0);
				} else {
					$nc(this->databuf)->appendChar($nc(e->modules)->size());
					{
						$var($Iterator, i$, $nc(e->modules)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, i$->next()));
							{
								$nc(this->databuf)->appendChar($nc(this->poolWriter)->putModule(msym));
							}
						}
					}
				}
			}
		}
	}
	$var($List, opens, m->opens);
	$nc(this->databuf)->appendChar($nc(opens)->size());
	{
		$var($Iterator, i$, $nc(opens)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$OpensDirective, o, $cast($Directive$OpensDirective, i$->next()));
			{
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putPackage($nc(o)->packge));
				$nc(this->databuf)->appendChar($Directive$OpensFlag::value($nc(o)->flags));
				if ($nc(o)->modules == nullptr) {
					$nc(this->databuf)->appendChar(0);
				} else {
					$nc(this->databuf)->appendChar($nc(o->modules)->size());
					{
						$var($Iterator, i$, $nc(o->modules)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, i$->next()));
							{
								$nc(this->databuf)->appendChar($nc(this->poolWriter)->putModule(msym));
							}
						}
					}
				}
			}
		}
	}
	$var($List, uses, m->uses);
	$nc(this->databuf)->appendChar($nc(uses)->size());
	{
		$var($Iterator, i$, $nc(uses)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$UsesDirective, s, $cast($Directive$UsesDirective, i$->next()));
			{
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass($nc(s)->service));
			}
		}
	}
	$var($Map, mergedProvides, $new($LinkedHashMap));
	{
		$var($Iterator, i$, $nc(m->provides)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$ProvidesDirective, p, $cast($Directive$ProvidesDirective, i$->next()));
			{
				$nc(($cast($Set, $(mergedProvides->computeIfAbsent($nc(p)->service, static_cast<$Function*>($$new(ClassWriter$$Lambda$lambda$writeModuleAttribute$0)))))))->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(p)->impls)));
			}
		}
	}
	$nc(this->databuf)->appendChar(mergedProvides->size());
	mergedProvides->forEach(static_cast<$BiConsumer*>($$new(ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1, this)));
	endAttr(alenIdx);
	return 1;
}

void ClassWriter::writeInnerClasses() {
	$useLocalCurrentObjectStackCache();
	int32_t alenIdx = writeAttr($nc(this->names)->InnerClasses);
	$nc(this->databuf)->appendChar($nc($nc(this->poolWriter)->innerClasses)->size());
	{
		$var($Iterator, i$, $nc($nc(this->poolWriter)->innerClasses)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ClassSymbol, inner, $cast($Symbol$ClassSymbol, i$->next()));
			{
				$nc(inner)->markAbstractIfNeeded(this->types);
				char16_t flags = (char16_t)adjustFlags(inner->flags_field);
				if (((int32_t)(flags & (uint32_t)512)) != 0) {
					flags |= 1024;
				}
				flags &= (char16_t)~2048;
				if (this->dumpInnerClassModifiers) {
					$init($Log$WriterKind);
					$var($PrintWriter, pw, $nc(this->log)->getWriter($Log$WriterKind::ERROR));
					$nc(pw)->println($$str({"INNERCLASS  "_s, inner->name}));
					pw->println($$str({"---"_s, $(flagNames(flags))}));
				}
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass(inner));
				$init($Kinds$Kind);
				$nc(this->databuf)->appendChar($nc(inner->owner)->kind == $Kinds$Kind::TYP && !$nc(inner->name)->isEmpty() ? $nc(this->poolWriter)->putClass($cast($Symbol$ClassSymbol, inner->owner)) : 0);
				$nc(this->databuf)->appendChar(!$nc(inner->name)->isEmpty() ? $nc(this->poolWriter)->putName(inner->name) : 0);
				$nc(this->databuf)->appendChar(flags);
			}
		}
	}
	endAttr(alenIdx);
}

int32_t ClassWriter::writeRecordAttribute($Symbol$ClassSymbol* csym) {
	$useLocalCurrentObjectStackCache();
	int32_t alenIdx = writeAttr($nc(this->names)->Record);
	$var($Scope, s, $nc(csym)->members());
	$nc(this->databuf)->appendChar($nc($(csym->getRecordComponents()))->size());
	{
		$var($Iterator, i$, $nc($(csym->getRecordComponents()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$VarSymbol, v, $cast($Symbol$VarSymbol, i$->next()));
			{
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($nc(v)->name));
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putDescriptor(static_cast<$Symbol*>(v)));
				int32_t acountIdx = beginAttrs();
				int32_t acount = 0;
				acount += writeMemberAttrs(v, true);
				endAttrs(acountIdx, acount);
			}
		}
	}
	endAttr(alenIdx);
	return 1;
}

int32_t ClassWriter::writeNestMembersIfNeeded($Symbol$ClassSymbol* csym) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, nested, $new($ListBuffer));
	listNested(csym, nested);
	$var($Set, nestedUnique, $new($LinkedHashSet, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(nested)))));
	$init($Kinds$Kind);
	if ($nc($nc(csym)->owner)->kind == $Kinds$Kind::PCK && !nestedUnique->isEmpty()) {
		int32_t alenIdx = writeAttr($nc(this->names)->NestMembers);
		$nc(this->databuf)->appendChar(nestedUnique->size());
		{
			$var($Iterator, i$, nestedUnique->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$ClassSymbol, s, $cast($Symbol$ClassSymbol, i$->next()));
				{
					$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass(s));
				}
			}
		}
		endAttr(alenIdx);
		return 1;
	}
	return 0;
}

int32_t ClassWriter::writeNestHostIfNeeded($Symbol$ClassSymbol* csym) {
	$init($Kinds$Kind);
	if ($nc($nc(csym)->owner)->kind != $Kinds$Kind::PCK) {
		int32_t alenIdx = writeAttr($nc(this->names)->NestHost);
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass($(csym->outermostClass())));
		endAttr(alenIdx);
		return 1;
	}
	return 0;
}

void ClassWriter::listNested($Symbol* sym, $ListBuffer* seen) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->kind != $Kinds$Kind::TYP) {
		return;
	}
	$var($Symbol$ClassSymbol, csym, $cast($Symbol$ClassSymbol, sym));
	if ($nc($nc(csym)->owner)->kind != $Kinds$Kind::PCK) {
		$nc(seen)->add(csym);
	}
	if ($nc(csym)->members() != nullptr) {
		{
			$var($Iterator, i$, $nc($($nc($($nc(sym)->members()))->getSymbols()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, s, $cast($Symbol, i$->next()));
				{
					listNested(s, seen);
				}
			}
		}
	}
	if ($nc(csym)->trans_local != nullptr) {
		{
			$var($Iterator, i$, $nc(csym->trans_local)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, s, $cast($Symbol, i$->next()));
				{
					listNested(s, seen);
				}
			}
		}
	}
}

int32_t ClassWriter::writePermittedSubclassesIfNeeded($Symbol$ClassSymbol* csym) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(csym)->permitted)->nonEmpty()) {
		int32_t alenIdx = writeAttr($nc(this->names)->PermittedSubclasses);
		$nc(this->databuf)->appendChar($nc(csym->permitted)->size());
		{
			$var($Iterator, i$, $nc(csym->permitted)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, c, $cast($Symbol, i$->next()));
				{
					$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass($cast($Symbol$ClassSymbol, c)));
				}
			}
		}
		endAttr(alenIdx);
		return 1;
	}
	return 0;
}

void ClassWriter::writeBootstrapMethods() {
	$useLocalCurrentObjectStackCache();
	int32_t alenIdx = writeAttr($nc(this->names)->BootstrapMethods);
	$nc(this->databuf)->appendChar($nc($nc(this->poolWriter)->bootstrapMethods)->size());
	{
		$var($Iterator, i$, $nc($($nc($nc(this->poolWriter)->bootstrapMethods)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PoolConstant$Dynamic$BsmKey, bsmKey, $cast($PoolConstant$Dynamic$BsmKey, i$->next()));
			{
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putConstant($nc(bsmKey)->bsm));
				$var($PoolConstant$LoadableConstantArray, uniqueArgs, $nc(bsmKey)->staticArgs);
				$nc(this->databuf)->appendChar($nc(uniqueArgs)->length);
				{
					$var($PoolConstant$LoadableConstantArray, arr$, uniqueArgs);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($PoolConstant$LoadableConstant, arg, arr$->get(i$));
						{
							$nc(this->databuf)->appendChar($nc(this->poolWriter)->putConstant(arg));
						}
					}
				}
			}
		}
	}
	endAttr(alenIdx);
}

void ClassWriter::writeField($Symbol$VarSymbol* v) {
	$useLocalCurrentObjectStackCache();
	int32_t flags = adjustFlags($nc(v)->flags());
	$nc(this->databuf)->appendChar(flags);
	if (this->dumpFieldModifiers) {
		$init($Log$WriterKind);
		$var($PrintWriter, pw, $nc(this->log)->getWriter($Log$WriterKind::ERROR));
		$nc(pw)->println($$str({"FIELD  "_s, $nc(v)->name}));
		pw->println($$str({"---"_s, $(flagNames($nc(v)->flags()))}));
	}
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($nc(v)->name));
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putDescriptor(static_cast<$Symbol*>(v)));
	int32_t acountIdx = beginAttrs();
	int32_t acount = 0;
	if ($nc(v)->getConstValue() != nullptr) {
		int32_t alenIdx = writeAttr($nc(this->names)->ConstantValue);
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putConstant($(v->getConstValue())));
		endAttr(alenIdx);
		++acount;
	}
	acount += writeMemberAttrs(v, false);
	acount += writeExtraAttributes(v);
	endAttrs(acountIdx, acount);
}

void ClassWriter::writeMethod($Symbol$MethodSymbol* m) {
	$useLocalCurrentObjectStackCache();
	int32_t flags = adjustFlags($nc(m)->flags());
	$nc(this->databuf)->appendChar(flags);
	if (this->dumpMethodModifiers) {
		$init($Log$WriterKind);
		$var($PrintWriter, pw, $nc(this->log)->getWriter($Log$WriterKind::ERROR));
		$nc(pw)->println($$str({"METHOD  "_s, $nc(m)->name}));
		pw->println($$str({"---"_s, $(flagNames($nc(m)->flags()))}));
	}
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($nc(m)->name));
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putDescriptor(static_cast<$Symbol*>(m)));
	int32_t acountIdx = beginAttrs();
	int32_t acount = 0;
	if ($nc(m)->code != nullptr) {
		int32_t alenIdx = writeAttr($nc(this->names)->Code);
		writeCode(m->code);
		$set(m, code, nullptr);
		endAttr(alenIdx);
		++acount;
	}
	$var($List, thrown, $nc($($nc(m)->erasure(this->types)))->getThrownTypes());
	if ($nc(thrown)->nonEmpty()) {
		int32_t alenIdx = writeAttr($nc(this->names)->Exceptions);
		$nc(this->databuf)->appendChar(thrown->length());
		{
			$var($List, l, thrown);
			for (; l->nonEmpty(); $assign(l, l->tail)) {
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass($cast($Type, $nc(l)->head)));
			}
		}
		endAttr(alenIdx);
		++acount;
	}
	if (m->defaultValue != nullptr) {
		int32_t alenIdx = writeAttr($nc(this->names)->AnnotationDefault);
		$nc(m->defaultValue)->accept(this->awriter);
		endAttr(alenIdx);
		++acount;
	}
	bool var$0 = $nc(this->target)->hasMethodParameters();
	if (var$0) {
		$init($Option);
		bool var$1 = $nc(this->options)->isSet($Option::PARAMETERS);
		var$0 = (var$1 || m->isConstructor() && ((int64_t)(m->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0);
	}
	if (var$0) {
		if (!m->isLambdaMethod()) {
			acount += writeMethodParametersAttr(m);
		}
	}
	acount += writeMemberAttrs(m, false);
	if (!m->isLambdaMethod()) {
		acount += writeParameterAttrs(m->params$);
	}
	acount += writeExtraAttributes(m);
	endAttrs(acountIdx, acount);
}

void ClassWriter::writeCode($Code* code) {
	$useLocalCurrentObjectStackCache();
	$nc(this->databuf)->appendChar($nc(code)->max_stack);
	$nc(this->databuf)->appendChar($nc(code)->max_locals);
	$nc(this->databuf)->appendInt($nc(code)->cp);
	$nc(this->databuf)->appendBytes($nc(code)->code, 0, code->cp);
	$nc(this->databuf)->appendChar($nc($nc(code)->catchInfo)->length());
	{
		$var($List, l, $nc($nc(code)->catchInfo)->toList());
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			for (int32_t i = 0; i < $nc(($cast($chars, l->head)))->length; ++i) {
				$nc(this->databuf)->appendChar($nc(($cast($chars, l->head)))->get(i));
			}
		}
	}
	int32_t acountIdx = beginAttrs();
	int32_t acount = 0;
	if ($nc(code->lineInfo)->nonEmpty()) {
		int32_t alenIdx = writeAttr($nc(this->names)->LineNumberTable);
		$nc(this->databuf)->appendChar($nc(code->lineInfo)->length());
		{
			$var($List, l, $nc(code->lineInfo)->reverse());
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				for (int32_t i = 0; i < $nc(($cast($chars, l->head)))->length; ++i) {
					$nc(this->databuf)->appendChar($nc(($cast($chars, l->head)))->get(i));
				}
			}
		}
		endAttr(alenIdx);
		++acount;
	}
	if (this->genCrt && (code->crt != nullptr)) {
		$var($CRTable, crt, code->crt);
		int32_t alenIdx = writeAttr($nc(this->names)->CharacterRangeTable);
		int32_t crtIdx = beginAttrs();
		int32_t crtEntries = $nc(crt)->writeCRT(this->databuf, code->lineMap, this->log);
		endAttrs(crtIdx, crtEntries);
		endAttr(alenIdx);
		++acount;
	}
	if (code->varDebugInfo && code->varBufferSize > 0) {
		int32_t nGenericVars = 0;
		int32_t alenIdx = writeAttr($nc(this->names)->LocalVariableTable);
		$nc(this->databuf)->appendChar(code->getLVTSize());
		for (int32_t i = 0; i < code->varBufferSize; ++i) {
			$var($Code$LocalVar, var, $nc(code->varBuffer)->get(i));
			{
				$var($Iterator, i$, $nc($nc(var)->aliveRanges)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Code$LocalVar$Range, r, $cast($Code$LocalVar$Range, i$->next()));
					{
						$Assert::check($nc(r)->start_pc >= 0 && r->start_pc <= code->cp);
						$nc(this->databuf)->appendChar($nc(r)->start_pc);
						$Assert::check($nc(r)->length > 0 && (r->start_pc + r->length) <= code->cp);
						$nc(this->databuf)->appendChar($nc(r)->length);
						$var($Symbol$VarSymbol, sym, var->sym);
						$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($nc(sym)->name));
						$nc(this->databuf)->appendChar($nc(this->poolWriter)->putDescriptor(static_cast<$Symbol*>(sym)));
						$nc(this->databuf)->appendChar(var->reg);
						if (needsLocalVariableTypeEntry($nc(var->sym)->type)) {
							++nGenericVars;
						}
					}
				}
			}
		}
		endAttr(alenIdx);
		++acount;
		if (nGenericVars > 0) {
			alenIdx = writeAttr($nc(this->names)->LocalVariableTypeTable);
			$nc(this->databuf)->appendChar(nGenericVars);
			int32_t count = 0;
			for (int32_t i = 0; i < code->varBufferSize; ++i) {
				$var($Code$LocalVar, var, $nc(code->varBuffer)->get(i));
				$var($Symbol$VarSymbol, sym, $nc(var)->sym);
				if (!needsLocalVariableTypeEntry($nc(sym)->type)) {
					continue;
				}
				{
					$var($Iterator, i$, $nc(var->aliveRanges)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Code$LocalVar$Range, r, $cast($Code$LocalVar$Range, i$->next()));
						{
							$nc(this->databuf)->appendChar($nc(r)->start_pc);
							$nc(this->databuf)->appendChar($nc(r)->length);
							$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($nc(sym)->name));
							$nc(this->databuf)->appendChar($nc(this->poolWriter)->putSignature(sym));
							$nc(this->databuf)->appendChar(var->reg);
							++count;
						}
					}
				}
			}
			$Assert::check(count == nGenericVars);
			endAttr(alenIdx);
			++acount;
		}
	}
	if (code->stackMapBufferSize > 0) {
		if (this->debugstackmap) {
			$nc($System::out)->println($$str({"Stack map for "_s, code->meth}));
		}
		int32_t alenIdx = writeAttr($($nc(code->stackMap)->getAttributeName(this->names)));
		writeStackMap(code);
		endAttr(alenIdx);
		++acount;
	}
	acount += writeTypeAnnotations($($nc(code->meth)->getRawTypeAttributes()), true);
	endAttrs(acountIdx, acount);
}

bool ClassWriter::needsLocalVariableTypeEntry($Type* t) {
	bool var$0 = !$nc(this->types)->isSameType(t, $($nc(this->types)->erasure(t)));
	return var$0 && $nc(this->check)->checkDenotable(t);
}

void ClassWriter::writeStackMap($Code* code) {
	$useLocalCurrentObjectStackCache();
	int32_t nframes = $nc(code)->stackMapBufferSize;
	if (this->debugstackmap) {
		$nc($System::out)->println($$str({" nframes = "_s, $$str(nframes)}));
	}
	$nc(this->databuf)->appendChar(nframes);
	$init($ClassWriter$1);
	switch ($nc($ClassWriter$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat)->get($nc((code->stackMap))->ordinal())) {
	case 1:
		{
			for (int32_t i = 0; i < nframes; ++i) {
				if (this->debugstackmap) {
					$nc($System::out)->print($$str({"  "_s, $$str(i), ":"_s}));
				}
				$var($Code$StackMapFrame, frame, $nc(code->stackMapBuffer)->get(i));
				if (this->debugstackmap) {
					$nc($System::out)->print($$str({" pc="_s, $$str($nc(frame)->pc)}));
				}
				$nc(this->databuf)->appendChar($nc(frame)->pc);
				int32_t localCount = 0;
				for (int32_t j = 0; j < $nc($nc(frame)->locals)->length; j += $Code::width($nc($nc(frame)->locals)->get(j))) {
					++localCount;
				}
				if (this->debugstackmap) {
					$nc($System::out)->print($$str({" nlocals="_s, $$str(localCount)}));
				}
				$nc(this->databuf)->appendChar(localCount);
				for (int32_t j = 0; j < $nc($nc(frame)->locals)->length; j += $Code::width($nc($nc(frame)->locals)->get(j))) {
					if (this->debugstackmap) {
						$nc($System::out)->print($$str({" local["_s, $$str(j), "]="_s}));
					}
					writeStackMapType($nc(frame->locals)->get(j));
				}
				int32_t stackCount = 0;
				for (int32_t j = 0; j < $nc($nc(frame)->stack)->length; j += $Code::width($nc($nc(frame)->stack)->get(j))) {
					++stackCount;
				}
				if (this->debugstackmap) {
					$nc($System::out)->print($$str({" nstack="_s, $$str(stackCount)}));
				}
				$nc(this->databuf)->appendChar(stackCount);
				for (int32_t j = 0; j < $nc($nc(frame)->stack)->length; j += $Code::width($nc($nc(frame)->stack)->get(j))) {
					if (this->debugstackmap) {
						$nc($System::out)->print($$str({" stack["_s, $$str(j), "]="_s}));
					}
					writeStackMapType($nc(frame->stack)->get(j));
				}
				if (this->debugstackmap) {
					$nc($System::out)->println();
				}
			}
			break;
		}
	case 2:
		{
			{
				$Assert::checkNull(code->stackMapBuffer);
				for (int32_t i = 0; i < nframes; ++i) {
					if (this->debugstackmap) {
						$nc($System::out)->print($$str({"  "_s, $$str(i), ":"_s}));
					}
					$var($ClassWriter$StackMapTableFrame, frame, $nc(code->stackMapTableBuffer)->get(i));
					$nc(frame)->write(this);
					if (this->debugstackmap) {
						$nc($System::out)->println();
					}
				}
				break;
			}
		}
	default:
		{
			$throwNew($AssertionError, $of("Unexpected stackmap format value"_s));
		}
	}
}

void ClassWriter::writeStackMapType($Type* t) {
	$useLocalCurrentObjectStackCache();
	if (t == nullptr) {
		if (this->debugstackmap) {
			$nc($System::out)->print("empty"_s);
		}
		$nc(this->databuf)->appendByte(0);
	} else {
		$init($ClassWriter$1);
		switch ($nc($ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{}
		case 8:
			{
				if (this->debugstackmap) {
					$nc($System::out)->print("int"_s);
				}
				$nc(this->databuf)->appendByte(1);
				break;
			}
		case 6:
			{
				if (this->debugstackmap) {
					$nc($System::out)->print("float"_s);
				}
				$nc(this->databuf)->appendByte(2);
				break;
			}
		case 7:
			{
				if (this->debugstackmap) {
					$nc($System::out)->print("double"_s);
				}
				$nc(this->databuf)->appendByte(3);
				break;
			}
		case 5:
			{
				if (this->debugstackmap) {
					$nc($System::out)->print("long"_s);
				}
				$nc(this->databuf)->appendByte(4);
				break;
			}
		case 9:
			{
				if (this->debugstackmap) {
					$nc($System::out)->print("null"_s);
				}
				$nc(this->databuf)->appendByte(5);
				break;
			}
		case 10:
			{}
		case 11:
			{}
		case 12:
			{
				if (this->debugstackmap) {
					$nc($System::out)->print($$str({"object("_s, $nc($($nc(this->types)->erasure(t)))->tsym, ")"_s}));
				}
				$nc(this->databuf)->appendByte(7);
				$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass($($nc(this->types)->erasure(t))));
				break;
			}
		case 13:
			{
				if (this->debugstackmap) {
					$nc($System::out)->print("uninit_this"_s);
				}
				$nc(this->databuf)->appendByte(6);
				break;
			}
		case 14:
			{
				{
					$var($UninitializedType, uninitType, $cast($UninitializedType, t));
					$nc(this->databuf)->appendByte(8);
					if (this->debugstackmap) {
						$nc($System::out)->print($$str({"uninit_object@"_s, $$str(uninitType->offset)}));
					}
					$nc(this->databuf)->appendChar(uninitType->offset);
				}
				break;
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	}
}

void ClassWriter::writeFields($Scope* s) {
	$useLocalCurrentObjectStackCache();
	$var($List, vars, $List::nil());
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc(s)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::VAR) {
					$assign(vars, $nc(vars)->prepend($cast($Symbol$VarSymbol, sym)));
				}
			}
		}
	}
	while ($nc(vars)->nonEmpty()) {
		writeField($cast($Symbol$VarSymbol, vars->head));
		$assign(vars, vars->tail);
	}
}

void ClassWriter::writeMethods($Scope* s) {
	$useLocalCurrentObjectStackCache();
	$var($List, methods, $List::nil());
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc(s)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::MTH && ((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0000002000000000)) == 0) {
					$assign(methods, $nc(methods)->prepend($cast($Symbol$MethodSymbol, sym)));
				}
			}
		}
	}
	while ($nc(methods)->nonEmpty()) {
		writeMethod($cast($Symbol$MethodSymbol, methods->head));
		$assign(methods, methods->tail);
	}
}

$JavaFileObject* ClassWriter::writeClass($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	$var($String, name, $nc(($nc($nc(c)->owner)->kind == $Kinds$Kind::MDL ? $nc(c)->name : c->flatname))->toString());
	$var($JavaFileManager$Location, outLocn, nullptr);
	if (this->multiModuleMode) {
		$var($Symbol$ModuleSymbol, msym, $nc(c->owner)->kind == $Kinds$Kind::MDL ? $cast($Symbol$ModuleSymbol, c->owner) : $nc($(c->packge()))->modle);
		$init($StandardLocation);
		$assign(outLocn, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::CLASS_OUTPUT), $($nc($nc(msym)->name)->toString())));
	} else {
		$init($StandardLocation);
		$assign(outLocn, $StandardLocation::CLASS_OUTPUT);
	}
	$init($JavaFileObject$Kind);
	$var($JavaFileObject, outFile, $nc(this->fileManager)->getJavaFileForOutput(outLocn, name, $JavaFileObject$Kind::CLASS, c->sourcefile));
	$var($OutputStream, out, $nc(outFile)->openOutputStream());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				writeClassFile(out, c);
				if (this->verbose) {
					$nc(this->log)->printVerbose("wrote.file"_s, $$new($ObjectArray, {$($of(outFile->getName()))}));
				}
				$nc(out)->close();
				$assign(out, nullptr);
			} catch ($Types$SignatureGenerator$InvalidSignatureException& ex) {
				$nc(this->log)->error($($CompilerProperties$Errors::CannotGenerateClass(c, $($CompilerProperties$Fragments::IllegalSignature(c, $(ex->type()))))));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (out != nullptr) {
				out->close();
				outFile->delete$();
				$assign(outFile, nullptr);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return outFile;
}

void ClassWriter::writeClassFile($OutputStream* out, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(((int64_t)($nc(c)->flags() & (uint64_t)(int64_t)0x01000000)) == 0);
	$nc(this->databuf)->reset();
	$nc(this->poolbuf)->reset();
	$var($Type, supertype, $nc(this->types)->supertype($nc(c)->type));
	$var($List, interfaces, $nc(this->types)->interfaces($nc(c)->type));
	$var($List, typarams, $nc($nc(c)->type)->getTypeArguments());
	int32_t flags = 0;
	$init($Kinds$Kind);
	if ($nc(c->owner)->kind == $Kinds$Kind::MDL) {
		flags = 32768;
	} else {
		flags = adjustFlags((int64_t)(c->flags() & (uint64_t)~(int64_t)0x0000080000000000));
		if (((int32_t)(flags & (uint32_t)4)) != 0) {
			flags |= 1;
		}
		flags = (int32_t)(((int32_t)(flags & (uint32_t)32273)) & (uint32_t)~2048);
		if (((int32_t)(flags & (uint32_t)512)) == 0) {
			flags |= 32;
		}
	}
	if (this->dumpClassModifiers) {
		$init($Log$WriterKind);
		$var($PrintWriter, pw, $nc(this->log)->getWriter($Log$WriterKind::ERROR));
		$nc(pw)->println();
		pw->println($$str({"CLASSFILE  "_s, $(c->getQualifiedName())}));
		pw->println($$str({"---"_s, $(flagNames(flags))}));
	}
	$nc(this->databuf)->appendChar(flags);
	if ($nc(c->owner)->kind == $Kinds$Kind::MDL) {
		$var($Symbol$PackageSymbol, unnamed, $nc(($cast($Symbol$ModuleSymbol, c->owner)))->unnamedPackage);
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass($$new($Symbol$ClassSymbol, 0, $nc(this->names)->module_info, unnamed)));
	} else {
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass(c));
	}
	$init($TypeTag);
	$nc(this->databuf)->appendChar($nc(supertype)->hasTag($TypeTag::CLASS) ? $nc(this->poolWriter)->putClass($cast($Symbol$ClassSymbol, $nc(supertype)->tsym)) : 0);
	$nc(this->databuf)->appendChar($nc(interfaces)->length());
	{
		$var($List, l, interfaces);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass($cast($Symbol$ClassSymbol, $nc(($cast($Type, l->head)))->tsym)));
		}
	}
	int32_t fieldsCount = 0;
	int32_t methodsCount = 0;
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc($(c->members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($ClassWriter$1);
				switch ($nc($ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
				case 1:
					{
						++fieldsCount;
						break;
					}
				case 2:
					{
						if (((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0000002000000000)) == 0) {
							++methodsCount;
						}
						break;
					}
				case 3:
					{
						$nc(this->poolWriter)->enterInner($cast($Symbol$ClassSymbol, sym));
						break;
					}
				default:
					{
						$Assert::error();
					}
				}
			}
		}
	}
	if (c->trans_local != nullptr) {
		{
			$var($Iterator, i$, $nc(c->trans_local)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$ClassSymbol, local, $cast($Symbol$ClassSymbol, i$->next()));
				{
					$nc(this->poolWriter)->enterInner(local);
				}
			}
		}
	}
	$nc(this->databuf)->appendChar(fieldsCount);
	writeFields($(c->members()));
	$nc(this->databuf)->appendChar(methodsCount);
	writeMethods($(c->members()));
	int32_t acountIdx = beginAttrs();
	int32_t acount = 0;
	bool var$0 = $nc(typarams)->length() != 0;
	bool sigReq = var$0 || $nc($($nc(supertype)->allparams()))->length() != 0;
	{
		$var($List, l, interfaces);
		for (; !sigReq && l->nonEmpty(); $assign(l, l->tail)) {
			sigReq = $nc($($nc(($cast($Type, l->head)))->allparams()))->length() != 0;
		}
	}
	if (sigReq) {
		int32_t alenIdx = writeAttr($nc(this->names)->Signature);
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putSignature(c));
		endAttr(alenIdx);
		++acount;
	}
	if (c->sourcefile != nullptr && this->emitSourceFile) {
		int32_t alenIdx = writeAttr($nc(this->names)->SourceFile);
		$var($String, simpleName, $PathFileObject::getSimpleName(c->sourcefile));
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($($nc(this->names)->fromString(simpleName))));
		endAttr(alenIdx);
		++acount;
	}
	if (this->genCrt) {
		int32_t alenIdx = writeAttr($nc(this->names)->SourceID);
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($($nc(this->names)->fromString($($Long::toString(getLastModified(c->sourcefile)))))));
		endAttr(alenIdx);
		++acount;
		alenIdx = writeAttr($nc(this->names)->CompilationID);
		$nc(this->databuf)->appendChar($nc(this->poolWriter)->putName($($nc(this->names)->fromString($($Long::toString($System::currentTimeMillis()))))));
		endAttr(alenIdx);
		++acount;
	}
	acount += writeFlagAttrs(c->flags());
	acount += writeJavaAnnotations($(c->getRawAttributes()));
	acount += writeTypeAnnotations($(c->getRawTypeAttributes()), false);
	acount += writeEnclosingMethodAttribute(c);
	if ($nc(c->owner)->kind == $Kinds$Kind::MDL) {
		acount += writeModuleAttribute(c);
		acount += writeFlagAttrs((int64_t)($nc(c->owner)->flags() & (uint64_t)(int64_t)~0x00020000));
	}
	acount += writeExtraClassAttributes(c);
	acount += writeExtraAttributes(c);
	$nc(this->poolbuf)->appendInt($ClassFile::JAVA_MAGIC);
	bool var$1 = $nc(this->preview)->isEnabled();
	if (var$1 && $nc(this->preview)->usesPreview(c->sourcefile)) {
		$nc(this->poolbuf)->appendChar($ClassFile::PREVIEW_MINOR_VERSION);
	} else {
		$nc(this->poolbuf)->appendChar($nc(this->target)->minorVersion);
	}
	$nc(this->poolbuf)->appendChar($nc(this->target)->majorVersion);
	if ($nc(c->owner)->kind != $Kinds$Kind::MDL) {
		if ($nc(this->target)->hasNestmateAccess()) {
			acount += writeNestMembersIfNeeded(c);
			acount += writeNestHostIfNeeded(c);
		}
	}
	if (c->isRecord()) {
		acount += writeRecordAttribute(c);
	}
	if ($nc(this->target)->hasSealedClasses()) {
		acount += writePermittedSubclassesIfNeeded(c);
	}
	if (!$nc($nc(this->poolWriter)->bootstrapMethods)->isEmpty()) {
		writeBootstrapMethods();
		++acount;
	}
	if (!$nc($nc(this->poolWriter)->innerClasses)->isEmpty()) {
		writeInnerClasses();
		++acount;
	}
	endAttrs(acountIdx, acount);
	$nc(out)->write($nc(this->poolbuf)->elems, 0, $nc(this->poolbuf)->length);
	$nc(this->poolWriter)->writePool(out);
	$nc(this->poolWriter)->reset();
	out->write($nc(this->databuf)->elems, 0, $nc(this->databuf)->length);
}

int32_t ClassWriter::writeExtraClassAttributes($Symbol$ClassSymbol* c) {
	return 0;
}

int32_t ClassWriter::writeExtraAttributes($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc(this->extraAttributeHooks)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ToIntFunction, hook, $cast($ToIntFunction, i$->next()));
			{
				i += $nc(hook)->applyAsInt(sym);
			}
		}
	}
	return i;
}

int32_t ClassWriter::adjustFlags(int64_t flags) {
	int32_t result = (int32_t)flags;
	if ($nc(this->target)->obsoleteAccStrict()) {
		result &= (uint32_t)~2048;
	}
	if (((int64_t)(flags & (uint64_t)(int64_t)0x0000000080000000)) != 0) {
		result |= 64;
	}
	if (((int64_t)(flags & (uint64_t)(int64_t)0x0000000400000000)) != 0) {
		result |= 128;
	}
	if (((int64_t)(flags & (uint64_t)(int64_t)0x0000080000000000)) != 0) {
		result &= (uint32_t)~1024;
	}
	return result;
}

int64_t ClassWriter::getLastModified($FileObject* filename) {
	$useLocalCurrentObjectStackCache();
	int64_t mod = 0;
	try {
		mod = $nc(filename)->getLastModified();
	} catch ($SecurityException& e) {
		$throwNew($AssertionError, $of($$str({"CRT: couldn\'t get source file modification date: "_s, $(e->getMessage())})));
	}
	return mod;
}

void ClassWriter::lambda$writeModuleAttribute$2($Symbol$ClassSymbol* srvc, $Set* impls) {
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass(srvc));
	$nc(this->databuf)->appendChar($nc(impls)->size());
	$nc(impls)->forEach(static_cast<$Consumer*>($$new(ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2, this)));
}

void ClassWriter::lambda$writeModuleAttribute$1($Symbol$ClassSymbol* impl) {
	$nc(this->databuf)->appendChar($nc(this->poolWriter)->putClass(impl));
}

$Set* ClassWriter::lambda$writeModuleAttribute$0($Symbol$ClassSymbol* s) {
	$init(ClassWriter);
	return $new($LinkedHashSet);
}

void clinit$ClassWriter($Class* class$) {
	$assignStatic(ClassWriter::classWriterKey, $new($Context$Key));
	$assignStatic(ClassWriter::flagName, $new($StringArray, {
		"PUBLIC"_s,
		"PRIVATE"_s,
		"PROTECTED"_s,
		"STATIC"_s,
		"FINAL"_s,
		"SUPER"_s,
		"VOLATILE"_s,
		"TRANSIENT"_s,
		"NATIVE"_s,
		"INTERFACE"_s,
		"ABSTRACT"_s,
		"STRICTFP"_s
	}));
}

ClassWriter::ClassWriter() {
}

$Class* ClassWriter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassWriter$$Lambda$lambda$writeModuleAttribute$0::classInfo$.name)) {
			return ClassWriter$$Lambda$lambda$writeModuleAttribute$0::load$(name, initialize);
		}
		if (name->equals(ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::classInfo$.name)) {
			return ClassWriter$$Lambda$lambda$writeModuleAttribute$2$1::load$(name, initialize);
		}
		if (name->equals(ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::classInfo$.name)) {
			return ClassWriter$$Lambda$lambda$writeModuleAttribute$1$2::load$(name, initialize);
		}
	}
	$loadClass(ClassWriter, name, initialize, &_ClassWriter_ClassInfo_, clinit$ClassWriter, allocate$ClassWriter);
	return class$;
}

$Class* ClassWriter::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com