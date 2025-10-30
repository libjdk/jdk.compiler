#include <com/sun/tools/javac/util/Position.h>

#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position$LineMapImpl.h>
#include <com/sun/tools/javac/util/Position$LineTabMapImpl.h>
#include <jcpp.h>

#undef FIRSTCOLUMN
#undef FIRSTLINE
#undef FIRSTPOS
#undef LINESHIFT
#undef MAXCOLUMN
#undef MAXLINE
#undef MAXPOS
#undef NOPOS

using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $Position$LineMapImpl = ::com::sun::tools::javac::util::Position$LineMapImpl;
using $Position$LineTabMapImpl = ::com::sun::tools::javac::util::Position$LineTabMapImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Position_FieldInfo_[] = {
	{"NOPOS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Position, NOPOS)},
	{"FIRSTPOS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Position, FIRSTPOS)},
	{"FIRSTLINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Position, FIRSTLINE)},
	{"FIRSTCOLUMN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Position, FIRSTCOLUMN)},
	{"LINESHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Position, LINESHIFT)},
	{"MAXCOLUMN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Position, MAXCOLUMN)},
	{"MAXLINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Position, MAXLINE)},
	{"MAXPOS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Position, MAXPOS)},
	{}
};

$MethodInfo _Position_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Position::*)()>(&Position::init$))},
	{"encodePosition", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Position::encodePosition))},
	{"makeLineMap", "([CIZ)Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Position$LineMap*(*)($chars*,int32_t,bool)>(&Position::makeLineMap))},
	{}
};

$InnerClassInfo _Position_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Position$LineTabMapImpl", "com.sun.tools.javac.util.Position", "LineTabMapImpl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Position$LineMapImpl", "com.sun.tools.javac.util.Position", "LineMapImpl", $STATIC},
	{"com.sun.tools.javac.util.Position$LineMap", "com.sun.tools.javac.util.Position", "LineMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Position_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Position",
	"java.lang.Object",
	nullptr,
	_Position_FieldInfo_,
	_Position_MethodInfo_,
	nullptr,
	nullptr,
	_Position_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Position$LineTabMapImpl,com.sun.tools.javac.util.Position$LineMapImpl,com.sun.tools.javac.util.Position$LineMap"
};

$Object* allocate$Position($Class* clazz) {
	return $of($alloc(Position));
}

void Position::init$() {
}

$Position$LineMap* Position::makeLineMap($chars* src, int32_t max, bool expandTabs) {
	$var($Position$LineMapImpl, lineMap, expandTabs ? static_cast<$Position$LineMapImpl*>($new($Position$LineTabMapImpl, max)) : $new($Position$LineMapImpl));
	$nc(lineMap)->build(src, max);
	return lineMap;
}

int32_t Position::encodePosition(int32_t line, int32_t col) {
	if (line < 1) {
		$throwNew($IllegalArgumentException, "line must be greater than 0"_s);
	}
	if (col < 1) {
		$throwNew($IllegalArgumentException, "column must be greater than 0"_s);
	}
	if (line > Position::MAXLINE || col > Position::MAXCOLUMN) {
		return Position::NOPOS;
	}
	return ($sl(line, Position::LINESHIFT)) + col;
}

Position::Position() {
}

$Class* Position::load$($String* name, bool initialize) {
	$loadClass(Position, name, initialize, &_Position_ClassInfo_, allocate$Position);
	return class$;
}

$Class* Position::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com