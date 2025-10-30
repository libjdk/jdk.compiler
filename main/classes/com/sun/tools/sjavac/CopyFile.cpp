#include <com/sun/tools/sjavac/CopyFile.h>

#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/net/URI.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef REPLACE_EXISTING

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $Log = ::com::sun::tools::sjavac::Log;
using $Transformer = ::com::sun::tools::sjavac::Transformer;
using $Util = ::com::sun::tools::sjavac::Util;
using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $CopyOption = ::java::nio::file::CopyOption;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$MethodInfo _CopyFile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CopyFile::*)()>(&CopyFile::init$))},
	{"setExtra", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setExtra", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC},
	{"transform", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;Ljava/net/URI;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;IZI)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Set<Ljava/net/URI;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;IZI)Z", $PUBLIC},
	{}
};

$ClassInfo _CopyFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.CopyFile",
	"java.lang.Object",
	"com.sun.tools.sjavac.Transformer",
	nullptr,
	_CopyFile_MethodInfo_
};

$Object* allocate$CopyFile($Class* clazz) {
	return $of($alloc(CopyFile));
}

void CopyFile::init$() {
}

void CopyFile::setExtra($String* e) {
}

void CopyFile::setExtra($Options* a) {
}

bool CopyFile::transform($CompilationService* compilationService, $Map* pkgSrcs, $Set* visibleSrcs, $Map* oldPackageDependents, $URI* destRoot, $Map* packageArtifacts, $Map* packageDependencies, $Map* packageCpDependencies, $Map* packagePubapis, $Map* dependencyPubapis, int32_t debugLevel, bool incremental, int32_t numCores) {
	$useLocalCurrentObjectStackCache();
	bool rc = true;
	$var($String, dest_filename, nullptr);
	$var($File, dest, nullptr);
	{
		$var($Iterator, i$, $nc($($nc(pkgSrcs)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pkgName, $cast($String, i$->next()));
			{
				$var($String, pkgNameF, $Util::toFileSystemPath(pkgName));
				{
					$var($Iterator, i$, $nc(($cast($Set, $(pkgSrcs->get(pkgName)))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($URI, u, $cast($URI, i$->next()));
						{
							$var($File, src, $new($File, u));
							$var($File, destDir, nullptr);
							$init($File);
							$assign(destDir, $new($File, $$str({$($nc(destRoot)->getPath()), $File::separator, pkgNameF})));
							$var($String, var$0, $$str({$($nc(destRoot)->getPath()), $File::separator, pkgNameF, $File::separator}));
							$assign(dest_filename, $concat(var$0, $(src->getName())));
							$assign(dest, $new($File, dest_filename));
							if (!destDir->isDirectory()) {
								if (!destDir->mkdirs()) {
									$Log::error($$str({"Error: The copier could not create the directory "_s, $(destDir->getPath())}));
									return false;
								}
							}
							$var($Set, as, $cast($Set, $nc(packageArtifacts)->get(pkgName)));
							if (as == nullptr) {
								$assign(as, $new($HashSet));
								packageArtifacts->put(pkgName, as);
							}
							$nc(as)->add($(dest->toURI()));
							bool var$1 = dest->exists();
							if (var$1) {
								int64_t var$2 = dest->lastModified();
								var$1 = var$2 > src->lastModified();
							}
							if (var$1) {
								continue;
							}
							$Log::info($$str({"Copying "_s, pkgNameF, $File::separator, $(src->getName())}));
							try {
								$var($Path, var$3, src->toPath());
								$init($StandardCopyOption);
								$Files::copy(var$3, $(dest->toPath()), $$new($CopyOptionArray, {static_cast<$CopyOption*>($StandardCopyOption::REPLACE_EXISTING)}));
							} catch ($IOException& e) {
								$var($String, var$4, $$str({"Could not copy the file "_s, $(src->getPath()), " to "_s}));
								$Log::error($$concat(var$4, $(dest->getPath())));
								rc = false;
							}
						}
					}
				}
			}
		}
	}
	return rc;
}

CopyFile::CopyFile() {
}

$Class* CopyFile::load$($String* name, bool initialize) {
	$loadClass(CopyFile, name, initialize, &_CopyFile_ClassInfo_, allocate$CopyFile);
	return class$;
}

$Class* CopyFile::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com