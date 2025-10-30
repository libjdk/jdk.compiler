#include <com/sun/tools/javac/jvm/ClassFile.h>

#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef JAVA_MAGIC
#undef MAX_CODE
#undef MAX_DIMENSIONS
#undef MAX_LOCALS
#undef MAX_PARAMETERS
#undef MAX_STACK
#undef PREVIEW_MINOR_VERSION

using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassFile_FieldInfo_[] = {
	{"JAVA_MAGIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, JAVA_MAGIC)},
	{"CONSTANT_Utf8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Utf8)},
	{"CONSTANT_Unicode", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Unicode)},
	{"CONSTANT_Integer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Integer)},
	{"CONSTANT_Float", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Float)},
	{"CONSTANT_Long", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Long)},
	{"CONSTANT_Double", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Double)},
	{"CONSTANT_Class", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Class)},
	{"CONSTANT_String", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_String)},
	{"CONSTANT_Fieldref", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Fieldref)},
	{"CONSTANT_Methodref", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Methodref)},
	{"CONSTANT_InterfaceMethodref", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_InterfaceMethodref)},
	{"CONSTANT_NameandType", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_NameandType)},
	{"CONSTANT_MethodHandle", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_MethodHandle)},
	{"CONSTANT_MethodType", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_MethodType)},
	{"CONSTANT_Dynamic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Dynamic)},
	{"CONSTANT_InvokeDynamic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_InvokeDynamic)},
	{"CONSTANT_Module", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Module)},
	{"CONSTANT_Package", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, CONSTANT_Package)},
	{"REF_getField", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_getField)},
	{"REF_getStatic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_getStatic)},
	{"REF_putField", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_putField)},
	{"REF_putStatic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_putStatic)},
	{"REF_invokeVirtual", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_invokeVirtual)},
	{"REF_invokeStatic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_invokeStatic)},
	{"REF_invokeSpecial", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_invokeSpecial)},
	{"REF_newInvokeSpecial", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_newInvokeSpecial)},
	{"REF_invokeInterface", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, REF_invokeInterface)},
	{"MAX_PARAMETERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, MAX_PARAMETERS)},
	{"MAX_DIMENSIONS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, MAX_DIMENSIONS)},
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, MAX_CODE)},
	{"MAX_LOCALS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, MAX_LOCALS)},
	{"MAX_STACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, MAX_STACK)},
	{"PREVIEW_MINOR_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassFile, PREVIEW_MINOR_VERSION)},
	{}
};

$MethodInfo _ClassFile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassFile::*)()>(&ClassFile::init$))},
	{"externalize", "([BII)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t,int32_t)>(&ClassFile::externalize))},
	{"externalize", "(Lcom/sun/tools/javac/util/Name;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($Name*)>(&ClassFile::externalize))},
	{"internalize", "([BII)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t,int32_t)>(&ClassFile::internalize))},
	{"internalize", "(Lcom/sun/tools/javac/util/Name;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($Name*)>(&ClassFile::internalize))},
	{}
};

$InnerClassInfo _ClassFile_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassFile$Version", "com.sun.tools.javac.jvm.ClassFile", "Version", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ClassFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassFile",
	"java.lang.Object",
	nullptr,
	_ClassFile_FieldInfo_,
	_ClassFile_MethodInfo_,
	nullptr,
	nullptr,
	_ClassFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassFile$Version"
};

$Object* allocate$ClassFile($Class* clazz) {
	return $of($alloc(ClassFile));
}

void ClassFile::init$() {
}

$bytes* ClassFile::internalize($bytes* buf, int32_t offset, int32_t len) {
	$var($bytes, translated, $new($bytes, len));
	for (int32_t j = 0; j < len; ++j) {
		int8_t b = $nc(buf)->get(offset + j);
		if (b == u'/') {
			translated->set(j, (int8_t)u'.');
		} else {
			translated->set(j, b);
		}
	}
	return translated;
}

$bytes* ClassFile::internalize($Name* name) {
	$var($bytes, var$0, $nc(name)->getByteArray());
	int32_t var$1 = name->getByteOffset();
	return internalize(var$0, var$1, name->getByteLength());
}

$bytes* ClassFile::externalize($bytes* buf, int32_t offset, int32_t len) {
	$var($bytes, translated, $new($bytes, len));
	for (int32_t j = 0; j < len; ++j) {
		int8_t b = $nc(buf)->get(offset + j);
		if (b == u'.') {
			translated->set(j, (int8_t)u'/');
		} else {
			translated->set(j, b);
		}
	}
	return translated;
}

$bytes* ClassFile::externalize($Name* name) {
	$var($bytes, var$0, $nc(name)->getByteArray());
	int32_t var$1 = name->getByteOffset();
	return externalize(var$0, var$1, name->getByteLength());
}

ClassFile::ClassFile() {
}

$Class* ClassFile::load$($String* name, bool initialize) {
	$loadClass(ClassFile, name, initialize, &_ClassFile_ClassInfo_, allocate$ClassFile);
	return class$;
}

$Class* ClassFile::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com