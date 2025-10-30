#include <com/sun/tools/javac/code/Type$UnknownType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/util/List.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef EMPTY
#undef UNKNOWN

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $1List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$UnknownType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type$UnknownType::*)()>(&Type$UnknownType::init$))},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$UnknownType;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"isPartial", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$UnknownType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UnknownType", "com.sun.tools.javac.code.Type", "UnknownType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$UnknownType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$UnknownType",
	"com.sun.tools.javac.code.Type",
	nullptr,
	nullptr,
	_Type$UnknownType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$UnknownType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UnknownType($Class* clazz) {
	return $of($alloc(Type$UnknownType));
}

void Type$UnknownType::init$() {
	$init($TypeMetadata);
	$Type::init$(nullptr, $TypeMetadata::EMPTY);
}

Type$UnknownType* Type$UnknownType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to an unknown type"_s));
	$shouldNotReachHere();
}

$TypeTag* Type$UnknownType::getTag() {
	$init($TypeTag);
	return $TypeTag::UNKNOWN;
}

$Object* Type$UnknownType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitUnknown(this, p));
}

bool Type$UnknownType::isPartial() {
	return true;
}

$List* Type$UnknownType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$UnknownType::Type$UnknownType() {
}

$Class* Type$UnknownType::load$($String* name, bool initialize) {
	$loadClass(Type$UnknownType, name, initialize, &_Type$UnknownType_ClassInfo_, allocate$Type$UnknownType);
	return class$;
}

$Class* Type$UnknownType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com