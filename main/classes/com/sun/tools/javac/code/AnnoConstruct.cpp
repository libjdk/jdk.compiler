#include <com/sun/tools/javac/code/AnnoConstruct.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/model/AnnotationProxyMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/CharSequence.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/Inherited.h>
#include <java/lang/annotation/Repeatable.h>
#include <java/lang/reflect/Array.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Attribute$CompoundArray = $Array<::com::sun::tools::javac::code::Attribute$Compound>;
using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $AnnotationProxyMaker = ::com::sun::tools::javac::model::AnnotationProxyMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $Inherited = ::java::lang::annotation::Inherited;
using $Repeatable = ::java::lang::annotation::Repeatable;
using $1Array = ::java::lang::reflect::Array;
using $Iterator = ::java::util::Iterator;
using $AnnotatedConstruct = ::javax::lang::model::AnnotatedConstruct;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _AnnoConstruct_MethodInfo_[] = {
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnnoConstruct::*)()>(&AnnoConstruct::init$))},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)TA;", $PUBLIC},
	{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)[TA;", $PUBLIC},
	{"getAttribute", "(Ljava/lang/Class;)Lcom/sun/tools/javac/code/Attribute$Compound;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)Lcom/sun/tools/javac/code/Attribute$Compound;", $PROTECTED},
	{"getContainer", "(Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&AnnoConstruct::getContainer))},
	{"getInheritedAnnotations", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)[TA;", $PROTECTED},
	{"unpackAttributes", "(Lcom/sun/tools/javac/code/Attribute$Compound;)[Lcom/sun/tools/javac/code/Attribute;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AttributeArray*(*)($Attribute$Compound*)>(&AnnoConstruct::unpackAttributes))},
	{"unpackContained", "(Lcom/sun/tools/javac/code/Attribute$Compound;)[Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PRIVATE, $method(static_cast<$Attribute$CompoundArray*(AnnoConstruct::*)($Attribute$Compound*)>(&AnnoConstruct::unpackContained))},
	{}
};

$ClassInfo _AnnoConstruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.AnnoConstruct",
	"java.lang.Object",
	"javax.lang.model.AnnotatedConstruct",
	nullptr,
	_AnnoConstruct_MethodInfo_
};

$Object* allocate$AnnoConstruct($Class* clazz) {
	return $of($alloc(AnnoConstruct));
}

void AnnoConstruct::init$() {
}

$Attribute$Compound* AnnoConstruct::getAttribute($Class* annoType) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(annoType)->getName());
	{
		$var($Iterator, i$, $nc($($cast($List, getAnnotationMirrors())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, anno, $cast($Attribute$Compound, i$->next()));
			{
				if ($nc(name)->equals($($nc($($nc($nc($nc(anno)->type)->tsym)->flatName()))->toString()))) {
					return anno;
				}
			}
		}
	}
	return nullptr;
}

$AnnotationArray* AnnoConstruct::getInheritedAnnotations($Class* annoType) {
	return $cast($AnnotationArray, $1Array::newInstance(annoType, 0));
}

$AnnotationArray* AnnoConstruct::getAnnotationsByType($Class* annoType) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(annoType)->isAnnotation()) {
		$throwNew($IllegalArgumentException, $$str({"Not an annotation type: "_s, annoType}));
	}
	$Class* containerType = getContainer(annoType);
	if (containerType == nullptr) {
		$var($Annotation, res, getAnnotation(annoType));
		int32_t size = res == nullptr ? 0 : 1;
		$var($AnnotationArray, arr, $cast($AnnotationArray, $1Array::newInstance(annoType, size)));
		if (res != nullptr) {
			arr->set(0, res);
		}
		return arr;
	}
	$var($String, annoTypeName, $nc(annoType)->getName());
	$var($String, containerTypeName, $nc(containerType)->getName());
	int32_t directIndex = -1;
	int32_t containerIndex = -1;
	$var($Attribute$Compound, direct, nullptr);
	$var($Attribute$Compound, container, nullptr);
	int32_t index = -1;
	{
		$var($Iterator, i$, $nc($($cast($List, getAnnotationMirrors())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, attribute, $cast($Attribute$Compound, i$->next()));
			{
				++index;
				if ($nc($($nc($nc($nc(attribute)->type)->tsym)->flatName()))->contentEquals(annoTypeName)) {
					directIndex = index;
					$assign(direct, attribute);
				} else if (containerTypeName != nullptr && $nc($($nc($nc(attribute->type)->tsym)->flatName()))->contentEquals(containerTypeName)) {
					containerIndex = index;
					$assign(container, attribute);
				}
			}
		}
	}
	$load($Inherited);
	if (direct == nullptr && container == nullptr && annoType->isAnnotationPresent($Inherited::class$)) {
		return getInheritedAnnotations(annoType);
	}
	$var($Attribute$CompoundArray, contained, unpackContained(container));
	if (direct == nullptr && $nc(contained)->length == 0 && annoType->isAnnotationPresent($Inherited::class$)) {
		return getInheritedAnnotations(annoType);
	}
	int32_t size = (direct == nullptr ? 0 : 1) + $nc(contained)->length;
	$var($AnnotationArray, arr, $cast($AnnotationArray, $1Array::newInstance(annoType, size)));
	int32_t insert = -1;
	int32_t length = arr->length;
	if (directIndex >= 0 && containerIndex >= 0) {
		if (directIndex < containerIndex) {
			arr->set(0, $($AnnotationProxyMaker::generateAnnotation(direct, annoType)));
			insert = 1;
		} else {
			arr->set(arr->length - 1, $($AnnotationProxyMaker::generateAnnotation(direct, annoType)));
			insert = 0;
			--length;
		}
	} else if (directIndex >= 0) {
		arr->set(0, $($AnnotationProxyMaker::generateAnnotation(direct, annoType)));
		return arr;
	} else {
		insert = 0;
	}
	for (int32_t i = 0; i + insert < length; ++i) {
		arr->set(insert + i, $($AnnotationProxyMaker::generateAnnotation(contained->get(i), annoType)));
	}
	return arr;
}

$Attribute$CompoundArray* AnnoConstruct::unpackContained($Attribute$Compound* container) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeArray, contained0, nullptr);
	if (container != nullptr) {
		$assign(contained0, unpackAttributes(container));
	}
	$var($ListBuffer, compounds, $new($ListBuffer));
	if (contained0 != nullptr) {
		{
			$var($AttributeArray, arr$, contained0);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, a, arr$->get(i$));
				{
					$var($Attribute$Compound, attributeCompound, nullptr);
					bool var$0 = $instanceOf($Attribute$Compound, a);
					if (var$0) {
						$assign(attributeCompound, $cast($Attribute$Compound, a));
						var$0 = true;
					}
					if (var$0) {
						$assign(compounds, $nc(compounds)->append(attributeCompound));
					}
				}
			}
		}
	}
	return $fcast($Attribute$CompoundArray, $nc(compounds)->toArray($$new($Attribute$CompoundArray, compounds->size())));
}

