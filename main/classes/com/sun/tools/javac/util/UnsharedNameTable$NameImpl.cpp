#include <com/sun/tools/javac/util/UnsharedNameTable$NameImpl.h>

#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/UnsharedNameTable.h>
#include <jcpp.h>

using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $UnsharedNameTable = ::com::sun::tools::javac::util::UnsharedNameTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _UnsharedNameTable$NameImpl_FieldInfo_[] = {
	{"bytes", "[B", nullptr, $FINAL, $field(UnsharedNameTable$NameImpl, bytes)},
	{"index", "I", nullptr, $FINAL, $field(UnsharedNameTable$NameImpl, index)},
	{}
};

$MethodInfo _UnsharedNameTable$NameImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/UnsharedNameTable;[BI)V", nullptr, 0, $method(static_cast<void(UnsharedNameTable$NameImpl::*)($UnsharedNameTable*,$bytes*,int32_t)>(&UnsharedNameTable$NameImpl::init$))},
	{"getByteArray", "()[B", nullptr, $PUBLIC},
	{"getByteAt", "(I)B", nullptr, $PUBLIC},
	{"getByteLength", "()I", nullptr, $PUBLIC},
	{"getByteOffset", "()I", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UnsharedNameTable$NameImpl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.UnsharedNameTable$NameImpl", "com.sun.tools.javac.util.UnsharedNameTable", "NameImpl", $STATIC},
	{}
};

$ClassInfo _UnsharedNameTable$NameImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.UnsharedNameTable$NameImpl",
	"com.sun.tools.javac.util.Name",
	nullptr,
	_UnsharedNameTable$NameImpl_FieldInfo_,
	_UnsharedNameTable$NameImpl_MethodInfo_,
	nullptr,
	nullptr,
	_UnsharedNameTable$NameImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.UnsharedNameTable"
};

$Object* allocate$UnsharedNameTable$NameImpl($Class* clazz) {
	return $of($alloc(UnsharedNameTable$NameImpl));
}

void UnsharedNameTable$NameImpl::init$($UnsharedNameTable* table, $bytes* bytes, int32_t index) {
	$Name::init$(table);
	$set(this, bytes, bytes);
	this->index = index;
}

int32_t UnsharedNameTable$NameImpl::getIndex() {
	return this->index;
}

int32_t UnsharedNameTable$NameImpl::getByteLength() {
	return $nc(this->bytes)->length;
}

int8_t UnsharedNameTable$NameImpl::getByteAt(int32_t i) {
	return $nc(this->bytes)->get(i);
}

$bytes* UnsharedNameTable$NameImpl::getByteArray() {
	return this->bytes;
}

int32_t UnsharedNameTable$NameImpl::getByteOffset() {
	return 0;
}

UnsharedNameTable$NameImpl::UnsharedNameTable$NameImpl() {
}

$Class* UnsharedNameTable$NameImpl::load$($String* name, bool initialize) {
	$loadClass(UnsharedNameTable$NameImpl, name, initialize, &_UnsharedNameTable$NameImpl_ClassInfo_, allocate$UnsharedNameTable$NameImpl);
	return class$;
}

$Class* UnsharedNameTable$NameImpl::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com