#include <com/sun/tools/javac/jvm/Code.h>

#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/CRTable.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>
#include <com/sun/tools/javac/jvm/Code$1.h>
#include <com/sun/tools/javac/jvm/Code$Chain.h>
#include <com/sun/tools/javac/jvm/Code$LocalVar$Range.h>
#include <com/sun/tools/javac/jvm/Code$LocalVar.h>
#include <com/sun/tools/javac/jvm/Code$Mneumonics.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFrame.h>
#include <com/sun/tools/javac/jvm/Code$State.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <com/sun/tools/javac/jvm/UninitializedType.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/ArrayUtils.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/ToIntBiFunction.h>
#include <java/util/function/ToIntFunction.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef BOT
#undef INT
#undef LAMBDA_METHOD
#undef MAX_CODE
#undef MAX_LOCALS
#undef MAX_STACK
#undef MAX_VALUE
#undef MIN_VALUE
#undef NOPOS
#undef PARAMETER
#undef SYNTHETIC

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $ClassWriter$StackMapTableFrameArray = $Array<::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame>;
using $Code$LocalVar$RangeArray = $Array<::com::sun::tools::javac::jvm::Code$LocalVar$Range>;
using $Code$LocalVarArray = $Array<::com::sun::tools::javac::jvm::Code$LocalVar>;
using $Code$StackMapFrameArray = $Array<::com::sun::tools::javac::jvm::Code$StackMapFrame>;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $CRTable = ::com::sun::tools::javac::jvm::CRTable;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $ClassWriter$StackMapTableFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame;
using $Code$1 = ::com::sun::tools::javac::jvm::Code$1;
using $Code$Chain = ::com::sun::tools::javac::jvm::Code$Chain;
using $Code$LocalVar = ::com::sun::tools::javac::jvm::Code$LocalVar;
using $Code$LocalVar$Range = ::com::sun::tools::javac::jvm::Code$LocalVar$Range;
using $Code$Mneumonics = ::com::sun::tools::javac::jvm::Code$Mneumonics;
using $Code$StackMapFormat = ::com::sun::tools::javac::jvm::Code$StackMapFormat;
using $Code$StackMapFrame = ::com::sun::tools::javac::jvm::Code$StackMapFrame;
using $Code$State = ::com::sun::tools::javac::jvm::Code$State;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$Dynamic = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $UninitializedType = ::com::sun::tools::javac::jvm::UninitializedType;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $ArrayUtils = ::com::sun::tools::javac::util::ArrayUtils;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Bits = ::com::sun::tools::javac::util::Bits;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Position = ::com::sun::tools::javac::util::Position;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $ToIntBiFunction = ::java::util::function::ToIntBiFunction;
using $ToIntFunction = ::java::util::function::ToIntFunction;
using $IntStream = ::java::util::stream::IntStream;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class Code$$Lambda$lambda$fillLocalVarPosition$0 : public $Predicate {
	$class(Code$$Lambda$lambda$fillLocalVarPosition$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* r) override {
		 return Code::lambda$fillLocalVarPosition$0($cast($Code$LocalVar$Range, r));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Code$$Lambda$lambda$fillLocalVarPosition$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Code$$Lambda$lambda$fillLocalVarPosition$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Code$$Lambda$lambda$fillLocalVarPosition$0::*)()>(&Code$$Lambda$lambda$fillLocalVarPosition$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Code$$Lambda$lambda$fillLocalVarPosition$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Code$$Lambda$lambda$fillLocalVarPosition$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Code$$Lambda$lambda$fillLocalVarPosition$0::load$($String* name, bool initialize) {
	$loadClass(Code$$Lambda$lambda$fillLocalVarPosition$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Code$$Lambda$lambda$fillLocalVarPosition$0::class$ = nullptr;

class Code$$Lambda$lambda$fillLocalVarPosition$1$1 : public $IntFunction {
	$class(Code$$Lambda$lambda$fillLocalVarPosition$1$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t s) override {
		 return $of(Code::lambda$fillLocalVarPosition$1(s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Code$$Lambda$lambda$fillLocalVarPosition$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Code$$Lambda$lambda$fillLocalVarPosition$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Code$$Lambda$lambda$fillLocalVarPosition$1$1::*)()>(&Code$$Lambda$lambda$fillLocalVarPosition$1$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Code$$Lambda$lambda$fillLocalVarPosition$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Code$$Lambda$lambda$fillLocalVarPosition$1$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* Code$$Lambda$lambda$fillLocalVarPosition$1$1::load$($String* name, bool initialize) {
	$loadClass(Code$$Lambda$lambda$fillLocalVarPosition$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Code$$Lambda$lambda$fillLocalVarPosition$1$1::class$ = nullptr;

class Code$$Lambda$lambda$fillLocalVarPosition$2$2 : public $ToIntFunction {
	$class(Code$$Lambda$lambda$fillLocalVarPosition$2$2, $NO_CLASS_INIT, $ToIntFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* r) override {
		 return Code::lambda$fillLocalVarPosition$2($cast($Code$LocalVar$Range, r));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Code$$Lambda$lambda$fillLocalVarPosition$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Code$$Lambda$lambda$fillLocalVarPosition$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Code$$Lambda$lambda$fillLocalVarPosition$2$2::*)()>(&Code$$Lambda$lambda$fillLocalVarPosition$2$2::init$))},
	{"applyAsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Code$$Lambda$lambda$fillLocalVarPosition$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Code$$Lambda$lambda$fillLocalVarPosition$2$2",
	"java.lang.Object",
	"java.util.function.ToIntFunction",
	nullptr,
	methodInfos
};
$Class* Code$$Lambda$lambda$fillLocalVarPosition$2$2::load$($String* name, bool initialize) {
	$loadClass(Code$$Lambda$lambda$fillLocalVarPosition$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Code$$Lambda$lambda$fillLocalVarPosition$2$2::class$ = nullptr;

class Code$$Lambda$lambda$fillLocalVarPosition$3$3 : public $ToIntFunction {
	$class(Code$$Lambda$lambda$fillLocalVarPosition$3$3, $NO_CLASS_INIT, $ToIntFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* r) override {
		 return Code::lambda$fillLocalVarPosition$3($cast($Code$LocalVar$Range, r));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Code$$Lambda$lambda$fillLocalVarPosition$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Code$$Lambda$lambda$fillLocalVarPosition$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Code$$Lambda$lambda$fillLocalVarPosition$3$3::*)()>(&Code$$Lambda$lambda$fillLocalVarPosition$3$3::init$))},
	{"applyAsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Code$$Lambda$lambda$fillLocalVarPosition$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Code$$Lambda$lambda$fillLocalVarPosition$3$3",
	"java.lang.Object",
	"java.util.function.ToIntFunction",
	nullptr,
	methodInfos
};
$Class* Code$$Lambda$lambda$fillLocalVarPosition$3$3::load$($String* name, bool initialize) {
	$loadClass(Code$$Lambda$lambda$fillLocalVarPosition$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Code$$Lambda$lambda$fillLocalVarPosition$3$3::class$ = nullptr;

class Code$$Lambda$lambda$fillLocalVarPosition$4$4 : public $ToIntFunction {
	$class(Code$$Lambda$lambda$fillLocalVarPosition$4$4, $NO_CLASS_INIT, $ToIntFunction)
public:
	void init$($Code$LocalVar* lv) {
		$set(this, lv, lv);
	}
	virtual int32_t applyAsInt(Object$* r) override {
		 return Code::lambda$fillLocalVarPosition$4(lv, $cast($Code$LocalVar$Range, r));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Code$$Lambda$lambda$fillLocalVarPosition$4$4>());
	}
	$Code$LocalVar* lv = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Code$$Lambda$lambda$fillLocalVarPosition$4$4::fieldInfos[2] = {
	{"lv", "Lcom/sun/tools/javac/jvm/Code$LocalVar;", nullptr, $PUBLIC, $field(Code$$Lambda$lambda$fillLocalVarPosition$4$4, lv)},
	{}
};
$MethodInfo Code$$Lambda$lambda$fillLocalVarPosition$4$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Code$LocalVar;)V", nullptr, $PUBLIC, $method(static_cast<void(Code$$Lambda$lambda$fillLocalVarPosition$4$4::*)($Code$LocalVar*)>(&Code$$Lambda$lambda$fillLocalVarPosition$4$4::init$))},
	{"applyAsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Code$$Lambda$lambda$fillLocalVarPosition$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Code$$Lambda$lambda$fillLocalVarPosition$4$4",
	"java.lang.Object",
	"java.util.function.ToIntFunction",
	fieldInfos,
	methodInfos
};
$Class* Code$$Lambda$lambda$fillLocalVarPosition$4$4::load$($String* name, bool initialize) {
	$loadClass(Code$$Lambda$lambda$fillLocalVarPosition$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Code$$Lambda$lambda$fillLocalVarPosition$4$4::class$ = nullptr;

$FieldInfo _Code_FieldInfo_[] = {
	{"debugCode", "Z", nullptr, $PUBLIC | $FINAL, $field(Code, debugCode)},
	{"needStackMap", "Z", nullptr, $PUBLIC | $FINAL, $field(Code, needStackMap)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(Code, types)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL, $field(Code, syms)},
	{"poolWriter", "Lcom/sun/tools/javac/jvm/PoolWriter;", nullptr, $FINAL, $field(Code, poolWriter)},
	{"max_stack", "I", nullptr, $PUBLIC, $field(Code, max_stack)},
	{"max_locals", "I", nullptr, $PUBLIC, $field(Code, max_locals)},
	{"code", "[B", nullptr, $PUBLIC, $field(Code, code)},
	{"cp", "I", nullptr, $PUBLIC, $field(Code, cp)},
	{"catchInfo", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<[C>;", 0, $field(Code, catchInfo)},
	{"lineInfo", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<[C>;", 0, $field(Code, lineInfo)},
	{"crt", "Lcom/sun/tools/javac/jvm/CRTable;", nullptr, $PUBLIC, $field(Code, crt)},
	{"fatcode", "Z", nullptr, $PUBLIC, $field(Code, fatcode)},
	{"alive", "Z", nullptr, $PRIVATE, $field(Code, alive)},
	{"state", "Lcom/sun/tools/javac/jvm/Code$State;", nullptr, 0, $field(Code, state)},
	{"fixedPc", "Z", nullptr, $PRIVATE, $field(Code, fixedPc)},
	{"nextreg", "I", nullptr, $PUBLIC, $field(Code, nextreg)},
	{"pendingJumps", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0, $field(Code, pendingJumps)},
	{"pendingStatPos", "I", nullptr, 0, $field(Code, pendingStatPos)},
	{"pendingStackMap", "Z", nullptr, 0, $field(Code, pendingStackMap)},
	{"stackMap", "Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, 0, $field(Code, stackMap)},
	{"varDebugInfo", "Z", nullptr, 0, $field(Code, varDebugInfo)},
	{"lineDebugInfo", "Z", nullptr, 0, $field(Code, lineDebugInfo)},
	{"lineMap", "Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, 0, $field(Code, lineMap)},
	{"meth", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $FINAL, $field(Code, meth)},
	{"letExprStackPos", "I", nullptr, $PRIVATE, $field(Code, letExprStackPos)},
	{"stackMapBuffer", "[Lcom/sun/tools/javac/jvm/Code$StackMapFrame;", nullptr, 0, $field(Code, stackMapBuffer)},
	{"stackMapTableBuffer", "[Lcom/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame;", nullptr, 0, $field(Code, stackMapTableBuffer)},
	{"stackMapBufferSize", "I", nullptr, 0, $field(Code, stackMapBufferSize)},
	{"lastStackMapPC", "I", nullptr, 0, $field(Code, lastStackMapPC)},
	{"lastFrame", "Lcom/sun/tools/javac/jvm/Code$StackMapFrame;", nullptr, 0, $field(Code, lastFrame)},
	{"frameBeforeLast", "Lcom/sun/tools/javac/jvm/Code$StackMapFrame;", nullptr, 0, $field(Code, frameBeforeLast)},
	{"jsrReturnValue", "Lcom/sun/tools/javac/code/Type;", nullptr, $STATIC | $FINAL, $staticField(Code, jsrReturnValue)},
	{"lvar", "[Lcom/sun/tools/javac/jvm/Code$LocalVar;", nullptr, 0, $field(Code, lvar)},
	{"varBuffer", "[Lcom/sun/tools/javac/jvm/Code$LocalVar;", nullptr, 0, $field(Code, varBuffer)},
	{"varBufferSize", "I", nullptr, 0, $field(Code, varBufferSize)},
	{}
};

$MethodInfo _Code_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;ZLcom/sun/tools/javac/util/Position$LineMap;ZLcom/sun/tools/javac/jvm/Code$StackMapFormat;ZLcom/sun/tools/javac/jvm/CRTable;Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/jvm/PoolWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(Code::*)($Symbol$MethodSymbol*,bool,$Position$LineMap*,bool,$Code$StackMapFormat*,bool,$CRTable*,$Symtab*,$Types*,$PoolWriter*)>(&Code::init$))},
	{"addCatch", "(CCCC)V", nullptr, $PUBLIC},
	{"addLineNumber", "(CC)V", nullptr, $PUBLIC},
	{"addLocalVar", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Code::*)($Symbol$VarSymbol*)>(&Code::addLocalVar))},
	{"adjustAliveRanges", "(II)V", nullptr, 0},
	{"align", "(I)V", nullptr, $PUBLIC},
	{"appendArray", "([I[I)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(Code::*)($ints*,$ints*)>(&Code::appendArray))},
	{"arraycode", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Type*)>(&Code::arraycode))},
	{"branch", "(I)Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, $PUBLIC},
	{"checkLimits", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/Log;)Z", nullptr, $PUBLIC},
	{"compressCatchTable", "()V", nullptr, $PUBLIC},
	{"curCP", "()I", nullptr, $PUBLIC},
	{"emit1", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Code::*)(int32_t)>(&Code::emit1))},
	{"emit2", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Code::*)(int32_t)>(&Code::emit2))},
	{"emit4", "(I)V", nullptr, $PUBLIC},
	{"emitAnewarray", "(ILcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"emitCLDCStackMap", "(II)V", nullptr, 0},
	{"emitInvokedynamic", "(Lcom/sun/tools/javac/code/Symbol$DynamicMethodSymbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"emitInvokeinterface", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"emitInvokespecial", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"emitInvokestatic", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"emitInvokevirtual", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"emitJump", "(I)I", nullptr, $PUBLIC},
	{"emitLdc", "(Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;)V", nullptr, $PUBLIC},
	{"emitMultianewarray", "(IILcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"emitNewarray", "(ILcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"emitStackMap", "()V", nullptr, $PUBLIC},
	{"emitStackMapFrame", "(II)V", nullptr, 0},
	{"emitop", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Code::*)(int32_t)>(&Code::emitop))},
	{"emitop0", "(I)V", nullptr, $PUBLIC},
	{"emitop1", "(II)V", nullptr, $PUBLIC},
	{"emitop1", "(IILcom/sun/tools/javac/jvm/PoolConstant;)V", nullptr, $PUBLIC},
	{"emitop1w", "(II)V", nullptr, $PUBLIC},
	{"emitop1w", "(III)V", nullptr, $PUBLIC},
	{"emitop2", "(ILcom/sun/tools/javac/jvm/PoolConstant;Ljava/util/function/ToIntBiFunction;)V", "<P::Lcom/sun/tools/javac/jvm/PoolConstant;>(ITP;Ljava/util/function/ToIntBiFunction<Lcom/sun/tools/javac/jvm/PoolWriter;TP;>;)V", $PUBLIC},
	{"emitop2", "(II)V", nullptr, $PUBLIC},
	{"emitop2", "(IILcom/sun/tools/javac/jvm/PoolConstant;)V", nullptr, $PUBLIC},
	{"emitop4", "(II)V", nullptr, $PUBLIC},
	{"endScope", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Code::*)(int32_t)>(&Code::endScope))},
	{"endScopes", "(I)V", nullptr, $PUBLIC},
	{"entryPoint", "()I", nullptr, $PUBLIC},
	{"entryPoint", "(Lcom/sun/tools/javac/jvm/Code$State;)I", nullptr, $PUBLIC},
	{"entryPoint", "(Lcom/sun/tools/javac/jvm/Code$State;Lcom/sun/tools/javac/code/Type;)I", nullptr, $PUBLIC},
	{"fillExceptionParameterPositions", "()V", nullptr, $PUBLIC},
	{"fillLocalVarPosition", "(Lcom/sun/tools/javac/jvm/Code$LocalVar;)V", nullptr, $PRIVATE, $method(static_cast<void(Code::*)($Code$LocalVar*)>(&Code::fillLocalVarPosition))},
	{"findExceptionIndex", "(Lcom/sun/tools/javac/code/TypeAnnotationPosition;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Code::*)($TypeAnnotationPosition*)>(&Code::findExceptionIndex))},
	{"get1", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Code::*)(int32_t)>(&Code::get1))},
	{"get2", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Code::*)(int32_t)>(&Code::get2))},
	{"get4", "(I)I", nullptr, $PUBLIC},
	{"getInitialFrame", "()Lcom/sun/tools/javac/jvm/Code$StackMapFrame;", nullptr, 0},
	{"getLVTSize", "()I", nullptr, $PUBLIC},
	{"getLocalsSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Code::*)()>(&Code::getLocalsSize))},
	{"isAlive", "()Z", nullptr, $PUBLIC},
	{"isStatementStart", "()Z", nullptr, $PUBLIC},
	{"lambda$fillLocalVarPosition$0", "(Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Code$LocalVar$Range*)>(&Code::lambda$fillLocalVarPosition$0))},
	{"lambda$fillLocalVarPosition$1", "(I)[Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Code$LocalVar$RangeArray*(*)(int32_t)>(&Code::lambda$fillLocalVarPosition$1))},
	{"lambda$fillLocalVarPosition$2", "(Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Code$LocalVar$Range*)>(&Code::lambda$fillLocalVarPosition$2))},
	{"lambda$fillLocalVarPosition$3", "(Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Code$LocalVar$Range*)>(&Code::lambda$fillLocalVarPosition$3))},
	{"lambda$fillLocalVarPosition$4", "(Lcom/sun/tools/javac/jvm/Code$LocalVar;Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Code$LocalVar*,$Code$LocalVar$Range*)>(&Code::lambda$fillLocalVarPosition$4))},
	{"markDead", "()V", nullptr, $PUBLIC},
	{"markStatBegin", "()V", nullptr, $PUBLIC},
	{"mergeChains", "(Lcom/sun/tools/javac/jvm/Code$Chain;Lcom/sun/tools/javac/jvm/Code$Chain;)Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Code$Chain*(*)($Code$Chain*,$Code$Chain*)>(&Code::mergeChains))},
	{"mnem", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Code::mnem))},
	{"negate", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Code::negate))},
	{"newLocal", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Code::*)(int32_t)>(&Code::newLocal))},
	{"newLocal", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Code::*)($Type*)>(&Code::newLocal))},
	{"newLocal", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)I", nullptr, $PUBLIC},
	{"newRegSegment", "()V", nullptr, $PUBLIC},
	{"postop", "()V", nullptr, 0},
	{"put1", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(Code::*)(int32_t,int32_t)>(&Code::put1))},
	{"put2", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(Code::*)(int32_t,int32_t)>(&Code::put2))},
	{"put4", "(II)V", nullptr, $PUBLIC},
	{"putVar", "(Lcom/sun/tools/javac/jvm/Code$LocalVar;)V", nullptr, 0},
	{"resolve", "(Lcom/sun/tools/javac/jvm/Code$Chain;I)V", nullptr, $PUBLIC},
	{"resolve", "(Lcom/sun/tools/javac/jvm/Code$Chain;)V", nullptr, $PUBLIC},
	{"resolvePending", "()V", nullptr, $PUBLIC},
	{"setDefined", "(Lcom/sun/tools/javac/util/Bits;)V", nullptr, $PUBLIC},
	{"setDefined", "(I)V", nullptr, $PUBLIC},
	{"setLetExprStackPos", "(I)I", nullptr, $PUBLIC},
	{"setUndefined", "(I)V", nullptr, $PUBLIC},
	{"statBegin", "(I)V", nullptr, $PUBLIC},
	{"truncate", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Code::truncate))},
	{"typecode", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Type*)>(&Code::typecode))},
	{"width", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Code::width))},
	{"width", "(Lcom/sun/tools/javac/code/Type;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Type*)>(&Code::width))},
	{"width", "(Lcom/sun/tools/javac/util/List;)I", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($List*)>(&Code::width))},
	{}
};

