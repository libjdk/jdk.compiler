#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$1.h>

#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/util/SimpleElementVisitor14.h>
#include <jcpp.h>

using $PrintingProcessor$PrintingElementVisitor = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $SimpleElementVisitor14 = ::javax::lang::model::util::SimpleElementVisitor14;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _PrintingProcessor$PrintingElementVisitor$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingProcessor$PrintingElementVisitor$1, this$0)},
	{}
};

$MethodInfo _PrintingProcessor$PrintingElementVisitor$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;)V", nullptr, 0, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$1::*)($PrintingProcessor$PrintingElementVisitor*)>(&PrintingProcessor$PrintingElementVisitor$1::init$))},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Void;)Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _PrintingProcessor$PrintingElementVisitor$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor",
	"visitExecutable",
	"(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;"
};

$InnerClassInfo _PrintingProcessor$PrintingElementVisitor$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingProcessor$PrintingElementVisitor$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1",
	"javax.lang.model.util.SimpleElementVisitor14",
	nullptr,
	_PrintingProcessor$PrintingElementVisitor$1_FieldInfo_,
	_PrintingProcessor$PrintingElementVisitor$1_MethodInfo_,
	"Ljavax/lang/model/util/SimpleElementVisitor14<Ljavax/lang/model/element/NestingKind;Ljava/lang/Void;>;",
	&_PrintingProcessor$PrintingElementVisitor$1_EnclosingMethodInfo_,
	_PrintingProcessor$PrintingElementVisitor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.PrintingProcessor"
};

$Object* allocate$PrintingProcessor$PrintingElementVisitor$1($Class* clazz) {
	return $of($alloc(PrintingProcessor$PrintingElementVisitor$1));
}

void PrintingProcessor$PrintingElementVisitor$1::init$($PrintingProcessor$PrintingElementVisitor* this$0) {
	$set(this, this$0, this$0);
	$SimpleElementVisitor14::init$();
}

$NestingKind* PrintingProcessor$PrintingElementVisitor$1::visitType($TypeElement* e, $Void* p) {
	return $nc(e)->getNestingKind();
}

$Object* PrintingProcessor$PrintingElementVisitor$1::visitType($TypeElement* e, Object$* p) {
	return $of(this->visitType(e, $cast($Void, p)));
}

PrintingProcessor$PrintingElementVisitor$1::PrintingProcessor$PrintingElementVisitor$1() {
}

$Class* PrintingProcessor$PrintingElementVisitor$1::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$1, name, initialize, &_PrintingProcessor$PrintingElementVisitor$1_ClassInfo_, allocate$PrintingProcessor$PrintingElementVisitor$1);
	return class$;
}

$Class* PrintingProcessor$PrintingElementVisitor$1::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com