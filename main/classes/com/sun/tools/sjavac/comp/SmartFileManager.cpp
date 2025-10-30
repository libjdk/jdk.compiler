#include <com/sun/tools/sjavac/comp/SmartFileManager.h>

#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/sjavac/comp/FileObjectWithLocation.h>
#include <com/sun/tools/sjavac/comp/JavaFileObjectWithLocation.h>
#include <com/sun/tools/sjavac/comp/SmartFileObject.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/net/URI.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/ForwardingJavaFileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS
#undef NATIVE_HEADER_OUTPUT
#undef PLATFORM_CLASS_PATH
#undef SOURCE

using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $FileObjectWithLocation = ::com::sun::tools::sjavac::comp::FileObjectWithLocation;
using $JavaFileObjectWithLocation = ::com::sun::tools::sjavac::comp::JavaFileObjectWithLocation;
using $SmartFileObject = ::com::sun::tools::sjavac::comp::SmartFileObject;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $ForwardingJavaFileObject = ::javax::tools::ForwardingJavaFileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$CompoundAttribute _SmartFileManager_Annotations_[] = {
	{"Lcom/sun/tools/javac/api/ClientCodeWrapper$Trusted;", nullptr},
	{}
};

$FieldInfo _SmartFileManager_FieldInfo_[] = {
	{"visibleSources", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/URI;>;", 0, $field(SmartFileManager, visibleSources)},
	{"packageArtifacts", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;", 0, $field(SmartFileManager, packageArtifacts)},
	{}
};

$MethodInfo _SmartFileManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileManager;)V", nullptr, $PUBLIC, $method(static_cast<void(SmartFileManager::*)($JavaFileManager*)>(&SmartFileManager::init$))},
	{"addArtifact", "(Ljava/lang/String;Ljava/net/URI;)V", nullptr, 0},
	{"cleanArtifacts", "()V", nullptr, $PUBLIC},
	{"getFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPackageArtifacts", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;", $PUBLIC},
	{"inferBinaryName", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isModuleInfo", "(Ljavax/tools/FileObject;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SmartFileManager::*)($FileObject*)>(&SmartFileManager::isModuleInfo))},
	{"isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;Z)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"locUnwrap", "(Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FileObject*(*)($FileObject*)>(&SmartFileManager::locUnwrap))},
	{"locUnwrap", "(Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JavaFileObject*(*)($JavaFileObject*)>(&SmartFileManager::locUnwrap))},
	{"locWrap", "(Ljavax/tools/JavaFileObject;Ljavax/tools/JavaFileManager$Location;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaFileObject*(*)($JavaFileObject*,$JavaFileManager$Location*)>(&SmartFileManager::locWrap))},
	{"locWrap", "(Ljavax/tools/FileObject;Ljavax/tools/JavaFileManager$Location;)Ljavax/tools/FileObject;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FileObject*(*)($FileObject*,$JavaFileManager$Location*)>(&SmartFileManager::locWrap))},
	{"locWrapMany", "(Ljava/lang/Iterable;Ljavax/tools/JavaFileManager$Location;)Lcom/sun/tools/javac/util/ListBuffer;", "(Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;Ljavax/tools/JavaFileManager$Location;)Lcom/sun/tools/javac/util/ListBuffer<Ljavax/tools/JavaFileObject;>;", $PRIVATE | $STATIC, $method(static_cast<$ListBuffer*(*)($Iterable*,$JavaFileManager$Location*)>(&SmartFileManager::locWrapMany))},
	{"packageNameFromFileName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&SmartFileManager::packageNameFromFileName))},
	{"setSymbolFileEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setVisibleSources", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/net/URI;>;)V", $PUBLIC},
	{}
};

$ClassInfo _SmartFileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.SmartFileManager",
	"javax.tools.ForwardingJavaFileManager",
	nullptr,
	_SmartFileManager_FieldInfo_,
	_SmartFileManager_MethodInfo_,
	"Ljavax/tools/ForwardingJavaFileManager<Ljavax/tools/JavaFileManager;>;",
	nullptr,
	nullptr,
	_SmartFileManager_Annotations_
};

$Object* allocate$SmartFileManager($Class* clazz) {
	return $of($alloc(SmartFileManager));
}

void SmartFileManager::init$($JavaFileManager* fileManager) {
	$ForwardingJavaFileManager::init$(fileManager);
	$set(this, visibleSources, $new($HashSet));
	$set(this, packageArtifacts, $new($HashMap));
}

void SmartFileManager::setVisibleSources($Set* s) {
	$set(this, visibleSources, s);
}

void SmartFileManager::cleanArtifacts() {
	$set(this, packageArtifacts, $new($HashMap));
}

void SmartFileManager::setSymbolFileEnabled(bool b) {
	$useLocalCurrentObjectStackCache();
	$var($JavacFileManager, javacFileManager, nullptr);
	$var($JavaFileManager, patt3109$temp, this->fileManager);
	bool var$0 = $instanceOf($JavacFileManager, patt3109$temp);
	if (var$0) {
		$assign(javacFileManager, $cast($JavacFileManager, patt3109$temp));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalStateException);
	}
	$nc(javacFileManager)->setSymbolFileEnabled(b);
}

$String* SmartFileManager::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file) {
	return $ForwardingJavaFileManager::inferBinaryName(location, $(locUnwrap(file)));
}

$Map* SmartFileManager::getPackageArtifacts() {
	return this->packageArtifacts;
}

$Iterable* SmartFileManager::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	$useLocalCurrentObjectStackCache();
	$var($Iterable, files, $ForwardingJavaFileManager::list(location, packageName, kinds, recurse));
	if ($nc(this->visibleSources)->isEmpty()) {
		return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(locWrapMany(files, location)))));
	}
	$var($ListBuffer, filteredFiles, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(files)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavaFileObject, f, $cast($JavaFileObject, i$->next()));
			{
				$var($URI, uri, $nc(f)->toUri());
				$var($String, t, $nc(uri)->toString());
				bool var$1 = $nc(t)->startsWith("jar:"_s);
				bool var$0 = var$1 || $nc(t)->endsWith(".class"_s);
				if (var$0 || $nc(this->visibleSources)->contains(uri)) {
					filteredFiles->add(f);
				}
			}
		}
	}
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(locWrapMany(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(filteredFiles)))), location)))));
}