$InnerClassInfo _Code_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Code$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.jvm.Code$Mneumonics", "com.sun.tools.javac.jvm.Code", "Mneumonics", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.jvm.Code$LocalVar", "com.sun.tools.javac.jvm.Code", "LocalVar", $STATIC},
	{"com.sun.tools.javac.jvm.Code$State", "com.sun.tools.javac.jvm.Code", "State", 0},
	{"com.sun.tools.javac.jvm.Code$Chain", "com.sun.tools.javac.jvm.Code", "Chain", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.jvm.Code$StackMapFrame", "com.sun.tools.javac.jvm.Code", "StackMapFrame", $STATIC},
	{"com.sun.tools.javac.jvm.Code$StackMapFormat", "com.sun.tools.javac.jvm.Code", "StackMapFormat", $PUBLIC | $STATIC | $ENUM},
	{}
};

$ClassInfo _Code_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.Code",
	"java.lang.Object",
	nullptr,
	_Code_FieldInfo_,
	_Code_MethodInfo_,
	nullptr,
	nullptr,
	_Code_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Code$1,com.sun.tools.javac.jvm.Code$Mneumonics,com.sun.tools.javac.jvm.Code$LocalVar,com.sun.tools.javac.jvm.Code$LocalVar$Range,com.sun.tools.javac.jvm.Code$State,com.sun.tools.javac.jvm.Code$Chain,com.sun.tools.javac.jvm.Code$StackMapFrame,com.sun.tools.javac.jvm.Code$StackMapFormat,com.sun.tools.javac.jvm.Code$StackMapFormat$2,com.sun.tools.javac.jvm.Code$StackMapFormat$1"
};

