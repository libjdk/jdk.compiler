#include <com/sun/tools/javac/comp/CompileStates$CompileState.h>

#include <com/sun/tools/javac/comp/CompileStates.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ATTR
#undef ENTER
#undef FLOW
#undef GENERATE
#undef INIT
#undef LOWER
#undef PARSE
#undef PROCESS
#undef TRANSPATTERNS
#undef TRANSTYPES
#undef UNLAMBDA

using $CompileStates$CompileStateArray = $Array<::com::sun::tools::javac::comp::CompileStates$CompileState>;
using $CompileStates = ::com::sun::tools::javac::comp::CompileStates;
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

$FieldInfo _CompileStates$CompileState_FieldInfo_[] = {
	{"INIT", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, INIT)},
	{"PARSE", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, PARSE)},
	{"ENTER", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, ENTER)},
	{"PROCESS", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, PROCESS)},
	{"ATTR", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, ATTR)},
	{"FLOW", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, FLOW)},
	{"TRANSTYPES", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, TRANSTYPES)},
	{"TRANSPATTERNS", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, TRANSPATTERNS)},
	{"UNLAMBDA", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, UNLAMBDA)},
	{"LOWER", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, LOWER)},
	{"GENERATE", "Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CompileStates$CompileState, GENERATE)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CompileStates$CompileState, $VALUES)},
	{"value", "I", nullptr, $PRIVATE | $FINAL, $field(CompileStates$CompileState, value)},
	{}
};

$MethodInfo _CompileStates$CompileState_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CompileStates$CompileStateArray*(*)()>(&CompileStates$CompileState::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(CompileStates$CompileState::*)($String*,int32_t,int32_t)>(&CompileStates$CompileState::init$))},
	{"isAfter", "(Lcom/sun/tools/javac/comp/CompileStates$CompileState;)Z", nullptr, $PUBLIC, $method(static_cast<bool(CompileStates$CompileState::*)(CompileStates$CompileState*)>(&CompileStates$CompileState::isAfter))},
	{"max", "(Lcom/sun/tools/javac/comp/CompileStates$CompileState;Lcom/sun/tools/javac/comp/CompileStates$CompileState;)Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CompileStates$CompileState*(*)(CompileStates$CompileState*,CompileStates$CompileState*)>(&CompileStates$CompileState::max))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CompileStates$CompileState*(*)($String*)>(&CompileStates$CompileState::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/CompileStates$CompileState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompileStates$CompileStateArray*(*)()>(&CompileStates$CompileState::values))},
	{}
};

$InnerClassInfo _CompileStates$CompileState_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.CompileStates$CompileState", "com.sun.tools.javac.comp.CompileStates", "CompileState", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CompileStates$CompileState_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.CompileStates$CompileState",
	"java.lang.Enum",
	nullptr,
	_CompileStates$CompileState_FieldInfo_,
	_CompileStates$CompileState_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/CompileStates$CompileState;>;",
	nullptr,
	_CompileStates$CompileState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.CompileStates"
};

$Object* allocate$CompileStates$CompileState($Class* clazz) {
	return $of($alloc(CompileStates$CompileState));
}

CompileStates$CompileState* CompileStates$CompileState::INIT = nullptr;
CompileStates$CompileState* CompileStates$CompileState::PARSE = nullptr;
CompileStates$CompileState* CompileStates$CompileState::ENTER = nullptr;
CompileStates$CompileState* CompileStates$CompileState::PROCESS = nullptr;
CompileStates$CompileState* CompileStates$CompileState::ATTR = nullptr;
CompileStates$CompileState* CompileStates$CompileState::FLOW = nullptr;
CompileStates$CompileState* CompileStates$CompileState::TRANSTYPES = nullptr;
CompileStates$CompileState* CompileStates$CompileState::TRANSPATTERNS = nullptr;
CompileStates$CompileState* CompileStates$CompileState::UNLAMBDA = nullptr;
CompileStates$CompileState* CompileStates$CompileState::LOWER = nullptr;
CompileStates$CompileState* CompileStates$CompileState::GENERATE = nullptr;
$CompileStates$CompileStateArray* CompileStates$CompileState::$VALUES = nullptr;

