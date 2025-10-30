#include <com/sun/tools/javac/comp/Annotate$2.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Annotate$AnnotationTypeCompleter = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
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

$FieldInfo _Annotate$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL | $SYNTHETIC, $field(Annotate$2, this$0)},
	{}
};

$MethodInfo _Annotate$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;)V", nullptr, 0, $method(static_cast<void(Annotate$2::*)($Annotate*)>(&Annotate$2::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{}
};

$EnclosingMethodInfo _Annotate$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Annotate",
	nullptr,
	nullptr
};

$InnerClassInfo _Annotate$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeCompleter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Annotate$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Annotate$2",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter",
	_Annotate$2_FieldInfo_,
	_Annotate$2_MethodInfo_,
	nullptr,
	&_Annotate$2_EnclosingMethodInfo_,
	_Annotate$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate"
};

$Object* allocate$Annotate$2($Class* clazz) {
	return $of($alloc(Annotate$2));
}

void Annotate$2::init$($Annotate* this$0) {
	$set(this, this$0, this$0);
}

void Annotate$2::complete($Symbol$ClassSymbol* sym) {
	$var($Env, context, $nc(this->this$0->typeEnvs)->get(sym));
	this->this$0->attributeAnnotationType(context);
}

Annotate$2::Annotate$2() {
}

$Class* Annotate$2::load$($String* name, bool initialize) {
	$loadClass(Annotate$2, name, initialize, &_Annotate$2_ClassInfo_, allocate$Annotate$2);
	return class$;
}

$Class* Annotate$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com