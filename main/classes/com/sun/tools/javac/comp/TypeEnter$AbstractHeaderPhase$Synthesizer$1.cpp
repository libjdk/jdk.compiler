#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
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

$FieldInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$1_FieldInfo_[] = {
	{"this$2", "Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$Synthesizer$1, this$2)},
	{"val$actuals", "Lcom/sun/tools/javac/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AbstractHeaderPhase$Synthesizer$1, val$actuals)},
	{}
};

$MethodInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase$Synthesizer;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List;)V", nullptr, 0, $method(static_cast<void(TypeEnter$AbstractHeaderPhase$Synthesizer$1::*)($TypeEnter$AbstractHeaderPhase$Synthesizer*,$Type*,$Symbol$TypeSymbol*,$List*)>(&TypeEnter$AbstractHeaderPhase$Synthesizer$1::init$))},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer",
	"visitTypeApply",
	"(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V"
};

$InnerClassInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer", "com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "Synthesizer", $PRIVATE},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTypeApply", "com.sun.tools.javac.tree.JCTree", "JCTypeApply", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TypeEnter$AbstractHeaderPhase$Synthesizer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$1",
	"com.sun.tools.javac.code.Type$ErrorType",
	nullptr,
	_TypeEnter$AbstractHeaderPhase$Synthesizer$1_FieldInfo_,
	_TypeEnter$AbstractHeaderPhase$Synthesizer$1_MethodInfo_,
	nullptr,
	&_TypeEnter$AbstractHeaderPhase$Synthesizer$1_EnclosingMethodInfo_,
	_TypeEnter$AbstractHeaderPhase$Synthesizer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$AbstractHeaderPhase$Synthesizer$1($Class* clazz) {
	return $of($alloc(TypeEnter$AbstractHeaderPhase$Synthesizer$1));
}

void TypeEnter$AbstractHeaderPhase$Synthesizer$1::init$($TypeEnter$AbstractHeaderPhase$Synthesizer* this$2, $Type* originalType, $Symbol$TypeSymbol* tsym, $List* val$actuals) {
	$set(this, this$2, this$2);
	$set(this, val$actuals, val$actuals);
	$Type$ErrorType::init$(originalType, tsym);
}

$List* TypeEnter$AbstractHeaderPhase$Synthesizer$1::getTypeArguments() {
	return this->val$actuals;
}

TypeEnter$AbstractHeaderPhase$Synthesizer$1::TypeEnter$AbstractHeaderPhase$Synthesizer$1() {
}

$Class* TypeEnter$AbstractHeaderPhase$Synthesizer$1::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$AbstractHeaderPhase$Synthesizer$1, name, initialize, &_TypeEnter$AbstractHeaderPhase$Synthesizer$1_ClassInfo_, allocate$TypeEnter$AbstractHeaderPhase$Synthesizer$1);
	return class$;
}

$Class* TypeEnter$AbstractHeaderPhase$Synthesizer$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com