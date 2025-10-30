#include <com/sun/tools/javac/jvm/PoolReader.h>

#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolConstant$NameAndType.h>
#include <com/sun/tools/javac/jvm/PoolReader$ImmutablePoolHelper.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/Name$NameMapper.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/BitSet.h>
#include <jcpp.h>

using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $PoolConstant$NameAndType = ::com::sun::tools::javac::jvm::PoolConstant$NameAndType;
using $PoolReader$ImmutablePoolHelper = ::com::sun::tools::javac::jvm::PoolReader$ImmutablePoolHelper;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$NameMapper = ::com::sun::tools::javac::util::Name$NameMapper;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BitSet = ::java::util::BitSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class PoolReader$$Lambda$sigToType : public $Name$NameMapper {
	$class(PoolReader$$Lambda$sigToType, $NO_CLASS_INIT, $Name$NameMapper)
public:
	void init$($ClassReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* map($bytes* sig, int32_t offset, int32_t len) override {
		 return $of($nc(inst$)->sigToType(sig, offset, len));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PoolReader$$Lambda$sigToType>());
	}
	$ClassReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PoolReader$$Lambda$sigToType::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PoolReader$$Lambda$sigToType, inst$)},
	{}
};
$MethodInfo PoolReader$$Lambda$sigToType::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;)V", nullptr, $PUBLIC, $method(static_cast<void(PoolReader$$Lambda$sigToType::*)($ClassReader*)>(&PoolReader$$Lambda$sigToType::init$))},
	{"map", "([BII)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PoolReader$$Lambda$sigToType::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.PoolReader$$Lambda$sigToType",
	"java.lang.Object",
	"com.sun.tools.javac.util.Name$NameMapper",
	fieldInfos,
	methodInfos
};
$Class* PoolReader$$Lambda$sigToType::load$($String* name, bool initialize) {
	$loadClass(PoolReader$$Lambda$sigToType, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PoolReader$$Lambda$sigToType::class$ = nullptr;

class PoolReader$$Lambda$internalize$1 : public $Name$NameMapper {
	$class(PoolReader$$Lambda$internalize$1, $NO_CLASS_INIT, $Name$NameMapper)
public:
	void init$() {
	}
	virtual $Object* map($bytes* buf, int32_t offset, int32_t len) override {
		 return $of($ClassFile::internalize(buf, offset, len));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PoolReader$$Lambda$internalize$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PoolReader$$Lambda$internalize$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PoolReader$$Lambda$internalize$1::*)()>(&PoolReader$$Lambda$internalize$1::init$))},
	{"map", "([BII)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PoolReader$$Lambda$internalize$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.PoolReader$$Lambda$internalize$1",
	"java.lang.Object",
	"com.sun.tools.javac.util.Name$NameMapper",
	nullptr,
	methodInfos
};
$Class* PoolReader$$Lambda$internalize$1::load$($String* name, bool initialize) {
	$loadClass(PoolReader$$Lambda$internalize$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PoolReader$$Lambda$internalize$1::class$ = nullptr;

$FieldInfo _PoolReader_FieldInfo_[] = {
	{"reader", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $PRIVATE | $FINAL, $field(PoolReader, reader)},
	{"buf", "Lcom/sun/tools/javac/util/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(PoolReader, buf)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(PoolReader, names)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(PoolReader, syms)},
	{"pool", "Lcom/sun/tools/javac/jvm/PoolReader$ImmutablePoolHelper;", nullptr, $PRIVATE, $field(PoolReader, pool)},
	{"classCP", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PoolReader, classCP)},
	{"constantCP", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PoolReader, constantCP)},
	{"moduleCP", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PoolReader, moduleCP)},
	{"packageCP", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PoolReader, packageCP)},
	{"utf8CP", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PoolReader, utf8CP)},
	{"nameAndTypeCP", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PoolReader, nameAndTypeCP)},
	{}
};

