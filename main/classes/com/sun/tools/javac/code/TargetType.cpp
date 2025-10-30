#include <com/sun/tools/javac/code/TargetType.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CAST
#undef CLASS_EXTENDS
#undef CLASS_TYPE_PARAMETER
#undef CLASS_TYPE_PARAMETER_BOUND
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#undef CONSTRUCTOR_REFERENCE
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef INSTANCEOF
#undef LOCAL_VARIABLE
#undef MAXIMUM_TARGET_TYPE_VALUE
#undef METHOD_FORMAL_PARAMETER
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#undef METHOD_RECEIVER
#undef METHOD_REFERENCE
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#undef METHOD_RETURN
#undef METHOD_TYPE_PARAMETER
#undef METHOD_TYPE_PARAMETER_BOUND
#undef NEW
#undef RESOURCE_VARIABLE
#undef THROWS
#undef UNKNOWN

using $TargetTypeArray = $Array<::com::sun::tools::javac::code::TargetType>;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _TargetType_FieldInfo_[] = {
	{"CLASS_TYPE_PARAMETER", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, CLASS_TYPE_PARAMETER)},
	{"METHOD_TYPE_PARAMETER", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, METHOD_TYPE_PARAMETER)},
	{"CLASS_EXTENDS", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, CLASS_EXTENDS)},
	{"CLASS_TYPE_PARAMETER_BOUND", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, CLASS_TYPE_PARAMETER_BOUND)},
	{"METHOD_TYPE_PARAMETER_BOUND", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, METHOD_TYPE_PARAMETER_BOUND)},
	{"FIELD", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, FIELD)},
	{"METHOD_RETURN", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, METHOD_RETURN)},
	{"METHOD_RECEIVER", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, METHOD_RECEIVER)},
	{"METHOD_FORMAL_PARAMETER", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, METHOD_FORMAL_PARAMETER)},
	{"THROWS", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, THROWS)},
	{"LOCAL_VARIABLE", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, LOCAL_VARIABLE)},
	{"RESOURCE_VARIABLE", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, RESOURCE_VARIABLE)},
	{"EXCEPTION_PARAMETER", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, EXCEPTION_PARAMETER)},
	{"INSTANCEOF", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, INSTANCEOF)},
	{"NEW", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, NEW)},
	{"CONSTRUCTOR_REFERENCE", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, CONSTRUCTOR_REFERENCE)},
	{"METHOD_REFERENCE", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, METHOD_REFERENCE)},
	{"CAST", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, CAST)},
	{"CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT)},
	{"METHOD_INVOCATION_TYPE_ARGUMENT", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, METHOD_INVOCATION_TYPE_ARGUMENT)},
	{"CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT)},
	{"METHOD_REFERENCE_TYPE_ARGUMENT", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, METHOD_REFERENCE_TYPE_ARGUMENT)},
	{"UNKNOWN", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TargetType, UNKNOWN)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/TargetType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TargetType, $VALUES)},
	{"MAXIMUM_TARGET_TYPE_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TargetType, MAXIMUM_TARGET_TYPE_VALUE)},
	{"targetTypeValue", "I", nullptr, $PRIVATE | $FINAL, $field(TargetType, targetTypeValue$)},
	{"isLocal", "Z", nullptr, $PRIVATE | $FINAL, $field(TargetType, isLocal$)},
	{"targets", "[Lcom/sun/tools/javac/code/TargetType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TargetType, targets)},
	{}
};

$MethodInfo _TargetType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/TargetType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TargetTypeArray*(*)()>(&TargetType::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(TargetType::*)($String*,int32_t,int32_t)>(&TargetType::init$))},
	{"<init>", "(Ljava/lang/String;IIZ)V", "(IZ)V", $PRIVATE, $method(static_cast<void(TargetType::*)($String*,int32_t,int32_t,bool)>(&TargetType::init$))},
	{"fromTargetTypeValue", "(I)Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TargetType*(*)(int32_t)>(&TargetType::fromTargetTypeValue))},
	{"isLocal", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TargetType::*)()>(&TargetType::isLocal))},
	{"isValidTargetTypeValue", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&TargetType::isValidTargetTypeValue))},
	{"targetTypeValue", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TargetType::*)()>(&TargetType::targetTypeValue))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TargetType*(*)($String*)>(&TargetType::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TargetTypeArray*(*)()>(&TargetType::values))},
	{}
};

$ClassInfo _TargetType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.TargetType",
	"java.lang.Enum",
	nullptr,
	_TargetType_FieldInfo_,
	_TargetType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/TargetType;>;"
};

$Object* allocate$TargetType($Class* clazz) {
	return $of($alloc(TargetType));
}

