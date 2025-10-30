#include <com/sun/tools/javac/util/ByteBuffer.h>

#include <com/sun/tools/javac/util/ArrayUtils.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $ArrayUtils = ::com::sun::tools::javac::util::ArrayUtils;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _ByteBuffer_FieldInfo_[] = {
	{"elems", "[B", nullptr, $PUBLIC, $field(ByteBuffer, elems)},
	{"length", "I", nullptr, $PUBLIC, $field(ByteBuffer, length)},
	{}
};

$MethodInfo _ByteBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ByteBuffer::*)()>(&ByteBuffer::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ByteBuffer::*)(int32_t)>(&ByteBuffer::init$))},
	{"appendByte", "(I)V", nullptr, $PUBLIC},
	{"appendBytes", "([BII)V", nullptr, $PUBLIC},
	{"appendBytes", "([B)V", nullptr, $PUBLIC},
	{"appendChar", "(I)V", nullptr, $PUBLIC},
	{"appendDouble", "(D)V", nullptr, $PUBLIC},
	{"appendFloat", "(F)V", nullptr, $PUBLIC},
	{"appendInt", "(I)V", nullptr, $PUBLIC},
	{"appendLong", "(J)V", nullptr, $PUBLIC},
	{"appendName", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC},
	{"appendStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getByte", "(I)B", nullptr, $PUBLIC},
	{"getChar", "(I)C", nullptr, $PUBLIC},
	{"getDouble", "(I)D", nullptr, $PUBLIC},
	{"getFloat", "(I)F", nullptr, $PUBLIC},
	{"getInt", "(I)I", nullptr, $PUBLIC},
	{"getLong", "(I)J", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"toName", "(Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.ByteBuffer",
	"java.lang.Object",
	nullptr,
	_ByteBuffer_FieldInfo_,
	_ByteBuffer_MethodInfo_
};

$Object* allocate$ByteBuffer($Class* clazz) {
	return $of($alloc(ByteBuffer));
}

void ByteBuffer::init$() {
	ByteBuffer::init$(64);
}

void ByteBuffer::init$(int32_t initialSize) {
	$set(this, elems, $new($bytes, initialSize));
	this->length = 0;
}

void ByteBuffer::appendByte(int32_t b) {
	$set(this, elems, $ArrayUtils::ensureCapacity(this->elems, this->length));
	$nc(this->elems)->set(this->length++, (int8_t)b);
}

void ByteBuffer::appendBytes($bytes* bs, int32_t start, int32_t len) {
	$set(this, elems, $ArrayUtils::ensureCapacity(this->elems, this->length + len));
	$System::arraycopy(bs, start, this->elems, this->length, len);
	this->length += len;
}

void ByteBuffer::appendBytes($bytes* bs) {
	appendBytes(bs, 0, $nc(bs)->length);
}

void ByteBuffer::appendChar(int32_t x) {
	$set(this, elems, $ArrayUtils::ensureCapacity(this->elems, this->length + 1));
	$nc(this->elems)->set(this->length, (int8_t)((int32_t)((x >> 8) & (uint32_t)255)));
	$nc(this->elems)->set(this->length + 1, (int8_t)((int32_t)((x) & (uint32_t)255)));
	this->length = this->length + 2;
}

void ByteBuffer::appendInt(int32_t x) {
	$set(this, elems, $ArrayUtils::ensureCapacity(this->elems, this->length + 3));
	$nc(this->elems)->set(this->length, (int8_t)((int32_t)((x >> 24) & (uint32_t)255)));
	$nc(this->elems)->set(this->length + 1, (int8_t)((int32_t)((x >> 16) & (uint32_t)255)));
	$nc(this->elems)->set(this->length + 2, (int8_t)((int32_t)((x >> 8) & (uint32_t)255)));
	$nc(this->elems)->set(this->length + 3, (int8_t)((int32_t)((x) & (uint32_t)255)));
	this->length = this->length + 4;
}

