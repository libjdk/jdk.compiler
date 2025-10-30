#include <com/sun/tools/javac/jvm/Code$StackMapFormat$1.h>

#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Code$StackMapFormat = ::com::sun::tools::javac::jvm::Code$StackMapFormat;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _Code$StackMapFormat$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Code$StackMapFormat$1::*)($String*,int32_t)>(&Code$StackMapFormat$1::init$))},
	{"getAttributeName", "(Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Code$StackMapFormat$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.Code$StackMapFormat",
	nullptr,
	nullptr
};

$InnerClassInfo _Code$StackMapFormat$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Code$StackMapFormat", "com.sun.tools.javac.jvm.Code", "StackMapFormat", $PUBLIC | $STATIC | $ENUM},
	{"com.sun.tools.javac.jvm.Code$StackMapFormat$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Code$StackMapFormat$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.jvm.Code$StackMapFormat$1",
	"com.sun.tools.javac.jvm.Code$StackMapFormat",
	nullptr,
	nullptr,
	_Code$StackMapFormat$1_MethodInfo_,
	nullptr,
	&_Code$StackMapFormat$1_EnclosingMethodInfo_,
	_Code$StackMapFormat$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Code"
};

$Object* allocate$Code$StackMapFormat$1($Class* clazz) {
	return $of($alloc(Code$StackMapFormat$1));
}

void Code$StackMapFormat$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Code$StackMapFormat::init$($enum$name, $enum$ordinal);
}

$Name* Code$StackMapFormat$1::getAttributeName($Names* names) {
	return $nc(names)->StackMap;
}

Code$StackMapFormat$1::Code$StackMapFormat$1() {
}

$Class* Code$StackMapFormat$1::load$($String* name, bool initialize) {
	$loadClass(Code$StackMapFormat$1, name, initialize, &_Code$StackMapFormat$1_ClassInfo_, allocate$Code$StackMapFormat$1);
	return class$;
}

$Class* Code$StackMapFormat$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com