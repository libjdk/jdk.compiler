#include <com/sun/tools/javac/code/Flags$Flag.h>

#include <com/sun/tools/javac/code/Flags$Flag$1.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ABSTRACT
#undef ACYCLIC
#undef ACYCLIC_ANN
#undef ANNOTATION
#undef ANONCONSTR
#undef ANONCONSTR_BASED
#undef AUTOMATIC_MODULE
#undef AUXILIARY
#undef BAD_OVERRIDE
#undef BLOCK
#undef BRIDGE
#undef CLASH
#undef CLASS_SEEN
#undef COMPOUND
#undef DEFAULT
#undef DEPRECATED
#undef DEPRECATED_ANNOTATION
#undef DEPRECATED_REMOVAL
#undef EFFECTIVELY_FINAL
#undef ENUM
#undef EXISTS
#undef FINAL
#undef GENERATEDCONSTR
#undef HASINIT
#undef HAS_RESOURCE
#undef HYPOTHETICAL
#undef INTERFACE
#undef LAMBDA_METHOD
#undef LOCKED
#undef MANDATED
#undef MATCH_BINDING
#undef MATCH_BINDING_TO_OUTER
#undef MODULE
#undef NAME_FILLED
#undef NATIVE
#undef NON_SEALED
#undef NOOUTERTHIS
#undef NOT_IN_PROFILE
#undef PARAMETER
#undef POTENTIALLY_AMBIGUOUS
#undef PREVIEW_API
#undef PREVIEW_REFLECTIVE
#undef PRIVATE
#undef PROPRIETARY
#undef PROTECTED
#undef PUBLIC
#undef RECORD
#undef RECOVERABLE
#undef SEALED
#undef SIGNATURE_POLYMORPHIC
#undef SOURCE_SEEN
#undef STATIC
#undef STRICTFP
#undef SYNCHRONIZED
#undef SYNTHETIC
#undef SYSTEM_MODULE
#undef THROWS
#undef TRANSIENT
#undef TYPE_TRANSLATED
#undef UNATTRIBUTED
#undef UNION
#undef VARARGS
#undef VOLATILE

