#include <com/sun/tools/sjavac/options/ArgumentIterator.h>

#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$FieldInfo _ArgumentIterator_FieldInfo_[] = {
	{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/String;>;", $PRIVATE, $field(ArgumentIterator, iter)},
	{"current", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ArgumentIterator, current$)},
	{"buffered", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ArgumentIterator, buffered)},
	{}
};

$MethodInfo _ArgumentIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ArgumentIterator::*)($Iterable*)>(&ArgumentIterator::init$))},
	{"current", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"fillBuffer", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArgumentIterator::*)()>(&ArgumentIterator::fillBuffer))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"peek", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArgumentIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.options.ArgumentIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ArgumentIterator_FieldInfo_,
	_ArgumentIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;"
};

$Object* allocate$ArgumentIterator($Class* clazz) {
	return $of($alloc(ArgumentIterator));
}

void ArgumentIterator::init$($Iterable* iter) {
	$set(this, iter, $nc(iter)->iterator());
}

bool ArgumentIterator::hasNext() {
	return this->buffered != nullptr || $nc(this->iter)->hasNext();
}

$Object* ArgumentIterator::next() {
	fillBuffer();
	$set(this, current$, this->buffered);
	$set(this, buffered, nullptr);
	return $of(this->current$);
}

$String* ArgumentIterator::current() {
	return this->current$;
}

void ArgumentIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

$String* ArgumentIterator::peek() {
	fillBuffer();
	return this->buffered;
}

void ArgumentIterator::fillBuffer() {
	if (this->buffered == nullptr && $nc(this->iter)->hasNext()) {
		$set(this, buffered, $cast($String, $nc(this->iter)->next()));
	}
}

ArgumentIterator::ArgumentIterator() {
}

$Class* ArgumentIterator::load$($String* name, bool initialize) {
	$loadClass(ArgumentIterator, name, initialize, &_ArgumentIterator_ClassInfo_, allocate$ArgumentIterator);
	return class$;
}

$Class* ArgumentIterator::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com