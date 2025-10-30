#include <com/sun/tools/javac/file/JavacFileManager.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/file/JRTIndex.h>
#include <com/sun/tools/javac/file/JavacFileManager$1.h>
#include <com/sun/tools/javac/file/JavacFileManager$2.h>
#include <com/sun/tools/javac/file/JavacFileManager$3.h>
#include <com/sun/tools/javac/file/JavacFileManager$ArchiveContainer.h>
#include <com/sun/tools/javac/file/JavacFileManager$Container.h>
#include <com/sun/tools/javac/file/JavacFileManager$DirectoryContainer.h>
#include <com/sun/tools/javac/file/JavacFileManager$JRTImageContainer.h>
#include <com/sun/tools/javac/file/JavacFileManager$PathAndContainer.h>
#include <com/sun/tools/javac/file/JavacFileManager$SortFiles.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>
#include <com/sun/tools/javac/file/RelativePath.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileVisitOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/ProviderNotFoundException.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardJavaFileManager$PathFactory.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS
#undef CLASS_OUTPUT
#undef FOLLOW_LINKS
#undef FOLLOW_LINKS_OPTIONS
#undef FORWARD
#undef MISSING_CONTAINER
#undef NOFOLLOW_LINKS
#undef NO_FILE_VISIT_OPTIONS
#undef REVERSE
#undef SOURCE
#undef SOURCE_OR_CLASS
#undef SOURCE_OUTPUT

using $FileArray = $Array<::java::io::File>;
using $URLArray = $Array<::java::net::URL>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $PathArray = $Array<::java::nio::file::Path>;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $JRTIndex = ::com::sun::tools::javac::file::JRTIndex;
using $JavacFileManager$1 = ::com::sun::tools::javac::file::JavacFileManager$1;
using $JavacFileManager$2 = ::com::sun::tools::javac::file::JavacFileManager$2;
using $JavacFileManager$3 = ::com::sun::tools::javac::file::JavacFileManager$3;
using $JavacFileManager$ArchiveContainer = ::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer;
using $JavacFileManager$Container = ::com::sun::tools::javac::file::JavacFileManager$Container;
using $JavacFileManager$DirectoryContainer = ::com::sun::tools::javac::file::JavacFileManager$DirectoryContainer;
using $JavacFileManager$JRTImageContainer = ::com::sun::tools::javac::file::JavacFileManager$JRTImageContainer;
using $JavacFileManager$PathAndContainer = ::com::sun::tools::javac::file::JavacFileManager$PathAndContainer;
using $JavacFileManager$SortFiles = ::com::sun::tools::javac::file::JavacFileManager$SortFiles;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $RelativePath = ::com::sun::tools::javac::file::RelativePath;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $RelativePath$RelativeFile = ::com::sun::tools::javac::file::RelativePath$RelativeFile;
using $Option = ::com::sun::tools::javac::main::Option;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Options = ::com::sun::tools::javac::util::Options;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileVisitOption = ::java::nio::file::FileVisitOption;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $ProviderNotFoundException = ::java::nio::file::ProviderNotFoundException;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardJavaFileManager$PathFactory = ::javax::tools::StandardJavaFileManager$PathFactory;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class JavacFileManager$$Lambda$get : public $StandardJavaFileManager$PathFactory {
	$class(JavacFileManager$$Lambda$get, $NO_CLASS_INIT, $StandardJavaFileManager$PathFactory)
public:
	void init$() {
	}
	virtual $Path* getPath($String* arg0, $StringArray* arg1) override {
		 return $Paths::get(arg0, arg1);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFileManager$$Lambda$get>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacFileManager$$Lambda$get::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$$Lambda$get::*)()>(&JavacFileManager$$Lambda$get::init$))},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFileManager$$Lambda$get::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.JavacFileManager$$Lambda$get",
	"java.lang.Object",
	"javax.tools.StandardJavaFileManager$PathFactory",
	nullptr,
	methodInfos
};
$Class* JavacFileManager$$Lambda$get::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$$Lambda$get, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFileManager$$Lambda$get::class$ = nullptr;