using $Flags$FlagArray = $Array<::com::sun::tools::javac::code::Flags$Flag>;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Flags$Flag$1 = ::com::sun::tools::javac::code::Flags$Flag$1;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Flags$Flag_FieldInfo_[] = {
	{"PUBLIC", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, PUBLIC)},
	{"PRIVATE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, PRIVATE)},
	{"PROTECTED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, PROTECTED)},
	{"STATIC", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, STATIC)},
	{"FINAL", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, FINAL)},
	{"SYNCHRONIZED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, SYNCHRONIZED)},
	{"VOLATILE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, VOLATILE)},
	{"TRANSIENT", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, TRANSIENT)},
	{"NATIVE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, NATIVE)},
	{"INTERFACE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, INTERFACE)},
	{"ABSTRACT", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, ABSTRACT)},
	{"DEFAULT", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, DEFAULT)},
	{"STRICTFP", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, STRICTFP)},
	{"BRIDGE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, BRIDGE)},
	{"SYNTHETIC", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, SYNTHETIC)},
	{"ANNOTATION", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, ANNOTATION)},
	{"DEPRECATED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, DEPRECATED)},
	{"HASINIT", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, HASINIT)},
	{"BLOCK", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, BLOCK)},
	{"ENUM", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, ENUM)},
	{"MANDATED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, MANDATED)},
	{"NOOUTERTHIS", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, NOOUTERTHIS)},
	{"EXISTS", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, EXISTS)},
	{"COMPOUND", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, COMPOUND)},
	{"CLASS_SEEN", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, CLASS_SEEN)},
	{"SOURCE_SEEN", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, SOURCE_SEEN)},
	{"LOCKED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, LOCKED)},
	{"UNATTRIBUTED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, UNATTRIBUTED)},
	{"ANONCONSTR", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, ANONCONSTR)},
	{"ACYCLIC", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, ACYCLIC)},
	{"PARAMETER", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, PARAMETER)},
	{"VARARGS", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, VARARGS)},
	{"ACYCLIC_ANN", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, ACYCLIC_ANN)},
	{"GENERATEDCONSTR", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, GENERATEDCONSTR)},
	{"HYPOTHETICAL", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, HYPOTHETICAL)},
	{"PROPRIETARY", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, PROPRIETARY)},
	{"UNION", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, UNION)},
	{"EFFECTIVELY_FINAL", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, EFFECTIVELY_FINAL)},
	{"CLASH", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, CLASH)},
	{"AUXILIARY", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, AUXILIARY)},
	{"NOT_IN_PROFILE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, NOT_IN_PROFILE)},
	{"BAD_OVERRIDE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, BAD_OVERRIDE)},
	{"SIGNATURE_POLYMORPHIC", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, SIGNATURE_POLYMORPHIC)},
	{"THROWS", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, THROWS)},
	{"LAMBDA_METHOD", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, LAMBDA_METHOD)},
	{"TYPE_TRANSLATED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, TYPE_TRANSLATED)},
	{"MODULE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, MODULE)},
	{"AUTOMATIC_MODULE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, AUTOMATIC_MODULE)},
	{"SYSTEM_MODULE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, SYSTEM_MODULE)},
	{"DEPRECATED_ANNOTATION", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, DEPRECATED_ANNOTATION)},
	{"DEPRECATED_REMOVAL", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, DEPRECATED_REMOVAL)},
	{"HAS_RESOURCE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, HAS_RESOURCE)},
	{"POTENTIALLY_AMBIGUOUS", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, POTENTIALLY_AMBIGUOUS)},
	{"ANONCONSTR_BASED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, ANONCONSTR_BASED)},
	{"NAME_FILLED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, NAME_FILLED)},
	{"PREVIEW_API", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, PREVIEW_API)},
	{"PREVIEW_REFLECTIVE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, PREVIEW_REFLECTIVE)},
	{"MATCH_BINDING", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, MATCH_BINDING)},
	{"MATCH_BINDING_TO_OUTER", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, MATCH_BINDING_TO_OUTER)},
	{"RECORD", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, RECORD)},
	{"RECOVERABLE", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, RECOVERABLE)},
	{"SEALED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, SEALED)},
	{"NON_SEALED", "Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flags$Flag, NON_SEALED)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Flags$Flag, $VALUES)},
	{"value", "J", nullptr, $FINAL, $field(Flags$Flag, value)},
	{"lowercaseName", "Ljava/lang/String;", nullptr, $FINAL, $field(Flags$Flag, lowercaseName)},
	{}
};

$MethodInfo _Flags$Flag_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Flags$FlagArray*(*)()>(&Flags$Flag::$values))},
	{"<init>", "(Ljava/lang/String;IJ)V", "(J)V", $PRIVATE, $method(static_cast<void(Flags$Flag::*)($String*,int32_t,int64_t)>(&Flags$Flag::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Flags$Flag*(*)($String*)>(&Flags$Flag::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Flags$Flag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Flags$FlagArray*(*)()>(&Flags$Flag::values))},
	{}
};

$InnerClassInfo _Flags$Flag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Flags$Flag", "com.sun.tools.javac.code.Flags", "Flag", $PUBLIC | $STATIC | $ENUM},
	{"com.sun.tools.javac.code.Flags$Flag$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Flags$Flag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Flags$Flag",
	"java.lang.Enum",
	nullptr,
	_Flags$Flag_FieldInfo_,
	_Flags$Flag_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Flags$Flag;>;",
	nullptr,
	_Flags$Flag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Flags"
};

$Object* allocate$Flags$Flag($Class* clazz) {
	return $of($alloc(Flags$Flag));
}

Flags$Flag* Flags$Flag::PUBLIC = nullptr;
Flags$Flag* Flags$Flag::PRIVATE = nullptr;
Flags$Flag* Flags$Flag::PROTECTED = nullptr;
Flags$Flag* Flags$Flag::STATIC = nullptr;
Flags$Flag* Flags$Flag::FINAL = nullptr;
Flags$Flag* Flags$Flag::SYNCHRONIZED = nullptr;
Flags$Flag* Flags$Flag::VOLATILE = nullptr;
Flags$Flag* Flags$Flag::TRANSIENT = nullptr;
Flags$Flag* Flags$Flag::NATIVE = nullptr;
Flags$Flag* Flags$Flag::INTERFACE = nullptr;
Flags$Flag* Flags$Flag::ABSTRACT = nullptr;
Flags$Flag* Flags$Flag::DEFAULT = nullptr;
Flags$Flag* Flags$Flag::STRICTFP = nullptr;
Flags$Flag* Flags$Flag::BRIDGE = nullptr;
Flags$Flag* Flags$Flag::SYNTHETIC = nullptr;
Flags$Flag* Flags$Flag::ANNOTATION = nullptr;
Flags$Flag* Flags$Flag::DEPRECATED = nullptr;
Flags$Flag* Flags$Flag::HASINIT = nullptr;
Flags$Flag* Flags$Flag::BLOCK = nullptr;
Flags$Flag* Flags$Flag::ENUM = nullptr;
Flags$Flag* Flags$Flag::MANDATED = nullptr;
Flags$Flag* Flags$Flag::NOOUTERTHIS = nullptr;
Flags$Flag* Flags$Flag::EXISTS = nullptr;
Flags$Flag* Flags$Flag::COMPOUND = nullptr;
Flags$Flag* Flags$Flag::CLASS_SEEN = nullptr;
Flags$Flag* Flags$Flag::SOURCE_SEEN = nullptr;
Flags$Flag* Flags$Flag::LOCKED = nullptr;
Flags$Flag* Flags$Flag::UNATTRIBUTED = nullptr;
Flags$Flag* Flags$Flag::ANONCONSTR = nullptr;
Flags$Flag* Flags$Flag::ACYCLIC = nullptr;
Flags$Flag* Flags$Flag::PARAMETER = nullptr;
Flags$Flag* Flags$Flag::VARARGS = nullptr;
Flags$Flag* Flags$Flag::ACYCLIC_ANN = nullptr;
Flags$Flag* Flags$Flag::GENERATEDCONSTR = nullptr;
Flags$Flag* Flags$Flag::HYPOTHETICAL = nullptr;
Flags$Flag* Flags$Flag::PROPRIETARY = nullptr;
Flags$Flag* Flags$Flag::UNION = nullptr;
Flags$Flag* Flags$Flag::EFFECTIVELY_FINAL = nullptr;
Flags$Flag* Flags$Flag::CLASH = nullptr;
Flags$Flag* Flags$Flag::AUXILIARY = nullptr;
Flags$Flag* Flags$Flag::NOT_IN_PROFILE = nullptr;
Flags$Flag* Flags$Flag::BAD_OVERRIDE = nullptr;
Flags$Flag* Flags$Flag::SIGNATURE_POLYMORPHIC = nullptr;
Flags$Flag* Flags$Flag::THROWS = nullptr;
Flags$Flag* Flags$Flag::LAMBDA_METHOD = nullptr;
Flags$Flag* Flags$Flag::TYPE_TRANSLATED = nullptr;
Flags$Flag* Flags$Flag::MODULE = nullptr;
Flags$Flag* Flags$Flag::AUTOMATIC_MODULE = nullptr;
Flags$Flag* Flags$Flag::SYSTEM_MODULE = nullptr;
Flags$Flag* Flags$Flag::DEPRECATED_ANNOTATION = nullptr;
Flags$Flag* Flags$Flag::DEPRECATED_REMOVAL = nullptr;
Flags$Flag* Flags$Flag::HAS_RESOURCE = nullptr;
Flags$Flag* Flags$Flag::POTENTIALLY_AMBIGUOUS = nullptr;
Flags$Flag* Flags$Flag::ANONCONSTR_BASED = nullptr;
Flags$Flag* Flags$Flag::NAME_FILLED = nullptr;
Flags$Flag* Flags$Flag::PREVIEW_API = nullptr;
Flags$Flag* Flags$Flag::PREVIEW_REFLECTIVE = nullptr;
Flags$Flag* Flags$Flag::MATCH_BINDING = nullptr;
Flags$Flag* Flags$Flag::MATCH_BINDING_TO_OUTER = nullptr;
Flags$Flag* Flags$Flag::RECORD = nullptr;
Flags$Flag* Flags$Flag::RECOVERABLE = nullptr;
Flags$Flag* Flags$Flag::SEALED = nullptr;
Flags$Flag* Flags$Flag::NON_SEALED = nullptr;
$Flags$FlagArray* Flags$Flag::$VALUES = nullptr;

$Flags$FlagArray* Flags$Flag::$values() {
	$init(Flags$Flag);
	return $new($Flags$FlagArray, {
		Flags$Flag::PUBLIC,
		Flags$Flag::PRIVATE,
		Flags$Flag::PROTECTED,
		Flags$Flag::STATIC,
		Flags$Flag::FINAL,
		Flags$Flag::SYNCHRONIZED,
		Flags$Flag::VOLATILE,
		Flags$Flag::TRANSIENT,
		Flags$Flag::NATIVE,
		Flags$Flag::INTERFACE,
		Flags$Flag::ABSTRACT,
		Flags$Flag::DEFAULT,
		Flags$Flag::STRICTFP,
		Flags$Flag::BRIDGE,
		Flags$Flag::SYNTHETIC,
		Flags$Flag::ANNOTATION,
		Flags$Flag::DEPRECATED,
		Flags$Flag::HASINIT,
		Flags$Flag::BLOCK,
		Flags$Flag::ENUM,
		Flags$Flag::MANDATED,
		Flags$Flag::NOOUTERTHIS,
		Flags$Flag::EXISTS,
		Flags$Flag::COMPOUND,
		Flags$Flag::CLASS_SEEN,
		Flags$Flag::SOURCE_SEEN,
		Flags$Flag::LOCKED,
		Flags$Flag::UNATTRIBUTED,
		Flags$Flag::ANONCONSTR,
		Flags$Flag::ACYCLIC,
		Flags$Flag::PARAMETER,
		Flags$Flag::VARARGS,
		Flags$Flag::ACYCLIC_ANN,
		Flags$Flag::GENERATEDCONSTR,
		Flags$Flag::HYPOTHETICAL,
		Flags$Flag::PROPRIETARY,
		Flags$Flag::UNION,
		Flags$Flag::EFFECTIVELY_FINAL,
		Flags$Flag::CLASH,
		Flags$Flag::AUXILIARY,
		Flags$Flag::NOT_IN_PROFILE,
		Flags$Flag::BAD_OVERRIDE,
		Flags$Flag::SIGNATURE_POLYMORPHIC,
		Flags$Flag::THROWS,
		Flags$Flag::LAMBDA_METHOD,
		Flags$Flag::TYPE_TRANSLATED,
		Flags$Flag::MODULE,
		Flags$Flag::AUTOMATIC_MODULE,
		Flags$Flag::SYSTEM_MODULE,
		Flags$Flag::DEPRECATED_ANNOTATION,
		Flags$Flag::DEPRECATED_REMOVAL,
		Flags$Flag::HAS_RESOURCE,
		Flags$Flag::POTENTIALLY_AMBIGUOUS,
		Flags$Flag::ANONCONSTR_BASED,
		Flags$Flag::NAME_FILLED,
		Flags$Flag::PREVIEW_API,
		Flags$Flag::PREVIEW_REFLECTIVE,
		Flags$Flag::MATCH_BINDING,
		Flags$Flag::MATCH_BINDING_TO_OUTER,
		Flags$Flag::RECORD,
		Flags$Flag::RECOVERABLE,
		Flags$Flag::SEALED,
		Flags$Flag::NON_SEALED
	});
}

$Flags$FlagArray* Flags$Flag::values() {
	$init(Flags$Flag);
	return $cast($Flags$FlagArray, Flags$Flag::$VALUES->clone());
}

Flags$Flag* Flags$Flag::valueOf($String* name) {
	$init(Flags$Flag);
	return $cast(Flags$Flag, $Enum::valueOf(Flags$Flag::class$, name));
}

void Flags$Flag::init$($String* $enum$name, int32_t $enum$ordinal, int64_t flag) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value = flag;
	$set(this, lowercaseName, $StringUtils::toLowerCase($(name())));
}

