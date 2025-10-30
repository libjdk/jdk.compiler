#include <com/sun/tools/javac/platform/JDKPlatformProvider.h>

#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/ProviderNotFoundException.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/TreeSet.h>
#include <jcpp.h>

#undef JDK1_1
#undef MAX_RADIX
#undef MAX_VALUE
#undef NUMERICAL_COMPARATOR
#undef SUPPORTED_JAVA_PLATFORM_VERSIONS

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $JDKPlatformProvider$PlatformDescriptionImpl = ::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $PlatformProvider = ::com::sun::tools::javac::platform::PlatformProvider;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $ProviderNotFoundException = ::java::nio::file::ProviderNotFoundException;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $TreeSet = ::java::util::TreeSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class JDKPlatformProvider$$Lambda$lambda$static$0 : public $Comparator {
	$class(JDKPlatformProvider$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* s1, Object$* s2) override {
		 return JDKPlatformProvider::lambda$static$0($cast($String, s1), $cast($String, s2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JDKPlatformProvider$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JDKPlatformProvider$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JDKPlatformProvider$$Lambda$lambda$static$0::*)()>(&JDKPlatformProvider$$Lambda$lambda$static$0::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo JDKPlatformProvider$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.JDKPlatformProvider$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	methodInfos
};
$Class* JDKPlatformProvider$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(JDKPlatformProvider$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JDKPlatformProvider$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _JDKPlatformProvider_FieldInfo_[] = {
	{"symbolFileLocation", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JDKPlatformProvider, symbolFileLocation)},
	{"SUPPORTED_JAVA_PLATFORM_VERSIONS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JDKPlatformProvider, SUPPORTED_JAVA_PLATFORM_VERSIONS)},
	{"NUMERICAL_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/lang/String;>;", $PUBLIC | $STATIC | $FINAL, $staticField(JDKPlatformProvider, NUMERICAL_COMPARATOR)},
	{}
};

$MethodInfo _JDKPlatformProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JDKPlatformProvider::*)()>(&JDKPlatformProvider::init$))},
	{"findCtSym", "()Ljava/nio/file/Path;", nullptr, $STATIC, $method(static_cast<$Path*(*)()>(&JDKPlatformProvider::findCtSym))},
	{"getPlatform", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/platform/PlatformDescription;", nullptr, $PUBLIC},
	{"getSupportedPlatformNames", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/lang/String;>;", $PUBLIC},
	{"lambda$static$0", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($String*,$String*)>(&JDKPlatformProvider::lambda$static$0))},
	{"targetNumericVersion", "(Lcom/sun/tools/javac/jvm/Target;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Target*)>(&JDKPlatformProvider::targetNumericVersion))},
	{}
};

$InnerClassInfo _JDKPlatformProvider_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl", "com.sun.tools.javac.platform.JDKPlatformProvider", "PlatformDescriptionImpl", $STATIC},
	{}
};

$ClassInfo _JDKPlatformProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.platform.JDKPlatformProvider",
	"java.lang.Object",
	"com.sun.tools.javac.platform.PlatformProvider",
	_JDKPlatformProvider_FieldInfo_,
	_JDKPlatformProvider_MethodInfo_,
	nullptr,
	nullptr,
	_JDKPlatformProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl,com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject,com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1,com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1$1"
};

$Object* allocate$JDKPlatformProvider($Class* clazz) {
	return $of($alloc(JDKPlatformProvider));
}

$StringArray* JDKPlatformProvider::symbolFileLocation = nullptr;
$Set* JDKPlatformProvider::SUPPORTED_JAVA_PLATFORM_VERSIONS = nullptr;
$Comparator* JDKPlatformProvider::NUMERICAL_COMPARATOR = nullptr;

void JDKPlatformProvider::init$() {
}

$Iterable* JDKPlatformProvider::getSupportedPlatformNames() {
	return JDKPlatformProvider::SUPPORTED_JAVA_PLATFORM_VERSIONS;
}

$PlatformDescription* JDKPlatformProvider::getPlatform($String* platformName, $String* options) {
	return $new($JDKPlatformProvider$PlatformDescriptionImpl, platformName);
}

$String* JDKPlatformProvider::targetNumericVersion($Target* target) {
	$init(JDKPlatformProvider);
	int32_t var$0 = $nc(target)->ordinal();
	return $Integer::toString(var$0 - $Target::JDK1_1->ordinal() + 1);
}