void ByteBuffer::appendLong(int64_t x) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, buffer, $new($ByteArrayOutputStream, 8));
	$var($DataOutputStream, bufout, $new($DataOutputStream, buffer));
	try {
		bufout->writeLong(x);
		appendBytes($(buffer->toByteArray()), 0, 8);
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of("write"_s));
	}
}

void ByteBuffer::appendFloat(float x) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, buffer, $new($ByteArrayOutputStream, 4));
	$var($DataOutputStream, bufout, $new($DataOutputStream, buffer));
	try {
		bufout->writeFloat(x);
		appendBytes($(buffer->toByteArray()), 0, 4);
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of("write"_s));
	}
}

void ByteBuffer::appendDouble(double x) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, buffer, $new($ByteArrayOutputStream, 8));
	$var($DataOutputStream, bufout, $new($DataOutputStream, buffer));
	try {
		bufout->writeDouble(x);
		appendBytes($(buffer->toByteArray()), 0, 8);
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of("write"_s));
	}
}

void ByteBuffer::appendName($Name* name) {
	$var($bytes, var$0, $nc(name)->getByteArray());
	int32_t var$1 = name->getByteOffset();
	appendBytes(var$0, var$1, name->getByteLength());
}

void ByteBuffer::appendStream($InputStream* is) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t start = this->length;
			int32_t initialSize = $nc(is)->available();
			$set(this, elems, $ArrayUtils::ensureCapacity(this->elems, this->length + initialSize));
			int32_t r = is->read(this->elems, start, initialSize);
			int32_t bp = start;
			while (r != -1) {
				bp += r;
				$set(this, elems, $ArrayUtils::ensureCapacity(this->elems, bp));
				r = is->read(this->elems, bp, $nc(this->elems)->length - bp);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			try {
				$nc(is)->close();
			} catch ($IOException& e) {
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t ByteBuffer::getInt(int32_t bp) {
	return (((int32_t)($nc(this->elems)->get(bp) & (uint32_t)255)) << 24) + (((int32_t)($nc(this->elems)->get(bp + 1) & (uint32_t)255)) << 16) + (((int32_t)($nc(this->elems)->get(bp + 2) & (uint32_t)255)) << 8) + ((int32_t)($nc(this->elems)->get(bp + 3) & (uint32_t)255));
}

int64_t ByteBuffer::getLong(int32_t bp) {
	$useLocalCurrentObjectStackCache();
	$var($DataInputStream, elemsin, $new($DataInputStream, $$new($ByteArrayInputStream, this->elems, bp, 8)));
	try {
		return elemsin->readLong();
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

float ByteBuffer::getFloat(int32_t bp) {
	$useLocalCurrentObjectStackCache();
	$var($DataInputStream, elemsin, $new($DataInputStream, $$new($ByteArrayInputStream, this->elems, bp, 4)));
	try {
		return elemsin->readFloat();
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

double ByteBuffer::getDouble(int32_t bp) {
	$useLocalCurrentObjectStackCache();
	$var($DataInputStream, elemsin, $new($DataInputStream, $$new($ByteArrayInputStream, this->elems, bp, 8)));
	try {
		return elemsin->readDouble();
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

char16_t ByteBuffer::getChar(int32_t bp) {
	return (char16_t)((((int32_t)($nc(this->elems)->get(bp) & (uint32_t)255)) << 8) + ((int32_t)($nc(this->elems)->get(bp + 1) & (uint32_t)255)));
}

int8_t ByteBuffer::getByte(int32_t bp) {
	return $nc(this->elems)->get(bp);
}

void ByteBuffer::reset() {
	this->length = 0;
}

$Name* ByteBuffer::toName($Names* names) {
	return $nc(names)->fromUtf(this->elems, 0, this->length);
}

ByteBuffer::ByteBuffer() {
}

$Class* ByteBuffer::load$($String* name, bool initialize) {
	$loadClass(ByteBuffer, name, initialize, &_ByteBuffer_ClassInfo_, allocate$ByteBuffer);
	return class$;
}

$Class* ByteBuffer::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com