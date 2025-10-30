#include <com/sun/tools/javac/code/ModuleFinder$ModuleNameFromSourceReader.h>

#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _ModuleFinder$ModuleNameFromSourceReader_MethodInfo_[] = {
	{"readModuleName", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ModuleFinder$ModuleNameFromSourceReader_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ModuleFinder$ModuleNameFromSourceReader", "com.sun.tools.javac.code.ModuleFinder", "ModuleNameFromSourceReader", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModuleFinder$ModuleNameFromSourceReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.ModuleFinder$ModuleNameFromSourceReader",
	nullptr,
	nullptr,
	nullptr,
	_ModuleFinder$ModuleNameFromSourceReader_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleFinder$ModuleNameFromSourceReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ModuleFinder"
};

$Object* allocate$ModuleFinder$ModuleNameFromSourceReader($Class* clazz) {
	return $of($alloc(ModuleFinder$ModuleNameFromSourceReader));
}

$Class* ModuleFinder$ModuleNameFromSourceReader::load$($String* name, bool initialize) {
	$loadClass(ModuleFinder$ModuleNameFromSourceReader, name, initialize, &_ModuleFinder$ModuleNameFromSourceReader_ClassInfo_, allocate$ModuleFinder$ModuleNameFromSourceReader);
	return class$;
}

$Class* ModuleFinder$ModuleNameFromSourceReader::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com