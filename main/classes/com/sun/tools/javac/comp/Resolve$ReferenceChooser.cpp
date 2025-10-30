#include <com/sun/tools/javac/comp/Resolve$ReferenceChooser.h>

#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <jcpp.h>

using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ReferenceLookupResult = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$ReferenceChooser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$ReferenceChooser, this$0)},
	{}
};

$MethodInfo _Resolve$ReferenceChooser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(static_cast<void(Resolve$ReferenceChooser::*)($Resolve*)>(&Resolve$ReferenceChooser::init$))},
	{"boundResult", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, $ABSTRACT},
	{"result", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, 0},
	{"unboundResult", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _Resolve$ReferenceChooser_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$ReferenceChooser", "com.sun.tools.javac.comp.Resolve", "ReferenceChooser", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$ReferenceChooser_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$ReferenceChooser",
	"java.lang.Object",
	nullptr,
	_Resolve$ReferenceChooser_FieldInfo_,
	_Resolve$ReferenceChooser_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$ReferenceChooser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$ReferenceChooser($Class* clazz) {
	return $of($alloc(Resolve$ReferenceChooser));
}

void Resolve$ReferenceChooser::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
}

$Resolve$ReferenceLookupResult* Resolve$ReferenceChooser::result($Resolve$ReferenceLookupResult* boundRes, $Resolve$ReferenceLookupResult* unboundRes) {
	return unboundRes != this->this$0->referenceNotFound ? unboundResult(boundRes, unboundRes) : boundResult(boundRes);
}

Resolve$ReferenceChooser::Resolve$ReferenceChooser() {
}

$Class* Resolve$ReferenceChooser::load$($String* name, bool initialize) {
	$loadClass(Resolve$ReferenceChooser, name, initialize, &_Resolve$ReferenceChooser_ClassInfo_, allocate$Resolve$ReferenceChooser);
	return class$;
}

$Class* Resolve$ReferenceChooser::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com