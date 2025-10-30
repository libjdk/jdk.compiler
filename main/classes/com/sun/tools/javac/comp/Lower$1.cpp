#include <com/sun/tools/javac/comp/Lower$1.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef NON_RECURSIVE
#undef SYNTHETIC
#undef TYP

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Lower$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$1, this$0)},
	{"currentClass", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, 0, $field(Lower$1, currentClass)},
	{}
};

$MethodInfo _Lower$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;)V", nullptr, 0, $method(static_cast<void(Lower$1::*)($Lower*)>(&Lower$1::init$))},
	{"checkConflicts", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0},
	{"syntheticError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Lower$1::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*)>(&Lower$1::syntheticError))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Lower$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Lower",
	nullptr,
	nullptr
};

$InnerClassInfo _Lower$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Lower$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Lower$1",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Lower$1_FieldInfo_,
	_Lower$1_MethodInfo_,
	nullptr,
	&_Lower$1_EnclosingMethodInfo_,
	_Lower$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$1($Class* clazz) {
	return $of($alloc(Lower$1));
}

void Lower$1::init$($Lower* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Lower$1::visitMethodDef($JCTree$JCMethodDecl* that) {
	checkConflicts($($nc(that)->pos()), that->sym, this->currentClass);
	$TreeScanner::visitMethodDef(that);
}

void Lower$1::visitVarDef($JCTree$JCVariableDecl* that) {
	$init($Kinds$Kind);
	if ($nc($nc($nc(that)->sym)->owner)->kind == $Kinds$Kind::TYP) {
		checkConflicts($(that->pos()), that->sym, this->currentClass);
	}
	$TreeScanner::visitVarDef(that);
}

void Lower$1::visitClassDef($JCTree$JCClassDecl* that) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$TypeSymbol, prevCurrentClass, this->currentClass);
	$set(this, currentClass, $nc(that)->sym);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeScanner::visitClassDef(that);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, currentClass, prevCurrentClass);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Lower$1::checkConflicts($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym, $Symbol$TypeSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$init($Type);
	{
		$var($Type, ct, $nc(c)->type);
		for (; !$equals(ct, $Type::noType); $assign(ct, $nc(this->this$0->types)->supertype(ct))) {
			{
				$init($Scope$LookupKind);
				$var($Iterator, i$, $nc($($nc($($nc($nc(ct)->tsym)->members()))->getSymbolsByName($nc(sym)->name, $Scope$LookupKind::NON_RECURSIVE)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, sym2, $cast($Symbol, i$->next()));
					{
						bool var$3 = $nc(sym)->kind == $nc(sym2)->kind;
						if (var$3) {
							$var($Type, var$4, $nc(this->this$0->types)->erasure(sym->type));
							var$3 = $nc(this->this$0->types)->isSameType(var$4, $($nc(this->this$0->types)->erasure(sym2->type)));
						}
						bool var$2 = var$3 && sym != sym2;
						if (var$2) {
							int64_t var$5 = ((int64_t)(sym->flags() & (uint64_t)(int64_t)$Flags::SYNTHETIC));
							var$2 = var$5 != ((int64_t)(sym2->flags() & (uint64_t)(int64_t)$Flags::SYNTHETIC));
						}
						bool var$1 = var$2;
						bool var$0 = var$1 && ((int64_t)(sym->flags() & (uint64_t)(int64_t)0x0000000080000000)) == 0;
						if (var$0 && ((int64_t)(sym2->flags() & (uint64_t)(int64_t)0x0000000080000000)) == 0) {
							syntheticError(pos, ((int64_t)(sym2->flags() & (uint64_t)(int64_t)4096)) == 0 ? sym2 : sym);
							return;
						}
					}
				}
			}
		}
	}
}

void Lower$1::syntheticError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($nc(sym)->type)->isErroneous()) {
		$var($Symbol, var$0, sym->location());
		$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::CannotGenerateClass(var$0, $($CompilerProperties$Fragments::SyntheticNameConflict(sym, $(sym->location()))))));
	}
}

Lower$1::Lower$1() {
}

$Class* Lower$1::load$($String* name, bool initialize) {
	$loadClass(Lower$1, name, initialize, &_Lower$1_ClassInfo_, allocate$Lower$1);
	return class$;
}

$Class* Lower$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com