TargetType* TargetType::CLASS_TYPE_PARAMETER = nullptr;
TargetType* TargetType::METHOD_TYPE_PARAMETER = nullptr;
TargetType* TargetType::CLASS_EXTENDS = nullptr;
TargetType* TargetType::CLASS_TYPE_PARAMETER_BOUND = nullptr;
TargetType* TargetType::METHOD_TYPE_PARAMETER_BOUND = nullptr;
TargetType* TargetType::FIELD = nullptr;
TargetType* TargetType::METHOD_RETURN = nullptr;
TargetType* TargetType::METHOD_RECEIVER = nullptr;
TargetType* TargetType::METHOD_FORMAL_PARAMETER = nullptr;
TargetType* TargetType::THROWS = nullptr;
TargetType* TargetType::LOCAL_VARIABLE = nullptr;
TargetType* TargetType::RESOURCE_VARIABLE = nullptr;
TargetType* TargetType::EXCEPTION_PARAMETER = nullptr;
TargetType* TargetType::INSTANCEOF = nullptr;
TargetType* TargetType::NEW = nullptr;
TargetType* TargetType::CONSTRUCTOR_REFERENCE = nullptr;
TargetType* TargetType::METHOD_REFERENCE = nullptr;
TargetType* TargetType::CAST = nullptr;
TargetType* TargetType::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT = nullptr;
TargetType* TargetType::METHOD_INVOCATION_TYPE_ARGUMENT = nullptr;
TargetType* TargetType::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT = nullptr;
TargetType* TargetType::METHOD_REFERENCE_TYPE_ARGUMENT = nullptr;
TargetType* TargetType::UNKNOWN = nullptr;
$TargetTypeArray* TargetType::$VALUES = nullptr;
$TargetTypeArray* TargetType::targets = nullptr;

$TargetTypeArray* TargetType::$values() {
	$init(TargetType);
	return $new($TargetTypeArray, {
		TargetType::CLASS_TYPE_PARAMETER,
		TargetType::METHOD_TYPE_PARAMETER,
		TargetType::CLASS_EXTENDS,
		TargetType::CLASS_TYPE_PARAMETER_BOUND,
		TargetType::METHOD_TYPE_PARAMETER_BOUND,
		TargetType::FIELD,
		TargetType::METHOD_RETURN,
		TargetType::METHOD_RECEIVER,
		TargetType::METHOD_FORMAL_PARAMETER,
		TargetType::THROWS,
		TargetType::LOCAL_VARIABLE,
		TargetType::RESOURCE_VARIABLE,
		TargetType::EXCEPTION_PARAMETER,
		TargetType::INSTANCEOF,
		TargetType::NEW,
		TargetType::CONSTRUCTOR_REFERENCE,
		TargetType::METHOD_REFERENCE,
		TargetType::CAST,
		TargetType::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT,
		TargetType::METHOD_INVOCATION_TYPE_ARGUMENT,
		TargetType::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT,
		TargetType::METHOD_REFERENCE_TYPE_ARGUMENT,
		TargetType::UNKNOWN
	});
}

$TargetTypeArray* TargetType::values() {
	$init(TargetType);
	return $cast($TargetTypeArray, TargetType::$VALUES->clone());
}

TargetType* TargetType::valueOf($String* name) {
	$init(TargetType);
	return $cast(TargetType, $Enum::valueOf(TargetType::class$, name));
}

void TargetType::init$($String* $enum$name, int32_t $enum$ordinal, int32_t targetTypeValue) {
	TargetType::init$($enum$name, $enum$ordinal, targetTypeValue, false);
}