$Object* allocate$Code($Class* clazz) {
	return $of($alloc(Code));
}

$Type* Code::jsrReturnValue = nullptr;

bool Code::checkLimits($JCDiagnostic$DiagnosticPosition* pos, $Log* log) {
	if (this->cp > $ClassFile::MAX_CODE) {
		$init($CompilerProperties$Errors);
		$nc(log)->error(pos, $CompilerProperties$Errors::LimitCode);
		return true;
	}
	if (this->max_locals > $ClassFile::MAX_LOCALS) {
		$init($CompilerProperties$Errors);
		$nc(log)->error(pos, $CompilerProperties$Errors::LimitLocals);
		return true;
	}
	if (this->max_stack > $ClassFile::MAX_STACK) {
		$init($CompilerProperties$Errors);
		$nc(log)->error(pos, $CompilerProperties$Errors::LimitStack);
		return true;
	}
	return false;
}

void Code::init$($Symbol$MethodSymbol* meth, bool fatcode, $Position$LineMap* lineMap, bool varDebugInfo, $Code$StackMapFormat* stackMap, bool debugCode, $CRTable* crt, $Symtab* syms, $Types* types, $PoolWriter* poolWriter) {
	this->max_stack = 0;
	this->max_locals = 0;
	$set(this, code, $new($bytes, 64));
	this->cp = 0;
	$set(this, catchInfo, $new($ListBuffer));
	$set(this, lineInfo, $List::nil());
	this->alive = true;
	this->fixedPc = false;
	this->nextreg = 0;
	$set(this, pendingJumps, nullptr);
	this->pendingStatPos = $Position::NOPOS;
	this->pendingStackMap = false;
	this->letExprStackPos = 0;
	$set(this, stackMapBuffer, nullptr);
	$set(this, stackMapTableBuffer, nullptr);
	this->stackMapBufferSize = 0;
	this->lastStackMapPC = -1;
	$set(this, lastFrame, nullptr);
	$set(this, frameBeforeLast, nullptr);
	$set(this, meth, meth);
	this->fatcode = fatcode;
	$set(this, lineMap, lineMap);
	this->lineDebugInfo = lineMap != nullptr;
	this->varDebugInfo = varDebugInfo;
	$set(this, crt, crt);
	$set(this, syms, syms);
	$set(this, types, types);
	$set(this, poolWriter, poolWriter);
	this->debugCode = debugCode;
	$set(this, stackMap, stackMap);
	$init($Code$1);
	switch ($nc($Code$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat)->get($nc((stackMap))->ordinal())) {
	case 1:
		{}
	case 2:
		{
			this->needStackMap = true;
			break;
		}
	default:
		{
			this->needStackMap = false;
		}
	}
	$set(this, state, $new($Code$State, this));
	$set(this, lvar, $new($Code$LocalVarArray, 20));
}

int32_t Code::typecode($Type* type) {
	$init(Code);
	$useLocalCurrentObjectStackCache();
	$init($Code$1);
	switch ($nc($Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(type)->getTag())))->ordinal())) {
	case 1:
		{
			return 5;
		}
	case 2:
		{
			return 7;
		}
	case 3:
		{
			return 6;
		}
	case 4:
		{
			return 0;
		}
	case 5:
		{
			return 1;
		}
	case 6:
		{
			return 2;
		}
	case 7:
		{
			return 3;
		}
	case 8:
		{
			return 5;
		}
	case 9:
		{
			return 8;
		}
	case 10:
		{}
	case 11:
		{}
	case 12:
		{}
	case 13:
		{}
	case 14:
		{}
	case 15:
		{}
	case 16:
		{
			return 4;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"typecode "_s, $(type->getTag())})));
		}
	}
}

int32_t Code::truncate(int32_t tc) {
	$init(Code);
	switch (tc) {
	case 5:
		{}
	case 7:
		{}
	case 6:
		{
			return 0;
		}
	default:
		{
			return tc;
		}
	}
}

int32_t Code::width(int32_t typecode) {
	$init(Code);
	switch (typecode) {
	case 1:
		{}
	case 3:
		{
			return 2;
		}
	case 8:
		{
			return 0;
		}
	default:
		{
			return 1;
		}
	}
}

int32_t Code::width($Type* type) {
	$init(Code);
	return type == nullptr ? 1 : width(typecode(type));
}

int32_t Code::width($List* types) {
	$init(Code);
	int32_t w = 0;
	{
		$var($List, l, types);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			w = w + width($cast($Type, l->head));
		}
	}
	return w;
}

int32_t Code::arraycode($Type* type) {
	$init(Code);
	$useLocalCurrentObjectStackCache();
	$init($Code$1);
	switch ($nc($Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(type)->getTag())))->ordinal())) {
	case 1:
		{
			return 8;
		}
	case 8:
		{
			return 4;
		}
	case 2:
		{
			return 9;
		}
	case 3:
		{
			return 5;
		}
	case 4:
		{
			return 10;
		}
	case 5:
		{
			return 11;
		}
	case 6:
		{
			return 6;
		}
	case 7:
		{
			return 7;
		}
	case 10:
		{
			return 0;
		}
	case 11:
		{
			return 1;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"arraycode "_s, type})));
		}
	}
}

int32_t Code::curCP() {
	if (this->pendingJumps != nullptr) {
		resolvePending();
	}
	if (this->pendingStatPos != $Position::NOPOS) {
		markStatBegin();
	}
	this->fixedPc = true;
	return this->cp;
}

void Code::emit1(int32_t od) {
	if (!this->alive) {
		return;
	}
	$set(this, code, $ArrayUtils::ensureCapacity(this->code, this->cp));
	$nc(this->code)->set(this->cp++, (int8_t)od);
}

void Code::emit2(int32_t od) {
	if (!this->alive) {
		return;
	}
	if (this->cp + 2 > $nc(this->code)->length) {
		emit1(od >> 8);
		emit1(od);
	} else {
		$nc(this->code)->set(this->cp++, (int8_t)(od >> 8));
		$nc(this->code)->set(this->cp++, (int8_t)od);
	}
}

void Code::emit4(int32_t od) {
	if (!this->alive) {
		return;
	}
	if (this->cp + 4 > $nc(this->code)->length) {
		emit1(od >> 24);
		emit1(od >> 16);
		emit1(od >> 8);
		emit1(od);
	} else {
		$nc(this->code)->set(this->cp++, (int8_t)(od >> 24));
		$nc(this->code)->set(this->cp++, (int8_t)(od >> 16));
		$nc(this->code)->set(this->cp++, (int8_t)(od >> 8));
		$nc(this->code)->set(this->cp++, (int8_t)od);
	}
}

void Code::emitop(int32_t op) {
	$useLocalCurrentObjectStackCache();
	if (this->pendingJumps != nullptr) {
		resolvePending();
	}
	if (this->alive) {
		if (this->pendingStatPos != $Position::NOPOS) {
			markStatBegin();
		}
		if (this->pendingStackMap) {
			this->pendingStackMap = false;
			emitStackMap();
		}
		if (this->debugCode) {
			$nc($System::err)->println($$str({"emit@"_s, $$str(this->cp), " stack="_s, $$str($nc(this->state)->stacksize), ": "_s, $(mnem(op))}));
		}
		emit1(op);
	}
}

void Code::postop() {
	$Assert::check(this->alive || isStatementStart());
}

void Code::emitLdc($PoolConstant$LoadableConstant* constant) {
	int32_t od = $nc(this->poolWriter)->putConstant(constant);
	if (od <= 255) {
		emitop1(18, od, constant);
	} else {
		emitop2(19, od, static_cast<$PoolConstant*>(constant));
	}
}