$MethodInfo _PoolReader_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(PoolReader::*)($ByteBuffer*)>(&PoolReader::init$))},
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Names;Lcom/sun/tools/javac/code/Symtab;)V", nullptr, 0, $method(static_cast<void(PoolReader::*)($ClassReader*,$Names*,$Symtab*)>(&PoolReader::init$))},
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/ByteBuffer;Lcom/sun/tools/javac/util/Names;Lcom/sun/tools/javac/code/Symtab;)V", nullptr, 0, $method(static_cast<void(PoolReader::*)($ClassReader*,$ByteBuffer*,$Names*,$Symtab*)>(&PoolReader::init$))},
	{"getClass", "(I)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0},
	{"getConstant", "(I)Ljava/lang/Object;", nullptr, 0},
	{"getModule", "(I)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, 0},
	{"getName", "(I)Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{"getNameAndType", "(I)Lcom/sun/tools/javac/jvm/PoolConstant$NameAndType;", nullptr, 0},
	{"getPackage", "(I)Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, 0},
	{"getType", "(I)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"getUtf8", "(ILcom/sun/tools/javac/util/Name$NameMapper;)Ljava/lang/Object;", "<Z:Ljava/lang/Object;>(ILcom/sun/tools/javac/util/Name$NameMapper<TZ;>;)TZ;", $PRIVATE, $method(static_cast<$Object*(PoolReader::*)(int32_t,$Name$NameMapper*)>(&PoolReader::getUtf8))},
	{"hasTag", "(II)Z", nullptr, 0},
	{"peekClassName", "(ILcom/sun/tools/javac/util/Name$NameMapper;)Ljava/lang/Object;", "<Z:Ljava/lang/Object;>(ILcom/sun/tools/javac/util/Name$NameMapper<TZ;>;)TZ;", 0},
	{"peekModuleName", "(ILcom/sun/tools/javac/util/Name$NameMapper;)Ljava/lang/Object;", "<Z:Ljava/lang/Object;>(ILcom/sun/tools/javac/util/Name$NameMapper<TZ;>;)TZ;", 0},
	{"peekName", "(ILcom/sun/tools/javac/util/Name$NameMapper;)Ljava/lang/Object;", "<Z:Ljava/lang/Object;>(ILcom/sun/tools/javac/util/Name$NameMapper<TZ;>;)TZ;", 0},
	{"peekPackageName", "(ILcom/sun/tools/javac/util/Name$NameMapper;)Ljava/lang/Object;", "<Z:Ljava/lang/Object;>(ILcom/sun/tools/javac/util/Name$NameMapper<TZ;>;)TZ;", 0},
	{"readPool", "(Lcom/sun/tools/javac/util/ByteBuffer;I)I", nullptr, 0},
	{"resolve", "(Lcom/sun/tools/javac/util/ByteBuffer;II)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(PoolReader::*)($ByteBuffer*,int32_t,int32_t)>(&PoolReader::resolve))},
	{"sizeof", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PoolReader::*)(int32_t)>(&PoolReader::sizeof$))},
	{}
};

$InnerClassInfo _PoolReader_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolReader$ImmutablePoolHelper", "com.sun.tools.javac.jvm.PoolReader", "ImmutablePoolHelper", 0},
	{}
};

$ClassInfo _PoolReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.PoolReader",
	"java.lang.Object",
	nullptr,
	_PoolReader_FieldInfo_,
	_PoolReader_MethodInfo_,
	nullptr,
	nullptr,
	_PoolReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolReader$ImmutablePoolHelper"
};

$Object* allocate$PoolReader($Class* clazz) {
	return $of($alloc(PoolReader));
}

$BitSet* PoolReader::classCP = nullptr;
$BitSet* PoolReader::constantCP = nullptr;
$BitSet* PoolReader::moduleCP = nullptr;
$BitSet* PoolReader::packageCP = nullptr;
$BitSet* PoolReader::utf8CP = nullptr;
$BitSet* PoolReader::nameAndTypeCP = nullptr;

void PoolReader::init$($ByteBuffer* buf) {
	PoolReader::init$(nullptr, buf, nullptr, nullptr);
}

void PoolReader::init$($ClassReader* reader, $Names* names, $Symtab* syms) {
	PoolReader::init$(reader, $nc(reader)->buf, names, syms);
}

void PoolReader::init$($ClassReader* reader, $ByteBuffer* buf, $Names* names, $Symtab* syms) {
	$set(this, reader, reader);
	$set(this, buf, buf);
	$set(this, names, names);
	$set(this, syms, syms);
}

$Symbol$ClassSymbol* PoolReader::getClass(int32_t index) {
	return $cast($Symbol$ClassSymbol, $nc(this->pool)->readIfNeeded(index, PoolReader::classCP));
}

$Object* PoolReader::peekClassName(int32_t index, $Name$NameMapper* mapper) {
	return $of(peekName($nc(this->buf)->getChar($nc(this->pool)->offset(index)), mapper));
}

$Object* PoolReader::peekPackageName(int32_t index, $Name$NameMapper* mapper) {
	return $of(peekName($nc(this->buf)->getChar($nc(this->pool)->offset(index)), mapper));
}

$Object* PoolReader::peekModuleName(int32_t index, $Name$NameMapper* mapper) {
	return $of(peekName($nc(this->buf)->getChar($nc(this->pool)->offset(index)), mapper));
}

$Symbol$ModuleSymbol* PoolReader::getModule(int32_t index) {
	return $cast($Symbol$ModuleSymbol, $nc(this->pool)->readIfNeeded(index, PoolReader::moduleCP));
}

$Symbol$PackageSymbol* PoolReader::getPackage(int32_t index) {
	return $cast($Symbol$PackageSymbol, $nc(this->pool)->readIfNeeded(index, PoolReader::packageCP));
}

$Object* PoolReader::peekName(int32_t index, $Name$NameMapper* mapper) {
	return $of(getUtf8(index, mapper));
}

$Name* PoolReader::getName(int32_t index) {
	return $cast($Name, $nc(this->pool)->readIfNeeded(index, PoolReader::utf8CP));
}

$Type* PoolReader::getType(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $cast($Type, $nc($(getName(index)))->map(static_cast<$Name$NameMapper*>($$new(PoolReader$$Lambda$sigToType, static_cast<$ClassReader*>($nc(this->reader))))));
}

$PoolConstant$NameAndType* PoolReader::getNameAndType(int32_t index) {
	return $cast($PoolConstant$NameAndType, $nc(this->pool)->readIfNeeded(index, PoolReader::nameAndTypeCP));
}

$Object* PoolReader::getConstant(int32_t index) {
	return $of($nc(this->pool)->readIfNeeded(index, PoolReader::constantCP));
}

bool PoolReader::hasTag(int32_t index, int32_t tag) {
	return $nc(this->pool)->tag(index) == tag;
}

$Object* PoolReader::getUtf8(int32_t index, $Name$NameMapper* mapper) {
	$useLocalCurrentObjectStackCache();
	int32_t tag = $nc(this->pool)->tag(index);
	int32_t offset = $nc(this->pool)->offset(index);
	if (tag == 1) {
		int32_t len = $nc($nc(this->pool)->poolbuf)->getChar(offset);
		return $of($nc(mapper)->map($nc($nc(this->pool)->poolbuf)->elems, offset + 2, len));
	} else {
		$throw($($nc(this->reader)->badClassFile("unexpected.const.pool.tag.at"_s, $$new($ObjectArray, {
			$($of($Integer::toString(tag))),
			$($of($Integer::toString(offset - 1)))
		}))));
	}
}

$Object* PoolReader::resolve($ByteBuffer* poolbuf, int32_t tag, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	switch (tag) {
	case 1:
		{
			{
				int32_t len = $nc(poolbuf)->getChar(offset);
				return $of($nc(this->names)->fromUtf(poolbuf->elems, offset + 2, len));
			}
		}
	case 7:
		{
			{
				int32_t index = $nc(poolbuf)->getChar(offset);
				$var($Name, name, $nc(this->names)->fromUtf($cast($bytes, $($nc($(getName(index)))->map(static_cast<$Name$NameMapper*>($$new(PoolReader$$Lambda$internalize$1)))))));
				return $of($nc(this->syms)->enterClass($nc(this->reader)->currentModule, name));
			}
		}
	case 12:
		{
			{
				$var($Name, name, getName($nc(poolbuf)->getChar(offset)));
				$var($Type, type, getType($nc(poolbuf)->getChar(offset + 2)));
				return $of($new($PoolConstant$NameAndType, name, type));
			}
		}
	case 3:
		{
			return $of($Integer::valueOf($nc(poolbuf)->getInt(offset)));
		}
	case 4:
		{
			return $of($Float::valueOf($nc(poolbuf)->getFloat(offset)));
		}
	case 5:
		{
			return $of($Long::valueOf($nc(poolbuf)->getLong(offset)));
		}
	case 6:
		{
			return $of($Double::valueOf($nc(poolbuf)->getDouble(offset)));
		}
	case 8:
		{
			return $of($nc($(getName($nc(poolbuf)->getChar(offset))))->toString());
		}
	case 20:
		{
			{
				$var($Name, name, getName($nc(poolbuf)->getChar(offset)));
				return $of($nc(this->syms)->enterPackage($nc(this->reader)->currentModule, $($nc(this->names)->fromUtf($($ClassFile::internalize(name))))));
			}
		}
	case 19:
		{
			{
				$var($Name, name, getName($nc(poolbuf)->getChar(offset)));
				return $of($nc(this->syms)->enterModule(name));
			}
		}
	default:
		{
			$throw($($nc(this->reader)->badClassFile("unexpected.const.pool.tag.at"_s, $$new($ObjectArray, {
				$($of($Integer::toString(tag))),
				$($of($Integer::toString(offset - 1)))
			}))));
		}
	}
}

int32_t PoolReader::readPool($ByteBuffer* poolbuf, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	int32_t poolSize = $nc(poolbuf)->getChar(offset);
	int32_t index = 1;
	offset += 2;
	$var($ints, offsets, $new($ints, poolSize));
	while (index < poolSize) {
		int8_t tag = poolbuf->getByte(offset++);
		offsets->set(index, offset);
		switch (tag) {
		case 1:
			{
				{
					int32_t len = poolbuf->getChar(offset);
					offset += 2 + len;
					break;
				}
			}
		case 7:
			{}
		case 8:
			{}
		case 19:
			{}
		case 20:
			{}
		case 16:
			{
				offset += 2;
				break;
			}
		case 15:
			{
				offset += 3;
				break;
			}
		case 9:
			{}
		case 10:
			{}
		case 11:
			{}
		case 12:
			{}
		case 3:
			{}
		case 4:
			{}
		case 17:
			{}
		case 18:
			{
				offset += 4;
				break;
			}
		case 5:
			{}
		case 6:
			{
				offset += 8;
				break;
			}
		default:
			{
				$throw($($nc(this->reader)->badClassFile("bad.const.pool.tag.at"_s, $$new($ObjectArray, {
					$($of($Byte::toString(tag))),
					$($of($Integer::toString(offset - 1)))
				}))));
			}
		}
		index += sizeof$(tag);
	}
	$set(this, pool, $new($PoolReader$ImmutablePoolHelper, this, poolbuf, offsets));
	return offset;
}

int32_t PoolReader::sizeof$(int32_t tag) {
	switch (tag) {
	case $ClassFile::CONSTANT_Double:
		{}
	case $ClassFile::CONSTANT_Long:
		{
			return 2;
		}
	default:
		{
			return 1;
		}
	}
}

void clinit$PoolReader($Class* class$) {
	$assignStatic(PoolReader::classCP, $new($BitSet));
	$assignStatic(PoolReader::constantCP, $new($BitSet));
	$assignStatic(PoolReader::moduleCP, $new($BitSet));
	$assignStatic(PoolReader::packageCP, $new($BitSet));
	$assignStatic(PoolReader::utf8CP, $new($BitSet));
	$assignStatic(PoolReader::nameAndTypeCP, $new($BitSet));
	{
		$nc(PoolReader::classCP)->set(7);
		$nc(PoolReader::constantCP)->set(3, 8 + 1);
		$nc(PoolReader::moduleCP)->set(19);
		$nc(PoolReader::packageCP)->set(20);
		$nc(PoolReader::utf8CP)->set(1);
		$nc(PoolReader::nameAndTypeCP)->set(12);
	}
}

PoolReader::PoolReader() {
}

$Class* PoolReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PoolReader$$Lambda$sigToType::classInfo$.name)) {
			return PoolReader$$Lambda$sigToType::load$(name, initialize);
		}
		if (name->equals(PoolReader$$Lambda$internalize$1::classInfo$.name)) {
			return PoolReader$$Lambda$internalize$1::load$(name, initialize);
		}
	}
	$loadClass(PoolReader, name, initialize, &_PoolReader_ClassInfo_, clinit$PoolReader, allocate$PoolReader);
	return class$;
}

$Class* PoolReader::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com