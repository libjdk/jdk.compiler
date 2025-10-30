#include <com/sun/tools/javac/comp/Attr$BreakAttr.h>

#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <jcpp.h>

using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$BreakAttr_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Attr$BreakAttr, serialVersionUID)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE | $TRANSIENT, $field(Attr$BreakAttr, env)},
	{}
};

$MethodInfo _Attr$BreakAttr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(Attr$BreakAttr::*)($Env*)>(&Attr$BreakAttr::init$))},
	{}
};

$InnerClassInfo _Attr$BreakAttr_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$BreakAttr", "com.sun.tools.javac.comp.Attr", "BreakAttr", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Attr$BreakAttr_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$BreakAttr",
	"java.lang.RuntimeException",
	nullptr,
	_Attr$BreakAttr_FieldInfo_,
	_Attr$BreakAttr_MethodInfo_,
	nullptr,
	nullptr,
	_Attr$BreakAttr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$BreakAttr($Class* clazz) {
	return $of($alloc(Attr$BreakAttr));
}

void Attr$BreakAttr::init$($Env* env) {
	$RuntimeException::init$();
	$set(this, env, env);
}

Attr$BreakAttr::Attr$BreakAttr() {
}

Attr$BreakAttr::Attr$BreakAttr(const Attr$BreakAttr& e) : $RuntimeException(e) {
}

void Attr$BreakAttr::throw$() {
	throw *this;
}

$Class* Attr$BreakAttr::load$($String* name, bool initialize) {
	$loadClass(Attr$BreakAttr, name, initialize, &_Attr$BreakAttr_ClassInfo_, allocate$Attr$BreakAttr);
	return class$;
}

$Class* Attr$BreakAttr::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com