$JavaFileObject* SmartFileManager::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, file, $ForwardingJavaFileManager::getJavaFileForInput(location, className, kind));
	$assign(file, locWrap(file, location));
	if (file == nullptr || $nc(this->visibleSources)->isEmpty()) {
		return file;
	}
	bool var$0 = $nc(this->visibleSources)->contains($($nc(file)->toUri()));
	if (var$0 || isModuleInfo(file)) {
		return file;
	}
	return nullptr;
}

$JavaFileObject* SmartFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, file, $ForwardingJavaFileManager::getJavaFileForOutput(location, className, kind, sibling));
	$assign(file, locWrap(file, location));
	if (file == nullptr) {
		return file;
	}
	int32_t dp = $nc(className)->lastIndexOf((int32_t)u'.');
	$var($String, pkg_name, ""_s);
	if (dp != -1) {
		$assign(pkg_name, className->substring(0, dp));
	}
	$var($String, mod_name, ""_s);
	addArtifact($$str({mod_name, ":"_s, pkg_name}), $($nc(file)->toUri()));
	return file;
}

$FileObject* SmartFileManager::getFileForInput($JavaFileManager$Location* location, $String* packageName, $String* relativeName) {
	$useLocalCurrentObjectStackCache();
	$var($FileObject, file, $ForwardingJavaFileManager::getFileForInput(location, packageName, relativeName));
	$assign(file, locWrap(file, location));
	if (file == nullptr || $nc(this->visibleSources)->isEmpty()) {
		return file;
	}
	bool var$0 = $nc(this->visibleSources)->contains($($nc(file)->toUri()));
	if (var$0 || isModuleInfo(file)) {
		return file;
	}
	return nullptr;
}

bool SmartFileManager::isModuleInfo($FileObject* fo) {
	$var($JavaFileObject, javaFileObject, nullptr);
	bool var$1 = $instanceOf($JavaFileObject, fo);
	if (var$1) {
		$assign(javaFileObject, $cast($JavaFileObject, fo));
		var$1 = true;
	}
	bool var$0 = (var$1);
	if (var$0) {
		$init($JavaFileObject$Kind);
		bool var$2 = $nc(javaFileObject)->isNameCompatible("module-info"_s, $JavaFileObject$Kind::SOURCE);
		var$0 = (var$2 || $nc(javaFileObject)->isNameCompatible("module-info"_s, $JavaFileObject$Kind::CLASS));
	}
	return var$0;
}

$FileObject* SmartFileManager::getFileForOutput($JavaFileManager$Location* location, $String* packageName$renamed, $String* relativeName, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	$var($String, packageName, packageName$renamed);
	$var($FileObject, superFile, $ForwardingJavaFileManager::getFileForOutput(location, packageName, relativeName, sibling));
	$var($FileObject, file, locWrap(superFile, location));
	if (file == nullptr) {
		return file;
	}
	$init($StandardLocation);
	if ($nc($of(location))->equals($StandardLocation::NATIVE_HEADER_OUTPUT) && $instanceOf($JavaFileObject, superFile)) {
		$assign(file, $new($SmartFileObject, $cast($JavaFileObject, file)));
		$assign(packageName, $str({":"_s, $(packageNameFromFileName(relativeName))}));
	}
	if ($nc(packageName)->equals(""_s)) {
		$assign(packageName, ":"_s);
	}
	addArtifact(packageName, $($nc(file)->toUri()));
	return file;
}

