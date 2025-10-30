#include <com/sun/tools/javac/jvm/CRTFlags.h>

#include <jcpp.h>

#undef CRT_ASSIGNMENT
#undef CRT_BLOCK
#undef CRT_BRANCH_FALSE
#undef CRT_BRANCH_TRUE
#undef CRT_CREATE
#undef CRT_FLOW_CONTROLLER
#undef CRT_FLOW_TARGET
#undef CRT_INVOKE
#undef CRT_STATEMENT
#undef CRT_VALID_FLAGS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _CRTFlags_FieldInfo_[] = {
	{"CRT_STATEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_STATEMENT)},
	{"CRT_BLOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_BLOCK)},
	{"CRT_ASSIGNMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_ASSIGNMENT)},
	{"CRT_FLOW_CONTROLLER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_FLOW_CONTROLLER)},
	{"CRT_FLOW_TARGET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_FLOW_TARGET)},
	{"CRT_INVOKE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_INVOKE)},
	{"CRT_CREATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_CREATE)},
	{"CRT_BRANCH_TRUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_BRANCH_TRUE)},
	{"CRT_BRANCH_FALSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_BRANCH_FALSE)},
	{"CRT_VALID_FLAGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CRTFlags, CRT_VALID_FLAGS)},
	{}
};

$ClassInfo _CRTFlags_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.jvm.CRTFlags",
	nullptr,
	nullptr,
	_CRTFlags_FieldInfo_
};

$Object* allocate$CRTFlags($Class* clazz) {
	return $of($alloc(CRTFlags));
}

$Class* CRTFlags::load$($String* name, bool initialize) {
	$loadClass(CRTFlags, name, initialize, &_CRTFlags_ClassInfo_, allocate$CRTFlags);
	return class$;
}

$Class* CRTFlags::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com