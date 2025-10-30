#include <com/sun/source/util/TaskEvent$Kind.h>

#include <com/sun/source/util/TaskEvent.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANALYZE
#undef ANNOTATION_PROCESSING
#undef ANNOTATION_PROCESSING_ROUND
#undef COMPILATION
#undef ENTER
#undef GENERATE
#undef PARSE

using $TaskEvent$KindArray = $Array<::com::sun::source::util::TaskEvent$Kind>;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _TaskEvent$Kind_FieldInfo_[] = {
	{"PARSE", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TaskEvent$Kind, PARSE)},
	{"ENTER", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TaskEvent$Kind, ENTER)},
	{"ANALYZE", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TaskEvent$Kind, ANALYZE)},
	{"GENERATE", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TaskEvent$Kind, GENERATE)},
	{"ANNOTATION_PROCESSING", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TaskEvent$Kind, ANNOTATION_PROCESSING)},
	{"ANNOTATION_PROCESSING_ROUND", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TaskEvent$Kind, ANNOTATION_PROCESSING_ROUND)},
	{"COMPILATION", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TaskEvent$Kind, COMPILATION)},
	{"$VALUES", "[Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TaskEvent$Kind, $VALUES)},
	{}
};

$MethodInfo _TaskEvent$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TaskEvent$KindArray*(*)()>(&TaskEvent$Kind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TaskEvent$Kind::*)($String*,int32_t)>(&TaskEvent$Kind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TaskEvent$Kind*(*)($String*)>(&TaskEvent$Kind::valueOf))},
	{"values", "()[Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TaskEvent$KindArray*(*)()>(&TaskEvent$Kind::values))},
	{}
};

$InnerClassInfo _TaskEvent$Kind_InnerClassesInfo_[] = {
	{"com.sun.source.util.TaskEvent$Kind", "com.sun.source.util.TaskEvent", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TaskEvent$Kind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.source.util.TaskEvent$Kind",
	"java.lang.Enum",
	nullptr,
	_TaskEvent$Kind_FieldInfo_,
	_TaskEvent$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/source/util/TaskEvent$Kind;>;",
	nullptr,
	_TaskEvent$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.util.TaskEvent"
};

$Object* allocate$TaskEvent$Kind($Class* clazz) {
	return $of($alloc(TaskEvent$Kind));
}

TaskEvent$Kind* TaskEvent$Kind::PARSE = nullptr;
TaskEvent$Kind* TaskEvent$Kind::ENTER = nullptr;
TaskEvent$Kind* TaskEvent$Kind::ANALYZE = nullptr;
TaskEvent$Kind* TaskEvent$Kind::GENERATE = nullptr;
TaskEvent$Kind* TaskEvent$Kind::ANNOTATION_PROCESSING = nullptr;
TaskEvent$Kind* TaskEvent$Kind::ANNOTATION_PROCESSING_ROUND = nullptr;
TaskEvent$Kind* TaskEvent$Kind::COMPILATION = nullptr;
$TaskEvent$KindArray* TaskEvent$Kind::$VALUES = nullptr;

$TaskEvent$KindArray* TaskEvent$Kind::$values() {
	$init(TaskEvent$Kind);
	return $new($TaskEvent$KindArray, {
		TaskEvent$Kind::PARSE,
		TaskEvent$Kind::ENTER,
		TaskEvent$Kind::ANALYZE,
		TaskEvent$Kind::GENERATE,
		TaskEvent$Kind::ANNOTATION_PROCESSING,
		TaskEvent$Kind::ANNOTATION_PROCESSING_ROUND,
		TaskEvent$Kind::COMPILATION
	});
}

$TaskEvent$KindArray* TaskEvent$Kind::values() {
	$init(TaskEvent$Kind);
	return $cast($TaskEvent$KindArray, TaskEvent$Kind::$VALUES->clone());
}

TaskEvent$Kind* TaskEvent$Kind::valueOf($String* name) {
	$init(TaskEvent$Kind);
	return $cast(TaskEvent$Kind, $Enum::valueOf(TaskEvent$Kind::class$, name));
}

void TaskEvent$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$TaskEvent$Kind($Class* class$) {
	$assignStatic(TaskEvent$Kind::PARSE, $new(TaskEvent$Kind, "PARSE"_s, 0));
	$assignStatic(TaskEvent$Kind::ENTER, $new(TaskEvent$Kind, "ENTER"_s, 1));
	$assignStatic(TaskEvent$Kind::ANALYZE, $new(TaskEvent$Kind, "ANALYZE"_s, 2));
	$assignStatic(TaskEvent$Kind::GENERATE, $new(TaskEvent$Kind, "GENERATE"_s, 3));
	$assignStatic(TaskEvent$Kind::ANNOTATION_PROCESSING, $new(TaskEvent$Kind, "ANNOTATION_PROCESSING"_s, 4));
	$assignStatic(TaskEvent$Kind::ANNOTATION_PROCESSING_ROUND, $new(TaskEvent$Kind, "ANNOTATION_PROCESSING_ROUND"_s, 5));
	$assignStatic(TaskEvent$Kind::COMPILATION, $new(TaskEvent$Kind, "COMPILATION"_s, 6));
	$assignStatic(TaskEvent$Kind::$VALUES, TaskEvent$Kind::$values());
}

TaskEvent$Kind::TaskEvent$Kind() {
}

$Class* TaskEvent$Kind::load$($String* name, bool initialize) {
	$loadClass(TaskEvent$Kind, name, initialize, &_TaskEvent$Kind_ClassInfo_, clinit$TaskEvent$Kind, allocate$TaskEvent$Kind);
	return class$;
}

$Class* TaskEvent$Kind::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com