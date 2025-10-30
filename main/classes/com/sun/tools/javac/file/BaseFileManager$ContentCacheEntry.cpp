#include <com/sun/tools/javac/file/BaseFileManager$ContentCacheEntry.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <java/lang/ref/SoftReference.h>
#include <java/nio/CharBuffer.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $CharBuffer = ::java::nio::CharBuffer;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _BaseFileManager$ContentCacheEntry_FieldInfo_[] = {
	{"timestamp", "J", nullptr, $FINAL, $field(BaseFileManager$ContentCacheEntry, timestamp)},
	{"ref", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/nio/CharBuffer;>;", $FINAL, $field(BaseFileManager$ContentCacheEntry, ref)},
	{}
};

$MethodInfo _BaseFileManager$ContentCacheEntry_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileObject;Ljava/nio/CharBuffer;)V", nullptr, 0, $method(static_cast<void(BaseFileManager$ContentCacheEntry::*)($JavaFileObject*,$CharBuffer*)>(&BaseFileManager$ContentCacheEntry::init$))},
	{"getValue", "()Ljava/nio/CharBuffer;", nullptr, 0},
	{"isValid", "(Ljavax/tools/JavaFileObject;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _BaseFileManager$ContentCacheEntry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.BaseFileManager$ContentCacheEntry", "com.sun.tools.javac.file.BaseFileManager", "ContentCacheEntry", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _BaseFileManager$ContentCacheEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.BaseFileManager$ContentCacheEntry",
	"java.lang.Object",
	nullptr,
	_BaseFileManager$ContentCacheEntry_FieldInfo_,
	_BaseFileManager$ContentCacheEntry_MethodInfo_,
	nullptr,
	nullptr,
	_BaseFileManager$ContentCacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.BaseFileManager"
};

$Object* allocate$BaseFileManager$ContentCacheEntry($Class* clazz) {
	return $of($alloc(BaseFileManager$ContentCacheEntry));
}

void BaseFileManager$ContentCacheEntry::init$($JavaFileObject* file, $CharBuffer* cb) {
	this->timestamp = $nc(file)->getLastModified();
	$set(this, ref, $new($SoftReference, cb));
}

bool BaseFileManager$ContentCacheEntry::isValid($JavaFileObject* file) {
	return this->timestamp == $nc(file)->getLastModified();
}

$CharBuffer* BaseFileManager$ContentCacheEntry::getValue() {
	return $cast($CharBuffer, $nc(this->ref)->get());
}

BaseFileManager$ContentCacheEntry::BaseFileManager$ContentCacheEntry() {
}

$Class* BaseFileManager$ContentCacheEntry::load$($String* name, bool initialize) {
	$loadClass(BaseFileManager$ContentCacheEntry, name, initialize, &_BaseFileManager$ContentCacheEntry_ClassInfo_, allocate$BaseFileManager$ContentCacheEntry);
	return class$;
}

$Class* BaseFileManager$ContentCacheEntry::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com