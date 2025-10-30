#include <com/sun/tools/javac/util/LayoutCharacters.h>

#include <jcpp.h>

#undef CR
#undef EOI
#undef FF
#undef LF
#undef TAB

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _LayoutCharacters_FieldInfo_[] = {
	{"TabInc", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LayoutCharacters, TabInc)},
	{"DiagInc", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LayoutCharacters, DiagInc)},
	{"DetailsInc", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LayoutCharacters, DetailsInc)},
	{"TAB", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LayoutCharacters, TAB)},
	{"LF", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LayoutCharacters, LF)},
	{"FF", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LayoutCharacters, FF)},
	{"CR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LayoutCharacters, CR)},
	{"EOI", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LayoutCharacters, EOI)},
	{}
};

$MethodInfo _LayoutCharacters_MethodInfo_[] = {
	{"tabulate", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LayoutCharacters::tabulate))},
	{}
};

$ClassInfo _LayoutCharacters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.LayoutCharacters",
	nullptr,
	nullptr,
	_LayoutCharacters_FieldInfo_,
	_LayoutCharacters_MethodInfo_
};

$Object* allocate$LayoutCharacters($Class* clazz) {
	return $of($alloc(LayoutCharacters));
}

int32_t LayoutCharacters::tabulate(int32_t column) {
	return ($div(column, LayoutCharacters::TabInc) * LayoutCharacters::TabInc) + LayoutCharacters::TabInc;
}

$Class* LayoutCharacters::load$($String* name, bool initialize) {
	$loadClass(LayoutCharacters, name, initialize, &_LayoutCharacters_ClassInfo_, allocate$LayoutCharacters);
	return class$;
}

$Class* LayoutCharacters::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com