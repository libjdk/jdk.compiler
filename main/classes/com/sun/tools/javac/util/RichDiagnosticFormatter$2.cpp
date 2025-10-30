#include <com/sun/tools/javac/util/RichDiagnosticFormatter$2.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultSymbolVisitor.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$ClassNameSimplifier.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types$DefaultSymbolVisitor = ::com::sun::tools::javac::code::Types$DefaultSymbolVisitor;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $RichDiagnosticFormatter = ::com::sun::tools::javac::util::RichDiagnosticFormatter;
using $RichDiagnosticFormatter$ClassNameSimplifier = ::com::sun::tools::javac::util::RichDiagnosticFormatter$ClassNameSimplifier;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _RichDiagnosticFormatter$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(RichDiagnosticFormatter$2, this$0)},
	{}
};

$MethodInfo _RichDiagnosticFormatter$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter;)V", nullptr, 0, $method(static_cast<void(RichDiagnosticFormatter$2::*)($RichDiagnosticFormatter*)>(&RichDiagnosticFormatter$2::init$))},
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _RichDiagnosticFormatter$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.RichDiagnosticFormatter",
	nullptr,
	nullptr
};

$InnerClassInfo _RichDiagnosticFormatter$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$DefaultSymbolVisitor", "com.sun.tools.javac.code.Types", "DefaultSymbolVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RichDiagnosticFormatter$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.RichDiagnosticFormatter$2",
	"com.sun.tools.javac.code.Types$DefaultSymbolVisitor",
	nullptr,
	_RichDiagnosticFormatter$2_FieldInfo_,
	_RichDiagnosticFormatter$2_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$DefaultSymbolVisitor<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_RichDiagnosticFormatter$2_EnclosingMethodInfo_,
	_RichDiagnosticFormatter$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RichDiagnosticFormatter"
};

$Object* allocate$RichDiagnosticFormatter$2($Class* clazz) {
	return $of($alloc(RichDiagnosticFormatter$2));
}

void RichDiagnosticFormatter$2::init$($RichDiagnosticFormatter* this$0) {
	$set(this, this$0, this$0);
	$Types$DefaultSymbolVisitor::init$();
}

$Void* RichDiagnosticFormatter$2::visitClassSymbol($Symbol$ClassSymbol* s, $Void* ignored) {
	if ($nc($nc(s)->type)->isCompound()) {
		$nc(this->this$0->typePreprocessor)->visit(s->type);
	} else {
		$nc(this->this$0->nameSimplifier)->addUsage(s);
	}
	return nullptr;
}

$Void* RichDiagnosticFormatter$2::visitSymbol($Symbol* s, $Void* ignored) {
	return nullptr;
}

$Void* RichDiagnosticFormatter$2::visitMethodSymbol($Symbol$MethodSymbol* s, $Void* ignored) {
	visit($nc(s)->owner, nullptr);
	if ($nc(s)->type != nullptr) {
		$nc(this->this$0->typePreprocessor)->visit(s->type);
	}
	return nullptr;
}

$Object* RichDiagnosticFormatter$2::visitMethodSymbol($Symbol$MethodSymbol* s, Object$* ignored) {
	return $of(this->visitMethodSymbol(s, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$2::visitClassSymbol($Symbol$ClassSymbol* s, Object$* ignored) {
	return $of(this->visitClassSymbol(s, $cast($Void, ignored)));
}

$Object* RichDiagnosticFormatter$2::visitSymbol($Symbol* s, Object$* ignored) {
	return $of(this->visitSymbol(s, $cast($Void, ignored)));
}

RichDiagnosticFormatter$2::RichDiagnosticFormatter$2() {
}

$Class* RichDiagnosticFormatter$2::load$($String* name, bool initialize) {
	$loadClass(RichDiagnosticFormatter$2, name, initialize, &_RichDiagnosticFormatter$2_ClassInfo_, allocate$RichDiagnosticFormatter$2);
	return class$;
}

$Class* RichDiagnosticFormatter$2::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com