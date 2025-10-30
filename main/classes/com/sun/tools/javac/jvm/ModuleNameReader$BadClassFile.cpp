#include <com/sun/tools/javac/jvm/ModuleNameReader$BadClassFile.h>

#include <com/sun/tools/javac/jvm/ModuleNameReader.h>
#include <jcpp.h>

using $ModuleNameReader = ::com::sun::tools::javac::jvm::ModuleNameReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ModuleNameReader$BadClassFile_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModuleNameReader$BadClassFile, serialVersionUID)},
	{}
};

$MethodInfo _ModuleNameReader$BadClassFile_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ModuleNameReader$BadClassFile::*)($String*)>(&ModuleNameReader$BadClassFile::init$))},
	{}
};

$InnerClassInfo _ModuleNameReader$BadClassFile_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile", "com.sun.tools.javac.jvm.ModuleNameReader", "BadClassFile", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ModuleNameReader$BadClassFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile",
	"java.lang.Exception",
	nullptr,
	_ModuleNameReader$BadClassFile_FieldInfo_,
	_ModuleNameReader$BadClassFile_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleNameReader$BadClassFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ModuleNameReader"
};

$Object* allocate$ModuleNameReader$BadClassFile($Class* clazz) {
	return $of($alloc(ModuleNameReader$BadClassFile));
}

void ModuleNameReader$BadClassFile::init$($String* msg) {
	$Exception::init$(msg);
}

ModuleNameReader$BadClassFile::ModuleNameReader$BadClassFile() {
}

ModuleNameReader$BadClassFile::ModuleNameReader$BadClassFile(const ModuleNameReader$BadClassFile& e) : $Exception(e) {
}

void ModuleNameReader$BadClassFile::throw$() {
	throw *this;
}

$Class* ModuleNameReader$BadClassFile::load$($String* name, bool initialize) {
	$loadClass(ModuleNameReader$BadClassFile, name, initialize, &_ModuleNameReader$BadClassFile_ClassInfo_, allocate$ModuleNameReader$BadClassFile);
	return class$;
}

$Class* ModuleNameReader$BadClassFile::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com