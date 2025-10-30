#include <com/sun/tools/javac/code/Lint$LintCategory.h>

#include <com/sun/tools/javac/code/Lint.h>
#include <java/lang/Enum.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef AUXILIARYCLASS
#undef CAST
#undef CLASSFILE
#undef DEPRECATION
#undef DEP_ANN
#undef DIVZERO
#undef EMPTY
#undef EXPORTS
#undef FALLTHROUGH
#undef FINALLY
#undef MISSING_EXPLICIT_CTOR
#undef MODULE
#undef OPENS
#undef OPTIONS
#undef OVERLOADS
#undef OVERRIDES
#undef PATH
#undef PREVIEW
#undef PROCESSING
#undef RAW
#undef REMOVAL
#undef REQUIRES_AUTOMATIC
#undef REQUIRES_TRANSITIVE_AUTOMATIC
#undef SERIAL
#undef STATIC
#undef STRICTFP
#undef SYNCHRONIZATION
#undef TEXT_BLOCKS
#undef TRY
#undef UNCHECKED
#undef VARARGS

using $Lint$LintCategoryArray = $Array<::com::sun::tools::javac::code::Lint$LintCategory>;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Lint$LintCategory_FieldInfo_[] = {
	{"AUXILIARYCLASS", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, AUXILIARYCLASS)},
	{"CAST", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, CAST)},
	{"CLASSFILE", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, CLASSFILE)},
	{"DEPRECATION", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, DEPRECATION)},
	{"DEP_ANN", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, DEP_ANN)},
	{"DIVZERO", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, DIVZERO)},
	{"EMPTY", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, EMPTY)},
	{"EXPORTS", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, EXPORTS)},
	{"FALLTHROUGH", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, FALLTHROUGH)},
	{"FINALLY", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, FINALLY)},
	{"MISSING_EXPLICIT_CTOR", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, MISSING_EXPLICIT_CTOR)},
	{"MODULE", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, MODULE)},
	{"OPENS", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, OPENS)},
	{"OPTIONS", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, OPTIONS)},
	{"OVERLOADS", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, OVERLOADS)},
	{"OVERRIDES", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, OVERRIDES)},
	{"PATH", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, PATH)},
	{"PROCESSING", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, PROCESSING)},
	{"RAW", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, RAW)},
	{"REMOVAL", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, REMOVAL)},
	{"REQUIRES_AUTOMATIC", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, REQUIRES_AUTOMATIC)},
	{"REQUIRES_TRANSITIVE_AUTOMATIC", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, REQUIRES_TRANSITIVE_AUTOMATIC)},
	{"SERIAL", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, SERIAL)},
	{"STATIC", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, STATIC)},
	{"STRICTFP", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, STRICTFP)},
	{"SYNCHRONIZATION", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, SYNCHRONIZATION)},
	{"TEXT_BLOCKS", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, TEXT_BLOCKS)},
	{"TRY", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, TRY)},
	{"UNCHECKED", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, UNCHECKED)},
	{"VARARGS", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, VARARGS)},
	{"PREVIEW", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Lint$LintCategory, PREVIEW)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Lint$LintCategory, $VALUES)},
	{"option", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Lint$LintCategory, option)},
	{"hidden", "Z", nullptr, $PUBLIC | $FINAL, $field(Lint$LintCategory, hidden)},
	{}
};

$MethodInfo _Lint$LintCategory_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Lint$LintCategoryArray*(*)()>(&Lint$LintCategory::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Lint$LintCategory::*)($String*,int32_t,$String*)>(&Lint$LintCategory::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Z)V", "(Ljava/lang/String;Z)V", $PRIVATE, $method(static_cast<void(Lint$LintCategory::*)($String*,int32_t,$String*,bool)>(&Lint$LintCategory::init$))},
	{"get", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $STATIC, $method(static_cast<Lint$LintCategory*(*)($String*)>(&Lint$LintCategory::get))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Lint$LintCategory*(*)($String*)>(&Lint$LintCategory::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Lint$LintCategoryArray*(*)()>(&Lint$LintCategory::values))},
	{}
};

