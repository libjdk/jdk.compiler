#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$2.h>

#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <java/io/PrintWriter.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor14.h>
#include <jcpp.h>

using $PrintingProcessor$PrintingElementVisitor = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor;
using $PrintWriter = ::java::io::PrintWriter;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $SimpleAnnotationValueVisitor14 = ::javax::lang::model::util::SimpleAnnotationValueVisitor14;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _PrintingProcessor$PrintingElementVisitor$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingProcessor$PrintingElementVisitor$2, this$0)},
	{}
};

$MethodInfo _PrintingProcessor$PrintingElementVisitor$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;Ljava/lang/Boolean;)V", nullptr, 0, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$2::*)($PrintingProcessor$PrintingElementVisitor*,$Boolean*)>(&PrintingProcessor$PrintingElementVisitor$2::init$))},
	{"visitArray", "(Ljava/util/List;Ljava/lang/Void;)Ljava/lang/Boolean;", "(Ljava/util/List<+Ljavax/lang/model/element/AnnotationValue;>;Ljava/lang/Void;)Ljava/lang/Boolean;", $PUBLIC},
	{"visitArray", "(Ljava/util/List;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _PrintingProcessor$PrintingElementVisitor$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor",
	"printedContainerAnnotation",
	"(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)Z"
};

$InnerClassInfo _PrintingProcessor$PrintingElementVisitor$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingProcessor$PrintingElementVisitor$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$2",
	"javax.lang.model.util.SimpleAnnotationValueVisitor14",
	nullptr,
	_PrintingProcessor$PrintingElementVisitor$2_FieldInfo_,
	_PrintingProcessor$PrintingElementVisitor$2_MethodInfo_,
	"Ljavax/lang/model/util/SimpleAnnotationValueVisitor14<Ljava/lang/Boolean;Ljava/lang/Void;>;",
	&_PrintingProcessor$PrintingElementVisitor$2_EnclosingMethodInfo_,
	_PrintingProcessor$PrintingElementVisitor$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.PrintingProcessor"
};

$Object* allocate$PrintingProcessor$PrintingElementVisitor$2($Class* clazz) {
	return $of($alloc(PrintingProcessor$PrintingElementVisitor$2));
}

void PrintingProcessor$PrintingElementVisitor$2::init$($PrintingProcessor$PrintingElementVisitor* this$0, $Boolean* arg0) {
	$set(this, this$0, this$0);
	$SimpleAnnotationValueVisitor14::init$(arg0);
}

$Boolean* PrintingProcessor$PrintingElementVisitor$2::visitArray($List* vals, $Void* p) {
	$useLocalCurrentObjectStackCache();
	if ($nc(vals)->size() < 2) {
		return $Boolean::valueOf(false);
	} else {
		{
			$var($Iterator, i$, vals->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($AnnotationValue, annotValue, $cast($AnnotationValue, i$->next()));
				{
					this->this$0->indent();
					$nc(this->this$0->writer)->println($($nc(annotValue)->toString()));
				}
			}
		}
		return $Boolean::valueOf(true);
	}
}

$Object* PrintingProcessor$PrintingElementVisitor$2::visitArray($List* vals, Object$* p) {
	return $of(this->visitArray(vals, $cast($Void, p)));
}

PrintingProcessor$PrintingElementVisitor$2::PrintingProcessor$PrintingElementVisitor$2() {
}

$Class* PrintingProcessor$PrintingElementVisitor$2::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$2, name, initialize, &_PrintingProcessor$PrintingElementVisitor$2_ClassInfo_, allocate$PrintingProcessor$PrintingElementVisitor$2);
	return class$;
}

$Class* PrintingProcessor$PrintingElementVisitor$2::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com