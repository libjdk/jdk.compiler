#include <com/sun/tools/javac/comp/Attr$10.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$10_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$10, this$0)},
	{}
};

$MethodInfo _Attr$10_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, 0, $method(static_cast<void(Attr$10::*)($Attr*,$Check$CheckContext*)>(&Attr$10::init$))},
	{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$10_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	"visitTypeCast",
	"(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V"
};

$InnerClassInfo _Attr$10_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$10", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTypeCast", "com.sun.tools.javac.tree.JCTree", "JCTypeCast", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attr$10_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$10",
	"com.sun.tools.javac.comp.Check$NestedCheckContext",
	nullptr,
	_Attr$10_FieldInfo_,
	_Attr$10_MethodInfo_,
	nullptr,
	&_Attr$10_EnclosingMethodInfo_,
	_Attr$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$10($Class* clazz) {
	return $of($alloc(Attr$10));
}

void Attr$10::init$($Attr* this$0, $Check$CheckContext* enclosingContext) {
	$set(this, this$0, this$0);
	$Check$NestedCheckContext::init$(enclosingContext);
}

bool Attr$10::compatible($Type* found, $Type* req, $Warner* warn) {
	return $nc(this->this$0->types)->isCastable(found, req, warn);
}

Attr$10::Attr$10() {
}

$Class* Attr$10::load$($String* name, bool initialize) {
	$loadClass(Attr$10, name, initialize, &_Attr$10_ClassInfo_, allocate$Attr$10);
	return class$;
}

$Class* Attr$10::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com