class JavacFileManager$$Lambda$lambda$preRegister$0$1 : public $Context$Factory {
	$class(JavacFileManager$$Lambda$lambda$preRegister$0$1, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$() {
	}
	virtual $Object* make($Context* c) override {
		 return $of(JavacFileManager::lambda$preRegister$0(c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFileManager$$Lambda$lambda$preRegister$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacFileManager$$Lambda$lambda$preRegister$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$$Lambda$lambda$preRegister$0$1::*)()>(&JavacFileManager$$Lambda$lambda$preRegister$0$1::init$))},
	{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFileManager$$Lambda$lambda$preRegister$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.JavacFileManager$$Lambda$lambda$preRegister$0$1",
	"java.lang.Object",
	"com.sun.tools.javac.util.Context$Factory",
	nullptr,
	methodInfos
};
$Class* JavacFileManager$$Lambda$lambda$preRegister$0$1::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$$Lambda$lambda$preRegister$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFileManager$$Lambda$lambda$preRegister$0$1::class$ = nullptr;

class JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2 : public $Function {
	$class(JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2, $NO_CLASS_INIT, $Function)
public:
	void init$(JavacFileManager* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* location) override {
		 return $of($nc(inst$)->indexPathsAndContainersByRelativeDirectory($cast($JavaFileManager$Location, location)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2>());
	}
	JavacFileManager* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2, inst$)},
	{}
};
$MethodInfo JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/JavacFileManager;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::*)(JavacFileManager*)>(&JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::class$ = nullptr;

class JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3 : public $Function {
	$class(JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3, $NO_CLASS_INIT, $Function)
public:
	void init$(JavacFileManager* inst, $JavaFileManager$Location* location) {
		$set(this, inst$, inst);
		$set(this, location, location);
	}
	virtual $Object* apply(Object$* d) override {
		 return $of($nc(inst$)->lambda$pathsAndContainers$1(location, $cast($RelativePath$RelativeDirectory, d)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3>());
	}
	JavacFileManager* inst$ = nullptr;
	$JavaFileManager$Location* location = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3, inst$)},
	{"location", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, $field(JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3, location)},
	{}
};
$MethodInfo JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/JavacFileManager;Ljavax/tools/JavaFileManager$Location;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::*)(JavacFileManager*,$JavaFileManager$Location*)>(&JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::class$ = nullptr;

class JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4 : public $Function {
	$class(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4, $NO_CLASS_INIT, $Function)
public:
	void init$($1List* nonIndexingContainers) {
		$set(this, nonIndexingContainers, nonIndexingContainers);
	}
	virtual $Object* apply(Object$* d) override {
		 return $of(JavacFileManager::lambda$indexPathsAndContainersByRelativeDirectory$2(nonIndexingContainers, $cast($RelativePath$RelativeDirectory, d)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4>());
	}
	$1List* nonIndexingContainers = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::fieldInfos[2] = {
	{"nonIndexingContainers", "Ljava/util/List;", nullptr, $PUBLIC, $field(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4, nonIndexingContainers)},
	{}
};
$MethodInfo JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::*)($1List*)>(&JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::class$ = nullptr;

class JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5 : public $Consumer {
	$class(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* pathAndContainerList) override {
		JavacFileManager::lambda$indexPathsAndContainersByRelativeDirectory$3($cast($1List, pathAndContainerList));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5::*)()>(&JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5::class$ = nullptr;

class JavacFileManager$$Lambda$lambda$asPaths$4$6 : public $Iterable {
	$class(JavacFileManager$$Lambda$lambda$asPaths$4$6, $NO_CLASS_INIT, $Iterable)
public:
	void init$($Iterable* files) {
		$set(this, files, files);
	}
	virtual $Iterator* iterator() override {
		 return JavacFileManager::lambda$asPaths$4(files);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFileManager$$Lambda$lambda$asPaths$4$6>());
	}
	$Iterable* files = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacFileManager$$Lambda$lambda$asPaths$4$6::fieldInfos[2] = {
	{"files", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(JavacFileManager$$Lambda$lambda$asPaths$4$6, files)},
	{}
};
$MethodInfo JavacFileManager$$Lambda$lambda$asPaths$4$6::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Iterable;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$$Lambda$lambda$asPaths$4$6::*)($Iterable*)>(&JavacFileManager$$Lambda$lambda$asPaths$4$6::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFileManager$$Lambda$lambda$asPaths$4$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.JavacFileManager$$Lambda$lambda$asPaths$4$6",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* JavacFileManager$$Lambda$lambda$asPaths$4$6::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$$Lambda$lambda$asPaths$4$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFileManager$$Lambda$lambda$asPaths$4$6::class$ = nullptr;

class JavacFileManager$$Lambda$lambda$asFiles$5$7 : public $Iterable {
	$class(JavacFileManager$$Lambda$lambda$asFiles$5$7, $NO_CLASS_INIT, $Iterable)
public:
	void init$($Iterable* paths) {
		$set(this, paths, paths);
	}
	virtual $Iterator* iterator() override {
		 return JavacFileManager::lambda$asFiles$5(paths);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacFileManager$$Lambda$lambda$asFiles$5$7>());
	}
	$Iterable* paths = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacFileManager$$Lambda$lambda$asFiles$5$7::fieldInfos[2] = {
	{"paths", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(JavacFileManager$$Lambda$lambda$asFiles$5$7, paths)},
	{}
};
$MethodInfo JavacFileManager$$Lambda$lambda$asFiles$5$7::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Iterable;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$$Lambda$lambda$asFiles$5$7::*)($Iterable*)>(&JavacFileManager$$Lambda$lambda$asFiles$5$7::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacFileManager$$Lambda$lambda$asFiles$5$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.JavacFileManager$$Lambda$lambda$asFiles$5$7",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* JavacFileManager$$Lambda$lambda$asFiles$5$7::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$$Lambda$lambda$asFiles$5$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacFileManager$$Lambda$lambda$asFiles$5$7::class$ = nullptr;

$FieldInfo _JavacFileManager_FieldInfo_[] = {
	{"fsInfo", "Lcom/sun/tools/javac/file/FSInfo;", nullptr, $PRIVATE, $field(JavacFileManager, fsInfo)},
	{"SOURCE_OR_CLASS", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavacFileManager, SOURCE_OR_CLASS)},
	{"symbolFileEnabled", "Z", nullptr, $PROTECTED, $field(JavacFileManager, symbolFileEnabled)},
	{"pathFactory", "Ljavax/tools/StandardJavaFileManager$PathFactory;", nullptr, $PRIVATE, $field(JavacFileManager, pathFactory)},
	{"sortFiles", "Lcom/sun/tools/javac/file/JavacFileManager$SortFiles;", nullptr, $PROTECTED, $field(JavacFileManager, sortFiles)},
	{"pathsAndContainersByLocationAndRelativeDirectory", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/tools/JavaFileManager$Location;Ljava/util/Map<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/List<Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;>;>;>;", $PRIVATE, $field(JavacFileManager, pathsAndContainersByLocationAndRelativeDirectory)},
	{"nonIndexingContainersByLocation", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/tools/JavaFileManager$Location;Ljava/util/List<Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;>;>;", $PRIVATE, $field(JavacFileManager, nonIndexingContainersByLocation)},
	{"containers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/nio/file/Path;Lcom/sun/tools/javac/file/JavacFileManager$Container;>;", $PRIVATE | $FINAL, $field(JavacFileManager, containers)},
	{"MISSING_CONTAINER", "Lcom/sun/tools/javac/file/JavacFileManager$Container;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacFileManager, MISSING_CONTAINER)},
	{"jrtIndex", "Lcom/sun/tools/javac/file/JRTIndex;", nullptr, $PRIVATE, $field(JavacFileManager, jrtIndex)},
	{"NO_FILE_VISIT_OPTIONS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/file/FileVisitOption;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavacFileManager, NO_FILE_VISIT_OPTIONS)},
	{"FOLLOW_LINKS_OPTIONS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/file/FileVisitOption;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavacFileManager, FOLLOW_LINKS_OPTIONS)},
	{"fileSystemIsCaseSensitive", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacFileManager, fileSystemIsCaseSensitive)},
	{}
};

$MethodInfo _JavacFileManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*handleOption", "(Ljava/lang/String;Ljava/util/Iterator;)Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Context;ZLjava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager::*)($Context*,bool,$Charset*)>(&JavacFileManager::init$))},
	{"asFiles", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<Ljava/io/File;>;", $PRIVATE | $STATIC, $method(static_cast<$Iterable*(*)($Iterable*)>(&JavacFileManager::asFiles))},
	{"asPath", "(Ljavax/tools/FileObject;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"asPaths", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/io/File;>;)Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PRIVATE | $STATIC, $method(static_cast<$Iterable*(*)($Iterable*)>(&JavacFileManager::asPaths))},
	{"caseMapCheck", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacFileManager::*)($Path*,$RelativePath*)>(&JavacFileManager::caseMapCheck))},
	{"checkModuleOrientedOrOutputLocation", "(Ljavax/tools/JavaFileManager$Location;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFileManager::*)($JavaFileManager$Location*)>(&JavacFileManager::checkModuleOrientedOrOutputLocation))},
	{"checkNotModuleOrientedLocation", "(Ljavax/tools/JavaFileManager$Location;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFileManager::*)($JavaFileManager$Location*)>(&JavacFileManager::checkNotModuleOrientedLocation))},
	{"checkOutputLocation", "(Ljavax/tools/JavaFileManager$Location;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFileManager::*)($JavaFileManager$Location*)>(&JavacFileManager::checkOutputLocation))},
	{"clearCachesForLocation", "(Ljavax/tools/JavaFileManager$Location;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFileManager::*)($JavaFileManager$Location*)>(&JavacFileManager::clearCachesForLocation))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"contains", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getClassLoader", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{"getClassOutDir", "()Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(static_cast<$Path*(JavacFileManager::*)()>(&JavacFileManager::getClassOutDir))},
	{"getContainer", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/file/JavacFileManager$Container;", nullptr, $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"getFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileForInput", "(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/file/RelativePath$RelativeFile;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(static_cast<$JavaFileObject*(JavacFileManager::*)($JavaFileManager$Location*,$RelativePath$RelativeFile*)>(&JavacFileManager::getFileForInput)), "java.io.IOException"},
	{"getFileForOutput", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/String;Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/file/RelativePath$RelativeFile;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(static_cast<$JavaFileObject*(JavacFileManager::*)($JavaFileManager$Location*,$RelativePath$RelativeFile*,$FileObject*)>(&JavacFileManager::getFileForOutput)), "java.io.IOException"},
	{"getJRTIndex", "()Lcom/sun/tools/javac/file/JRTIndex;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$JRTIndex*(JavacFileManager::*)()>(&JavacFileManager::getJRTIndex))},
	{"getJavaFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getJavaFileObject", "(Ljava/lang/String;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"getJavaFileObject", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"getJavaFileObjects", "([Ljava/lang/String;)Ljava/lang/Iterable;", "([Ljava/lang/String;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjects", "([Ljava/io/File;)Ljava/lang/Iterable;", "([Ljava/io/File;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjects", "([Ljava/nio/file/Path;)Ljava/lang/Iterable;", "([Ljava/nio/file/Path;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC | $TRANSIENT},
	{"getJavaFileObjectsFromFiles", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/io/File;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getJavaFileObjectsFromPaths", "(Ljava/util/Collection;)Ljava/lang/Iterable;", "(Ljava/util/Collection<+Ljava/nio/file/Path;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getJavaFileObjectsFromStrings", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<Ljava/lang/String;>;)Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"getLocation", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<+Ljava/io/File;>;", $PUBLIC},
	{"getLocationAsPaths", "(Ljavax/tools/JavaFileManager$Location;)Ljava/util/Collection;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/util/Collection<+Ljava/nio/file/Path;>;", $PUBLIC},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getMessage", "(Ljava/io/IOException;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($IOException*)>(&JavacFileManager::getMessage))},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<$Path*(JavacFileManager::*)($String*,$StringArray*)>(&JavacFileManager::getPath))},
	{"getRelativeName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($File*)>(&JavacFileManager::getRelativeName))},
	{"getServiceLoader", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class;)Ljava/util/ServiceLoader;", "<S:Ljava/lang/Object;>(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Class<TS;>;)Ljava/util/ServiceLoader<TS;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getSourceOutDir", "()Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(static_cast<$Path*(JavacFileManager::*)()>(&JavacFileManager::getSourceOutDir))},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"hasExplicitLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, $PROTECTED},
	{"hasLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, $PUBLIC},
	{"indexPathsAndContainersByRelativeDirectory", "(Ljavax/tools/JavaFileManager$Location;)Ljava/util/Map;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/util/Map<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/List<Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;>;>;", $PRIVATE, $method(static_cast<$Map*(JavacFileManager::*)($JavaFileManager$Location*)>(&JavacFileManager::indexPathsAndContainersByRelativeDirectory))},
	{"inferBinaryName", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"inferModuleName", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isRelativeUri", "(Ljava/net/URI;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($URI*)>(&JavacFileManager::isRelativeUri))},
	{"isRelativeUri", "(Ljava/lang/String;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($String*)>(&JavacFileManager::isRelativeUri))},
	{"isSameFile", "(Ljavax/tools/FileObject;Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC},
	{"*isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"isSymbolFileEnabled", "()Z", nullptr, $PUBLIC},
	{"isValidFile", "(Ljava/lang/String;Ljava/util/Set;)Z", "(Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;)Z", $PRIVATE, $method(static_cast<bool(JavacFileManager::*)($String*,$Set*)>(&JavacFileManager::isValidFile))},
	{"isValidName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&JavacFileManager::isValidName))},
	{"lambda$asFiles$5", "(Ljava/lang/Iterable;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Iterable*)>(&JavacFileManager::lambda$asFiles$5))},
	{"lambda$asPaths$4", "(Ljava/lang/Iterable;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Iterable*)>(&JavacFileManager::lambda$asPaths$4))},
	{"lambda$indexPathsAndContainersByRelativeDirectory$2", "(Ljava/util/List;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$1List*(*)($1List*,$RelativePath$RelativeDirectory*)>(&JavacFileManager::lambda$indexPathsAndContainersByRelativeDirectory$2))},
	{"lambda$indexPathsAndContainersByRelativeDirectory$3", "(Ljava/util/List;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($1List*)>(&JavacFileManager::lambda$indexPathsAndContainersByRelativeDirectory$3))},
	{"lambda$pathsAndContainers$1", "(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;)Ljava/util/List;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$1List*(JavacFileManager::*)($JavaFileManager$Location*,$RelativePath$RelativeDirectory*)>(&JavacFileManager::lambda$pathsAndContainers$1))},
	{"lambda$preRegister$0", "(Lcom/sun/tools/javac/util/Context;)Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavaFileManager*(*)($Context*)>(&JavacFileManager::lambda$preRegister$0))},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;Z)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"listLocationsForModules", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"pathsAndContainers", "(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;)Ljava/util/List;", "(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;)Ljava/util/List<Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;>;", $PRIVATE, $method(static_cast<$1List*(JavacFileManager::*)($JavaFileManager$Location*,$RelativePath$RelativeDirectory*)>(&JavacFileManager::pathsAndContainers)), "java.io.IOException"},
	{"pathsAndContainers", "(Ljavax/tools/JavaFileManager$Location;)Ljava/util/List;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/util/List<Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;>;", $PRIVATE, $method(static_cast<$1List*(JavacFileManager::*)($JavaFileManager$Location*)>(&JavacFileManager::pathsAndContainers))},
	{"preRegister", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Context*)>(&JavacFileManager::preRegister))},
	{"printAscii", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&JavacFileManager::printAscii))},
	{"setContext", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC},
	{"setLocation", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable<+Ljava/io/File;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Collection;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Collection<+Ljava/nio/file/Path;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setLocationFromPaths", "(Ljavax/tools/JavaFileManager$Location;Ljava/util/Collection;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/util/Collection<+Ljava/nio/file/Path;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setPathFactory", "(Ljavax/tools/StandardJavaFileManager$PathFactory;)V", nullptr, $PUBLIC},
	{"setSymbolFileEnabled", "(Z)V", nullptr, $PUBLIC},
	{"testName", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,bool,bool)>(&JavacFileManager::testName))},
	{"toArray", "(Ljava/nio/CharBuffer;)[C", nullptr, $PUBLIC | $STATIC, $method(static_cast<$chars*(*)($CharBuffer*)>(&JavacFileManager::toArray))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateClassName", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&JavacFileManager::validateClassName))},
	{"validatePackageName", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&JavacFileManager::validatePackageName))},
	{}
};

$InnerClassInfo _JavacFileManager_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$PathAndContainer", "com.sun.tools.javac.file.JavacFileManager", "PathAndContainer", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer", "com.sun.tools.javac.file.JavacFileManager", "ArchiveContainer", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.file.JavacFileManager$DirectoryContainer", "com.sun.tools.javac.file.JavacFileManager", "DirectoryContainer", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.file.JavacFileManager$JRTImageContainer", "com.sun.tools.javac.file.JavacFileManager", "JRTImageContainer", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.file.JavacFileManager$Container", "com.sun.tools.javac.file.JavacFileManager", "Container", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.file.JavacFileManager$SortFiles", "com.sun.tools.javac.file.JavacFileManager", "SortFiles", $PROTECTED | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.file.JavacFileManager$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.file.JavacFileManager$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.file.JavacFileManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacFileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager",
	"com.sun.tools.javac.file.BaseFileManager",
	"javax.tools.StandardJavaFileManager",
	_JavacFileManager_FieldInfo_,
	_JavacFileManager_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager$PathAndContainer,com.sun.tools.javac.file.JavacFileManager$ArchiveContainer,com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$2,com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$1,com.sun.tools.javac.file.JavacFileManager$DirectoryContainer,com.sun.tools.javac.file.JavacFileManager$JRTImageContainer,com.sun.tools.javac.file.JavacFileManager$Container,com.sun.tools.javac.file.JavacFileManager$SortFiles,com.sun.tools.javac.file.JavacFileManager$SortFiles$2,com.sun.tools.javac.file.JavacFileManager$SortFiles$1,com.sun.tools.javac.file.JavacFileManager$2,com.sun.tools.javac.file.JavacFileManager$3,com.sun.tools.javac.file.JavacFileManager$1"
};

$Object* allocate$JavacFileManager($Class* clazz) {
	return $of($alloc(JavacFileManager));
}

bool JavacFileManager::handleOption($String* current, $Iterator* remaining) {
	 return this->$BaseFileManager::handleOption(current, remaining);
}

int32_t JavacFileManager::isSupportedOption($String* option) {
	 return this->$BaseFileManager::isSupportedOption(option);
}

int32_t JavacFileManager::hashCode() {
	 return this->$BaseFileManager::hashCode();
}

bool JavacFileManager::equals(Object$* arg0) {
	 return this->$BaseFileManager::equals(arg0);
}

$Object* JavacFileManager::clone() {
	 return this->$BaseFileManager::clone();
}

$String* JavacFileManager::toString() {
	 return this->$BaseFileManager::toString();
}

void JavacFileManager::finalize() {
	this->$BaseFileManager::finalize();
}

$Set* JavacFileManager::SOURCE_OR_CLASS = nullptr;
$JavacFileManager$Container* JavacFileManager::MISSING_CONTAINER = nullptr;
$Set* JavacFileManager::NO_FILE_VISIT_OPTIONS = nullptr;
$Set* JavacFileManager::FOLLOW_LINKS_OPTIONS = nullptr;
bool JavacFileManager::fileSystemIsCaseSensitive = false;

$chars* JavacFileManager::toArray($CharBuffer* buffer) {
	$init(JavacFileManager);
	$useLocalCurrentObjectStackCache();
	if ($nc(buffer)->hasArray()) {
		return $cast($chars, $nc($($nc($(buffer->compact()))->flip()))->array());
	} else {
		return $nc($(buffer->toString()))->toCharArray();
	}
}

void JavacFileManager::preRegister($Context* context) {
	$init(JavacFileManager);
	$load($JavaFileManager);
	$nc(context)->put($JavaFileManager::class$, static_cast<$Context$Factory*>($$new(JavacFileManager$$Lambda$lambda$preRegister$0$1)));
}

void JavacFileManager::init$($Context* context, bool register$, $Charset* charset) {
	$BaseFileManager::init$(charset);
	$set(this, pathFactory, static_cast<$StandardJavaFileManager$PathFactory*>($new(JavacFileManager$$Lambda$get)));
	$set(this, pathsAndContainersByLocationAndRelativeDirectory, $new($HashMap));
	$set(this, nonIndexingContainersByLocation, $new($HashMap));
	$set(this, containers, $new($HashMap));
	if (register$) {
		$load($JavaFileManager);
		$nc(context)->put($JavaFileManager::class$, $of(this));
	}
	setContext(context);
}

void JavacFileManager::setContext($Context* context) {
	$BaseFileManager::setContext(context);
	$set(this, fsInfo, $FSInfo::instance(context));
	this->symbolFileEnabled = !$nc(this->options)->isSet("ignore.symbol.file"_s);
	$var($String, sf, $nc(this->options)->get("sortFiles"_s));
	if (sf != nullptr) {
		$init($JavacFileManager$SortFiles);
		$set(this, sortFiles, sf->equals("reverse"_s) ? $JavacFileManager$SortFiles::REVERSE : $JavacFileManager$SortFiles::FORWARD);
	}
}

void JavacFileManager::setPathFactory($StandardJavaFileManager$PathFactory* f) {
	$set(this, pathFactory, $cast($StandardJavaFileManager$PathFactory, $Objects::requireNonNull(f)));
	$nc(this->locations)->setPathFactory(f);
}

$Path* JavacFileManager::getPath($String* first, $StringArray* more) {
	return $nc(this->pathFactory)->getPath(first, more);
}

void JavacFileManager::setSymbolFileEnabled(bool b) {
	this->symbolFileEnabled = b;
}

bool JavacFileManager::isSymbolFileEnabled() {
	return this->symbolFileEnabled;
}

$JavaFileObject* JavacFileManager::getJavaFileObject($String* name) {
	$useLocalCurrentObjectStackCache();
	return $cast($JavaFileObject, $nc($($nc($(getJavaFileObjects($$new($StringArray, {name}))))->iterator()))->next());
}

$JavaFileObject* JavacFileManager::getJavaFileObject($Path* file) {
	$useLocalCurrentObjectStackCache();
	return $cast($JavaFileObject, $nc($($nc($(getJavaFileObjects($$new($PathArray, {file}))))->iterator()))->next());
}

$JavaFileObject* JavacFileManager::getFileForOutput($String* classname, $JavaFileObject$Kind* kind, $JavaFileObject* sibling) {
	$init($StandardLocation);
	return getJavaFileForOutput($StandardLocation::CLASS_OUTPUT, classname, kind, sibling);
}

$Iterable* JavacFileManager::getJavaFileObjectsFromStrings($Iterable* names) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, paths, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(names)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, name, $cast($String, i$->next()));
			paths->append($(getPath($cast($String, $(nullCheck($of(name)))), $$new($StringArray, 0))));
		}
	}
	return getJavaFileObjectsFromPaths($(static_cast<$Collection*>(static_cast<$AbstractCollection*>(paths->toList()))));
}

$Iterable* JavacFileManager::getJavaFileObjects($StringArray* names) {
	$useLocalCurrentObjectStackCache();
	return getJavaFileObjectsFromStrings($($Arrays::asList($cast($StringArray, $(nullCheck($of(names)))))));
}

bool JavacFileManager::isValidName($String* name) {
	$init(JavacFileManager);
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, $nc(name)->split("\\."_s, -1));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				if (!$SourceVersion::isIdentifier(s)) {
					return false;
				}
			}
		}
	}
	return true;
}

void JavacFileManager::validateClassName($String* className) {
	$init(JavacFileManager);
	if (!isValidName(className)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid class name: "_s, className}));
	}
}

void JavacFileManager::validatePackageName($String* packageName) {
	$init(JavacFileManager);
	bool var$0 = $nc(packageName)->length() > 0;
	if (var$0 && !isValidName(packageName)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid packageName name: "_s, packageName}));
	}
}

void JavacFileManager::testName($String* name, bool isValidPackageName, bool isValidClassName) {
	$init(JavacFileManager);
	$useLocalCurrentObjectStackCache();
	try {
		validatePackageName(name);
		if (!isValidPackageName) {
			$throwNew($AssertionError, $of($$str({"Invalid package name accepted: "_s, name})));
		}
		printAscii("Valid package name: \"%s\""_s, $$new($ObjectArray, {$of(name)}));
	} catch ($IllegalArgumentException& e) {
		if (isValidPackageName) {
			$throwNew($AssertionError, $of($$str({"Valid package name rejected: "_s, name})));
		}
		printAscii("Invalid package name: \"%s\""_s, $$new($ObjectArray, {$of(name)}));
	}
	try {
		validateClassName(name);
		if (!isValidClassName) {
			$throwNew($AssertionError, $of($$str({"Invalid class name accepted: "_s, name})));
		}
		printAscii("Valid class name: \"%s\""_s, $$new($ObjectArray, {$of(name)}));
	} catch ($IllegalArgumentException& e) {
		if (isValidClassName) {
			$throwNew($AssertionError, $of($$str({"Valid class name rejected: "_s, name})));
		}
		printAscii("Invalid class name: \"%s\""_s, $$new($ObjectArray, {$of(name)}));
	}
}

void JavacFileManager::printAscii($String* format, $ObjectArray* args) {
	$init(JavacFileManager);
	$useLocalCurrentObjectStackCache();
	$var($String, message, nullptr);
	try {
		$var($String, ascii, "US-ASCII"_s);
		$assign(message, $new($String, $($nc($($String::format(nullptr, format, args)))->getBytes(ascii)), ascii));
	} catch ($UnsupportedEncodingException& ex) {
		$throwNew($AssertionError, $of(ex));
	}
	$nc($System::out)->println(message);
}

$JavacFileManager$Container* JavacFileManager::getContainer($Path* path) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($JavacFileManager$Container, fs, $cast($JavacFileManager$Container, $nc(this->containers)->get(path)));
		if (fs != nullptr) {
			return fs;
		}
		bool var$0 = $nc(this->fsInfo)->isFile(path);
		$init($Locations);
		if (var$0 && $nc(path)->equals($Locations::thisSystemModules)) {
			$nc(this->containers)->put(path, $assign(fs, $new($JavacFileManager$JRTImageContainer, this)));
			return fs;
		}
		$var($Path, realPath, $nc(this->fsInfo)->getCanonicalFile(path));
		$assign(fs, $cast($JavacFileManager$Container, $nc(this->containers)->get(realPath)));
		if (fs != nullptr) {
			$nc(this->containers)->put(path, fs);
			return fs;
		}
		$var($BasicFileAttributes, attr, nullptr);
		try {
			$load($BasicFileAttributes);
			$assign(attr, $Files::readAttributes(realPath, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0)));
		} catch ($IOException& ex) {
			$assign(fs, JavacFileManager::MISSING_CONTAINER);
		}
		if (attr != nullptr) {
			if (attr->isDirectory()) {
				$assign(fs, $new($JavacFileManager$DirectoryContainer, this, realPath));
			} else {
				try {
					$assign(fs, $new($JavacFileManager$ArchiveContainer, this, path));
				} catch ($ProviderNotFoundException& ex) {
					$throwNew($IOException, static_cast<$Throwable*>(ex));
				} catch ($SecurityException& ex) {
					$throwNew($IOException, static_cast<$Throwable*>(ex));
				}
			}
		}
		$nc(this->containers)->put(realPath, fs);
		$nc(this->containers)->put(path, fs);
		return fs;
	}
}

$JRTIndex* JavacFileManager::getJRTIndex() {
	$synchronized(this) {
		if (this->jrtIndex == nullptr) {
			$set(this, jrtIndex, $JRTIndex::getSharedInstance());
		}
		return this->jrtIndex;
	}
}

bool JavacFileManager::isValidFile($String* s, $Set* fileKinds) {
	$JavaFileObject$Kind* kind = getKind(s);
	return $nc(fileKinds)->contains(kind);
}

bool JavacFileManager::caseMapCheck($Path* f, $RelativePath* name) {
	$useLocalCurrentObjectStackCache();
	if (JavacFileManager::fileSystemIsCaseSensitive) {
		return true;
	}
	$var($String, path, nullptr);
	char16_t sep = 0;
	try {
		$init($LinkOption);
		$assign(path, $nc($($nc(f)->toRealPath($$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))))->toString());
		sep = $nc($($nc($(f->getFileSystem()))->getSeparator()))->charAt(0);
	} catch ($IOException& ex) {
		return false;
	}
	$var($chars, pcs, $nc(path)->toCharArray());
	$var($chars, ncs, $nc($nc(name)->path)->toCharArray());
	int32_t i = pcs->length - 1;
	int32_t j = ncs->length - 1;
	while (i >= 0 && j >= 0) {
		while (i >= 0 && pcs->get(i) == sep) {
			--i;
		}
		while (j >= 0 && ncs->get(j) == u'/') {
			--j;
		}
		if (i >= 0 && j >= 0) {
			if (pcs->get(i) != ncs->get(j)) {
				return false;
			}
			--i;
			--j;
		}
	}
	return j < 0;
}

void JavacFileManager::flush() {
	$nc(this->contentCache)->clear();
	$nc(this->pathsAndContainersByLocationAndRelativeDirectory)->clear();
	$nc(this->nonIndexingContainersByLocation)->clear();
}

void JavacFileManager::close() {
	$useLocalCurrentObjectStackCache();
	if (this->deferredCloseTimeout > 0) {
		deferredClose();
		return;
	}
	$nc(this->locations)->close();
	{
		$var($Iterator, i$, $nc($($nc(this->containers)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavacFileManager$Container, container, $cast($JavacFileManager$Container, i$->next()));
			{
				$nc(container)->close();
			}
		}
	}
	$nc(this->containers)->clear();
	$nc(this->pathsAndContainersByLocationAndRelativeDirectory)->clear();
	$nc(this->nonIndexingContainersByLocation)->clear();
	$nc(this->contentCache)->clear();
}

$ClassLoader* JavacFileManager::getClassLoader($JavaFileManager$Location* location) {
	$useLocalCurrentObjectStackCache();
	checkNotModuleOrientedLocation(location);
	$var($Iterable, path, getLocation(location));
	if (path == nullptr) {
		return nullptr;
	}
	$var($ListBuffer, lb, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(path)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			{
				try {
					lb->append($($nc($($nc(f)->toURI()))->toURL()));
				} catch ($MalformedURLException& e) {
					$throwNew($AssertionError, $of(e));
				}
			}
		}
	}
	return getClassLoader($fcast($URLArray, $(lb->toArray($$new($URLArray, lb->size())))));
}

$Iterable* JavacFileManager::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	$useLocalCurrentObjectStackCache();
	checkNotModuleOrientedLocation(location);
	nullCheck($of(packageName));
	nullCheck(static_cast<$Collection*>(kinds));
	$var($RelativePath$RelativeDirectory, subdirectory, $RelativePath$RelativeDirectory::forPackage(packageName));
	$var($ListBuffer, results, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($(pathsAndContainers(location, subdirectory)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavacFileManager$PathAndContainer, pathAndContainer, $cast($JavacFileManager$PathAndContainer, i$->next()));
			{
				$var($Path, directory, $nc(pathAndContainer)->path);
				$var($JavacFileManager$Container, container, pathAndContainer->container);
				$nc(container)->list(directory, subdirectory, kinds, recurse, results);
			}
		}
	}
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(results->toList())));
}

$String* JavacFileManager::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file) {
	$useLocalCurrentObjectStackCache();
	checkNotModuleOrientedLocation(location);
	$Objects::requireNonNull(file);
	$var($Iterable, path, getLocationAsPaths(location));
	if (path == nullptr) {
		return nullptr;
	}
	{
		$var($PathFileObject, pathFileObject, nullptr);
		bool var$0 = $instanceOf($PathFileObject, file);
		if (var$0) {
			$assign(pathFileObject, $cast($PathFileObject, file));
			var$0 = true;
		}
		if (var$0) {
			return $nc(pathFileObject)->inferBinaryName(path);
		} else {
			$throwNew($IllegalArgumentException, $($of(file)->getClass()->getName()));
		}
	}
}

bool JavacFileManager::isSameFile($FileObject* a, $FileObject* b) {
	$useLocalCurrentObjectStackCache();
	nullCheck($of(a));
	nullCheck($of(b));
	{
		$var($PathFileObject, pathFileObjectA, nullptr);
		$var($PathFileObject, pathFileObjectB, nullptr);
		bool var$1 = $instanceOf($PathFileObject, a);
		if (var$1) {
			$assign(pathFileObjectA, $cast($PathFileObject, a));
			var$1 = true;
		}
		bool var$0 = var$1;
		if (var$0) {
			bool var$2 = $instanceOf($PathFileObject, b);
			if (var$2) {
				$assign(pathFileObjectB, $cast($PathFileObject, b));
				var$2 = true;
			}
			var$0 = var$2;
		}
		if (var$0) {
			return $nc(pathFileObjectA)->isSameFile(pathFileObjectB);
		}
	}
	return $nc($of(a))->equals(b);
}

bool JavacFileManager::hasLocation($JavaFileManager$Location* location) {
	nullCheck($of(location));
	return $nc(this->locations)->hasLocation(location);
}

bool JavacFileManager::hasExplicitLocation($JavaFileManager$Location* location) {
	nullCheck($of(location));
	return $nc(this->locations)->hasExplicitLocation(location);
}

$JavaFileObject* JavacFileManager::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	$useLocalCurrentObjectStackCache();
	checkNotModuleOrientedLocation(location);
	nullCheck($of(className));
	nullCheck($of(kind));
	if (!$nc(JavacFileManager::SOURCE_OR_CLASS)->contains(kind)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid kind: "_s, kind}));
	}
	return getFileForInput(location, $($RelativePath$RelativeFile::forClass(className, kind)));
}

$FileObject* JavacFileManager::getFileForInput($JavaFileManager$Location* location, $String* packageName, $String* relativeName) {
	$useLocalCurrentObjectStackCache();
	checkNotModuleOrientedLocation(location);
	nullCheck($of(packageName));
	if (!isRelativeUri(relativeName)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid relative name: "_s, relativeName}));
	}
	$var($RelativePath$RelativeFile, name, $nc(packageName)->length() == 0 ? $new($RelativePath$RelativeFile, relativeName) : $new($RelativePath$RelativeFile, $($RelativePath$RelativeDirectory::forPackage(packageName)), relativeName));
	return getFileForInput(location, name);
}

$JavaFileObject* JavacFileManager::getFileForInput($JavaFileManager$Location* location, $RelativePath$RelativeFile* name) {
	$useLocalCurrentObjectStackCache();
	$var($Iterable, path, getLocationAsPaths(location));
	if (path == nullptr) {
		return nullptr;
	}
	{
		$var($Iterator, i$, $nc(path)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, file, $cast($Path, i$->next()));
			{
				$var($JavaFileObject, fo, $nc($(getContainer(file)))->getFileObject(file, name));
				if (fo != nullptr) {
					return fo;
				}
			}
		}
	}
	return nullptr;
}

$JavaFileObject* JavacFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	checkOutputLocation(location);
	nullCheck($of(className));
	nullCheck($of(kind));
	if (!$nc(JavacFileManager::SOURCE_OR_CLASS)->contains(kind)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid kind: "_s, kind}));
	}
	return getFileForOutput(location, $($RelativePath$RelativeFile::forClass(className, kind)), sibling);
}

$FileObject* JavacFileManager::getFileForOutput($JavaFileManager$Location* location, $String* packageName, $String* relativeName, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	checkOutputLocation(location);
	nullCheck($of(packageName));
	if (!isRelativeUri(relativeName)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid relative name: "_s, relativeName}));
	}
	$var($RelativePath$RelativeFile, name, $nc(packageName)->length() == 0 ? $new($RelativePath$RelativeFile, relativeName) : $new($RelativePath$RelativeFile, $($RelativePath$RelativeDirectory::forPackage(packageName)), relativeName));
	return getFileForOutput(location, name, sibling);
}

$JavaFileObject* JavacFileManager::getFileForOutput($JavaFileManager$Location* location, $RelativePath$RelativeFile* fileName, $FileObject* sibling) {
	$useLocalCurrentObjectStackCache();
	$var($Path, dir, nullptr);
	$init($StandardLocation);
	if ($equals(location, $StandardLocation::CLASS_OUTPUT)) {
		if (getClassOutDir() != nullptr) {
			$assign(dir, getClassOutDir());
		} else {
			$var($String, baseName, $nc(fileName)->basename());
			{
				$var($PathFileObject, pathFileObject, nullptr);
				bool var$0 = sibling != nullptr;
				if (var$0) {
					bool var$1 = $instanceOf($PathFileObject, sibling);
					if (var$1) {
						$assign(pathFileObject, $cast($PathFileObject, sibling));
						var$1 = true;
					}
					var$0 = var$1;
				}
				if (var$0) {
					return $nc(pathFileObject)->getSibling(baseName);
				} else {
					$var($Path, p, getPath(baseName, $$new($StringArray, 0)));
					$var($Path, real, $nc(this->fsInfo)->getCanonicalFile(p));
					return $PathFileObject::forSimplePath(this, real, p);
				}
			}
		}
	} else {
		if ($equals(location, $StandardLocation::SOURCE_OUTPUT)) {
			$assign(dir, getSourceOutDir() != nullptr ? getSourceOutDir() : getClassOutDir());
		} else {
			$var($Iterable, path, $nc(this->locations)->getLocation(location));
			$assign(dir, nullptr);
			{
				$var($Iterator, i$, $nc(path)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Path, f, $cast($Path, i$->next()));
					{
						$assign(dir, f);
						break;
					}
				}
			}
		}
	}
	try {
		if (dir == nullptr) {
			$assign(dir, getPath($($System::getProperty("user.dir"_s)), $$new($StringArray, 0)));
		}
		$var($Path, path, $nc(fileName)->resolveAgainst($($nc(this->fsInfo)->getCanonicalFile(dir))));
		return $PathFileObject::forDirectoryPath(this, path, dir, fileName);
	} catch ($InvalidPathException& e) {
		$throwNew($IOException, $$str({"bad filename "_s, fileName}), e);
	}
	$shouldNotReachHere();
}

$Iterable* JavacFileManager::getJavaFileObjectsFromFiles($Iterable* files) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, result, nullptr);
	{
		$var($Collection, collection, nullptr);
		bool var$0 = $instanceOf($Collection, files);
		if (var$0) {
			$assign(collection, $cast($Collection, files));
			var$0 = true;
		}
		if (var$0) {
			$assign(result, $new($ArrayList, $nc(collection)->size()));
		} else {
			$assign(result, $new($ArrayList));
		}
	}
	{
		$var($Iterator, i$, $nc(files)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			{
				$Objects::requireNonNull(f);
				$var($Path, p, f->toPath());
				$nc(result)->add($($PathFileObject::forSimplePath(this, $($nc(this->fsInfo)->getCanonicalFile(p)), p)));
			}
		}
	}
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(result))));
}

