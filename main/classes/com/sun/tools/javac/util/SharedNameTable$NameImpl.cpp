#include <com/sun/tools/javac/util/SharedNameTable$NameImpl.h>

#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/SharedNameTable.h>
#include <jcpp.h>

using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $SharedNameTable = ::com::sun::tools::javac::util::SharedNameTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _SharedNameTable$NameImpl_FieldInfo_[] = {
	{"next", "Lcom/sun/tools/javac/util/SharedNameTable$NameImpl;", nullptr, 0, $field(SharedNameTable$NameImpl, next)},
	{"index", "I", nullptr, 0, $field(SharedNameTable$NameImpl, index)},
	{"length", "I", nullptr, 0, $field(SharedNameTable$NameImpl, length$)},
	{}
};

$MethodInfo _SharedNameTable$NameImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/SharedNameTable;)V", nullptr, 0, $method(static_cast<void(SharedNameTable$NameImpl::*)($SharedNameTable*)>(&SharedNameTable$NameImpl::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getByteArray", "()[B", nullptr, $PUBLIC},
	{"getByteAt", "(I)B", nullptr, $PUBLIC},
	{"getByteLength", "()I", nullptr, $PUBLIC},
	{"getByteOffset", "()I", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SharedNameTable$NameImpl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.SharedNameTable$NameImpl", "com.sun.tools.javac.util.SharedNameTable", "NameImpl", $STATIC},
	{}
};

$ClassInfo _SharedNameTable$NameImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.SharedNameTable$NameImpl",
	"com.sun.tools.javac.util.Name",
	nullptr,
	_SharedNameTable$NameImpl_FieldInfo_,
	_SharedNameTable$NameImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SharedNameTable$NameImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.SharedNameTable"
};

$Object* allocate$SharedNameTable$NameImpl($Class* clazz) {
	return $of($alloc(SharedNameTable$NameImpl));
}

void SharedNameTable$NameImpl::init$($SharedNameTable* table) {
	$Name::init$(table);
}

int32_t SharedNameTable$NameImpl::getIndex() {
	return this->index;
}

int32_t SharedNameTable$NameImpl::getByteLength() {
	return this->length$;
}

int8_t SharedNameTable$NameImpl::getByteAt(int32_t i) {
	return $nc($(getByteArray()))->get(this->index + i);
}

$bytes* SharedNameTable$NameImpl::getByteArray() {
	return $nc(($cast($SharedNameTable, this->table)))->bytes;
}

int32_t SharedNameTable$NameImpl::getByteOffset() {
	return this->index;
}

int32_t SharedNameTable$NameImpl::hashCode() {
	return this->index;
}

bool SharedNameTable$NameImpl::equals(Object$* other) {
	$var($Name, name, nullptr);
	bool var$2 = $instanceOf($Name, other);
	if (var$2) {
		$assign(name, $cast($Name, other));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && this->table == $nc(name)->table;
	return var$0 && this->index == name->getIndex();
}

SharedNameTable$NameImpl::SharedNameTable$NameImpl() {
}

$Class* SharedNameTable$NameImpl::load$($String* name, bool initialize) {
	$loadClass(SharedNameTable$NameImpl, name, initialize, &_SharedNameTable$NameImpl_ClassInfo_, allocate$SharedNameTable$NameImpl);
	return class$;
}

$Class* SharedNameTable$NameImpl::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com