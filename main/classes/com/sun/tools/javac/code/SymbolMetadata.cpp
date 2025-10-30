#include <com/sun/tools/javac/code/SymbolMetadata.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/CharSequence.h>
#include <java/util/Iterator.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef BRIDGE
#undef DECL_IN_PROGRESS
#undef DECL_NOT_STARTED
#undef MTH
#undef TYP

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _SymbolMetadata_FieldInfo_[] = {
	{"DECL_NOT_STARTED", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SymbolMetadata, DECL_NOT_STARTED)},
	{"DECL_IN_PROGRESS", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SymbolMetadata, DECL_IN_PROGRESS)},
	{"attributes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PRIVATE, $field(SymbolMetadata, attributes)},
	{"type_attributes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PRIVATE, $field(SymbolMetadata, type_attributes)},
	{"init_type_attributes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PRIVATE, $field(SymbolMetadata, init_type_attributes)},
	{"clinit_type_attributes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PRIVATE, $field(SymbolMetadata, clinit_type_attributes)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $FINAL, $field(SymbolMetadata, sym)},
	{}
};

$MethodInfo _SymbolMetadata_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(SymbolMetadata::*)($Symbol*)>(&SymbolMetadata::init$))},
	{"append", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/SymbolMetadata;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)Lcom/sun/tools/javac/code/SymbolMetadata;", $PUBLIC},
	{"appendClassInitTypeAttributes", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/SymbolMetadata;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/SymbolMetadata;", $PUBLIC},
	{"appendInitTypeAttributes", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/SymbolMetadata;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/SymbolMetadata;", $PUBLIC},
	{"appendUniqueTypes", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/SymbolMetadata;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/SymbolMetadata;", $PUBLIC},
	{"filterDeclSentinels", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PRIVATE, $method(static_cast<$List*(SymbolMetadata::*)($List*)>(&SymbolMetadata::filterDeclSentinels))},
	{"getClassInitTypeAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"getDeclarationAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PUBLIC},
	{"getInitTypeAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"getTypeAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isStarted", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SymbolMetadata::*)()>(&SymbolMetadata::isStarted))},
	{"isTypesEmpty", "()Z", nullptr, $PUBLIC},
	{"pendingCompletion", "()Z", nullptr, $PUBLIC},
	{"prepend", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/SymbolMetadata;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)Lcom/sun/tools/javac/code/SymbolMetadata;", $PUBLIC},
	{"removeDeclarationMetadata", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"removeFromCompoundList", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Attribute$Compound;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;Lcom/sun/tools/javac/code/Attribute$Compound;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PRIVATE, $method(static_cast<$List*(SymbolMetadata::*)($List*,$Attribute$Compound*)>(&SymbolMetadata::removeFromCompoundList))},
	{"reset", "()Lcom/sun/tools/javac/code/SymbolMetadata;", nullptr, $PUBLIC},
	{"setAttributes", "(Lcom/sun/tools/javac/code/SymbolMetadata;)V", nullptr, $PUBLIC},
	{"setClassInitTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{"setDeclarationAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)V", $PUBLIC},
	{"setInitTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{"setTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{}
};

$ClassInfo _SymbolMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.SymbolMetadata",
	"java.lang.Object",
	nullptr,
	_SymbolMetadata_FieldInfo_,
	_SymbolMetadata_MethodInfo_
};

$Object* allocate$SymbolMetadata($Class* clazz) {
	return $of($alloc(SymbolMetadata));
}

$List* SymbolMetadata::DECL_NOT_STARTED = nullptr;
$List* SymbolMetadata::DECL_IN_PROGRESS = nullptr;

void SymbolMetadata::init$($Symbol* sym) {
	$set(this, attributes, SymbolMetadata::DECL_NOT_STARTED);
	$set(this, type_attributes, $List::nil());
	$set(this, init_type_attributes, $List::nil());
	$set(this, clinit_type_attributes, $List::nil());
	$set(this, sym, sym);
}

$List* SymbolMetadata::getDeclarationAttributes() {
	return filterDeclSentinels(this->attributes);
}

$List* SymbolMetadata::getTypeAttributes() {
	return this->type_attributes;
}

$List* SymbolMetadata::getInitTypeAttributes() {
	return this->init_type_attributes;
}

$List* SymbolMetadata::getClassInitTypeAttributes() {
	return this->clinit_type_attributes;
}

void SymbolMetadata::setDeclarationAttributes($List* a) {
	bool var$0 = pendingCompletion();
	$Assert::check(var$0 || !isStarted());
	if (a == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, attributes, a);
}

void SymbolMetadata::setTypeAttributes($List* a) {
	if (a == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, type_attributes, a);
}

void SymbolMetadata::setInitTypeAttributes($List* a) {
	if (a == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, init_type_attributes, a);
}

void SymbolMetadata::setClassInitTypeAttributes($List* a) {
	if (a == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, clinit_type_attributes, a);
}

void SymbolMetadata::setAttributes(SymbolMetadata* other) {
	$useLocalCurrentObjectStackCache();
	if (other == nullptr) {
		$throwNew($NullPointerException);
	}
	setDeclarationAttributes($($nc(other)->getDeclarationAttributes()));
	if (((int64_t)($nc(this->sym)->flags() & (uint64_t)$Flags::BRIDGE)) != 0) {
		$init($Kinds$Kind);
		$Assert::check($nc($nc(other)->sym)->kind == $Kinds$Kind::MTH);
		$var($ListBuffer, typeAttributes, $new($ListBuffer));
		{
			$var($Iterator, i$, $nc($($nc(other)->getTypeAttributes()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$TypeCompound, tc, $cast($Attribute$TypeCompound, i$->next()));
				{
					if (!$nc($nc(tc)->position)->type->isLocal()) {
						typeAttributes->append(tc);
					}
				}
			}
		}
		setTypeAttributes($(typeAttributes->toList()));
	} else {
		setTypeAttributes($($nc(other)->getTypeAttributes()));
	}
	$init($Kinds$Kind);
	if ($nc(this->sym)->kind == $Kinds$Kind::TYP) {
		setInitTypeAttributes($($nc(other)->getInitTypeAttributes()));
		setClassInitTypeAttributes($($nc(other)->getClassInitTypeAttributes()));
	}
}

SymbolMetadata* SymbolMetadata::reset() {
	$set(this, attributes, SymbolMetadata::DECL_IN_PROGRESS);
	return this;
}

bool SymbolMetadata::isEmpty() {
	bool var$1 = !isStarted();
	bool var$0 = var$1 || pendingCompletion();
	return var$0 || $nc(this->attributes)->isEmpty();
}

bool SymbolMetadata::isTypesEmpty() {
	return $nc(this->type_attributes)->isEmpty();
}

bool SymbolMetadata::pendingCompletion() {
	return this->attributes == SymbolMetadata::DECL_IN_PROGRESS;
}

SymbolMetadata* SymbolMetadata::append($List* l) {
	$set(this, attributes, filterDeclSentinels(this->attributes));
	if ($nc(l)->isEmpty()) {
	} else if ($nc(this->attributes)->isEmpty()) {
		$set(this, attributes, l);
	} else {
		$set(this, attributes, $nc(this->attributes)->appendList(l));
	}
	return this;
}

SymbolMetadata* SymbolMetadata::appendUniqueTypes($List* l) {
	$useLocalCurrentObjectStackCache();
	if ($nc(l)->isEmpty()) {
	} else if ($nc(this->type_attributes)->isEmpty()) {
		$set(this, type_attributes, l);
	} else {
		{
			$var($Iterator, i$, l->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$TypeCompound, tc, $cast($Attribute$TypeCompound, i$->next()));
				{
					if (!$nc(this->type_attributes)->contains(tc)) {
						$set(this, type_attributes, $nc(this->type_attributes)->append(tc));
					}
				}
			}
		}
	}
	return this;
}

SymbolMetadata* SymbolMetadata::appendInitTypeAttributes($List* l) {
	if ($nc(l)->isEmpty()) {
	} else if ($nc(this->init_type_attributes)->isEmpty()) {
		$set(this, init_type_attributes, l);
	} else {
		$set(this, init_type_attributes, $nc(this->init_type_attributes)->appendList(l));
	}
	return this;
}

SymbolMetadata* SymbolMetadata::appendClassInitTypeAttributes($List* l) {
	if ($nc(l)->isEmpty()) {
	} else if ($nc(this->clinit_type_attributes)->isEmpty()) {
		$set(this, clinit_type_attributes, l);
	} else {
		$set(this, clinit_type_attributes, $nc(this->clinit_type_attributes)->appendList(l));
	}
	return this;
}

SymbolMetadata* SymbolMetadata::prepend($List* l) {
	$set(this, attributes, filterDeclSentinels(this->attributes));
	if ($nc(l)->isEmpty()) {
	} else if ($nc(this->attributes)->isEmpty()) {
		$set(this, attributes, l);
	} else {
		$set(this, attributes, $nc(this->attributes)->prependList(l));
	}
	return this;
}

$List* SymbolMetadata::filterDeclSentinels($List* a) {
	return (a == SymbolMetadata::DECL_IN_PROGRESS || a == SymbolMetadata::DECL_NOT_STARTED) ? $List::nil() : a;
}

bool SymbolMetadata::isStarted() {
	return this->attributes != SymbolMetadata::DECL_NOT_STARTED;
}

$List* SymbolMetadata::removeFromCompoundList($List* l, $Attribute$Compound* compound) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, lb, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(l)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, c, $cast($Attribute$Compound, i$->next()));
			{
				if (c != compound) {
					lb->add(c);
				}
			}
		}
	}
	return lb->toList();
}

