#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$1$1.h>

#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$1.h>
#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <javax/tools/ForwardingJavaFileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef OTHER

using $JDKPlatformProvider$PlatformDescriptionImpl$1 = ::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl$1;
using $JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject = ::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingJavaFileObject = ::javax::tools::ForwardingJavaFileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

$FieldInfo _JDKPlatformProvider$PlatformDescriptionImpl$1$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$1;", nullptr, $FINAL | $SYNTHETIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$1$1, this$1)},
	{"val$kinds", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$1$1, val$kinds)},
	{"val$listed", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$1$1, val$listed)},
	{"original", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/tools/JavaFileObject;>;", $PRIVATE | $FINAL, $field(JDKPlatformProvider$PlatformDescriptionImpl$1$1, original)},
	{"next", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $field(JDKPlatformProvider$PlatformDescriptionImpl$1$1, next$)},
	{}
};

$MethodInfo _JDKPlatformProvider$PlatformDescriptionImpl$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$1;Ljava/lang/Iterable;Ljava/util/Set;)V", "()V", 0, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl$1$1::*)($JDKPlatformProvider$PlatformDescriptionImpl$1*,$Iterable*,$Set*)>(&JDKPlatformProvider$PlatformDescriptionImpl$1$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JDKPlatformProvider$PlatformDescriptionImpl$1$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1",
	"list",
	"(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/Iterable;"
};

$InnerClassInfo _JDKPlatformProvider$PlatformDescriptionImpl$1$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl", "com.sun.tools.javac.platform.JDKPlatformProvider", "PlatformDescriptionImpl", $STATIC},
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1$1", nullptr, nullptr, 0},
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JDKPlatformProvider$PlatformDescriptionImpl$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1$1",
	"java.lang.Object",
	"java.util.Iterator",
	_JDKPlatformProvider$PlatformDescriptionImpl$1$1_FieldInfo_,
	_JDKPlatformProvider$PlatformDescriptionImpl$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/tools/JavaFileObject;>;",
	&_JDKPlatformProvider$PlatformDescriptionImpl$1$1_EnclosingMethodInfo_,
	_JDKPlatformProvider$PlatformDescriptionImpl$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.JDKPlatformProvider"
};

$Object* allocate$JDKPlatformProvider$PlatformDescriptionImpl$1$1($Class* clazz) {
	return $of($alloc(JDKPlatformProvider$PlatformDescriptionImpl$1$1));
}

void JDKPlatformProvider$PlatformDescriptionImpl$1$1::init$($JDKPlatformProvider$PlatformDescriptionImpl$1* this$1, $Iterable* val$listed, $Set* val$kinds) {
	$set(this, this$1, this$1);
	$set(this, val$listed, val$listed);
	$set(this, val$kinds, val$kinds);
	$set(this, original, $nc(this->val$listed)->iterator());
}

bool JDKPlatformProvider$PlatformDescriptionImpl$1$1::hasNext() {
	$useLocalCurrentObjectStackCache();
	if (this->next$ == nullptr) {
		while ($nc(this->original)->hasNext()) {
			$var($JavaFileObject, fo, $cast($JavaFileObject, $nc(this->original)->next()));
			$init($JavaFileObject$Kind);
			bool var$0 = $nc(fo)->getKind() == $JavaFileObject$Kind::OTHER;
			if (var$0 && $nc($(fo->getName()))->endsWith(".sig"_s)) {
				$set(this, next$, $new($JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject, fo));
				break;
			}
			if ($nc(this->val$kinds)->contains($($nc(fo)->getKind()))) {
				$set(this, next$, fo);
				break;
			}
		}
	}
	return this->next$ != nullptr;
}

$Object* JDKPlatformProvider$PlatformDescriptionImpl$1$1::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($JavaFileObject, result, this->next$);
	$set(this, next$, nullptr);
	return $of(result);
}

JDKPlatformProvider$PlatformDescriptionImpl$1$1::JDKPlatformProvider$PlatformDescriptionImpl$1$1() {
}

$Class* JDKPlatformProvider$PlatformDescriptionImpl$1$1::load$($String* name, bool initialize) {
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl$1$1, name, initialize, &_JDKPlatformProvider$PlatformDescriptionImpl$1$1_ClassInfo_, allocate$JDKPlatformProvider$PlatformDescriptionImpl$1$1);
	return class$;
}

$Class* JDKPlatformProvider$PlatformDescriptionImpl$1$1::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com