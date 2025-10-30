#include <com/sun/tools/javac/code/Types$DescriptorCache$Entry.h>

#include <com/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache.h>
#include <jcpp.h>

using $Types$DescriptorCache = ::com::sun::tools::javac::code::Types$DescriptorCache;
using $Types$DescriptorCache$FunctionDescriptor = ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$DescriptorCache$Entry_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$DescriptorCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorCache$Entry, this$1)},
	{"cachedDescRes", "Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;", nullptr, $FINAL, $field(Types$DescriptorCache$Entry, cachedDescRes)},
	{"prevMark", "I", nullptr, $FINAL, $field(Types$DescriptorCache$Entry, prevMark)},
	{}
};

$MethodInfo _Types$DescriptorCache$Entry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;I)V", nullptr, $PUBLIC, $method(static_cast<void(Types$DescriptorCache$Entry::*)($Types$DescriptorCache*,$Types$DescriptorCache$FunctionDescriptor*,int32_t)>(&Types$DescriptorCache$Entry::init$))},
	{"matches", "(I)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Types$DescriptorCache$Entry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$DescriptorCache", "com.sun.tools.javac.code.Types", "DescriptorCache", 0},
	{"com.sun.tools.javac.code.Types$DescriptorCache$Entry", "com.sun.tools.javac.code.Types$DescriptorCache", "Entry", 0},
	{}
};

$ClassInfo _Types$DescriptorCache$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$DescriptorCache$Entry",
	"java.lang.Object",
	nullptr,
	_Types$DescriptorCache$Entry_FieldInfo_,
	_Types$DescriptorCache$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_Types$DescriptorCache$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$DescriptorCache$Entry($Class* clazz) {
	return $of($alloc(Types$DescriptorCache$Entry));
}

void Types$DescriptorCache$Entry::init$($Types$DescriptorCache* this$1, $Types$DescriptorCache$FunctionDescriptor* cachedDescRes, int32_t prevMark) {
	$set(this, this$1, this$1);
	$set(this, cachedDescRes, cachedDescRes);
	this->prevMark = prevMark;
}

bool Types$DescriptorCache$Entry::matches(int32_t mark) {
	return this->prevMark == mark;
}

Types$DescriptorCache$Entry::Types$DescriptorCache$Entry() {
}

$Class* Types$DescriptorCache$Entry::load$($String* name, bool initialize) {
	$loadClass(Types$DescriptorCache$Entry, name, initialize, &_Types$DescriptorCache$Entry_ClassInfo_, allocate$Types$DescriptorCache$Entry);
	return class$;
}

$Class* Types$DescriptorCache$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com