$Path* JDKPlatformProvider::findCtSym() {
	$init(JDKPlatformProvider);
	$useLocalCurrentObjectStackCache();
	$var($String, javaHome, $System::getProperty("java.home"_s));
	$var($Path, file, $Paths::get(javaHome, $$new($StringArray, 0)));
	{
		$var($StringArray, arr$, JDKPlatformProvider::symbolFileLocation);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			$assign(file, $nc(file)->resolve(name));
		}
	}
	return file;
}

int32_t JDKPlatformProvider::lambda$static$0($String* s1, $String* s2) {
	$init(JDKPlatformProvider);
	int32_t i1 = 0;
	try {
		i1 = $Integer::parseInt(s1);
	} catch ($NumberFormatException& ex) {
		i1 = $Integer::MAX_VALUE;
	}
	int32_t i2 = 0;
	try {
		i2 = $Integer::parseInt(s2);
	} catch ($NumberFormatException& ex) {
		i2 = $Integer::MAX_VALUE;
	}
	return i1 != i2 ? i1 - i2 : $nc(s1)->compareTo(s2);
}

void clinit$JDKPlatformProvider($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JDKPlatformProvider::symbolFileLocation, $new($StringArray, {
		"lib"_s,
		"ct.sym"_s
	}));
	$assignStatic(JDKPlatformProvider::NUMERICAL_COMPARATOR, static_cast<$Comparator*>($new(JDKPlatformProvider$$Lambda$lambda$static$0)));
	{
		$assignStatic(JDKPlatformProvider::SUPPORTED_JAVA_PLATFORM_VERSIONS, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet, JDKPlatformProvider::NUMERICAL_COMPARATOR))));
		$var($Path, ctSymFile, JDKPlatformProvider::findCtSym());
		if ($Files::exists(ctSymFile, $$new($LinkOptionArray, 0))) {
			try {
				$var($FileSystem, fs, $FileSystems::newFileSystem(ctSymFile, ($ClassLoader*)nullptr));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$var($DirectoryStream, dir, $Files::newDirectoryStream($cast($Path, $($nc($($nc($($nc(fs)->getRootDirectories()))->iterator()))->next()))));
							{
								$var($Throwable, var$1, nullptr);
								try {
									try {
										{
											$var($Iterator, i$, $nc(dir)->iterator());
											for (; $nc(i$)->hasNext();) {
												$var($Path, section, $cast($Path, i$->next()));
												{
													if ($nc($($nc($($nc(section)->getFileName()))->toString()))->contains("-"_s)) {
														continue;
													}
													{
														$var($chars, arr$, $nc($($nc($($nc(section)->getFileName()))->toString()))->toCharArray());
														int32_t len$ = arr$->length;
														int32_t i$ = 0;
														for (; i$ < len$; ++i$) {
															char16_t ver = arr$->get(i$);
															{
																$var($String, verString, $Character::toString(ver));
																$Target* t = $Target::lookup($$str({""_s, $$str($Integer::parseInt(verString, $Character::MAX_RADIX))}));
																if (t != nullptr) {
																	$nc(JDKPlatformProvider::SUPPORTED_JAVA_PLATFORM_VERSIONS)->add($(JDKPlatformProvider::targetNumericVersion(t)));
																}
															}
														}
													}
												}
											}
										}
									} catch ($Throwable& t$) {
										if (dir != nullptr) {
											try {
												dir->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
										}
										$throw(t$);
									}
								} catch ($Throwable& var$2) {
									$assign(var$1, var$2);
								} /*finally*/ {
									if (dir != nullptr) {
										dir->close();
									}
								}
								if (var$1 != nullptr) {
									$throw(var$1);
								}
							}
						} catch ($Throwable& t$) {
							if (fs != nullptr) {
								try {
									fs->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$3) {
						$assign(var$0, var$3);
					} /*finally*/ {
						if (fs != nullptr) {
							fs->close();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			} catch ($IOException& ex) {
			} catch ($ProviderNotFoundException& ex) {
			}
		}
	}
}

JDKPlatformProvider::JDKPlatformProvider() {
}

$Class* JDKPlatformProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JDKPlatformProvider$$Lambda$lambda$static$0::classInfo$.name)) {
			return JDKPlatformProvider$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(JDKPlatformProvider, name, initialize, &_JDKPlatformProvider_ClassInfo_, clinit$JDKPlatformProvider, allocate$JDKPlatformProvider);
	return class$;
}

$Class* JDKPlatformProvider::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com