#include <com/sun/tools/javac/util/ListBuffer.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer$1.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer$1 = ::com::sun::tools::javac::util::ListBuffer$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _ListBuffer_FieldInfo_[] = {
	{"elems", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<TA;>;", $PRIVATE, $field(ListBuffer, elems)},
	{"last", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<TA;>;", $PRIVATE, $field(ListBuffer, last$)},
	{"count", "I", nullptr, $PRIVATE, $field(ListBuffer, count)},
	{"shared", "Z", nullptr, $PRIVATE, $field(ListBuffer, shared)},
	{}
};

$MethodInfo _ListBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ListBuffer::*)()>(&ListBuffer::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TA;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TA;>;)Z", $PUBLIC},
	{"append", "(Ljava/lang/Object;)Lcom/sun/tools/javac/util/ListBuffer;", "(TA;)Lcom/sun/tools/javac/util/ListBuffer<TA;>;", $PUBLIC},
	{"appendArray", "([Ljava/lang/Object;)Lcom/sun/tools/javac/util/ListBuffer;", "([TA;)Lcom/sun/tools/javac/util/ListBuffer<TA;>;", $PUBLIC},
	{"appendList", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/ListBuffer;", "(Lcom/sun/tools/javac/util/List<TA;>;)Lcom/sun/tools/javac/util/ListBuffer<TA;>;", $PUBLIC},
	{"appendList", "(Lcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/util/ListBuffer;", "(Lcom/sun/tools/javac/util/ListBuffer<TA;>;)Lcom/sun/tools/javac/util/ListBuffer<TA;>;", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"copy", "()V", nullptr, $PRIVATE, $method(static_cast<void(ListBuffer::*)()>(&ListBuffer::copy))},
	{"first", "()Ljava/lang/Object;", "()TA;", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TA;>;", $PUBLIC},
	{"last", "()Ljava/lang/Object;", "()TA;", $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TA;", $PUBLIC},
	{"nonEmpty", "()Z", nullptr, $PUBLIC},
	{"of", "(Ljava/lang/Object;)Lcom/sun/tools/javac/util/ListBuffer;", "<T:Ljava/lang/Object;>(TT;)Lcom/sun/tools/javac/util/ListBuffer<TT;>;", $PUBLIC | $STATIC, $method(static_cast<ListBuffer*(*)(Object$*)>(&ListBuffer::of))},
	{"offer", "(Ljava/lang/Object;)Z", "(TA;)Z", $PUBLIC},
	{"peek", "()Ljava/lang/Object;", "()TA;", $PUBLIC},
	{"poll", "()Ljava/lang/Object;", "()TA;", $PUBLIC},
	{"prepend", "(Ljava/lang/Object;)Lcom/sun/tools/javac/util/ListBuffer;", "(TA;)Lcom/sun/tools/javac/util/ListBuffer<TA;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toList", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ListBuffer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.ListBuffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ListBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.ListBuffer",
	"java.util.AbstractQueue",
	nullptr,
	_ListBuffer_FieldInfo_,
	_ListBuffer_MethodInfo_,
	"<A:Ljava/lang/Object;>Ljava/util/AbstractQueue<TA;>;",
	nullptr,
	_ListBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.ListBuffer$1"
};

$Object* allocate$ListBuffer($Class* clazz) {
	return $of($alloc(ListBuffer));
}

ListBuffer* ListBuffer::of(Object$* x) {
	$init(ListBuffer);
	$var(ListBuffer, lb, $new(ListBuffer));
	lb->add(x);
	return lb;
}

void ListBuffer::init$() {
	$AbstractQueue::init$();
	clear();
}

void ListBuffer::clear() {
	$set(this, elems, $List::nil());
	$set(this, last$, nullptr);
	this->count = 0;
	this->shared = false;
}

int32_t ListBuffer::length() {
	return this->count;
}

int32_t ListBuffer::size() {
	return this->count;
}

bool ListBuffer::isEmpty() {
	return this->count == 0;
}

bool ListBuffer::nonEmpty() {
	return this->count != 0;
}

void ListBuffer::copy() {
	if ($nc(this->elems)->nonEmpty()) {
		$var($List, orig, this->elems);
		$set(this, elems, ($set(this, last$, $List::of($nc(orig)->head))));
		while ($nc(($assign(orig, $nc(orig)->tail)))->nonEmpty()) {
			$set($nc(this->last$), tail, $List::of(orig->head));
			$set(this, last$, $nc(this->last$)->tail);
		}
	}
}

ListBuffer* ListBuffer::prepend(Object$* x) {
	$set(this, elems, $nc(this->elems)->prepend(x));
	if (this->last$ == nullptr) {
		$set(this, last$, this->elems);
	}
	++this->count;
	return this;
}

ListBuffer* ListBuffer::append(Object$* x) {
	$Assert::checkNonNull(x);
	if (this->shared) {
		copy();
	}
	$var($List, newLast, $List::of(x));
	if (this->last$ != nullptr) {
		$set($nc(this->last$), tail, newLast);
		$set(this, last$, newLast);
	} else {
		$set(this, elems, ($set(this, last$, newLast)));
	}
	++this->count;
	return this;
}

ListBuffer* ListBuffer::appendList($List* xs$renamed) {
	$var($List, xs, xs$renamed);
	while ($nc(xs)->nonEmpty()) {
		append(xs->head);
		$assign(xs, xs->tail);
	}
	return this;
}

ListBuffer* ListBuffer::appendList(ListBuffer* xs) {
	return appendList($($nc(xs)->toList()));
}

ListBuffer* ListBuffer::appendArray($ObjectArray* xs) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectArray, arr$, xs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, x, arr$->get(i$));
			{
				append(x);
			}
		}
	}
	return this;
}