void Code::emitMultianewarray(int32_t ndims, int32_t type, $Type* arrayType) {
	emitop(197);
	if (!this->alive) {
		return;
	}
	emit2(type);
	emit1(ndims);
	$nc(this->state)->pop(ndims);
	$nc(this->state)->push(arrayType);
}

void Code::emitNewarray(int32_t elemcode, $Type* arrayType) {
	emitop(188);
	if (!this->alive) {
		return;
	}
	emit1(elemcode);
	$nc(this->state)->pop(1);
	$nc(this->state)->push(arrayType);
}

void Code::emitAnewarray(int32_t od, $Type* arrayType) {
	emitop(189);
	if (!this->alive) {
		return;
	}
	emit2(od);
	$nc(this->state)->pop(1);
	$nc(this->state)->push(arrayType);
}

void Code::emitInvokeinterface($Symbol* member, $Type* mtype) {
	$useLocalCurrentObjectStackCache();
	int32_t argsize = width($($nc(mtype)->getParameterTypes()));
	emitop(185);
	if (!this->alive) {
		return;
	}
	emit2($nc(this->poolWriter)->putMember(member));
	emit1(argsize + 1);
	emit1(0);
	$nc(this->state)->pop(argsize + 1);
	$nc(this->state)->push($($nc(mtype)->getReturnType()));
}

void Code::emitInvokespecial($Symbol* member, $Type* mtype) {
	$useLocalCurrentObjectStackCache();
	int32_t argsize = width($($nc(mtype)->getParameterTypes()));
	emitop(183);
	if (!this->alive) {
		return;
	}
	emit2($nc(this->poolWriter)->putMember(member));
	$nc(this->state)->pop(argsize);
	if ($nc(member)->isConstructor()) {
		$nc(this->state)->markInitialized($cast($UninitializedType, $($nc(this->state)->peek())));
	}
	$nc(this->state)->pop(1);
	$nc(this->state)->push($($nc(mtype)->getReturnType()));
}

void Code::emitInvokestatic($Symbol* member, $Type* mtype) {
	$useLocalCurrentObjectStackCache();
	int32_t argsize = width($($nc(mtype)->getParameterTypes()));
	emitop(184);
	if (!this->alive) {
		return;
	}
	emit2($nc(this->poolWriter)->putMember(member));
	$nc(this->state)->pop(argsize);
	$nc(this->state)->push($($nc(mtype)->getReturnType()));
}

void Code::emitInvokevirtual($Symbol* member, $Type* mtype) {
	$useLocalCurrentObjectStackCache();
	int32_t argsize = width($($nc(mtype)->getParameterTypes()));
	emitop(182);
	if (!this->alive) {
		return;
	}
	emit2($nc(this->poolWriter)->putMember(member));
	$nc(this->state)->pop(argsize + 1);
	$nc(this->state)->push($($nc(mtype)->getReturnType()));
}

void Code::emitInvokedynamic($Symbol$DynamicMethodSymbol* dynMember, $Type* mtype) {
	$useLocalCurrentObjectStackCache();
	int32_t argsize = width($($nc(mtype)->getParameterTypes()));
	emitop(186);
	if (!this->alive) {
		return;
	}
	emit2($nc(this->poolWriter)->putDynamic(dynMember));
	emit2(0);
	$nc(this->state)->pop(argsize);
	$nc(this->state)->push($($nc(mtype)->getReturnType()));
}

void Code::emitop0(int32_t op) {
	$useLocalCurrentObjectStackCache();
	emitop(op);
	if (!this->alive) {
		return;
	}
	switch (op) {
	case 50:
		{
			{
				$nc(this->state)->pop(1);
				$var($Type, a, $nc($nc(this->state)->stack)->get($nc(this->state)->stacksize - 1));
				$init($TypeTag);
				$Assert::check(!$nc(a)->hasTag($TypeTag::BOT));
				$nc(this->state)->pop(1);
				$nc(this->state)->push($($nc(this->types)->erasure($($nc(this->types)->elemtype(a)))));
			}
			break;
		}
	case 167:
		{
			markDead();
			break;
		}
	case 0:
		{}
	case 116:
		{}
	case 117:
		{}
	case 118:
		{}
	case 119:
		{
			break;
		}
	case 1:
		{
			$nc(this->state)->push($nc(this->syms)->botType);
			break;
		}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{}
	case 7:
		{}
	case 8:
		{}
	case 26:
		{}
	case 27:
		{}
	case 28:
		{}
	case 29:
		{
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 9:
		{}
	case 10:
		{}
	case 30:
		{}
	case 31:
		{}
	case 32:
		{}
	case 33:
		{
			$nc(this->state)->push($nc(this->syms)->longType);
			break;
		}
	case 11:
		{}
	case 12:
		{}
	case 13:
		{}
	case 34:
		{}
	case 35:
		{}
	case 36:
		{}
	case 37:
		{
			$nc(this->state)->push($nc(this->syms)->floatType);
			break;
		}
	case 14:
		{}
	case 15:
		{}
	case 38:
		{}
	case 39:
		{}
	case 40:
		{}
	case 41:
		{
			$nc(this->state)->push($nc(this->syms)->doubleType);
			break;
		}
	case 42:
		{
			$nc(this->state)->push($nc($nc($nc(this->lvar)->get(0))->sym)->type);
			break;
		}
	case 43:
		{
			$nc(this->state)->push($nc($nc($nc(this->lvar)->get(1))->sym)->type);
			break;
		}
	case 44:
		{
			$nc(this->state)->push($nc($nc($nc(this->lvar)->get(2))->sym)->type);
			break;
		}
	case 45:
		{
			$nc(this->state)->push($nc($nc($nc(this->lvar)->get(3))->sym)->type);
			break;
		}
	case 46:
		{}
	case 51:
		{}
	case 52:
		{}
	case 53:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 47:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->longType);
			break;
		}
	case 48:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->floatType);
			break;
		}
	case 49:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->doubleType);
			break;
		}
	case 59:
		{}
	case 60:
		{}
	case 61:
		{}
	case 62:
		{}
	case 67:
		{}
	case 68:
		{}
	case 69:
		{}
	case 70:
		{}
	case 75:
		{}
	case 76:
		{}
	case 77:
		{}
	case 78:
		{}
	case 87:
		{}
	case 123:
		{}
	case 121:
		{}
	case 125:
		{
			$nc(this->state)->pop(1);
			break;
		}
	case 176:
		{}
	case 172:
		{}
	case 174:
		{
			$Assert::check($nc(this->state)->nlocks == 0);
			$nc(this->state)->pop(1);
			markDead();
			break;
		}
	case 191:
		{
			$nc(this->state)->pop(1);
			markDead();
			break;
		}
	case 63:
		{}
	case 64:
		{}
	case 65:
		{}
	case 66:
		{}
	case 71:
		{}
	case 72:
		{}
	case 73:
		{}
	case 74:
		{}
	case 88:
		{
			$nc(this->state)->pop(2);
			break;
		}
	case 173:
		{}
	case 175:
		{
			$Assert::check($nc(this->state)->nlocks == 0);
			$nc(this->state)->pop(2);
			markDead();
			break;
		}
	case 89:
		{
			$nc(this->state)->push($nc($nc(this->state)->stack)->get($nc(this->state)->stacksize - 1));
			break;
		}
	case 177:
		{
			$Assert::check($nc(this->state)->nlocks == 0);
			markDead();
			break;
		}
	case 190:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 100:
		{}
	case 96:
		{}
	case 104:
		{}
	case 108:
		{}
	case 112:
		{}
	case 120:
		{}
	case 122:
		{}
	case 124:
		{}
	case 126:
		{}
	case 128:
		{}
	case 130:
		{
			$nc(this->state)->pop(1);
			break;
		}
	case 83:
		{
			$nc(this->state)->pop(3);
			break;
		}
	case 127:
		{}
	case 129:
		{}
	case 131:
		{}
	case 113:
		{}
	case 109:
		{}
	case 105:
		{}
	case 101:
		{}
	case 97:
		{
			$nc(this->state)->pop(2);
			break;
		}
	case 148:
		{
			$nc(this->state)->pop(4);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 136:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 133:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($nc(this->syms)->longType);
			break;
		}
	case 134:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($nc(this->syms)->floatType);
			break;
		}
	case 135:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($nc(this->syms)->doubleType);
			break;
		}
	case 137:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->floatType);
			break;
		}
	case 138:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->doubleType);
			break;
		}
	case 139:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 140:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($nc(this->syms)->longType);
			break;
		}
	case 141:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($nc(this->syms)->doubleType);
			break;
		}
	case 142:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 143:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->longType);
			break;
		}
	case 144:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->floatType);
			break;
		}
	case 170:
		{}
	case 171:
		{
			$nc(this->state)->pop(1);
			break;
		}
	case 90:
		{
			{
				$var($Type, val1, $nc(this->state)->pop1());
				$var($Type, val2, $nc(this->state)->pop1());
				$nc(this->state)->push(val1);
				$nc(this->state)->push(val2);
				$nc(this->state)->push(val1);
				break;
			}
		}
	case 84:
		{
			$nc(this->state)->pop(3);
			break;
		}
	case 145:
		{}
	case 146:
		{}
	case 147:
		{
			break;
		}
	case 106:
		{}
	case 98:
		{}
	case 102:
		{}
	case 110:
		{}
	case 114:
		{
			$nc(this->state)->pop(1);
			break;
		}
	case 85:
		{}
	case 79:
		{}
	case 81:
		{}
	case 86:
		{
			$nc(this->state)->pop(3);
			break;
		}
	case 80:
		{}
	case 82:
		{
			$nc(this->state)->pop(4);
			break;
		}
	case 92:
		{
			if ($nc($nc(this->state)->stack)->get($nc(this->state)->stacksize - 1) != nullptr) {
				$var($Type, value1, $nc(this->state)->pop1());
				$var($Type, value2, $nc(this->state)->pop1());
				$nc(this->state)->push(value2);
				$nc(this->state)->push(value1);
				$nc(this->state)->push(value2);
				$nc(this->state)->push(value1);
			} else {
				$var($Type, value, $nc(this->state)->pop2());
				$nc(this->state)->push(value);
				$nc(this->state)->push(value);
			}
			break;
		}
	case 93:
		{
			if ($nc($nc(this->state)->stack)->get($nc(this->state)->stacksize - 1) != nullptr) {
				$var($Type, value1, $nc(this->state)->pop1());
				$var($Type, value2, $nc(this->state)->pop1());
				$var($Type, value3, $nc(this->state)->pop1());
				$nc(this->state)->push(value2);
				$nc(this->state)->push(value1);
				$nc(this->state)->push(value3);
				$nc(this->state)->push(value2);
				$nc(this->state)->push(value1);
			} else {
				$var($Type, value1, $nc(this->state)->pop2());
				$var($Type, value2, $nc(this->state)->pop1());
				$nc(this->state)->push(value1);
				$nc(this->state)->push(value2);
				$nc(this->state)->push(value1);
			}
			break;
		}
	case 94:
		{
			if ($nc($nc(this->state)->stack)->get($nc(this->state)->stacksize - 1) != nullptr) {
				$var($Type, value1, $nc(this->state)->pop1());
				$var($Type, value2, $nc(this->state)->pop1());
				if ($nc($nc(this->state)->stack)->get($nc(this->state)->stacksize - 1) != nullptr) {
					$var($Type, value3, $nc(this->state)->pop1());
					$var($Type, value4, $nc(this->state)->pop1());
					$nc(this->state)->push(value2);
					$nc(this->state)->push(value1);
					$nc(this->state)->push(value4);
					$nc(this->state)->push(value3);
					$nc(this->state)->push(value2);
					$nc(this->state)->push(value1);
				} else {
					$var($Type, value3, $nc(this->state)->pop2());
					$nc(this->state)->push(value2);
					$nc(this->state)->push(value1);
					$nc(this->state)->push(value3);
					$nc(this->state)->push(value2);
					$nc(this->state)->push(value1);
				}
			} else {
				$var($Type, value1, $nc(this->state)->pop2());
				if ($nc($nc(this->state)->stack)->get($nc(this->state)->stacksize - 1) != nullptr) {
					$var($Type, value2, $nc(this->state)->pop1());
					$var($Type, value3, $nc(this->state)->pop1());
					$nc(this->state)->push(value1);
					$nc(this->state)->push(value3);
					$nc(this->state)->push(value2);
					$nc(this->state)->push(value1);
				} else {
					$var($Type, value2, $nc(this->state)->pop2());
					$nc(this->state)->push(value1);
					$nc(this->state)->push(value2);
					$nc(this->state)->push(value1);
				}
			}
			break;
		}
	case 91:
		{
			{
				$var($Type, value1, $nc(this->state)->pop1());
				if ($nc($nc(this->state)->stack)->get($nc(this->state)->stacksize - 1) != nullptr) {
					$var($Type, value2, $nc(this->state)->pop1());
					$var($Type, value3, $nc(this->state)->pop1());
					$nc(this->state)->push(value1);
					$nc(this->state)->push(value3);
					$nc(this->state)->push(value2);
					$nc(this->state)->push(value1);
				} else {
					$var($Type, value2, $nc(this->state)->pop2());
					$nc(this->state)->push(value1);
					$nc(this->state)->push(value2);
					$nc(this->state)->push(value1);
				}
			}
			break;
		}
	case 149:
		{}
	case 150:
		{
			$nc(this->state)->pop(2);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 151:
		{}
	case 152:
		{
			$nc(this->state)->pop(4);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 95:
		{
			{
				$var($Type, value1, $nc(this->state)->pop1());
				$var($Type, value2, $nc(this->state)->pop1());
				$nc(this->state)->push(value1);
				$nc(this->state)->push(value2);
				break;
			}
		}
	case 99:
		{}
	case 103:
		{}
	case 107:
		{}
	case 111:
		{}
	case 115:
		{
			$nc(this->state)->pop(2);
			break;
		}
	case 169:
		{
			markDead();
			break;
		}
	case 196:
		{
			return;
		}
	case 194:
		{}
	case 195:
		{
			$nc(this->state)->pop(1);
			break;
		}
	default:
		{
			$throwNew($AssertionError, $($of(mnem(op))));
		}
	}
	postop();
}