$String* Flags$Flag::toString() {
	return this->lowercaseName;
}

void clinit$Flags$Flag($Class* class$) {
	$assignStatic(Flags$Flag::PUBLIC, $new(Flags$Flag, "PUBLIC"_s, 0, $Flags::PUBLIC));
	$assignStatic(Flags$Flag::PRIVATE, $new(Flags$Flag, "PRIVATE"_s, 1, $Flags::PRIVATE));
	$assignStatic(Flags$Flag::PROTECTED, $new(Flags$Flag, "PROTECTED"_s, 2, $Flags::PROTECTED));
	$assignStatic(Flags$Flag::STATIC, $new(Flags$Flag, "STATIC"_s, 3, $Flags::STATIC));
	$assignStatic(Flags$Flag::FINAL, $new(Flags$Flag, "FINAL"_s, 4, $Flags::FINAL));
	$assignStatic(Flags$Flag::SYNCHRONIZED, $new(Flags$Flag, "SYNCHRONIZED"_s, 5, $Flags::SYNCHRONIZED));
	$assignStatic(Flags$Flag::VOLATILE, $new(Flags$Flag, "VOLATILE"_s, 6, $Flags::VOLATILE));
	$assignStatic(Flags$Flag::TRANSIENT, $new(Flags$Flag, "TRANSIENT"_s, 7, $Flags::TRANSIENT));
	$assignStatic(Flags$Flag::NATIVE, $new(Flags$Flag, "NATIVE"_s, 8, $Flags::NATIVE));
	$assignStatic(Flags$Flag::INTERFACE, $new(Flags$Flag, "INTERFACE"_s, 9, $Flags::INTERFACE));
	$assignStatic(Flags$Flag::ABSTRACT, $new(Flags$Flag, "ABSTRACT"_s, 10, $Flags::ABSTRACT));
	$assignStatic(Flags$Flag::DEFAULT, $new(Flags$Flag, "DEFAULT"_s, 11, $Flags::DEFAULT));
	$assignStatic(Flags$Flag::STRICTFP, $new(Flags$Flag, "STRICTFP"_s, 12, $Flags::STRICTFP));
	$assignStatic(Flags$Flag::BRIDGE, $new(Flags$Flag, "BRIDGE"_s, 13, $Flags::BRIDGE));
	$assignStatic(Flags$Flag::SYNTHETIC, $new(Flags$Flag, "SYNTHETIC"_s, 14, $Flags::SYNTHETIC));
	$assignStatic(Flags$Flag::ANNOTATION, $new(Flags$Flag, "ANNOTATION"_s, 15, $Flags::ANNOTATION));
	$assignStatic(Flags$Flag::DEPRECATED, $new(Flags$Flag, "DEPRECATED"_s, 16, $Flags::DEPRECATED));
	$assignStatic(Flags$Flag::HASINIT, $new(Flags$Flag, "HASINIT"_s, 17, $Flags::HASINIT));
	$assignStatic(Flags$Flag::BLOCK, $new(Flags$Flag, "BLOCK"_s, 18, $Flags::BLOCK));
	$assignStatic(Flags$Flag::ENUM, $new(Flags$Flag, "ENUM"_s, 19, $Flags::ENUM));
	$assignStatic(Flags$Flag::MANDATED, $new(Flags$Flag, "MANDATED"_s, 20, $Flags::MANDATED));
	$assignStatic(Flags$Flag::NOOUTERTHIS, $new(Flags$Flag, "NOOUTERTHIS"_s, 21, $Flags::NOOUTERTHIS));
	$assignStatic(Flags$Flag::EXISTS, $new(Flags$Flag, "EXISTS"_s, 22, $Flags::EXISTS));
	$assignStatic(Flags$Flag::COMPOUND, $new(Flags$Flag, "COMPOUND"_s, 23, $Flags::COMPOUND));
	$assignStatic(Flags$Flag::CLASS_SEEN, $new(Flags$Flag, "CLASS_SEEN"_s, 24, $Flags::CLASS_SEEN));
	$assignStatic(Flags$Flag::SOURCE_SEEN, $new(Flags$Flag, "SOURCE_SEEN"_s, 25, $Flags::SOURCE_SEEN));
	$assignStatic(Flags$Flag::LOCKED, $new(Flags$Flag, "LOCKED"_s, 26, $Flags::LOCKED));
	$assignStatic(Flags$Flag::UNATTRIBUTED, $new(Flags$Flag, "UNATTRIBUTED"_s, 27, $Flags::UNATTRIBUTED));
	$assignStatic(Flags$Flag::ANONCONSTR, $new(Flags$Flag, "ANONCONSTR"_s, 28, $Flags::ANONCONSTR));
	$assignStatic(Flags$Flag::ACYCLIC, $new(Flags$Flag, "ACYCLIC"_s, 29, $Flags::ACYCLIC));
	$assignStatic(Flags$Flag::PARAMETER, $new(Flags$Flag, "PARAMETER"_s, 30, $Flags::PARAMETER));
	$assignStatic(Flags$Flag::VARARGS, $new(Flags$Flag, "VARARGS"_s, 31, $Flags::VARARGS));
	$assignStatic(Flags$Flag::ACYCLIC_ANN, $new(Flags$Flag, "ACYCLIC_ANN"_s, 32, $Flags::ACYCLIC_ANN));
	$assignStatic(Flags$Flag::GENERATEDCONSTR, $new(Flags$Flag, "GENERATEDCONSTR"_s, 33, $Flags::GENERATEDCONSTR));
	$assignStatic(Flags$Flag::HYPOTHETICAL, $new(Flags$Flag, "HYPOTHETICAL"_s, 34, $Flags::HYPOTHETICAL));
	$assignStatic(Flags$Flag::PROPRIETARY, $new(Flags$Flag, "PROPRIETARY"_s, 35, $Flags::PROPRIETARY));
	$assignStatic(Flags$Flag::UNION, $new(Flags$Flag, "UNION"_s, 36, $Flags::UNION));
	$assignStatic(Flags$Flag::EFFECTIVELY_FINAL, $new(Flags$Flag, "EFFECTIVELY_FINAL"_s, 37, $Flags::EFFECTIVELY_FINAL));
	$assignStatic(Flags$Flag::CLASH, $new(Flags$Flag, "CLASH"_s, 38, $Flags::CLASH));
	$assignStatic(Flags$Flag::AUXILIARY, $new(Flags$Flag, "AUXILIARY"_s, 39, $Flags::AUXILIARY));
	$assignStatic(Flags$Flag::NOT_IN_PROFILE, $new(Flags$Flag, "NOT_IN_PROFILE"_s, 40, $Flags::NOT_IN_PROFILE));
	$assignStatic(Flags$Flag::BAD_OVERRIDE, $new(Flags$Flag, "BAD_OVERRIDE"_s, 41, $Flags::BAD_OVERRIDE));
	$assignStatic(Flags$Flag::SIGNATURE_POLYMORPHIC, $new(Flags$Flag, "SIGNATURE_POLYMORPHIC"_s, 42, $Flags::SIGNATURE_POLYMORPHIC));
	$assignStatic(Flags$Flag::THROWS, $new(Flags$Flag, "THROWS"_s, 43, $Flags::THROWS));
	$assignStatic(Flags$Flag::LAMBDA_METHOD, $new(Flags$Flag, "LAMBDA_METHOD"_s, 44, $Flags::LAMBDA_METHOD));
	$assignStatic(Flags$Flag::TYPE_TRANSLATED, $new(Flags$Flag, "TYPE_TRANSLATED"_s, 45, $Flags::TYPE_TRANSLATED));
	$assignStatic(Flags$Flag::MODULE, $new(Flags$Flag, "MODULE"_s, 46, $Flags::MODULE));
	$assignStatic(Flags$Flag::AUTOMATIC_MODULE, $new(Flags$Flag, "AUTOMATIC_MODULE"_s, 47, $Flags::AUTOMATIC_MODULE));
	$assignStatic(Flags$Flag::SYSTEM_MODULE, $new(Flags$Flag, "SYSTEM_MODULE"_s, 48, $Flags::SYSTEM_MODULE));
	$assignStatic(Flags$Flag::DEPRECATED_ANNOTATION, $new(Flags$Flag, "DEPRECATED_ANNOTATION"_s, 49, $Flags::DEPRECATED_ANNOTATION));
	$assignStatic(Flags$Flag::DEPRECATED_REMOVAL, $new(Flags$Flag, "DEPRECATED_REMOVAL"_s, 50, $Flags::DEPRECATED_REMOVAL));
	$assignStatic(Flags$Flag::HAS_RESOURCE, $new(Flags$Flag, "HAS_RESOURCE"_s, 51, $Flags::HAS_RESOURCE));
	$assignStatic(Flags$Flag::POTENTIALLY_AMBIGUOUS, $new(Flags$Flag, "POTENTIALLY_AMBIGUOUS"_s, 52, $Flags::POTENTIALLY_AMBIGUOUS));
	$assignStatic(Flags$Flag::ANONCONSTR_BASED, $new(Flags$Flag, "ANONCONSTR_BASED"_s, 53, $Flags::ANONCONSTR_BASED));
	$assignStatic(Flags$Flag::NAME_FILLED, $new(Flags$Flag, "NAME_FILLED"_s, 54, $Flags::NAME_FILLED));
	$assignStatic(Flags$Flag::PREVIEW_API, $new(Flags$Flag, "PREVIEW_API"_s, 55, $Flags::PREVIEW_API));
	$assignStatic(Flags$Flag::PREVIEW_REFLECTIVE, $new(Flags$Flag, "PREVIEW_REFLECTIVE"_s, 56, $Flags::PREVIEW_REFLECTIVE));
	$assignStatic(Flags$Flag::MATCH_BINDING, $new(Flags$Flag, "MATCH_BINDING"_s, 57, $Flags::MATCH_BINDING));
	$assignStatic(Flags$Flag::MATCH_BINDING_TO_OUTER, $new(Flags$Flag, "MATCH_BINDING_TO_OUTER"_s, 58, $Flags::MATCH_BINDING_TO_OUTER));
	$assignStatic(Flags$Flag::RECORD, $new(Flags$Flag, "RECORD"_s, 59, $Flags::RECORD));
	$assignStatic(Flags$Flag::RECOVERABLE, $new(Flags$Flag, "RECOVERABLE"_s, 60, $Flags::RECOVERABLE));
	$assignStatic(Flags$Flag::SEALED, $new(Flags$Flag, "SEALED"_s, 61, $Flags::SEALED));
	$assignStatic(Flags$Flag::NON_SEALED, $new($Flags$Flag$1, "NON_SEALED"_s, 62, $Flags::NON_SEALED));
	$assignStatic(Flags$Flag::$VALUES, Flags$Flag::$values());
}

Flags$Flag::Flags$Flag() {
}

$Class* Flags$Flag::load$($String* name, bool initialize) {
	$loadClass(Flags$Flag, name, initialize, &_Flags$Flag_ClassInfo_, clinit$Flags$Flag, allocate$Flags$Flag);
	return class$;
}

$Class* Flags$Flag::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com