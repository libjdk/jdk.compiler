#include <com/sun/tools/javac/file/CacheFSInfo.h>

#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class CacheFSInfo$$Lambda$lambda$preRegister$0 : public $Context$Factory {
	$class(CacheFSInfo$$Lambda$lambda$preRegister$0, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$() {
	}
	virtual $Object* make($Context* c) override {
		 return $of(CacheFSInfo::lambda$preRegister$0(c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CacheFSInfo$$Lambda$lambda$preRegister$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CacheFSInfo$$Lambda$lambda$preRegister$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CacheFSInfo$$Lambda$lambda$preRegister$0::*)()>(&CacheFSInfo$$Lambda$lambda$preRegister$0::init$))},
	{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CacheFSInfo$$Lambda$lambda$preRegister$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.CacheFSInfo$$Lambda$lambda$preRegister$0",
	"java.lang.Object",
	"com.sun.tools.javac.util.Context$Factory",
	nullptr,
	methodInfos
};
$Class* CacheFSInfo$$Lambda$lambda$preRegister$0::load$($String* name, bool initialize) {
	$loadClass(CacheFSInfo$$Lambda$lambda$preRegister$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CacheFSInfo$$Lambda$lambda$preRegister$0::class$ = nullptr;

class CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1 : public $Function {
	$class(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(CacheFSInfo* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* x$0) override {
		 return $of($nc(inst$)->lambda$getCanonicalFile$1($cast($Path, x$0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1>());
	}
	CacheFSInfo* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, inst$)},
	{}
};
$MethodInfo CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/CacheFSInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::*)(CacheFSInfo*)>(&CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::load$($String* name, bool initialize) {
	$loadClass(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::class$ = nullptr;

class CacheFSInfo$$Lambda$isDirectory$2 : public $Function {
	$class(CacheFSInfo$$Lambda$isDirectory$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($BasicFileAttributes, inst$)->isDirectory());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CacheFSInfo$$Lambda$isDirectory$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CacheFSInfo$$Lambda$isDirectory$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CacheFSInfo$$Lambda$isDirectory$2::*)()>(&CacheFSInfo$$Lambda$isDirectory$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CacheFSInfo$$Lambda$isDirectory$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.CacheFSInfo$$Lambda$isDirectory$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CacheFSInfo$$Lambda$isDirectory$2::load$($String* name, bool initialize) {
	$loadClass(CacheFSInfo$$Lambda$isDirectory$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CacheFSInfo$$Lambda$isDirectory$2::class$ = nullptr;

class CacheFSInfo$$Lambda$isRegularFile$3 : public $Function {
	$class(CacheFSInfo$$Lambda$isRegularFile$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($BasicFileAttributes, inst$)->isRegularFile());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CacheFSInfo$$Lambda$isRegularFile$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CacheFSInfo$$Lambda$isRegularFile$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CacheFSInfo$$Lambda$isRegularFile$3::*)()>(&CacheFSInfo$$Lambda$isRegularFile$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CacheFSInfo$$Lambda$isRegularFile$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.CacheFSInfo$$Lambda$isRegularFile$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CacheFSInfo$$Lambda$isRegularFile$3::load$($String* name, bool initialize) {
	$loadClass(CacheFSInfo$$Lambda$isRegularFile$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CacheFSInfo$$Lambda$isRegularFile$3::class$ = nullptr;

class CacheFSInfo$$Lambda$maybeReadAttributes$4 : public $Function {
	$class(CacheFSInfo$$Lambda$maybeReadAttributes$4, $NO_CLASS_INIT, $Function)
public:
	void init$(CacheFSInfo* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* file) override {
		 return $of($nc(inst$)->maybeReadAttributes($cast($Path, file)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CacheFSInfo$$Lambda$maybeReadAttributes$4>());
	}
	CacheFSInfo* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CacheFSInfo$$Lambda$maybeReadAttributes$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CacheFSInfo$$Lambda$maybeReadAttributes$4, inst$)},
	{}
};
$MethodInfo CacheFSInfo$$Lambda$maybeReadAttributes$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/CacheFSInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(CacheFSInfo$$Lambda$maybeReadAttributes$4::*)(CacheFSInfo*)>(&CacheFSInfo$$Lambda$maybeReadAttributes$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CacheFSInfo$$Lambda$maybeReadAttributes$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.CacheFSInfo$$Lambda$maybeReadAttributes$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* CacheFSInfo$$Lambda$maybeReadAttributes$4::load$($String* name, bool initialize) {
	$loadClass(CacheFSInfo$$Lambda$maybeReadAttributes$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CacheFSInfo$$Lambda$maybeReadAttributes$4::class$ = nullptr;

$FieldInfo _CacheFSInfo_FieldInfo_[] = {
	{"canonicalPathCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/nio/file/Path;Ljava/nio/file/Path;>;", $PROTECTED | $FINAL, $field(CacheFSInfo, canonicalPathCache)},
	{"attributeCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/nio/file/Path;Ljava/util/Optional<Ljava/nio/file/attribute/BasicFileAttributes;>;>;", $PROTECTED | $FINAL, $field(CacheFSInfo, attributeCache)},
	{"jarClassPathCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/nio/file/Path;Ljava/util/List<Ljava/nio/file/Path;>;>;", $PROTECTED | $FINAL, $field(CacheFSInfo, jarClassPathCache)},
	{}
};

$MethodInfo _CacheFSInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CacheFSInfo::*)()>(&CacheFSInfo::init$))},
	{"clearCache", "()V", nullptr, $PUBLIC},
	{"exists", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"getAttributes", "(Ljava/nio/file/Path;)Ljava/util/Optional;", "(Ljava/nio/file/Path;)Ljava/util/Optional<Ljava/nio/file/attribute/BasicFileAttributes;>;", $PROTECTED},
	{"getCanonicalFile", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getJarClassPath", "(Ljava/nio/file/Path;)Ljava/util/List;", "(Ljava/nio/file/Path;)Ljava/util/List<Ljava/nio/file/Path;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"isDirectory", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"isFile", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"lambda$getCanonicalFile$1", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Path*(CacheFSInfo::*)($Path*)>(&CacheFSInfo::lambda$getCanonicalFile$1))},
	{"lambda$preRegister$0", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/file/FSInfo;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FSInfo*(*)($Context*)>(&CacheFSInfo::lambda$preRegister$0))},
	{"maybeReadAttributes", "(Ljava/nio/file/Path;)Ljava/util/Optional;", "(Ljava/nio/file/Path;)Ljava/util/Optional<Ljava/nio/file/attribute/BasicFileAttributes;>;", $PROTECTED},
	{"preRegister", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Context*)>(&CacheFSInfo::preRegister))},
	{}
};

$ClassInfo _CacheFSInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.CacheFSInfo",
	"com.sun.tools.javac.file.FSInfo",
	nullptr,
	_CacheFSInfo_FieldInfo_,
	_CacheFSInfo_MethodInfo_
};

$Object* allocate$CacheFSInfo($Class* clazz) {
	return $of($alloc(CacheFSInfo));
}

void CacheFSInfo::init$() {
	$FSInfo::init$();
	$set(this, canonicalPathCache, $new($ConcurrentHashMap));
	$set(this, attributeCache, $new($ConcurrentHashMap));
	$set(this, jarClassPathCache, $new($ConcurrentHashMap));
}

void CacheFSInfo::preRegister($Context* context) {
	$init(CacheFSInfo);
	$load($FSInfo);
	$nc(context)->put($FSInfo::class$, static_cast<$Context$Factory*>($$new(CacheFSInfo$$Lambda$lambda$preRegister$0)));
}

void CacheFSInfo::clearCache() {
	$nc(this->canonicalPathCache)->clear();
	$nc(this->attributeCache)->clear();
	$nc(this->jarClassPathCache)->clear();
}

$Path* CacheFSInfo::getCanonicalFile($Path* file) {
	return $cast($Path, $nc(this->canonicalPathCache)->computeIfAbsent(file, static_cast<$Function*>($$new(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, this))));
}

bool CacheFSInfo::exists($Path* file) {
	return $nc($(getAttributes(file)))->isPresent();
}

bool CacheFSInfo::isDirectory($Path* file) {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($Boolean, $($nc($($nc($(getAttributes(file)))->map(static_cast<$Function*>($$new(CacheFSInfo$$Lambda$isDirectory$2)))))->orElse($($Boolean::valueOf(false)))))))->booleanValue();
}

bool CacheFSInfo::isFile($Path* file) {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($Boolean, $($nc($($nc($(getAttributes(file)))->map(static_cast<$Function*>($$new(CacheFSInfo$$Lambda$isRegularFile$3)))))->orElse($($Boolean::valueOf(false)))))))->booleanValue();
}

$List* CacheFSInfo::getJarClassPath($Path* file) {
	$synchronized(this->jarClassPathCache) {
		$var($List, jarClassPath, $cast($List, $nc(this->jarClassPathCache)->get(file)));
		if (jarClassPath == nullptr) {
			$assign(jarClassPath, $FSInfo::getJarClassPath(file));
			$nc(this->jarClassPathCache)->put(file, jarClassPath);
		}
		return jarClassPath;
	}
}

$Optional* CacheFSInfo::getAttributes($Path* file) {
	return $cast($Optional, $nc(this->attributeCache)->computeIfAbsent(file, static_cast<$Function*>($$new(CacheFSInfo$$Lambda$maybeReadAttributes$4, this))));
}

$Optional* CacheFSInfo::maybeReadAttributes($Path* file) {
	$useLocalCurrentObjectStackCache();
	try {
		$load($BasicFileAttributes);
		return $Optional::of($($Files::readAttributes(file, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0))));
	} catch ($IOException& e) {
		return $Optional::empty();
	}
	$shouldNotReachHere();
}

