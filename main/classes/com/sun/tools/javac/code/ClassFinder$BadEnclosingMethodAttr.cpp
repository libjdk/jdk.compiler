#include <com/sun/tools/javac/code/ClassFinder$BadEnclosingMethodAttr.h>

#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _ClassFinder$BadEnclosingMethodAttr_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassFinder$BadEnclosingMethodAttr, serialVersionUID)},
	{}
};

$MethodInfo _ClassFinder$BadEnclosingMethodAttr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$BadEnclosingMethodAttr::*)($Symbol$TypeSymbol*,$JavaFileObject*,$JCDiagnostic*,$JCDiagnostic$Factory*,$DeferredCompletionFailureHandler*)>(&ClassFinder$BadEnclosingMethodAttr::init$))},
	{}
};

$InnerClassInfo _ClassFinder$BadEnclosingMethodAttr_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ClassFinder$BadEnclosingMethodAttr", "com.sun.tools.javac.code.ClassFinder", "BadEnclosingMethodAttr", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.ClassFinder$BadClassFile", "com.sun.tools.javac.code.ClassFinder", "BadClassFile", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ClassFinder$BadEnclosingMethodAttr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.ClassFinder$BadEnclosingMethodAttr",
	"com.sun.tools.javac.code.ClassFinder$BadClassFile",
	nullptr,
	_ClassFinder$BadEnclosingMethodAttr_FieldInfo_,
	_ClassFinder$BadEnclosingMethodAttr_MethodInfo_,
	nullptr,
	nullptr,
	_ClassFinder$BadEnclosingMethodAttr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ClassFinder"
};

$Object* allocate$ClassFinder$BadEnclosingMethodAttr($Class* clazz) {
	return $of($alloc(ClassFinder$BadEnclosingMethodAttr));
}

void ClassFinder$BadEnclosingMethodAttr::init$($Symbol$TypeSymbol* sym, $JavaFileObject* file, $JCDiagnostic* diag, $JCDiagnostic$Factory* diagFactory, $DeferredCompletionFailureHandler* dcfh) {
	$ClassFinder$BadClassFile::init$(sym, file, diag, diagFactory, dcfh);
}

ClassFinder$BadEnclosingMethodAttr::ClassFinder$BadEnclosingMethodAttr() {
}

ClassFinder$BadEnclosingMethodAttr::ClassFinder$BadEnclosingMethodAttr(const ClassFinder$BadEnclosingMethodAttr& e) : $ClassFinder$BadClassFile(e) {
}

void ClassFinder$BadEnclosingMethodAttr::throw$() {
	throw *this;
}

$Class* ClassFinder$BadEnclosingMethodAttr::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$BadEnclosingMethodAttr, name, initialize, &_ClassFinder$BadEnclosingMethodAttr_ClassInfo_, allocate$ClassFinder$BadEnclosingMethodAttr);
	return class$;
}

$Class* ClassFinder$BadEnclosingMethodAttr::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com