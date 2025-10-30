#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$ChopFrame.h>

#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <jcpp.h>

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

$FieldInfo _ClassWriter$StackMapTableFrame$ChopFrame_FieldInfo_[] = {
	{"frameType", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$ChopFrame, frameType)},
	{"offsetDelta", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$ChopFrame, offsetDelta)},
	{}
};

$MethodInfo _ClassWriter$StackMapTableFrame$ChopFrame_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(ClassWriter$StackMapTableFrame$ChopFrame::*)(int32_t,int32_t)>(&ClassWriter$StackMapTableFrame$ChopFrame::init$))},
	{"getFrameType", "()I", nullptr, 0},
	{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0},
	{}
};

$InnerClassInfo _ClassWriter$StackMapTableFrame$ChopFrame_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$ChopFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "ChopFrame", $STATIC},
	{}
};

$ClassInfo _ClassWriter$StackMapTableFrame$ChopFrame_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$ChopFrame",
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame",
	nullptr,
	_ClassWriter$StackMapTableFrame$ChopFrame_FieldInfo_,
	_ClassWriter$StackMapTableFrame$ChopFrame_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$StackMapTableFrame$ChopFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$StackMapTableFrame$ChopFrame($Class* clazz) {
	return $of($alloc(ClassWriter$StackMapTableFrame$ChopFrame));
}

void ClassWriter$StackMapTableFrame$ChopFrame::init$(int32_t frameType, int32_t offsetDelta) {
	$ClassWriter$StackMapTableFrame::init$();
	this->frameType = frameType;
	this->offsetDelta = offsetDelta;
}

int32_t ClassWriter$StackMapTableFrame$ChopFrame::getFrameType() {
	return this->frameType;
}

void ClassWriter$StackMapTableFrame$ChopFrame::write($ClassWriter* writer) {
	$useLocalCurrentObjectStackCache();
	$ClassWriter$StackMapTableFrame::write(writer);
	$nc($nc(writer)->databuf)->appendChar(this->offsetDelta);
	if (writer->debugstackmap) {
		$nc($System::out)->print($$str({" offset_delta="_s, $$str(this->offsetDelta)}));
	}
}

ClassWriter$StackMapTableFrame$ChopFrame::ClassWriter$StackMapTableFrame$ChopFrame() {
}

$Class* ClassWriter$StackMapTableFrame$ChopFrame::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$StackMapTableFrame$ChopFrame, name, initialize, &_ClassWriter$StackMapTableFrame$ChopFrame_ClassInfo_, allocate$ClassWriter$StackMapTableFrame$ChopFrame);
	return class$;
}

$Class* ClassWriter$StackMapTableFrame$ChopFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com