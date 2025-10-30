#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>

#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Supplier.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef SOURCE

using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Supplier = ::java::util::function::Supplier;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class ClassFinder$BadClassFile$$Lambda$lambda$new$0 : public $Supplier {
	$class(ClassFinder$BadClassFile$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($JavaFileObject* file, $JCDiagnostic* diag, $JCDiagnostic$Factory* diagFactory) {
		$set(this, file, file);
		$set(this, diag, diag);
		$set(this, diagFactory, diagFactory);
	}
	virtual $Object* get() override {
		 return $of(ClassFinder$BadClassFile::lambda$new$0(file, diag, diagFactory));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassFinder$BadClassFile$$Lambda$lambda$new$0>());
	}
	$JavaFileObject* file = nullptr;
	$JCDiagnostic* diag = nullptr;
	$JCDiagnostic$Factory* diagFactory = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassFinder$BadClassFile$$Lambda$lambda$new$0::fieldInfos[4] = {
	{"file", "Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $field(ClassFinder$BadClassFile$$Lambda$lambda$new$0, file)},
	{"diag", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC, $field(ClassFinder$BadClassFile$$Lambda$lambda$new$0, diag)},
	{"diagFactory", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PUBLIC, $field(ClassFinder$BadClassFile$$Lambda$lambda$new$0, diagFactory)},
	{}
};
$MethodInfo ClassFinder$BadClassFile$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Factory;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$BadClassFile$$Lambda$lambda$new$0::*)($JavaFileObject*,$JCDiagnostic*,$JCDiagnostic$Factory*)>(&ClassFinder$BadClassFile$$Lambda$lambda$new$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassFinder$BadClassFile$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.ClassFinder$BadClassFile$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ClassFinder$BadClassFile$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$BadClassFile$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassFinder$BadClassFile$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _ClassFinder$BadClassFile_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassFinder$BadClassFile, serialVersionUID)},
	{}
};

$MethodInfo _ClassFinder$BadClassFile_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFinder$BadClassFile::*)($Symbol$TypeSymbol*,$JavaFileObject*,$JCDiagnostic*,$JCDiagnostic$Factory*,$DeferredCompletionFailureHandler*)>(&ClassFinder$BadClassFile::init$))},
	{"createBadClassFileDiagnostic", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Factory;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JCDiagnostic*(*)($JavaFileObject*,$JCDiagnostic*,$JCDiagnostic$Factory*)>(&ClassFinder$BadClassFile::createBadClassFileDiagnostic))},
	{"lambda$new$0", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Factory;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCDiagnostic*(*)($JavaFileObject*,$JCDiagnostic*,$JCDiagnostic$Factory*)>(&ClassFinder$BadClassFile::lambda$new$0))},
	{}
};

$InnerClassInfo _ClassFinder$BadClassFile_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ClassFinder$BadClassFile", "com.sun.tools.javac.code.ClassFinder", "BadClassFile", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$CompletionFailure", "com.sun.tools.javac.code.Symbol", "CompletionFailure", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ClassFinder$BadClassFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.ClassFinder$BadClassFile",
	"com.sun.tools.javac.code.Symbol$CompletionFailure",
	nullptr,
	_ClassFinder$BadClassFile_FieldInfo_,
	_ClassFinder$BadClassFile_MethodInfo_,
	nullptr,
	nullptr,
	_ClassFinder$BadClassFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ClassFinder"
};

$Object* allocate$ClassFinder$BadClassFile($Class* clazz) {
	return $of($alloc(ClassFinder$BadClassFile));
}

void ClassFinder$BadClassFile::init$($Symbol$TypeSymbol* sym, $JavaFileObject* file, $JCDiagnostic* diag, $JCDiagnostic$Factory* diagFactory, $DeferredCompletionFailureHandler* dcfh) {
	$Symbol$CompletionFailure::init$(sym, static_cast<$Supplier*>($$new(ClassFinder$BadClassFile$$Lambda$lambda$new$0, file, diag, diagFactory)), dcfh);
}

$JCDiagnostic* ClassFinder$BadClassFile::createBadClassFileDiagnostic($JavaFileObject* file, $JCDiagnostic* diag, $JCDiagnostic$Factory* diagFactory) {
	$init(ClassFinder$BadClassFile);
	$useLocalCurrentObjectStackCache();
	$init($JavaFileObject$Kind);
	$var($String, key, $nc(file)->getKind() == $JavaFileObject$Kind::SOURCE ? "bad.source.file.header"_s : "bad.class.file.header"_s);
	return $nc(diagFactory)->fragment(key, $$new($ObjectArray, {
		$of(file),
		$of(diag)
	}));
}

$JCDiagnostic* ClassFinder$BadClassFile::lambda$new$0($JavaFileObject* file, $JCDiagnostic* diag, $JCDiagnostic$Factory* diagFactory) {
	$init(ClassFinder$BadClassFile);
	return createBadClassFileDiagnostic(file, diag, diagFactory);
}

ClassFinder$BadClassFile::ClassFinder$BadClassFile() {
}

ClassFinder$BadClassFile::ClassFinder$BadClassFile(const ClassFinder$BadClassFile& e) : $Symbol$CompletionFailure(e) {
}

void ClassFinder$BadClassFile::throw$() {
	throw *this;
}

$Class* ClassFinder$BadClassFile::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassFinder$BadClassFile$$Lambda$lambda$new$0::classInfo$.name)) {
			return ClassFinder$BadClassFile$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(ClassFinder$BadClassFile, name, initialize, &_ClassFinder$BadClassFile_ClassInfo_, allocate$ClassFinder$BadClassFile);
	return class$;
}

$Class* ClassFinder$BadClassFile::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com