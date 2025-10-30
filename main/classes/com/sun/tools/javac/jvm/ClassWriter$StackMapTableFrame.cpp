#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$AppendFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$ChopFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$FullFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$SameFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFrame.h>
#include <com/sun/tools/javac/jvm/UninitializedType.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <jcpp.h>

#undef BOOLEAN
#undef INT
#undef MAX_VALUE
#undef UNINITIALIZED_OBJECT
#undef UNINITIALIZED_THIS

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $ClassWriter$StackMapTableFrame$AppendFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame$AppendFrame;
using $ClassWriter$StackMapTableFrame$ChopFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame$ChopFrame;
using $ClassWriter$StackMapTableFrame$FullFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame$FullFrame;
using $ClassWriter$StackMapTableFrame$SameFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame$SameFrame;
using $ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame = ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame;
using $Code$StackMapFrame = ::com::sun::tools::javac::jvm::Code$StackMapFrame;
using $UninitializedType = ::com::sun::tools::javac::jvm::UninitializedType;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _ClassWriter$StackMapTableFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassWriter$StackMapTableFrame::*)()>(&ClassWriter$StackMapTableFrame::init$))},
	{"compare", "([Lcom/sun/tools/javac/code/Type;[Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($TypeArray*,$TypeArray*,$Types*)>(&ClassWriter$StackMapTableFrame::compare))},
	{"getFrameType", "()I", nullptr, $ABSTRACT},
	{"getInstance", "(Lcom/sun/tools/javac/jvm/Code$StackMapFrame;I[Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame;", nullptr, $STATIC, $method(static_cast<ClassWriter$StackMapTableFrame*(*)($Code$StackMapFrame*,int32_t,$TypeArray*,$Types*)>(&ClassWriter$StackMapTableFrame::getInstance))},
	{"isInt", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Type*)>(&ClassWriter$StackMapTableFrame::isInt))},
	{"isSameType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Type*,$Type*,$Types*)>(&ClassWriter$StackMapTableFrame::isSameType))},
	{"write", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0},
	{}
};

$InnerClassInfo _ClassWriter$StackMapTableFrame_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "com.sun.tools.javac.jvm.ClassWriter", "StackMapTableFrame", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$FullFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "FullFrame", $STATIC},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$AppendFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "AppendFrame", $STATIC},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$ChopFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "ChopFrame", $STATIC},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "SameLocals1StackItemFrame", $STATIC},
	{"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameFrame", "com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame", "SameFrame", $STATIC},
	{}
};

$ClassInfo _ClassWriter$StackMapTableFrame_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClassWriter$StackMapTableFrame_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$StackMapTableFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$StackMapTableFrame($Class* clazz) {
	return $of($alloc(ClassWriter$StackMapTableFrame));
}

void ClassWriter$StackMapTableFrame::init$() {
}

void ClassWriter$StackMapTableFrame::write($ClassWriter* writer) {
	$useLocalCurrentObjectStackCache();
	int32_t frameType = getFrameType();
	$nc($nc(writer)->databuf)->appendByte(frameType);
	if (writer->debugstackmap) {
		$nc($System::out)->print($$str({" frame_type="_s, $$str(frameType)}));
	}
}

ClassWriter$StackMapTableFrame* ClassWriter$StackMapTableFrame::getInstance($Code$StackMapFrame* this_frame, int32_t prev_pc, $TypeArray* prev_locals, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($TypeArray, locals, $nc(this_frame)->locals);
	$var($TypeArray, stack, this_frame->stack);
	int32_t offset_delta = this_frame->pc - prev_pc - 1;
	if ($nc(stack)->length == 1) {
		if ($nc(locals)->length == $nc(prev_locals)->length && compare(prev_locals, locals, types) == 0) {
			return $new($ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame, offset_delta, stack->get(0));
		}
	} else if (stack->length == 0) {
		int32_t diff_length = compare(prev_locals, locals, types);
		if (diff_length == 0) {
			return $new($ClassWriter$StackMapTableFrame$SameFrame, offset_delta);
		} else if (- 4 < diff_length && diff_length < 0) {
			$var($TypeArray, local_diff, $new($TypeArray, -diff_length));
			{
				int32_t i = $nc(prev_locals)->length;
				int32_t j = 0;
				for (; i < $nc(locals)->length; ++i, ++j) {
					local_diff->set(j, locals->get(i));
				}
			}
			return $new($ClassWriter$StackMapTableFrame$AppendFrame, 251 - diff_length, offset_delta, local_diff);
		} else if (0 < diff_length && diff_length < 4) {
			return $new($ClassWriter$StackMapTableFrame$ChopFrame, 251 - diff_length, offset_delta);
		}
	}
	return $new($ClassWriter$StackMapTableFrame$FullFrame, offset_delta, locals, stack);
}

bool ClassWriter$StackMapTableFrame::isInt($Type* t) {
	$init($TypeTag);
	bool var$0 = $nc($($nc(t)->getTag()))->isStrictSubRangeOf($TypeTag::INT);
	return (var$0 || $nc(t)->hasTag($TypeTag::BOOLEAN));
}

bool ClassWriter$StackMapTableFrame::isSameType($Type* t1, $Type* t2, $Types* types) {
	if (t1 == nullptr) {
		return t2 == nullptr;
	}
	if (t2 == nullptr) {
		return false;
	}
	bool var$0 = isInt(t1);
	if (var$0 && isInt(t2)) {
		return true;
	}
	$init($TypeTag);
	if ($nc(t1)->hasTag($TypeTag::UNINITIALIZED_THIS)) {
		return $nc(t2)->hasTag($TypeTag::UNINITIALIZED_THIS);
	} else {
		if (t1->hasTag($TypeTag::UNINITIALIZED_OBJECT)) {
			if ($nc(t2)->hasTag($TypeTag::UNINITIALIZED_OBJECT)) {
				return $nc(($cast($UninitializedType, t1)))->offset == $nc(($cast($UninitializedType, t2)))->offset;
			} else {
				return false;
			}
		} else {
			bool var$2 = $nc(t2)->hasTag($TypeTag::UNINITIALIZED_THIS);
			if (var$2 || $nc(t2)->hasTag($TypeTag::UNINITIALIZED_OBJECT)) {
				return false;
			}
		}
	}
	return $nc(types)->isSameType(t1, t2);
}

int32_t ClassWriter$StackMapTableFrame::compare($TypeArray* arr1, $TypeArray* arr2, $Types* types) {
	int32_t diff_length = $nc(arr1)->length - $nc(arr2)->length;
	if (diff_length > 4 || diff_length < - 4) {
		return $Integer::MAX_VALUE;
	}
	int32_t len = (diff_length > 0) ? arr2->length : arr1->length;
	for (int32_t i = 0; i < len; ++i) {
		if (!isSameType(arr1->get(i), arr2->get(i), types)) {
			return $Integer::MAX_VALUE;
		}
	}
	return diff_length;
}

ClassWriter$StackMapTableFrame::ClassWriter$StackMapTableFrame() {
}

$Class* ClassWriter$StackMapTableFrame::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$StackMapTableFrame, name, initialize, &_ClassWriter$StackMapTableFrame_ClassInfo_, allocate$ClassWriter$StackMapTableFrame);
	return class$;
}

$Class* ClassWriter$StackMapTableFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com