$Iterable* JavacFileManager::getJavaFileObjectsFromPaths($Collection* paths) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, result, nullptr);
	if (paths != nullptr) {
		$assign(result, $new($ArrayList, paths->size()));
		{
			$var($Iterator, i$, paths->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Path, p, $cast($Path, i$->next()));
				result->add($($PathFileObject::forSimplePath(this, $($nc(this->fsInfo)->getCanonicalFile(p)), p)));
			}
		}
	} else {
		$assign(result, $new($ArrayList));
	}
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(result))));
}

$Iterable* JavacFileManager::getJavaFileObjects($FileArray* files) {
	$useLocalCurrentObjectStackCache();
	return getJavaFileObjectsFromFiles($($Arrays::asList($cast($FileArray, $(nullCheck($of(files)))))));
}

$Iterable* JavacFileManager::getJavaFileObjects($PathArray* paths) {
	$useLocalCurrentObjectStackCache();
	return getJavaFileObjectsFromPaths($(static_cast<$Collection*>($Arrays::asList($cast($PathArray, $(nullCheck($of(paths))))))));
}

void JavacFileManager::setLocation($JavaFileManager$Location* location, $Iterable* searchpath) {
	nullCheck($of(location));
	$nc(this->locations)->setLocation(location, $(asPaths(searchpath)));
	clearCachesForLocation(location);
}

