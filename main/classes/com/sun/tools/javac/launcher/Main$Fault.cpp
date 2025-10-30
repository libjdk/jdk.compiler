#include <com/sun/tools/javac/launcher/Main$Fault.h>

#include <com/sun/tools/javac/launcher/Main.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::javac::launcher::Main;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$Fault_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/launcher/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Fault, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main$Fault, serialVersionUID)},
	{}
};

$MethodInfo _Main$Fault_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/launcher/Main;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, 0, $method(static_cast<void(Main$Fault::*)($Main*,$JCDiagnostic$Error*)>(&Main$Fault::init$))},
	{}
};

$InnerClassInfo _Main$Fault_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$Fault", "com.sun.tools.javac.launcher.Main", "Fault", $PUBLIC},
	{}
};

$ClassInfo _Main$Fault_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$Fault",
	"java.lang.Exception",
	nullptr,
	_Main$Fault_FieldInfo_,
	_Main$Fault_MethodInfo_,
	nullptr,
	nullptr,
	_Main$Fault_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$Fault($Class* clazz) {
	return $of($alloc(Main$Fault));
}

void Main$Fault::init$($Main* this$0, $JCDiagnostic$Error* error) {
	$set(this, this$0, this$0);
	$Exception::init$($(this$0->getMessage(error)));
}

Main$Fault::Main$Fault() {
}

Main$Fault::Main$Fault(const Main$Fault& e) : $Exception(e) {
}

void Main$Fault::throw$() {
	throw *this;
}

$Class* Main$Fault::load$($String* name, bool initialize) {
	$loadClass(Main$Fault, name, initialize, &_Main$Fault_ClassInfo_, allocate$Main$Fault);
	return class$;
}

$Class* Main$Fault::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com