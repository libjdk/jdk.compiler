#include <com/sun/tools/javac/code/Types$Subst$1.h>

#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$Subst.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Types$Subst = ::com::sun::tools::javac::code::Types$Subst;
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

$FieldInfo _Types$Subst$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$Subst;", nullptr, $FINAL | $SYNTHETIC, $field(Types$Subst$1, this$1)},
	{}
};

$MethodInfo _Types$Subst$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$Subst;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Types$Subst$1::*)($Types$Subst*,$List*,$Type*)>(&Types$Subst$1::init$))},
	{"needsStripping", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Types$Subst$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$Subst",
	"visitForAll",
	"(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Types$Subst$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$Subst", "com.sun.tools.javac.code.Types", "Subst", $PRIVATE},
	{"com.sun.tools.javac.code.Types$Subst$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ForAll", "com.sun.tools.javac.code.Type", "ForAll", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$Subst$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$Subst$1",
	"com.sun.tools.javac.code.Type$ForAll",
	nullptr,
	_Types$Subst$1_FieldInfo_,
	_Types$Subst$1_MethodInfo_,
	nullptr,
	&_Types$Subst$1_EnclosingMethodInfo_,
	_Types$Subst$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$Subst$1($Class* clazz) {
	return $of($alloc(Types$Subst$1));
}

void Types$Subst$1::init$($Types$Subst* this$1, $List* tvars, $Type* qtype) {
	$set(this, this$1, this$1);
	$Type$ForAll::init$(tvars, qtype);
}

bool Types$Subst$1::needsStripping() {
	return true;
}

Types$Subst$1::Types$Subst$1() {
}

$Class* Types$Subst$1::load$($String* name, bool initialize) {
	$loadClass(Types$Subst$1, name, initialize, &_Types$Subst$1_ClassInfo_, allocate$Types$Subst$1);
	return class$;
}

$Class* Types$Subst$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com