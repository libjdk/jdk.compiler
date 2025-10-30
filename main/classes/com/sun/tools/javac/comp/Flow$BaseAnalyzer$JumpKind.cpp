#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind.h>

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind$1.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind$2.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind$3.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BREAK
#undef CONTINUE
#undef YIELD

using $Flow$BaseAnalyzer$JumpKindArray = $Array<::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind>;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
using $Flow$BaseAnalyzer$JumpKind$1 = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind$1;
using $Flow$BaseAnalyzer$JumpKind$2 = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind$2;
using $Flow$BaseAnalyzer$JumpKind$3 = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind$3;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$BaseAnalyzer$JumpKind_FieldInfo_[] = {
	{"BREAK", "Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$BaseAnalyzer$JumpKind, BREAK)},
	{"CONTINUE", "Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$BaseAnalyzer$JumpKind, CONTINUE)},
	{"YIELD", "Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$BaseAnalyzer$JumpKind, YIELD)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Flow$BaseAnalyzer$JumpKind, $VALUES)},
	{"treeTag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $FINAL, $field(Flow$BaseAnalyzer$JumpKind, treeTag)},
	{}
};

$MethodInfo _Flow$BaseAnalyzer$JumpKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Flow$BaseAnalyzer$JumpKindArray*(*)()>(&Flow$BaseAnalyzer$JumpKind::$values))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/tree/JCTree$Tag;)V", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)V", $PRIVATE, $method(static_cast<void(Flow$BaseAnalyzer$JumpKind::*)($String*,int32_t,$JCTree$Tag*)>(&Flow$BaseAnalyzer$JumpKind::init$))},
	{"getTarget", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Flow$BaseAnalyzer$JumpKind*(*)($String*)>(&Flow$BaseAnalyzer$JumpKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Flow$BaseAnalyzer$JumpKindArray*(*)()>(&Flow$BaseAnalyzer$JumpKind::values))},
	{}
};

$InnerClassInfo _Flow$BaseAnalyzer$JumpKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "JumpKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$3", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Flow$BaseAnalyzer$JumpKind_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind",
	"java.lang.Enum",
	nullptr,
	_Flow$BaseAnalyzer$JumpKind_FieldInfo_,
	_Flow$BaseAnalyzer$JumpKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind;>;",
	nullptr,
	_Flow$BaseAnalyzer$JumpKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$BaseAnalyzer$JumpKind($Class* clazz) {
	return $of($alloc(Flow$BaseAnalyzer$JumpKind));
}

Flow$BaseAnalyzer$JumpKind* Flow$BaseAnalyzer$JumpKind::BREAK = nullptr;
Flow$BaseAnalyzer$JumpKind* Flow$BaseAnalyzer$JumpKind::CONTINUE = nullptr;
Flow$BaseAnalyzer$JumpKind* Flow$BaseAnalyzer$JumpKind::YIELD = nullptr;
$Flow$BaseAnalyzer$JumpKindArray* Flow$BaseAnalyzer$JumpKind::$VALUES = nullptr;

$Flow$BaseAnalyzer$JumpKindArray* Flow$BaseAnalyzer$JumpKind::$values() {
	$init(Flow$BaseAnalyzer$JumpKind);
	return $new($Flow$BaseAnalyzer$JumpKindArray, {
		Flow$BaseAnalyzer$JumpKind::BREAK,
		Flow$BaseAnalyzer$JumpKind::CONTINUE,
		Flow$BaseAnalyzer$JumpKind::YIELD
	});
}

$Flow$BaseAnalyzer$JumpKindArray* Flow$BaseAnalyzer$JumpKind::values() {
	$init(Flow$BaseAnalyzer$JumpKind);
	return $cast($Flow$BaseAnalyzer$JumpKindArray, Flow$BaseAnalyzer$JumpKind::$VALUES->clone());
}

Flow$BaseAnalyzer$JumpKind* Flow$BaseAnalyzer$JumpKind::valueOf($String* name) {
	$init(Flow$BaseAnalyzer$JumpKind);
	return $cast(Flow$BaseAnalyzer$JumpKind, $Enum::valueOf(Flow$BaseAnalyzer$JumpKind::class$, name));
}

void Flow$BaseAnalyzer$JumpKind::init$($String* $enum$name, int32_t $enum$ordinal, $JCTree$Tag* treeTag) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, treeTag, treeTag);
}

void clinit$Flow$BaseAnalyzer$JumpKind($Class* class$) {
	$init($JCTree$Tag);
	$assignStatic(Flow$BaseAnalyzer$JumpKind::BREAK, $new($Flow$BaseAnalyzer$JumpKind$1, "BREAK"_s, 0, $JCTree$Tag::BREAK));
	$assignStatic(Flow$BaseAnalyzer$JumpKind::CONTINUE, $new($Flow$BaseAnalyzer$JumpKind$2, "CONTINUE"_s, 1, $JCTree$Tag::CONTINUE));
	$assignStatic(Flow$BaseAnalyzer$JumpKind::YIELD, $new($Flow$BaseAnalyzer$JumpKind$3, "YIELD"_s, 2, $JCTree$Tag::YIELD));
	$assignStatic(Flow$BaseAnalyzer$JumpKind::$VALUES, Flow$BaseAnalyzer$JumpKind::$values());
}

Flow$BaseAnalyzer$JumpKind::Flow$BaseAnalyzer$JumpKind() {
}

$Class* Flow$BaseAnalyzer$JumpKind::load$($String* name, bool initialize) {
	$loadClass(Flow$BaseAnalyzer$JumpKind, name, initialize, &_Flow$BaseAnalyzer$JumpKind_ClassInfo_, clinit$Flow$BaseAnalyzer$JumpKind, allocate$Flow$BaseAnalyzer$JumpKind);
	return class$;
}

$Class* Flow$BaseAnalyzer$JumpKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com