void JavacFileManager::setLocationFromPaths($JavaFileManager$Location* location, $Collection* searchpath) {
	nullCheck($of(location));
	$nc(this->locations)->setLocation(location, $(nullCheck(searchpath)));
	clearCachesForLocation(location);
}

$Iterable* JavacFileManager::getLocation($JavaFileManager$Location* location) {
	nullCheck($of(location));
	return asFiles($($nc(this->locations)->getLocation(location)));
}

$Iterable* JavacFileManager::getLocationAsPaths($JavaFileManager$Location* location) {
	nullCheck($of(location));
	return $nc(this->locations)->getLocation(location);
}

$1List* JavacFileManager::pathsAndContainers($JavaFileManager$Location* location, $RelativePath$RelativeDirectory* relativeDirectory) {
	$useLocalCurrentObjectStackCache();
	try {
		return $cast($1List, $nc(($cast($Map, $($nc(this->pathsAndContainersByLocationAndRelativeDirectory)->computeIfAbsent(location, static_cast<$Function*>($$new(JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2, this)))))))->computeIfAbsent(relativeDirectory, static_cast<$Function*>($$new(JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3, this, location))));
	} catch ($UncheckedIOException& e) {
		$throw($($cast($IOException, e->getCause())));
	}
	$shouldNotReachHere();
}

