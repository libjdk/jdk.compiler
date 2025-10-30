#include <com/sun/tools/javac/jvm/PoolReader$ImmutablePoolHelper.h>

#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <java/util/BitSet.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BitSet = ::java::util::BitSet;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _PoolReader$ImmutablePoolHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/PoolReader;", nullptr, $FINAL | $SYNTHETIC, $field(PoolReader$ImmutablePoolHelper, this$0)},
	{"values", "[Ljava/lang/Object;", nullptr, $FINAL, $field(PoolReader$ImmutablePoolHelper, values)},
	{"offsets", "[I", nullptr, $FINAL, $field(PoolReader$ImmutablePoolHelper, offsets)},
	{"poolbuf", "Lcom/sun/tools/javac/util/ByteBuffer;", nullptr, $FINAL, $field(PoolReader$ImmutablePoolHelper, poolbuf)},
	{}
};

$MethodInfo _PoolReader$ImmutablePoolHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/PoolReader;Lcom/sun/tools/javac/util/ByteBuffer;[I)V", nullptr, $PUBLIC, $method(static_cast<void(PoolReader$ImmutablePoolHelper::*)($PoolReader*,$ByteBuffer*,$ints*)>(&PoolReader$ImmutablePoolHelper::init$))},
	{"checkIndex", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PoolReader$ImmutablePoolHelper::*)(int32_t)>(&PoolReader$ImmutablePoolHelper::checkIndex))},
	{"offset", "(I)I", nullptr, 0},
	{"readIfNeeded", "(ILjava/util/BitSet;)Ljava/lang/Object;", "<P:Ljava/lang/Object;>(ILjava/util/BitSet;)TP;", 0},
	{"tag", "(I)I", nullptr, 0},
	{}
};

$InnerClassInfo _PoolReader$ImmutablePoolHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolReader$ImmutablePoolHelper", "com.sun.tools.javac.jvm.PoolReader", "ImmutablePoolHelper", 0},
	{}
};

$ClassInfo _PoolReader$ImmutablePoolHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.PoolReader$ImmutablePoolHelper",
	"java.lang.Object",
	nullptr,
	_PoolReader$ImmutablePoolHelper_FieldInfo_,
	_PoolReader$ImmutablePoolHelper_MethodInfo_,
	nullptr,
	nullptr,
	_PoolReader$ImmutablePoolHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolReader"
};

$Object* allocate$PoolReader$ImmutablePoolHelper($Class* clazz) {
	return $of($alloc(PoolReader$ImmutablePoolHelper));
}

void PoolReader$ImmutablePoolHelper::init$($PoolReader* this$0, $ByteBuffer* poolbuf, $ints* offsets) {
	$set(this, this$0, this$0);
	$set(this, offsets, offsets);
	$set(this, values, $new($ObjectArray, $nc(offsets)->length));
	$set(this, poolbuf, poolbuf);
}

int32_t PoolReader$ImmutablePoolHelper::checkIndex(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index <= 0 || index >= $nc(this->offsets)->length) {
		$throw($($nc(this->this$0->reader)->badClassFile("bad.const.pool.index"_s, $$new($ObjectArray, {
			$of($nc(this->this$0->reader)->currentClassFile),
			$($of($Integer::valueOf(index))),
			$($of($Integer::valueOf($nc(this->offsets)->length)))
		}))));
	} else {
		return index;
	}
}

int32_t PoolReader$ImmutablePoolHelper::offset(int32_t index) {
	return $nc(this->offsets)->get(checkIndex(index));
}

$Object* PoolReader$ImmutablePoolHelper::readIfNeeded(int32_t index, $BitSet* expectedTags) {
	$useLocalCurrentObjectStackCache();
	$var($Object0, v, $nc(this->values)->get(checkIndex(index)));
	if (v != nullptr) {
		return $of(v);
	} else {
		int32_t currentTag = tag(index);
		if (!$nc(expectedTags)->get(currentTag)) {
			$throw($($nc(this->this$0->reader)->badClassFile("unexpected.const.pool.tag.at"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(tag(index)))),
				$($of($Integer::valueOf(offset(index))))
			}))));
		}
		$var($ByteBuffer, var$0, this->poolbuf);
		int32_t var$1 = tag(index);
		$var($Object, p, this->this$0->resolve(var$0, var$1, offset(index)));
		$nc(this->values)->set(index, p);
		return $of(p);
	}
}

int32_t PoolReader$ImmutablePoolHelper::tag(int32_t index) {
	return $nc($nc(this->poolbuf)->elems)->get(offset(index) - 1);
}

PoolReader$ImmutablePoolHelper::PoolReader$ImmutablePoolHelper() {
}

$Class* PoolReader$ImmutablePoolHelper::load$($String* name, bool initialize) {
	$loadClass(PoolReader$ImmutablePoolHelper, name, initialize, &_PoolReader$ImmutablePoolHelper_ClassInfo_, allocate$PoolReader$ImmutablePoolHelper);
	return class$;
}

$Class* PoolReader$ImmutablePoolHelper::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com