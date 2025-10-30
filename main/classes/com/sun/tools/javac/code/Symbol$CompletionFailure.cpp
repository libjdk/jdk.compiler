#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/util/Locale.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $Supplier = ::java::util::function::Supplier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$CompletionFailure_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Symbol$CompletionFailure, serialVersionUID)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $field(Symbol$CompletionFailure, dcfh)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $TRANSIENT, $field(Symbol$CompletionFailure, sym)},
	{"diag", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $TRANSIENT, $field(Symbol$CompletionFailure, diag)},
	{"diagSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE | $TRANSIENT, $field(Symbol$CompletionFailure, diagSupplier)},
	{}
};

$MethodInfo _Symbol$CompletionFailure_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/function/Supplier;Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/JCDiagnostic;>;Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", $PUBLIC, $method(static_cast<void(Symbol$CompletionFailure::*)($Symbol*,$Supplier*,$DeferredCompletionFailureHandler*)>(&Symbol$CompletionFailure::init$))},
	{"getDetailValue", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"getDiagnostic", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"initCause", "(Ljava/lang/Throwable;)Lcom/sun/tools/javac/code/Symbol$CompletionFailure;", nullptr, $PUBLIC},
	{"resetDiagnostic", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/JCDiagnostic;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$CompletionFailure_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$CompletionFailure", "com.sun.tools.javac.code.Symbol", "CompletionFailure", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symbol$CompletionFailure_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$CompletionFailure",
	"java.lang.RuntimeException",
	nullptr,
	_Symbol$CompletionFailure_FieldInfo_,
	_Symbol$CompletionFailure_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$CompletionFailure_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$CompletionFailure($Class* clazz) {
	return $of($alloc(Symbol$CompletionFailure));
}

void Symbol$CompletionFailure::init$($Symbol* sym, $Supplier* diagSupplier, $DeferredCompletionFailureHandler* dcfh) {
	$RuntimeException::init$();
	$set(this, dcfh, dcfh);
	$set(this, sym, sym);
	$set(this, diagSupplier, diagSupplier);
}

$JCDiagnostic* Symbol$CompletionFailure::getDiagnostic() {
	if (this->diag == nullptr && this->diagSupplier != nullptr) {
		$set(this, diag, $cast($JCDiagnostic, $nc(this->diagSupplier)->get()));
	}
	return this->diag;
}

$String* Symbol$CompletionFailure::getMessage() {
	return $nc($(getDiagnostic()))->getMessage(nullptr);
}

$JCDiagnostic* Symbol$CompletionFailure::getDetailValue() {
	return getDiagnostic();
}

Symbol$CompletionFailure* Symbol$CompletionFailure::initCause($Throwable* cause) {
	$RuntimeException::initCause(cause);
	return this;
}

void Symbol$CompletionFailure::resetDiagnostic($Supplier* diagSupplier) {
	$set(this, diagSupplier, diagSupplier);
	$set(this, diag, nullptr);
}

Symbol$CompletionFailure::Symbol$CompletionFailure() {
}

Symbol$CompletionFailure::Symbol$CompletionFailure(const Symbol$CompletionFailure& e) : $RuntimeException(e) {
}

void Symbol$CompletionFailure::throw$() {
	throw *this;
}

$Class* Symbol$CompletionFailure::load$($String* name, bool initialize) {
	$loadClass(Symbol$CompletionFailure, name, initialize, &_Symbol$CompletionFailure_ClassInfo_, allocate$Symbol$CompletionFailure);
	return class$;
}

$Class* Symbol$CompletionFailure::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com