#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef CLASS
#undef ERR
#undef NON_RECURSIVE
#undef TYP
#undef TYPEVAR
#undef VAL_MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $1Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Symbol$TypeSymbol_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Kinds$Kind;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$TypeSymbol::*)($Kinds$Kind*,int64_t,$Name*,$Type*,$Symbol*)>(&Symbol$TypeSymbol::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"formFlatName", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Name*(*)($Name*,$Symbol*)>(&Symbol$TypeSymbol::formFlatName))},
	{"formFullName", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Name*(*)($Name*,$Symbol*)>(&Symbol$TypeSymbol::formFullName))},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAnnotationTypeMetadata", "()Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata;", nullptr, $PUBLIC},
	{"getEnclosedElements", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isAnnotationType", "()Z", nullptr, $PUBLIC},
	{"precedes", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Symbol$TypeSymbol::*)(Symbol$TypeSymbol*,$Types*)>(&Symbol$TypeSymbol::precedes))},
	{}
};

$InnerClassInfo _Symbol$TypeSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$TypeSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Symbol$TypeSymbol",
	"com.sun.tools.javac.code.Symbol",
	nullptr,
	nullptr,
	_Symbol$TypeSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$TypeSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$TypeSymbol($Class* clazz) {
	return $of($alloc(Symbol$TypeSymbol));
}

void Symbol$TypeSymbol::init$($Kinds$Kind* kind, int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$Symbol::init$(kind, flags, name, type, owner);
}

$Name* Symbol$TypeSymbol::formFullName($Name* name, $Symbol* owner) {
	$init(Symbol$TypeSymbol);
	if (owner == nullptr) {
		return name;
	}
	$init($Kinds$Kind);
	bool var$0 = ($nc(owner)->kind != $Kinds$Kind::ERR);
	if (var$0) {
		$init($Kinds$KindSelector);
		bool var$1 = $nc(owner->kind)->matches($Kinds$KindSelector::VAL_MTH);
		$init($TypeTag);
		var$0 = (var$1 || (owner->kind == $Kinds$Kind::TYP && $nc(owner->type)->hasTag($TypeTag::TYPEVAR)));
	}
	if (var$0) {
		return name;
	}
	$var($Name, prefix, $nc(owner)->getQualifiedName());
	if (prefix == nullptr || prefix == $nc($nc($nc(prefix)->table)->names)->empty) {
		return name;
	} else {
		return prefix->append(u'.', name);
	}
}

$Name* Symbol$TypeSymbol::formFlatName($Name* name, $Symbol* owner) {
	$init(Symbol$TypeSymbol);
	$init($Kinds$KindSelector);
	bool var$0 = owner == nullptr || $nc($nc(owner)->kind)->matches($Kinds$KindSelector::VAL_MTH);
	$init($TypeTag);
	if (var$0 || ($nc(owner)->kind == $Kinds$Kind::TYP && $nc(owner->type)->hasTag($TypeTag::TYPEVAR))) {
		return name;
	}
	char16_t sep = $nc(owner)->kind == $Kinds$Kind::TYP ? u'$' : u'.';
	$var($Name, prefix, $nc(owner)->flatName());
	if (prefix == nullptr || prefix == $nc($nc($nc(prefix)->table)->names)->empty) {
		return name;
	} else {
		return prefix->append(sep, name);
	}
}

bool Symbol$TypeSymbol::precedes(Symbol$TypeSymbol* that, $Types* types) {
	$useLocalCurrentObjectStackCache();
	if (this == that) {
		return false;
	}
	if ($nc(this->type)->hasTag($($nc($nc(that)->type)->getTag()))) {
		$init($TypeTag);
		if ($nc(this->type)->hasTag($TypeTag::CLASS)) {
			int32_t var$1 = $nc(types)->rank($nc(that)->type);
			bool var$0 = var$1 < types->rank(this->type);
			if (!var$0) {
				int32_t var$3 = $nc(types)->rank($nc(that)->type);
				bool var$2 = var$3 == types->rank(this->type);
				var$0 = var$2 && $nc($($nc(that)->getQualifiedName()))->compareTo($(this->getQualifiedName())) < 0;
			}
			return var$0;
		} else {
			if ($nc(this->type)->hasTag($TypeTag::TYPEVAR)) {
				return $nc(types)->isSubtype(this->type, $nc(that)->type);
			}
		}
	}
	$init($TypeTag);
	return $nc(this->type)->hasTag($TypeTag::TYPEVAR);
}

$1List* Symbol$TypeSymbol::getEnclosedElements() {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $List::nil());
	$init($Kinds$Kind);
	$init($TypeTag);
	if (this->kind == $Kinds$Kind::TYP && $nc(this->type)->hasTag($TypeTag::TYPEVAR)) {
		return list;
	}
	apiComplete();
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc($(members()))->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$nc(sym)->apiComplete();
				if (((int64_t)(sym->flags() & (uint64_t)(int64_t)4096)) == 0 && $equals(sym->owner, this) && sym->kind != $Kinds$Kind::ERR) {
					$assign(list, $nc(list)->prepend(sym));
				}
			}
		}
	}
	return list;
}

$Annotate$AnnotationTypeMetadata* Symbol$TypeSymbol::getAnnotationTypeMetadata() {
	$Assert::error("Only on ClassSymbol"_s);
	return nullptr;
}

bool Symbol$TypeSymbol::isAnnotationType() {
	return false;
}

$Object* Symbol$TypeSymbol::accept($Symbol$Visitor* v, Object$* p) {
	return $of($nc(v)->visitTypeSymbol(this, p));
}

$1List* Symbol$TypeSymbol::getAnnotationMirrors() {
	return $Symbol::getAnnotationMirrors();
}

$Element* Symbol$TypeSymbol::getEnclosingElement() {
	return $Symbol::getEnclosingElement();
}

$1Name* Symbol$TypeSymbol::getSimpleName() {
	return $Symbol::getSimpleName();
}

$TypeMirror* Symbol$TypeSymbol::asType() {
	return $Symbol::asType();
}

Symbol$TypeSymbol::Symbol$TypeSymbol() {
}

$Class* Symbol$TypeSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$TypeSymbol, name, initialize, &_Symbol$TypeSymbol_ClassInfo_, allocate$Symbol$TypeSymbol);
	return class$;
}

$Class* Symbol$TypeSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com