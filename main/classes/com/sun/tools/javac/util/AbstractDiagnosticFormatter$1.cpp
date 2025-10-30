#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$1.h>

#include <com/sun/tools/javac/code/Printer.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Printer = ::com::sun::tools::javac::code::Printer;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _AbstractDiagnosticFormatter$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDiagnosticFormatter$1, this$0)},
	{}
};

$MethodInfo _AbstractDiagnosticFormatter$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter;)V", nullptr, 0, $method(static_cast<void(AbstractDiagnosticFormatter$1::*)($AbstractDiagnosticFormatter*)>(&AbstractDiagnosticFormatter$1::init$))},
	{"capturedVarId", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"localize", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AbstractDiagnosticFormatter$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter",
	nullptr,
	nullptr
};

$InnerClassInfo _AbstractDiagnosticFormatter$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractDiagnosticFormatter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter$1",
	"com.sun.tools.javac.code.Printer",
	nullptr,
	_AbstractDiagnosticFormatter$1_FieldInfo_,
	_AbstractDiagnosticFormatter$1_MethodInfo_,
	nullptr,
	&_AbstractDiagnosticFormatter$1_EnclosingMethodInfo_,
	_AbstractDiagnosticFormatter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter"
};

$Object* allocate$AbstractDiagnosticFormatter$1($Class* clazz) {
	return $of($alloc(AbstractDiagnosticFormatter$1));
}

void AbstractDiagnosticFormatter$1::init$($AbstractDiagnosticFormatter* this$0) {
	$set(this, this$0, this$0);
	$Printer::init$();
}

$String* AbstractDiagnosticFormatter$1::localize($Locale* locale, $String* key, $ObjectArray* args) {
	return this->this$0->localize(locale, key, args);
}

$String* AbstractDiagnosticFormatter$1::capturedVarId($Type$CapturedType* t, $Locale* locale) {
	return $str({""_s, $$str(($nc(this->this$0->allCaptured)->indexOf(t) + 1))});
}

$String* AbstractDiagnosticFormatter$1::visitCapturedType($Type$CapturedType* t, $Locale* locale) {
	if (!$nc(this->this$0->allCaptured)->contains(t)) {
		$set(this->this$0, allCaptured, $nc(this->this$0->allCaptured)->append(t));
	}
	return $Printer::visitCapturedType(t, locale);
}

$Object* AbstractDiagnosticFormatter$1::visitCapturedType($Type$CapturedType* t, Object$* locale) {
	return $of(this->visitCapturedType(t, $cast($Locale, locale)));
}

AbstractDiagnosticFormatter$1::AbstractDiagnosticFormatter$1() {
}

$Class* AbstractDiagnosticFormatter$1::load$($String* name, bool initialize) {
	$loadClass(AbstractDiagnosticFormatter$1, name, initialize, &_AbstractDiagnosticFormatter$1_ClassInfo_, allocate$AbstractDiagnosticFormatter$1);
	return class$;
}

$Class* AbstractDiagnosticFormatter$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com