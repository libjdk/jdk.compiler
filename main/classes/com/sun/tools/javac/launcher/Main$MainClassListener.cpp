#include <com/sun/tools/javac/launcher/Main$MainClassListener.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/launcher/Main.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

#undef ANALYZE
#undef TOP_LEVEL

using $JavacTask = ::com::sun::source::util::JavacTask;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $Main = ::com::sun::tools::javac::launcher::Main;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$MainClassListener_FieldInfo_[] = {
	{"mainClass", "Ljavax/lang/model/element/TypeElement;", nullptr, 0, $field(Main$MainClassListener, mainClass)},
	{}
};

$MethodInfo _Main$MainClassListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/source/util/JavacTask;)V", nullptr, 0, $method(static_cast<void(Main$MainClassListener::*)($JavacTask*)>(&Main$MainClassListener::init$))},
	{"started", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Main$MainClassListener_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$MainClassListener", "com.sun.tools.javac.launcher.Main", "MainClassListener", $STATIC},
	{}
};

$ClassInfo _Main$MainClassListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$MainClassListener",
	"java.lang.Object",
	"com.sun.source.util.TaskListener",
	_Main$MainClassListener_FieldInfo_,
	_Main$MainClassListener_MethodInfo_,
	nullptr,
	nullptr,
	_Main$MainClassListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$MainClassListener($Class* clazz) {
	return $of($alloc(Main$MainClassListener));
}

void Main$MainClassListener::init$($JavacTask* t) {
	$nc(t)->addTaskListener(this);
}

void Main$MainClassListener::started($TaskEvent* ev) {
	$init($TaskEvent$Kind);
	if ($nc(ev)->getKind() == $TaskEvent$Kind::ANALYZE && this->mainClass == nullptr) {
		$var($TypeElement, te, ev->getTypeElement());
		$init($NestingKind);
		if ($nc(te)->getNestingKind() == $NestingKind::TOP_LEVEL) {
			$set(this, mainClass, te);
		}
	}
}

Main$MainClassListener::Main$MainClassListener() {
}

$Class* Main$MainClassListener::load$($String* name, bool initialize) {
	$loadClass(Main$MainClassListener, name, initialize, &_Main$MainClassListener_ClassInfo_, allocate$Main$MainClassListener);
	return class$;
}

$Class* Main$MainClassListener::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com