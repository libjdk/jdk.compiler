#include <com/sun/source/util/TaskEvent.h>

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _TaskEvent_FieldInfo_[] = {
	{"kind", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PRIVATE, $field(TaskEvent, kind)},
	{"file", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $field(TaskEvent, file)},
	{"unit", "Lcom/sun/source/tree/CompilationUnitTree;", nullptr, $PRIVATE, $field(TaskEvent, unit)},
	{"clazz", "Ljavax/lang/model/element/TypeElement;", nullptr, $PRIVATE, $field(TaskEvent, clazz)},
	{}
};

$MethodInfo _TaskEvent_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;)V", nullptr, $PUBLIC, $method(static_cast<void(TaskEvent::*)($TaskEvent$Kind*)>(&TaskEvent::init$))},
	{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;Ljavax/tools/JavaFileObject;)V", nullptr, $PUBLIC, $method(static_cast<void(TaskEvent::*)($TaskEvent$Kind*,$JavaFileObject*)>(&TaskEvent::init$))},
	{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PUBLIC, $method(static_cast<void(TaskEvent::*)($TaskEvent$Kind*,$CompilationUnitTree*)>(&TaskEvent::init$))},
	{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;Lcom/sun/source/tree/CompilationUnitTree;Ljavax/lang/model/element/TypeElement;)V", nullptr, $PUBLIC, $method(static_cast<void(TaskEvent::*)($TaskEvent$Kind*,$CompilationUnitTree*,$TypeElement*)>(&TaskEvent::init$))},
	{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;Ljavax/tools/JavaFileObject;Lcom/sun/source/tree/CompilationUnitTree;Ljavax/lang/model/element/TypeElement;)V", nullptr, $PRIVATE, $method(static_cast<void(TaskEvent::*)($TaskEvent$Kind*,$JavaFileObject*,$CompilationUnitTree*,$TypeElement*)>(&TaskEvent::init$))},
	{"getCompilationUnit", "()Lcom/sun/source/tree/CompilationUnitTree;", nullptr, $PUBLIC, $method(static_cast<$CompilationUnitTree*(TaskEvent::*)()>(&TaskEvent::getCompilationUnit))},
	{"getKind", "()Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC, $method(static_cast<$TaskEvent$Kind*(TaskEvent::*)()>(&TaskEvent::getKind))},
	{"getSourceFile", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $method(static_cast<$JavaFileObject*(TaskEvent::*)()>(&TaskEvent::getSourceFile))},
	{"getTypeElement", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC, $method(static_cast<$TypeElement*(TaskEvent::*)()>(&TaskEvent::getTypeElement))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TaskEvent_InnerClassesInfo_[] = {
	{"com.sun.source.util.TaskEvent$Kind", "com.sun.source.util.TaskEvent", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TaskEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.source.util.TaskEvent",
	"java.lang.Object",
	nullptr,
	_TaskEvent_FieldInfo_,
	_TaskEvent_MethodInfo_,
	nullptr,
	nullptr,
	_TaskEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.util.TaskEvent$Kind"
};

$Object* allocate$TaskEvent($Class* clazz) {
	return $of($alloc(TaskEvent));
}

void TaskEvent::init$($TaskEvent$Kind* kind) {
	TaskEvent::init$(kind, nullptr, nullptr, nullptr);
}

void TaskEvent::init$($TaskEvent$Kind* kind, $JavaFileObject* sourceFile) {
	TaskEvent::init$(kind, sourceFile, nullptr, nullptr);
}

void TaskEvent::init$($TaskEvent$Kind* kind, $CompilationUnitTree* unit) {
	TaskEvent::init$(kind, $($nc(unit)->getSourceFile()), unit, nullptr);
}

void TaskEvent::init$($TaskEvent$Kind* kind, $CompilationUnitTree* unit, $TypeElement* clazz) {
	TaskEvent::init$(kind, $($nc(unit)->getSourceFile()), unit, clazz);
}

void TaskEvent::init$($TaskEvent$Kind* kind, $JavaFileObject* file, $CompilationUnitTree* unit, $TypeElement* clazz) {
	$set(this, kind, kind);
	$set(this, file, file);
	$set(this, unit, unit);
	$set(this, clazz, clazz);
}

$TaskEvent$Kind* TaskEvent::getKind() {
	return this->kind;
}

$JavaFileObject* TaskEvent::getSourceFile() {
	return this->file;
}

$CompilationUnitTree* TaskEvent::getCompilationUnit() {
	return this->unit;
}

$TypeElement* TaskEvent::getTypeElement() {
	return this->clazz;
}

$String* TaskEvent::toString() {
	return $str({"TaskEvent["_s, this->kind, ","_s, this->file, ","_s, this->clazz, "]"_s});
}

TaskEvent::TaskEvent() {
}

$Class* TaskEvent::load$($String* name, bool initialize) {
	$loadClass(TaskEvent, name, initialize, &_TaskEvent_ClassInfo_, allocate$TaskEvent);
	return class$;
}

$Class* TaskEvent::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com