$List* ListBuffer::toList() {
	this->shared = true;
	return this->elems;
}

bool ListBuffer::contains(Object$* x) {
	return $nc(this->elems)->contains(x);
}

$ObjectArray* ListBuffer::toArray($ObjectArray* vec) {
	return $nc(this->elems)->toArray(vec);
}

$ObjectArray* ListBuffer::toArray() {
	return toArray($$new($ObjectArray, size()));
}

$Object* ListBuffer::first() {
	return $of($nc(this->elems)->head);
}

$Object* ListBuffer::next() {
	$var($Object, x, $nc(this->elems)->head);
	if (!$nc(this->elems)->isEmpty()) {
		$set(this, elems, $nc(this->elems)->tail);
		if ($nc(this->elems)->isEmpty()) {
			$set(this, last$, nullptr);
		}
		--this->count;
	}
	return $of(x);
}

$Iterator* ListBuffer::iterator() {
	return $new($ListBuffer$1, this);
}

bool ListBuffer::add(Object$* a) {
	append(a);
	return true;
}

bool ListBuffer::remove(Object$* o) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ListBuffer::containsAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, x, i$->next());
			{
				if (!contains(x)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool ListBuffer::addAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, a, i$->next());
			append(a);
		}
	}
	return true;
}

bool ListBuffer::removeAll($Collection* c) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ListBuffer::retainAll($Collection* c) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ListBuffer::offer(Object$* a) {
	append(a);
	return true;
}

$Object* ListBuffer::poll() {
	return $of(next());
}

$Object* ListBuffer::peek() {
	return $of(first());
}

$Object* ListBuffer::last() {
	return $of(this->last$ != nullptr ? $nc(this->last$)->head : ($Object*)nullptr);
}

ListBuffer::ListBuffer() {
}

$Class* ListBuffer::load$($String* name, bool initialize) {
	$loadClass(ListBuffer, name, initialize, &_ListBuffer_ClassInfo_, allocate$ListBuffer);
	return class$;
}

$Class* ListBuffer::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com