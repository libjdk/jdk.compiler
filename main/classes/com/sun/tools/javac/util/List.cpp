#include <com/sun/tools/javac/util/List.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List$1.h>
#include <com/sun/tools/javac/util/List$2.h>
#include <com/sun/tools/javac/util/List$3.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/io/Serializable.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Array.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractQueue.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector$Characteristics.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef EMPTYITERATOR
#undef EMPTY_LIST

using $Collector$CharacteristicsArray = $Array<::java::util::stream::Collector$Characteristics>;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List$1 = ::com::sun::tools::javac::util::List$1;
using $List$2 = ::com::sun::tools::javac::util::List$2;
using $List$3 = ::com::sun::tools::javac::util::List$3;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $1Array = ::java::lang::reflect::Array;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractQueue = ::java::util::AbstractQueue;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Spliterator = ::java::util::Spliterator;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collector$Characteristics = ::java::util::stream::Collector$Characteristics;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class List$$Lambda$ListBuffer : public $Supplier {
	$class(List$$Lambda$ListBuffer, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($ListBuffer));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<List$$Lambda$ListBuffer>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo List$$Lambda$ListBuffer::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(List$$Lambda$ListBuffer::*)()>(&List$$Lambda$ListBuffer::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo List$$Lambda$ListBuffer::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.List$$Lambda$ListBuffer",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* List$$Lambda$ListBuffer::load$($String* name, bool initialize) {
	$loadClass(List$$Lambda$ListBuffer, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* List$$Lambda$ListBuffer::class$ = nullptr;

class List$$Lambda$add$1 : public $BiConsumer {
	$class(List$$Lambda$add$1, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* a) override {
		$sure($ListBuffer, inst$)->add(a);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<List$$Lambda$add$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo List$$Lambda$add$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(List$$Lambda$add$1::*)()>(&List$$Lambda$add$1::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo List$$Lambda$add$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.List$$Lambda$add$1",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* List$$Lambda$add$1::load$($String* name, bool initialize) {
	$loadClass(List$$Lambda$add$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* List$$Lambda$add$1::class$ = nullptr;

class List$$Lambda$lambda$collector$0$2 : public $BinaryOperator {
	$class(List$$Lambda$lambda$collector$0$2, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* buf1, Object$* buf2) override {
		 return $of(List::lambda$collector$0($cast($ListBuffer, buf1), $cast($ListBuffer, buf2)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<List$$Lambda$lambda$collector$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo List$$Lambda$lambda$collector$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(List$$Lambda$lambda$collector$0$2::*)()>(&List$$Lambda$lambda$collector$0$2::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo List$$Lambda$lambda$collector$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.List$$Lambda$lambda$collector$0$2",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* List$$Lambda$lambda$collector$0$2::load$($String* name, bool initialize) {
	$loadClass(List$$Lambda$lambda$collector$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* List$$Lambda$lambda$collector$0$2::class$ = nullptr;

class List$$Lambda$toList$3 : public $Function {
	$class(List$$Lambda$toList$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ListBuffer, inst$)->toList());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<List$$Lambda$toList$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo List$$Lambda$toList$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(List$$Lambda$toList$3::*)()>(&List$$Lambda$toList$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo List$$Lambda$toList$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.List$$Lambda$toList$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* List$$Lambda$toList$3::load$($String* name, bool initialize) {
	$loadClass(List$$Lambda$toList$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* List$$Lambda$toList$3::class$ = nullptr;

$CompoundAttribute _List_MethodAnnotations_fill13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _List_FieldInfo_[] = {
	{"head", "Ljava/lang/Object;", "TA;", $PUBLIC, $field(List, head)},
	{"tail", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC, $field(List, tail)},
	{"EMPTY_LIST", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(List, EMPTY_LIST)},
	{"EMPTYITERATOR", "Ljava/util/Iterator;", "Ljava/util/Iterator<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(List, EMPTYITERATOR)},
	{}
};

$MethodInfo _List_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/lang/Object;Lcom/sun/tools/javac/util/List;)V", "(TA;Lcom/sun/tools/javac/util/List<TA;>;)V", 0, $method(static_cast<void(List::*)(Object$*,List*)>(&List::init$))},
	{"add", "(ILjava/lang/Object;)V", "(ITA;)V", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TA;>;)Z", $PUBLIC},
	{"append", "(Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "(TA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"appendList", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<TA;>;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"appendList", "(Lcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/ListBuffer<TA;>;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"collector", "()Ljava/util/stream/Collector;", "<Z:Ljava/lang/Object;>()Ljava/util/stream/Collector<TZ;Lcom/sun/tools/javac/util/ListBuffer<TZ;>;Lcom/sun/tools/javac/util/List<TZ;>;>;", $PUBLIC | $STATIC, $method(static_cast<$Collector*(*)()>(&List::collector))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"convert", "(Ljava/lang/Class;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Lcom/sun/tools/javac/util/List<*>;)Lcom/sun/tools/javac/util/List<TT;>;", $PUBLIC | $STATIC, $method(static_cast<List*(*)($Class*,List*)>(&List::convert))},
	{"diff", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<TA;>;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"emptyIterator", "()Ljava/util/Iterator;", "<A:Ljava/lang/Object;>()Ljava/util/Iterator<TA;>;", $PRIVATE | $STATIC, $method(static_cast<$Iterator*(*)()>(&List::emptyIterator))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<*>;Lcom/sun/tools/javac/util/List<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)(List*,List*)>(&List::equals))},
	{"fill", "(ILjava/lang/Object;)Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>(ITA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<List*(*)(int32_t,Object$*)>(&List::fill)), nullptr, nullptr, _List_MethodAnnotations_fill13},
	{"filter", "(Lcom/sun/tools/javac/util/List;Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/List<TA;>;TA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC, $method(static_cast<List*(*)(List*,Object$*)>(&List::filter))},
	{"from", "([Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>([TA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC, $method(static_cast<List*(*)($ObjectArray*)>(&List::from))},
	{"from", "(Ljava/lang/Iterable;)Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>(Ljava/lang/Iterable<+TA;>;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC, $method(static_cast<List*(*)($Iterable*)>(&List::from))},
	{"get", "(I)Ljava/lang/Object;", "(I)TA;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"intersect", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<TA;>;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TA;>;", $PUBLIC},
	{"lambda$collector$0", "(Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ListBuffer*(*)($ListBuffer*,$ListBuffer*)>(&List::lambda$collector$0))},
	{"last", "()Ljava/lang/Object;", "()TA;", $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TA;>;", $PUBLIC},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TA;>;", $PUBLIC},
	{"map", "(Ljava/util/function/Function;)Lcom/sun/tools/javac/util/List;", "<Z:Ljava/lang/Object;>(Ljava/util/function/Function<TA;TZ;>;)Lcom/sun/tools/javac/util/List<TZ;>;", $PUBLIC},
	{"nil", "()Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>()Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC, $method(static_cast<List*(*)()>(&List::nil))},
	{"nonEmpty", "()Z", nullptr, $PUBLIC},
	{"of", "(Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>(TA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC, $method(static_cast<List*(*)(Object$*)>(&List::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>(TA;TA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC, $method(static_cast<List*(*)(Object$*,Object$*)>(&List::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>(TA;TA;TA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC, $method(static_cast<List*(*)(Object$*,Object$*,Object$*)>(&List::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "<A:Ljava/lang/Object;>(TA;TA;TA;[TA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<List*(*)(Object$*,Object$*,Object$*,$ObjectArray*)>(&List::of))},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"prepend", "(Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "(TA;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"prependList", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<TA;>;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", "(I)TA;", $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"reverse", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITA;)TA;", $PUBLIC},
	{"setTail", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<TA;>;)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TA;>;", $PUBLIC},
	{"take", "(I)Lcom/sun/tools/javac/util/List;", "(I)Lcom/sun/tools/javac/util/List<TA;>;", $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _List_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.List$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.util.List$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.util.List$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _List_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.List",
	"java.util.AbstractCollection",
	"java.util.List",
	_List_FieldInfo_,
	_List_MethodInfo_,
	"<A:Ljava/lang/Object;>Ljava/util/AbstractCollection<TA;>;Ljava/util/List<TA;>;",
	nullptr,
	_List_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.List$3,com.sun.tools.javac.util.List$2,com.sun.tools.javac.util.List$1"
};

$Object* allocate$List($Class* clazz) {
	return $of($alloc(List));
}

bool List::add(Object$* arg0) {
	 return this->$AbstractCollection::add(arg0);
}

bool List::remove(Object$* arg0) {
	 return this->$AbstractCollection::remove(arg0);
}

bool List::containsAll($Collection* arg0) {
	 return this->$AbstractCollection::containsAll(arg0);
}

bool List::addAll($Collection* arg0) {
	 return this->$AbstractCollection::addAll(arg0);
}

bool List::removeAll($Collection* arg0) {
	 return this->$AbstractCollection::removeAll(arg0);
}

bool List::retainAll($Collection* arg0) {
	 return this->$AbstractCollection::retainAll(arg0);
}

void List::clear() {
	this->$AbstractCollection::clear();
}

$ObjectArray* List::toArray($IntFunction* arg0) {
	 return this->$AbstractCollection::toArray(arg0);
}

bool List::removeIf($Predicate* arg0) {
	 return this->$AbstractCollection::removeIf(arg0);
}

$Spliterator* List::spliterator() {
	 return this->$AbstractCollection::spliterator();
}

$Stream* List::stream() {
	 return this->$AbstractCollection::stream();
}

$Stream* List::parallelStream() {
	 return this->$AbstractCollection::parallelStream();
}

void List::forEach($Consumer* arg0) {
	this->$AbstractCollection::forEach(arg0);
}

$Object* List::clone() {
	 return this->$AbstractCollection::clone();
}

void List::finalize() {
	this->$AbstractCollection::finalize();
}

List* List::EMPTY_LIST = nullptr;
$Iterator* List::EMPTYITERATOR = nullptr;

void List::init$(Object$* head, List* tail) {
	$AbstractCollection::init$();
	$set(this, tail, tail);
	$set(this, head, head);
}

List* List::nil() {
	$init(List);
	return List::EMPTY_LIST;
}

List* List::filter(List* l, Object$* elem) {
	$init(List);
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull(elem);
	$var(List, res, List::nil());
	{
		$var($Iterator, i$, $nc(l)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, a, i$->next());
			{
				if (a != nullptr && !$of(a)->equals(elem)) {
					$assign(res, $nc(res)->prepend(a));
				}
			}
		}
	}
	return $nc(res)->reverse();
}

List* List::intersect(List* that) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, el, i$->next());
			{
				if ($nc(that)->contains(el)) {
					buf->append(el);
				}
			}
		}
	}
	return buf->toList();
}

List* List::diff(List* that) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, el, i$->next());
			{
				if (!$nc(that)->contains(el)) {
					buf->append(el);
				}
			}
		}
	}
	return buf->toList();
}

List* List::take(int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	int32_t count = 0;
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, el, i$->next());
			{
				if (count++ == n) {
					break;
				}
				buf->append(el);
			}
		}
	}
	return buf->toList();
}

List* List::of(Object$* x1) {
	$init(List);
	return $new(List, x1, $(List::nil()));
}

List* List::of(Object$* x1, Object$* x2) {
	$init(List);
	return $new(List, x1, $(of(x2)));
}

List* List::of(Object$* x1, Object$* x2, Object$* x3) {
	$init(List);
	return $new(List, x1, $(of(x2, x3)));
}

List* List::of(Object$* x1, Object$* x2, Object$* x3, $ObjectArray* rest) {
	$init(List);
	$useLocalCurrentObjectStackCache();
	return $new(List, x1, $$new(List, x2, $$new(List, x3, $(from(rest)))));
}

List* List::from($ObjectArray* array) {
	$init(List);
	$var(List, xs, nil());
	if (array != nullptr) {
		for (int32_t i = array->length - 1; i >= 0; --i) {
			$assign(xs, $new(List, array->get(i), xs));
		}
	}
	return xs;
}

List* List::from($Iterable* coll) {
	$init(List);
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, xs, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(coll)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, a, i$->next());
			{
				xs->append(a);
			}
		}
	}
	return xs->toList();
}

List* List::fill(int32_t len, Object$* init) {
	$init(List);
	$var(List, l, nil());
	for (int32_t i = 0; i < len; ++i) {
		$assign(l, $new(List, init, l));
	}
	return l;
}

bool List::isEmpty() {
	return this->tail == nullptr;
}

bool List::nonEmpty() {
	return this->tail != nullptr;
}

int32_t List::length() {
	$var(List, l, this);
	int32_t len = 0;
	while ($nc(l)->tail != nullptr) {
		$assign(l, l->tail);
		++len;
	}
	return len;
}

int32_t List::size() {
	return length();
}

List* List::setTail(List* tail) {
	$set(this, tail, tail);
	return tail;
}

List* List::prepend(Object$* x) {
	return $new(List, x, this);
}

List* List::prependList(List* xs) {
	$useLocalCurrentObjectStackCache();
	if (this->isEmpty()) {
		return xs;
	}
	if ($nc(xs)->isEmpty()) {
		return this;
	}
	if ($nc($nc(xs)->tail)->isEmpty()) {
		return prepend(xs->head);
	}
	$var(List, result, this);
	$var(List, rev, $nc(xs)->reverse());
	$Assert::check(rev != xs);
	while ($nc(rev)->nonEmpty()) {
		$var(List, h, rev);
		$assign(rev, rev->tail);
		h->setTail(result);
		$assign(result, h);
	}
	return result;
}

List* List::reverse() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isEmpty();
	if (var$0 || $nc(this->tail)->isEmpty()) {
		return this;
	}
	$var(List, rev, nil());
	{
		$var(List, l, this);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			$assign(rev, $new(List, $nc(l)->head, rev));
		}
	}
	return rev;
}

List* List::append(Object$* x) {
	return $nc($(of(x)))->prependList(this);
}

List* List::appendList(List* x) {
	return $nc(x)->prependList(this);
}

List* List::appendList($ListBuffer* x) {
	return appendList($($nc(x)->toList()));
}

$ObjectArray* List::toArray($ObjectArray* vec$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, vec, vec$renamed);
	int32_t i = 0;
	$var(List, l, this);
	$var($ObjectArray, dest, vec);
	while ($nc(l)->nonEmpty() && i < $nc(vec)->length) {
		$nc(dest)->set(i, l->head);
		$assign(l, l->tail);
		++i;
	}
	if ($nc(l)->isEmpty()) {
		if (i < $nc(vec)->length) {
			vec->set(i, nullptr);
		}
		return vec;
	}
	$Class* var$0 = $nc($of(vec))->getClass()->getComponentType();
	$assign(vec, $cast($ObjectArray, $1Array::newInstance(var$0, size())));
	return toArray(vec);
}

$ObjectArray* List::toArray() {
	return toArray($$new($ObjectArray, size()));
}

$String* List::toString($String* sep) {
	$useLocalCurrentObjectStackCache();
	if (isEmpty()) {
		return ""_s;
	} else {
		$var($StringBuilder, buf, $new($StringBuilder));
		buf->append(this->head);
		{
			$var(List, l, this->tail);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				buf->append(sep);
				buf->append(l->head);
			}
		}
		return buf->toString();
	}
}

$String* List::toString() {
	return toString(","_s);
}

int32_t List::hashCode() {
	$var(List, l, this);
	int32_t h = 1;
	while ($nc(l)->tail != nullptr) {
		h = h * 31 + (l->head == nullptr ? 0 : $nc($of(l->head))->hashCode());
		$assign(l, l->tail);
	}
	return h;
}

bool List::equals(Object$* other) {
	$useLocalCurrentObjectStackCache();
	{
		$var(List, javacList, nullptr);
		bool var$0 = $instanceOf(List, other);
		if (var$0) {
			$assign(javacList, $cast(List, other));
			var$0 = true;
		}
		if (var$0) {
			return equals(this, javacList);
		}
	}
	{
		$var($List, javaUtilList, nullptr);
		bool var$1 = $instanceOf($List, other);
		if (var$1) {
			$assign(javaUtilList, $cast($List, other));
			var$1 = true;
		}
		if (var$1) {
			$var(List, t, this);
			$var($Iterator, oIter, $nc(javaUtilList)->iterator());
			while ($nc(t)->tail != nullptr && $nc(oIter)->hasNext()) {
				$var($Object, o, oIter->next());
				if (!(t->head == nullptr ? o == nullptr : $nc($of(t->head))->equals(o))) {
					return false;
				}
				$assign(t, t->tail);
			}
			bool var$2 = $nc(t)->isEmpty();
			return (var$2 && !$nc(oIter)->hasNext());
		}
	}
	return false;
}

bool List::equals(List* xs$renamed, List* ys$renamed) {
	$init(List);
	$useLocalCurrentObjectStackCache();
	$var(List, ys, ys$renamed);
	$var(List, xs, xs$renamed);
	while ($nc(xs)->tail != nullptr && $nc(ys)->tail != nullptr) {
		if (xs->head == nullptr) {
			if (ys->head != nullptr) {
				return false;
			}
		} else if (!$nc($of(xs->head))->equals(ys->head)) {
			return false;
		}
		$assign(xs, xs->tail);
		$assign(ys, ys->tail);
	}
	return $nc(xs)->tail == nullptr && $nc(ys)->tail == nullptr;
}

bool List::contains(Object$* x) {
	$var(List, l, this);
	while ($nc(l)->tail != nullptr) {
		if (x == nullptr) {
			if (l->head == nullptr) {
				return true;
			}
		} else if ($nc($of(l->head))->equals(x)) {
			return true;
		}
		$assign(l, l->tail);
	}
	return false;
}

$Object* List::last() {
	$useLocalCurrentObjectStackCache();
	$var($Object, last, nullptr);
	$var(List, t, this);
	while ($nc(t)->tail != nullptr) {
		$assign(last, t->head);
		$assign(t, t->tail);
	}
	return $of(last);
}

List* List::map($Function* mapper) {
	$useLocalCurrentObjectStackCache();
	bool changed = false;
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, a, i$->next());
			{
				$var($Object, z, $nc(mapper)->apply(a));
				buf->append(z);
				changed |= (!$equals(z, a));
			}
		}
	}
	return changed ? buf->toList() : this;
}

List* List::convert($Class* klass, List* list) {
	$init(List);
	$useLocalCurrentObjectStackCache();
	if (list == nullptr) {
		return nullptr;
	}
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			$nc(klass)->cast(o);
		}
	}
	return list;
}

