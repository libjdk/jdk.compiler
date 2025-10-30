#include <com/sun/tools/javac/code/Type$CapturedType.h>

#include <com/sun/tools/javac/code/Printer.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$CapturedType$1.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef PRIME

using $Printer = ::com::sun::tools::javac::code::Printer;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType$1 = ::com::sun::tools::javac::code::Type$CapturedType$1;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$CapturedType_FieldInfo_[] = {
	{"wildcard", "Lcom/sun/tools/javac/code/Type$WildcardType;", nullptr, $PUBLIC, $field(Type$CapturedType, wildcard)},
	{}
};

$MethodInfo _Type$CapturedType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$WildcardType;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$CapturedType::*)($Name*,$Symbol*,$Type*,$Type*,$Type$WildcardType*)>(&Type$CapturedType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$CapturedType::*)($Symbol$TypeSymbol*,$Type*,$Type*,$Type*,$Type$WildcardType*,$TypeMetadata*)>(&Type$CapturedType::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$CapturedType;", nullptr, $PUBLIC},
	{"isCaptured", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$CapturedType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$CapturedType", "com.sun.tools.javac.code.Type", "CapturedType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$TypeVar", "com.sun.tools.javac.code.Type", "TypeVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$CapturedType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$CapturedType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$CapturedType",
	"com.sun.tools.javac.code.Type$TypeVar",
	nullptr,
	_Type$CapturedType_FieldInfo_,
	_Type$CapturedType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$CapturedType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$CapturedType($Class* clazz) {
	return $of($alloc(Type$CapturedType));
}

void Type$CapturedType::init$($Name* name, $Symbol* owner, $Type* upper, $Type* lower, $Type$WildcardType* wildcard) {
	$Type$TypeVar::init$(name, owner, lower);
	$set(this, lower, $cast($Type, $Assert::checkNonNull(lower)));
	this->setUpperBound(upper);
	$set(this, wildcard, wildcard);
}

void Type$CapturedType::init$($Symbol$TypeSymbol* tsym, $Type* bound, $Type* upper, $Type* lower, $Type$WildcardType* wildcard, $TypeMetadata* metadata) {
	$Type$TypeVar::init$(tsym, bound, lower, metadata);
	$set(this, wildcard, wildcard);
}

Type$CapturedType* Type$CapturedType::cloneWithMetadata($TypeMetadata* md) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$TypeSymbol, var$0, this->tsym);
	$var($Type, var$1, getUpperBound());
	return $new($Type$CapturedType$1, this, var$0, var$1, $(getUpperBound()), this->lower, this->wildcard, md);
}

$Object* Type$CapturedType::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitCapturedType(this, s));
}

bool Type$CapturedType::isCaptured() {
	return true;
}

$String* Type$CapturedType::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	appendAnnotationsString(sb);
	sb->append("capture#"_s);
	sb->append($mod(((int64_t)(hashCode() & (uint64_t)(int64_t)0x00000000FFFFFFFF)), $Printer::PRIME));
	sb->append(" of "_s);
	sb->append($of(this->wildcard));
	return sb->toString();
}

Type$CapturedType::Type$CapturedType() {
}

$Class* Type$CapturedType::load$($String* name, bool initialize) {
	$loadClass(Type$CapturedType, name, initialize, &_Type$CapturedType_ClassInfo_, allocate$Type$CapturedType);
	return class$;
}

$Class* Type$CapturedType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com