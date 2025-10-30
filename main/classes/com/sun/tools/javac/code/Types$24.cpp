#include <com/sun/tools/javac/code/Types$24.h>

#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Types$HashCodeVisitor.h>
#include <jcpp.h>

using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types$HashCodeVisitor = ::com::sun::tools::javac::code::Types$HashCodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$24_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Types$24::*)()>(&Types$24::init$))},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$24_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$24_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$24", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$HashCodeVisitor", "com.sun.tools.javac.code.Types", "HashCodeVisitor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Types$24_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$24",
	"com.sun.tools.javac.code.Types$HashCodeVisitor",
	nullptr,
	nullptr,
	_Types$24_MethodInfo_,
	nullptr,
	&_Types$24_EnclosingMethodInfo_,
	_Types$24_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$24($Class* clazz) {
	return $of($alloc(Types$24));
}

void Types$24::init$() {
	$Types$HashCodeVisitor::init$();
}

$Integer* Types$24::visitTypeVar($Type$TypeVar* t, $Void* ignored) {
	return $Integer::valueOf($System::identityHashCode(t));
}

$Object* Types$24::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

Types$24::Types$24() {
}

$Class* Types$24::load$($String* name, bool initialize) {
	$loadClass(Types$24, name, initialize, &_Types$24_ClassInfo_, allocate$Types$24);
	return class$;
}

$Class* Types$24::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com