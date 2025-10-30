#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>

#include <com/sun/tools/javac/file/RelativePath.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $RelativePath = ::com::sun::tools::javac::file::RelativePath;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$MethodInfo _RelativePath$RelativeDirectory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RelativePath$RelativeDirectory::*)($String*)>(&RelativePath$RelativeDirectory::init$))},
	{"<init>", "(Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RelativePath$RelativeDirectory::*)(RelativePath$RelativeDirectory*,$String*)>(&RelativePath$RelativeDirectory::init$))},
	{"basename", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"contains", "(Lcom/sun/tools/javac/file/RelativePath;)Z", nullptr, 0},
	{"dirname", "()Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;", nullptr, $PUBLIC},
	{"forPackage", "(Ljava/lang/CharSequence;)Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;", nullptr, $STATIC, $method(static_cast<RelativePath$RelativeDirectory*(*)($CharSequence*)>(&RelativePath$RelativeDirectory::forPackage))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RelativePath$RelativeDirectory_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.RelativePath$RelativeDirectory", "com.sun.tools.javac.file.RelativePath", "RelativeDirectory", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _RelativePath$RelativeDirectory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.RelativePath$RelativeDirectory",
	"com.sun.tools.javac.file.RelativePath",
	nullptr,
	nullptr,
	_RelativePath$RelativeDirectory_MethodInfo_,
	nullptr,
	nullptr,
	_RelativePath$RelativeDirectory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.RelativePath"
};

$Object* allocate$RelativePath$RelativeDirectory($Class* clazz) {
	return $of($alloc(RelativePath$RelativeDirectory));
}

RelativePath$RelativeDirectory* RelativePath$RelativeDirectory::forPackage($CharSequence* packageName) {
	$init(RelativePath$RelativeDirectory);
	$useLocalCurrentObjectStackCache();
	return $new(RelativePath$RelativeDirectory, $($nc($($nc(packageName)->toString()))->replace(u'.', u'/')));
}

void RelativePath$RelativeDirectory::init$($String* p) {
	bool var$0 = $nc(p)->length() == 0;
	$RelativePath::init$(var$0 || $nc(p)->endsWith("/"_s) ? p : $$str({p, "/"_s}));
}

void RelativePath$RelativeDirectory::init$(RelativePath$RelativeDirectory* d, $String* p) {
	RelativePath$RelativeDirectory::init$($$str({$nc(d)->path, p}));
}

RelativePath$RelativeDirectory* RelativePath$RelativeDirectory::dirname() {
	int32_t l = $nc(this->path)->length();
	if (l == 0) {
		return this;
	}
	int32_t sep = $nc(this->path)->lastIndexOf((int32_t)u'/', l - 2);
	return $new(RelativePath$RelativeDirectory, $($nc(this->path)->substring(0, sep + 1)));
}

$String* RelativePath$RelativeDirectory::basename() {
	int32_t l = $nc(this->path)->length();
	if (l == 0) {
		return this->path;
	}
	int32_t sep = $nc(this->path)->lastIndexOf((int32_t)u'/', l - 2);
	return $nc(this->path)->substring(sep + 1, l - 1);
}

bool RelativePath$RelativeDirectory::contains($RelativePath* other) {
	int32_t var$1 = $nc($nc(other)->path)->length();
	bool var$0 = var$1 > $nc(this->path)->length();
	return var$0 && $nc(other->path)->startsWith(this->path);
}

$String* RelativePath$RelativeDirectory::toString() {
	return $str({"RelativeDirectory["_s, this->path, "]"_s});
}

int32_t RelativePath$RelativeDirectory::compareTo(Object$* other) {
	return $RelativePath::compareTo($cast($RelativePath, other));
}

RelativePath$RelativeDirectory::RelativePath$RelativeDirectory() {
}

$Class* RelativePath$RelativeDirectory::load$($String* name, bool initialize) {
	$loadClass(RelativePath$RelativeDirectory, name, initialize, &_RelativePath$RelativeDirectory_ClassInfo_, allocate$RelativePath$RelativeDirectory);
	return class$;
}

$Class* RelativePath$RelativeDirectory::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com