#include <com/sun/tools/javac/code/Types$17.h>

#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$17_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$17, this$0)},
	{}
};

$MethodInfo _Types$17_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$17::*)($Types*)>(&Types$17::init$))},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$17_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$17_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$17", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$17_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$17",
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	nullptr,
	_Types$17_FieldInfo_,
	_Types$17_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;",
	&_Types$17_EnclosingMethodInfo_,
	_Types$17_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$17($Class* clazz) {
	return $of($alloc(Types$17));
}

void Types$17::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$List* Types$17::visitType($Type* type, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(type)->isIntersection()) {
		$var($Type, sup, this->this$0->supertype(type));
		$init($Type);
		return ($equals(sup, $Type::noType) || sup == type || sup == nullptr) ? this->this$0->interfaces(type) : $nc($(this->this$0->interfaces(type)))->prepend(sup);
	} else {
		return $nc(($cast($Type$IntersectionClassType, type)))->getExplicitComponents();
	}
}

$Object* Types$17::visitType($Type* type, Object$* ignored) {
	return $of(this->visitType(type, $cast($Void, ignored)));
}

Types$17::Types$17() {
}

$Class* Types$17::load$($String* name, bool initialize) {
	$loadClass(Types$17, name, initialize, &_Types$17_ClassInfo_, allocate$Types$17);
	return class$;
}

$Class* Types$17::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com