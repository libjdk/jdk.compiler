#include <com/sun/tools/javac/comp/Resolve$7.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$LogResolveHelper = ::com::sun::tools::javac::comp::Resolve$LogResolveHelper;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
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

$FieldInfo _Resolve$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$7, this$0)},
	{}
};

$MethodInfo _Resolve$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(static_cast<void(Resolve$7::*)($Resolve*)>(&Resolve$7::init$))},
	{"getArgumentTypes", "(Lcom/sun/tools/javac/comp/Resolve$ResolveError;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/comp/Resolve$ResolveError;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"resolveDiagnosticNeeded", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Resolve$7_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$7_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$LogResolveHelper", "com.sun.tools.javac.comp.Resolve", "LogResolveHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$7",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Resolve$LogResolveHelper",
	_Resolve$7_FieldInfo_,
	_Resolve$7_MethodInfo_,
	nullptr,
	&_Resolve$7_EnclosingMethodInfo_,
	_Resolve$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$7($Class* clazz) {
	return $of($alloc(Resolve$7));
}

void Resolve$7::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
}

bool Resolve$7::resolveDiagnosticNeeded($Type* site, $List* argtypes, $List* typeargtypes) {
	return !$nc(site)->isErroneous();
}

$List* Resolve$7::getArgumentTypes($Resolve$ResolveError* errSym, $Symbol* accessedSym, $Name* name, $List* argtypes) {
	return argtypes;
}

Resolve$7::Resolve$7() {
}

$Class* Resolve$7::load$($String* name, bool initialize) {
	$loadClass(Resolve$7, name, initialize, &_Resolve$7_ClassInfo_, allocate$Resolve$7);
	return class$;
}

$Class* Resolve$7::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com