$Map* JavacFileManager::indexPathsAndContainersByRelativeDirectory($JavaFileManager$Location* location) {
	$useLocalCurrentObjectStackCache();
	$var($Map, result, $new($HashMap));
	$var($1List, allPathsAndContainers, pathsAndContainers(location));
	$var($1List, nonIndexingContainers, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(allPathsAndContainers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavacFileManager$PathAndContainer, pathAndContainer, $cast($JavacFileManager$PathAndContainer, i$->next()));
			{
				if (!$nc($nc(pathAndContainer)->container)->maintainsDirectoryIndex()) {
					nonIndexingContainers->add(pathAndContainer);
				}
			}
		}
	}
	{
		$var($Iterator, i$, allPathsAndContainers->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavacFileManager$PathAndContainer, pathAndContainer, $cast($JavacFileManager$PathAndContainer, i$->next()));
			{
				$var($JavacFileManager$Container, container, $nc(pathAndContainer)->container);
				if ($nc(container)->maintainsDirectoryIndex()) {
					{
						$var($Iterator, i$, $nc($(container->indexedDirectories()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($RelativePath$RelativeDirectory, directory, $cast($RelativePath$RelativeDirectory, i$->next()));
							{
								$nc(($cast($1List, $(result->computeIfAbsent(directory, static_cast<$Function*>($$new(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4, nonIndexingContainers)))))))->add(pathAndContainer);
							}
						}
					}
				}
			}
		}
	}
	$nc(this->nonIndexingContainersByLocation)->put(location, nonIndexingContainers);
	$nc($(result->values()))->forEach(static_cast<$Consumer*>($$new(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5)));
	return result;
}

