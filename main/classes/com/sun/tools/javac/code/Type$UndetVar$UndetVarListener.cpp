#include <com/sun/tools/javac/code/Type$UndetVar$UndetVarListener.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$UndetVar$UndetVarListener_MethodInfo_[] = {
	{"varBoundChanged", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"varInstantiated", "(Lcom/sun/tools/javac/code/Type$UndetVar;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$UndetVar$UndetVarListener_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener", "com.sun.tools.javac.code.Type$UndetVar", "UndetVarListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Type$UndetVar$UndetVarListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener",
	nullptr,
	nullptr,
	nullptr,
	_Type$UndetVar$UndetVarListener_MethodInfo_,
	nullptr,
	nullptr,
	_Type$UndetVar$UndetVarListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UndetVar$UndetVarListener($Class* clazz) {
	return $of($alloc(Type$UndetVar$UndetVarListener));
}

void Type$UndetVar$UndetVarListener::varInstantiated($Type$UndetVar* uv) {
	$Assert::error();
}

$Class* Type$UndetVar$UndetVarListener::load$($String* name, bool initialize) {
	$loadClass(Type$UndetVar$UndetVarListener, name, initialize, &_Type$UndetVar$UndetVarListener_ClassInfo_, allocate$Type$UndetVar$UndetVarListener);
	return class$;
}

$Class* Type$UndetVar$UndetVarListener::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com