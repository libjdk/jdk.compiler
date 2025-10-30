#include <com/sun/tools/sjavac/comp/FileObjectWithLocation.h>

#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$CompoundAttribute _FileObjectWithLocation_Annotations_[] = {
	{"Lcom/sun/tools/javac/api/ClientCodeWrapper$Trusted;", nullptr},
	{}
};

$FieldInfo _FileObjectWithLocation_FieldInfo_[] = {
	{"loc", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PRIVATE | $FINAL, $field(FileObjectWithLocation, loc)},
	{}
};

$MethodInfo _FileObjectWithLocation_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/FileObject;Ljavax/tools/JavaFileManager$Location;)V", "(TF;Ljavax/tools/JavaFileManager$Location;)V", $PUBLIC, $method(static_cast<void(FileObjectWithLocation::*)($FileObject*,$JavaFileManager$Location*)>(&FileObjectWithLocation::init$))},
	{"getDelegate", "()Ljavax/tools/FileObject;", nullptr, $PUBLIC},
	{"getLocation", "()Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FileObjectWithLocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.FileObjectWithLocation",
	"javax.tools.ForwardingFileObject",
	nullptr,
	_FileObjectWithLocation_FieldInfo_,
	_FileObjectWithLocation_MethodInfo_,
	"<F::Ljavax/tools/FileObject;>Ljavax/tools/ForwardingFileObject<TF;>;",
	nullptr,
	nullptr,
	_FileObjectWithLocation_Annotations_
};

$Object* allocate$FileObjectWithLocation($Class* clazz) {
	return $of($alloc(FileObjectWithLocation));
}

void FileObjectWithLocation::init$($FileObject* delegate, $JavaFileManager$Location* loc) {
	$ForwardingFileObject::init$(delegate);
	$set(this, loc, loc);
}

$JavaFileManager$Location* FileObjectWithLocation::getLocation() {
	return this->loc;
}

$FileObject* FileObjectWithLocation::getDelegate() {
	return this->fileObject;
}

$String* FileObjectWithLocation::toString() {
	return $str({"FileObjectWithLocation["_s, this->fileObject, "]"_s});
}

FileObjectWithLocation::FileObjectWithLocation() {
}

$Class* FileObjectWithLocation::load$($String* name, bool initialize) {
	$loadClass(FileObjectWithLocation, name, initialize, &_FileObjectWithLocation_ClassInfo_, allocate$FileObjectWithLocation);
	return class$;
}

$Class* FileObjectWithLocation::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com