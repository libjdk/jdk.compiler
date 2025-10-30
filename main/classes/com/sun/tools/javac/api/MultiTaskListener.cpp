#include <com/sun/tools/javac/api/MultiTaskListener.h>

#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef EMPTY_LISTENERS

using $TaskListenerArray = $Array<::com::sun::source::util::TaskListener>;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _MultiTaskListener_FieldInfo_[] = {
	{"taskListenerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/api/MultiTaskListener;>;", $PUBLIC | $STATIC | $FINAL, $staticField(MultiTaskListener, taskListenerKey)},
	{"EMPTY_LISTENERS", "[Lcom/sun/source/util/TaskListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MultiTaskListener, EMPTY_LISTENERS)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $PRIVATE | $FINAL, $field(MultiTaskListener, dcfh)},
	{"listeners", "[Lcom/sun/source/util/TaskListener;", nullptr, 0, $field(MultiTaskListener, listeners)},
	{"ccw", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, 0, $field(MultiTaskListener, ccw)},
	{}
};

$MethodInfo _MultiTaskListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(MultiTaskListener::*)($Context*)>(&MultiTaskListener::init$))},
	{"add", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{"getTaskListeners", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lcom/sun/source/util/TaskListener;>;", $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/api/MultiTaskListener;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MultiTaskListener*(*)($Context*)>(&MultiTaskListener::instance))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"remove", "(Lcom/sun/source/util/TaskListener;)V", nullptr, $PUBLIC},
	{"started", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiTaskListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.MultiTaskListener",
	"java.lang.Object",
	"com.sun.source.util.TaskListener",
	_MultiTaskListener_FieldInfo_,
	_MultiTaskListener_MethodInfo_
};

$Object* allocate$MultiTaskListener($Class* clazz) {
	return $of($alloc(MultiTaskListener));
}

$Context$Key* MultiTaskListener::taskListenerKey = nullptr;
$TaskListenerArray* MultiTaskListener::EMPTY_LISTENERS = nullptr;

MultiTaskListener* MultiTaskListener::instance($Context* context) {
	$init(MultiTaskListener);
	$var(MultiTaskListener, instance, $cast(MultiTaskListener, $nc(context)->get(MultiTaskListener::taskListenerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(MultiTaskListener, context));
	}
	return instance;
}

void MultiTaskListener::init$($Context* context) {
	$set(this, listeners, MultiTaskListener::EMPTY_LISTENERS);
	$nc(context)->put(MultiTaskListener::taskListenerKey, $of(this));
	$set(this, ccw, $ClientCodeWrapper::instance(context));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
}

$Collection* MultiTaskListener::getTaskListeners() {
	return $Arrays::asList(this->listeners);
}

bool MultiTaskListener::isEmpty() {
	return this->listeners == MultiTaskListener::EMPTY_LISTENERS;
}

void MultiTaskListener::add($TaskListener* listener) {
	$useLocalCurrentObjectStackCache();
	{
		$var($TaskListenerArray, arr$, this->listeners);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TaskListener, l, arr$->get(i$));
			{
				if ($nc(this->ccw)->unwrap(l) == listener) {
					$throwNew($IllegalStateException);
				}
			}
		}
	}
	$set(this, listeners, $fcast($TaskListenerArray, $Arrays::copyOf(this->listeners, $nc(this->listeners)->length + 1)));
	$nc(this->listeners)->set($nc(this->listeners)->length - 1, $($nc(this->ccw)->wrap(listener)));
}

void MultiTaskListener::remove($TaskListener* listener) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->listeners)->length; ++i) {
		if ($nc(this->ccw)->unwrap($nc(this->listeners)->get(i)) == listener) {
			if ($nc(this->listeners)->length == 1) {
				$set(this, listeners, MultiTaskListener::EMPTY_LISTENERS);
			} else {
				$var($TaskListenerArray, newListeners, $new($TaskListenerArray, $nc(this->listeners)->length - 1));
				$System::arraycopy(this->listeners, 0, newListeners, 0, i);
				$System::arraycopy(this->listeners, i + 1, newListeners, i, newListeners->length - i);
				$set(this, listeners, newListeners);
			}
			break;
		}
	}
}

void MultiTaskListener::started($TaskEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($DeferredCompletionFailureHandler$Handler, prevDeferredHandler, $nc(this->dcfh)->setHandler($nc(this->dcfh)->userCodeHandler));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($TaskListenerArray, ll, this->listeners);
			{
				$var($TaskListenerArray, arr$, ll);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($TaskListener, l, arr$->get(i$));
					$nc(l)->started(e);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->dcfh)->setHandler(prevDeferredHandler);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MultiTaskListener::finished($TaskEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($DeferredCompletionFailureHandler$Handler, prevDeferredHandler, $nc(this->dcfh)->setHandler($nc(this->dcfh)->userCodeHandler));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($TaskListenerArray, ll, this->listeners);
			{
				$var($TaskListenerArray, arr$, ll);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($TaskListener, l, arr$->get(i$));
					$nc(l)->finished(e);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->dcfh)->setHandler(prevDeferredHandler);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* MultiTaskListener::toString() {
	return $Arrays::toString(this->listeners);
}

void MultiTaskListener::clear() {
	$set(this, listeners, MultiTaskListener::EMPTY_LISTENERS);
}

void clinit$MultiTaskListener($Class* class$) {
	$assignStatic(MultiTaskListener::taskListenerKey, $new($Context$Key));
	$assignStatic(MultiTaskListener::EMPTY_LISTENERS, $new($TaskListenerArray, 0));
}

MultiTaskListener::MultiTaskListener() {
}

$Class* MultiTaskListener::load$($String* name, bool initialize) {
	$loadClass(MultiTaskListener, name, initialize, &_MultiTaskListener_ClassInfo_, clinit$MultiTaskListener, allocate$MultiTaskListener);
	return class$;
}

$Class* MultiTaskListener::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com