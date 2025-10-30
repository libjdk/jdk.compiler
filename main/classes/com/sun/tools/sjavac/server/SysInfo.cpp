#include <com/sun/tools/sjavac/server/SysInfo.h>

#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _SysInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SysInfo, serialVersionUID)},
	{"numCores", "I", nullptr, $PUBLIC, $field(SysInfo, numCores)},
	{"maxMemory", "J", nullptr, $PUBLIC, $field(SysInfo, maxMemory)},
	{}
};

$MethodInfo _SysInfo_MethodInfo_[] = {
	{"<init>", "(IJ)V", nullptr, $PUBLIC, $method(static_cast<void(SysInfo::*)(int32_t,int64_t)>(&SysInfo::init$))},
	{}
};

$ClassInfo _SysInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.SysInfo",
	"java.lang.Object",
	"java.io.Serializable",
	_SysInfo_FieldInfo_,
	_SysInfo_MethodInfo_
};

$Object* allocate$SysInfo($Class* clazz) {
	return $of($alloc(SysInfo));
}

void SysInfo::init$(int32_t nc, int64_t mm) {
	this->numCores = nc;
	this->maxMemory = mm;
}

SysInfo::SysInfo() {
}

$Class* SysInfo::load$($String* name, bool initialize) {
	$loadClass(SysInfo, name, initialize, &_SysInfo_ClassInfo_, allocate$SysInfo);
	return class$;
}

$Class* SysInfo::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com