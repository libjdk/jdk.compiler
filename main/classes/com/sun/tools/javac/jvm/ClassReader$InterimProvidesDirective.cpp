#include <com/sun/tools/javac/jvm/ClassReader$InterimProvidesDirective.h>

#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$InterimProvidesDirective_FieldInfo_[] = {
	{"service", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(ClassReader$InterimProvidesDirective, service)},
	{"impls", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;", $PUBLIC | $FINAL, $field(ClassReader$InterimProvidesDirective, impls)},
	{}
};

$MethodInfo _ClassReader$InterimProvidesDirective_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;)V", $PUBLIC, $method(static_cast<void(ClassReader$InterimProvidesDirective::*)($Name*,$List*)>(&ClassReader$InterimProvidesDirective::init$))},
	{}
};

$InnerClassInfo _ClassReader$InterimProvidesDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$InterimProvidesDirective", "com.sun.tools.javac.jvm.ClassReader", "InterimProvidesDirective", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClassReader$InterimProvidesDirective_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$InterimProvidesDirective",
	"java.lang.Object",
	nullptr,
	_ClassReader$InterimProvidesDirective_FieldInfo_,
	_ClassReader$InterimProvidesDirective_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$InterimProvidesDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$InterimProvidesDirective($Class* clazz) {
	return $of($alloc(ClassReader$InterimProvidesDirective));
}

void ClassReader$InterimProvidesDirective::init$($Name* service, $List* impls) {
	$set(this, service, service);
	$set(this, impls, impls);
}

ClassReader$InterimProvidesDirective::ClassReader$InterimProvidesDirective() {
}

$Class* ClassReader$InterimProvidesDirective::load$($String* name, bool initialize) {
	$loadClass(ClassReader$InterimProvidesDirective, name, initialize, &_ClassReader$InterimProvidesDirective_ClassInfo_, allocate$ClassReader$InterimProvidesDirective);
	return class$;
}

$Class* ClassReader$InterimProvidesDirective::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com