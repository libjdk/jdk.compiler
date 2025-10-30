#include <com/sun/tools/javac/jvm/ClassReader$SourceFileObject.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject$CannotCreateUriError.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $PathFileObject$CannotCreateUriError = ::com::sun::tools::javac::file::PathFileObject$CannotCreateUriError;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $Name = ::com::sun::tools::javac::util::Name;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $Modifier = ::javax::lang::model::element::Modifier;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$SourceFileObject_FieldInfo_[] = {
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(ClassReader$SourceFileObject, name)},
	{}
};

$MethodInfo _ClassReader$SourceFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$SourceFileObject::*)($Name*)>(&ClassReader$SourceFileObject::init$))},
	{"delete", "()Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC},
	{"getCharContent", "(Z)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"getLastModified", "()J", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$SourceFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$SourceFileObject", "com.sun.tools.javac.jvm.ClassReader", "SourceFileObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ClassReader$SourceFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$SourceFileObject",
	"java.lang.Object",
	"javax.tools.JavaFileObject",
	_ClassReader$SourceFileObject_FieldInfo_,
	_ClassReader$SourceFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$SourceFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$SourceFileObject($Class* clazz) {
	return $of($alloc(ClassReader$SourceFileObject));
}

void ClassReader$SourceFileObject::init$($Name* name) {
	$set(this, name, name);
}

$URI* ClassReader$SourceFileObject::toUri() {
	$useLocalCurrentObjectStackCache();
	try {
		return $new($URI, nullptr, $($nc(this->name)->toString()), nullptr);
	} catch ($URISyntaxException& e) {
		$throwNew($PathFileObject$CannotCreateUriError, $($nc(this->name)->toString()), e);
	}
	$shouldNotReachHere();
}

$String* ClassReader$SourceFileObject::getName() {
	return $nc(this->name)->toString();
}

$JavaFileObject$Kind* ClassReader$SourceFileObject::getKind() {
	return $BaseFileManager::getKind($(getName()));
}

$InputStream* ClassReader$SourceFileObject::openInputStream() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$OutputStream* ClassReader$SourceFileObject::openOutputStream() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$CharSequence* ClassReader$SourceFileObject::getCharContent(bool ignoreEncodingErrors) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Reader* ClassReader$SourceFileObject::openReader(bool ignoreEncodingErrors) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Writer* ClassReader$SourceFileObject::openWriter() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int64_t ClassReader$SourceFileObject::getLastModified() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ClassReader$SourceFileObject::delete$() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ClassReader$SourceFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	return true;
}

$NestingKind* ClassReader$SourceFileObject::getNestingKind() {
	return nullptr;
}

$Modifier* ClassReader$SourceFileObject::getAccessLevel() {
	return nullptr;
}

bool ClassReader$SourceFileObject::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	$var(ClassReader$SourceFileObject, sourceFileObject, nullptr);
	bool var$1 = $instanceOf(ClassReader$SourceFileObject, other);
	if (var$1) {
		$assign(sourceFileObject, $cast(ClassReader$SourceFileObject, other));
		var$1 = true;
	}
	bool var$0 = (var$1);
	return var$0 && $nc($of(this->name))->equals($nc(sourceFileObject)->name);
}

int32_t ClassReader$SourceFileObject::hashCode() {
	return $nc($of(this->name))->hashCode();
}

ClassReader$SourceFileObject::ClassReader$SourceFileObject() {
}

$Class* ClassReader$SourceFileObject::load$($String* name, bool initialize) {
	$loadClass(ClassReader$SourceFileObject, name, initialize, &_ClassReader$SourceFileObject_ClassInfo_, allocate$ClassReader$SourceFileObject);
	return class$;
}

$Class* ClassReader$SourceFileObject::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com