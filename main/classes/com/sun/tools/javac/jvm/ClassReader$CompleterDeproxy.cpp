#include <com/sun/tools/javac/jvm/ClassReader$CompleterDeproxy.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDeproxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Annotate$AnnotationTypeCompleter = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AnnotationDeproxy = ::com::sun::tools::javac::jvm::ClassReader$AnnotationDeproxy;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Supplier = ::java::util::function::Supplier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0 : public $Supplier {
	$class(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ClassReader$CompleterDeproxy* inst, $Exception* e) {
		$set(this, inst$, inst);
		$set(this, e, e);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$complete$0(e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0>());
	}
	ClassReader$CompleterDeproxy* inst$ = nullptr;
	$Exception* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, inst$)},
	{"e", "Ljava/lang/Exception;", nullptr, $PUBLIC, $field(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, e)},
	{}
};
$MethodInfo ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader$CompleterDeproxy;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::*)(ClassReader$CompleterDeproxy*,$Exception*)>(&ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::load$($String* name, bool initialize) {
	$loadClass(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::class$ = nullptr;

$FieldInfo _ClassReader$CompleterDeproxy_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$CompleterDeproxy, this$0)},
	{"proxyOn", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0, $field(ClassReader$CompleterDeproxy, proxyOn)},
	{"target", "Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, 0, $field(ClassReader$CompleterDeproxy, target)},
	{"repeatable", "Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, 0, $field(ClassReader$CompleterDeproxy, repeatable)},
	{}
};

$MethodInfo _ClassReader$CompleterDeproxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$CompleterDeproxy::*)($ClassReader*,$Symbol$ClassSymbol*,$ClassReader$CompoundAnnotationProxy*,$ClassReader$CompoundAnnotationProxy*)>(&ClassReader$CompleterDeproxy::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"lambda$complete$0", "(Ljava/lang/Exception;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCDiagnostic*(ClassReader$CompleterDeproxy::*)($Exception*)>(&ClassReader$CompleterDeproxy::lambda$complete$0))},
	{}
};

$InnerClassInfo _ClassReader$CompleterDeproxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy", "com.sun.tools.javac.jvm.ClassReader", "CompleterDeproxy", $PRIVATE},
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeCompleter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$CompleterDeproxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter",
	_ClassReader$CompleterDeproxy_FieldInfo_,
	_ClassReader$CompleterDeproxy_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$CompleterDeproxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$CompleterDeproxy($Class* clazz) {
	return $of($alloc(ClassReader$CompleterDeproxy));
}

void ClassReader$CompleterDeproxy::init$($ClassReader* this$0, $Symbol$ClassSymbol* c, $ClassReader$CompoundAnnotationProxy* target, $ClassReader$CompoundAnnotationProxy* repeatable) {
	$set(this, this$0, this$0);
	$set(this, proxyOn, c);
	$set(this, target, target);
	$set(this, repeatable, repeatable);
}

void ClassReader$CompleterDeproxy::complete($Symbol$ClassSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(this->proxyOn == sym);
	$var($Attribute$Compound, theTarget, nullptr);
	$var($Attribute$Compound, theRepeatable, nullptr);
	$var($ClassReader$AnnotationDeproxy, deproxy, nullptr);
	try {
		if (this->target != nullptr) {
			$assign(deproxy, $new($ClassReader$AnnotationDeproxy, this->this$0, this->proxyOn));
			$assign(theTarget, deproxy->deproxyCompound(this->target));
		}
		if (this->repeatable != nullptr) {
			$assign(deproxy, $new($ClassReader$AnnotationDeproxy, this->this$0, this->proxyOn));
			$assign(theRepeatable, deproxy->deproxyCompound(this->repeatable));
		}
	} catch ($Exception& e) {
		$throwNew($Symbol$CompletionFailure, sym, static_cast<$Supplier*>($$new(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, this, e)), this->this$0->dcfh);
	}
	$nc($($nc(sym)->getAnnotationTypeMetadata()))->setTarget(theTarget);
	$nc($(sym->getAnnotationTypeMetadata()))->setRepeatable(theRepeatable);
}

$JCDiagnostic* ClassReader$CompleterDeproxy::lambda$complete$0($Exception* e) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->this$0->diagFactory)->fragment($($CompilerProperties$Fragments::ExceptionMessage($($nc(e)->getMessage()))));
}

ClassReader$CompleterDeproxy::ClassReader$CompleterDeproxy() {
}

$Class* ClassReader$CompleterDeproxy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::classInfo$.name)) {
			return ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::load$(name, initialize);
		}
	}
	$loadClass(ClassReader$CompleterDeproxy, name, initialize, &_ClassReader$CompleterDeproxy_ClassInfo_, allocate$ClassReader$CompleterDeproxy);
	return class$;
}

$Class* ClassReader$CompleterDeproxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com