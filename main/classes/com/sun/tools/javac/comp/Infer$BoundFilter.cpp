#include <com/sun/tools/javac/comp/Infer$BoundFilter.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <jcpp.h>

#undef BOT

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$BoundFilter_FieldInfo_[] = {
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(Infer$BoundFilter, inferenceContext)},
	{}
};

$MethodInfo _Infer$BoundFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $method(static_cast<void(Infer$BoundFilter::*)($InferenceContext*)>(&Infer$BoundFilter::init$))},
	{"test", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Infer$BoundFilter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$BoundFilter", "com.sun.tools.javac.comp.Infer", "BoundFilter", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _Infer$BoundFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$BoundFilter",
	"java.lang.Object",
	"java.util.function.Predicate",
	_Infer$BoundFilter_FieldInfo_,
	_Infer$BoundFilter_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type;>;",
	nullptr,
	_Infer$BoundFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$BoundFilter($Class* clazz) {
	return $of($alloc(Infer$BoundFilter));
}

void Infer$BoundFilter::init$($InferenceContext* inferenceContext) {
	$set(this, inferenceContext, inferenceContext);
}

bool Infer$BoundFilter::test($Type* t) {
	bool var$1 = !$nc(t)->isErroneous();
	bool var$0 = var$1 && !$nc(this->inferenceContext)->free(t);
	$init($TypeTag);
	return var$0 && !t->hasTag($TypeTag::BOT);
}

bool Infer$BoundFilter::test(Object$* t) {
	return this->test($cast($Type, t));
}

Infer$BoundFilter::Infer$BoundFilter() {
}

$Class* Infer$BoundFilter::load$($String* name, bool initialize) {
	$loadClass(Infer$BoundFilter, name, initialize, &_Infer$BoundFilter_ClassInfo_, allocate$Infer$BoundFilter);
	return class$;
}

$Class* Infer$BoundFilter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com