$1List* JavacFileManager::pathsAndContainers($JavaFileManager$Location* location) {
	$useLocalCurrentObjectStackCache();
	$var($Collection, paths, $cast($Collection, getLocationAsPaths(location)));
	if (paths == nullptr) {
		return $List::nil();
	}
	$var($1List, pathsAndContainers, $new($ArrayList, $nc(paths)->size()));
	{
		$var($Iterator, i$, $nc(paths)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, path, $cast($Path, i$->next()));
			{
				$var($JavacFileManager$Container, container, nullptr);
				try {
					$assign(container, getContainer(path));
				} catch ($IOException& e) {
					$throwNew($UncheckedIOException, e);
				}
				pathsAndContainers->add($$new($JavacFileManager$PathAndContainer, path, container, pathsAndContainers->size()));
			}
		}
	}
	return pathsAndContainers;
}

bool JavacFileManager::contains($JavaFileManager$Location* location, $FileObject* fo) {
	nullCheck($of(location));
	nullCheck($of(fo));
	$var($Path, p, asPath(fo));
	return $nc(this->locations)->contains(location, p);
}

$Path* JavacFileManager::getClassOutDir() {
	$init($StandardLocation);
	return $nc(this->locations)->getOutputLocation($StandardLocation::CLASS_OUTPUT);
}

