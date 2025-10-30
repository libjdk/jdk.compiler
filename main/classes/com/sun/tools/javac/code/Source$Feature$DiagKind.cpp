#include <com/sun/tools/javac/code/Source$Feature$DiagKind.h>

#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NORMAL
#undef PLURAL

using $Source$Feature$DiagKindArray = $Array<::com::sun::tools::javac::code::Source$Feature$DiagKind>;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
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

$FieldInfo _Source$Feature$DiagKind_FieldInfo_[] = {
	{"NORMAL", "Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature$DiagKind, NORMAL)},
	{"PLURAL", "Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature$DiagKind, PLURAL)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Source$Feature$DiagKind, $VALUES)},
	{}
};

$MethodInfo _Source$Feature$DiagKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Source$Feature$DiagKindArray*(*)()>(&Source$Feature$DiagKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Source$Feature$DiagKind::*)($String*,int32_t)>(&Source$Feature$DiagKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Source$Feature$DiagKind*(*)($String*)>(&Source$Feature$DiagKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Source$Feature$DiagKindArray*(*)()>(&Source$Feature$DiagKind::values))},
	{}
};

$InnerClassInfo _Source$Feature$DiagKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Source$Feature", "com.sun.tools.javac.code.Source", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Source$Feature$DiagKind", "com.sun.tools.javac.code.Source$Feature", "DiagKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Source$Feature$DiagKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Source$Feature$DiagKind",
	"java.lang.Enum",
	nullptr,
	_Source$Feature$DiagKind_FieldInfo_,
	_Source$Feature$DiagKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Source$Feature$DiagKind;>;",
	nullptr,
	_Source$Feature$DiagKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Source"
};

$Object* allocate$Source$Feature$DiagKind($Class* clazz) {
	return $of($alloc(Source$Feature$DiagKind));
}

Source$Feature$DiagKind* Source$Feature$DiagKind::NORMAL = nullptr;
Source$Feature$DiagKind* Source$Feature$DiagKind::PLURAL = nullptr;
$Source$Feature$DiagKindArray* Source$Feature$DiagKind::$VALUES = nullptr;

$Source$Feature$DiagKindArray* Source$Feature$DiagKind::$values() {
	$init(Source$Feature$DiagKind);
	return $new($Source$Feature$DiagKindArray, {
		Source$Feature$DiagKind::NORMAL,
		Source$Feature$DiagKind::PLURAL
	});
}

$Source$Feature$DiagKindArray* Source$Feature$DiagKind::values() {
	$init(Source$Feature$DiagKind);
	return $cast($Source$Feature$DiagKindArray, Source$Feature$DiagKind::$VALUES->clone());
}

Source$Feature$DiagKind* Source$Feature$DiagKind::valueOf($String* name) {
	$init(Source$Feature$DiagKind);
	return $cast(Source$Feature$DiagKind, $Enum::valueOf(Source$Feature$DiagKind::class$, name));
}

void Source$Feature$DiagKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Source$Feature$DiagKind($Class* class$) {
	$assignStatic(Source$Feature$DiagKind::NORMAL, $new(Source$Feature$DiagKind, "NORMAL"_s, 0));
	$assignStatic(Source$Feature$DiagKind::PLURAL, $new(Source$Feature$DiagKind, "PLURAL"_s, 1));
	$assignStatic(Source$Feature$DiagKind::$VALUES, Source$Feature$DiagKind::$values());
}

Source$Feature$DiagKind::Source$Feature$DiagKind() {
}

$Class* Source$Feature$DiagKind::load$($String* name, bool initialize) {
	$loadClass(Source$Feature$DiagKind, name, initialize, &_Source$Feature$DiagKind_ClassInfo_, clinit$Source$Feature$DiagKind, allocate$Source$Feature$DiagKind);
	return class$;
}

$Class* Source$Feature$DiagKind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com