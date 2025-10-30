#include <com/sun/tools/sjavac/comp/JavaFileObjectWithLocation.h>

#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/ForwardingJavaFileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;
using $ForwardingJavaFileObject = ::javax::tools::ForwardingJavaFileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$CompoundAttribute _JavaFileObjectWithLocation_Annotations_[] = {
	{"Lcom/sun/tools/javac/api/ClientCodeWrapper$Trusted;", nullptr},
	{}
};

$FieldInfo _JavaFileObjectWithLocation_FieldInfo_[] = {
	{"loc", "Ljavax/tools/JavaFileManager$Location;", nullptr, $PRIVATE | $FINAL, $field(JavaFileObjectWithLocation, loc)},
	{}
};

$MethodInfo _JavaFileObjectWithLocation_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileObject;Ljavax/tools/JavaFileManager$Location;)V", "(TF;Ljavax/tools/JavaFileManager$Location;)V", $PUBLIC, $method(static_cast<void(JavaFileObjectWithLocation::*)($JavaFileObject*,$JavaFileManager$Location*)>(&JavaFileObjectWithLocation::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDelegate", "()Ljavax/tools/JavaFileObject;", "()TF;", $PUBLIC},
	{"getLocation", "()Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JavaFileObjectWithLocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.JavaFileObjectWithLocation",
	"javax.tools.ForwardingJavaFileObject",
	nullptr,
	_JavaFileObjectWithLocation_FieldInfo_,
	_JavaFileObjectWithLocation_MethodInfo_,
	"<F::Ljavax/tools/JavaFileObject;>Ljavax/tools/ForwardingJavaFileObject<TF;>;",
	nullptr,
	nullptr,
	_JavaFileObjectWithLocation_Annotations_
};

$Object* allocate$JavaFileObjectWithLocation($Class* clazz) {
	return $of($alloc(JavaFileObjectWithLocation));
}

void JavaFileObjectWithLocation::init$($JavaFileObject* delegate, $JavaFileManager$Location* loc) {
	$ForwardingJavaFileObject::init$(delegate);
	$set(this, loc, loc);
}

$JavaFileManager$Location* JavaFileObjectWithLocation::getLocation() {
	return this->loc;
}

$JavaFileObject* JavaFileObjectWithLocation::getDelegate() {
	return $cast($JavaFileObject, this->fileObject);
}

$String* JavaFileObjectWithLocation::toString() {
	return $str({"JavaFileObjectWithLocation[loc: "_s, this->loc, ", "_s, this->fileObject, "]"_s});
}

int32_t JavaFileObjectWithLocation::hashCode() {
	int32_t var$0 = $nc($of(this->loc))->hashCode();
	return var$0 ^ $nc($of(($cast($JavaFileObject, this->fileObject))))->hashCode();
}

bool JavaFileObjectWithLocation::equals(Object$* obj) {
	$var(JavaFileObjectWithLocation, javaFileObjectWithLocation, nullptr);
	bool var$2 = $instanceOf(JavaFileObjectWithLocation, obj);
	if (var$2) {
		$assign(javaFileObjectWithLocation, $cast(JavaFileObjectWithLocation, obj));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && $nc($of(this->loc))->equals($nc(javaFileObjectWithLocation)->loc);
	return var$0 && $nc($of(($cast($JavaFileObject, this->fileObject))))->equals($nc(javaFileObjectWithLocation)->fileObject);
}

JavaFileObjectWithLocation::JavaFileObjectWithLocation() {
}

$Class* JavaFileObjectWithLocation::load$($String* name, bool initialize) {
	$loadClass(JavaFileObjectWithLocation, name, initialize, &_JavaFileObjectWithLocation_ClassInfo_, allocate$JavaFileObjectWithLocation);
	return class$;
}

$Class* JavaFileObjectWithLocation::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com