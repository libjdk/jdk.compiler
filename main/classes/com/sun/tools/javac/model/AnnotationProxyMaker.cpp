#include <com/sun/tools/javac/model/AnnotationProxyMaker.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/model/AnnotationProxyMaker$ValueVisitor.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/Iterable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/reflect/annotation/AnnotationParser.h>
#include <jcpp.h>

#undef MTH
#undef NON_RECURSIVE

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $AnnotationProxyMaker$ValueVisitor = ::com::sun::tools::javac::model::AnnotationProxyMaker$ValueVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $AnnotationParser = ::sun::reflect::annotation::AnnotationParser;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$FieldInfo _AnnotationProxyMaker_FieldInfo_[] = {
	{"anno", "Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PRIVATE | $FINAL, $field(AnnotationProxyMaker, anno)},
	{"annoType", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PRIVATE | $FINAL, $field(AnnotationProxyMaker, annoType)},
	{}
};

$MethodInfo _AnnotationProxyMaker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Attribute$Compound;Ljava/lang/Class;)V", "(Lcom/sun/tools/javac/code/Attribute$Compound;Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)V", $PRIVATE, $method(static_cast<void(AnnotationProxyMaker::*)($Attribute$Compound*,$Class*)>(&AnnotationProxyMaker::init$))},
	{"generateAnnotation", "(Lcom/sun/tools/javac/code/Attribute$Compound;Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Lcom/sun/tools/javac/code/Attribute$Compound;Ljava/lang/Class<TA;>;)TA;", $PUBLIC | $STATIC, $method(static_cast<$Annotation*(*)($Attribute$Compound*,$Class*)>(&AnnotationProxyMaker::generateAnnotation))},
	{"generateAnnotation", "()Ljava/lang/annotation/Annotation;", nullptr, $PRIVATE, $method(static_cast<$Annotation*(AnnotationProxyMaker::*)()>(&AnnotationProxyMaker::generateAnnotation))},
	{"generateValue", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(AnnotationProxyMaker::*)($Symbol$MethodSymbol*,$Attribute*)>(&AnnotationProxyMaker::generateValue))},
	{"getAllReflectedValues", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $method(static_cast<$Map*(AnnotationProxyMaker::*)()>(&AnnotationProxyMaker::getAllReflectedValues))},
	{"getAllValues", "()Ljava/util/Map;", "()Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;", $PRIVATE, $method(static_cast<$Map*(AnnotationProxyMaker::*)()>(&AnnotationProxyMaker::getAllValues))},
	{}
};

$InnerClassInfo _AnnotationProxyMaker_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypesExceptionProxy", "com.sun.tools.javac.model.AnnotationProxyMaker", "MirroredTypesExceptionProxy", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypeExceptionProxy", "com.sun.tools.javac.model.AnnotationProxyMaker", "MirroredTypeExceptionProxy", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor", "com.sun.tools.javac.model.AnnotationProxyMaker", "ValueVisitor", $PRIVATE},
	{}
};

$ClassInfo _AnnotationProxyMaker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.model.AnnotationProxyMaker",
	"java.lang.Object",
	nullptr,
	_AnnotationProxyMaker_FieldInfo_,
	_AnnotationProxyMaker_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationProxyMaker_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypesExceptionProxy,com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypeExceptionProxy,com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor,com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy"
};

$Object* allocate$AnnotationProxyMaker($Class* clazz) {
	return $of($alloc(AnnotationProxyMaker));
}

void AnnotationProxyMaker::init$($Attribute$Compound* anno, $Class* annoType) {
	$set(this, anno, anno);
	$set(this, annoType, annoType);
}

$Annotation* AnnotationProxyMaker::generateAnnotation($Attribute$Compound* anno, $Class* annoType) {
	$useLocalCurrentObjectStackCache();
	$var(AnnotationProxyMaker, apm, $new(AnnotationProxyMaker, anno, annoType));
	return $cast($Annotation, $nc(annoType)->cast($(apm->generateAnnotation())));
}

$Annotation* AnnotationProxyMaker::generateAnnotation() {
	return $AnnotationParser::annotationForMap(this->annoType, $(getAllReflectedValues()));
}

$Map* AnnotationProxyMaker::getAllReflectedValues() {
	$useLocalCurrentObjectStackCache();
	$var($Map, res, $new($LinkedHashMap));
	{
		$var($Iterator, i$, $nc($($nc($(getAllValues()))->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Symbol$MethodSymbol, meth, $cast($Symbol$MethodSymbol, $nc(entry)->getKey()));
				$var($Object, value, generateValue(meth, $cast($Attribute, $(entry->getValue()))));
				if (value != nullptr) {
					res->put($($nc($nc(meth)->name)->toString()), value);
				} else {
				}
			}
		}
	}
	return res;
}

$Map* AnnotationProxyMaker::getAllValues() {
	$useLocalCurrentObjectStackCache();
	$var($Map, res, $new($LinkedHashMap));
	$var($Symbol$ClassSymbol, sym, $cast($Symbol$ClassSymbol, $nc($nc(this->anno)->type)->tsym));
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc($($nc(sym)->members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(s)->kind == $Kinds$Kind::MTH) {
					$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, s));
					$var($Attribute, def, m->getDefaultValue());
					if (def != nullptr) {
						res->put(m, def);
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc($nc(this->anno)->values)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, p, $cast($Pair, i$->next()));
			res->put($cast($Symbol$MethodSymbol, $nc(p)->fst), $cast($Attribute, p->snd));
		}
	}
	return res;
}

$Object* AnnotationProxyMaker::generateValue($Symbol$MethodSymbol* meth, $Attribute* attr) {
	$var($AnnotationProxyMaker$ValueVisitor, vv, $new($AnnotationProxyMaker$ValueVisitor, this, meth));
	return $of(vv->getValue(attr));
}

AnnotationProxyMaker::AnnotationProxyMaker() {
}

$Class* AnnotationProxyMaker::load$($String* name, bool initialize) {
	$loadClass(AnnotationProxyMaker, name, initialize, &_AnnotationProxyMaker_ClassInfo_, allocate$AnnotationProxyMaker);
	return class$;
}

$Class* AnnotationProxyMaker::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com