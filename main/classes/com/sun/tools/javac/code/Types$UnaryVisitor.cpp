#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>

#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$UnaryVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Types$UnaryVisitor::*)()>(&Types$UnaryVisitor::init$))},
	{"visit", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type;)TR;", $PUBLIC | $FINAL, $method(static_cast<$Object*(Types$UnaryVisitor::*)($Type*)>(&Types$UnaryVisitor::visit))},
	{}
};

$InnerClassInfo _Types$UnaryVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$UnaryVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	nullptr,
	_Types$UnaryVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;>Lcom/sun/tools/javac/code/Types$SimpleVisitor<TR;Ljava/lang/Void;>;",
	nullptr,
	_Types$UnaryVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$UnaryVisitor($Class* clazz) {
	return $of($alloc(Types$UnaryVisitor));
}

void Types$UnaryVisitor::init$() {
	$Types$SimpleVisitor::init$();
}

$Object* Types$UnaryVisitor::visit($Type* t) {
	return $of($nc(t)->accept(static_cast<$Type$Visitor*>(this), ($Object*)nullptr));
}

Types$UnaryVisitor::Types$UnaryVisitor() {
}

$Class* Types$UnaryVisitor::load$($String* name, bool initialize) {
	$loadClass(Types$UnaryVisitor, name, initialize, &_Types$UnaryVisitor_ClassInfo_, allocate$Types$UnaryVisitor);
	return class$;
}

$Class* Types$UnaryVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com