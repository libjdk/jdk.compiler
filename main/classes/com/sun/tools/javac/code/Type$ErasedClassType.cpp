#include <com/sun/tools/javac/code/Type$ErasedClassType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$ErasedClassType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$ErasedClassType::*)($Type*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$ErasedClassType::init$))},
	{"hasErasedSupertypes", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$ErasedClassType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$ErasedClassType", "com.sun.tools.javac.code.Type", "ErasedClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$ErasedClassType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$ErasedClassType",
	"com.sun.tools.javac.code.Type$ClassType",
	nullptr,
	nullptr,
	_Type$ErasedClassType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$ErasedClassType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$ErasedClassType($Class* clazz) {
	return $of($alloc(Type$ErasedClassType));
}

void Type$ErasedClassType::init$($Type* outer, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$Type$ClassType::init$(outer, $($List::nil()), tsym, metadata);
}

bool Type$ErasedClassType::hasErasedSupertypes() {
	return true;
}

Type$ErasedClassType::Type$ErasedClassType() {
}

$Class* Type$ErasedClassType::load$($String* name, bool initialize) {
	$loadClass(Type$ErasedClassType, name, initialize, &_Type$ErasedClassType_ClassInfo_, allocate$Type$ErasedClassType);
	return class$;
}

$Class* Type$ErasedClassType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com