void Code::emitop1(int32_t op, int32_t od) {
	emitop1(op, od, nullptr);
}

void Code::emitop1(int32_t op, int32_t od, $PoolConstant* data) {
	$useLocalCurrentObjectStackCache();
	emitop(op);
	if (!this->alive) {
		return;
	}
	emit1(od);
	switch (op) {
	case 16:
		{
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 18:
		{
			$nc(this->state)->push($($nc(this->types)->constantType($cast($PoolConstant$LoadableConstant, data))));
			break;
		}
	default:
		{
			$throwNew($AssertionError, $($of(mnem(op))));
		}
	}
	postop();
}

void Code::emitop1w(int32_t op, int32_t od) {
	if (od > 255) {
		emitop(196);
		emitop(op);
		emit2(od);
	} else {
		emitop(op);
		emit1(od);
	}
	if (!this->alive) {
		return;
	}
	switch (op) {
	case 21:
		{
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 22:
		{
			$nc(this->state)->push($nc(this->syms)->longType);
			break;
		}
	case 23:
		{
			$nc(this->state)->push($nc(this->syms)->floatType);
			break;
		}
	case 24:
		{
			$nc(this->state)->push($nc(this->syms)->doubleType);
			break;
		}
	case 25:
		{
			$nc(this->state)->push($nc($nc($nc(this->lvar)->get(od))->sym)->type);
			break;
		}
	case 55:
		{}
	case 57:
		{
			$nc(this->state)->pop(2);
			break;
		}
	case 54:
		{}
	case 56:
		{}
	case 58:
		{
			$nc(this->state)->pop(1);
			break;
		}
	case 169:
		{
			markDead();
			break;
		}
	default:
		{
			$throwNew($AssertionError, $($of(mnem(op))));
		}
	}
	postop();
}

void Code::emitop1w(int32_t op, int32_t od1, int32_t od2) {
	if (od1 > 255 || od2 < -128 || od2 > 127) {
		emitop(196);
		emitop(op);
		emit2(od1);
		emit2(od2);
	} else {
		emitop(op);
		emit1(od1);
		emit1(od2);
	}
	if (!this->alive) {
		return;
	}
	switch (op) {
	case 132:
		{
			break;
		}
	default:
		{
			$throwNew($AssertionError, $($of(mnem(op))));
		}
	}
}

void Code::emitop2(int32_t op, $PoolConstant* constant, $ToIntBiFunction* poolFunc) {
	int32_t od = $nc(poolFunc)->applyAsInt(this->poolWriter, constant);
	emitop2(op, od, constant);
}

void Code::emitop2(int32_t op, int32_t od) {
	emitop2(op, od, ($PoolConstant*)nullptr);
}

void Code::emitop2(int32_t op, int32_t od, $PoolConstant* data) {
	$useLocalCurrentObjectStackCache();
	emitop(op);
	if (!this->alive) {
		return;
	}
	emit2(od);
	switch (op) {
	case 178:
		{
			$nc(this->state)->push($($nc(($cast($Symbol, data)))->erasure(this->types)));
			break;
		}
	case 179:
		{
			$nc(this->state)->pop($($nc(($cast($Symbol, data)))->erasure(this->types)));
			break;
		}
	case 187:
		{
			{
				$var($Type, t, $cast($Type, data));
				$nc(this->state)->push($($UninitializedType::uninitializedObject($($nc($nc(t)->tsym)->erasure(this->types)), this->cp - 3)));
				break;
			}
		}
	case 17:
		{
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 198:
		{}
	case 199:
		{}
	case 153:
		{}
	case 154:
		{}
	case 155:
		{}
	case 156:
		{}
	case 157:
		{}
	case 158:
		{
			$nc(this->state)->pop(1);
			break;
		}
	case 159:
		{}
	case 160:
		{}
	case 161:
		{}
	case 162:
		{}
	case 163:
		{}
	case 164:
		{}
	case 165:
		{}
	case 166:
		{
			$nc(this->state)->pop(2);
			break;
		}
	case 167:
		{
			markDead();
			break;
		}
	case 181:
		{
			$nc(this->state)->pop($($nc(($cast($Symbol, data)))->erasure(this->types)));
			$nc(this->state)->pop(1);
			break;
		}
	case 180:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($($nc(($cast($Symbol, data)))->erasure(this->types)));
			break;
		}
	case 192:
		{
			{
				$nc(this->state)->pop(1);
				$var($Type, t, $nc(this->types)->erasure($cast($Type, data)));
				$nc(this->state)->push(t);
				break;
			}
		}
	case 20:
		{
			$nc(this->state)->push($($nc(this->types)->constantType($cast($PoolConstant$LoadableConstant, data))));
			break;
		}
	case 193:
		{
			$nc(this->state)->pop(1);
			$nc(this->state)->push($nc(this->syms)->intType);
			break;
		}
	case 19:
		{
			$nc(this->state)->push($($nc(this->types)->constantType($cast($PoolConstant$LoadableConstant, data))));
			break;
		}
	case 168:
		{
			break;
		}
	default:
		{
			$throwNew($AssertionError, $($of(mnem(op))));
		}
	}
}

void Code::emitop4(int32_t op, int32_t od) {
	emitop(op);
	if (!this->alive) {
		return;
	}
	emit4(od);
	switch (op) {
	case 200:
		{
			markDead();
			break;
		}
	case 201:
		{
			break;
		}
	default:
		{
			$throwNew($AssertionError, $($of(mnem(op))));
		}
	}
}

void Code::align(int32_t incr) {
	if (this->alive) {
		while ($mod(this->cp, incr) != 0) {
			emitop0(0);
		}
	}
}

void Code::put1(int32_t pc, int32_t op) {
	$nc(this->code)->set(pc, (int8_t)op);
}

void Code::put2(int32_t pc, int32_t od) {
	put1(pc, od >> 8);
	put1(pc + 1, od);
}

void Code::put4(int32_t pc, int32_t od) {
	put1(pc, od >> 24);
	put1(pc + 1, od >> 16);
	put1(pc + 2, od >> 8);
	put1(pc + 3, od);
}

int32_t Code::get1(int32_t pc) {
	return (int32_t)($nc(this->code)->get(pc) & (uint32_t)255);
}

int32_t Code::get2(int32_t pc) {
	int32_t var$0 = (get1(pc) << 8);
	return var$0 | get1(pc + 1);
}

int32_t Code::get4(int32_t pc) {
	int32_t var$2 = (get1(pc) << 24);
	int32_t var$1 = var$2 | (get1(pc + 1) << 16);
	int32_t var$0 = var$1 | (get1(pc + 2) << 8);
	return var$0 | (get1(pc + 3));
}

bool Code::isAlive() {
	return this->alive || this->pendingJumps != nullptr;
}

void Code::markDead() {
	this->alive = false;
}

int32_t Code::entryPoint() {
	int32_t pc = curCP();
	this->alive = true;
	this->pendingStackMap = this->needStackMap;
	return pc;
}

int32_t Code::entryPoint($Code$State* state) {
	$useLocalCurrentObjectStackCache();
	int32_t pc = curCP();
	this->alive = true;
	$var($Code$State, newState, $nc(state)->dup());
	setDefined($nc(newState)->defined);
	$set(this, state, newState);
	$Assert::check(state->stacksize <= this->max_stack);
	if (this->debugCode) {
		$nc($System::err)->println($$str({"entry point "_s, state}));
	}
	this->pendingStackMap = this->needStackMap;
	return pc;
}

int32_t Code::entryPoint($Code$State* state, $Type* pushed) {
	$useLocalCurrentObjectStackCache();
	int32_t pc = curCP();
	this->alive = true;
	$var($Code$State, newState, $nc(state)->dup());
	setDefined($nc(newState)->defined);
	$set(this, state, newState);
	$Assert::check(state->stacksize <= this->max_stack);
	$nc(this->state)->push(pushed);
	if (this->debugCode) {
		$nc($System::err)->println($$str({"entry point "_s, state}));
	}
	this->pendingStackMap = this->needStackMap;
	return pc;
}

int32_t Code::setLetExprStackPos(int32_t pos) {
	int32_t res = this->letExprStackPos;
	this->letExprStackPos = pos;
	return res;
}

bool Code::isStatementStart() {
	return !this->alive || $nc(this->state)->stacksize == this->letExprStackPos;
}

void Code::emitStackMap() {
	int32_t pc = curCP();
	if (!this->needStackMap) {
		return;
	}
	$init($Code$1);
	switch ($nc($Code$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat)->get($nc((this->stackMap))->ordinal())) {
	case 1:
		{
			emitCLDCStackMap(pc, getLocalsSize());
			break;
		}
	case 2:
		{
			emitStackMapFrame(pc, getLocalsSize());
			break;
		}
	default:
		{
			$throwNew($AssertionError, $of("Should have chosen a stackmap format"_s));
		}
	}
	if (this->debugCode) {
		$nc(this->state)->dump(pc);
	}
}

int32_t Code::getLocalsSize() {
	$useLocalCurrentObjectStackCache();
	int32_t nextLocal = 0;
	for (int32_t i = this->max_locals - 1; i >= 0; --i) {
		if ($nc($nc(this->state)->defined)->isMember(i) && $nc(this->lvar)->get(i) != nullptr) {
			nextLocal = i + width($($nc($nc($nc(this->lvar)->get(i))->sym)->erasure(this->types)));
			break;
		}
	}
	return nextLocal;
}

void Code::emitCLDCStackMap(int32_t pc, int32_t localsSize) {
	$useLocalCurrentObjectStackCache();
	if (this->lastStackMapPC == pc) {
		$nc(this->stackMapBuffer)->set(--this->stackMapBufferSize, nullptr);
	}
	this->lastStackMapPC = pc;
	if (this->stackMapBuffer == nullptr) {
		$set(this, stackMapBuffer, $new($Code$StackMapFrameArray, 20));
	} else {
		$set(this, stackMapBuffer, $fcast($Code$StackMapFrameArray, $ArrayUtils::ensureCapacity(this->stackMapBuffer, this->stackMapBufferSize)));
	}
	$var($Code$StackMapFrame, frame, $nc(this->stackMapBuffer)->set(this->stackMapBufferSize++, $$new($Code$StackMapFrame)));
	$nc(frame)->pc = pc;
	$set(frame, locals, $new($TypeArray, localsSize));
	for (int32_t i = 0; i < localsSize; ++i) {
		if ($nc($nc(this->state)->defined)->isMember(i) && $nc(this->lvar)->get(i) != nullptr) {
			$var($Type, vtype, $nc($nc($nc(this->lvar)->get(i))->sym)->type);
			if (!($instanceOf($UninitializedType, vtype))) {
				$assign(vtype, $nc(this->types)->erasure(vtype));
			}
			$nc(frame->locals)->set(i, vtype);
		}
	}
	$set(frame, stack, $new($TypeArray, $nc(this->state)->stacksize));
	for (int32_t i = 0; i < $nc(this->state)->stacksize; ++i) {
		$nc(frame->stack)->set(i, $nc($nc(this->state)->stack)->get(i));
	}
}

void Code::emitStackMapFrame(int32_t pc, int32_t localsSize) {
	$useLocalCurrentObjectStackCache();
	if (this->lastFrame == nullptr) {
		$set(this, lastFrame, getInitialFrame());
	} else if ($nc(this->lastFrame)->pc == pc) {
		$nc(this->stackMapTableBuffer)->set(--this->stackMapBufferSize, nullptr);
		$set(this, lastFrame, this->frameBeforeLast);
		$set(this, frameBeforeLast, nullptr);
	}
	$var($Code$StackMapFrame, frame, $new($Code$StackMapFrame));
	frame->pc = pc;
	int32_t localCount = 0;
	$var($TypeArray, locals, $new($TypeArray, localsSize));
	for (int32_t i = 0; i < localsSize; ++i, ++localCount) {
		if ($nc($nc(this->state)->defined)->isMember(i) && $nc(this->lvar)->get(i) != nullptr) {
			$var($Type, vtype, $nc($nc($nc(this->lvar)->get(i))->sym)->type);
			if (!($instanceOf($UninitializedType, vtype))) {
				$assign(vtype, $nc(this->types)->erasure(vtype));
			}
			locals->set(i, vtype);
			if (width(vtype) > 1) {
				++i;
			}
		}
	}
	$set(frame, locals, $new($TypeArray, localCount));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < localsSize; ++i, ++j) {
			$Assert::check(j < localCount);
			$nc(frame->locals)->set(j, locals->get(i));
			if (width(locals->get(i)) > 1) {
				++i;
			}
		}
	}
	int32_t stackCount = 0;
	for (int32_t i = 0; i < $nc(this->state)->stacksize; ++i) {
		if ($nc($nc(this->state)->stack)->get(i) != nullptr) {
			++stackCount;
		}
	}
	$set(frame, stack, $new($TypeArray, stackCount));
	stackCount = 0;
	for (int32_t i = 0; i < $nc(this->state)->stacksize; ++i) {
		if ($nc($nc(this->state)->stack)->get(i) != nullptr) {
			$nc(frame->stack)->set(stackCount++, $($nc(this->types)->erasure($nc($nc(this->state)->stack)->get(i))));
		}
	}
	if (this->stackMapTableBuffer == nullptr) {
		$set(this, stackMapTableBuffer, $new($ClassWriter$StackMapTableFrameArray, 20));
	} else {
		$set(this, stackMapTableBuffer, $fcast($ClassWriter$StackMapTableFrameArray, $ArrayUtils::ensureCapacity(this->stackMapTableBuffer, this->stackMapBufferSize)));
	}
	$nc(this->stackMapTableBuffer)->set(this->stackMapBufferSize++, $($ClassWriter$StackMapTableFrame::getInstance(frame, $nc(this->lastFrame)->pc, $nc(this->lastFrame)->locals, this->types)));
	$set(this, frameBeforeLast, this->lastFrame);
	$set(this, lastFrame, frame);
}