$Annotation* AnnoConstruct::getAnnotation($Class* annoType) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(annoType)->isAnnotation()) {
		$throwNew($IllegalArgumentException, $$str({"Not an annotation type: "_s, annoType}));
	}
	$var($Attribute$Compound, c, getAttribute(annoType));
	return c == nullptr ? ($Annotation*)nullptr : $AnnotationProxyMaker::generateAnnotation(c, annoType);
}

$Class* AnnoConstruct::getContainer($Class* annoType) {
	$init(AnnoConstruct);
	$load($Repeatable);
	$var($Repeatable, repeatable, $cast($Repeatable, $nc(annoType)->getAnnotation($Repeatable::class$)));
	return (repeatable == nullptr) ? ($Class*)nullptr : $nc(repeatable)->value();
}

$AttributeArray* AnnoConstruct::unpackAttributes($Attribute$Compound* container) {
	$init(AnnoConstruct);
	return $nc(($cast($Attribute$Array, $($nc(container)->member($nc($nc($nc($nc($nc(container->type)->tsym)->name)->table)->names)->value)))))->values;
}

AnnoConstruct::AnnoConstruct() {
}

$Class* AnnoConstruct::load$($String* name, bool initialize) {
	$loadClass(AnnoConstruct, name, initialize, &_AnnoConstruct_ClassInfo_, allocate$AnnoConstruct);
	return class$;
}

$Class* AnnoConstruct::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com