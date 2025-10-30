#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$PrintDirective.h>

#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/ModuleElement$ExportsDirective.h>
#include <javax/lang/model/element/ModuleElement$OpensDirective.h>
#include <javax/lang/model/element/ModuleElement$ProvidesDirective.h>
#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>
#include <javax/lang/model/element/ModuleElement$UsesDirective.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/QualifiedNameable.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

using $PrintingProcessor$PrintingElementVisitor = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$DirectiveVisitor = ::javax::lang::model::element::ModuleElement$DirectiveVisitor;
using $ModuleElement$ExportsDirective = ::javax::lang::model::element::ModuleElement$ExportsDirective;
using $ModuleElement$OpensDirective = ::javax::lang::model::element::ModuleElement$OpensDirective;
using $ModuleElement$ProvidesDirective = ::javax::lang::model::element::ModuleElement$ProvidesDirective;
using $ModuleElement$RequiresDirective = ::javax::lang::model::element::ModuleElement$RequiresDirective;
using $ModuleElement$UsesDirective = ::javax::lang::model::element::ModuleElement$UsesDirective;
using $Name = ::javax::lang::model::element::Name;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $QualifiedNameable = ::javax::lang::model::element::QualifiedNameable;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($QualifiedNameable, inst$)->getQualifiedName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::*)()>(&PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::class$ = nullptr;

$FieldInfo _PrintingProcessor$PrintingElementVisitor$PrintDirective_FieldInfo_[] = {
	{"writer", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(PrintingProcessor$PrintingElementVisitor$PrintDirective, writer)},
	{}
};

$MethodInfo _PrintingProcessor$PrintingElementVisitor$PrintDirective_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, 0, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$PrintDirective::*)($PrintWriter*)>(&PrintingProcessor$PrintingElementVisitor$PrintDirective::init$))},
	{"printModuleList", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/lang/model/element/ModuleElement;>;)V", $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$PrintDirective::*)($List*)>(&PrintingProcessor$PrintingElementVisitor$PrintDirective::printModuleList))},
	{"printNameableList", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/lang/model/element/QualifiedNameable;>;)V", $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$PrintDirective::*)($List*)>(&PrintingProcessor$PrintingElementVisitor$PrintDirective::printNameableList))},
	{"visitExports", "(Ljavax/lang/model/element/ModuleElement$ExportsDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitExports", "(Ljavax/lang/model/element/ModuleElement$ExportsDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitOpens", "(Ljavax/lang/model/element/ModuleElement$OpensDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitOpens", "(Ljavax/lang/model/element/ModuleElement$OpensDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitProvides", "(Ljavax/lang/model/element/ModuleElement$ProvidesDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitProvides", "(Ljavax/lang/model/element/ModuleElement$ProvidesDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitRequires", "(Ljavax/lang/model/element/ModuleElement$RequiresDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitRequires", "(Ljavax/lang/model/element/ModuleElement$RequiresDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitUses", "(Ljavax/lang/model/element/ModuleElement$UsesDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitUses", "(Ljavax/lang/model/element/ModuleElement$UsesDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PrintingProcessor$PrintingElementVisitor$PrintDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective", "com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "PrintDirective", $PRIVATE | $STATIC},
	{"javax.lang.model.element.ModuleElement$DirectiveVisitor", "javax.lang.model.element.ModuleElement", "DirectiveVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrintingProcessor$PrintingElementVisitor$PrintDirective_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective",
	"java.lang.Object",
	"javax.lang.model.element.ModuleElement$DirectiveVisitor",
	_PrintingProcessor$PrintingElementVisitor$PrintDirective_FieldInfo_,
	_PrintingProcessor$PrintingElementVisitor$PrintDirective_MethodInfo_,
	"Ljava/lang/Object;Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<Ljava/lang/Void;Ljava/lang/Void;>;",
	nullptr,
	_PrintingProcessor$PrintingElementVisitor$PrintDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.PrintingProcessor"
};

$Object* allocate$PrintingProcessor$PrintingElementVisitor$PrintDirective($Class* clazz) {
	return $of($alloc(PrintingProcessor$PrintingElementVisitor$PrintDirective));
}

void PrintingProcessor$PrintingElementVisitor$PrintDirective::init$($PrintWriter* writer) {
	$set(this, writer, writer);
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitExports($ModuleElement$ExportsDirective* d, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->writer)->print("exports "_s);
	$nc(this->writer)->print($($of($nc($($nc(d)->getPackage()))->getQualifiedName())));
	printModuleList($($nc(d)->getTargetModules()));
	return nullptr;
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitOpens($ModuleElement$OpensDirective* d, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->writer)->print("opens "_s);
	$nc(this->writer)->print($($of($nc($($nc(d)->getPackage()))->getQualifiedName())));
	printModuleList($($nc(d)->getTargetModules()));
	return nullptr;
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitProvides($ModuleElement$ProvidesDirective* d, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->writer)->print("provides "_s);
	$nc(this->writer)->print($($of($nc($($nc(d)->getService()))->getQualifiedName())));
	$nc(this->writer)->print(" with "_s);
	printNameableList($($nc(d)->getImplementations()));
	return nullptr;
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitRequires($ModuleElement$RequiresDirective* d, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->writer)->print("requires "_s);
	if ($nc(d)->isStatic()) {
		$nc(this->writer)->print("static "_s);
	}
	if ($nc(d)->isTransitive()) {
		$nc(this->writer)->print("transitive "_s);
	}
	$nc(this->writer)->print($($of($nc($($nc(d)->getDependency()))->getQualifiedName())));
	return nullptr;
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitUses($ModuleElement$UsesDirective* d, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->writer)->print("uses "_s);
	$nc(this->writer)->print($($of($nc($($nc(d)->getService()))->getQualifiedName())));
	return nullptr;
}

void PrintingProcessor$PrintingElementVisitor$PrintDirective::printModuleList($List* modules) {
	if (modules != nullptr) {
		$nc(this->writer)->print(" to "_s);
		printNameableList(modules);
	}
}

void PrintingProcessor$PrintingElementVisitor$PrintDirective::printNameableList($List* nameables) {
	$useLocalCurrentObjectStackCache();
	$nc(this->writer)->print($cast($String, $($nc($($nc($($nc(nameables)->stream()))->map(static_cast<$Function*>($$new(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName)))))->collect($($Collectors::joining(", "_s))))));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitProvides($ModuleElement$ProvidesDirective* d, Object$* p) {
	return $of(this->visitProvides(d, $cast($Void, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitUses($ModuleElement$UsesDirective* d, Object$* p) {
	return $of(this->visitUses(d, $cast($Void, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitOpens($ModuleElement$OpensDirective* d, Object$* p) {
	return $of(this->visitOpens(d, $cast($Void, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitExports($ModuleElement$ExportsDirective* d, Object$* p) {
	return $of(this->visitExports(d, $cast($Void, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitRequires($ModuleElement$RequiresDirective* d, Object$* p) {
	return $of(this->visitRequires(d, $cast($Void, p)));
}

PrintingProcessor$PrintingElementVisitor$PrintDirective::PrintingProcessor$PrintingElementVisitor$PrintDirective() {
}

$Class* PrintingProcessor$PrintingElementVisitor$PrintDirective::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::classInfo$.name)) {
			return PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::load$(name, initialize);
		}
	}
	$loadClass(PrintingProcessor$PrintingElementVisitor$PrintDirective, name, initialize, &_PrintingProcessor$PrintingElementVisitor$PrintDirective_ClassInfo_, allocate$PrintingProcessor$PrintingElementVisitor$PrintDirective);
	return class$;
}

$Class* PrintingProcessor$PrintingElementVisitor$PrintDirective::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com