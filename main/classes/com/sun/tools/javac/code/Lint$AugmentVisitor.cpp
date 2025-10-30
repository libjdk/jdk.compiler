#include <com/sun/tools/javac/code/Lint$AugmentVisitor.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Context = ::com::sun::tools::javac::util::Context;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Lint$AugmentVisitor_FieldInfo_[] = {
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PRIVATE | $FINAL, $field(Lint$AugmentVisitor, context)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE, $field(Lint$AugmentVisitor, syms)},
	{"parent", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PRIVATE, $field(Lint$AugmentVisitor, parent)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PRIVATE, $field(Lint$AugmentVisitor, lint)},
	{}
};

$MethodInfo _Lint$AugmentVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, 0, $method(static_cast<void(Lint$AugmentVisitor::*)($Context*)>(&Lint$AugmentVisitor::init$))},
	{"augment", "(Lcom/sun/tools/javac/code/Lint;Lcom/sun/tools/javac/code/Attribute$Compound;)Lcom/sun/tools/javac/code/Lint;", nullptr, 0},
	{"augment", "(Lcom/sun/tools/javac/code/Lint;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Lint;", "(Lcom/sun/tools/javac/code/Lint;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)Lcom/sun/tools/javac/code/Lint;", 0},
	{"initSyms", "()V", nullptr, $PRIVATE, $method(static_cast<void(Lint$AugmentVisitor::*)()>(&Lint$AugmentVisitor::initSyms))},
	{"suppress", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)V", nullptr, $PRIVATE, $method(static_cast<void(Lint$AugmentVisitor::*)($Lint$LintCategory*)>(&Lint$AugmentVisitor::suppress))},
	{"visitArray", "(Lcom/sun/tools/javac/code/Attribute$Array;)V", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/tools/javac/code/Attribute$Class;)V", nullptr, $PUBLIC},
	{"visitCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"visitConstant", "(Lcom/sun/tools/javac/code/Attribute$Constant;)V", nullptr, $PUBLIC},
	{"visitEnum", "(Lcom/sun/tools/javac/code/Attribute$Enum;)V", nullptr, $PUBLIC},
	{"visitError", "(Lcom/sun/tools/javac/code/Attribute$Error;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Lint$AugmentVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Lint$AugmentVisitor", "com.sun.tools.javac.code.Lint", "AugmentVisitor", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Lint$AugmentVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Lint$AugmentVisitor",
	"java.lang.Object",
	"com.sun.tools.javac.code.Attribute$Visitor",
	_Lint$AugmentVisitor_FieldInfo_,
	_Lint$AugmentVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_Lint$AugmentVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Lint"
};

$Object* allocate$Lint$AugmentVisitor($Class* clazz) {
	return $of($alloc(Lint$AugmentVisitor));
}

void Lint$AugmentVisitor::init$($Context* context) {
	$set(this, context, context);
}

$Lint* Lint$AugmentVisitor::augment($Lint* parent, $Attribute$Compound* attr) {
	initSyms();
	$set(this, parent, parent);
	$set(this, lint, nullptr);
	$nc(attr)->accept(this);
	return (this->lint == nullptr ? parent : this->lint);
}

$Lint* Lint$AugmentVisitor::augment($Lint* parent, $List* attrs) {
	$useLocalCurrentObjectStackCache();
	initSyms();
	$set(this, parent, parent);
	$set(this, lint, nullptr);
	{
		$var($Iterator, i$, $nc(attrs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
			{
				$nc(a)->accept(this);
			}
		}
	}
	return (this->lint == nullptr ? parent : this->lint);
}

void Lint$AugmentVisitor::initSyms() {
	if (this->syms == nullptr) {
		$set(this, syms, $Symtab::instance(this->context));
	}
}

void Lint$AugmentVisitor::suppress($Lint$LintCategory* lc) {
	if (this->lint == nullptr) {
		$set(this, lint, $new($Lint, this->parent));
	}
	$nc($nc(this->lint)->suppressedValues)->add(lc);
	$nc($nc(this->lint)->values)->remove(lc);
}

void Lint$AugmentVisitor::visitConstant($Attribute$Constant* value) {
	if ($nc($nc(value)->type)->tsym == $nc($nc(this->syms)->stringType)->tsym) {
		$Lint$LintCategory* lc = $Lint$LintCategory::get(($cast($String, value->value)));
		if (lc != nullptr) {
			suppress(lc);
		}
	}
}

void Lint$AugmentVisitor::visitClass($Attribute$Class* clazz) {
}

void Lint$AugmentVisitor::visitCompound($Attribute$Compound* compound) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(compound)->type)->tsym == $nc($nc(this->syms)->suppressWarningsType)->tsym) {
		{
			$var($List, v, compound->values);
			for (; $nc(v)->nonEmpty(); $assign(v, $nc(v)->tail)) {
				$var($Pair, value, $cast($Pair, v->head));
				if ($nc($($nc($nc(($cast($Symbol$MethodSymbol, $nc(value)->fst)))->name)->toString()))->equals("value"_s)) {
					$nc(($cast($Attribute, value->snd)))->accept(this);
				}
			}
		}
	}
}

void Lint$AugmentVisitor::visitArray($Attribute$Array* array) {
	$useLocalCurrentObjectStackCache();
	{
		$var($AttributeArray, arr$, $nc(array)->values);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, value, arr$->get(i$));
			$nc(value)->accept(this);
		}
	}
}

void Lint$AugmentVisitor::visitEnum($Attribute$Enum* e) {
}

void Lint$AugmentVisitor::visitError($Attribute$Error* e) {
}

Lint$AugmentVisitor::Lint$AugmentVisitor() {
}

$Class* Lint$AugmentVisitor::load$($String* name, bool initialize) {
	$loadClass(Lint$AugmentVisitor, name, initialize, &_Lint$AugmentVisitor_ClassInfo_, allocate$Lint$AugmentVisitor);
	return class$;
}

$Class* Lint$AugmentVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com