$Path* CacheFSInfo::lambda$getCanonicalFile$1($Path* x$0) {
	return $FSInfo::getCanonicalFile(x$0);
}

$FSInfo* CacheFSInfo::lambda$preRegister$0($Context* c) {
	$init(CacheFSInfo);
	$var($FSInfo, instance, $new(CacheFSInfo));
	$load($FSInfo);
	$nc(c)->put($FSInfo::class$, $of(instance));
	return instance;
}

CacheFSInfo::CacheFSInfo() {
}

$Class* CacheFSInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CacheFSInfo$$Lambda$lambda$preRegister$0::classInfo$.name)) {
			return CacheFSInfo$$Lambda$lambda$preRegister$0::load$(name, initialize);
		}
		if (name->equals(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::classInfo$.name)) {
			return CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::load$(name, initialize);
		}
		if (name->equals(CacheFSInfo$$Lambda$isDirectory$2::classInfo$.name)) {
			return CacheFSInfo$$Lambda$isDirectory$2::load$(name, initialize);
		}
		if (name->equals(CacheFSInfo$$Lambda$isRegularFile$3::classInfo$.name)) {
			return CacheFSInfo$$Lambda$isRegularFile$3::load$(name, initialize);
		}
		if (name->equals(CacheFSInfo$$Lambda$maybeReadAttributes$4::classInfo$.name)) {
			return CacheFSInfo$$Lambda$maybeReadAttributes$4::load$(name, initialize);
		}
	}
	$loadClass(CacheFSInfo, name, initialize, &_CacheFSInfo_ClassInfo_, allocate$CacheFSInfo);
	return class$;
}

$Class* CacheFSInfo::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com