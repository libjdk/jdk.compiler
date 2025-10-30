#include <com/sun/tools/javac/util/ModuleHelper.h>

#include <java/lang/Module.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _ModuleHelper_FieldInfo_[] = {
	{"javacInternalPackages", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleHelper, javacInternalPackages)},
	{}
};

$MethodInfo _ModuleHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleHelper::*)()>(&ModuleHelper::init$))},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*,$Module*)>(&ModuleHelper::addExports))},
	{}
};

$ClassInfo _ModuleHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.ModuleHelper",
	"java.lang.Object",
	nullptr,
	_ModuleHelper_FieldInfo_,
	_ModuleHelper_MethodInfo_
};

$Object* allocate$ModuleHelper($Class* clazz) {
	return $of($alloc(ModuleHelper));
}

$StringArray* ModuleHelper::javacInternalPackages = nullptr;

void ModuleHelper::init$() {
}

void ModuleHelper::addExports($Module* from, $Module* to) {
	$init(ModuleHelper);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($StringArray, arr$, ModuleHelper::javacInternalPackages);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, pack, arr$->get(i$));
			{
				$nc(from)->addExports(pack, to);
			}
		}
	}
}

void clinit$ModuleHelper($Class* class$) {
	$assignStatic(ModuleHelper::javacInternalPackages, $new($StringArray, {
		"com.sun.tools.javac.api"_s,
		"com.sun.tools.javac.code"_s,
		"com.sun.tools.javac.comp"_s,
		"com.sun.tools.javac.file"_s,
		"com.sun.tools.javac.jvm"_s,
		"com.sun.tools.javac.main"_s,
		"com.sun.tools.javac.model"_s,
		"com.sun.tools.javac.parser"_s,
		"com.sun.tools.javac.platform"_s,
		"com.sun.tools.javac.processing"_s,
		"com.sun.tools.javac.tree"_s,
		"com.sun.tools.javac.util"_s,
		"com.sun.tools.doclint"_s
	}));
}

ModuleHelper::ModuleHelper() {
}

$Class* ModuleHelper::load$($String* name, bool initialize) {
	$loadClass(ModuleHelper, name, initialize, &_ModuleHelper_ClassInfo_, clinit$ModuleHelper, allocate$ModuleHelper);
	return class$;
}

$Class* ModuleHelper::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com