$JavaFileManager$Location* SmartFileManager::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	return $ForwardingJavaFileManager::getLocationForModule(location, $(locUnwrap(fo)));
}

$String* SmartFileManager::packageNameFromFileName($String* fn) {
	$init(SmartFileManager);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	int32_t p = $nc(fn)->indexOf((int32_t)u'_');
	int32_t pp = 0;
	while (p != -1) {
		if (sb->length() > 0) {
			sb->append(u'.');
		}
		sb->append($(fn->substring(pp, p)));
		if (p == fn->length() - 1) {
			break;
		}
		pp = p + 1;
		p = fn->indexOf((int32_t)u'_', pp);
	}
	return sb->toString();
}

void SmartFileManager::addArtifact($String* pkgName, $URI* art) {
	$var($Set, s, $cast($Set, $nc(this->packageArtifacts)->get(pkgName)));
	if (s == nullptr) {
		$assign(s, $new($HashSet));
		$nc(this->packageArtifacts)->put(pkgName, s);
	}
	$nc(s)->add(art);
}

$JavaFileObject* SmartFileManager::locWrap($JavaFileObject* jfo, $JavaFileManager$Location* loc) {
	$init(SmartFileManager);
	$init($StandardLocation);
	if ($equals(loc, $StandardLocation::PLATFORM_CLASS_PATH)) {
		return jfo;
	}
	return jfo == nullptr ? ($JavaFileObject*)nullptr : static_cast<$JavaFileObject*>($new($JavaFileObjectWithLocation, jfo, loc));
}

$FileObject* SmartFileManager::locWrap($FileObject* fo, $JavaFileManager$Location* loc) {
	$init(SmartFileManager);
	{
		$var($JavaFileObject, javaFileObject, nullptr);
		bool var$0 = $instanceOf($JavaFileObject, fo);
		if (var$0) {
			$assign(javaFileObject, $cast($JavaFileObject, fo));
			var$0 = true;
		}
		if (var$0) {
			return locWrap(javaFileObject, loc);
		}
	}
	return fo == nullptr ? ($FileObject*)nullptr : static_cast<$FileObject*>($new($FileObjectWithLocation, fo, loc));
}

bool SmartFileManager::isSameFile($FileObject* a, $FileObject* b) {
	$useLocalCurrentObjectStackCache();
	$var($FileObject, var$0, locUnwrap(a));
	return $ForwardingJavaFileManager::isSameFile(var$0, $(locUnwrap(b)));
}

$ListBuffer* SmartFileManager::locWrapMany($Iterable* jfos, $JavaFileManager$Location* loc) {
	$init(SmartFileManager);
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, locWrapped, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(jfos)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavaFileObject, f, $cast($JavaFileObject, i$->next()));
			locWrapped->add($(locWrap(f, loc)));
		}
	}
	return locWrapped;
}

$FileObject* SmartFileManager::locUnwrap($FileObject* fo) {
	$init(SmartFileManager);
	$useLocalCurrentObjectStackCache();
	{
		$var($FileObjectWithLocation, fileObjectWithLocation, nullptr);
		bool var$0 = $instanceOf($FileObjectWithLocation, fo);
		if (var$0) {
			$assign(fileObjectWithLocation, $cast($FileObjectWithLocation, fo));
			var$0 = true;
		}
		if (var$0) {
			return $nc(fileObjectWithLocation)->getDelegate();
		}
	}
	{
		$var($JavaFileObjectWithLocation, javaFileObjectWithLocation, nullptr);
		bool var$1 = $instanceOf($JavaFileObjectWithLocation, fo);
		if (var$1) {
			$assign(javaFileObjectWithLocation, $cast($JavaFileObjectWithLocation, fo));
			var$1 = true;
		}
		if (var$1) {
			return $nc(javaFileObjectWithLocation)->getDelegate();
		}
	}
	return fo;
}

$JavaFileObject* SmartFileManager::locUnwrap($JavaFileObject* fo) {
	$init(SmartFileManager);
	{
		$var($JavaFileObjectWithLocation, javaFileObjectWithLocation, nullptr);
		bool var$0 = $instanceOf($JavaFileObjectWithLocation, fo);
		if (var$0) {
			$assign(javaFileObjectWithLocation, $cast($JavaFileObjectWithLocation, fo));
			var$0 = true;
		}
		if (var$0) {
			return $nc(javaFileObjectWithLocation)->getDelegate();
		}
	}
	return fo;
}

SmartFileManager::SmartFileManager() {
}

$Class* SmartFileManager::load$($String* name, bool initialize) {
	$loadClass(SmartFileManager, name, initialize, &_SmartFileManager_ClassInfo_, allocate$SmartFileManager);
	return class$;
}

$Class* SmartFileManager::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com