#include <com/sun/tools/javac/code/Types$DefaultSymbolVisitor.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$DefaultSymbolVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Types$DefaultSymbolVisitor::*)()>(&Types$DefaultSymbolVisitor::init$))},
	{"visit", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol;TS;)TR;", $PUBLIC | $FINAL, $method(static_cast<$Object*(Types$DefaultSymbolVisitor::*)($Symbol*,Object$*)>(&Types$DefaultSymbolVisitor::visit))},
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;TS;)TR;", $PUBLIC},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;TS;)TR;", $PUBLIC},
	{"visitOperatorSymbol", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;TS;)TR;", $PUBLIC},
	{"visitPackageSymbol", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;TS;)TR;", $PUBLIC},
	{"visitTypeSymbol", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;TS;)TR;", $PUBLIC},
	{"visitVarSymbol", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;TS;)TR;", $PUBLIC},
	{}
};

$InnerClassInfo _Types$DefaultSymbolVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$DefaultSymbolVisitor", "com.sun.tools.javac.code.Types", "DefaultSymbolVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$Visitor", "com.sun.tools.javac.code.Symbol", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Types$DefaultSymbolVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Types$DefaultSymbolVisitor",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Visitor",
	nullptr,
	_Types$DefaultSymbolVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;S:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TS;>;",
	nullptr,
	_Types$DefaultSymbolVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$DefaultSymbolVisitor($Class* clazz) {
	return $of($alloc(Types$DefaultSymbolVisitor));
}

void Types$DefaultSymbolVisitor::init$() {
}

$Object* Types$DefaultSymbolVisitor::visit($Symbol* s, Object$* arg) {
	return $of($nc(s)->accept(static_cast<$Symbol$Visitor*>(this), arg));
}

$Object* Types$DefaultSymbolVisitor::visitClassSymbol($Symbol$ClassSymbol* s, Object$* arg) {
	return $of(visitSymbol(s, arg));
}

$Object* Types$DefaultSymbolVisitor::visitMethodSymbol($Symbol$MethodSymbol* s, Object$* arg) {
	return $of(visitSymbol(s, arg));
}

$Object* Types$DefaultSymbolVisitor::visitOperatorSymbol($Symbol$OperatorSymbol* s, Object$* arg) {
	return $of(visitSymbol(s, arg));
}

$Object* Types$DefaultSymbolVisitor::visitPackageSymbol($Symbol$PackageSymbol* s, Object$* arg) {
	return $of(visitSymbol(s, arg));
}

$Object* Types$DefaultSymbolVisitor::visitTypeSymbol($Symbol$TypeSymbol* s, Object$* arg) {
	return $of(visitSymbol(s, arg));
}

$Object* Types$DefaultSymbolVisitor::visitVarSymbol($Symbol$VarSymbol* s, Object$* arg) {
	return $of(visitSymbol(s, arg));
}

Types$DefaultSymbolVisitor::Types$DefaultSymbolVisitor() {
}

$Class* Types$DefaultSymbolVisitor::load$($String* name, bool initialize) {
	$loadClass(Types$DefaultSymbolVisitor, name, initialize, &_Types$DefaultSymbolVisitor_ClassInfo_, allocate$Types$DefaultSymbolVisitor);
	return class$;
}

$Class* Types$DefaultSymbolVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com