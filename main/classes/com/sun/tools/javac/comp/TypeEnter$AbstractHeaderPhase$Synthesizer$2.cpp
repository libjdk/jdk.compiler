#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer$2.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $TypeEnter$AbstractHeaderPhase$Synthesizer = ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase$Synthesizer;
using $List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$2_FieldInfo_[] = {
	{"this$2", "Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$Synthesizer$2, this$2)},
	{}
};

$MethodInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(static_cast<void(TypeEnter$AbstractHeaderPhase$Synthesizer$2::*)($TypeEnter$AbstractHeaderPhase$Synthesizer*,$Type*,$Symbol$TypeSymbol*)>(&TypeEnter$AbstractHeaderPhase$Synthesizer$2::init$))},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer",
	"synthesizeClass",
	"(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$ClassSymbol;"
};

$InnerClassInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer", "com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "Synthesizer", $PRIVATE},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$2",
	"com.sun.tools.javac.code.Type$ErrorType",
	nullptr,
	_TypeEnter$AbstractHeaderPhase$Synthesizer$2_FieldInfo_,
	_TypeEnter$AbstractHeaderPhase$Synthesizer$2_MethodInfo_,
	nullptr,
	&_TypeEnter$AbstractHeaderPhase$Synthesizer$2_EnclosingMethodInfo_,
	_TypeEnter$AbstractHeaderPhase$Synthesizer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$AbstractHeaderPhase$Synthesizer$2($Class* clazz) {
	return $of($alloc(TypeEnter$AbstractHeaderPhase$Synthesizer$2));
}

void TypeEnter$AbstractHeaderPhase$Synthesizer$2::init$($TypeEnter$AbstractHeaderPhase$Synthesizer* this$2, $Type* originalType, $Symbol$TypeSymbol* tsym) {
	$set(this, this$2, this$2);
	$Type$ErrorType::init$(originalType, tsym);
}

$List* TypeEnter$AbstractHeaderPhase$Synthesizer$2::getTypeArguments() {
	return this->typarams_field;
}

TypeEnter$AbstractHeaderPhase$Synthesizer$2::TypeEnter$AbstractHeaderPhase$Synthesizer$2() {
}

$Class* TypeEnter$AbstractHeaderPhase$Synthesizer$2::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$AbstractHeaderPhase$Synthesizer$2, name, initialize, &_TypeEnter$AbstractHeaderPhase$Synthesizer$2_ClassInfo_, allocate$TypeEnter$AbstractHeaderPhase$Synthesizer$2);
	return class$;
}

$Class* TypeEnter$AbstractHeaderPhase$Synthesizer$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com