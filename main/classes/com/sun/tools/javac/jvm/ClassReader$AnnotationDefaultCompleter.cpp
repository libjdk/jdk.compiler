#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDefaultCompleter.h>

#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDeproxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef MTH

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AnnotationDeproxy = ::com::sun::tools::javac::jvm::ClassReader$AnnotationDeproxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$AnnotationDefaultCompleter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$AnnotationDefaultCompleter, this$0)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $FINAL, $field(ClassReader$AnnotationDefaultCompleter, sym)},
	{"value", "Lcom/sun/tools/javac/code/Attribute;", nullptr, $FINAL, $field(ClassReader$AnnotationDefaultCompleter, value)},
	{"classFile", "Ljavax/tools/JavaFileObject;", nullptr, $FINAL, $field(ClassReader$AnnotationDefaultCompleter, classFile)},
	{}
};

$MethodInfo _ClassReader$AnnotationDefaultCompleter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;)V", nullptr, 0, $method(static_cast<void(ClassReader$AnnotationDefaultCompleter::*)($ClassReader*,$Symbol$MethodSymbol*,$Attribute*)>(&ClassReader$AnnotationDefaultCompleter::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$AnnotationDefaultCompleter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationDefaultCompleter", "com.sun.tools.javac.jvm.ClassReader", "AnnotationDefaultCompleter", 0},
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy", "com.sun.tools.javac.jvm.ClassReader", "AnnotationDeproxy", 0},
	{}
};

$ClassInfo _ClassReader$AnnotationDefaultCompleter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$AnnotationDefaultCompleter",
	"com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy",
	"java.lang.Runnable",
	_ClassReader$AnnotationDefaultCompleter_FieldInfo_,
	_ClassReader$AnnotationDefaultCompleter_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$AnnotationDefaultCompleter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$AnnotationDefaultCompleter($Class* clazz) {
	return $of($alloc(ClassReader$AnnotationDefaultCompleter));
}

int32_t ClassReader$AnnotationDefaultCompleter::hashCode() {
	 return this->$ClassReader$AnnotationDeproxy::hashCode();
}

bool ClassReader$AnnotationDefaultCompleter::equals(Object$* arg0) {
	 return this->$ClassReader$AnnotationDeproxy::equals(arg0);
}

$Object* ClassReader$AnnotationDefaultCompleter::clone() {
	 return this->$ClassReader$AnnotationDeproxy::clone();
}

void ClassReader$AnnotationDefaultCompleter::finalize() {
	this->$ClassReader$AnnotationDeproxy::finalize();
}

void ClassReader$AnnotationDefaultCompleter::init$($ClassReader* this$0, $Symbol$MethodSymbol* sym, $Attribute* value) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$ClassReader$AnnotationDeproxy::init$(this$0, $nc(this$0->currentOwner)->kind == $Kinds$Kind::MTH ? $($nc(this$0->currentOwner)->enclClass()) : $cast($Symbol$ClassSymbol, this$0->currentOwner));
	$set(this, classFile, this->this$0->currentClassFile);
	$set(this, sym, sym);
	$set(this, value, value);
}

void ClassReader$AnnotationDefaultCompleter::run() {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, previousClassFile, this->this$0->currentClassFile);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set($nc(this->sym), defaultValue, nullptr);
			$set(this->this$0, currentClassFile, this->classFile);
			$set($nc(this->sym), defaultValue, deproxy($($nc($nc(this->sym)->type)->getReturnType()), this->value));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this->this$0, currentClassFile, previousClassFile);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* ClassReader$AnnotationDefaultCompleter::toString() {
	return $str({" ClassReader store default for "_s, $nc(this->sym)->owner, "."_s, this->sym, " is "_s, this->value});
}

ClassReader$AnnotationDefaultCompleter::ClassReader$AnnotationDefaultCompleter() {
}

$Class* ClassReader$AnnotationDefaultCompleter::load$($String* name, bool initialize) {
	$loadClass(ClassReader$AnnotationDefaultCompleter, name, initialize, &_ClassReader$AnnotationDefaultCompleter_ClassInfo_, allocate$ClassReader$AnnotationDefaultCompleter);
	return class$;
}

$Class* ClassReader$AnnotationDefaultCompleter::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com