$CompileStates$CompileStateArray* CompileStates$CompileState::$values() {
	$init(CompileStates$CompileState);
	return $new($CompileStates$CompileStateArray, {
		CompileStates$CompileState::INIT,
		CompileStates$CompileState::PARSE,
		CompileStates$CompileState::ENTER,
		CompileStates$CompileState::PROCESS,
		CompileStates$CompileState::ATTR,
		CompileStates$CompileState::FLOW,
		CompileStates$CompileState::TRANSTYPES,
		CompileStates$CompileState::TRANSPATTERNS,
		CompileStates$CompileState::UNLAMBDA,
		CompileStates$CompileState::LOWER,
		CompileStates$CompileState::GENERATE
	});
}

$CompileStates$CompileStateArray* CompileStates$CompileState::values() {
	$init(CompileStates$CompileState);
	return $cast($CompileStates$CompileStateArray, CompileStates$CompileState::$VALUES->clone());
}

CompileStates$CompileState* CompileStates$CompileState::valueOf($String* name) {
	$init(CompileStates$CompileState);
	return $cast(CompileStates$CompileState, $Enum::valueOf(CompileStates$CompileState::class$, name));
}

void CompileStates$CompileState::init$($String* $enum$name, int32_t $enum$ordinal, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value = value;
}

bool CompileStates$CompileState::isAfter(CompileStates$CompileState* other) {
	return this->value > $nc(other)->value;
}

CompileStates$CompileState* CompileStates$CompileState::max(CompileStates$CompileState* a, CompileStates$CompileState* b) {
	$init(CompileStates$CompileState);
	return $nc(a)->value > $nc(b)->value ? a : b;
}

void clinit$CompileStates$CompileState($Class* class$) {
	$assignStatic(CompileStates$CompileState::INIT, $new(CompileStates$CompileState, "INIT"_s, 0, 0));
	$assignStatic(CompileStates$CompileState::PARSE, $new(CompileStates$CompileState, "PARSE"_s, 1, 1));
	$assignStatic(CompileStates$CompileState::ENTER, $new(CompileStates$CompileState, "ENTER"_s, 2, 2));
	$assignStatic(CompileStates$CompileState::PROCESS, $new(CompileStates$CompileState, "PROCESS"_s, 3, 3));
	$assignStatic(CompileStates$CompileState::ATTR, $new(CompileStates$CompileState, "ATTR"_s, 4, 4));
	$assignStatic(CompileStates$CompileState::FLOW, $new(CompileStates$CompileState, "FLOW"_s, 5, 5));
	$assignStatic(CompileStates$CompileState::TRANSTYPES, $new(CompileStates$CompileState, "TRANSTYPES"_s, 6, 6));
	$assignStatic(CompileStates$CompileState::TRANSPATTERNS, $new(CompileStates$CompileState, "TRANSPATTERNS"_s, 7, 7));
	$assignStatic(CompileStates$CompileState::UNLAMBDA, $new(CompileStates$CompileState, "UNLAMBDA"_s, 8, 8));
	$assignStatic(CompileStates$CompileState::LOWER, $new(CompileStates$CompileState, "LOWER"_s, 9, 9));
	$assignStatic(CompileStates$CompileState::GENERATE, $new(CompileStates$CompileState, "GENERATE"_s, 10, 10));
	$assignStatic(CompileStates$CompileState::$VALUES, CompileStates$CompileState::$values());
}

CompileStates$CompileState::CompileStates$CompileState() {
}

$Class* CompileStates$CompileState::load$($String* name, bool initialize) {
	$loadClass(CompileStates$CompileState, name, initialize, &_CompileStates$CompileState_ClassInfo_, clinit$CompileStates$CompileState, allocate$CompileStates$CompileState);
	return class$;
}

$Class* CompileStates$CompileState::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com