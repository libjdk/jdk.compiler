#include <com/sun/tools/javac/comp/Todo.h>

#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Todo$FileQueue.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/Deque.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Map.h>
#include <java/util/Queue.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Env = ::com::sun::tools::javac::comp::Env;
using $Todo$FileQueue = ::com::sun::tools::javac::comp::Todo$FileQueue;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collection = ::java::util::Collection;
using $Deque = ::java::util::Deque;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Map = ::java::util::Map;
using $Queue = ::java::util::Queue;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Todo_FieldInfo_[] = {
	{"todoKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Todo;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Todo, todoKey)},
	{"contents", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", 0, $field(Todo, contents)},
	{"contentsByFile", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;>;", 0, $field(Todo, contentsByFile)},
	{"fileMap", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/comp/Todo$FileQueue;>;", 0, $field(Todo, fileMap)},
	{}
};

$MethodInfo _Todo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Todo::*)($Context*)>(&Todo::init$))},
	{"addByFile", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(Todo::*)($Env*)>(&Todo::addByFile))},
	{"append", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{"groupByFile", "()Ljava/util/Queue;", "()Ljava/util/Queue<Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;>;", $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Todo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Todo*(*)($Context*)>(&Todo::instance))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PUBLIC},
	{"offer", "(Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", $PUBLIC},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"peek", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"poll", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"removeByFile", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(Todo::*)($Env*)>(&Todo::removeByFile))},
	{"retainFiles", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+Ljavax/tools/JavaFileObject;>;)V", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Todo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Todo$FileQueue", "com.sun.tools.javac.comp.Todo", "FileQueue", 0},
	{}
};

$ClassInfo _Todo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Todo",
	"java.util.AbstractQueue",
	nullptr,
	_Todo_FieldInfo_,
	_Todo_MethodInfo_,
	"Ljava/util/AbstractQueue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;",
	nullptr,
	_Todo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Todo$FileQueue"
};

$Object* allocate$Todo($Class* clazz) {
	return $of($alloc(Todo));
}

$Context$Key* Todo::todoKey = nullptr;

Todo* Todo::instance($Context* context) {
	$init(Todo);
	$var(Todo, instance, $cast(Todo, $nc(context)->get(Todo::todoKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Todo, context));
	}
	return instance;
}

void Todo::init$($Context* context) {
	$AbstractQueue::init$();
	$set(this, contents, $new($LinkedList));
	$nc(context)->put(Todo::todoKey, $of(this));
}

void Todo::append($Env* env) {
	add(env);
}

$Iterator* Todo::iterator() {
	return $nc(this->contents)->iterator();
}

int32_t Todo::size() {
	return $nc(this->contents)->size();
}

bool Todo::offer($Env* e) {
	if ($nc(this->contents)->add(e)) {
		if (this->contentsByFile != nullptr) {
			addByFile(e);
		}
		return true;
	} else {
		return false;
	}
}

void Todo::retainFiles($Collection* sourceFiles) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, it, $nc(this->contents)->iterator());
		for (; $nc(it)->hasNext();) {
			$var($Env, env, $cast($Env, it->next()));
			if (!$nc(sourceFiles)->contains($nc($nc(env)->toplevel)->sourcefile)) {
				if (this->contentsByFile != nullptr) {
					removeByFile(env);
				}
				it->remove();
			}
		}
	}
}

$Object* Todo::poll() {
	if (size() == 0) {
		return $of(nullptr);
	}
	$var($Env, env, $cast($Env, $nc(this->contents)->remove(0)));
	if (this->contentsByFile != nullptr) {
		removeByFile(env);
	}
	return $of(env);
}

$Object* Todo::peek() {
	return $of((size() == 0 ? ($Env*)nullptr : $cast($Env, $nc(this->contents)->get(0))));
}

$Queue* Todo::groupByFile() {
	$useLocalCurrentObjectStackCache();
	if (this->contentsByFile == nullptr) {
		$set(this, contentsByFile, $new($LinkedList));
		{
			$var($Iterator, i$, $nc(this->contents)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Env, env, $cast($Env, i$->next()));
				{
					addByFile(env);
				}
			}
		}
	}
	return this->contentsByFile;
}

void Todo::addByFile($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, file, $nc($nc(env)->toplevel)->sourcefile);
	if (this->fileMap == nullptr) {
		$set(this, fileMap, $new($HashMap));
	}
	$var($Todo$FileQueue, fq, $cast($Todo$FileQueue, $nc(this->fileMap)->get(file)));
	if (fq == nullptr) {
		$assign(fq, $new($Todo$FileQueue, this));
		$nc(this->fileMap)->put(file, fq);
		$nc(this->contentsByFile)->add(fq);
	}
	$nc($nc(fq)->fileContents)->add(env);
}

void Todo::removeByFile($Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, file, $nc($nc(env)->toplevel)->sourcefile);
	$var($Todo$FileQueue, fq, $cast($Todo$FileQueue, $nc(this->fileMap)->get(file)));
	if (fq == nullptr) {
		return;
	}
	if ($nc($nc(fq)->fileContents)->remove($of(env))) {
		if (fq->isEmpty()) {
			$nc(this->fileMap)->remove(file);
			$nc(this->contentsByFile)->remove($of(fq));
		}
	}
}

bool Todo::offer(Object$* e) {
	return this->offer($cast($Env, e));
}

void clinit$Todo($Class* class$) {
	$assignStatic(Todo::todoKey, $new($Context$Key));
}

Todo::Todo() {
}

$Class* Todo::load$($String* name, bool initialize) {
	$loadClass(Todo, name, initialize, &_Todo_ClassInfo_, clinit$Todo, allocate$Todo);
	return class$;
}

$Class* Todo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com