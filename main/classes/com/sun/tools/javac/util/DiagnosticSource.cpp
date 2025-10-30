#include <com/sun/tools/javac/util/DiagnosticSource.h>

#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource$1.h>
#include <com/sun/tools/javac/util/LayoutCharacters.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/ref/SoftReference.h>
#include <java/nio/CharBuffer.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef NOPOS
#undef NO_SOURCE

using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource$1 = ::com::sun::tools::javac::util::DiagnosticSource$1;
using $LayoutCharacters = ::com::sun::tools::javac::util::LayoutCharacters;
using $Position = ::com::sun::tools::javac::util::Position;
using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Buffer = ::java::nio::Buffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _DiagnosticSource_FieldInfo_[] = {
	{"NO_SOURCE", "Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DiagnosticSource, NO_SOURCE)},
	{"fileObject", "Ljavax/tools/JavaFileObject;", nullptr, $PROTECTED, $field(DiagnosticSource, fileObject)},
	{"endPosTable", "Lcom/sun/tools/javac/tree/EndPosTable;", nullptr, $PROTECTED, $field(DiagnosticSource, endPosTable)},
	{"refBuf", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[C>;", $PROTECTED, $field(DiagnosticSource, refBuf)},
	{"buf", "[C", nullptr, $PROTECTED, $field(DiagnosticSource, buf)},
	{"bufLen", "I", nullptr, $PROTECTED, $field(DiagnosticSource, bufLen)},
	{"lineStart", "I", nullptr, $PROTECTED, $field(DiagnosticSource, lineStart)},
	{"line", "I", nullptr, $PROTECTED, $field(DiagnosticSource, line)},
	{"log", "Lcom/sun/tools/javac/util/AbstractLog;", nullptr, $PROTECTED, $field(DiagnosticSource, log)},
	{}
};

$MethodInfo _DiagnosticSource_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/AbstractLog;)V", nullptr, $PUBLIC, $method(static_cast<void(DiagnosticSource::*)($JavaFileObject*,$AbstractLog*)>(&DiagnosticSource::init$))},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DiagnosticSource::*)()>(&DiagnosticSource::init$))},
	{"findLine", "(I)Z", nullptr, $PROTECTED},
	{"getColumnNumber", "(IZ)I", nullptr, $PUBLIC},
	{"getEndPosTable", "()Lcom/sun/tools/javac/tree/EndPosTable;", nullptr, $PUBLIC},
	{"getFile", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"getLine", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "(I)I", nullptr, $PUBLIC},
	{"initBuf", "(Ljavax/tools/JavaFileObject;)[C", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"setEndPosTable", "(Lcom/sun/tools/javac/tree/EndPosTable;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DiagnosticSource_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.DiagnosticSource$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DiagnosticSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.DiagnosticSource",
	"java.lang.Object",
	nullptr,
	_DiagnosticSource_FieldInfo_,
	_DiagnosticSource_MethodInfo_,
	nullptr,
	nullptr,
	_DiagnosticSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.DiagnosticSource$1"
};

$Object* allocate$DiagnosticSource($Class* clazz) {
	return $of($alloc(DiagnosticSource));
}

DiagnosticSource* DiagnosticSource::NO_SOURCE = nullptr;

void DiagnosticSource::init$($JavaFileObject* fo, $AbstractLog* log) {
	$set(this, fileObject, fo);
	$set(this, log, log);
}

void DiagnosticSource::init$() {
}

$JavaFileObject* DiagnosticSource::getFile() {
	return this->fileObject;
}

int32_t DiagnosticSource::getLineNumber(int32_t pos) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (findLine(pos)) {
				var$2 = this->line;
				return$1 = true;
				goto $finally;
			}
			var$2 = 0;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, buf, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t DiagnosticSource::getColumnNumber(int32_t pos, bool expandTabs) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (findLine(pos)) {
				int32_t column = 0;
				for (int32_t bp = this->lineStart; bp < pos; ++bp) {
					if (bp >= this->bufLen) {
						var$2 = 0;
						return$1 = true;
						goto $finally;
					}
					if ($nc(this->buf)->get(bp) == u'\t' && expandTabs) {
						column = $LayoutCharacters::tabulate(column);
					} else {
						++column;
					}
				}
				var$2 = column + 1;
				return$1 = true;
				goto $finally;
			}
			var$2 = 0;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, buf, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$String* DiagnosticSource::getLine(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			if (!findLine(pos)) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			int32_t lineEnd = this->lineStart;
			while (lineEnd < this->bufLen && $nc(this->buf)->get(lineEnd) != (int8_t)13 && $nc(this->buf)->get(lineEnd) != (int8_t)10) {
				++lineEnd;
			}
			if (lineEnd - this->lineStart == 0) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, $new($String, this->buf, this->lineStart, lineEnd - this->lineStart));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, buf, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$EndPosTable* DiagnosticSource::getEndPosTable() {
	return this->endPosTable;
}

void DiagnosticSource::setEndPosTable($EndPosTable* t) {
	if (this->endPosTable != nullptr && this->endPosTable != t) {
		$throwNew($IllegalStateException, "endPosTable already set"_s);
	}
	$set(this, endPosTable, t);
}

bool DiagnosticSource::findLine(int32_t pos) {
	if (pos == $Position::NOPOS) {
		return false;
	}
	try {
		if (this->buf == nullptr && this->refBuf != nullptr) {
			$set(this, buf, $cast($chars, $nc(this->refBuf)->get()));
		}
		if (this->buf == nullptr) {
			$set(this, buf, initBuf(this->fileObject));
			this->lineStart = 0;
			this->line = 1;
		} else if (this->lineStart > pos) {
			this->lineStart = 0;
			this->line = 1;
		}
		int32_t bp = this->lineStart;
		while (bp < this->bufLen && bp < pos) {
			switch ($nc(this->buf)->get(bp++)) {
			case 13:
				{
					if (bp < this->bufLen && $nc(this->buf)->get(bp) == (int8_t)10) {
						++bp;
					}
					++this->line;
					this->lineStart = bp;
					break;
				}
			case 10:
				{
					++this->line;
					this->lineStart = bp;
					break;
				}
			}
		}
		return bp <= this->bufLen;
	} catch ($IOException& e) {
		$nc(this->log)->directError("source.unavailable"_s, $$new($ObjectArray, 0));
		$set(this, buf, $new($chars, 0));
		return false;
	}
	$shouldNotReachHere();
}

$chars* DiagnosticSource::initBuf($JavaFileObject* fileObject) {
	$useLocalCurrentObjectStackCache();
	$var($chars, buf, nullptr);
	$var($CharSequence, cs, $nc(fileObject)->getCharContent(true));
	{
		$var($CharBuffer, charBuffer, nullptr);
		bool var$0 = $instanceOf($CharBuffer, cs);
		if (var$0) {
			$assign(charBuffer, $cast($CharBuffer, cs));
			var$0 = true;
		}
		if (var$0) {
			$assign(buf, $JavacFileManager::toArray(charBuffer));
			this->bufLen = $nc(charBuffer)->limit();
		} else {
			$assign(buf, $nc($($nc(cs)->toString()))->toCharArray());
			this->bufLen = buf->length;
		}
	}
	$set(this, refBuf, $new($SoftReference, buf));
	return buf;
}

void clinit$DiagnosticSource($Class* class$) {
	$assignStatic(DiagnosticSource::NO_SOURCE, $new($DiagnosticSource$1));
}

DiagnosticSource::DiagnosticSource() {
}

$Class* DiagnosticSource::load$($String* name, bool initialize) {
	$loadClass(DiagnosticSource, name, initialize, &_DiagnosticSource_ClassInfo_, clinit$DiagnosticSource, allocate$DiagnosticSource);
	return class$;
}

$Class* DiagnosticSource::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com