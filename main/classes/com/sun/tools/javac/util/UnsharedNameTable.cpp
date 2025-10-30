#include <com/sun/tools/javac/util/UnsharedNameTable.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/UnsharedNameTable$HashEntry.h>
#include <com/sun/tools/javac/util/UnsharedNameTable$NameImpl.h>
#include <java/lang/ref/Reference.h>
#include <jcpp.h>

using $UnsharedNameTable$HashEntryArray = $Array<::com::sun::tools::javac::util::UnsharedNameTable$HashEntry>;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $UnsharedNameTable$HashEntry = ::com::sun::tools::javac::util::UnsharedNameTable$HashEntry;
using $UnsharedNameTable$NameImpl = ::com::sun::tools::javac::util::UnsharedNameTable$NameImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _UnsharedNameTable_FieldInfo_[] = {
	{"hashes", "[Lcom/sun/tools/javac/util/UnsharedNameTable$HashEntry;", nullptr, $PRIVATE, $field(UnsharedNameTable, hashes)},
	{"hashMask", "I", nullptr, $PRIVATE, $field(UnsharedNameTable, hashMask)},
	{"index", "I", nullptr, $PUBLIC, $field(UnsharedNameTable, index)},
	{}
};

$MethodInfo _UnsharedNameTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Names;I)V", nullptr, $PUBLIC, $method(static_cast<void(UnsharedNameTable::*)($Names*,int32_t)>(&UnsharedNameTable::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Names;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsharedNameTable::*)($Names*)>(&UnsharedNameTable::init$))},
	{"create", "(Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/Name$Table;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Name$Table*(*)($Names*)>(&UnsharedNameTable::create))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"fromChars", "([CII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"fromUtf", "([BII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UnsharedNameTable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Name$Table", "com.sun.tools.javac.util.Name", "Table", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.UnsharedNameTable$NameImpl", "com.sun.tools.javac.util.UnsharedNameTable", "NameImpl", $STATIC},
	{"com.sun.tools.javac.util.UnsharedNameTable$HashEntry", "com.sun.tools.javac.util.UnsharedNameTable", "HashEntry", $STATIC},
	{}
};

$ClassInfo _UnsharedNameTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.UnsharedNameTable",
	"com.sun.tools.javac.util.Name$Table",
	nullptr,
	_UnsharedNameTable_FieldInfo_,
	_UnsharedNameTable_MethodInfo_,
	nullptr,
	nullptr,
	_UnsharedNameTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.UnsharedNameTable$NameImpl,com.sun.tools.javac.util.UnsharedNameTable$HashEntry"
};

$Object* allocate$UnsharedNameTable($Class* clazz) {
	return $of($alloc(UnsharedNameTable));
}

$Name$Table* UnsharedNameTable::create($Names* names) {
	$init(UnsharedNameTable);
	return $new(UnsharedNameTable, names);
}

void UnsharedNameTable::init$($Names* names, int32_t hashSize) {
	$Name$Table::init$(names);
	$set(this, hashes, nullptr);
	this->hashMask = hashSize - 1;
	$set(this, hashes, $new($UnsharedNameTable$HashEntryArray, hashSize));
}

void UnsharedNameTable::init$($Names* names) {
	UnsharedNameTable::init$(names, 32768);
}

$Name* UnsharedNameTable::fromChars($chars* cs, int32_t start, int32_t len) {
	$var($bytes, name, $new($bytes, len * 3));
	int32_t nbytes = $Convert::chars2utf(cs, start, name, 0, len);
	return fromUtf(name, 0, nbytes);
}

$Name* UnsharedNameTable::fromUtf($bytes* cs, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	int32_t h = (int32_t)(hashValue(cs, start, len) & (uint32_t)this->hashMask);
	$var($UnsharedNameTable$HashEntry, element, $nc(this->hashes)->get(h));
	$var($UnsharedNameTable$NameImpl, n, nullptr);
	$var($UnsharedNameTable$HashEntry, previousNonNullTableEntry, nullptr);
	$var($UnsharedNameTable$HashEntry, firstTableEntry, element);
	while (element != nullptr) {
		$assign(n, $cast($UnsharedNameTable$NameImpl, element->get()));
		if (n == nullptr) {
			if (firstTableEntry == element) {
				$nc(this->hashes)->set(h, $assign(firstTableEntry, element->next));
			} else {
				$Assert::checkNonNull($of(previousNonNullTableEntry), "previousNonNullTableEntry cannot be null here."_s);
				$set($nc(previousNonNullTableEntry), next, element->next);
			}
		} else {
			bool var$0 = $nc(n)->getByteLength() == len;
			if (var$0 && equals(n->bytes, 0, cs, start, len)) {
				return n;
			}
			$assign(previousNonNullTableEntry, element);
		}
		$assign(element, element->next);
	}
	$var($bytes, bytes, $new($bytes, len));
	$System::arraycopy(cs, start, bytes, 0, len);
	$assign(n, $new($UnsharedNameTable$NameImpl, this, bytes, this->index++));
	$var($UnsharedNameTable$HashEntry, newEntry, $new($UnsharedNameTable$HashEntry, n));
	if (previousNonNullTableEntry == nullptr) {
		$nc(this->hashes)->set(h, newEntry);
	} else {
		$Assert::checkNull($of($nc(previousNonNullTableEntry)->next), "previousNonNullTableEntry.next must be null."_s);
		$set($nc(previousNonNullTableEntry), next, newEntry);
	}
	return n;
}

void UnsharedNameTable::dispose() {
	$set(this, hashes, nullptr);
}

UnsharedNameTable::UnsharedNameTable() {
}

$Class* UnsharedNameTable::load$($String* name, bool initialize) {
	$loadClass(UnsharedNameTable, name, initialize, &_UnsharedNameTable_ClassInfo_, allocate$UnsharedNameTable);
	return class$;
}

$Class* UnsharedNameTable::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com