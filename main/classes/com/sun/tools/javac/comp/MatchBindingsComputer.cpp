#include <com/sun/tools/javac/comp/MatchBindingsComputer.h>

#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/MatchBindingsComputer$1.h>
#include <com/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef EMPTY
#undef NOT

using $ListArray = $Array<::com::sun::tools::javac::util::List>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $MatchBindingsComputer$1 = ::com::sun::tools::javac::comp::MatchBindingsComputer$1;
using $MatchBindingsComputer$MatchBindings = ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$CompoundAttribute _MatchBindingsComputer_MethodAnnotations_union$10[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$FieldInfo _MatchBindingsComputer_FieldInfo_[] = {
	{"EMPTY", "Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MatchBindingsComputer, EMPTY)},
	{"matchBindingsComputerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/MatchBindingsComputer;>;", $PROTECTED | $STATIC | $FINAL, $staticField(MatchBindingsComputer, matchBindingsComputerKey)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(MatchBindingsComputer, log)},
	{}
};

$MethodInfo _MatchBindingsComputer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(MatchBindingsComputer::*)($Context*)>(&MatchBindingsComputer::init$))},
	{"andOperation", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC},
	{"binary", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC},
	{"conditional", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC},
	{"finishBindings", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC},
	{"guardedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/MatchBindingsComputer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MatchBindingsComputer*(*)($Context*)>(&MatchBindingsComputer::instance))},
	{"intersection", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", $PRIVATE, $method(static_cast<$List*(MatchBindingsComputer::*)($JCDiagnostic$DiagnosticPosition*,$List*,$List*)>(&MatchBindingsComputer::intersection))},
	{"switchCase", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC},
	{"unary", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;)Lcom/sun/tools/javac/comp/MatchBindingsComputer$MatchBindings;", nullptr, $PUBLIC},
	{"union", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;[Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;[Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;>;", $PRIVATE | $FINAL | $TRANSIENT, $method(static_cast<$List*(MatchBindingsComputer::*)($JCDiagnostic$DiagnosticPosition*,$List*,$ListArray*)>(&MatchBindingsComputer::union$)), nullptr, nullptr, _MatchBindingsComputer_MethodAnnotations_union$10},
	{}
};

$InnerClassInfo _MatchBindingsComputer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.MatchBindingsComputer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings", "com.sun.tools.javac.comp.MatchBindingsComputer", "MatchBindings", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MatchBindingsComputer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.MatchBindingsComputer",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_MatchBindingsComputer_FieldInfo_,
	_MatchBindingsComputer_MethodInfo_,
	nullptr,
	nullptr,
	_MatchBindingsComputer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.MatchBindingsComputer$1,com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings"
};

$Object* allocate$MatchBindingsComputer($Class* clazz) {
	return $of($alloc(MatchBindingsComputer));
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::EMPTY = nullptr;
$Context$Key* MatchBindingsComputer::matchBindingsComputerKey = nullptr;

MatchBindingsComputer* MatchBindingsComputer::instance($Context* context) {
	$init(MatchBindingsComputer);
	$var(MatchBindingsComputer, instance, $cast(MatchBindingsComputer, $nc(context)->get(MatchBindingsComputer::matchBindingsComputerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(MatchBindingsComputer, context));
	}
	return instance;
}

void MatchBindingsComputer::init$($Context* context) {
	$TreeScanner::init$();
	$set(this, log, $Log::instance(context));
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::conditional($JCTree* tree, $MatchBindingsComputer$MatchBindings* condBindings, $MatchBindingsComputer$MatchBindings* trueBindings, $MatchBindingsComputer$MatchBindings* falseBindings) {
	$useLocalCurrentObjectStackCache();
	if (condBindings == MatchBindingsComputer::EMPTY && trueBindings == MatchBindingsComputer::EMPTY && falseBindings == MatchBindingsComputer::EMPTY) {
		return MatchBindingsComputer::EMPTY;
	}
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	$var($List, xTzT, intersection(pos, $nc(condBindings)->bindingsWhenTrue, $nc(falseBindings)->bindingsWhenTrue));
	$var($List, xFyT, intersection(pos, $nc(condBindings)->bindingsWhenFalse, $nc(trueBindings)->bindingsWhenTrue));
	$var($List, yTzT, intersection(pos, $nc(trueBindings)->bindingsWhenTrue, $nc(falseBindings)->bindingsWhenTrue));
	$var($List, xTzF, intersection(pos, $nc(condBindings)->bindingsWhenTrue, $nc(falseBindings)->bindingsWhenFalse));
	$var($List, xFyF, intersection(pos, $nc(condBindings)->bindingsWhenFalse, $nc(trueBindings)->bindingsWhenFalse));
	$var($List, yFzF, intersection(pos, $nc(trueBindings)->bindingsWhenFalse, $nc(falseBindings)->bindingsWhenFalse));
	$var($List, bindingsWhenTrue, union$(pos, yTzT, $$new($ListArray, {
		xTzT,
		xFyT
	})));
	$var($List, bindingsWhenFalse, union$(pos, yFzF, $$new($ListArray, {
		xTzF,
		xFyF
	})));
	return $new($MatchBindingsComputer$MatchBindings, bindingsWhenTrue, bindingsWhenFalse);
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::unary($JCTree* tree, $MatchBindingsComputer$MatchBindings* bindings) {
	$init($JCTree$Tag);
	if (bindings == MatchBindingsComputer::EMPTY || !$nc(tree)->hasTag($JCTree$Tag::NOT)) {
		return bindings;
	}
	return $new($MatchBindingsComputer$MatchBindings, $nc(bindings)->bindingsWhenFalse, bindings->bindingsWhenTrue);
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::binary($JCTree* tree, $MatchBindingsComputer$MatchBindings* lhsBindings, $MatchBindingsComputer$MatchBindings* rhsBindings) {
	$useLocalCurrentObjectStackCache();
	$init($MatchBindingsComputer$1);
	switch ($nc($MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 1:
		{
			{
				return andOperation($(tree->pos()), lhsBindings, rhsBindings);
			}
		}
	case 2:
		{
			{
				$var($List, bindingsWhenTrue, intersection($(tree->pos()), $nc(lhsBindings)->bindingsWhenTrue, $nc(rhsBindings)->bindingsWhenTrue));
				$var($List, bindingsWhenFalse, union$($(tree->pos()), $nc(lhsBindings)->bindingsWhenFalse, $$new($ListArray, {$nc(rhsBindings)->bindingsWhenFalse})));
				return $new($MatchBindingsComputer$MatchBindings, bindingsWhenTrue, bindingsWhenFalse);
			}
		}
	}
	return MatchBindingsComputer::EMPTY;
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::guardedPattern($JCTree$JCGuardPattern* tree, $MatchBindingsComputer$MatchBindings* patternBindings, $MatchBindingsComputer$MatchBindings* guardBindings) {
	return andOperation($($nc(tree)->pos()), patternBindings, guardBindings);
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::andOperation($JCDiagnostic$DiagnosticPosition* pos, $MatchBindingsComputer$MatchBindings* lhsBindings, $MatchBindingsComputer$MatchBindings* rhsBindings) {
	$useLocalCurrentObjectStackCache();
	$var($List, bindingsWhenTrue, union$(pos, $nc(lhsBindings)->bindingsWhenTrue, $$new($ListArray, {$nc(rhsBindings)->bindingsWhenTrue})));
	$var($List, bindingsWhenFalse, intersection(pos, $nc(lhsBindings)->bindingsWhenFalse, $nc(rhsBindings)->bindingsWhenFalse));
	return $new($MatchBindingsComputer$MatchBindings, bindingsWhenTrue, bindingsWhenFalse);
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::switchCase($JCTree* tree, $MatchBindingsComputer$MatchBindings* prevBindings, $MatchBindingsComputer$MatchBindings* currentBindings) {
	$useLocalCurrentObjectStackCache();
	if (prevBindings == nullptr) {
		return currentBindings;
	}
	if ($nc(prevBindings)->nullPattern) {
		return currentBindings;
	}
	if ($nc(currentBindings)->nullPattern) {
		return prevBindings;
	}
	$var($List, var$0, intersection($($nc(tree)->pos()), $nc(prevBindings)->bindingsWhenTrue, $nc(currentBindings)->bindingsWhenTrue));
	return $new($MatchBindingsComputer$MatchBindings, var$0, $(intersection($($nc(tree)->pos()), $nc(prevBindings)->bindingsWhenFalse, $nc(currentBindings)->bindingsWhenFalse)));
}

$MatchBindingsComputer$MatchBindings* MatchBindingsComputer::finishBindings($JCTree* tree, $MatchBindingsComputer$MatchBindings* matchBindings) {
	$init($MatchBindingsComputer$1);
	switch ($nc($MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 3:
		{}
	case 1:
		{}
	case 2:
		{}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{}
	case 7:
		{}
	case 8:
		{}
	case 9:
		{
			return matchBindings;
		}
	default:
		{
			return MatchBindingsComputer::EMPTY;
		}
	}
}

$List* MatchBindingsComputer::intersection($JCDiagnostic$DiagnosticPosition* pos, $List* lhsBindings, $List* rhsBindings) {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $List::nil());
	{
		$var($Iterator, i$, $nc(lhsBindings)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$BindingSymbol, v1, $cast($Symbol$BindingSymbol, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(rhsBindings)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol$BindingSymbol, v2, $cast($Symbol$BindingSymbol, i$->next()));
						{
							bool var$0 = $nc(v1)->name == $nc(v2)->name && ((int64_t)(v1->flags() & (uint64_t)(int64_t)0x0000040000000000)) == 0;
							if (var$0 && ((int64_t)(v2->flags() & (uint64_t)(int64_t)0x0000040000000000)) == 0) {
								$init($CompilerProperties$Errors);
								$nc(this->log)->error(pos, $CompilerProperties$Errors::MatchBindingExists);
								v2->flags_field |= 0x0000040000000000;
								$assign(list, $nc(list)->append(v2));
							}
						}
					}
				}
			}
		}
	}
	return list;
}

$List* MatchBindingsComputer::union$($JCDiagnostic$DiagnosticPosition* pos, $List* lhsBindings, $ListArray* rhsBindings_s) {
	$useLocalCurrentObjectStackCache();
	$var($List, list, lhsBindings);
	{
		$var($ListArray, arr$, rhsBindings_s);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($List, rhsBindings, arr$->get(i$));
			{
				{
					$var($Iterator, i$, $nc(rhsBindings)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol$BindingSymbol, v, $cast($Symbol$BindingSymbol, i$->next()));
						{
							{
								$var($Iterator, i$, $nc(list)->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Symbol$BindingSymbol, ov, $cast($Symbol$BindingSymbol, i$->next()));
									{
										bool var$0 = $nc(ov)->name == $nc(v)->name && ((int64_t)(ov->flags() & (uint64_t)(int64_t)0x0000040000000000)) == 0;
										if (var$0 && ((int64_t)(v->flags() & (uint64_t)(int64_t)0x0000040000000000)) == 0) {
											$init($CompilerProperties$Errors);
											$nc(this->log)->error(pos, $CompilerProperties$Errors::MatchBindingExists);
											v->flags_field |= 0x0000040000000000;
										}
									}
								}
							}
							$assign(list, list->append(v));
						}
					}
				}
			}
		}
	}
	return list;
}

void clinit$MatchBindingsComputer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$var($List, var$0, $List::nil());
	$assignStatic(MatchBindingsComputer::EMPTY, $new($MatchBindingsComputer$MatchBindings, var$0, $($List::nil())));
	$assignStatic(MatchBindingsComputer::matchBindingsComputerKey, $new($Context$Key));
}

MatchBindingsComputer::MatchBindingsComputer() {
}

$Class* MatchBindingsComputer::load$($String* name, bool initialize) {
	$loadClass(MatchBindingsComputer, name, initialize, &_MatchBindingsComputer_ClassInfo_, clinit$MatchBindingsComputer, allocate$MatchBindingsComputer);
	return class$;
}

$Class* MatchBindingsComputer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com