#include <com/sun/tools/javac/code/Symbol$Visitor.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Symbol$Visitor_MethodInfo_[] = {
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitOperatorSymbol", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitPackageSymbol", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitTypeSymbol", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitVarSymbol", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;TP;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Symbol$Visitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$Visitor", "com.sun.tools.javac.code.Symbol", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$Visitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.Symbol$Visitor",
	nullptr,
	nullptr,
	nullptr,
	_Symbol$Visitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Symbol$Visitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$Visitor($Class* clazz) {
	return $of($alloc(Symbol$Visitor));
}

$Class* Symbol$Visitor::load$($String* name, bool initialize) {
	$loadClass(Symbol$Visitor, name, initialize, &_Symbol$Visitor_ClassInfo_, allocate$Symbol$Visitor);
	return class$;
}

$Class* Symbol$Visitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com