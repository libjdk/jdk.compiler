#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$SameFrame.h>

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

$FieldInfo _ClassWriter$StackMapTableFrame$SameFrame_FieldInfo_[] = {
	{"offsetDelta", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$SameFrame, offsetDelta)},
	{}
};

$MethodInfo _ClassWriter$StackMapTableFrame$SameFrame_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ClassWriter$StackMapTableFrame$SameFrame::*)(int32_t)>(&ClassWriter$StackMapTableFrame$SameFrame::init$))},
	{"getFrameType", "()I", nullptr, 0},
	{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0},
	{}
};

$InnerClassInfo _ClassWriter$StackMapTableFrame$SameFrame_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "SameFrame", $STATIC},
	{}
};

$ClassInfo _ClassWriter$StackMapTableFrame$SameFrame_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameFrame",
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame",
	nullptr,
	_ClassWriter$StackMapTableFrame$SameFrame_FieldInfo_,
	_ClassWriter$StackMapTableFrame$SameFrame_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$StackMapTableFrame$SameFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$StackMapTableFrame$SameFrame($Class* clazz) {
	return $of($alloc(ClassWriter$StackMapTableFrame$SameFrame));
}

void ClassWriter$StackMapTableFrame$SameFrame::init$(int32_t offsetDelta) {
	$ClassWriter$StackMapTableFrame::init$();
	this->offsetDelta = offsetDelta;
}

int32_t ClassWriter$StackMapTableFrame$SameFrame::getFrameType() {
	return (this->offsetDelta < 64) ? this->offsetDelta : 251;
}

void ClassWriter$StackMapTableFrame$SameFrame::write($ClassWriter* writer) {
	$useLocalCurrentObjectStackCache();
	$ClassWriter$StackMapTableFrame::write(writer);
	if (getFrameType() == 251) {
		$nc($nc(writer)->databuf)->appendChar(this->offsetDelta);
		if (writer->debugstackmap) {
			$nc($System::out)->print($$str({" offset_delta="_s, $$str(this->offsetDelta)}));
		}
	}
}

ClassWriter$StackMapTableFrame$SameFrame::ClassWriter$StackMapTableFrame$SameFrame() {
}

$Class* ClassWriter$StackMapTableFrame$SameFrame::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$StackMapTableFrame$SameFrame, name, initialize, &_ClassWriter$StackMapTableFrame$SameFrame_ClassInfo_, allocate$ClassWriter$StackMapTableFrame$SameFrame);
	return class$;
}

$Class* ClassWriter$StackMapTableFrame$SameFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com