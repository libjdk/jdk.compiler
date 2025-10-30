#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $ClassWriter$StackMapTableFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_FieldInfo_[] = {
	{"offsetDelta", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame, offsetDelta)},
	{"stack", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame, stack)},
	{}
};

$MethodInfo _ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame::*)(int32_t,$Type*)>(&ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame::init$))},
	{"getFrameType", "()I", nullptr, 0},
	{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0},
	{}
};

$InnerClassInfo _ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "SameLocals1StackItemFrame", $STATIC},
	{}
};

$ClassInfo _ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame",
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame",
	nullptr,
	_ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_FieldInfo_,
	_ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame($Class* clazz) {
	return $of($alloc(ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame));
}

void ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame::init$(int32_t offsetDelta, $Type* stack) {
	$ClassWriter$StackMapTableFrame::init$();
	this->offsetDelta = offsetDelta;
	$set(this, stack, stack);
}

int32_t ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame::getFrameType() {
	return (this->offsetDelta < 64) ? (64 + this->offsetDelta) : 247;
}

void ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame::write($ClassWriter* writer) {
	$useLocalCurrentObjectStackCache();
	$ClassWriter$StackMapTableFrame::write(writer);
	if (getFrameType() == 247) {
		$nc($nc(writer)->databuf)->appendChar(this->offsetDelta);
		if (writer->debugstackmap) {
			$nc($System::out)->print($$str({" offset_delta="_s, $$str(this->offsetDelta)}));
		}
	}
	if ($nc(writer)->debugstackmap) {
		$nc($System::out)->print($$str({" stack["_s, $$str(0), "]="_s}));
	}
	$nc(writer)->writeStackMapType(this->stack);
}

ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame::ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame() {
}

$Class* ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame, name, initialize, &_ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_ClassInfo_, allocate$ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame);
	return class$;
}

$Class* ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com