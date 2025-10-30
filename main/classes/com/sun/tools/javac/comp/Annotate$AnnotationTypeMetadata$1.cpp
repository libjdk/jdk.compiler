#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata$1.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Annotate$AnnotationTypeCompleter = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Annotate$AnnotationTypeMetadata$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter;)V", nullptr, 0, $method(static_cast<void(Annotate$AnnotationTypeMetadata$1::*)($Symbol$ClassSymbol*,$Annotate$AnnotationTypeCompleter*)>(&Annotate$AnnotationTypeMetadata$1::init$))},
	{"complete", "()V", nullptr, $PUBLIC},
	{"getAnnotationElements", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PUBLIC},
	{"getAnnotationElementsWithDefault", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PUBLIC},
	{"getRepeatable", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC},
	{"getTarget", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC},
	{"isMetadataForAnnotationType", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Annotate$AnnotationTypeMetadata$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata",
	nullptr,
	nullptr
};

$InnerClassInfo _Annotate$AnnotationTypeMetadata$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeMetadata", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Annotate$AnnotationTypeMetadata$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata$1",
	"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata",
	nullptr,
	nullptr,
	_Annotate$AnnotationTypeMetadata$1_MethodInfo_,
	nullptr,
	&_Annotate$AnnotationTypeMetadata$1_EnclosingMethodInfo_,
	_Annotate$AnnotationTypeMetadata$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate"
};

$Object* allocate$Annotate$AnnotationTypeMetadata$1($Class* clazz) {
	return $of($alloc(Annotate$AnnotationTypeMetadata$1));
}

void Annotate$AnnotationTypeMetadata$1::init$($Symbol$ClassSymbol* metaDataFor, $Annotate$AnnotationTypeCompleter* annotationTypeCompleter) {
	$Annotate$AnnotationTypeMetadata::init$(metaDataFor, annotationTypeCompleter);
}

void Annotate$AnnotationTypeMetadata$1::complete() {
}

$String* Annotate$AnnotationTypeMetadata$1::toString() {
	return "Not an annotation type"_s;
}

$Set* Annotate$AnnotationTypeMetadata$1::getAnnotationElements() {
	return $new($LinkedHashSet, 0);
}

$Set* Annotate$AnnotationTypeMetadata$1::getAnnotationElementsWithDefault() {
	return $new($LinkedHashSet, 0);
}

bool Annotate$AnnotationTypeMetadata$1::isMetadataForAnnotationType() {
	return false;
}

$Attribute$Compound* Annotate$AnnotationTypeMetadata$1::getTarget() {
	return nullptr;
}

$Attribute$Compound* Annotate$AnnotationTypeMetadata$1::getRepeatable() {
	return nullptr;
}

Annotate$AnnotationTypeMetadata$1::Annotate$AnnotationTypeMetadata$1() {
}

$Class* Annotate$AnnotationTypeMetadata$1::load$($String* name, bool initialize) {
	$loadClass(Annotate$AnnotationTypeMetadata$1, name, initialize, &_Annotate$AnnotationTypeMetadata$1_ClassInfo_, allocate$Annotate$AnnotationTypeMetadata$1);
	return class$;
}

$Class* Annotate$AnnotationTypeMetadata$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com