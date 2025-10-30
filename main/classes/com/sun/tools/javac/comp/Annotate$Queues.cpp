#include <com/sun/tools/javac/comp/Annotate$Queues.h>

#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Annotate$Queues_FieldInfo_[] = {
	{"q", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;", $PRIVATE | $FINAL, $field(Annotate$Queues, q)},
	{"validateQ", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;", $PRIVATE | $FINAL, $field(Annotate$Queues, validateQ)},
	{"typesQ", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;", $PRIVATE | $FINAL, $field(Annotate$Queues, typesQ)},
	{"afterTypesQ", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;", $PRIVATE | $FINAL, $field(Annotate$Queues, afterTypesQ)},
	{}
};

$MethodInfo _Annotate$Queues_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$Queues::*)()>(&Annotate$Queues::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;)V", $PUBLIC, $method(static_cast<void(Annotate$Queues::*)($ListBuffer*,$ListBuffer*,$ListBuffer*,$ListBuffer*)>(&Annotate$Queues::init$))},
	{}
};

$InnerClassInfo _Annotate$Queues_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$Queues", "com.sun.tools.javac.comp.Annotate", "Queues", $STATIC},
	{}
};

$ClassInfo _Annotate$Queues_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Annotate$Queues",
	"java.lang.Object",
	nullptr,
	_Annotate$Queues_FieldInfo_,
	_Annotate$Queues_MethodInfo_,
	nullptr,
	nullptr,
	_Annotate$Queues_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate"
};

$Object* allocate$Annotate$Queues($Class* clazz) {
	return $of($alloc(Annotate$Queues));
}

void Annotate$Queues::init$() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, var$0, $new($ListBuffer));
	$var($ListBuffer, var$1, $new($ListBuffer));
	$var($ListBuffer, var$2, $new($ListBuffer));
	Annotate$Queues::init$(var$0, var$1, var$2, $$new($ListBuffer));
}

void Annotate$Queues::init$($ListBuffer* q, $ListBuffer* validateQ, $ListBuffer* typesQ, $ListBuffer* afterTypesQ) {
	$set(this, q, q);
	$set(this, validateQ, validateQ);
	$set(this, typesQ, typesQ);
	$set(this, afterTypesQ, afterTypesQ);
}

Annotate$Queues::Annotate$Queues() {
}

$Class* Annotate$Queues::load$($String* name, bool initialize) {
	$loadClass(Annotate$Queues, name, initialize, &_Annotate$Queues_ClassInfo_, allocate$Annotate$Queues);
	return class$;
}

$Class* Annotate$Queues::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com