$Code$StackMapFrame* Code::getInitialFrame() {
	$useLocalCurrentObjectStackCache();
	$var($Code$StackMapFrame, frame, $new($Code$StackMapFrame));
	$var($List, arg_types, $nc(($cast($Type$MethodType, $($nc(this->meth)->externalType(this->types)))))->argtypes$);
	int32_t len = $nc(arg_types)->length();
	int32_t count = 0;
	if (!$nc(this->meth)->isStatic()) {
		$var($Type, thisType, $nc($nc(this->meth)->owner)->type);
		$set(frame, locals, $new($TypeArray, len + 1));
		if ($nc(this->meth)->isConstructor() && thisType != $nc(this->syms)->objectType) {
			$nc(frame->locals)->set(count++, $($UninitializedType::uninitializedThis(thisType)));
		} else {
			$nc(frame->locals)->set(count++, $($nc(this->types)->erasure(thisType)));
		}
	} else {
		$set(frame, locals, $new($TypeArray, len));
	}
	{
		$var($Iterator, i$, arg_types->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, arg_type, $cast($Type, i$->next()));
			{
				$nc(frame->locals)->set(count++, $($nc(this->types)->erasure(arg_type)));
			}
		}
	}
	frame->pc = -1;
	$set(frame, stack, nullptr);
	return frame;
}

int32_t Code::negate(int32_t opcode) {
	$init(Code);
	if (opcode == 198) {
		return 199;
	} else if (opcode == 199) {
		return 198;
	} else {
		return ((opcode + 1) ^ 1) - 1;
	}
}

