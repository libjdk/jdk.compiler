#include <com/sun/tools/javac/parser/UnicodeReader$PositionTrackingReader.h>

#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <com/sun/tools/javac/util/LayoutCharacters.h>
#include <jcpp.h>

using $ScannerFactory = ::com::sun::tools::javac::parser::ScannerFactory;
using $UnicodeReader = ::com::sun::tools::javac::parser::UnicodeReader;
using $LayoutCharacters = ::com::sun::tools::javac::util::LayoutCharacters;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _UnicodeReader$PositionTrackingReader_FieldInfo_[] = {
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(UnicodeReader$PositionTrackingReader, offset)},
	{"column", "I", nullptr, $PRIVATE, $field(UnicodeReader$PositionTrackingReader, column$)},
	{}
};

$MethodInfo _UnicodeReader$PositionTrackingReader_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;[CI)V", nullptr, $PROTECTED, $method(static_cast<void(UnicodeReader$PositionTrackingReader::*)($ScannerFactory*,$chars*,int32_t)>(&UnicodeReader$PositionTrackingReader::init$))},
	{"column", "()I", nullptr, $PROTECTED},
	{"next", "()C", nullptr, $PROTECTED},
	{"offsetPosition", "()I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _UnicodeReader$PositionTrackingReader_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.UnicodeReader$PositionTrackingReader", "com.sun.tools.javac.parser.UnicodeReader", "PositionTrackingReader", $STATIC},
	{}
};

$ClassInfo _UnicodeReader$PositionTrackingReader_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.parser.UnicodeReader$PositionTrackingReader",
	"com.sun.tools.javac.parser.UnicodeReader",
	nullptr,
	_UnicodeReader$PositionTrackingReader_FieldInfo_,
	_UnicodeReader$PositionTrackingReader_MethodInfo_,
	nullptr,
	nullptr,
	_UnicodeReader$PositionTrackingReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.UnicodeReader"
};

$Object* allocate$UnicodeReader$PositionTrackingReader($Class* clazz) {
	return $of($alloc(UnicodeReader$PositionTrackingReader));
}

void UnicodeReader$PositionTrackingReader::init$($ScannerFactory* sf, $chars* array, int32_t offset) {
	$UnicodeReader::init$(sf, array, $nc(array)->length);
	this->offset = offset;
	this->column$ = 0;
}

char16_t UnicodeReader$PositionTrackingReader::next() {
	$UnicodeReader::next();
	if (isOneOf(u'\n', u'\r', u'\f')) {
		this->column$ = 0;
	} else if (is(u'\t')) {
		this->column$ = $LayoutCharacters::tabulate(this->column$);
	} else {
		++this->column$;
	}
	return get();
}

int32_t UnicodeReader$PositionTrackingReader::column() {
	return this->column$;
}

int32_t UnicodeReader$PositionTrackingReader::offsetPosition() {
	return position() + this->offset;
}

UnicodeReader$PositionTrackingReader::UnicodeReader$PositionTrackingReader() {
}

$Class* UnicodeReader$PositionTrackingReader::load$($String* name, bool initialize) {
	$loadClass(UnicodeReader$PositionTrackingReader, name, initialize, &_UnicodeReader$PositionTrackingReader_ClassInfo_, allocate$UnicodeReader$PositionTrackingReader);
	return class$;
}

$Class* UnicodeReader$PositionTrackingReader::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com