$Iterator* List::emptyIterator() {
	$init(List);
	return List::EMPTYITERATOR;
}

$Iterator* List::iterator() {
	if (this->tail == nullptr) {
		return emptyIterator();
	}
	return $new($List$3, this);
}

$Object* List::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0) {
		$throwNew($IndexOutOfBoundsException, $($String::valueOf(index)));
	}
	$var(List, l, this);
	for (int32_t i = index; i-- > 0 && !$nc(l)->isEmpty(); $assign(l, $nc(l)->tail)) {
	}
	if (l->isEmpty()) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index), ", Size: "_s, $$str(size())}));
	}
	return $of(l->head);
}

bool List::addAll(int32_t index, $Collection* c) {
	if ($nc(c)->isEmpty()) {
		return false;
	}
	$throwNew($UnsupportedOperationException);
}

$Object* List::set(int32_t index, Object$* element) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void List::add(int32_t index, Object$* element) {
	$throwNew($UnsupportedOperationException);
}

$Object* List::remove(int32_t index) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t List::indexOf(Object$* o) {
	int32_t i = 0;
	{
		$var(List, l, this);
		for (; l->tail != nullptr; $assign(l, l->tail), ++i) {
			if ($nc(l)->head == nullptr ? o == nullptr : $nc($of($nc(l)->head))->equals(o)) {
				return i;
			}
		}
	}
	return -1;
}

