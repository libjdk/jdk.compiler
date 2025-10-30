#include <com/sun/tools/javac/launcher/Main$1.h>

#include <com/sun/tools/javac/launcher/Main.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <jcpp.h>

#undef SOURCE

using $Main = ::com::sun::tools::javac::launcher::Main;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $SimpleJavaFileObject = ::javax::tools::SimpleJavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/launcher/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$1, this$0)},
	{"val$sb", "Ljava/lang/StringBuilder;", nullptr, $FINAL | $SYNTHETIC, $field(Main$1, val$sb)},
	{"val$file", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(Main$1, val$file)},
	{}
};

$MethodInfo _Main$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/launcher/Main;Ljava/net/URI;Ljavax/tools/JavaFileObject$Kind;Ljava/nio/file/Path;Ljava/lang/StringBuilder;)V", nullptr, 0, $method(static_cast<void(Main$1::*)($Main*,$URI*,$JavaFileObject$Kind*,$Path*,$StringBuilder*)>(&Main$1::init$))},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Main$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.launcher.Main",
	"readFile",
	"(Ljava/nio/file/Path;)Ljavax/tools/JavaFileObject;"
};

$InnerClassInfo _Main$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$1",
	"javax.tools.SimpleJavaFileObject",
	nullptr,
	_Main$1_FieldInfo_,
	_Main$1_MethodInfo_,
	nullptr,
	&_Main$1_EnclosingMethodInfo_,
	_Main$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$1($Class* clazz) {
	return $of($alloc(Main$1));
}

void Main$1::init$($Main* this$0, $URI* arg0, $JavaFileObject$Kind* arg1, $Path* val$file, $StringBuilder* val$sb) {
	$set(this, this$0, this$0);
	$set(this, val$file, val$file);
	$set(this, val$sb, val$sb);
	$SimpleJavaFileObject::init$(arg0, arg1);
}

$String* Main$1::getName() {
	return $nc(this->val$file)->toString();
}

$CharSequence* Main$1::getCharContent(bool ignoreEncodingErrors) {
	return this->val$sb;
}

bool Main$1::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	$init($JavaFileObject$Kind);
	return (kind == $JavaFileObject$Kind::SOURCE) && $SourceVersion::isIdentifier(simpleName);
}

$String* Main$1::toString() {
	return $str({"JavacSourceLauncher["_s, this->val$file, "]"_s});
}

Main$1::Main$1() {
}

$Class* Main$1::load$($String* name, bool initialize) {
	$loadClass(Main$1, name, initialize, &_Main$1_ClassInfo_, allocate$Main$1);
	return class$;
}

$Class* Main$1::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com