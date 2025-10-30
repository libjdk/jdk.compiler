#include <com/sun/tools/javac/util/Position$LineMapImpl.h>

#include <com/sun/tools/javac/util/Position.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

#undef FIRSTLINE
#undef FIRSTPOS

using $Position = ::com::sun::tools::javac::util::Position;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Position$LineMapImpl_FieldInfo_[] = {
	{"startPosition", "[I", nullptr, $PROTECTED, $field(Position$LineMapImpl, startPosition)},
	{"lastPosition", "I", nullptr, $PRIVATE, $field(Position$LineMapImpl, lastPosition)},
	{"lastLine", "I", nullptr, $PRIVATE, $field(Position$LineMapImpl, lastLine)},
	{}
};

$MethodInfo _Position$LineMapImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Position$LineMapImpl::*)()>(&Position$LineMapImpl::init$))},
	{"build", "([CI)V", nullptr, $PROTECTED},
	{"getColumnNumber", "(I)I", nullptr, $PUBLIC},
	{"getColumnNumber", "(J)J", nullptr, $PUBLIC},
	{"getLineNumber", "(I)I", nullptr, $PUBLIC},
	{"getLineNumber", "(J)J", nullptr, $PUBLIC},
	{"getPosition", "(II)I", nullptr, $PUBLIC},
	{"getPosition", "(JJ)J", nullptr, $PUBLIC},
	{"getStartPosition", "(I)I", nullptr, $PUBLIC},
	{"getStartPosition", "(J)J", nullptr, $PUBLIC},
	{"longToInt", "(J)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&Position$LineMapImpl::longToInt))},
	{"setTabPosition", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Position$LineMapImpl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Position$LineMapImpl", "com.sun.tools.javac.util.Position", "LineMapImpl", $STATIC},
	{"com.sun.tools.javac.util.Position$LineMap", "com.sun.tools.javac.util.Position", "LineMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Position$LineMapImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.Position$LineMapImpl",
	"java.lang.Object",
	"com.sun.tools.javac.util.Position$LineMap",
	_Position$LineMapImpl_FieldInfo_,
	_Position$LineMapImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Position$LineMapImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Position"
};

$Object* allocate$Position$LineMapImpl($Class* clazz) {
	return $of($alloc(Position$LineMapImpl));
}

void Position$LineMapImpl::init$() {
	this->lastPosition = $Position::FIRSTPOS;
	this->lastLine = $Position::FIRSTLINE;
}

void Position$LineMapImpl::build($chars* src, int32_t max) {
	int32_t c = 0;
	int32_t i = 0;
	$var($ints, linebuf, $new($ints, max));
	while (i < max) {
		linebuf->set(c++, i);
		do {
			char16_t ch = $nc(src)->get(i);
			if (ch == u'\r' || ch == u'\n') {
				if (ch == u'\r' && (i + 1) < max && src->get(i + 1) == u'\n') {
					i += 2;
				} else {
					++i;
				}
				break;
			} else if (ch == u'\t') {
				setTabPosition(i);
			}
		} while (++i < max);
	}
	$set(this, startPosition, $new($ints, c));
	$System::arraycopy(linebuf, 0, this->startPosition, 0, c);
}

int32_t Position$LineMapImpl::getStartPosition(int32_t line) {
	return $nc(this->startPosition)->get(line - 1);
}

int64_t Position$LineMapImpl::getStartPosition(int64_t line) {
	return getStartPosition(longToInt(line));
}

int32_t Position$LineMapImpl::getPosition(int32_t line, int32_t column) {
	return $nc(this->startPosition)->get(line - 1) + column - 1;
}

int64_t Position$LineMapImpl::getPosition(int64_t line, int64_t column) {
	int32_t var$0 = longToInt(line);
	return getPosition(var$0, longToInt(column));
}

int32_t Position$LineMapImpl::getLineNumber(int32_t pos) {
	if (pos == this->lastPosition) {
		return this->lastLine;
	}
	this->lastPosition = pos;
	int32_t low = 0;
	int32_t high = $nc(this->startPosition)->length - 1;
	while (low <= high) {
		int32_t mid = (low + high) >> 1;
		int32_t midVal = $nc(this->startPosition)->get(mid);
		if (midVal < pos) {
			low = mid + 1;
		} else if (midVal > pos) {
			high = mid - 1;
		} else {
			this->lastLine = mid + 1;
			return this->lastLine;
		}
	}
	this->lastLine = low;
	return this->lastLine;
}

int64_t Position$LineMapImpl::getLineNumber(int64_t pos) {
	return getLineNumber(longToInt(pos));
}

int32_t Position$LineMapImpl::getColumnNumber(int32_t pos) {
	return pos - $nc(this->startPosition)->get(getLineNumber(pos) - 1) + 1;
}

int64_t Position$LineMapImpl::getColumnNumber(int64_t pos) {
	return getColumnNumber(longToInt(pos));
}

int32_t Position$LineMapImpl::longToInt(int64_t longValue) {
	$init(Position$LineMapImpl);
	int32_t intValue = (int32_t)longValue;
	if (intValue != longValue) {
		$throwNew($IndexOutOfBoundsException);
	}
	return intValue;
}

void Position$LineMapImpl::setTabPosition(int32_t offset) {
}

Position$LineMapImpl::Position$LineMapImpl() {
}

$Class* Position$LineMapImpl::load$($String* name, bool initialize) {
	$loadClass(Position$LineMapImpl, name, initialize, &_Position$LineMapImpl_ClassInfo_, allocate$Position$LineMapImpl);
	return class$;
}

$Class* Position$LineMapImpl::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com