int32_t Code::emitJump(int32_t opcode) {
	if (this->fatcode) {
		if (opcode == 167 || opcode == 168) {
			emitop4(opcode + 200 - 167, 0);
		} else {
			emitop2(negate(opcode), 8);
			emitop4(200, 0);
			this->alive = true;
			this->pendingStackMap = this->needStackMap;
		}
		return this->cp - 5;
	} else {
		emitop2(opcode, 0);
		return this->cp - 3;
	}
}

$Code$Chain* Code::branch(int32_t opcode) {
	$useLocalCurrentObjectStackCache();
	$var($Code$Chain, result, nullptr);
	if (opcode == 167) {
		$assign(result, this->pendingJumps);
		$set(this, pendingJumps, nullptr);
	}
	if (opcode != 168 && isAlive()) {
		int32_t var$0 = emitJump(opcode);
		$var($Code$Chain, var$1, result);
		$assign(result, $new($Code$Chain, var$0, var$1, $($nc(this->state)->dup())));
		this->fixedPc = this->fatcode;
		if (opcode == 167) {
			this->alive = false;
		}
	}
	return result;
}

void Code::resolve($Code$Chain* chain$renamed, int32_t target) {
	$useLocalCurrentObjectStackCache();
	$var($Code$Chain, chain, chain$renamed);
	bool changed = false;
	$var($Code$State, newState, this->state);
	for (; chain != nullptr; $assign(chain, $nc(chain)->next)) {
		$Assert::check(this->state != chain->state && (target > chain->pc || isStatementStart()));
		if (target >= this->cp) {
			target = this->cp;
		} else if (get1(target) == 167) {
			if (this->fatcode) {
				target = target + get4(target + 1);
			} else {
				target = target + get2(target + 1);
			}
		}
		if (get1(chain->pc) == 167 && chain->pc + 3 == target && target == this->cp && !this->fixedPc) {
			if (this->varDebugInfo) {
				adjustAliveRanges(this->cp, -3);
			}
			this->cp = this->cp - 3;
			target = target - 3;
			if (chain->next == nullptr) {
				this->alive = true;
				break;
			}
		} else {
			if (this->fatcode) {
				put4(chain->pc + 1, target - chain->pc);
			} else if (target - chain->pc < $Short::MIN_VALUE || target - chain->pc > $Short::MAX_VALUE) {
				this->fatcode = true;
			} else {
				put2(chain->pc + 1, target - chain->pc);
			}
			$Assert::check(!this->alive || $nc(chain->state)->stacksize == $nc(newState)->stacksize && $nc(chain->state)->nlocks == newState->nlocks);
		}
		this->fixedPc = true;
		if (this->cp == target) {
			changed = true;
			if (this->debugCode) {
				$nc($System::err)->println($$str({"resolving chain state="_s, chain->state}));
			}
			if (this->alive) {
				$assign(newState, $nc(chain->state)->join(newState));
			} else {
				$assign(newState, chain->state);
				this->alive = true;
			}
		}
	}
	$Assert::check(!changed || this->state != newState);
	if (this->state != newState) {
		setDefined($nc(newState)->defined);
		$set(this, state, newState);
		this->pendingStackMap = this->needStackMap;
	}
}

void Code::resolve($Code$Chain* chain) {
	$Assert::check(!this->alive || chain == nullptr || $nc(this->state)->stacksize == $nc($nc(chain)->state)->stacksize && $nc(this->state)->nlocks == $nc(chain->state)->nlocks);
	$set(this, pendingJumps, mergeChains(chain, this->pendingJumps));
}

void Code::resolvePending() {
	$var($Code$Chain, x, this->pendingJumps);
	$set(this, pendingJumps, nullptr);
	resolve(x, this->cp);
}

$Code$Chain* Code::mergeChains($Code$Chain* chain1, $Code$Chain* chain2) {
	$init(Code);
	$useLocalCurrentObjectStackCache();
	if (chain2 == nullptr) {
		return chain1;
	}
	if (chain1 == nullptr) {
		return chain2;
	}
	$Assert::check($nc($nc(chain1)->state)->stacksize == $nc($nc(chain2)->state)->stacksize && $nc(chain1->state)->nlocks == $nc(chain2->state)->nlocks);
	if ($nc(chain1)->pc < $nc(chain2)->pc) {
		return $new($Code$Chain, chain2->pc, $(mergeChains(chain1, chain2->next)), chain2->state);
	}
	return $new($Code$Chain, $nc(chain1)->pc, $(mergeChains(chain1->next, chain2)), chain1->state);
}

void Code::addCatch(char16_t startPc, char16_t endPc, char16_t handlerPc, char16_t catchType) {
	$nc(this->catchInfo)->append($$new($chars, {
		startPc,
		endPc,
		handlerPc,
		catchType
	}));
}

void Code::compressCatchTable() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, compressedCatchInfo, $new($ListBuffer));
	$var($List, handlerPcs, $List::nil());
	{
		$var($Iterator, i$, $nc(this->catchInfo)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($chars, catchEntry, $cast($chars, i$->next()));
			{
				$assign(handlerPcs, $nc(handlerPcs)->prepend($($Integer::valueOf((int32_t)$nc(catchEntry)->get(2)))));
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->catchInfo)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($chars, catchEntry, $cast($chars, i$->next()));
			{
				int32_t startpc = $nc(catchEntry)->get(0);
				int32_t endpc = catchEntry->get(1);
				if (startpc == endpc || (startpc == (endpc - 1) && $nc(handlerPcs)->contains($($Integer::valueOf(startpc))))) {
					continue;
				} else {
					compressedCatchInfo->append(catchEntry);
				}
			}
		}
	}
	$set(this, catchInfo, compressedCatchInfo);
}

void Code::addLineNumber(char16_t startPc, char16_t lineNumber) {
	if (this->lineDebugInfo) {
		if ($nc(this->lineInfo)->nonEmpty() && $nc(($cast($chars, $nc(this->lineInfo)->head)))->get(0) == startPc) {
			$set(this, lineInfo, $nc(this->lineInfo)->tail);
		}
		if ($nc(this->lineInfo)->isEmpty() || $nc(($cast($chars, $nc(this->lineInfo)->head)))->get(1) != lineNumber) {
			$set(this, lineInfo, $nc(this->lineInfo)->prepend($$new($chars, {
				startPc,
				lineNumber
			})));
		}
	}
}

void Code::statBegin(int32_t pos) {
	if (pos != $Position::NOPOS) {
		this->pendingStatPos = pos;
	}
}

void Code::markStatBegin() {
	if (this->alive && this->lineDebugInfo) {
		int32_t line = $nc(this->lineMap)->getLineNumber(this->pendingStatPos);
		char16_t cp1 = (char16_t)this->cp;
		char16_t line1 = (char16_t)line;
		if (cp1 == this->cp && line1 == line) {
			addLineNumber(cp1, line1);
		}
	}
	this->pendingStatPos = $Position::NOPOS;
}

void Code::addLocalVar($Symbol$VarSymbol* v) {
	int32_t adr = $nc(v)->adr;
	$set(this, lvar, $fcast($Code$LocalVarArray, $ArrayUtils::ensureCapacity(this->lvar, adr + 1)));
	$Assert::checkNull($nc(this->lvar)->get(adr));
	if (this->pendingJumps != nullptr) {
		resolvePending();
	}
	$nc(this->lvar)->set(adr, $$new($Code$LocalVar, v));
	$nc($nc(this->state)->defined)->excl(adr);
}

void Code::adjustAliveRanges(int32_t oldCP, int32_t delta) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Code$LocalVarArray, arr$, this->lvar);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Code$LocalVar, localVar, arr$->get(i$));
			{
				if (localVar != nullptr) {
					{
						$var($Iterator, i$, $nc(localVar->aliveRanges)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Code$LocalVar$Range, range, $cast($Code$LocalVar$Range, i$->next()));
							{
								if ($nc(range)->closed() && range->start_pc + range->length >= oldCP) {
									range->length += delta;
								}
							}
						}
					}
				}
			}
		}
	}
}

int32_t Code::getLVTSize() {
	$useLocalCurrentObjectStackCache();
	int32_t result = this->varBufferSize;
	for (int32_t i = 0; i < this->varBufferSize; ++i) {
		$var($Code$LocalVar, var, $nc(this->varBuffer)->get(i));
		result += $nc($nc(var)->aliveRanges)->size() - 1;
	}
	return result;
}

void Code::setDefined($Bits* newDefined) {
	$useLocalCurrentObjectStackCache();
	if (this->alive && newDefined != $nc(this->state)->defined) {
		$var($Bits, diff, $$new($Bits, $nc(this->state)->defined)->xorSet(newDefined));
		for (int32_t adr = $nc(diff)->nextBit(0); adr >= 0; adr = diff->nextBit(adr + 1)) {
			if (adr >= this->nextreg) {
				$nc($nc(this->state)->defined)->excl(adr);
			} else if ($nc($nc(this->state)->defined)->isMember(adr)) {
				setUndefined(adr);
			} else {
				setDefined(adr);
			}
		}
	}
}

void Code::setDefined(int32_t adr) {
	$var($Code$LocalVar, v, $nc(this->lvar)->get(adr));
	if (v == nullptr) {
		$nc($nc(this->state)->defined)->excl(adr);
	} else {
		$nc($nc(this->state)->defined)->incl(adr);
		if (this->cp < $Character::MAX_VALUE) {
			$nc(v)->openRange((char16_t)this->cp);
		}
	}
}

void Code::setUndefined(int32_t adr) {
	$useLocalCurrentObjectStackCache();
	$nc($nc(this->state)->defined)->excl(adr);
	if (adr < $nc(this->lvar)->length && $nc(this->lvar)->get(adr) != nullptr && $nc($nc(this->lvar)->get(adr))->isLastRangeInitialized()) {
		$var($Code$LocalVar, v, $nc(this->lvar)->get(adr));
		int32_t var$0 = curCP();
		char16_t length = (char16_t)(var$0 - $nc($($nc(v)->lastRange()))->start_pc);
		if (length < $Character::MAX_VALUE) {
			$nc(this->lvar)->set(adr, $(v->dup()));
			v->closeRange(length);
			putVar(v);
			fillLocalVarPosition(v);
		} else {
			v->removeLastRange();
		}
	}
}

