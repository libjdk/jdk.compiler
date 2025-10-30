#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata$1.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MTH
#undef NON_RECURSIVE
#undef NOT_AN_ANNOTATION_TYPE

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Annotate$AnnotationTypeCompleter = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter;
using $Annotate$AnnotationTypeMetadata$1 = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata$1;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Annotate$AnnotationTypeMetadata_FieldInfo_[] = {
	{"metaDataFor", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $FINAL, $field(Annotate$AnnotationTypeMetadata, metaDataFor)},
	{"target", "Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PRIVATE, $field(Annotate$AnnotationTypeMetadata, target)},
	{"repeatable", "Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PRIVATE, $field(Annotate$AnnotationTypeMetadata, repeatable)},
	{"annotationTypeCompleter", "Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter;", nullptr, $PRIVATE, $field(Annotate$AnnotationTypeMetadata, annotationTypeCompleter)},
	{"NOT_AN_ANNOTATION_TYPE", "Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Annotate$AnnotationTypeMetadata, NOT_AN_ANNOTATION_TYPE)},
	{}
};

$MethodInfo _Annotate$AnnotationTypeMetadata_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$AnnotationTypeMetadata::*)($Symbol$ClassSymbol*,$Annotate$AnnotationTypeCompleter*)>(&Annotate$AnnotationTypeMetadata::init$))},
	{"complete", "()V", nullptr, $PUBLIC},
	{"getAnnotationElements", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PUBLIC},
	{"getAnnotationElementsWithDefault", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PUBLIC},
	{"getRepeatable", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC},
	{"getTarget", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PRIVATE, $method(static_cast<void(Annotate$AnnotationTypeMetadata::*)()>(&Annotate$AnnotationTypeMetadata::init))},
	{"isMetadataForAnnotationType", "()Z", nullptr, $PUBLIC},
	{"notAnAnnotationType", "()Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Annotate$AnnotationTypeMetadata*(*)()>(&Annotate$AnnotationTypeMetadata::notAnAnnotationType))},
	{"setRepeatable", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"setTarget", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Annotate$AnnotationTypeMetadata_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeMetadata", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Annotate$AnnotationTypeMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata",
	"java.lang.Object",
	nullptr,
	_Annotate$AnnotationTypeMetadata_FieldInfo_,
	_Annotate$AnnotationTypeMetadata_MethodInfo_,
	nullptr,
	nullptr,
	_Annotate$AnnotationTypeMetadata_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate"
};

$Object* allocate$Annotate$AnnotationTypeMetadata($Class* clazz) {
	return $of($alloc(Annotate$AnnotationTypeMetadata));
}

Annotate$AnnotationTypeMetadata* Annotate$AnnotationTypeMetadata::NOT_AN_ANNOTATION_TYPE = nullptr;

void Annotate$AnnotationTypeMetadata::init$($Symbol$ClassSymbol* metaDataFor, $Annotate$AnnotationTypeCompleter* annotationTypeCompleter) {
	$set(this, metaDataFor, metaDataFor);
	$set(this, annotationTypeCompleter, annotationTypeCompleter);
}

void Annotate$AnnotationTypeMetadata::init() {
	while (!$nc(this->metaDataFor)->isCompleted()) {
		$nc(this->metaDataFor)->complete();
	}
	if (this->annotationTypeCompleter != nullptr) {
		$var($Annotate$AnnotationTypeCompleter, c, this->annotationTypeCompleter);
		$set(this, annotationTypeCompleter, nullptr);
		$nc(c)->complete(this->metaDataFor);
	}
}

void Annotate$AnnotationTypeMetadata::complete() {
	init();
}

$Attribute$Compound* Annotate$AnnotationTypeMetadata::getRepeatable() {
	init();
	return this->repeatable;
}

void Annotate$AnnotationTypeMetadata::setRepeatable($Attribute$Compound* repeatable) {
	$Assert::checkNull(this->repeatable);
	$set(this, repeatable, repeatable);
}

$Attribute$Compound* Annotate$AnnotationTypeMetadata::getTarget() {
	init();
	return this->target;
}

void Annotate$AnnotationTypeMetadata::setTarget($Attribute$Compound* target) {
	$Assert::checkNull(this->target);
	$set(this, target, target);
}

$Set* Annotate$AnnotationTypeMetadata::getAnnotationElements() {
	$useLocalCurrentObjectStackCache();
	init();
	$var($Set, members, $new($LinkedHashSet));
	$var($Scope$WriteableScope, s, $nc(this->metaDataFor)->members());
	$init($Scope$LookupKind);
	$var($Iterable, ss, $nc(s)->getSymbols($Scope$LookupKind::NON_RECURSIVE));
	{
		$var($Iterator, i$, $nc(ss)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			$init($Kinds$Kind);
			if ($nc(sym)->kind == $Kinds$Kind::MTH && sym->name != $nc($nc($nc(sym->name)->table)->names)->clinit && ((int64_t)(sym->flags() & (uint64_t)(int64_t)4096)) == 0) {
				members->add($cast($Symbol$MethodSymbol, sym));
			}
		}
	}
	return members;
}

$Set* Annotate$AnnotationTypeMetadata::getAnnotationElementsWithDefault() {
	$useLocalCurrentObjectStackCache();
	init();
	$var($Set, members, getAnnotationElements());
	$var($Set, res, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(members)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$MethodSymbol, m, $cast($Symbol$MethodSymbol, i$->next()));
			if ($nc(m)->defaultValue != nullptr) {
				res->add(m);
			}
		}
	}
	return res;
}

$String* Annotate$AnnotationTypeMetadata::toString() {
	return $str({"Annotation type for: "_s, this->metaDataFor});
}

bool Annotate$AnnotationTypeMetadata::isMetadataForAnnotationType() {
	return true;
}

Annotate$AnnotationTypeMetadata* Annotate$AnnotationTypeMetadata::notAnAnnotationType() {
	$init(Annotate$AnnotationTypeMetadata);
	return Annotate$AnnotationTypeMetadata::NOT_AN_ANNOTATION_TYPE;
}

void clinit$Annotate$AnnotationTypeMetadata($Class* class$) {
	$assignStatic(Annotate$AnnotationTypeMetadata::NOT_AN_ANNOTATION_TYPE, $new($Annotate$AnnotationTypeMetadata$1, nullptr, nullptr));
}

Annotate$AnnotationTypeMetadata::Annotate$AnnotationTypeMetadata() {
}

$Class* Annotate$AnnotationTypeMetadata::load$($String* name, bool initialize) {
	$loadClass(Annotate$AnnotationTypeMetadata, name, initialize, &_Annotate$AnnotationTypeMetadata_ClassInfo_, clinit$Annotate$AnnotationTypeMetadata, allocate$Annotate$AnnotationTypeMetadata);
	return class$;
}

$Class* Annotate$AnnotationTypeMetadata::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com