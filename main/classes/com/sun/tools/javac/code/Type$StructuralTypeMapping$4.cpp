#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$4.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
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

$FieldInfo _Type$StructuralTypeMapping$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;", nullptr, $FINAL | $SYNTHETIC, $field(Type$StructuralTypeMapping$4, this$0)},
	{}
};

$MethodInfo _Type$StructuralTypeMapping$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(static_cast<void(Type$StructuralTypeMapping$4::*)($Type$StructuralTypeMapping*,$List*,$Type*,$List*,$Symbol$TypeSymbol*)>(&Type$StructuralTypeMapping$4::init$))},
	{"needsStripping", "()Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Type$StructuralTypeMapping$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	"visitMethodType",
	"(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Type$StructuralTypeMapping$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$MethodType", "com.sun.tools.javac.code.Type", "MethodType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$StructuralTypeMapping$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$StructuralTypeMapping$4",
	"com.sun.tools.javac.code.Type$MethodType",
	nullptr,
	_Type$StructuralTypeMapping$4_FieldInfo_,
	_Type$StructuralTypeMapping$4_MethodInfo_,
	nullptr,
	&_Type$StructuralTypeMapping$4_EnclosingMethodInfo_,
	_Type$StructuralTypeMapping$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$StructuralTypeMapping$4($Class* clazz) {
	return $of($alloc(Type$StructuralTypeMapping$4));
}

void Type$StructuralTypeMapping$4::init$($Type$StructuralTypeMapping* this$0, $List* argtypes, $Type* restype, $List* thrown, $Symbol$TypeSymbol* methodClass) {
	$set(this, this$0, this$0);
	$Type$MethodType::init$(argtypes, restype, thrown, methodClass);
}

bool Type$StructuralTypeMapping$4::needsStripping() {
	return true;
}

Type$StructuralTypeMapping$4::Type$StructuralTypeMapping$4() {
}

$Class* Type$StructuralTypeMapping$4::load$($String* name, bool initialize) {
	$loadClass(Type$StructuralTypeMapping$4, name, initialize, &_Type$StructuralTypeMapping$4_ClassInfo_, allocate$Type$StructuralTypeMapping$4);
	return class$;
}

$Class* Type$StructuralTypeMapping$4::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com