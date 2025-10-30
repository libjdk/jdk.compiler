#include <com/sun/tools/javac/code/Types$MapVisitor.h>

#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$MapVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Types$MapVisitor::*)()>(&Types$MapVisitor::init$))},
	{"visit", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Type*(Types$MapVisitor::*)($Type*)>(&Types$MapVisitor::visit))},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;TS;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{}
};

$InnerClassInfo _Types$MapVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$DefaultTypeVisitor", "com.sun.tools.javac.code.Types", "DefaultTypeVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$MapVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Types$MapVisitor",
	"com.sun.tools.javac.code.Types$DefaultTypeVisitor",
	nullptr,
	nullptr,
	_Types$MapVisitor_MethodInfo_,
	"<S:Ljava/lang/Object;>Lcom/sun/tools/javac/code/Types$DefaultTypeVisitor<Lcom/sun/tools/javac/code/Type;TS;>;",
	nullptr,
	_Types$MapVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$MapVisitor($Class* clazz) {
	return $of($alloc(Types$MapVisitor));
}

void Types$MapVisitor::init$() {
	$Types$DefaultTypeVisitor::init$();
}

$Type* Types$MapVisitor::visit($Type* t) {
	return $cast($Type, $nc(t)->accept(static_cast<$Type$Visitor*>(this), ($Object*)nullptr));
}

$Object* Types$MapVisitor::visitType($Type* t, Object$* s) {
	return $of(t);
}

Types$MapVisitor::Types$MapVisitor() {
}

$Class* Types$MapVisitor::load$($String* name, bool initialize) {
	$loadClass(Types$MapVisitor, name, initialize, &_Types$MapVisitor_ClassInfo_, allocate$Types$MapVisitor);
	return class$;
}

$Class* Types$MapVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com