#include <com/sun/tools/javac/file/Locations$SearchPath.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderNotFoundException.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef PATH

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $ProviderNotFoundException = ::java::nio::file::ProviderNotFoundException;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$SearchPath$$Lambda$isArchive : public $Predicate {
	$class(Locations$SearchPath$$Lambda$isArchive, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Locations* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* file) override {
		 return $nc(inst$)->isArchive($cast($Path, file));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$SearchPath$$Lambda$isArchive>());
	}
	$Locations* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Locations$SearchPath$$Lambda$isArchive::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Locations$SearchPath$$Lambda$isArchive, inst$)},
	{}
};
$MethodInfo Locations$SearchPath$$Lambda$isArchive::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, $PUBLIC, $method(static_cast<void(Locations$SearchPath$$Lambda$isArchive::*)($Locations*)>(&Locations$SearchPath$$Lambda$isArchive::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$SearchPath$$Lambda$isArchive::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$SearchPath$$Lambda$isArchive",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Locations$SearchPath$$Lambda$isArchive::load$($String* name, bool initialize) {
	$loadClass(Locations$SearchPath$$Lambda$isArchive, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$SearchPath$$Lambda$isArchive::class$ = nullptr;

class Locations$SearchPath$$Lambda$lambda$addDirectory$0$1 : public $Consumer {
	$class(Locations$SearchPath$$Lambda$lambda$addDirectory$0$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Locations$SearchPath* inst, bool warn) {
		$set(this, inst$, inst);
		this->warn = warn;
	}
	virtual void accept(Object$* dirEntry) override {
		$nc(inst$)->lambda$addDirectory$0(warn, $cast($Path, dirEntry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$SearchPath$$Lambda$lambda$addDirectory$0$1>());
	}
	Locations$SearchPath* inst$ = nullptr;
	bool warn = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Locations$SearchPath$$Lambda$lambda$addDirectory$0$1, inst$)},
	{"warn", "Z", nullptr, $PUBLIC, $field(Locations$SearchPath$$Lambda$lambda$addDirectory$0$1, warn)},
	{}
};
$MethodInfo Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations$SearchPath;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::*)(Locations$SearchPath*,bool)>(&Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$SearchPath$$Lambda$lambda$addDirectory$0$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::load$($String* name, bool initialize) {
	$loadClass(Locations$SearchPath$$Lambda$lambda$addDirectory$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::class$ = nullptr;

$FieldInfo _Locations$SearchPath_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$SearchPath, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Locations$SearchPath, serialVersionUID)},
	{"expandJarClassPaths", "Z", nullptr, $PRIVATE, $field(Locations$SearchPath, expandJarClassPaths$)},
	{"canonicalValues", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/file/Path;>;", $PRIVATE | $FINAL | $TRANSIENT, $field(Locations$SearchPath, canonicalValues)},
	{"emptyPathDefault", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $TRANSIENT, $field(Locations$SearchPath, emptyPathDefault$)},
	{}
};

$MethodInfo _Locations$SearchPath_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, $PRIVATE, $method(static_cast<void(Locations$SearchPath::*)($Locations*)>(&Locations$SearchPath::init$))},
	{"addDirectories", "(Ljava/lang/String;Z)Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PUBLIC},
	{"addDirectories", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PUBLIC},
	{"addDirectory", "(Ljava/nio/file/Path;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Locations$SearchPath::*)($Path*,bool)>(&Locations$SearchPath::addDirectory))},
	{"addFile", "(Ljava/nio/file/Path;Z)V", nullptr, $PUBLIC},
	{"addFiles", "(Ljava/lang/String;Z)Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PUBLIC},
	{"addFiles", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PUBLIC},
	{"addFiles", "(Ljava/lang/Iterable;Z)Lcom/sun/tools/javac/file/Locations$SearchPath;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;Z)Lcom/sun/tools/javac/file/Locations$SearchPath;", $PUBLIC},
	{"addFiles", "(Ljava/lang/Iterable;)Lcom/sun/tools/javac/file/Locations$SearchPath;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Lcom/sun/tools/javac/file/Locations$SearchPath;", $PUBLIC},
	{"addJarClassPath", "(Ljava/nio/file/Path;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Locations$SearchPath::*)($Path*,bool)>(&Locations$SearchPath::addJarClassPath))},
	{"emptyPathDefault", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PUBLIC},
	{"expandJarClassPaths", "(Z)Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PUBLIC},
	{"lambda$addDirectory$0", "(ZLjava/nio/file/Path;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Locations$SearchPath::*)(bool,$Path*)>(&Locations$SearchPath::lambda$addDirectory$0))},
	{}
};

$InnerClassInfo _Locations$SearchPath_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$SearchPath", "com.sun.tools.javac.file.Locations", "SearchPath", $PRIVATE},
	{}
};

$ClassInfo _Locations$SearchPath_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$SearchPath",
	"java.util.LinkedHashSet",
	nullptr,
	_Locations$SearchPath_FieldInfo_,
	_Locations$SearchPath_MethodInfo_,
	"Ljava/util/LinkedHashSet<Ljava/nio/file/Path;>;",
	nullptr,
	_Locations$SearchPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$SearchPath($Class* clazz) {
	return $of($alloc(Locations$SearchPath));
}

void Locations$SearchPath::init$($Locations* this$0) {
	$set(this, this$0, this$0);
	$LinkedHashSet::init$();
	this->expandJarClassPaths$ = false;
	$set(this, canonicalValues, $new($HashSet));
	$set(this, emptyPathDefault$, nullptr);
}

Locations$SearchPath* Locations$SearchPath::expandJarClassPaths(bool x) {
	this->expandJarClassPaths$ = x;
	return this;
}

Locations$SearchPath* Locations$SearchPath::emptyPathDefault($Path* x) {
	$set(this, emptyPathDefault$, x);
	return this;
}

Locations$SearchPath* Locations$SearchPath::addDirectories($String* dirs, bool warn) {
	$useLocalCurrentObjectStackCache();
	bool prev = this->expandJarClassPaths$;
	this->expandJarClassPaths$ = true;
	{
		$var($Throwable, var$0, nullptr);
		$var(Locations$SearchPath, var$2, nullptr);
		bool return$1 = false;
		try {
			if (dirs != nullptr) {
				{
					$var($Iterator, i$, $nc($(this->this$0->getPathEntries(dirs)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Path, dir, $cast($Path, i$->next()));
						{
							addDirectory(dir, warn);
						}
					}
				}
			}
			$assign(var$2, this);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			this->expandJarClassPaths$ = prev;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

Locations$SearchPath* Locations$SearchPath::addDirectories($String* dirs) {
	return addDirectories(dirs, this->this$0->warn);
}

void Locations$SearchPath::addDirectory($Path* dir, bool warn) {
	$useLocalCurrentObjectStackCache();
	if (!$Files::isDirectory(dir, $$new($LinkOptionArray, 0))) {
		if (warn) {
			$init($Lint$LintCategory);
			$nc(this->this$0->log)->warning($Lint$LintCategory::PATH, $($CompilerProperties$Warnings::DirPathElementNotFound(dir)));
		}
		return;
	}
	try {
		$var($Stream, s, $Files::list(dir));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc($($nc(s)->filter(static_cast<$Predicate*>($$new(Locations$SearchPath$$Lambda$isArchive, this->this$0)))))->forEach(static_cast<$Consumer*>($$new(Locations$SearchPath$$Lambda$lambda$addDirectory$0$1, this, warn)));
				} catch ($Throwable& t$) {
					if (s != nullptr) {
						try {
							s->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (s != nullptr) {
					s->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& ignore) {
	}
}

Locations$SearchPath* Locations$SearchPath::addFiles($String* files, bool warn) {
	if (files != nullptr) {
		addFiles($(this->this$0->getPathEntries(files, this->emptyPathDefault$)), warn);
	}
	return this;
}

Locations$SearchPath* Locations$SearchPath::addFiles($String* files) {
	return addFiles(files, this->this$0->warn);
}

Locations$SearchPath* Locations$SearchPath::addFiles($Iterable* files, bool warn) {
	$useLocalCurrentObjectStackCache();
	if (files != nullptr) {
		{
			$var($Iterator, i$, files->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Path, file, $cast($Path, i$->next()));
				{
					addFile(file, warn);
				}
			}
		}
	}
	return this;
}

Locations$SearchPath* Locations$SearchPath::addFiles($Iterable* files) {
	return addFiles(files, this->this$0->warn);
}

void Locations$SearchPath::addFile($Path* file, bool warn) {
	$useLocalCurrentObjectStackCache();
	if (contains(file)) {
		return;
	}
	if (!$nc(this->this$0->fsInfo)->exists(file)) {
		if (warn) {
			$init($Lint$LintCategory);
			$nc(this->this$0->log)->warning($Lint$LintCategory::PATH, $($CompilerProperties$Warnings::PathElementNotFound(file)));
		}
		$LinkedHashSet::add(file);
		return;
	}
	$var($Path, canonFile, $nc(this->this$0->fsInfo)->getCanonicalFile(file));
	if ($nc(this->canonicalValues)->contains(canonFile)) {
		return;
	}
	if ($nc(this->this$0->fsInfo)->isFile(file)) {
		bool var$0 = !$nc($($nc($($nc(file)->getFileName()))->toString()))->endsWith(".jmod"_s);
		if (var$0 && !file->endsWith("modules"_s)) {
			if (!this->this$0->isArchive(file)) {
				try {
					$nc($($FileSystems::newFileSystem(file, ($ClassLoader*)nullptr)))->close();
					if (warn) {
						$init($Lint$LintCategory);
						$nc(this->this$0->log)->warning($Lint$LintCategory::PATH, $($CompilerProperties$Warnings::UnexpectedArchiveFile(file)));
					}
				} catch ($IOException& e) {
					if (warn) {
						$init($Lint$LintCategory);
						$nc(this->this$0->log)->warning($Lint$LintCategory::PATH, $($CompilerProperties$Warnings::InvalidArchiveFile(file)));
					}
					return;
				} catch ($ProviderNotFoundException& e) {
					if (warn) {
						$init($Lint$LintCategory);
						$nc(this->this$0->log)->warning($Lint$LintCategory::PATH, $($CompilerProperties$Warnings::InvalidArchiveFile(file)));
					}
					return;
				}
			} else if ($nc(this->this$0->fsInfo)->getJarFSProvider() == nullptr) {
				$nc(this->this$0->log)->error($($CompilerProperties$Errors::NoZipfsForArchive(file)));
				return;
			}
		}
	}
	$LinkedHashSet::add(file);
	$nc(this->canonicalValues)->add(canonFile);
	bool var$1 = this->expandJarClassPaths$ && $nc(this->this$0->fsInfo)->isFile(file);
	if (var$1 && !$nc(file)->endsWith("modules"_s)) {
		addJarClassPath(file, warn);
	}
}

void Locations$SearchPath::addJarClassPath($Path* jarFile, bool warn) {
	$useLocalCurrentObjectStackCache();
	try {
		{
			$var($Iterator, i$, $nc($($nc(this->this$0->fsInfo)->getJarClassPath(jarFile)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Path, f, $cast($Path, i$->next()));
				{
					addFile(f, warn);
				}
			}
		}
	} catch ($IOException& e) {
		$nc(this->this$0->log)->error($($CompilerProperties$Errors::ErrorReadingFile(jarFile, $($JavacFileManager::getMessage(e)))));
	}
}

void Locations$SearchPath::lambda$addDirectory$0(bool warn, $Path* dirEntry) {
	addFile(dirEntry, warn);
}

Locations$SearchPath::Locations$SearchPath() {
}

$Class* Locations$SearchPath::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Locations$SearchPath$$Lambda$isArchive::classInfo$.name)) {
			return Locations$SearchPath$$Lambda$isArchive::load$(name, initialize);
		}
		if (name->equals(Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::classInfo$.name)) {
			return Locations$SearchPath$$Lambda$lambda$addDirectory$0$1::load$(name, initialize);
		}
	}
	$loadClass(Locations$SearchPath, name, initialize, &_Locations$SearchPath_ClassInfo_, allocate$Locations$SearchPath);
	return class$;
}

$Class* Locations$SearchPath::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com