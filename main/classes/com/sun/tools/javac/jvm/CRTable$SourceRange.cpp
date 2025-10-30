#include <com/sun/tools/javac/jvm/CRTable$SourceRange.h>

#include <com/sun/tools/javac/jvm/CRTable.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS

using $CRTable = ::com::sun::tools::javac::jvm::CRTable;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _CRTable$SourceRange_FieldInfo_[] = {
	{"startPos", "I", nullptr, 0, $field(CRTable$SourceRange, startPos)},
	{"endPos", "I", nullptr, 0, $field(CRTable$SourceRange, endPos)},
	{}
};

$MethodInfo _CRTable$SourceRange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CRTable$SourceRange::*)()>(&CRTable$SourceRange::init$))},
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(CRTable$SourceRange::*)(int32_t,int32_t)>(&CRTable$SourceRange::init$))},
	{"mergeWith", "(Lcom/sun/tools/javac/jvm/CRTable$SourceRange;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", nullptr, 0},
	{}
};

$InnerClassInfo _CRTable$SourceRange_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.CRTable$SourceRange", "com.sun.tools.javac.jvm.CRTable", "SourceRange", $STATIC},
	{}
};

$ClassInfo _CRTable$SourceRange_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.CRTable$SourceRange",
	"java.lang.Object",
	nullptr,
	_CRTable$SourceRange_FieldInfo_,
	_CRTable$SourceRange_MethodInfo_,
	nullptr,
	nullptr,
	_CRTable$SourceRange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.CRTable"
};

$Object* allocate$CRTable$SourceRange($Class* clazz) {
	return $of($alloc(CRTable$SourceRange));
}

void CRTable$SourceRange::init$() {
	this->startPos = $Position::NOPOS;
	this->endPos = $Position::NOPOS;
}

void CRTable$SourceRange::init$(int32_t startPos, int32_t endPos) {
	this->startPos = startPos;
	this->endPos = endPos;
}

CRTable$SourceRange* CRTable$SourceRange::mergeWith(CRTable$SourceRange* sr) {
	if (sr == nullptr) {
		return this;
	}
	if (this->startPos == $Position::NOPOS) {
		this->startPos = $nc(sr)->startPos;
	} else if ($nc(sr)->startPos != $Position::NOPOS) {
		this->startPos = (this->startPos < sr->startPos ? this->startPos : sr->startPos);
	}
	if (this->endPos == $Position::NOPOS) {
		this->endPos = $nc(sr)->endPos;
	} else if ($nc(sr)->endPos != $Position::NOPOS) {
		this->endPos = (this->endPos > sr->endPos ? this->endPos : sr->endPos);
	}
	return this;
}

CRTable$SourceRange::CRTable$SourceRange() {
}

$Class* CRTable$SourceRange::load$($String* name, bool initialize) {
	$loadClass(CRTable$SourceRange, name, initialize, &_CRTable$SourceRange_ClassInfo_, allocate$CRTable$SourceRange);
	return class$;
}

$Class* CRTable$SourceRange::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com