$InnerClassInfo _Lint$LintCategory_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Lint$LintCategory", "com.sun.tools.javac.code.Lint", "LintCategory", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Lint$LintCategory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Lint$LintCategory",
	"java.lang.Enum",
	nullptr,
	_Lint$LintCategory_FieldInfo_,
	_Lint$LintCategory_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Lint$LintCategory;>;",
	nullptr,
	_Lint$LintCategory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Lint"
};

$Object* allocate$Lint$LintCategory($Class* clazz) {
	return $of($alloc(Lint$LintCategory));
}

Lint$LintCategory* Lint$LintCategory::AUXILIARYCLASS = nullptr;
Lint$LintCategory* Lint$LintCategory::CAST = nullptr;
Lint$LintCategory* Lint$LintCategory::CLASSFILE = nullptr;
Lint$LintCategory* Lint$LintCategory::DEPRECATION = nullptr;
Lint$LintCategory* Lint$LintCategory::DEP_ANN = nullptr;
Lint$LintCategory* Lint$LintCategory::DIVZERO = nullptr;
Lint$LintCategory* Lint$LintCategory::EMPTY = nullptr;
Lint$LintCategory* Lint$LintCategory::EXPORTS = nullptr;
Lint$LintCategory* Lint$LintCategory::FALLTHROUGH = nullptr;
Lint$LintCategory* Lint$LintCategory::FINALLY = nullptr;
Lint$LintCategory* Lint$LintCategory::MISSING_EXPLICIT_CTOR = nullptr;
Lint$LintCategory* Lint$LintCategory::MODULE = nullptr;
Lint$LintCategory* Lint$LintCategory::OPENS = nullptr;
Lint$LintCategory* Lint$LintCategory::OPTIONS = nullptr;
Lint$LintCategory* Lint$LintCategory::OVERLOADS = nullptr;
Lint$LintCategory* Lint$LintCategory::OVERRIDES = nullptr;
Lint$LintCategory* Lint$LintCategory::PATH = nullptr;
Lint$LintCategory* Lint$LintCategory::PROCESSING = nullptr;
Lint$LintCategory* Lint$LintCategory::RAW = nullptr;
Lint$LintCategory* Lint$LintCategory::REMOVAL = nullptr;
Lint$LintCategory* Lint$LintCategory::REQUIRES_AUTOMATIC = nullptr;
Lint$LintCategory* Lint$LintCategory::REQUIRES_TRANSITIVE_AUTOMATIC = nullptr;
Lint$LintCategory* Lint$LintCategory::SERIAL = nullptr;
Lint$LintCategory* Lint$LintCategory::STATIC = nullptr;
Lint$LintCategory* Lint$LintCategory::STRICTFP = nullptr;
Lint$LintCategory* Lint$LintCategory::SYNCHRONIZATION = nullptr;
Lint$LintCategory* Lint$LintCategory::TEXT_BLOCKS = nullptr;
Lint$LintCategory* Lint$LintCategory::TRY = nullptr;
Lint$LintCategory* Lint$LintCategory::UNCHECKED = nullptr;
Lint$LintCategory* Lint$LintCategory::VARARGS = nullptr;
Lint$LintCategory* Lint$LintCategory::PREVIEW = nullptr;
$Lint$LintCategoryArray* Lint$LintCategory::$VALUES = nullptr;

