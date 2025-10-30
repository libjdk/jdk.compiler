#include <com/sun/tools/javac/util/Position$LineTabMapImpl.h>

#include <com/sun/tools/javac/util/LayoutCharacters.h>
#include <com/sun/tools/javac/util/Position$LineMapImpl.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/BitSet.h>
#include <jcpp.h>

using $LayoutCharacters = ::com::sun::tools::javac::util::LayoutCharacters;
using $Position = ::com::sun::tools::javac::util::Position;
using $Position$LineMapImpl = ::com::sun::tools::javac::util::Position$LineMapImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Position$LineTabMapImpl_FieldInfo_[] = {
	{"tabMap", "Ljava/util/BitSet;", nullptr, $PRIVATE, $field(Position$LineTabMapImpl, tabMap)},
	{}
};

$MethodInfo _Position$LineTabMapImpl_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Position$LineTabMapImpl::*)(int32_t)>(&Position$LineTabMapImpl::init$))},
	{"getColumnNumber", "(I)I", nullptr, $PUBLIC},
	{"getColumnNumber", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLineNumber", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLineNumber", "(I)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getPosition", "(II)I", nullptr, $PUBLIC},
	{"getPosition", "(JJ)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getStartPosition", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getStartPosition", "(I)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setTabPosition", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Position$LineTabMapImpl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Position$LineTabMapImpl", "com.sun.tools.javac.util.Position", "LineTabMapImpl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Position$LineMapImpl", "com.sun.tools.javac.util.Position", "LineMapImpl", $STATIC},
	{}
};

$ClassInfo _Position$LineTabMapImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Position$LineTabMapImpl",
	"com.sun.tools.javac.util.Position$LineMapImpl",
	nullptr,
	_Position$LineTabMapImpl_FieldInfo_,
	_Position$LineTabMapImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Position$LineTabMapImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Position"
};

$Object* allocate$Position$LineTabMapImpl($Class* clazz) {
	return $of($alloc(Position$LineTabMapImpl));
}

void Position$LineTabMapImpl::init$(int32_t max) {
	$Position$LineMapImpl::init$();
	$set(this, tabMap, $new($BitSet, max));
}

void Position$LineTabMapImpl::setTabPosition(int32_t offset) {
	$nc(this->tabMap)->set(offset);
}

int32_t Position$LineTabMapImpl::getColumnNumber(int32_t pos) {
	int32_t lineStart = $nc(this->startPosition)->get(getLineNumber(pos) - 1);
	int32_t column = 0;
	for (int32_t bp = lineStart; bp < pos; ++bp) {
		if ($nc(this->tabMap)->get(bp)) {
			column = $LayoutCharacters::tabulate(column);
		} else {
			++column;
		}
	}
	return column + 1;
}

int32_t Position$LineTabMapImpl::getPosition(int32_t line, int32_t column) {
	int32_t pos = $nc(this->startPosition)->get(line - 1);
	column -= 1;
	int32_t col = 0;
	while (col < column) {
		++pos;
		if ($nc(this->tabMap)->get(pos)) {
			col = $LayoutCharacters::tabulate(col);
		} else {
			++col;
		}
	}
	return pos;
}

int64_t Position$LineTabMapImpl::getColumnNumber(int64_t pos) {
	return $Position$LineMapImpl::getColumnNumber(pos);
}

int64_t Position$LineTabMapImpl::getLineNumber(int64_t pos) {
	return $Position$LineMapImpl::getLineNumber(pos);
}

int32_t Position$LineTabMapImpl::getLineNumber(int32_t pos) {
	return $Position$LineMapImpl::getLineNumber(pos);
}

int64_t Position$LineTabMapImpl::getPosition(int64_t line, int64_t column) {
	return $Position$LineMapImpl::getPosition(line, column);
}

int64_t Position$LineTabMapImpl::getStartPosition(int64_t line) {
	return $Position$LineMapImpl::getStartPosition(line);
}

int32_t Position$LineTabMapImpl::getStartPosition(int32_t line) {
	return $Position$LineMapImpl::getStartPosition(line);
}

Position$LineTabMapImpl::Position$LineTabMapImpl() {
}

$Class* Position$LineTabMapImpl::load$($String* name, bool initialize) {
	$loadClass(Position$LineTabMapImpl, name, initialize, &_Position$LineTabMapImpl_ClassInfo_, allocate$Position$LineTabMapImpl);
	return class$;
}

$Class* Position$LineTabMapImpl::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com