void TargetType::init$($String* $enum$name, int32_t $enum$ordinal, int32_t targetTypeValue, bool isLocal) {
	$useLocalCurrentObjectStackCache();
	$Enum::init$($enum$name, $enum$ordinal);
	if (targetTypeValue < 0 || targetTypeValue > 255) {
		$Assert::error($$str({"Attribute type value needs to be an unsigned byte: "_s, $($String::format("0x%02X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(targetTypeValue)))})))}));
	}
	this->targetTypeValue$ = targetTypeValue;
	this->isLocal$ = isLocal;
}

bool TargetType::isLocal() {
	return this->isLocal$;
}

int32_t TargetType::targetTypeValue() {
	return this->targetTypeValue$;
}

bool TargetType::isValidTargetTypeValue(int32_t tag) {
	$init(TargetType);
	if (tag == TargetType::UNKNOWN->targetTypeValue$) {
		return true;
	}
	return (tag >= 0 && tag < $nc(TargetType::targets)->length);
}

TargetType* TargetType::fromTargetTypeValue(int32_t tag) {
	$init(TargetType);
	$useLocalCurrentObjectStackCache();
	if (tag == TargetType::UNKNOWN->targetTypeValue$) {
		return TargetType::UNKNOWN;
	}
	if (tag < 0 || tag >= $nc(TargetType::targets)->length) {
		$Assert::error($$str({"Unknown TargetType: "_s, $$str(tag)}));
	}
	return $nc(TargetType::targets)->get(tag);
}

void clinit$TargetType($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TargetType::CLASS_TYPE_PARAMETER, $new(TargetType, "CLASS_TYPE_PARAMETER"_s, 0, 0));
	$assignStatic(TargetType::METHOD_TYPE_PARAMETER, $new(TargetType, "METHOD_TYPE_PARAMETER"_s, 1, 1));
	$assignStatic(TargetType::CLASS_EXTENDS, $new(TargetType, "CLASS_EXTENDS"_s, 2, 16));
	$assignStatic(TargetType::CLASS_TYPE_PARAMETER_BOUND, $new(TargetType, "CLASS_TYPE_PARAMETER_BOUND"_s, 3, 17));
	$assignStatic(TargetType::METHOD_TYPE_PARAMETER_BOUND, $new(TargetType, "METHOD_TYPE_PARAMETER_BOUND"_s, 4, 18));
	$assignStatic(TargetType::FIELD, $new(TargetType, "FIELD"_s, 5, 19));
	$assignStatic(TargetType::METHOD_RETURN, $new(TargetType, "METHOD_RETURN"_s, 6, 20));
	$assignStatic(TargetType::METHOD_RECEIVER, $new(TargetType, "METHOD_RECEIVER"_s, 7, 21));
	$assignStatic(TargetType::METHOD_FORMAL_PARAMETER, $new(TargetType, "METHOD_FORMAL_PARAMETER"_s, 8, 22));
	$assignStatic(TargetType::THROWS, $new(TargetType, "THROWS"_s, 9, 23));
	$assignStatic(TargetType::LOCAL_VARIABLE, $new(TargetType, "LOCAL_VARIABLE"_s, 10, 64, true));
	$assignStatic(TargetType::RESOURCE_VARIABLE, $new(TargetType, "RESOURCE_VARIABLE"_s, 11, 65, true));
	$assignStatic(TargetType::EXCEPTION_PARAMETER, $new(TargetType, "EXCEPTION_PARAMETER"_s, 12, 66, true));
	$assignStatic(TargetType::INSTANCEOF, $new(TargetType, "INSTANCEOF"_s, 13, 67, true));
	$assignStatic(TargetType::NEW, $new(TargetType, "NEW"_s, 14, 68, true));
	$assignStatic(TargetType::CONSTRUCTOR_REFERENCE, $new(TargetType, "CONSTRUCTOR_REFERENCE"_s, 15, 69, true));
	$assignStatic(TargetType::METHOD_REFERENCE, $new(TargetType, "METHOD_REFERENCE"_s, 16, 70, true));
	$assignStatic(TargetType::CAST, $new(TargetType, "CAST"_s, 17, 71, true));
	$assignStatic(TargetType::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT, $new(TargetType, "CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT"_s, 18, 72, true));
	$assignStatic(TargetType::METHOD_INVOCATION_TYPE_ARGUMENT, $new(TargetType, "METHOD_INVOCATION_TYPE_ARGUMENT"_s, 19, 73, true));
	$assignStatic(TargetType::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT, $new(TargetType, "CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT"_s, 20, 74, true));
	$assignStatic(TargetType::METHOD_REFERENCE_TYPE_ARGUMENT, $new(TargetType, "METHOD_REFERENCE_TYPE_ARGUMENT"_s, 21, 75, true));
	$assignStatic(TargetType::UNKNOWN, $new(TargetType, "UNKNOWN"_s, 22, 255));
	$assignStatic(TargetType::$VALUES, TargetType::$values());
	{
		$assignStatic(TargetType::targets, $new($TargetTypeArray, TargetType::MAXIMUM_TARGET_TYPE_VALUE + 1));
		$var($TargetTypeArray, alltargets, TargetType::values());
		{
			$var($TargetTypeArray, arr$, alltargets);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				TargetType* target = arr$->get(i$);
				{
					if ($nc(target)->targetTypeValue$ != TargetType::UNKNOWN->targetTypeValue$) {
						$nc(TargetType::targets)->set(target->targetTypeValue$, target);
					}
				}
			}
		}
		for (int32_t i = 0; i <= TargetType::MAXIMUM_TARGET_TYPE_VALUE; ++i) {
			if ($nc(TargetType::targets)->get(i) == nullptr) {
				$nc(TargetType::targets)->set(i, TargetType::UNKNOWN);
			}
		}
	}
}

TargetType::TargetType() {
}

$Class* TargetType::load$($String* name, bool initialize) {
	$loadClass(TargetType, name, initialize, &_TargetType_ClassInfo_, clinit$TargetType, allocate$TargetType);
	return class$;
}

$Class* TargetType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com