$Path* JavacFileManager::getSourceOutDir() {
	$init($StandardLocation);
	return $nc(this->locations)->getOutputLocation($StandardLocation::SOURCE_OUTPUT);
}

$JavaFileManager$Location* JavacFileManager::getLocationForModule($JavaFileManager$Location* location$renamed, $String* moduleName) {
	$var($JavaFileManager$Location, location, location$renamed);
	checkModuleOrientedOrOutputLocation(location);
	nullCheck($of(moduleName));
	$init($StandardLocation);
	if ($equals(location, $StandardLocation::SOURCE_OUTPUT) && getSourceOutDir() == nullptr) {
		$assign(location, $StandardLocation::CLASS_OUTPUT);
	}
	return $nc(this->locations)->getLocationForModule(location, moduleName);
}

$ServiceLoader* JavacFileManager::getServiceLoader($JavaFileManager$Location* location, $Class* service) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	nullCheck($of(location));
	nullCheck($of(service));
	$nc($($of(this)->getClass()->getModule()))->addUses(service);
	if ($nc(location)->isModuleOrientedLocation()) {
		$var($Collection, paths, $nc(this->locations)->getLocation(location));
		$var($ModuleFinder, finder, $ModuleFinder::of($fcast($PathArray, $($nc(paths)->toArray($$new($PathArray, paths->size()))))));
		$var($ModuleLayer, bootLayer, $ModuleLayer::boot());
		$var($ModuleFinder, var$0, $ModuleFinder::of($$new($PathArray, 0)));
		$var($ModuleFinder, var$1, finder);
		$var($Configuration, cf, $nc($($nc(bootLayer)->configuration()))->resolveAndBind(var$0, var$1, $(static_cast<$Collection*>($Collections::emptySet()))));
		$var($ModuleLayer, layer, bootLayer->defineModulesWithOneLoader(cf, $($ClassLoader::getSystemClassLoader())));
		return $ServiceLoader::load(layer, service);
	} else {
		return $ServiceLoader::load(service, $(getClassLoader(location)));
	}
}

$JavaFileManager$Location* JavacFileManager::getLocationForModule($JavaFileManager$Location* location, $JavaFileObject* fo) {
	$useLocalCurrentObjectStackCache();
	checkModuleOrientedOrOutputLocation(location);
	$var($PathFileObject, pathFileObject, nullptr);
	bool var$0 = $instanceOf($PathFileObject, fo);
	if (var$0) {
		$assign(pathFileObject, $cast($PathFileObject, fo));
		var$0 = true;
	}
	if (!(var$0)) {
		return nullptr;
	}
	$var($Path, p, $Locations::normalize($nc(pathFileObject)->path));
	return $nc(this->locations)->getLocationForModule(location, p);
}

void JavacFileManager::setLocationForModule($JavaFileManager$Location* location, $String* moduleName, $Collection* paths) {
	$useLocalCurrentObjectStackCache();
	nullCheck($of(location));
	checkModuleOrientedOrOutputLocation(location);
	$var($JavaFileManager$Location, var$0, location);
	$var($String, var$1, $cast($String, nullCheck($of(moduleName))));
	$nc(this->locations)->setLocationForModule(var$0, var$1, $(nullCheck(paths)));
	clearCachesForLocation(location);
}

$String* JavacFileManager::inferModuleName($JavaFileManager$Location* location) {
	checkNotModuleOrientedLocation(location);
	return $nc(this->locations)->inferModuleName(location);
}

$Iterable* JavacFileManager::listLocationsForModules($JavaFileManager$Location* location) {
	checkModuleOrientedOrOutputLocation(location);
	return $nc(this->locations)->listLocationsForModules(location);
}

$Path* JavacFileManager::asPath($FileObject* file) {
	$useLocalCurrentObjectStackCache();
	{
		$var($PathFileObject, pathFileObject, nullptr);
		bool var$0 = $instanceOf($PathFileObject, file);
		if (var$0) {
			$assign(pathFileObject, $cast($PathFileObject, file));
			var$0 = true;
		}
		if (var$0) {
			return $nc(pathFileObject)->path;
		} else {
			$throwNew($IllegalArgumentException, $($nc(file)->getName()));
		}
	}
}

