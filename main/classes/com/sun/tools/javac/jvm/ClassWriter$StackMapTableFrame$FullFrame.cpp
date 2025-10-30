#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$FullFrame.h>

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

$FieldInfo _ClassWriter$StackMapTableFrame$FullFrame_FieldInfo_[] = {
	{"offsetDelta", "I", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$FullFrame, offsetDelta)},
	{"locals", "[Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$FullFrame, locals)},
	{"stack", "[Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(ClassWriter$StackMapTableFrame$FullFrame, stack)},
	{}
};

$MethodInfo _ClassWriter$StackMapTableFrame$FullFrame_MethodInfo_[] = {
	{"<init>", "(I[Lcom/sun/tools/javac/code/Type;[Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(ClassWriter$StackMapTableFrame$FullFrame::*)(int32_t,$TypeArray*,$TypeArray*)>(&ClassWriter$StackMapTableFrame$FullFrame::init$))},
	{"getFrameType", "()I", nullptr, 0},
	{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0},
	{}
};

$InnerClassInfo _ClassWriter$StackMapTableFrame$FullFrame_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$FullFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "FullFrame", $STATIC},
	{}
};

$ClassInfo _ClassWriter$StackMapTableFrame$FullFrame_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$FullFrame",
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame",
	nullptr,
	_ClassWriter$StackMapTableFrame$FullFrame_FieldInfo_,
	_ClassWriter$StackMapTableFrame$FullFrame_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$StackMapTableFrame$FullFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$StackMapTableFrame$FullFrame($Class* clazz) {
	return $of($alloc(ClassWriter$StackMapTableFrame$FullFrame));
}

void ClassWriter$StackMapTableFrame$FullFrame::init$(int32_t offsetDelta, $TypeArray* locals, $TypeArray* stack) {
	$ClassWriter$StackMapTableFrame::init$();
	this->offsetDelta = offsetDelta;
	$set(this, locals, locals);
	$set(this, stack, stack);
}

int32_t ClassWriter$StackMapTableFrame$FullFrame::getFrameType() {
	return 255;
}

void ClassWriter$StackMapTableFrame$FullFrame::write($ClassWriter* writer) {
	$useLocalCurrentObjectStackCache();
	$ClassWriter$StackMapTableFrame::write(writer);
	$nc($nc(writer)->databuf)->appendChar(this->offsetDelta);
	$nc(writer->databuf)->appendChar($nc(this->locals)->length);
	if (writer->debugstackmap) {
		$nc($System::out)->print($$str({" offset_delta="_s, $$str(this->offsetDelta)}));
		$nc($System::out)->print($$str({" nlocals="_s, $$str($nc(this->locals)->length)}));
	}
	for (int32_t i = 0; i < $nc(this->locals)->length; ++i) {
		if (writer->debugstackmap) {
			$nc($System::out)->print($$str({" locals["_s, $$str(i), "]="_s}));
		}
		writer->writeStackMapType($nc(this->locals)->get(i));
	}
	$nc(writer->databuf)->appendChar($nc(this->stack)->length);
	if (writer->debugstackmap) {
		$nc($System::out)->print($$str({" nstack="_s, $$str($nc(this->stack)->length)}));
	}
	for (int32_t i = 0; i < $nc(this->stack)->length; ++i) {
		if (writer->debugstackmap) {
			$nc($System::out)->print($$str({" stack["_s, $$str(i), "]="_s}));
		}
		writer->writeStackMapType($nc(this->stack)->get(i));
	}
}

ClassWriter$StackMapTableFrame$FullFrame::ClassWriter$StackMapTableFrame$FullFrame() {
}

$Class* ClassWriter$StackMapTableFrame$FullFrame::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$StackMapTableFrame$FullFrame, name, initialize, &_ClassWriter$StackMapTableFrame$FullFrame_ClassInfo_, allocate$ClassWriter$StackMapTableFrame$FullFrame);
	return class$;
}

$Class* ClassWriter$StackMapTableFrame$FullFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com