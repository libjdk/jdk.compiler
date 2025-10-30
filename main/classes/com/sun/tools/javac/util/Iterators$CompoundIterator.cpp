#include <com/sun/tools/javac/util/Iterators$CompoundIterator.h>

#include <com/sun/tools/javac/util/Iterators.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef EMPTY

using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Iterators$CompoundIterator_FieldInfo_[] = {
	{"inputs", "Ljava/util/Iterator;", "Ljava/util/Iterator<TI;>;", $PRIVATE | $FINAL, $field(Iterators$CompoundIterator, inputs)},
	{"convertor", "Ljava/util/function/Function;", "Ljava/util/function/Function<TI;Ljava/util/Iterator<TO;>;>;", $PRIVATE | $FINAL, $field(Iterators$CompoundIterator, convertor)},
	{"currentIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<TO;>;", $PRIVATE, $field(Iterators$CompoundIterator, currentIterator)},
	{}
};

$MethodInfo _Iterators$CompoundIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Iterable;Ljava/util/function/Function;)V", "(Ljava/lang/Iterable<TI;>;Ljava/util/function/Function<TI;Ljava/util/Iterator<TO;>;>;)V", $PUBLIC, $method(static_cast<void(Iterators$CompoundIterator::*)($Iterable*,$Function*)>(&Iterators$CompoundIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TO;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"update", "()V", nullptr, $PRIVATE, $method(static_cast<void(Iterators$CompoundIterator::*)()>(&Iterators$CompoundIterator::update))},
	{}
};

$InnerClassInfo _Iterators$CompoundIterator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Iterators$CompoundIterator", "com.sun.tools.javac.util.Iterators", "CompoundIterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Iterators$CompoundIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.Iterators$CompoundIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_Iterators$CompoundIterator_FieldInfo_,
	_Iterators$CompoundIterator_MethodInfo_,
	"<I:Ljava/lang/Object;O:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TO;>;",
	nullptr,
	_Iterators$CompoundIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Iterators"
};

$Object* allocate$Iterators$CompoundIterator($Class* clazz) {
	return $of($alloc(Iterators$CompoundIterator));
}

void Iterators$CompoundIterator::init$($Iterable* inputs, $Function* convertor) {
	$init($Iterators);
	$set(this, currentIterator, $Iterators::EMPTY);
	$set(this, inputs, $nc(inputs)->iterator());
	$set(this, convertor, convertor);
}

bool Iterators$CompoundIterator::hasNext() {
	if (this->currentIterator != nullptr && !$nc(this->currentIterator)->hasNext()) {
		update();
	}
	return this->currentIterator != nullptr;
}

$Object* Iterators$CompoundIterator::next() {
	$init($Iterators);
	if (this->currentIterator == $Iterators::EMPTY && !hasNext()) {
		$throwNew($NoSuchElementException);
	}
	return $of($nc(this->currentIterator)->next());
}

void Iterators$CompoundIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void Iterators$CompoundIterator::update() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->inputs)->hasNext()) {
		$set(this, currentIterator, $cast($Iterator, $nc(this->convertor)->apply($($nc(this->inputs)->next()))));
		if ($nc(this->currentIterator)->hasNext()) {
			return;
		}
	}
	$set(this, currentIterator, nullptr);
}

Iterators$CompoundIterator::Iterators$CompoundIterator() {
}

$Class* Iterators$CompoundIterator::load$($String* name, bool initialize) {
	$loadClass(Iterators$CompoundIterator, name, initialize, &_Iterators$CompoundIterator_ClassInfo_, allocate$Iterators$CompoundIterator);
	return class$;
}

$Class* Iterators$CompoundIterator::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com