bool JavacFileManager::isRelativeUri($URI* uri) {
	$init(JavacFileManager);
	$useLocalCurrentObjectStackCache();
	if ($nc(uri)->isAbsolute()) {
		return false;
	}
	$var($String, path, $nc($($nc(uri)->normalize()))->getPath());
	if ($nc(path)->length() == 0) {
		return false;
	}
	if (!$nc(path)->equals($(uri->getPath()))) {
		return false;
	}
	bool var$1 = $nc(path)->startsWith("/"_s);
	bool var$0 = var$1 || $nc(path)->startsWith("./"_s);
	if (var$0 || $nc(path)->startsWith("../"_s)) {
		return false;
	}
	return true;
}

bool JavacFileManager::isRelativeUri($String* u) {
	$init(JavacFileManager);
	try {
		return isRelativeUri($$new($URI, u));
	} catch ($URISyntaxException& e) {
		return false;
	}
	$shouldNotReachHere();
}

$String* JavacFileManager::getRelativeName($File* file) {
	$init(JavacFileManager);
	$useLocalCurrentObjectStackCache();
	if (!$nc(file)->isAbsolute()) {
		$init($File);
		$var($String, result, $nc($(file->getPath()))->replace($File::separatorChar, u'/'));
		if (isRelativeUri(result)) {
			return result;
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Invalid relative path: "_s, file}));
}

$String* JavacFileManager::getMessage($IOException* e) {
	$init(JavacFileManager);
	$var($String, s, $nc(e)->getLocalizedMessage());
	if (s != nullptr) {
		return s;
	}
	$assign(s, e->getMessage());
	if (s != nullptr) {
		return s;
	}
	return e->toString();
}

void JavacFileManager::checkOutputLocation($JavaFileManager$Location* location) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(location);
	if (!location->isOutputLocation()) {
		$throwNew($IllegalArgumentException, $$str({"location is not an output location: "_s, $(location->getName())}));
	}
}

void JavacFileManager::checkModuleOrientedOrOutputLocation($JavaFileManager$Location* location) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(location);
	bool var$0 = !location->isModuleOrientedLocation();
	if (var$0 && !location->isOutputLocation()) {
		$throwNew($IllegalArgumentException, $$str({"location is not an output location or a module-oriented location: "_s, $(location->getName())}));
	}
}

void JavacFileManager::checkNotModuleOrientedLocation($JavaFileManager$Location* location) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(location);
	if (location->isModuleOrientedLocation()) {
		$throwNew($IllegalArgumentException, $$str({"location is module-oriented: "_s, $(location->getName())}));
	}
}

$Iterable* JavacFileManager::asPaths($Iterable* files) {
	$init(JavacFileManager);
	if (files == nullptr) {
		return nullptr;
	}
	return static_cast<$Iterable*>($new(JavacFileManager$$Lambda$lambda$asPaths$4$6, files));
}

$Iterable* JavacFileManager::asFiles($Iterable* paths) {
	$init(JavacFileManager);
	if (paths == nullptr) {
		return nullptr;
	}
	return static_cast<$Iterable*>($new(JavacFileManager$$Lambda$lambda$asFiles$5$7, paths));
}

bool JavacFileManager::handleOption($Option* option, $String* value) {
	$init($BaseFileManager);
	if ($nc($BaseFileManager::javacFileManagerOptions)->contains(option)) {
		$nc(this->pathsAndContainersByLocationAndRelativeDirectory)->clear();
		$nc(this->nonIndexingContainersByLocation)->clear();
	}
	return $BaseFileManager::handleOption(option, value);
}

void JavacFileManager::clearCachesForLocation($JavaFileManager$Location* location) {
	nullCheck($of(location));
	$nc(this->pathsAndContainersByLocationAndRelativeDirectory)->remove(location);
	$nc(this->nonIndexingContainersByLocation)->remove(location);
}

$Iterator* JavacFileManager::lambda$asFiles$5($Iterable* paths) {
	$init(JavacFileManager);
	return $new($JavacFileManager$3, paths);
}

$Iterator* JavacFileManager::lambda$asPaths$4($Iterable* files) {
	$init(JavacFileManager);
	return $new($JavacFileManager$2, files);
}

void JavacFileManager::lambda$indexPathsAndContainersByRelativeDirectory$3($1List* pathAndContainerList) {
	$init(JavacFileManager);
	$Collections::sort(pathAndContainerList);
}

$1List* JavacFileManager::lambda$indexPathsAndContainersByRelativeDirectory$2($1List* nonIndexingContainers, $RelativePath$RelativeDirectory* d) {
	$init(JavacFileManager);
	return $new($ArrayList, static_cast<$Collection*>(nonIndexingContainers));
}

$1List* JavacFileManager::lambda$pathsAndContainers$1($JavaFileManager$Location* location, $RelativePath$RelativeDirectory* d) {
	return $cast($1List, $nc(this->nonIndexingContainersByLocation)->get(location));
}

$JavaFileManager* JavacFileManager::lambda$preRegister$0($Context* c) {
	$init(JavacFileManager);
	return static_cast<$JavaFileManager*>(static_cast<$BaseFileManager*>($new(JavacFileManager, c, true, nullptr)));
}

void clinit$JavacFileManager($Class* class$) {
	$init($JavaFileObject$Kind);
	$assignStatic(JavacFileManager::SOURCE_OR_CLASS, $Set::of($JavaFileObject$Kind::SOURCE, $JavaFileObject$Kind::CLASS));
	$assignStatic(JavacFileManager::MISSING_CONTAINER, $new($JavacFileManager$1));
	$assignStatic(JavacFileManager::NO_FILE_VISIT_OPTIONS, $Set::of());
	$init($FileVisitOption);
	$assignStatic(JavacFileManager::FOLLOW_LINKS_OPTIONS, $Set::of($of($FileVisitOption::FOLLOW_LINKS)));
	$init($File);
	JavacFileManager::fileSystemIsCaseSensitive = $File::separatorChar == u'/';
}

JavacFileManager::JavacFileManager() {
}

$Class* JavacFileManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacFileManager$$Lambda$get::classInfo$.name)) {
			return JavacFileManager$$Lambda$get::load$(name, initialize);
		}
		if (name->equals(JavacFileManager$$Lambda$lambda$preRegister$0$1::classInfo$.name)) {
			return JavacFileManager$$Lambda$lambda$preRegister$0$1::load$(name, initialize);
		}
		if (name->equals(JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::classInfo$.name)) {
			return JavacFileManager$$Lambda$indexPathsAndContainersByRelativeDirectory$2::load$(name, initialize);
		}
		if (name->equals(JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::classInfo$.name)) {
			return JavacFileManager$$Lambda$lambda$pathsAndContainers$1$3::load$(name, initialize);
		}
		if (name->equals(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::classInfo$.name)) {
			return JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$2$4::load$(name, initialize);
		}
		if (name->equals(JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5::classInfo$.name)) {
			return JavacFileManager$$Lambda$lambda$indexPathsAndContainersByRelativeDirectory$3$5::load$(name, initialize);
		}
		if (name->equals(JavacFileManager$$Lambda$lambda$asPaths$4$6::classInfo$.name)) {
			return JavacFileManager$$Lambda$lambda$asPaths$4$6::load$(name, initialize);
		}
		if (name->equals(JavacFileManager$$Lambda$lambda$asFiles$5$7::classInfo$.name)) {
			return JavacFileManager$$Lambda$lambda$asFiles$5$7::load$(name, initialize);
		}
	}
	$loadClass(JavacFileManager, name, initialize, &_JavacFileManager_ClassInfo_, clinit$JavacFileManager, allocate$JavacFileManager);
	return class$;
}

$Class* JavacFileManager::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com