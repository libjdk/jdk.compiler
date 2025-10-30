#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$AppendFrame.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <jcpp.h>

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
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

$FieldInfo _ClassWriter$StackMapTableFrame$AppendFrame_FieldInfo_[] = {
	{"frameType", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$AppendFrame, frameType)},
	{"offsetDelta", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$AppendFrame, offsetDelta)},
	{"locals", "[Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$AppendFrame, locals)},
	{}
};

$MethodInfo _ClassWriter$StackMapTableFrame$AppendFrame_MethodInfo_[] = {
	{"<init>", "(II[Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(ClassWriter$StackMapTableFrame$AppendFrame::*)(int32_t,int32_t,$TypeArray*)>(&ClassWriter$StackMapTableFrame$AppendFrame::init$))},
	{"getFrameType", "()I", nullptr, 0},
	{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0},
	{}
};

$InnerClassInfo _ClassWriter$StackMapTableFrame$AppendFrame_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$AppendFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "AppendFrame", $STATIC},
	{}
};

$ClassInfo _ClassWriter$StackMapTableFrame$AppendFrame_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$AppendFrame",
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame",
	nullptr,
	_ClassWriter$StackMapTableFrame$AppendFrame_FieldInfo_,
	_ClassWriter$StackMapTableFrame$AppendFrame_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$StackMapTableFrame$AppendFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$StackMapTableFrame$AppendFrame($Class* clazz) {
	return $of($alloc(ClassWriter$StackMapTableFrame$AppendFrame));
}

void ClassWriter$StackMapTableFrame$AppendFrame::init$(int32_t frameType, int32_t offsetDelta, $TypeArray* locals) {
	$ClassWriter$StackMapTableFrame::init$();
	this->frameType = frameType;
	this->offsetDelta = offsetDelta;
	$set(this, locals, locals);
}

int32_t ClassWriter$StackMapTableFrame$AppendFrame::getFrameType() {
	return this->frameType;
}

void ClassWriter$StackMapTableFrame$AppendFrame::write($ClassWriter* writer) {
	$useLocalCurrentObjectStackCache();
	$ClassWriter$StackMapTableFrame::write(writer);
	$nc($nc(writer)->databuf)->appendChar(this->offsetDelta);
	if (writer->debugstackmap) {
		$nc($System::out)->print($$str({" offset_delta="_s, $$str(this->offsetDelta)}));
	}
	for (int32_t i = 0; i < $nc(this->locals)->length; ++i) {
		if (writer->debugstackmap) {
			$nc($System::out)->print($$str({" locals["_s, $$str(i), "]="_s}));
		}
		writer->writeStackMapType($nc(this->locals)->get(i));
	}
}

ClassWriter$StackMapTableFrame$AppendFrame::ClassWriter$StackMapTableFrame$AppendFrame() {
}

$Class* ClassWriter$StackMapTableFrame$AppendFrame::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$StackMapTableFrame$AppendFrame, name, initialize, &_ClassWriter$StackMapTableFrame$AppendFrame_ClassInfo_, allocate$ClassWriter$StackMapTableFrame$AppendFrame);
	return class$;
}

$Class* ClassWriter$StackMapTableFrame$AppendFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com