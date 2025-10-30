#include <com/sun/tools/javac/comp/Check$CycleChecker.h>

#include <com/sun/source/tree/Tree.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef PCK
#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Check$CycleChecker_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$CycleChecker, this$0)},
	{"seenClasses", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Check$CycleChecker, seenClasses)},
	{"errorFound", "Z", nullptr, 0, $field(Check$CycleChecker, errorFound)},
	{"partialCheck", "Z", nullptr, 0, $field(Check$CycleChecker, partialCheck)},
	{}
};

$MethodInfo _Check$CycleChecker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, 0, $method(static_cast<void(Check$CycleChecker::*)($Check*)>(&Check$CycleChecker::init$))},
	{"checkClass", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0},
	{"checkSymbol", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Check$CycleChecker::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Check$CycleChecker::checkSymbol))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Check$CycleChecker_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$CycleChecker", "com.sun.tools.javac.comp.Check", "CycleChecker", 0},
	{}
};

$ClassInfo _Check$CycleChecker_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$CycleChecker",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Check$CycleChecker_FieldInfo_,
	_Check$CycleChecker_MethodInfo_,
	nullptr,
	nullptr,
	_Check$CycleChecker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$CycleChecker($Class* clazz) {
	return $of($alloc(Check$CycleChecker));
}

void Check$CycleChecker::init$($Check* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	$set(this, seenClasses, $new($HashSet));
	this->errorFound = false;
	this->partialCheck = false;
}

void Check$CycleChecker::checkSymbol($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if (sym != nullptr && sym->kind == $Kinds$Kind::TYP) {
		$var($Env, classEnv, $nc(this->this$0->enter)->getEnv($cast($Symbol$TypeSymbol, sym)));
		if (classEnv != nullptr) {
			$var($DiagnosticSource, prevSource, $nc(this->this$0->log)->currentSource());
			{
				$var($Throwable, var$0, nullptr);
				try {
					$nc(this->this$0->log)->useSource($nc(classEnv->toplevel)->sourcefile);
					scan(classEnv->tree);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$nc(this->this$0->log)->useSource($($nc(prevSource)->getFile()));
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} else {
			if (sym->kind == $Kinds$Kind::TYP) {
				checkClass(pos, sym, $($List::nil()));
			}
		}
	} else {
		if (sym == nullptr || sym->kind != $Kinds$Kind::PCK) {
			this->partialCheck = true;
		}
	}
}

void Check$CycleChecker::visitSelect($JCTree$JCFieldAccess* tree) {
	$TreeScanner::visitSelect(tree);
	checkSymbol($($nc(tree)->pos()), tree->sym);
}

void Check$CycleChecker::visitIdent($JCTree$JCIdent* tree) {
	checkSymbol($($nc(tree)->pos()), tree->sym);
}

void Check$CycleChecker::visitTypeApply($JCTree$JCTypeApply* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->clazz));
}

void Check$CycleChecker::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->elemtype));
}

void Check$CycleChecker::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, supertypes, $List::nil());
	if ($cast($JCTree$JCExpression, $nc(tree)->getExtendsClause()) != nullptr) {
		$assign(supertypes, $nc(supertypes)->prepend($(tree->getExtendsClause())));
	}
	if ($cast($List, $nc(tree)->getImplementsClause()) != nullptr) {
		{
			$var($Iterator, i$, $nc($($cast($List, tree->getImplementsClause())))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree, intf, $cast($JCTree, i$->next()));
				{
					$assign(supertypes, $nc(supertypes)->prepend(intf));
				}
			}
		}
	}
	checkClass($($nc(tree)->pos()), tree->sym, supertypes);
}

void Check$CycleChecker::checkClass($JCDiagnostic$DiagnosticPosition* pos, $Symbol* c, $List* supertypes) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)($nc(c)->flags_field & (uint64_t)(int64_t)0x40000000)) != 0) {
		return;
	}
	if ($nc(this->seenClasses)->contains(c)) {
		this->errorFound = true;
		this->this$0->noteCyclic(pos, $cast($Symbol$ClassSymbol, c));
	} else if (!$nc($nc(c)->type)->isErroneous()) {
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				$nc(this->seenClasses)->add(c);
				$init($TypeTag);
				if ($nc(c->type)->hasTag($TypeTag::CLASS)) {
					if ($nc(supertypes)->nonEmpty()) {
						scan(supertypes);
					} else {
						$var($Type$ClassType, ct, $cast($Type$ClassType, c->type));
						if ($nc(ct)->supertype_field == nullptr || $nc(ct)->interfaces_field == nullptr) {
							this->partialCheck = true;
							return$1 = true;
							goto $finally;
						}
						checkSymbol(pos, $nc($nc(ct)->supertype_field)->tsym);
						{
							$var($Iterator, i$, $nc($nc(ct)->interfaces_field)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Type, intf, $cast($Type, i$->next()));
								{
									checkSymbol(pos, $nc(intf)->tsym);
								}
							}
						}
					}
					$init($Kinds$Kind);
					if ($nc(c->owner)->kind == $Kinds$Kind::TYP) {
						checkSymbol(pos, c->owner);
					}
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				$nc(this->seenClasses)->remove(c);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		}
	}
}

Check$CycleChecker::Check$CycleChecker() {
}

$Class* Check$CycleChecker::load$($String* name, bool initialize) {
	$loadClass(Check$CycleChecker, name, initialize, &_Check$CycleChecker_ClassInfo_, allocate$Check$CycleChecker);
	return class$;
}

$Class* Check$CycleChecker::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com