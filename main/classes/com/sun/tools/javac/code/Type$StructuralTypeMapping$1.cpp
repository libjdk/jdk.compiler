#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$StructuralTypeMapping$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;", nullptr, $FINAL | $SYNTHETIC, $field(Type$StructuralTypeMapping$1, this$0)},
	{}
};

$MethodInfo _Type$StructuralTypeMapping$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Type$StructuralTypeMapping$1::*)($Type$StructuralTypeMapping*,$Type*,$List*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$StructuralTypeMapping$1::init$))},
	{"needsStripping", "()Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Type$StructuralTypeMapping$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	"visitClassType",
	"(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Type$StructuralTypeMapping$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$StructuralTypeMapping$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$StructuralTypeMapping$1",
	"com.sun.tools.javac.code.Type$ClassType",
	nullptr,
	_Type$StructuralTypeMapping$1_FieldInfo_,
	_Type$StructuralTypeMapping$1_MethodInfo_,
	nullptr,
	&_Type$StructuralTypeMapping$1_EnclosingMethodInfo_,
	_Type$StructuralTypeMapping$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$StructuralTypeMapping$1($Class* clazz) {
	return $of($alloc(Type$StructuralTypeMapping$1));
}

void Type$StructuralTypeMapping$1::init$($Type$StructuralTypeMapping* this$0, $Type* outer, $List* typarams, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$ClassType::init$(outer, typarams, tsym, metadata);
}

bool Type$StructuralTypeMapping$1::needsStripping() {
	return true;
}

Type$StructuralTypeMapping$1::Type$StructuralTypeMapping$1() {
}

$Class* Type$StructuralTypeMapping$1::load$($String* name, bool initialize) {
	$loadClass(Type$StructuralTypeMapping$1, name, initialize, &_Type$StructuralTypeMapping$1_ClassInfo_, allocate$Type$StructuralTypeMapping$1);
	return class$;
}

$Class* Type$StructuralTypeMapping$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com