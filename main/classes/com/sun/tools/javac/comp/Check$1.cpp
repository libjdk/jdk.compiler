#include <com/sun/tools/javac/comp/Check$1.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $Warner = ::com::sun::tools::javac::util::Warner;
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

$FieldInfo _Check$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$1, this$0)},
	{}
};

$MethodInfo _Check$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, 0, $method(static_cast<void(Check$1::*)($Check*)>(&Check$1::init$))},
	{"checkWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC},
	{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC},
	{"deferredAttrContext", "()Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $PUBLIC},
	{"inferenceContext", "()Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Check$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Check",
	nullptr,
	nullptr
};

$InnerClassInfo _Check$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Check$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$1",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Check$CheckContext",
	_Check$1_FieldInfo_,
	_Check$1_MethodInfo_,
	nullptr,
	&_Check$1_EnclosingMethodInfo_,
	_Check$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$1($Class* clazz) {
	return $of($alloc(Check$1));
}

void Check$1::init$($Check* this$0) {
	$set(this, this$0, this$0);
}

void Check$1::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::ProbFoundReq(details)));
}

bool Check$1::compatible($Type* found, $Type* req, $Warner* warn) {
	return $nc(this->this$0->types)->isAssignable(found, req, warn);
}

$Warner* Check$1::checkWarner($JCDiagnostic$DiagnosticPosition* pos, $Type* found, $Type* req) {
	return this->this$0->convertWarner(pos, found, req);
}

$InferenceContext* Check$1::inferenceContext() {
	return $nc(this->this$0->infer)->emptyContext;
}

$DeferredAttr$DeferredAttrContext* Check$1::deferredAttrContext() {
	return $nc(this->this$0->deferredAttr)->emptyDeferredAttrContext;
}

$String* Check$1::toString() {
	return "CheckContext: basicHandler"_s;
}

Check$1::Check$1() {
}

$Class* Check$1::load$($String* name, bool initialize) {
	$loadClass(Check$1, name, initialize, &_Check$1_ClassInfo_, allocate$Check$1);
	return class$;
}

$Class* Check$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com