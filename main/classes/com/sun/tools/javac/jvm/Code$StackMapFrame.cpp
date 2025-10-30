#include <com/sun/tools/javac/jvm/Code$StackMapFrame.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <jcpp.h>

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Code$StackMapFrame_FieldInfo_[] = {
	{"pc", "I", nullptr, 0, $field(Code$StackMapFrame, pc)},
	{"locals", "[Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Code$StackMapFrame, locals)},
	{"stack", "[Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Code$StackMapFrame, stack)},
	{}
};

$MethodInfo _Code$StackMapFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Code$StackMapFrame::*)()>(&Code$StackMapFrame::init$))},
	{}
};

$InnerClassInfo _Code$StackMapFrame_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Code$StackMapFrame", "com.sun.tools.javac.jvm.Code", "StackMapFrame", $STATIC},
	{}
};

$ClassInfo _Code$StackMapFrame_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Code$StackMapFrame",
	"java.lang.Object",
	nullptr,
	_Code$StackMapFrame_FieldInfo_,
	_Code$StackMapFrame_MethodInfo_,
	nullptr,
	nullptr,
	_Code$StackMapFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Code"
};

$Object* allocate$Code$StackMapFrame($Class* clazz) {
	return $of($alloc(Code$StackMapFrame));
}

void Code$StackMapFrame::init$() {
}

Code$StackMapFrame::Code$StackMapFrame() {
}

$Class* Code$StackMapFrame::load$($String* name, bool initialize) {
	$loadClass(Code$StackMapFrame, name, initialize, &_Code$StackMapFrame_ClassInfo_, allocate$Code$StackMapFrame);
	return class$;
}

$Class* Code$StackMapFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com