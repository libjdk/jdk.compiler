#include <com/sun/tools/javac/jvm/ClassReader$InterimUsesDirective.h>

#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
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

$FieldInfo _ClassReader$InterimUsesDirective_FieldInfo_[] = {
	{"service", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(ClassReader$InterimUsesDirective, service)},
	{}
};

$MethodInfo _ClassReader$InterimUsesDirective_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$InterimUsesDirective::*)($Name*)>(&ClassReader$InterimUsesDirective::init$))},
	{}
};

$InnerClassInfo _ClassReader$InterimUsesDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$InterimUsesDirective", "com.sun.tools.javac.jvm.ClassReader", "InterimUsesDirective", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClassReader$InterimUsesDirective_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$InterimUsesDirective",
	"java.lang.Object",
	nullptr,
	_ClassReader$InterimUsesDirective_FieldInfo_,
	_ClassReader$InterimUsesDirective_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$InterimUsesDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$InterimUsesDirective($Class* clazz) {
	return $of($alloc(ClassReader$InterimUsesDirective));
}

void ClassReader$InterimUsesDirective::init$($Name* service) {
	$set(this, service, service);
}

ClassReader$InterimUsesDirective::ClassReader$InterimUsesDirective() {
}

$Class* ClassReader$InterimUsesDirective::load$($String* name, bool initialize) {
	$loadClass(ClassReader$InterimUsesDirective, name, initialize, &_ClassReader$InterimUsesDirective_ClassInfo_, allocate$ClassReader$InterimUsesDirective);
	return class$;
}

$Class* ClassReader$InterimUsesDirective::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com