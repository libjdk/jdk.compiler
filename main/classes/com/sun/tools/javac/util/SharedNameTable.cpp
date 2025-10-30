#include <com/sun/tools/javac/util/SharedNameTable.h>

#include <com/sun/tools/javac/util/ArrayUtils.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/SharedNameTable$NameImpl.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $SharedNameTable$NameImplArray = $Array<::com::sun::tools::javac::util::SharedNameTable$NameImpl>;
using $ArrayUtils = ::com::sun::tools::javac::util::ArrayUtils;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $SharedNameTable$NameImpl = ::com::sun::tools::javac::util::SharedNameTable$NameImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _SharedNameTable_FieldInfo_[] = {
	{"freelist", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/lang/ref/SoftReference<Lcom/sun/tools/javac/util/SharedNameTable;>;>;", $PRIVATE | $STATIC, $staticField(SharedNameTable, freelist)},
	{"hashes", "[Lcom/sun/tools/javac/util/SharedNameTable$NameImpl;", nullptr, $PRIVATE, $field(SharedNameTable, hashes)},
	{"bytes", "[B", nullptr, $PUBLIC, $field(SharedNameTable, bytes)},
	{"hashMask", "I", nullptr, $PRIVATE, $field(SharedNameTable, hashMask)},
	{"nc", "I", nullptr, $PRIVATE, $field(SharedNameTable, nc)},
	{}
};

$MethodInfo _SharedNameTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Names;II)V", nullptr, $PUBLIC, $method(static_cast<void(SharedNameTable::*)($Names*,int32_t,int32_t)>(&SharedNameTable::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Names;)V", nullptr, $PUBLIC, $method(static_cast<void(SharedNameTable::*)($Names*)>(&SharedNameTable::init$))},
	{"create", "(Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/SharedNameTable;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<SharedNameTable*(*)($Names*)>(&SharedNameTable::create))},
	{"dispose", "(Lcom/sun/tools/javac/util/SharedNameTable;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(SharedNameTable*)>(&SharedNameTable::dispose))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"fromChars", "([CII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"fromUtf", "([BII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SharedNameTable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Name$Table", "com.sun.tools.javac.util.Name", "Table", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.SharedNameTable$NameImpl", "com.sun.tools.javac.util.SharedNameTable", "NameImpl", $STATIC},
	{}
};

$ClassInfo _SharedNameTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.SharedNameTable",
	"com.sun.tools.javac.util.Name$Table",
	nullptr,
	_SharedNameTable_FieldInfo_,
	_SharedNameTable_MethodInfo_,
	nullptr,
	nullptr,
	_SharedNameTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.SharedNameTable$NameImpl"
};

$Object* allocate$SharedNameTable($Class* clazz) {
	return $of($alloc(SharedNameTable));
}

$List* SharedNameTable::freelist = nullptr;

SharedNameTable* SharedNameTable::create($Names* names) {
	$load(SharedNameTable);
	$synchronized(class$) {
		$init(SharedNameTable);
		$useLocalCurrentObjectStackCache();
		while ($nc(SharedNameTable::freelist)->nonEmpty()) {
			$var(SharedNameTable, t, $cast(SharedNameTable, $nc(($cast($SoftReference, $nc(SharedNameTable::freelist)->head)))->get()));
			$assignStatic(SharedNameTable::freelist, $nc(SharedNameTable::freelist)->tail);
			if (t != nullptr) {
				return t;
			}
		}
		return $new(SharedNameTable, names);
	}
}

void SharedNameTable::dispose(SharedNameTable* t) {
	$load(SharedNameTable);
	$synchronized(class$) {
		$init(SharedNameTable);
		$assignStatic(SharedNameTable::freelist, $nc(SharedNameTable::freelist)->prepend($$new($SoftReference, t)));
	}
}

void SharedNameTable::init$($Names* names, int32_t hashSize, int32_t nameSize) {
	$Name$Table::init$(names);
	this->nc = 0;
	this->hashMask = hashSize - 1;
	$set(this, hashes, $new($SharedNameTable$NameImplArray, hashSize));
	$set(this, bytes, $new($bytes, nameSize));
}

void SharedNameTable::init$($Names* names) {
	SharedNameTable::init$(names, 32768, 0x00020000);
}

$Name* SharedNameTable::fromChars($chars* cs, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	int32_t nc = this->nc;
	$var($bytes, bytes, $set(this, bytes, $ArrayUtils::ensureCapacity(this->bytes, nc + len * 3)));
	int32_t nbytes = $Convert::chars2utf(cs, start, bytes, nc, len) - nc;
	int32_t h = (int32_t)(hashValue(bytes, nc, nbytes) & (uint32_t)this->hashMask);
	$var($SharedNameTable$NameImpl, n, $nc(this->hashes)->get(h));
	while (true) {
		bool var$0 = n != nullptr;
		if (var$0) {
			bool var$1 = n->getByteLength() != nbytes;
			var$0 = (var$1 || !equals(bytes, n->index, bytes, nc, nbytes));
		}
		if (!(var$0)) {
			break;
		}
		{
			$assign(n, $nc(n)->next);
		}
	}
	if (n == nullptr) {
		$assign(n, $new($SharedNameTable$NameImpl, this));
		n->index = nc;
		n->length$ = nbytes;
		$set(n, next, $nc(this->hashes)->get(h));
		$nc(this->hashes)->set(h, n);
		this->nc = nc + nbytes;
		if (nbytes == 0) {
			++this->nc;
		}
	}
	return n;
}

$Name* SharedNameTable::fromUtf($bytes* cs, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	int32_t h = (int32_t)(hashValue(cs, start, len) & (uint32_t)this->hashMask);
	$var($SharedNameTable$NameImpl, n, $nc(this->hashes)->get(h));
	$var($bytes, names, this->bytes);
	while (true) {
		bool var$0 = n != nullptr;
		if (var$0) {
			bool var$1 = n->getByteLength() != len;
			var$0 = (var$1 || !equals(names, n->index, cs, start, len));
		}
		if (!(var$0)) {
			break;
		}
		{
			$assign(n, $nc(n)->next);
		}
	}
	if (n == nullptr) {
		int32_t nc = this->nc;
		$assign(names, ($set(this, bytes, $ArrayUtils::ensureCapacity(names, nc + len))));
		$System::arraycopy(cs, start, names, nc, len);
		$assign(n, $new($SharedNameTable$NameImpl, this));
		n->index = nc;
		n->length$ = len;
		$set(n, next, $nc(this->hashes)->get(h));
		$nc(this->hashes)->set(h, n);
		this->nc = nc + len;
		if (len == 0) {
			++this->nc;
		}
	}
	return n;
}

void SharedNameTable::dispose() {
	dispose(this);
}

void clinit$SharedNameTable($Class* class$) {
	$assignStatic(SharedNameTable::freelist, $List::nil());
}

SharedNameTable::SharedNameTable() {
}

$Class* SharedNameTable::load$($String* name, bool initialize) {
	$loadClass(SharedNameTable, name, initialize, &_SharedNameTable_ClassInfo_, clinit$SharedNameTable, allocate$SharedNameTable);
	return class$;
}

$Class* SharedNameTable::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com