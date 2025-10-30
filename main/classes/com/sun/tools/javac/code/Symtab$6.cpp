#include <com/sun/tools/javac/code/Symtab$6.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <jcpp.h>

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::lang::model::element::Element;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symtab$6_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$6, this$0)},
	{}
};

$MethodInfo _Symtab$6_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Kinds$Kind;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Symtab$6::*)($Symtab*,$Kinds$Kind*,int64_t,$Name*,$Type*,$Symbol*)>(&Symtab$6::init$))},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Symtab$6_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symtab",
	"<init>",
	"(Lcom/sun/tools/javac/util/Context;)V"
};

$InnerClassInfo _Symtab$6_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symtab$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Symtab$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symtab$6",
	"com.sun.tools.javac.code.Symbol$TypeSymbol",
	nullptr,
	_Symtab$6_FieldInfo_,
	_Symtab$6_MethodInfo_,
	nullptr,
	&_Symtab$6_EnclosingMethodInfo_,
	_Symtab$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symtab"
};

$Object* allocate$Symtab$6($Class* clazz) {
	return $of($alloc(Symtab$6));
}

void Symtab$6::init$($Symtab* this$0, $Kinds$Kind* kind, int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$set(this, this$0, this$0);
	$Symbol$TypeSymbol::init$(kind, flags, name, type, owner);
}

$Object* Symtab$6::accept($ElementVisitor* v, Object$* p) {
	return $of($nc(v)->visitUnknown(this, p));
}

Symtab$6::Symtab$6() {
}

$Class* Symtab$6::load$($String* name, bool initialize) {
	$loadClass(Symtab$6, name, initialize, &_Symtab$6_ClassInfo_, allocate$Symtab$6);
	return class$;
}

$Class* Symtab$6::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com