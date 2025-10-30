#include <com/sun/tools/javac/code/Symtab$3.h>

#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
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
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
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

$FieldInfo _Symtab$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$3, this$0)},
	{}
};

$MethodInfo _Symtab$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Symtab$3::*)($Symtab*,$Name*,$Symbol*)>(&Symtab$3::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Symtab$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symtab",
	"<init>",
	"(Lcom/sun/tools/javac/util/Context;)V"
};

$InnerClassInfo _Symtab$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symtab$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symtab$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symtab$3",
	"com.sun.tools.javac.code.Symbol$ModuleSymbol",
	nullptr,
	_Symtab$3_FieldInfo_,
	_Symtab$3_MethodInfo_,
	nullptr,
	&_Symtab$3_EnclosingMethodInfo_,
	_Symtab$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symtab"
};

$Object* allocate$Symtab$3($Class* clazz) {
	return $of($alloc(Symtab$3));
}

void Symtab$3::init$($Symtab* this$0, $Name* name, $Symbol* owner) {
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

$String* Symtab$3::toString() {
	return $nc(this->this$0->messages)->getLocalizedString("compiler.misc.unnamed.module"_s, $$new($ObjectArray, 0));
}

Symtab$3::Symtab$3() {
}

$Class* Symtab$3::load$($String* name, bool initialize) {
	$loadClass(Symtab$3, name, initialize, &_Symtab$3_ClassInfo_, allocate$Symtab$3);
	return class$;
}

$Class* Symtab$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com