int32_t List::lastIndexOf(Object$* o) {
	int32_t last = -1;
	int32_t i = 0;
	{
		$var(List, l, this);
		for (; l->tail != nullptr; $assign(l, l->tail), ++i) {
			if ($nc(l)->head == nullptr ? o == nullptr : $nc($of($nc(l)->head))->equals(o)) {
				last = i;
			}
		}
	}
	return last;
}

$ListIterator* List::listIterator() {
	$useLocalCurrentObjectStackCache();
	return $nc($($Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(this))))))->listIterator();
}

$ListIterator* List::listIterator(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(this))))))->listIterator(index);
}

$List* List::subList(int32_t fromIndex, int32_t toIndex) {
	$useLocalCurrentObjectStackCache();
	if (fromIndex < 0 || toIndex > size() || fromIndex > toIndex) {
		$throwNew($IllegalArgumentException);
	}
	$var($ArrayList, a, $new($ArrayList, toIndex - fromIndex));
	int32_t i = 0;
	{
		$var(List, l, this);
		for (; l->tail != nullptr; $assign(l, l->tail), ++i) {
			if (i == toIndex) {
				break;
			}
			if (i >= fromIndex) {
				a->add($nc(l)->head);
			}
		}
	}
	return $Collections::unmodifiableList(a);
}

