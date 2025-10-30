#include <com/sun/tools/javac/util/IntHashTable.h>

#include <jcpp.h>

#undef DEFAULT_INITIAL_SIZE
#undef DELETED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _IntHashTable_FieldInfo_[] = {
	{"DEFAULT_INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntHashTable, DEFAULT_INITIAL_SIZE)},
	{"objs", "[Ljava/lang/Object;", nullptr, $PROTECTED, $field(IntHashTable, objs)},
	{"ints", "[I", nullptr, $PROTECTED, $field(IntHashTable, ints)},
	{"mask", "I", nullptr, $PROTECTED, $field(IntHashTable, mask)},
	{"num_bindings", "I", nullptr, $PROTECTED, $field(IntHashTable, num_bindings)},
	{"DELETED", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntHashTable, DELETED)},
	{}
};

$MethodInfo _IntHashTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntHashTable::*)()>(&IntHashTable::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IntHashTable::*)(int32_t)>(&IntHashTable::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"hash", "(Ljava/lang/Object;)I", nullptr, $PROTECTED},
	{"lookup", "(Ljava/lang/Object;)I", nullptr, $PROTECTED},
	{"put", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC},
	{"rehash", "()V", nullptr, $PROTECTED},
	{"remove", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntHashTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.IntHashTable",
	"java.lang.Object",
	nullptr,
	_IntHashTable_FieldInfo_,
	_IntHashTable_MethodInfo_
};

$Object* allocate$IntHashTable($Class* clazz) {
	return $of($alloc(IntHashTable));
}

$Object* IntHashTable::DELETED = nullptr;

void IntHashTable::init$() {
	$set(this, objs, $new($ObjectArray, IntHashTable::DEFAULT_INITIAL_SIZE));
	$set(this, ints, $new($ints, IntHashTable::DEFAULT_INITIAL_SIZE));
	this->mask = IntHashTable::DEFAULT_INITIAL_SIZE - 1;
}

void IntHashTable::init$(int32_t capacity) {
	int32_t log2Size = 4;
	while (capacity > ($sl(1, log2Size))) {
		++log2Size;
	}
	capacity = $sl(1, log2Size);
	$set(this, objs, $new($ObjectArray, capacity));
	$set(this, ints, $new($ints, capacity));
	this->mask = capacity - 1;
}

int32_t IntHashTable::hash(Object$* key) {
	return $System::identityHashCode(key);
}

int32_t IntHashTable::lookup(Object$* key) {
	$var($Object, node, nullptr);
	int32_t hash = this->hash(key);
	int32_t hash1 = hash ^ ((int32_t)((uint32_t)hash >> 15));
	int32_t hash2 = (hash ^ (hash << 6)) | 1;
	int32_t deleted = -1;
	for (int32_t i = (int32_t)(hash1 & (uint32_t)this->mask);; i = (int32_t)((i + hash2) & (uint32_t)this->mask)) {
		$assign(node, $nc(this->objs)->get(i));
		if ($equals(node, key)) {
			return i;
		}
		if (node == nullptr) {
			return deleted >= 0 ? deleted : i;
		}
		if ($equals(node, IntHashTable::DELETED) && deleted < 0) {
			deleted = i;
		}
	}
}

int32_t IntHashTable::get(Object$* key) {
	int32_t index = lookup(key);
	$var($Object0, node, $nc(this->objs)->get(index));
	return node == nullptr || $equals(node, IntHashTable::DELETED) ? -1 : $nc(this->ints)->get(index);
}

int32_t IntHashTable::put(Object$* key, int32_t value) {
	int32_t index = lookup(key);
	$var($Object0, old, $nc(this->objs)->get(index));
	if (old == nullptr || $equals(old, IntHashTable::DELETED)) {
		$nc(this->objs)->set(index, key);
		$nc(this->ints)->set(index, value);
		if (!$equals(old, IntHashTable::DELETED)) {
			++this->num_bindings;
		}
		if (3 * this->num_bindings >= 2 * $nc(this->objs)->length) {
			rehash();
		}
		return -1;
	} else {
		int32_t oldValue = $nc(this->ints)->get(index);
		$nc(this->ints)->set(index, value);
		return oldValue;
	}
}

int32_t IntHashTable::remove(Object$* key) {
	int32_t index = lookup(key);
	$var($Object0, old, $nc(this->objs)->get(index));
	if (old == nullptr || $equals(old, IntHashTable::DELETED)) {
		return -1;
	}
	$nc(this->objs)->set(index, IntHashTable::DELETED);
	return $nc(this->ints)->get(index);
}

void IntHashTable::rehash() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, oldObjsTable, this->objs);
	$var($ints, oldIntsTable, this->ints);
	int32_t newCapacity = $nc(oldObjsTable)->length << 1;
	$set(this, objs, $new($ObjectArray, newCapacity));
	$set(this, ints, $new($ints, newCapacity));
	this->mask = newCapacity - 1;
	this->num_bindings = 0;
	$var($Object, key, nullptr);
	for (int32_t i = $nc(oldIntsTable)->length; --i >= 0;) {
		$assign(key, oldObjsTable->get(i));
		if (key != nullptr && !$equals(key, IntHashTable::DELETED)) {
			put(key, oldIntsTable->get(i));
		}
	}
}

void IntHashTable::clear() {
	for (int32_t i = $nc(this->objs)->length; --i >= 0;) {
		$nc(this->objs)->set(i, nullptr);
	}
	this->num_bindings = 0;
}

void clinit$IntHashTable($Class* class$) {
	$assignStatic(IntHashTable::DELETED, $new($Object));
}

IntHashTable::IntHashTable() {
}

$Class* IntHashTable::load$($String* name, bool initialize) {
	$loadClass(IntHashTable, name, initialize, &_IntHashTable_ClassInfo_, clinit$IntHashTable, allocate$IntHashTable);
	return class$;
}

$Class* IntHashTable::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com