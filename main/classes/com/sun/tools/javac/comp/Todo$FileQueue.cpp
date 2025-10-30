#include <com/sun/tools/javac/comp/Todo$FileQueue.h>

#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Todo.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <jcpp.h>

using $Env = ::com::sun::tools::javac::comp::Env;
using $Todo = ::com::sun::tools::javac::comp::Todo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueue = ::java::util::AbstractQueue;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Todo$FileQueue_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Todo;", nullptr, $FINAL | $SYNTHETIC, $field(Todo$FileQueue, this$0)},
	{"fileContents", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", 0, $field(Todo$FileQueue, fileContents)},
	{}
};

$MethodInfo _Todo$FileQueue_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Todo;)V", nullptr, 0, $method(static_cast<void(Todo$FileQueue::*)($Todo*)>(&Todo$FileQueue::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PUBLIC},
	{"offer", "(Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", $PUBLIC},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"peek", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"poll", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Todo$FileQueue_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Todo$FileQueue", "com.sun.tools.javac.comp.Todo", "FileQueue", 0},
	{}
};

$ClassInfo _Todo$FileQueue_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Todo$FileQueue",
	"java.util.AbstractQueue",
	nullptr,
	_Todo$FileQueue_FieldInfo_,
	_Todo$FileQueue_MethodInfo_,
	"Ljava/util/AbstractQueue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;",
	nullptr,
	_Todo$FileQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Todo"
};

$Object* allocate$Todo$FileQueue($Class* clazz) {
	return $of($alloc(Todo$FileQueue));
}

void Todo$FileQueue::init$($Todo* this$0) {
	$set(this, this$0, this$0);
	$AbstractQueue::init$();
	$set(this, fileContents, $new($LinkedList));
}

$Iterator* Todo$FileQueue::iterator() {
	return $nc(this->fileContents)->iterator();
}

int32_t Todo$FileQueue::size() {
	return $nc(this->fileContents)->size();
}

bool Todo$FileQueue::offer($Env* e) {
	if ($nc(this->fileContents)->offer(e)) {
		$nc(this->this$0->contents)->add(e);
		return true;
	}
	return false;
}

$Object* Todo$FileQueue::poll() {
	if ($nc(this->fileContents)->size() == 0) {
		return $of(nullptr);
	}
	$var($Env, env, $cast($Env, $nc(this->fileContents)->remove(0)));
	$nc(this->this$0->contents)->remove($of(env));
	return $of(env);
}

$Object* Todo$FileQueue::peek() {
	return $of(($nc(this->fileContents)->size() == 0 ? ($Env*)nullptr : $cast($Env, $nc(this->fileContents)->get(0))));
}

bool Todo$FileQueue::offer(Object$* e) {
	return this->offer($cast($Env, e));
}

Todo$FileQueue::Todo$FileQueue() {
}

$Class* Todo$FileQueue::load$($String* name, bool initialize) {
	$loadClass(Todo$FileQueue, name, initialize, &_Todo$FileQueue_ClassInfo_, allocate$Todo$FileQueue);
	return class$;
}

$Class* Todo$FileQueue::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com