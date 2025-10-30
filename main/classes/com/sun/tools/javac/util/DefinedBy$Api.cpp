#include <com/sun/tools/javac/util/DefinedBy$Api.h>

#include <com/sun/tools/javac/util/DefinedBy.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANNOTATION_PROCESSING
#undef COMPILER
#undef COMPILER_TREE
#undef LANGUAGE_MODEL

using $DefinedBy$ApiArray = $Array<::com::sun::tools::javac::util::DefinedBy$Api>;
using $DefinedBy = ::com::sun::tools::javac::util::DefinedBy;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _DefinedBy$Api_FieldInfo_[] = {
	{"ANNOTATION_PROCESSING", "Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DefinedBy$Api, ANNOTATION_PROCESSING)},
	{"COMPILER", "Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DefinedBy$Api, COMPILER)},
	{"COMPILER_TREE", "Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DefinedBy$Api, COMPILER_TREE)},
	{"LANGUAGE_MODEL", "Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DefinedBy$Api, LANGUAGE_MODEL)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DefinedBy$Api, $VALUES)},
	{"packageRoot", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DefinedBy$Api, packageRoot)},
	{}
};

$MethodInfo _DefinedBy$Api_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DefinedBy$ApiArray*(*)()>(&DefinedBy$Api::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(DefinedBy$Api::*)($String*,int32_t,$String*)>(&DefinedBy$Api::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DefinedBy$Api*(*)($String*)>(&DefinedBy$Api::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DefinedBy$ApiArray*(*)()>(&DefinedBy$Api::values))},
	{}
};

$InnerClassInfo _DefinedBy$Api_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.DefinedBy$Api", "com.sun.tools.javac.util.DefinedBy", "Api", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DefinedBy$Api_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.DefinedBy$Api",
	"java.lang.Enum",
	nullptr,
	_DefinedBy$Api_FieldInfo_,
	_DefinedBy$Api_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/DefinedBy$Api;>;",
	nullptr,
	_DefinedBy$Api_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.DefinedBy"
};

$Object* allocate$DefinedBy$Api($Class* clazz) {
	return $of($alloc(DefinedBy$Api));
}

DefinedBy$Api* DefinedBy$Api::ANNOTATION_PROCESSING = nullptr;
DefinedBy$Api* DefinedBy$Api::COMPILER = nullptr;
DefinedBy$Api* DefinedBy$Api::COMPILER_TREE = nullptr;
DefinedBy$Api* DefinedBy$Api::LANGUAGE_MODEL = nullptr;
$DefinedBy$ApiArray* DefinedBy$Api::$VALUES = nullptr;

$DefinedBy$ApiArray* DefinedBy$Api::$values() {
	$init(DefinedBy$Api);
	return $new($DefinedBy$ApiArray, {
		DefinedBy$Api::ANNOTATION_PROCESSING,
		DefinedBy$Api::COMPILER,
		DefinedBy$Api::COMPILER_TREE,
		DefinedBy$Api::LANGUAGE_MODEL
	});
}

$DefinedBy$ApiArray* DefinedBy$Api::values() {
	$init(DefinedBy$Api);
	return $cast($DefinedBy$ApiArray, DefinedBy$Api::$VALUES->clone());
}

DefinedBy$Api* DefinedBy$Api::valueOf($String* name) {
	$init(DefinedBy$Api);
	return $cast(DefinedBy$Api, $Enum::valueOf(DefinedBy$Api::class$, name));
}

void DefinedBy$Api::init$($String* $enum$name, int32_t $enum$ordinal, $String* packageRoot) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, packageRoot, packageRoot);
}

void clinit$DefinedBy$Api($Class* class$) {
	$assignStatic(DefinedBy$Api::ANNOTATION_PROCESSING, $new(DefinedBy$Api, "ANNOTATION_PROCESSING"_s, 0, "javax.annotation.processing"_s));
	$assignStatic(DefinedBy$Api::COMPILER, $new(DefinedBy$Api, "COMPILER"_s, 1, "javax.tools"_s));
	$assignStatic(DefinedBy$Api::COMPILER_TREE, $new(DefinedBy$Api, "COMPILER_TREE"_s, 2, "com.sun.source"_s));
	$assignStatic(DefinedBy$Api::LANGUAGE_MODEL, $new(DefinedBy$Api, "LANGUAGE_MODEL"_s, 3, "javax.lang.model"_s));
	$assignStatic(DefinedBy$Api::$VALUES, DefinedBy$Api::$values());
}

DefinedBy$Api::DefinedBy$Api() {
}

$Class* DefinedBy$Api::load$($String* name, bool initialize) {
	$loadClass(DefinedBy$Api, name, initialize, &_DefinedBy$Api_ClassInfo_, clinit$DefinedBy$Api, allocate$DefinedBy$Api);
	return class$;
}

$Class* DefinedBy$Api::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com