void SymbolMetadata::removeDeclarationMetadata($Attribute$Compound* compound) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->attributes)->contains(compound)) {
		$set(this, attributes, removeFromCompoundList(this->attributes, compound));
	} else {
		{
			$var($Iterator, i$, $nc(this->attributes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute$Compound, attrCompound, $cast($Attribute$Compound, i$->next()));
				{
					bool var$0 = $nc(attrCompound)->isSynthesized();
					if (var$0 && !$nc(attrCompound->values)->isEmpty()) {
						$var($Pair, val, $cast($Pair, $nc(attrCompound->values)->get(0)));
						{
							$var($Attribute$Array, arr, nullptr);
							bool var$1 = $nc($($cast($Name, $nc(($cast($Symbol$MethodSymbol, $nc(val)->fst)))->getSimpleName())))->contentEquals("value"_s);
							if (var$1) {
								$var($Object, patt9820$temp, val->snd);
								bool var$2 = $instanceOf($Attribute$Array, patt9820$temp);
								if (var$2) {
									$assign(arr, $cast($Attribute$Array, patt9820$temp));
									var$2 = true;
								}
								var$1 = var$2;
							}
							if (var$1) {
								if ($nc($nc(arr)->values)->length != 0 && $instanceOf($Attribute$Compound, $nc(arr->values)->get(0)) && $nc($nc(arr->values)->get(0))->type == $nc(compound)->type) {
									$set(this, attributes, removeFromCompoundList(this->attributes, attrCompound));
								}
							}
						}
					}
				}
			}
		}
	}
}

void clinit$SymbolMetadata($Class* class$) {
	$assignStatic(SymbolMetadata::DECL_NOT_STARTED, $List::of(nullptr));
	$assignStatic(SymbolMetadata::DECL_IN_PROGRESS, $List::of(nullptr));
}

SymbolMetadata::SymbolMetadata() {
}

$Class* SymbolMetadata::load$($String* name, bool initialize) {
	$loadClass(SymbolMetadata, name, initialize, &_SymbolMetadata_ClassInfo_, clinit$SymbolMetadata, allocate$SymbolMetadata);
	return class$;
}

$Class* SymbolMetadata::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com