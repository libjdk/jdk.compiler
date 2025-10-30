#include <com/sun/tools/javac/parser/JavadocTokenizer$OffsetMap.h>

#include <com/sun/tools/javac/parser/JavadocTokenizer.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef NOFFSETS
#undef NOPOS
#undef POS_OFFSET
#undef SB_OFFSET

using $JavadocTokenizer = ::com::sun::tools::javac::parser::JavadocTokenizer;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavadocTokenizer$OffsetMap_FieldInfo_[] = {
	{"SB_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavadocTokenizer$OffsetMap, SB_OFFSET)},
	{"POS_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavadocTokenizer$OffsetMap, POS_OFFSET)},
	{"NOFFSETS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavadocTokenizer$OffsetMap, NOFFSETS)},
	{"map", "[I", nullptr, $PRIVATE, $field(JavadocTokenizer$OffsetMap, map)},
	{"size", "I", nullptr, $PRIVATE, $field(JavadocTokenizer$OffsetMap, size)},
	{}
};

$MethodInfo _JavadocTokenizer$OffsetMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavadocTokenizer$OffsetMap::*)()>(&JavadocTokenizer$OffsetMap::init$))},
	{"add", "(II)V", nullptr, 0},
	{"ensure", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JavadocTokenizer$OffsetMap::*)(int32_t)>(&JavadocTokenizer$OffsetMap::ensure))},
	{"getSourcePos", "(I)I", nullptr, 0},
	{"lastPosOffset", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(JavadocTokenizer$OffsetMap::*)()>(&JavadocTokenizer$OffsetMap::lastPosOffset))},
	{"lastSBOffset", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(JavadocTokenizer$OffsetMap::*)()>(&JavadocTokenizer$OffsetMap::lastSBOffset))},
	{"shouldAdd", "(II)Z", nullptr, 0},
	{}
};

$InnerClassInfo _JavadocTokenizer$OffsetMap_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavadocTokenizer$OffsetMap", "com.sun.tools.javac.parser.JavadocTokenizer", "OffsetMap", $STATIC},
	{}
};

$ClassInfo _JavadocTokenizer$OffsetMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.JavadocTokenizer$OffsetMap",
	"java.lang.Object",
	nullptr,
	_JavadocTokenizer$OffsetMap_FieldInfo_,
	_JavadocTokenizer$OffsetMap_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocTokenizer$OffsetMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavadocTokenizer"
};

$Object* allocate$JavadocTokenizer$OffsetMap($Class* clazz) {
	return $of($alloc(JavadocTokenizer$OffsetMap));
}

void JavadocTokenizer$OffsetMap::init$() {
	$set(this, map, $new($ints, 128));
	this->size = 0;
}

bool JavadocTokenizer$OffsetMap::shouldAdd(int32_t sbOffset, int32_t posOffet) {
	int32_t var$0 = sbOffset - lastSBOffset();
	return var$0 != posOffet - lastPosOffset();
}

void JavadocTokenizer$OffsetMap::add(int32_t sbOffset, int32_t posOffet) {
	if (this->size == 0 || shouldAdd(sbOffset, posOffet)) {
		ensure(JavadocTokenizer$OffsetMap::NOFFSETS);
		$nc(this->map)->set(this->size + JavadocTokenizer$OffsetMap::SB_OFFSET, sbOffset);
		$nc(this->map)->set(this->size + JavadocTokenizer$OffsetMap::POS_OFFSET, posOffet);
		this->size += JavadocTokenizer$OffsetMap::NOFFSETS;
	}
}

int32_t JavadocTokenizer$OffsetMap::lastSBOffset() {
	return this->size == 0 ? 0 : $nc(this->map)->get(this->size - JavadocTokenizer$OffsetMap::NOFFSETS + JavadocTokenizer$OffsetMap::SB_OFFSET);
}

int32_t JavadocTokenizer$OffsetMap::lastPosOffset() {
	return this->size == 0 ? 0 : $nc(this->map)->get(this->size - JavadocTokenizer$OffsetMap::NOFFSETS + JavadocTokenizer$OffsetMap::POS_OFFSET);
}

void JavadocTokenizer$OffsetMap::ensure(int32_t need) {
	need += this->size;
	int32_t grow = $nc(this->map)->length;
	while (need > grow) {
		grow <<= 1;
	}
	if (grow < $nc(this->map)->length) {
		$throwNew($IndexOutOfBoundsException);
	} else if (grow != $nc(this->map)->length) {
		$set(this, map, $Arrays::copyOf(this->map, grow));
	}
}

int32_t JavadocTokenizer$OffsetMap::getSourcePos(int32_t pos) {
	if (this->size == 0) {
		return $Position::NOPOS;
	}
	int32_t start = 0;
	int32_t end = $div(this->size, JavadocTokenizer$OffsetMap::NOFFSETS);
	while (start < end - 1) {
		int32_t index = (start + end) / 2;
		int32_t indexScaled = index * JavadocTokenizer$OffsetMap::NOFFSETS;
		if ($nc(this->map)->get(indexScaled + JavadocTokenizer$OffsetMap::SB_OFFSET) < pos) {
			start = index;
		} else if ($nc(this->map)->get(indexScaled + JavadocTokenizer$OffsetMap::SB_OFFSET) == pos) {
			return $nc(this->map)->get(indexScaled + JavadocTokenizer$OffsetMap::POS_OFFSET);
		} else {
			end = index;
		}
	}
	int32_t startScaled = start * JavadocTokenizer$OffsetMap::NOFFSETS;
	return $nc(this->map)->get(startScaled + JavadocTokenizer$OffsetMap::POS_OFFSET) + (pos - $nc(this->map)->get(startScaled + JavadocTokenizer$OffsetMap::SB_OFFSET));
}

JavadocTokenizer$OffsetMap::JavadocTokenizer$OffsetMap() {
}

$Class* JavadocTokenizer$OffsetMap::load$($String* name, bool initialize) {
	$loadClass(JavadocTokenizer$OffsetMap, name, initialize, &_JavadocTokenizer$OffsetMap_ClassInfo_, allocate$JavadocTokenizer$OffsetMap);
	return class$;
}

$Class* JavadocTokenizer$OffsetMap::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com