void Code::endScope(int32_t adr) {
	$useLocalCurrentObjectStackCache();
	$var($Code$LocalVar, v, $nc(this->lvar)->get(adr));
	if (v != nullptr) {
		if (v->isLastRangeInitialized()) {
			int32_t var$0 = curCP();
			char16_t length = (char16_t)(var$0 - $nc($(v->lastRange()))->start_pc);
			if (length < $Character::MAX_VALUE) {
				v->closeRange(length);
				putVar(v);
				fillLocalVarPosition(v);
			}
		}
		$nc(this->lvar)->set(adr, nullptr);
	}
	$nc($nc(this->state)->defined)->excl(adr);
}

void Code::fillLocalVarPosition($Code$LocalVar* lv) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = lv == nullptr || $nc(lv)->sym == nullptr || $nc($nc(lv)->sym)->isExceptionParameter();
	if (var$0 || !$nc($nc(lv)->sym)->hasTypeAnnotations()) {
		return;
	}
	$var($Code$LocalVar$RangeArray, validRanges, $fcast($Code$LocalVar$RangeArray, $nc($($nc($($nc($nc(lv)->aliveRanges)->stream()))->filter(static_cast<$Predicate*>($$new(Code$$Lambda$lambda$fillLocalVarPosition$0)))))->toArray(static_cast<$IntFunction*>($$new(Code$$Lambda$lambda$fillLocalVarPosition$1$1)))));
	if ($nc(validRanges)->length == 0) {
		return;
	}
	$var($ints, lvarOffset, $nc($($nc($($Arrays::stream(validRanges)))->mapToInt(static_cast<$ToIntFunction*>($$new(Code$$Lambda$lambda$fillLocalVarPosition$2$2)))))->toArray());
	$var($ints, lvarLength, $nc($($nc($($Arrays::stream(validRanges)))->mapToInt(static_cast<$ToIntFunction*>($$new(Code$$Lambda$lambda$fillLocalVarPosition$3$3)))))->toArray());
	$var($ints, lvarIndex, $nc($($nc($($Arrays::stream(validRanges)))->mapToInt(static_cast<$ToIntFunction*>($$new(Code$$Lambda$lambda$fillLocalVarPosition$4$4, lv)))))->toArray());
	{
		$var($Iterator, i$, $nc($($nc(lv->sym)->getRawTypeAttributes()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, ta, $cast($Attribute$TypeCompound, i$->next()));
			{
				$var($TypeAnnotationPosition, p, $nc(ta)->position);
				$set($nc(p), lvarOffset, appendArray(p->lvarOffset, lvarOffset));
				$set(p, lvarLength, appendArray(p->lvarLength, lvarLength));
				$set(p, lvarIndex, appendArray(p->lvarIndex, lvarIndex));
				p->isValidOffset = true;
			}
		}
	}
}

$ints* Code::appendArray($ints* source, $ints* append) {
	if (source == nullptr || $nc(source)->length == 0) {
		return append;
	}
	$var($ints, result, $new($ints, $nc(source)->length + $nc(append)->length));
	$System::arraycopy(source, 0, result, 0, source->length);
	$System::arraycopy(append, 0, result, source->length, append->length);
	return result;
}

void Code::fillExceptionParameterPositions() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->varBufferSize; ++i) {
		$var($Code$LocalVar, lv, $nc(this->varBuffer)->get(i));
		bool var$0 = lv == nullptr || $nc(lv)->sym == nullptr || !$nc($nc(lv)->sym)->hasTypeAnnotations();
		if (var$0 || !$nc($nc(lv)->sym)->isExceptionParameter()) {
			continue;
		}
		{
			$var($Iterator, i$, $nc($($nc($nc(lv)->sym)->getRawTypeAttributes()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$TypeCompound, ta, $cast($Attribute$TypeCompound, i$->next()));
				{
					$var($TypeAnnotationPosition, p, $nc(ta)->position);
					if ($nc(p)->hasCatchType()) {
						int32_t idx = findExceptionIndex(p);
						if (idx == -1) {
							$Assert::error($$str({"Could not find exception index for type annotation "_s, ta, " on exception parameter"_s}));
						}
						p->setExceptionIndex(idx);
					}
				}
			}
		}
	}
}

int32_t Code::findExceptionIndex($TypeAnnotationPosition* p) {
	$useLocalCurrentObjectStackCache();
	int32_t catchType = $nc(p)->getCatchType();
	int32_t startPos = p->getStartPos();
	int32_t len = $nc(this->catchInfo)->length();
	$var($List, iter, $nc(this->catchInfo)->toList());
	for (int32_t i = 0; i < len; ++i) {
		$var($chars, catchEntry, $cast($chars, $nc(iter)->head));
		$assign(iter, iter->tail);
		int32_t ct = $nc(catchEntry)->get(3);
		int32_t sp = catchEntry->get(0);
		if (catchType == ct && sp == startPos) {
			return i;
		}
	}
	return -1;
}

void Code::putVar($Code$LocalVar* var) {
	bool var$0 = this->varDebugInfo;
	if (!var$0) {
		bool var$1 = $nc($nc(var)->sym)->isExceptionParameter();
		var$0 = (var$1 && $nc(var->sym)->hasTypeAnnotations());
	}
	bool keepLocalVariables = var$0;
	if (!keepLocalVariables) {
		return;
	}
	bool var$2 = ((int64_t)($nc(var->sym)->flags() & (uint64_t)(int64_t)$Flags::SYNTHETIC)) != 0;
	if (var$2) {
		bool var$3 = ((int64_t)($nc($nc(var->sym)->owner)->flags() & (uint64_t)$Flags::LAMBDA_METHOD)) == 0;
		var$2 = (var$3 || ((int64_t)($nc(var->sym)->flags() & (uint64_t)$Flags::PARAMETER)) == 0);
	}
	bool ignoredSyntheticVar = var$2;
	if (ignoredSyntheticVar) {
		return;
	}
	if (this->varBuffer == nullptr) {
		$set(this, varBuffer, $new($Code$LocalVarArray, 20));
	} else {
		$set(this, varBuffer, $fcast($Code$LocalVarArray, $ArrayUtils::ensureCapacity(this->varBuffer, this->varBufferSize)));
	}
	$nc(this->varBuffer)->set(this->varBufferSize++, var);
}

int32_t Code::newLocal(int32_t typecode) {
	int32_t reg = this->nextreg;
	int32_t w = width(typecode);
	this->nextreg = reg + w;
	if (this->nextreg > this->max_locals) {
		this->max_locals = this->nextreg;
	}
	return reg;
}

int32_t Code::newLocal($Type* type) {
	return newLocal(typecode(type));
}

int32_t Code::newLocal($Symbol$VarSymbol* v) {
	int32_t reg = $nc(v)->adr = newLocal($(v->erasure(this->types)));
	addLocalVar(v);
	return reg;
}

void Code::newRegSegment() {
	this->nextreg = this->max_locals;
}

void Code::endScopes(int32_t first) {
	int32_t prevNextReg = this->nextreg;
	this->nextreg = first;
	for (int32_t i = this->nextreg; i < prevNextReg; ++i) {
		endScope(i);
	}
}

$String* Code::mnem(int32_t opcode) {
	$init(Code);
	$init($Code$Mneumonics);
	return $nc($Code$Mneumonics::mnem)->get(opcode);
}

int32_t Code::lambda$fillLocalVarPosition$4($Code$LocalVar* lv, $Code$LocalVar$Range* r) {
	$init(Code);
	return $nc(lv)->reg;
}

int32_t Code::lambda$fillLocalVarPosition$3($Code$LocalVar$Range* r) {
	$init(Code);
	return $nc(r)->length;
}

int32_t Code::lambda$fillLocalVarPosition$2($Code$LocalVar$Range* r) {
	$init(Code);
	return $nc(r)->start_pc;
}

$Code$LocalVar$RangeArray* Code::lambda$fillLocalVarPosition$1(int32_t s) {
	$init(Code);
	return $new($Code$LocalVar$RangeArray, s);
}

bool Code::lambda$fillLocalVarPosition$0($Code$LocalVar$Range* r) {
	$init(Code);
	return $nc(r)->closed() && r->length > 0;
}

void clinit$Code($Class* class$) {
	$init($TypeTag);
	$assignStatic(Code::jsrReturnValue, $new($Type$JCPrimitiveType, $TypeTag::INT, nullptr));
}

Code::Code() {
}

$Class* Code::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Code$$Lambda$lambda$fillLocalVarPosition$0::classInfo$.name)) {
			return Code$$Lambda$lambda$fillLocalVarPosition$0::load$(name, initialize);
		}
		if (name->equals(Code$$Lambda$lambda$fillLocalVarPosition$1$1::classInfo$.name)) {
			return Code$$Lambda$lambda$fillLocalVarPosition$1$1::load$(name, initialize);
		}
		if (name->equals(Code$$Lambda$lambda$fillLocalVarPosition$2$2::classInfo$.name)) {
			return Code$$Lambda$lambda$fillLocalVarPosition$2$2::load$(name, initialize);
		}
		if (name->equals(Code$$Lambda$lambda$fillLocalVarPosition$3$3::classInfo$.name)) {
			return Code$$Lambda$lambda$fillLocalVarPosition$3$3::load$(name, initialize);
		}
		if (name->equals(Code$$Lambda$lambda$fillLocalVarPosition$4$4::classInfo$.name)) {
			return Code$$Lambda$lambda$fillLocalVarPosition$4$4::load$(name, initialize);
		}
	}
	$loadClass(Code, name, initialize, &_Code_ClassInfo_, clinit$Code, allocate$Code);
	return class$;
}

$Class* Code::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com