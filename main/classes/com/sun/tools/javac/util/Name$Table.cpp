#include <com/sun/tools/javac/util/Name$Table.h>

#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Name$Table_FieldInfo_[] = {
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PUBLIC | $FINAL, $field(Name$Table, names)},
	{}
};

$MethodInfo _Name$Table_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Names;)V", nullptr, 0, $method(static_cast<void(Name$Table::*)($Names*)>(&Name$Table::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "([BI[BII)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&Name$Table::equals))},
	{"fromChars", "([CII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"fromString", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"fromUtf", "([B)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"fromUtf", "([BII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashValue", "([BII)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&Name$Table::hashValue))},
	{}
};

$InnerClassInfo _Name$Table_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Name$Table", "com.sun.tools.javac.util.Name", "Table", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Name$Table_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.Name$Table",
	"java.lang.Object",
	nullptr,
	_Name$Table_FieldInfo_,
	_Name$Table_MethodInfo_,
	nullptr,
	nullptr,
	_Name$Table_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Name"
};

$Object* allocate$Name$Table($Class* clazz) {
	return $of($alloc(Name$Table));
}

void Name$Table::init$($Names* names) {
	$set(this, names, names);
}

$Name* Name$Table::fromString($String* s) {
	$var($chars, cs, $nc(s)->toCharArray());
	return fromChars(cs, 0, cs->length);
}

$Name* Name$Table::fromUtf($bytes* cs) {
	return fromUtf(cs, 0, $nc(cs)->length);
}

int32_t Name$Table::hashValue($bytes* bytes, int32_t offset, int32_t length) {
	int32_t h = 0;
	int32_t off = offset;
	for (int32_t i = 0; i < length; ++i) {
		h = (h << 5) - h + $nc(bytes)->get(off++);
	}
	return h;
}

bool Name$Table::equals($bytes* bytes1, int32_t offset1, $bytes* bytes2, int32_t offset2, int32_t length) {
	int32_t i = 0;
	while (i < length && $nc(bytes1)->get(offset1 + i) == $nc(bytes2)->get(offset2 + i)) {
		++i;
	}
	return i == length;
}

Name$Table::Name$Table() {
}

$Class* Name$Table::load$($String* name, bool initialize) {
	$loadClass(Name$Table, name, initialize, &_Name$Table_ClassInfo_, allocate$Name$Table);
	return class$;
}

$Class* Name$Table::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com