$Collector* List::collector() {
	$init(List);
	$useLocalCurrentObjectStackCache();
	$var($Supplier, var$0, static_cast<$Supplier*>($new(List$$Lambda$ListBuffer)));
	$var($BiConsumer, var$1, static_cast<$BiConsumer*>($new(List$$Lambda$add$1)));
	$var($BinaryOperator, var$2, static_cast<$BinaryOperator*>($new(List$$Lambda$lambda$collector$0$2)));
	return $Collector::of(var$0, var$1, var$2, static_cast<$Function*>($$new(List$$Lambda$toList$3)), $$new($Collector$CharacteristicsArray, 0));
}

$ListBuffer* List::lambda$collector$0($ListBuffer* buf1, $ListBuffer* buf2) {
	$init(List);
	$nc(buf1)->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(buf2))));
	return buf1;
}

void clinit$List($Class* class$) {
	$assignStatic(List::EMPTY_LIST, $new($List$1, nullptr, nullptr));
	$assignStatic(List::EMPTYITERATOR, $new($List$2));
}

List::List() {
}

$Class* List::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(List$$Lambda$ListBuffer::classInfo$.name)) {
			return List$$Lambda$ListBuffer::load$(name, initialize);
		}
		if (name->equals(List$$Lambda$add$1::classInfo$.name)) {
			return List$$Lambda$add$1::load$(name, initialize);
		}
		if (name->equals(List$$Lambda$lambda$collector$0$2::classInfo$.name)) {
			return List$$Lambda$lambda$collector$0$2::load$(name, initialize);
		}
		if (name->equals(List$$Lambda$toList$3::classInfo$.name)) {
			return List$$Lambda$toList$3::load$(name, initialize);
		}
	}
	$loadClass(List, name, initialize, &_List_ClassInfo_, clinit$List, allocate$List);
	return class$;
}

$Class* List::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com