#include <com/sun/tools/javac/comp/Annotate$AnnotationContext.h>

#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Annotate$AnnotationContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL | $SYNTHETIC, $field(Annotate$AnnotationContext, this$0)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC | $FINAL, $field(Annotate$AnnotationContext, env)},
	{"annotated", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/ListBuffer<TT;>;>;", $PUBLIC | $FINAL, $field(Annotate$AnnotationContext, annotated)},
	{"pos", "Ljava/util/Map;", "Ljava/util/Map<TT;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;>;", $PUBLIC | $FINAL, $field(Annotate$AnnotationContext, pos)},
	{"isTypeCompound", "Z", nullptr, $PUBLIC | $FINAL, $field(Annotate$AnnotationContext, isTypeCompound)},
	{}
};

$MethodInfo _Annotate$AnnotationContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/comp/Env;Ljava/util/Map;Ljava/util/Map;Z)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/ListBuffer<TT;>;>;Ljava/util/Map<TT;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;>;Z)V", $PUBLIC, $method(static_cast<void(Annotate$AnnotationContext::*)($Annotate*,$Env*,$Map*,$Map*,bool)>(&Annotate$AnnotationContext::init$))},
	{}
};

$InnerClassInfo _Annotate$AnnotationContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$AnnotationContext", "com.sun.tools.javac.comp.Annotate", "AnnotationContext", $PRIVATE},
	{"com.sun.tools.javac.code.Attribute$Compound", "com.sun.tools.javac.code.Attribute", "Compound", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Annotate$AnnotationContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Annotate$AnnotationContext",
	"java.lang.Object",
	nullptr,
	_Annotate$AnnotationContext_FieldInfo_,
	_Annotate$AnnotationContext_MethodInfo_,
	"<T:Lcom/sun/tools/javac/code/Attribute$Compound;>Ljava/lang/Object;",
	nullptr,
	_Annotate$AnnotationContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate"
};

$Object* allocate$Annotate$AnnotationContext($Class* clazz) {
	return $of($alloc(Annotate$AnnotationContext));
}

void Annotate$AnnotationContext::init$($Annotate* this$0, $Env* env, $Map* annotated, $Map* pos, bool isTypeCompound) {
	$set(this, this$0, this$0);
	$Assert::checkNonNull(env);
	$Assert::checkNonNull(annotated);
	$Assert::checkNonNull(pos);
	$set(this, env, env);
	$set(this, annotated, annotated);
	$set(this, pos, pos);
	this->isTypeCompound = isTypeCompound;
}

Annotate$AnnotationContext::Annotate$AnnotationContext() {
}

$Class* Annotate$AnnotationContext::load$($String* name, bool initialize) {
	$loadClass(Annotate$AnnotationContext, name, initialize, &_Annotate$AnnotationContext_ClassInfo_, allocate$Annotate$AnnotationContext);
	return class$;
}

$Class* Annotate$AnnotationContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com