$Lint$LintCategoryArray* Lint$LintCategory::$values() {
	$init(Lint$LintCategory);
	return $new($Lint$LintCategoryArray, {
		Lint$LintCategory::AUXILIARYCLASS,
		Lint$LintCategory::CAST,
		Lint$LintCategory::CLASSFILE,
		Lint$LintCategory::DEPRECATION,
		Lint$LintCategory::DEP_ANN,
		Lint$LintCategory::DIVZERO,
		Lint$LintCategory::EMPTY,
		Lint$LintCategory::EXPORTS,
		Lint$LintCategory::FALLTHROUGH,
		Lint$LintCategory::FINALLY,
		Lint$LintCategory::MISSING_EXPLICIT_CTOR,
		Lint$LintCategory::MODULE,
		Lint$LintCategory::OPENS,
		Lint$LintCategory::OPTIONS,
		Lint$LintCategory::OVERLOADS,
		Lint$LintCategory::OVERRIDES,
		Lint$LintCategory::PATH,
		Lint$LintCategory::PROCESSING,
		Lint$LintCategory::RAW,
		Lint$LintCategory::REMOVAL,
		Lint$LintCategory::REQUIRES_AUTOMATIC,
		Lint$LintCategory::REQUIRES_TRANSITIVE_AUTOMATIC,
		Lint$LintCategory::SERIAL,
		Lint$LintCategory::STATIC,
		Lint$LintCategory::STRICTFP,
		Lint$LintCategory::SYNCHRONIZATION,
		Lint$LintCategory::TEXT_BLOCKS,
		Lint$LintCategory::TRY,
		Lint$LintCategory::UNCHECKED,
		Lint$LintCategory::VARARGS,
		Lint$LintCategory::PREVIEW
	});
}

$Lint$LintCategoryArray* Lint$LintCategory::values() {
	$init(Lint$LintCategory);
	return $cast($Lint$LintCategoryArray, Lint$LintCategory::$VALUES->clone());
}

Lint$LintCategory* Lint$LintCategory::valueOf($String* name) {
	$init(Lint$LintCategory);
	return $cast(Lint$LintCategory, $Enum::valueOf(Lint$LintCategory::class$, name));
}

void Lint$LintCategory::init$($String* $enum$name, int32_t $enum$ordinal, $String* option) {
	Lint$LintCategory::init$($enum$name, $enum$ordinal, option, false);
}

void Lint$LintCategory::init$($String* $enum$name, int32_t $enum$ordinal, $String* option, bool hidden) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, option, option);
	this->hidden = hidden;
	$init($Lint);
	$nc($Lint::map)->put(option, this);
}

Lint$LintCategory* Lint$LintCategory::get($String* option) {
	$init(Lint$LintCategory);
	$init($Lint);
	return $cast(Lint$LintCategory, $nc($Lint::map)->get(option));
}

