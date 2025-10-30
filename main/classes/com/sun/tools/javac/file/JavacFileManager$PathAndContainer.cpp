#include <com/sun/tools/javac/file/JavacFileManager$PathAndContainer.h>

#include <com/sun/tools/javac/file/JavacFileManager$Container.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <java/nio/file/Path.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavacFileManager$Container = ::com::sun::tools::javac::file::JavacFileManager$Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$PathAndContainer_FieldInfo_[] = {
	{"path", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$PathAndContainer, path)},
	{"container", "Lcom/sun/tools/javac/file/JavacFileManager$Container;", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$PathAndContainer, container)},
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$PathAndContainer, index)},
	{}
};

$MethodInfo _JavacFileManager$PathAndContainer_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/JavacFileManager$Container;I)V", nullptr, 0, $method(static_cast<void(JavacFileManager$PathAndContainer::*)($Path*,$JavacFileManager$Container*,int32_t)>(&JavacFileManager$PathAndContainer::init$))},
	{"compareTo", "(Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacFileManager$PathAndContainer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$PathAndContainer", "com.sun.tools.javac.file.JavacFileManager", "PathAndContainer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JavacFileManager$PathAndContainer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$PathAndContainer",
	"java.lang.Object",
	"java.lang.Comparable",
	_JavacFileManager$PathAndContainer_FieldInfo_,
	_JavacFileManager$PathAndContainer_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/tools/javac/file/JavacFileManager$PathAndContainer;>;",
	nullptr,
	_JavacFileManager$PathAndContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$PathAndContainer($Class* clazz) {
	return $of($alloc(JavacFileManager$PathAndContainer));
}

void JavacFileManager$PathAndContainer::init$($Path* path, $JavacFileManager$Container* container, int32_t index) {
	$set(this, path, path);
	$set(this, container, container);
	this->index = index;
}

int32_t JavacFileManager$PathAndContainer::compareTo(JavacFileManager$PathAndContainer* other) {
	return this->index - $nc(other)->index;
}

bool JavacFileManager$PathAndContainer::equals(Object$* o) {
	$var(JavacFileManager$PathAndContainer, pathAndContainer, nullptr);
	bool var$3 = $instanceOf(JavacFileManager$PathAndContainer, o);
	if (var$3) {
		$assign(pathAndContainer, $cast(JavacFileManager$PathAndContainer, o));
		var$3 = true;
	}
	bool var$2 = (var$3);
	bool var$1 = var$2 && $nc(this->path)->equals($nc(pathAndContainer)->path);
	bool var$0 = var$1 && $nc($of(this->container))->equals($nc(pathAndContainer)->container);
	return var$0 && this->index == $nc(pathAndContainer)->index;
}

int32_t JavacFileManager$PathAndContainer::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$of(this->path),
		$of(this->container),
		$($of($Integer::valueOf(this->index)))
	}));
}

int32_t JavacFileManager$PathAndContainer::compareTo(Object$* other) {
	return this->compareTo($cast(JavacFileManager$PathAndContainer, other));
}

JavacFileManager$PathAndContainer::JavacFileManager$PathAndContainer() {
}

$Class* JavacFileManager$PathAndContainer::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$PathAndContainer, name, initialize, &_JavacFileManager$PathAndContainer_ClassInfo_, allocate$JavacFileManager$PathAndContainer);
	return class$;
}

$Class* JavacFileManager$PathAndContainer::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com