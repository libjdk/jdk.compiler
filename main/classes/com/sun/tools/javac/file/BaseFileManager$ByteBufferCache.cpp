#include <com/sun/tools/javac/file/BaseFileManager$ByteBufferCache.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _BaseFileManager$ByteBufferCache_FieldInfo_[] = {
	{"cached", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(BaseFileManager$ByteBufferCache, cached)},
	{}
};

$MethodInfo _BaseFileManager$ByteBufferCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BaseFileManager$ByteBufferCache::*)()>(&BaseFileManager$ByteBufferCache::init$))},
	{"get", "(I)Ljava/nio/ByteBuffer;", nullptr, 0},
	{"put", "(Ljava/nio/ByteBuffer;)V", nullptr, 0},
	{}
};

$InnerClassInfo _BaseFileManager$ByteBufferCache_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.BaseFileManager$ByteBufferCache", "com.sun.tools.javac.file.BaseFileManager", "ByteBufferCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BaseFileManager$ByteBufferCache_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.BaseFileManager$ByteBufferCache",
	"java.lang.Object",
	nullptr,
	_BaseFileManager$ByteBufferCache_FieldInfo_,
	_BaseFileManager$ByteBufferCache_MethodInfo_,
	nullptr,
	nullptr,
	_BaseFileManager$ByteBufferCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.BaseFileManager"
};

$Object* allocate$BaseFileManager$ByteBufferCache($Class* clazz) {
	return $of($alloc(BaseFileManager$ByteBufferCache));
}

void BaseFileManager$ByteBufferCache::init$() {
}

$ByteBuffer* BaseFileManager$ByteBufferCache::get(int32_t capacity) {
	if (capacity < 20480) {
		capacity = 20480;
	}
	$var($ByteBuffer, result, (this->cached != nullptr && $nc(this->cached)->capacity() >= capacity) ? $nc(this->cached)->clear() : $ByteBuffer::allocate((capacity + capacity) >> 1));
	$set(this, cached, nullptr);
	return result;
}

void BaseFileManager$ByteBufferCache::put($ByteBuffer* x) {
	$set(this, cached, x);
}

BaseFileManager$ByteBufferCache::BaseFileManager$ByteBufferCache() {
}

$Class* BaseFileManager$ByteBufferCache::load$($String* name, bool initialize) {
	$loadClass(BaseFileManager$ByteBufferCache, name, initialize, &_BaseFileManager$ByteBufferCache_ClassInfo_, allocate$BaseFileManager$ByteBufferCache);
	return class$;
}

$Class* BaseFileManager$ByteBufferCache::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com