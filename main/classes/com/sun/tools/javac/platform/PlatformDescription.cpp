#include <com/sun/tools/javac/platform/PlatformDescription.h>

#include <java/util/List.h>
#include <javax/tools/JavaFileManager.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

$MethodInfo _PlatformDescription_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAdditionalOptions", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getAnnotationProcessors", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/platform/PlatformDescription$PluginInfo<Ljavax/annotation/processing/Processor;>;>;", $PUBLIC | $ABSTRACT},
	{"getFileManager", "()Ljavax/tools/JavaFileManager;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPlugins", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/platform/PlatformDescription$PluginInfo<Lcom/sun/source/util/Plugin;>;>;", $PUBLIC | $ABSTRACT},
	{"getSourceVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTargetVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PlatformDescription_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.PlatformDescription$PluginInfo", "com.sun.tools.javac.platform.PlatformDescription", "PluginInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PlatformDescription_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.platform.PlatformDescription",
	nullptr,
	"java.io.Closeable",
	nullptr,
	_PlatformDescription_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformDescription_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.PlatformDescription$PluginInfo"
};

$Object* allocate$PlatformDescription($Class* clazz) {
	return $of($alloc(PlatformDescription));
}

$Class* PlatformDescription::load$($String* name, bool initialize) {
	$loadClass(PlatformDescription, name, initialize, &_PlatformDescription_ClassInfo_, allocate$PlatformDescription);
	return class$;
}

$Class* PlatformDescription::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com