void clinit$Lint$LintCategory($Class* class$) {
	$assignStatic(Lint$LintCategory::AUXILIARYCLASS, $new(Lint$LintCategory, "AUXILIARYCLASS"_s, 0, "auxiliaryclass"_s));
	$assignStatic(Lint$LintCategory::CAST, $new(Lint$LintCategory, "CAST"_s, 1, "cast"_s));
	$assignStatic(Lint$LintCategory::CLASSFILE, $new(Lint$LintCategory, "CLASSFILE"_s, 2, "classfile"_s));
	$assignStatic(Lint$LintCategory::DEPRECATION, $new(Lint$LintCategory, "DEPRECATION"_s, 3, "deprecation"_s));
	$assignStatic(Lint$LintCategory::DEP_ANN, $new(Lint$LintCategory, "DEP_ANN"_s, 4, "dep-ann"_s));
	$assignStatic(Lint$LintCategory::DIVZERO, $new(Lint$LintCategory, "DIVZERO"_s, 5, "divzero"_s));
	$assignStatic(Lint$LintCategory::EMPTY, $new(Lint$LintCategory, "EMPTY"_s, 6, "empty"_s));
	$assignStatic(Lint$LintCategory::EXPORTS, $new(Lint$LintCategory, "EXPORTS"_s, 7, "exports"_s));
	$assignStatic(Lint$LintCategory::FALLTHROUGH, $new(Lint$LintCategory, "FALLTHROUGH"_s, 8, "fallthrough"_s));
	$assignStatic(Lint$LintCategory::FINALLY, $new(Lint$LintCategory, "FINALLY"_s, 9, "finally"_s));
	$assignStatic(Lint$LintCategory::MISSING_EXPLICIT_CTOR, $new(Lint$LintCategory, "MISSING_EXPLICIT_CTOR"_s, 10, "missing-explicit-ctor"_s));
	$assignStatic(Lint$LintCategory::MODULE, $new(Lint$LintCategory, "MODULE"_s, 11, "module"_s));
	$assignStatic(Lint$LintCategory::OPENS, $new(Lint$LintCategory, "OPENS"_s, 12, "opens"_s));
	$assignStatic(Lint$LintCategory::OPTIONS, $new(Lint$LintCategory, "OPTIONS"_s, 13, "options"_s));
	$assignStatic(Lint$LintCategory::OVERLOADS, $new(Lint$LintCategory, "OVERLOADS"_s, 14, "overloads"_s));
	$assignStatic(Lint$LintCategory::OVERRIDES, $new(Lint$LintCategory, "OVERRIDES"_s, 15, "overrides"_s));
	$assignStatic(Lint$LintCategory::PATH, $new(Lint$LintCategory, "PATH"_s, 16, "path"_s));
	$assignStatic(Lint$LintCategory::PROCESSING, $new(Lint$LintCategory, "PROCESSING"_s, 17, "processing"_s));
	$assignStatic(Lint$LintCategory::RAW, $new(Lint$LintCategory, "RAW"_s, 18, "rawtypes"_s));
	$assignStatic(Lint$LintCategory::REMOVAL, $new(Lint$LintCategory, "REMOVAL"_s, 19, "removal"_s));
	$assignStatic(Lint$LintCategory::REQUIRES_AUTOMATIC, $new(Lint$LintCategory, "REQUIRES_AUTOMATIC"_s, 20, "requires-automatic"_s));
	$assignStatic(Lint$LintCategory::REQUIRES_TRANSITIVE_AUTOMATIC, $new(Lint$LintCategory, "REQUIRES_TRANSITIVE_AUTOMATIC"_s, 21, "requires-transitive-automatic"_s));
	$assignStatic(Lint$LintCategory::SERIAL, $new(Lint$LintCategory, "SERIAL"_s, 22, "serial"_s));
	$assignStatic(Lint$LintCategory::STATIC, $new(Lint$LintCategory, "STATIC"_s, 23, "static"_s));
	$assignStatic(Lint$LintCategory::STRICTFP, $new(Lint$LintCategory, "STRICTFP"_s, 24, "strictfp"_s));
	$assignStatic(Lint$LintCategory::SYNCHRONIZATION, $new(Lint$LintCategory, "SYNCHRONIZATION"_s, 25, "synchronization"_s));
	$assignStatic(Lint$LintCategory::TEXT_BLOCKS, $new(Lint$LintCategory, "TEXT_BLOCKS"_s, 26, "text-blocks"_s));
	$assignStatic(Lint$LintCategory::TRY, $new(Lint$LintCategory, "TRY"_s, 27, "try"_s));
	$assignStatic(Lint$LintCategory::UNCHECKED, $new(Lint$LintCategory, "UNCHECKED"_s, 28, "unchecked"_s));
	$assignStatic(Lint$LintCategory::VARARGS, $new(Lint$LintCategory, "VARARGS"_s, 29, "varargs"_s));
	$assignStatic(Lint$LintCategory::PREVIEW, $new(Lint$LintCategory, "PREVIEW"_s, 30, "preview"_s));
	$assignStatic(Lint$LintCategory::$VALUES, Lint$LintCategory::$values());
}

Lint$LintCategory::Lint$LintCategory() {
}

$Class* Lint$LintCategory::load$($String* name, bool initialize) {
	$loadClass(Lint$LintCategory, name, initialize, &_Lint$LintCategory_ClassInfo_, clinit$Lint$LintCategory, allocate$Lint$LintCategory);
	return class$;
}

$Class* Lint$LintCategory::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com