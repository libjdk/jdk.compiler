#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$1.h>

#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$1$1.h>
#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject.h>
#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/charset/Charset.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingJavaFileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef OTHER

using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JDKPlatformProvider$PlatformDescriptionImpl = ::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl;
using $JDKPlatformProvider$PlatformDescriptionImpl$1$1 = ::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl$1$1;
using $JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject = ::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject;
using $Context = ::com::sun::tools::javac::util::Context;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Charset = ::java::nio::charset::Charset;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingJavaFileObject = ::javax::tools::ForwardingJavaFileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0 : public $Iterable {
	$class(JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0, $NO_CLASS_INIT, $Iterable)
public:
	void init$(JDKPlatformProvider$PlatformDescriptionImpl$1* inst, $Iterable* listed, $Set* kinds) {
		$set(this, inst$, inst);
		$set(this, listed, listed);
		$set(this, kinds, kinds);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$list$0(listed, kinds);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0>());
	}
	JDKPlatformProvider$PlatformDescriptionImpl$1* inst$ = nullptr;
	$Iterable* listed = nullptr;
	$Set* kinds = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0, inst$)},
	{"listed", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0, listed)},
	{"kinds", "Ljava/util/Set;", nullptr, $PUBLIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0, kinds)},
	{}
};
$MethodInfo JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$1;Ljava/lang/Iterable;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::*)(JDKPlatformProvider$PlatformDescriptionImpl$1*,$Iterable*,$Set*)>(&JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::load$($String* name, bool initialize) {
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::class$ = nullptr;

$FieldInfo _JDKPlatformProvider$PlatformDescriptionImpl$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl;", nullptr, $FINAL | $SYNTHETIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$1, this$0)},
	{}
};

$MethodInfo _JDKPlatformProvider$PlatformDescriptionImpl$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl;Lcom/sun/tools/javac/util/Context;ZLjava/nio/charset/Charset;)V", nullptr, 0, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl$1::*)($JDKPlatformProvider$PlatformDescriptionImpl*,$Context*,bool,$Charset*)>(&JDKPlatformProvider$PlatformDescriptionImpl$1::init$))},
	{"getJavaFileForInput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"hasLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, $PUBLIC},
	{"inferBinaryName", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"lambda$list$0", "(Ljava/lang/Iterable;Ljava/util/Set;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(JDKPlatformProvider$PlatformDescriptionImpl$1::*)($Iterable*,$Set*)>(&JDKPlatformProvider$PlatformDescriptionImpl$1::lambda$list$0))},
	{"list", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;Z)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _JDKPlatformProvider$PlatformDescriptionImpl$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl",
	"getFileManager",
	"()Ljavax/tools/JavaFileManager;"
};

$InnerClassInfo _JDKPlatformProvider$PlatformDescriptionImpl$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl", "com.sun.tools.javac.platform.JDKPlatformProvider", "PlatformDescriptionImpl", $STATIC},
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JDKPlatformProvider$PlatformDescriptionImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1",
	"com.sun.tools.javac.file.JavacFileManager",
	nullptr,
	_JDKPlatformProvider$PlatformDescriptionImpl$1_FieldInfo_,
	_JDKPlatformProvider$PlatformDescriptionImpl$1_MethodInfo_,
	nullptr,
	&_JDKPlatformProvider$PlatformDescriptionImpl$1_EnclosingMethodInfo_,
	_JDKPlatformProvider$PlatformDescriptionImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.JDKPlatformProvider"
};

$Object* allocate$JDKPlatformProvider$PlatformDescriptionImpl$1($Class* clazz) {
	return $of($alloc(JDKPlatformProvider$PlatformDescriptionImpl$1));
}

void JDKPlatformProvider$PlatformDescriptionImpl$1::init$($JDKPlatformProvider$PlatformDescriptionImpl* this$0, $Context* context, bool register$, $Charset* charset) {
	$set(this, this$0, this$0);
	$JavacFileManager::init$(context, register$, charset);
}

bool JDKPlatformProvider$PlatformDescriptionImpl$1::hasLocation($JavaFileManager$Location* location) {
	return $JavacFileManager::hasExplicitLocation(location);
}

$JavaFileObject* JDKPlatformProvider$PlatformDescriptionImpl$1::getJavaFileForInput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind) {
	$useLocalCurrentObjectStackCache();
	$init($JavaFileObject$Kind);
	if (kind == $JavaFileObject$Kind::CLASS) {
		$var($String, fileName, $nc(className)->replace(u'.', u'/'));
		$var($JavaFileObject, result, $cast($JavaFileObject, getFileForInput(location, ""_s, $$str({fileName, ".sig"_s}))));
		if (result == nullptr) {
			$assign(result, $cast($JavaFileObject, getFileForInput(location, ""_s, $$str({fileName, ".class"_s}))));
		}
		if (result != nullptr) {
			return $new($JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject, result);
		} else {
			return nullptr;
		}
	}
	return $JavacFileManager::getJavaFileForInput(location, className, kind);
}

$Iterable* JDKPlatformProvider$PlatformDescriptionImpl$1::list($JavaFileManager$Location* location, $String* packageName, $Set* kinds, bool recurse) {
	$useLocalCurrentObjectStackCache();
	$var($Set, enhancedKinds, $EnumSet::copyOf(static_cast<$Collection*>(kinds)));
	$init($JavaFileObject$Kind);
	$nc(enhancedKinds)->add($JavaFileObject$Kind::OTHER);
	$var($Iterable, listed, $JavacFileManager::list(location, packageName, enhancedKinds, recurse));
	return static_cast<$Iterable*>($new(JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0, this, listed, kinds));
}

$String* JDKPlatformProvider$PlatformDescriptionImpl$1::inferBinaryName($JavaFileManager$Location* location, $JavaFileObject* file$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, file, file$renamed);
	{
		$var($JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject, sigJavaFileObject, nullptr);
		bool var$0 = $instanceOf($JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject, file);
		if (var$0) {
			$assign(sigJavaFileObject, $cast($JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject, file));
			var$0 = true;
		}
		if (var$0) {
			$assign(file, $nc(sigJavaFileObject)->getDelegate());
		}
	}
	return $JavacFileManager::inferBinaryName(location, file);
}

$Iterator* JDKPlatformProvider$PlatformDescriptionImpl$1::lambda$list$0($Iterable* listed, $Set* kinds) {
	return $new($JDKPlatformProvider$PlatformDescriptionImpl$1$1, this, listed, kinds);
}

JDKPlatformProvider$PlatformDescriptionImpl$1::JDKPlatformProvider$PlatformDescriptionImpl$1() {
}

$Class* JDKPlatformProvider$PlatformDescriptionImpl$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::classInfo$.name)) {
			return JDKPlatformProvider$PlatformDescriptionImpl$1$$Lambda$lambda$list$0::load$(name, initialize);
		}
	}
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl$1, name, initialize, &_JDKPlatformProvider$PlatformDescriptionImpl$1_ClassInfo_, allocate$JDKPlatformProvider$PlatformDescriptionImpl$1);
	return class$;
}

$Class* JDKPlatformProvider$PlatformDescriptionImpl$1::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com