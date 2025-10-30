#include <com/sun/tools/javac/jvm/ClassReader$ParameterAnnotations.h>

#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$ParameterAnnotations_FieldInfo_[] = {
	{"proxies", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;", 0, $field(ClassReader$ParameterAnnotations, proxies)},
	{}
};

$MethodInfo _ClassReader$ParameterAnnotations_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassReader$ParameterAnnotations::*)()>(&ClassReader$ParameterAnnotations::init$))},
	{"add", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;)V", 0},
	{}
};

$InnerClassInfo _ClassReader$ParameterAnnotations_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$ParameterAnnotations", "com.sun.tools.javac.jvm.ClassReader", "ParameterAnnotations", $STATIC},
	{}
};

$ClassInfo _ClassReader$ParameterAnnotations_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$ParameterAnnotations",
	"java.lang.Object",
	nullptr,
	_ClassReader$ParameterAnnotations_FieldInfo_,
	_ClassReader$ParameterAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$ParameterAnnotations_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$ParameterAnnotations($Class* clazz) {
	return $of($alloc(ClassReader$ParameterAnnotations));
}

void ClassReader$ParameterAnnotations::init$() {
}

void ClassReader$ParameterAnnotations::add($List* newAnnotations) {
	if (this->proxies == nullptr) {
		$set(this, proxies, newAnnotations);
	} else {
		$set(this, proxies, $nc(this->proxies)->prependList(newAnnotations));
	}
}

ClassReader$ParameterAnnotations::ClassReader$ParameterAnnotations() {
}

$Class* ClassReader$ParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(ClassReader$ParameterAnnotations, name, initialize, &_ClassReader$ParameterAnnotations_ClassInfo_, allocate$ClassReader$ParameterAnnotations);
	return class$;
}

$Class* ClassReader$ParameterAnnotations::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com