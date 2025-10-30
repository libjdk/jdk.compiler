#include <com/sun/tools/javac/code/Type$Visitor.h>

#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$ModuleType.h>
#include <com/sun/tools/javac/code/Type$PackageType.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$ModuleType = ::com::sun::tools::javac::code::Type$ModuleType;
using $Type$PackageType = ::com::sun::tools::javac::code::Type$PackageType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$Visitor_MethodInfo_[] = {
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ArrayType;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$CapturedType;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ClassType;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ErrorType;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ForAll;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$MethodType;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitModuleType", "(Lcom/sun/tools/javac/code/Type$ModuleType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ModuleType;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$PackageType;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$TypeVar;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$UndetVar;TS;)TR;", $PUBLIC | $ABSTRACT},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$WildcardType;TS;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Type$Visitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$Visitor", "com.sun.tools.javac.code.Type", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Type$Visitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.Type$Visitor",
	nullptr,
	nullptr,
	nullptr,
	_Type$Visitor_MethodInfo_,
	"<R:Ljava/lang/Object;S:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Type$Visitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$Visitor($Class* clazz) {
	return $of($alloc(Type$Visitor));
}

$Class* Type$Visitor::load$($String* name, bool initialize) {
	$loadClass(Type$Visitor, name, initialize, &_Type$Visitor_ClassInfo_, allocate$Type$Visitor);
	return class$;
}

$Class* Type$Visitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com