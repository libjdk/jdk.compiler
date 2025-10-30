#include <com/sun/tools/javac/code/Symtab$4.h>

#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MANDATED

using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symtab$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$4, this$0)},
	{}
};

$MethodInfo _Symtab$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Symtab$4::*)($Symtab*,$Name*,$Symbol*)>(&Symtab$4::init$))},
	{}
};

$EnclosingMethodInfo _Symtab$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symtab",
	"<init>",
	"(Lcom/sun/tools/javac/util/Context;)V"
};

$InnerClassInfo _Symtab$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symtab$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symtab$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symtab$4",
	"com.sun.tools.javac.code.Symbol$ModuleSymbol",
	nullptr,
	_Symtab$4_FieldInfo_,
	_Symtab$4_MethodInfo_,
	nullptr,
	&_Symtab$4_EnclosingMethodInfo_,
	_Symtab$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symtab"
};

$Object* allocate$Symtab$4($Class* clazz) {
	return $of($alloc(Symtab$4));
}

void Symtab$4::init$($Symtab* this$0, $Name* name, $Symbol* owner) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$Symbol$ModuleSymbol::init$(name, owner);
	{
		$set(this, directives, $List::nil());
		$set(this, exports, $List::nil());
		$set(this, provides, $List::nil());
		$set(this, uses, $List::nil());
		$var($Symbol$ModuleSymbol, java_base, this->this$0->enterModule($nc(this->this$0->names)->java_base));
		$init($Directive$RequiresFlag);
		$var($Directive$RequiresDirective, d, $new($Directive$RequiresDirective, java_base, $($EnumSet::of($Directive$RequiresFlag::MANDATED))));
		$set(this, requires, $List::of(d));
	}
}

Symtab$4::Symtab$4() {
}

$Class* Symtab$4::load$($String* name, bool initialize) {
	$loadClass(Symtab$4, name, initialize, &_Symtab$4_ClassInfo_, allocate$Symtab$4);
	return class$;
}

$Class* Symtab$4::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com