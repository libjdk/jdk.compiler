#include <com/sun/tools/javac/processing/PrintingProcessor.h>

#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/annotation/processing/AbstractProcessor.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/annotation/processing/RoundEnvironment.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

using $PrintingProcessor$PrintingElementVisitor = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $AbstractProcessor = ::javax::annotation::processing::AbstractProcessor;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $RoundEnvironment = ::javax::annotation::processing::RoundEnvironment;
using $Element = ::javax::lang::model::element::Element;
using $AbstractElementVisitor6 = ::javax::lang::model::util::AbstractElementVisitor6;
using $Elements = ::javax::lang::model::util::Elements;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$Attribute PrintingProcessor_Attribute_var$1[] = {
	{'s', "*"},
	{'-'}
};

$NamedAttribute PrintingProcessor_Attribute_var$0[] = {
	{"value", '[', PrintingProcessor_Attribute_var$1},
	{}
};

$NamedAttribute PrintingProcessor_Attribute_var$2[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _PrintingProcessor_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedAnnotationTypes;", PrintingProcessor_Attribute_var$0},
	{"Ljavax/annotation/processing/SupportedSourceVersion;", PrintingProcessor_Attribute_var$2},
	{}
};

$FieldInfo _PrintingProcessor_FieldInfo_[] = {
	{"writer", "Ljava/io/PrintWriter;", nullptr, 0, $field(PrintingProcessor, writer)},
	{}
};

$MethodInfo _PrintingProcessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor::*)()>(&PrintingProcessor::init$))},
	{"print", "(Ljavax/lang/model/element/Element;)V", nullptr, 0},
	{"process", "(Ljava/util/Set;Ljavax/annotation/processing/RoundEnvironment;)Z", "(Ljava/util/Set<+Ljavax/lang/model/element/TypeElement;>;Ljavax/annotation/processing/RoundEnvironment;)Z", $PUBLIC},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PrintingProcessor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.PrintingProcessor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PrintingProcessor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.processing.PrintingProcessor",
	"javax.annotation.processing.AbstractProcessor",
	nullptr,
	_PrintingProcessor_FieldInfo_,
	_PrintingProcessor_MethodInfo_,
	nullptr,
	nullptr,
	_PrintingProcessor_InnerClassesInfo_,
	_PrintingProcessor_Annotations_,
	nullptr,
	"com.sun.tools.javac.processing.PrintingProcessor$1,com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor,com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective,com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$2,com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1"
};

$Object* allocate$PrintingProcessor($Class* clazz) {
	return $of($alloc(PrintingProcessor));
}

void PrintingProcessor::init$() {
	$AbstractProcessor::init$();
	$set(this, writer, $new($PrintWriter, static_cast<$OutputStream*>($System::out)));
}

void PrintingProcessor::setWriter($Writer* w) {
	$set(this, writer, $new($PrintWriter, w));
}

bool PrintingProcessor::process($Set* tes, $RoundEnvironment* renv) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(renv)->getRootElements()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, element, $cast($Element, i$->next()));
			{
				print(element);
			}
		}
	}
	return true;
}

void PrintingProcessor::print($Element* element) {
	$useLocalCurrentObjectStackCache();
	$nc(($cast($PrintingProcessor$PrintingElementVisitor, $($$new($PrintingProcessor$PrintingElementVisitor, this->writer, $($nc(this->processingEnv)->getElementUtils()))->visit(element)))))->flush();
}

PrintingProcessor::PrintingProcessor() {
}

$Class* PrintingProcessor::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor, name, initialize, &_PrintingProcessor_ClassInfo_, allocate$PrintingProcessor);
	return class$;
}

$Class* PrintingProcessor::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com