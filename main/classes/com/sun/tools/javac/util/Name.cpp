#include <com/sun/tools/javac/util/Name.h>

#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Name$NameMapper.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Name$NameMapper = ::com::sun::tools::javac::util::Name$NameMapper;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Name_FieldInfo_[] = {
	{"table", "Lcom/sun/tools/javac/util/Name$Table;", nullptr, $PUBLIC | $FINAL, $field(Name, table)},
	{}
};

$MethodInfo _Name_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Lcom/sun/tools/javac/util/Name$Table;)V", nullptr, $PROTECTED, $method(static_cast<void(Name::*)($Name$Table*)>(&Name::init$))},
	{"append", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"append", "(CLcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"charAt", "(I)C", nullptr, $PUBLIC},
	{"compareTo", "(Lcom/sun/tools/javac/util/Name;)I", nullptr, $PUBLIC},
	{"contentEquals", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC},
	{"getByteArray", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getByteAt", "(I)B", nullptr, $PUBLIC | $ABSTRACT},
	{"getByteLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getByteOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getBytes", "([BI)V", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"lastIndexOf", "(B)I", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"map", "(Lcom/sun/tools/javac/util/Name$NameMapper;)Ljava/lang/Object;", "<X:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/Name$NameMapper<TX;>;)TX;", $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"startsWith", "(Lcom/sun/tools/javac/util/Name;)Z", nullptr, $PUBLIC},
	{"subName", "(II)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUtf", "()[B", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Name_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Name$Table", "com.sun.tools.javac.util.Name", "Table", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.Name$NameMapper", "com.sun.tools.javac.util.Name", "NameMapper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Name_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.Name",
	"java.lang.Object",
	"javax.lang.model.element.Name,com.sun.tools.javac.jvm.PoolConstant",
	_Name_FieldInfo_,
	_Name_MethodInfo_,
	nullptr,
	nullptr,
	_Name_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Name$Table,com.sun.tools.javac.util.Name$NameMapper"
};

$Object* allocate$Name($Class* clazz) {
	return $of($alloc(Name));
}

bool Name::equals(Object$* arg0) {
	 return this->$Name::equals(arg0);
}

int32_t Name::hashCode() {
	 return this->$Name::hashCode();
}

$Object* Name::clone() {
	 return this->$Name::clone();
}

void Name::finalize() {
	this->$Name::finalize();
}

void Name::init$($Name$Table* table) {
	$set(this, table, table);
}

bool Name::contentEquals($CharSequence* cs) {
	$useLocalCurrentObjectStackCache();
	return $nc($(toString()))->equals($($nc(cs)->toString()));
}

int32_t Name::poolTag() {
	return $ClassFile::CONSTANT_Utf8;
}

int32_t Name::length() {
	return $nc($(toString()))->length();
}

char16_t Name::charAt(int32_t index) {
	return $nc($(toString()))->charAt(index);
}

$CharSequence* Name::subSequence(int32_t start, int32_t end) {
	return $nc($(toString()))->subSequence(start, end);
}

Name* Name::append(Name* n) {
	int32_t len = getByteLength();
	$var($bytes, bs, $new($bytes, len + $nc(n)->getByteLength()));
	getBytes(bs, 0);
	n->getBytes(bs, len);
	return $nc(this->table)->fromUtf(bs, 0, bs->length);
}

Name* Name::append(char16_t c, Name* n) {
	int32_t len = getByteLength();
	$var($bytes, bs, $new($bytes, len + 1 + $nc(n)->getByteLength()));
	getBytes(bs, 0);
	bs->set(len, (int8_t)c);
	n->getBytes(bs, len + 1);
	return $nc(this->table)->fromUtf(bs, 0, bs->length);
}

int32_t Name::compareTo(Name* other) {
	int32_t var$0 = $nc(other)->getIndex();
	return var$0 - this->getIndex();
}

bool Name::isEmpty() {
	return getByteLength() == 0;
}

int32_t Name::lastIndexOf(int8_t b) {
	$var($bytes, bytes, getByteArray());
	int32_t offset = getByteOffset();
	int32_t i = getByteLength() - 1;
	while (i >= 0 && $nc(bytes)->get(offset + i) != b) {
		--i;
	}
	return i;
}

bool Name::startsWith(Name* prefix) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, thisBytes, this->getByteArray());
	int32_t thisOffset = this->getByteOffset();
	int32_t thisLength = this->getByteLength();
	$var($bytes, prefixBytes, $nc(prefix)->getByteArray());
	int32_t prefixOffset = prefix->getByteOffset();
	int32_t prefixLength = prefix->getByteLength();
	if (thisLength < prefixLength) {
		return false;
	}
	int32_t i = 0;
	while (i < prefixLength && $nc(thisBytes)->get(thisOffset + i) == $nc(prefixBytes)->get(prefixOffset + i)) {
		++i;
	}
	return i == prefixLength;
}

Name* Name::subName(int32_t start, int32_t end) {
	if (end < start) {
		end = start;
	}
	$var($bytes, var$0, getByteArray());
	return $nc(this->table)->fromUtf(var$0, getByteOffset() + start, end - start);
}

$String* Name::toString() {
	$var($bytes, var$0, getByteArray());
	int32_t var$1 = getByteOffset();
	return $Convert::utf2string(var$0, var$1, getByteLength());
}

$bytes* Name::toUtf() {
	$var($bytes, bs, $new($bytes, getByteLength()));
	getBytes(bs, 0);
	return bs;
}

void Name::getBytes($bytes* cs, int32_t start) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of(getByteArray()));
	int32_t var$1 = getByteOffset();
	$var($Object, var$2, $of(cs));
	int32_t var$3 = start;
	$System::arraycopy(var$0, var$1, var$2, var$3, getByteLength());
}

$Object* Name::map($Name$NameMapper* mapper) {
	$var($bytes, var$0, getByteArray());
	int32_t var$1 = getByteOffset();
	return $of($nc(mapper)->map(var$0, var$1, getByteLength()));
}

Name::Name() {
}

$Class* Name::load$($String* name, bool initialize) {
	$loadClass(Name, name, initialize, &_Name_ClassInfo_, allocate$Name);
	return class$;
}

$Class* Name::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com