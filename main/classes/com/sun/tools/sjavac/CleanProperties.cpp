#include <com/sun/tools/sjavac/CleanProperties.h>

#include <com/sun/tools/sjavac/CompileProperties.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/net/URI.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $CompileProperties = ::com::sun::tools::sjavac::CompileProperties;
using $Log = ::com::sun::tools::sjavac::Log;
using $Transformer = ::com::sun::tools::sjavac::Transformer;
using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$MethodInfo _CleanProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CleanProperties::*)()>(&CleanProperties::init$))},
	{"clean", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;Ljava/io/File;ILjava/util/Map;)Z", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;Ljava/io/File;ILjava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;)Z", 0},
	{"setExtra", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setExtra", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC},
	{"transform", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;Ljava/net/URI;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;IZI)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Set<Ljava/net/URI;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;IZI)Z", $PUBLIC},
	{}
};

$ClassInfo _CleanProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.CleanProperties",
	"java.lang.Object",
	"com.sun.tools.sjavac.Transformer",
	nullptr,
	_CleanProperties_MethodInfo_
};

$Object* allocate$CleanProperties($Class* clazz) {
	return $of($alloc(CleanProperties));
}

void CleanProperties::init$() {
}

void CleanProperties::setExtra($String* e) {
}

void CleanProperties::setExtra($Options* a) {
}

bool CleanProperties::transform($CompilationService* sjavac, $Map* pkgSrcs, $Set* visibleSrcs, $Map* oldPackageDependencies, $URI* destRoot, $Map* packageArtifacts, $Map* packageDependencies, $Map* packageCpDependencies, $Map* packagePublicApis, $Map* dependencyPublicApis, int32_t debugLevel, bool incremental, int32_t numCores) {
	$useLocalCurrentObjectStackCache();
	bool rc = true;
	{
		$var($Iterator, i$, $nc($($nc(pkgSrcs)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pkgName, $cast($String, i$->next()));
			{
				$init($File);
				$var($String, pkgNameF, $nc(pkgName)->replace(u'.', $File::separatorChar));
				{
					$var($Iterator, i$, $nc(($cast($Set, $(pkgSrcs->get(pkgName)))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($URI, u, $cast($URI, i$->next()));
						{
							$var($File, src, $new($File, u));
							bool r = clean(pkgName, pkgNameF, src, $$new($File, destRoot), debugLevel, packageArtifacts);
							if (r == false) {
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

bool CleanProperties::clean($String* pkgName, $String* pkgNameF, $File* src, $File* destRoot, int32_t debugLevel, $Map* packageArtifacts) {
	$useLocalCurrentObjectStackCache();
	$var($Properties, p, $new($Properties));
	try {
		p->load(static_cast<$InputStream*>($$new($FileInputStream, src)));
	} catch ($IOException& e) {
		$Log::error($$str({"Error reading file "_s, $($nc(src)->getPath())}));
		return false;
	}
	$var($List, sortedKeys, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($(p->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				sortedKeys->add($cast($String, key));
			}
		}
	}
	$Collections::sort(sortedKeys);
	$var($StringBuilder, data, $new($StringBuilder));
	{
		$var($Iterator, i$, sortedKeys->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				data->append($($CompileProperties::escape(key)))->append(":"_s)->append($($CompileProperties::escape($cast($String, $(p->get(key))))))->append("\n"_s);
			}
		}
	}
	$init($File);
	$var($String, var$0, $$str({$($nc(destRoot)->getPath()), $File::separator, pkgNameF, $File::separator}));
	$var($String, destFilename, $concat(var$0, $($nc(src)->getName())));
	$var($File, dest, $new($File, destFilename));
	if (!$nc($(dest->getParentFile()))->isDirectory()) {
		if (!$nc($(dest->getParentFile()))->mkdirs()) {
			$Log::error($$str({"Could not create the directory "_s, $($nc($(dest->getParentFile()))->getPath())}));
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
		return true;
	}
	$Log::info($$str({"Cleaning property file "_s, pkgNameF, $File::separator, $(src->getName())}));
	try {
		$var($Writer, writer, $new($BufferedWriter, $$new($OutputStreamWriter, $$new($FileOutputStream, dest))));
		{
			$var($Throwable, var$3, nullptr);
			try {
				try {
					writer->write($(data->toString()));
				} catch ($Throwable& t$) {
					try {
						writer->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$4) {
				$assign(var$3, var$4);
			} /*finally*/ {
				writer->close();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
	} catch ($IOException& e) {
		$Log::error($$str({"Could not write file "_s, $(dest->getPath())}));
		return false;
	}
	return true;
}

CleanProperties::CleanProperties() {
}

$Class* CleanProperties::load$($String* name, bool initialize) {
	$loadClass(CleanProperties, name, initialize, &_CleanProperties_ClassInfo_, allocate$CleanProperties);
	return class$;
}

$Class* CleanProperties::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com