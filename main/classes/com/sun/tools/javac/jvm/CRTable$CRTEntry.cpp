#include <com/sun/tools/javac/jvm/CRTable$CRTEntry.h>

#include <com/sun/tools/javac/jvm/CRTable.h>
#include <jcpp.h>

using $CRTable = ::com::sun::tools::javac::jvm::CRTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _CRTable$CRTEntry_FieldInfo_[] = {
	{"tree", "Ljava/lang/Object;", nullptr, 0, $field(CRTable$CRTEntry, tree)},
	{"flags", "I", nullptr, 0, $field(CRTable$CRTEntry, flags)},
	{"startPc", "I", nullptr, 0, $field(CRTable$CRTEntry, startPc)},
	{"endPc", "I", nullptr, 0, $field(CRTable$CRTEntry, endPc)},
	{}
};

$MethodInfo _CRTable$CRTEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;III)V", nullptr, 0, $method(static_cast<void(CRTable$CRTEntry::*)(Object$*,int32_t,int32_t,int32_t)>(&CRTable$CRTEntry::init$))},
	{}
};

$InnerClassInfo _CRTable$CRTEntry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.CRTable$CRTEntry", "com.sun.tools.javac.jvm.CRTable", "CRTEntry", $STATIC},
	{}
};

$ClassInfo _CRTable$CRTEntry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.CRTable$CRTEntry",
	"java.lang.Object",
	nullptr,
	_CRTable$CRTEntry_FieldInfo_,
	_CRTable$CRTEntry_MethodInfo_,
	nullptr,
	nullptr,
	_CRTable$CRTEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.CRTable"
};

$Object* allocate$CRTable$CRTEntry($Class* clazz) {
	return $of($alloc(CRTable$CRTEntry));
}

void CRTable$CRTEntry::init$(Object$* tree, int32_t flags, int32_t startPc, int32_t endPc) {
	$set(this, tree, tree);
	this->flags = flags;
	this->startPc = startPc;
	this->endPc = endPc;
}

CRTable$CRTEntry::CRTable$CRTEntry() {
}

$Class* CRTable$CRTEntry::load$($String* name, bool initialize) {
	$loadClass(CRTable$CRTEntry, name, initialize, &_CRTable$CRTEntry_ClassInfo_, allocate$CRTable$CRTEntry);
	return class$;
}

$Class* CRTable$CRTEntry::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com