#include <com/sun/tools/javac/jvm/ModuleNameReader.h>

#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/ModuleNameReader$BadClassFile.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/Name$NameMapper.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef INITIAL_BUFFER_SIZE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $ModuleNameReader$BadClassFile = ::com::sun::tools::javac::jvm::ModuleNameReader$BadClassFile;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Name$NameMapper = ::com::sun::tools::javac::util::Name$NameMapper;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ModuleNameReader$$Lambda$lambda$utf8Mapper$0 : public $Name$NameMapper {
	$class(ModuleNameReader$$Lambda$lambda$utf8Mapper$0, $NO_CLASS_INIT, $Name$NameMapper)
public:
	void init$() {
	}
	virtual $Object* map($bytes* buf, int32_t offset, int32_t len) override {
		 return $of(ModuleNameReader::lambda$utf8Mapper$0(buf, offset, len));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleNameReader$$Lambda$lambda$utf8Mapper$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleNameReader$$Lambda$lambda$utf8Mapper$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleNameReader$$Lambda$lambda$utf8Mapper$0::*)()>(&ModuleNameReader$$Lambda$lambda$utf8Mapper$0::init$))},
	{"map", "([BII)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleNameReader$$Lambda$lambda$utf8Mapper$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ModuleNameReader$$Lambda$lambda$utf8Mapper$0",
	"java.lang.Object",
	"com.sun.tools.javac.util.Name$NameMapper",
	nullptr,
	methodInfos
};
$Class* ModuleNameReader$$Lambda$lambda$utf8Mapper$0::load$($String* name, bool initialize) {
	$loadClass(ModuleNameReader$$Lambda$lambda$utf8Mapper$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleNameReader$$Lambda$lambda$utf8Mapper$0::class$ = nullptr;

class ModuleNameReader$$Lambda$utf2string$1 : public $Name$NameMapper {
	$class(ModuleNameReader$$Lambda$utf2string$1, $NO_CLASS_INIT, $Name$NameMapper)
public:
	void init$() {
	}
	virtual $Object* map($bytes* src, int32_t sindex, int32_t len) override {
		 return $of($Convert::utf2string(src, sindex, len));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleNameReader$$Lambda$utf2string$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleNameReader$$Lambda$utf2string$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleNameReader$$Lambda$utf2string$1::*)()>(&ModuleNameReader$$Lambda$utf2string$1::init$))},
	{"map", "([BII)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleNameReader$$Lambda$utf2string$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ModuleNameReader$$Lambda$utf2string$1",
	"java.lang.Object",
	"com.sun.tools.javac.util.Name$NameMapper",
	nullptr,
	methodInfos
};
$Class* ModuleNameReader$$Lambda$utf2string$1::load$($String* name, bool initialize) {
	$loadClass(ModuleNameReader$$Lambda$utf2string$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleNameReader$$Lambda$utf2string$1::class$ = nullptr;

$FieldInfo _ModuleNameReader_FieldInfo_[] = {
	{"INITIAL_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModuleNameReader, INITIAL_BUFFER_SIZE)},
	{"buf", "Lcom/sun/tools/javac/util/ByteBuffer;", nullptr, $PRIVATE, $field(ModuleNameReader, buf)},
	{"bp", "I", nullptr, $PRIVATE, $field(ModuleNameReader, bp)},
	{"reader", "Lcom/sun/tools/javac/jvm/PoolReader;", nullptr, $PRIVATE, $field(ModuleNameReader, reader)},
	{}
};

$MethodInfo _ModuleNameReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleNameReader::*)()>(&ModuleNameReader::init$))},
	{"checkZero", "(ILjava/lang/String;)V", nullptr, 0, nullptr, "com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile"},
	{"lambda$utf8Mapper$0", "([BII)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($bytes*,int32_t,int32_t)>(&ModuleNameReader::lambda$utf8Mapper$0))},
	{"nextChar", "()C", nullptr, 0},
	{"nextInt", "()I", nullptr, 0},
	{"readModuleName", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException,com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile"},
	{"readModuleName", "(Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException,com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile"},
	{"readModuleName", "(Ljava/io/InputStream;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException,com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile"},
	{"utf8Mapper", "(Z)Lcom/sun/tools/javac/util/Name$NameMapper;", "(Z)Lcom/sun/tools/javac/util/Name$NameMapper<Ljava/lang/String;>;", 0},
	{}
};

$InnerClassInfo _ModuleNameReader_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile", "com.sun.tools.javac.jvm.ModuleNameReader", "BadClassFile", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ModuleNameReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ModuleNameReader",
	"java.lang.Object",
	nullptr,
	_ModuleNameReader_FieldInfo_,
	_ModuleNameReader_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleNameReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile"
};

$Object* allocate$ModuleNameReader($Class* clazz) {
	return $of($alloc(ModuleNameReader));
}

void ModuleNameReader::init$() {
	$set(this, buf, $new($ByteBuffer, ModuleNameReader::INITIAL_BUFFER_SIZE));
}

$String* ModuleNameReader::readModuleName($Path* p) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InputStream, in, $Files::newInputStream(p, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			$var($String, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, readModuleName(in));
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (in != nullptr) {
						try {
							in->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				if (in != nullptr) {
					in->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$String* ModuleNameReader::readModuleName($JavaFileObject* jfo) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InputStream, in, $nc(jfo)->openInputStream());
		{
			$var($Throwable, var$0, nullptr);
			$var($String, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, readModuleName(in));
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (in != nullptr) {
						try {
							in->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				if (in != nullptr) {
					in->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$String* ModuleNameReader::readModuleName($InputStream* in) {
	$useLocalCurrentObjectStackCache();
	this->bp = 0;
	$nc(this->buf)->reset();
	$nc(this->buf)->appendStream(in);
	int32_t magic = nextInt();
	if (magic != (int32_t)0xCAFEBABE) {
		$throwNew($ModuleNameReader$BadClassFile, "illegal.start.of.class.file"_s);
	}
	int32_t minorVersion = nextChar();
	int32_t majorVersion = nextChar();
	if (majorVersion < 53) {
		$throwNew($ModuleNameReader$BadClassFile, $$str({"bad major version number for module: "_s, $$str(majorVersion)}));
	}
	$set(this, reader, $new($PoolReader, this->buf));
	this->bp = $nc(this->reader)->readPool(this->buf, this->bp);
	int32_t access_flags = nextChar();
	if (access_flags != 32768) {
		$throwNew($ModuleNameReader$BadClassFile, $$str({"invalid access flags for module: 0x"_s, $($Integer::toHexString(access_flags))}));
	}
	int32_t this_class = nextChar();
	checkZero(nextChar(), "super_class"_s);
	checkZero(nextChar(), "interface_count"_s);
	checkZero(nextChar(), "fields_count"_s);
	checkZero(nextChar(), "methods_count"_s);
	int32_t attributes_count = nextChar();
	for (int32_t i = 0; i < attributes_count; ++i) {
		int32_t attr_name = nextChar();
		int32_t attr_length = nextInt();
		if ($nc(($cast($String, $($nc(this->reader)->peekName(attr_name, $(utf8Mapper(false)))))))->equals("Module"_s) && attr_length > 2) {
			int32_t var$0 = (int32_t)nextChar();
			return $cast($String, $nc(this->reader)->peekModuleName(var$0, $(utf8Mapper(true))));
		} else {
			this->bp += attr_length;
		}
	}
	$throwNew($ModuleNameReader$BadClassFile, "no Module attribute"_s);
}

void ModuleNameReader::checkZero(int32_t count, $String* name) {
	$useLocalCurrentObjectStackCache();
	if (count != 0) {
		$throwNew($ModuleNameReader$BadClassFile, $$str({"invalid "_s, name, " for module: "_s, $$str(count)}));
	}
}

char16_t ModuleNameReader::nextChar() {
	char16_t res = $nc(this->buf)->getChar(this->bp);
	this->bp += 2;
	return res;
}

int32_t ModuleNameReader::nextInt() {
	int32_t res = $nc(this->buf)->getInt(this->bp);
	this->bp += 4;
	return res;
}

$Name$NameMapper* ModuleNameReader::utf8Mapper(bool internalize) {
	return internalize ? static_cast<$Name$NameMapper*>($new(ModuleNameReader$$Lambda$lambda$utf8Mapper$0)) : static_cast<$Name$NameMapper*>($new(ModuleNameReader$$Lambda$utf2string$1));
}

$String* ModuleNameReader::lambda$utf8Mapper$0($bytes* buf, int32_t offset, int32_t len) {
	return $Convert::utf2string($($ClassFile::internalize(buf, offset, len)));
}

ModuleNameReader::ModuleNameReader() {
}

$Class* ModuleNameReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModuleNameReader$$Lambda$lambda$utf8Mapper$0::classInfo$.name)) {
			return ModuleNameReader$$Lambda$lambda$utf8Mapper$0::load$(name, initialize);
		}
		if (name->equals(ModuleNameReader$$Lambda$utf2string$1::classInfo$.name)) {
			return ModuleNameReader$$Lambda$utf2string$1::load$(name, initialize);
		}
	}
	$loadClass(ModuleNameReader, name, initialize, &_ModuleNameReader_ClassInfo_, allocate$ModuleNameReader);
	return class$;
}

$Class* ModuleNameReader::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com