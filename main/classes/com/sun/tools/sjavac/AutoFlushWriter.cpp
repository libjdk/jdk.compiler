#include <com/sun/tools/sjavac/AutoFlushWriter.h>

#include <java/io/FilterWriter.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $FilterWriter = ::java::io::FilterWriter;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$MethodInfo _AutoFlushWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(static_cast<void(AutoFlushWriter::*)($Writer*)>(&AutoFlushWriter::init$))},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _AutoFlushWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.AutoFlushWriter",
	"java.io.FilterWriter",
	nullptr,
	nullptr,
	_AutoFlushWriter_MethodInfo_
};

$Object* allocate$AutoFlushWriter($Class* clazz) {
	return $of($alloc(AutoFlushWriter));
}

void AutoFlushWriter::init$($Writer* out) {
	$FilterWriter::init$(out);
}

void AutoFlushWriter::write(int32_t c) {
	$FilterWriter::write(c);
	if (c == u'\n' || c == u'\r') {
		flush();
	}
}

void AutoFlushWriter::write($String* str, int32_t off, int32_t len) {
	$FilterWriter::write(str, off, len);
	bool var$0 = $nc(str)->contains("\n"_s);
	if (var$0 || $nc(str)->contains("\r"_s)) {
		flush();
	}
}

void AutoFlushWriter::write($chars* cbuf, int32_t off, int32_t len) {
	$FilterWriter::write(cbuf, off, len);
	{
		$var($chars, arr$, cbuf);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			{
				if (c == u'\n' || c == u'\r') {
					flush();
					break;
				}
			}
		}
	}
}

AutoFlushWriter::AutoFlushWriter() {
}

$Class* AutoFlushWriter::load$($String* name, bool initialize) {
	$loadClass(AutoFlushWriter, name, initialize, &_AutoFlushWriter_ClassInfo_, allocate$AutoFlushWriter);
	return class$;
}

$Class* AutoFlushWriter::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com