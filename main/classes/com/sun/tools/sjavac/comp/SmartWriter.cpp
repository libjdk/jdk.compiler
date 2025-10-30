#include <com/sun/tools/sjavac/comp/SmartWriter.h>

#include <com/sun/tools/sjavac/Log.h>
#include <java/io/File.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Log = ::com::sun::tools::sjavac::Log;
using $File = ::java::io::File;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$FieldInfo _SmartWriter_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(SmartWriter, name)},
	{"file", "Ljavax/tools/JavaFileObject;", nullptr, 0, $field(SmartWriter, file)},
	{"oldContent", "Ljava/lang/String;", nullptr, 0, $field(SmartWriter, oldContent)},
	{"newContent", "Ljava/io/StringWriter;", nullptr, 0, $field(SmartWriter, newContent)},
	{"closed", "Z", nullptr, 0, $field(SmartWriter, closed)},
	{}
};

$MethodInfo _SmartWriter_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileObject;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SmartWriter::*)($JavaFileObject*,$String*,$String*)>(&SmartWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SmartWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.SmartWriter",
	"java.io.Writer",
	nullptr,
	_SmartWriter_FieldInfo_,
	_SmartWriter_MethodInfo_
};

$Object* allocate$SmartWriter($Class* clazz) {
	return $of($alloc(SmartWriter));
}

void SmartWriter::init$($JavaFileObject* f, $String* s, $String* n) {
	$Writer::init$();
	$set(this, newContent, $new($StringWriter));
	$set(this, name, n);
	$set(this, file, f);
	$set(this, oldContent, s);
	$set(this, newContent, $new($StringWriter));
	this->closed = false;
}

void SmartWriter::write($chars* chars, int32_t i, int32_t i1) {
	$nc(this->newContent)->write(chars, i, i1);
}

void SmartWriter::close() {
	$useLocalCurrentObjectStackCache();
	if (this->closed) {
		return;
	}
	this->closed = true;
	$var($String, s, $nc(this->newContent)->toString());
	if (!$nc(this->oldContent)->equals(s)) {
		$init($File);
		int32_t p = $nc($($nc(this->file)->getName()))->lastIndexOf((int32_t)$File::separatorChar);
		{
			$var($Writer, writer, $nc(this->file)->openWriter());
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(writer)->write(s);
					} catch ($Throwable& t$) {
						if (writer != nullptr) {
							try {
								writer->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (writer != nullptr) {
						writer->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		$Log::debug($$str({"Writing "_s, $($nc($($nc(this->file)->getName()))->substring(p + 1))}));
	}
}

void SmartWriter::flush() {
}

SmartWriter::SmartWriter() {
}

$Class* SmartWriter::load$($String* name, bool initialize) {
	$loadClass(SmartWriter, name, initialize, &_SmartWriter_ClassInfo_, allocate$SmartWriter);
	return class$;
}

$Class* SmartWriter::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com