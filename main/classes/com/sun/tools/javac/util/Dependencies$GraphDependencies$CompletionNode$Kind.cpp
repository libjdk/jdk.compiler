#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind.h>

#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef SOURCE

using $Dependencies$GraphDependencies$CompletionNode$KindArray = $Array<::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind>;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $Dependencies$GraphDependencies$CompletionNode = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode;
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

$FieldInfo _Dependencies$GraphDependencies$CompletionNode$Kind_FieldInfo_[] = {
	{"SOURCE", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$GraphDependencies$CompletionNode$Kind, SOURCE)},
	{"CLASS", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$GraphDependencies$CompletionNode$Kind, CLASS)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Dependencies$GraphDependencies$CompletionNode$Kind, $VALUES)},
	{"dotStyle", "Ljava/lang/String;", nullptr, $FINAL, $field(Dependencies$GraphDependencies$CompletionNode$Kind, dotStyle)},
	{}
};

$MethodInfo _Dependencies$GraphDependencies$CompletionNode$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Dependencies$GraphDependencies$CompletionNode$KindArray*(*)()>(&Dependencies$GraphDependencies$CompletionNode$Kind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Dependencies$GraphDependencies$CompletionNode$Kind::*)($String*,int32_t,$String*)>(&Dependencies$GraphDependencies$CompletionNode$Kind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Dependencies$GraphDependencies$CompletionNode$Kind*(*)($String*)>(&Dependencies$GraphDependencies$CompletionNode$Kind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dependencies$GraphDependencies$CompletionNode$KindArray*(*)()>(&Dependencies$GraphDependencies$CompletionNode$Kind::values))},
	{}
};

$InnerClassInfo _Dependencies$GraphDependencies$CompletionNode$Kind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "CompletionNode", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode$Kind", "com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode", "Kind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Dependencies$GraphDependencies$CompletionNode$Kind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode$Kind",
	"java.lang.Enum",
	nullptr,
	_Dependencies$GraphDependencies$CompletionNode$Kind_FieldInfo_,
	_Dependencies$GraphDependencies$CompletionNode$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;>;",
	nullptr,
	_Dependencies$GraphDependencies$CompletionNode$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies"
};

$Object* allocate$Dependencies$GraphDependencies$CompletionNode$Kind($Class* clazz) {
	return $of($alloc(Dependencies$GraphDependencies$CompletionNode$Kind));
}

Dependencies$GraphDependencies$CompletionNode$Kind* Dependencies$GraphDependencies$CompletionNode$Kind::SOURCE = nullptr;
Dependencies$GraphDependencies$CompletionNode$Kind* Dependencies$GraphDependencies$CompletionNode$Kind::CLASS = nullptr;
$Dependencies$GraphDependencies$CompletionNode$KindArray* Dependencies$GraphDependencies$CompletionNode$Kind::$VALUES = nullptr;

$Dependencies$GraphDependencies$CompletionNode$KindArray* Dependencies$GraphDependencies$CompletionNode$Kind::$values() {
	$init(Dependencies$GraphDependencies$CompletionNode$Kind);
	return $new($Dependencies$GraphDependencies$CompletionNode$KindArray, {
		Dependencies$GraphDependencies$CompletionNode$Kind::SOURCE,
		Dependencies$GraphDependencies$CompletionNode$Kind::CLASS
	});
}

$Dependencies$GraphDependencies$CompletionNode$KindArray* Dependencies$GraphDependencies$CompletionNode$Kind::values() {
	$init(Dependencies$GraphDependencies$CompletionNode$Kind);
	return $cast($Dependencies$GraphDependencies$CompletionNode$KindArray, Dependencies$GraphDependencies$CompletionNode$Kind::$VALUES->clone());
}

Dependencies$GraphDependencies$CompletionNode$Kind* Dependencies$GraphDependencies$CompletionNode$Kind::valueOf($String* name) {
	$init(Dependencies$GraphDependencies$CompletionNode$Kind);
	return $cast(Dependencies$GraphDependencies$CompletionNode$Kind, $Enum::valueOf(Dependencies$GraphDependencies$CompletionNode$Kind::class$, name));
}

void Dependencies$GraphDependencies$CompletionNode$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $String* dotStyle) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, dotStyle, dotStyle);
}

void clinit$Dependencies$GraphDependencies$CompletionNode$Kind($Class* class$) {
	$assignStatic(Dependencies$GraphDependencies$CompletionNode$Kind::SOURCE, $new(Dependencies$GraphDependencies$CompletionNode$Kind, "SOURCE"_s, 0, "solid"_s));
	$assignStatic(Dependencies$GraphDependencies$CompletionNode$Kind::CLASS, $new(Dependencies$GraphDependencies$CompletionNode$Kind, "CLASS"_s, 1, "dotted"_s));
	$assignStatic(Dependencies$GraphDependencies$CompletionNode$Kind::$VALUES, Dependencies$GraphDependencies$CompletionNode$Kind::$values());
}

Dependencies$GraphDependencies$CompletionNode$Kind::Dependencies$GraphDependencies$CompletionNode$Kind() {
}

$Class* Dependencies$GraphDependencies$CompletionNode$Kind::load$($String* name, bool initialize) {
	$loadClass(Dependencies$GraphDependencies$CompletionNode$Kind, name, initialize, &_Dependencies$GraphDependencies$CompletionNode$Kind_ClassInfo_, clinit$Dependencies$GraphDependencies$CompletionNode$Kind, allocate$Dependencies$GraphDependencies$CompletionNode$Kind);
	return class$;
}

$Class* Dependencies$GraphDependencies$CompletionNode$Kind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com