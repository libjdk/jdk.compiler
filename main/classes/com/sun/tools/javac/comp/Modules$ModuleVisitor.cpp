#include <com/sun/tools/javac/comp/Modules$ModuleVisitor.h>

#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/code/Directive$ExportsFlag.h>
#include <com/sun/tools/javac/code/Directive$OpensDirective.h>
#include <com/sun/tools/javac/code/Directive$OpensFlag.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Flags$Flag.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ModuleFlags.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCExports.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>
#include <com/sun/tools/javac/tree/JCTree$JCProvides.h>
#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>
#include <com/sun/tools/javac/tree/JCTree$JCUses.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef DEPRECATED
#undef JDK10
#undef MANDATED
#undef MDL
#undef OPEN
#undef STATIC
#undef STATIC_PHASE
#undef TRANSITIVE

using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $Directive$ExportsFlag = ::com::sun::tools::javac::code::Directive$ExportsFlag;
using $Directive$OpensDirective = ::com::sun::tools::javac::code::Directive$OpensDirective;
using $Directive$OpensFlag = ::com::sun::tools::javac::code::Directive$OpensFlag;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Flags$Flag = ::com::sun::tools::javac::code::Flags$Flag;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $Source = ::com::sun::tools::javac::code::Source;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleFlags = ::com::sun::tools::javac::code::Symbol$ModuleFlags;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
using $JCTree$JCExports = ::com::sun::tools::javac::tree::JCTree$JCExports;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCOpens = ::com::sun::tools::javac::tree::JCTree$JCOpens;
using $JCTree$JCProvides = ::com::sun::tools::javac::tree::JCTree$JCProvides;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
using $JCTree$JCUses = ::com::sun::tools::javac::tree::JCTree$JCUses;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0 : public $Consumer {
	$class(Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Modules$ModuleVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->lambda$visitModuleDef$0($cast($JCTree$JCDirective, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0>());
	}
	Modules$ModuleVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0, inst$)},
	{}
};
$MethodInfo Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules$ModuleVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::*)(Modules$ModuleVisitor*)>(&Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::load$($String* name, bool initialize) {
	$loadClass(Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::class$ = nullptr;

class Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1 : public $Function {
	$class(Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* p) override {
		 return $of(Modules$ModuleVisitor::lambda$visitExports$1($cast($Symbol$PackageSymbol, p)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1::*)()>(&Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1::load$($String* name, bool initialize) {
	$loadClass(Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1::class$ = nullptr;

$FieldInfo _Modules$ModuleVisitor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Modules;", nullptr, $FINAL | $SYNTHETIC, $field(Modules$ModuleVisitor, this$0)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE, $field(Modules$ModuleVisitor, sym)},
	{"allRequires", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE | $FINAL, $field(Modules$ModuleVisitor, allRequires)},
	{"allExports", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Directive$ExportsDirective;>;>;", $PRIVATE | $FINAL, $field(Modules$ModuleVisitor, allExports)},
	{"allOpens", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Directive$OpensDirective;>;>;", $PRIVATE | $FINAL, $field(Modules$ModuleVisitor, allOpens)},
	{}
};

$MethodInfo _Modules$ModuleVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Modules;)V", nullptr, 0, $method(static_cast<void(Modules$ModuleVisitor::*)($Modules*)>(&Modules$ModuleVisitor::init$))},
	{"checkDuplicateExportsToModule", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Directive$ExportsDirective;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules$ModuleVisitor::*)($JCTree$JCExpression*,$Symbol$ModuleSymbol*,$Directive$ExportsDirective*)>(&Modules$ModuleVisitor::checkDuplicateExportsToModule))},
	{"checkDuplicateOpensToModule", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/code/Directive$OpensDirective;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules$ModuleVisitor::*)($JCTree$JCExpression*,$Symbol$ModuleSymbol*,$Directive$OpensDirective*)>(&Modules$ModuleVisitor::checkDuplicateOpensToModule))},
	{"ensureJavaBase", "()V", nullptr, $PRIVATE, $method(static_cast<void(Modules$ModuleVisitor::*)()>(&Modules$ModuleVisitor::ensureJavaBase))},
	{"lambda$visitExports$1", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)Lcom/sun/tools/javac/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($Symbol$PackageSymbol*)>(&Modules$ModuleVisitor::lambda$visitExports$1))},
	{"lambda$visitModuleDef$0", "(Lcom/sun/tools/javac/tree/JCTree$JCDirective;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Modules$ModuleVisitor::*)($JCTree$JCDirective*)>(&Modules$ModuleVisitor::lambda$visitModuleDef$0))},
	{"lookupModule", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$ModuleSymbol*(Modules$ModuleVisitor::*)($JCTree$JCExpression*)>(&Modules$ModuleVisitor::lookupModule))},
	{"reportExportsConflict", "(Lcom/sun/tools/javac/tree/JCTree$JCExports;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules$ModuleVisitor::*)($JCTree$JCExports*,$Symbol$PackageSymbol*)>(&Modules$ModuleVisitor::reportExportsConflict))},
	{"reportExportsConflictToModule", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules$ModuleVisitor::*)($JCTree$JCExpression*,$Symbol$ModuleSymbol*)>(&Modules$ModuleVisitor::reportExportsConflictToModule))},
	{"reportOpensConflict", "(Lcom/sun/tools/javac/tree/JCTree$JCOpens;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules$ModuleVisitor::*)($JCTree$JCOpens*,$Symbol$PackageSymbol*)>(&Modules$ModuleVisitor::reportOpensConflict))},
	{"reportOpensConflictToModule", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Modules$ModuleVisitor::*)($JCTree$JCExpression*,$Symbol$ModuleSymbol*)>(&Modules$ModuleVisitor::reportOpensConflictToModule))},
	{"visitExports", "(Lcom/sun/tools/javac/tree/JCTree$JCExports;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitOpens", "(Lcom/sun/tools/javac/tree/JCTree$JCOpens;)V", nullptr, $PUBLIC},
	{"visitProvides", "(Lcom/sun/tools/javac/tree/JCTree$JCProvides;)V", nullptr, $PUBLIC},
	{"visitRequires", "(Lcom/sun/tools/javac/tree/JCTree$JCRequires;)V", nullptr, $PUBLIC},
	{"visitUses", "(Lcom/sun/tools/javac/tree/JCTree$JCUses;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Modules$ModuleVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Modules$ModuleVisitor", "com.sun.tools.javac.comp.Modules", "ModuleVisitor", 0},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Modules$ModuleVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Modules$ModuleVisitor",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Modules$ModuleVisitor_FieldInfo_,
	_Modules$ModuleVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_Modules$ModuleVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Modules"
};

$Object* allocate$Modules$ModuleVisitor($Class* clazz) {
	return $of($alloc(Modules$ModuleVisitor));
}

void Modules$ModuleVisitor::init$($Modules* this$0) {
	$set(this, this$0, this$0);
	$JCTree$Visitor::init$();
	$set(this, allRequires, $new($HashSet));
	$set(this, allExports, $new($HashMap));
	$set(this, allOpens, $new($HashMap));
}

void Modules$ModuleVisitor::visitModuleDef($JCTree$JCModuleDecl* tree) {
	$set(this, sym, $cast($Symbol$ModuleSymbol, $Assert::checkNonNull($nc(tree)->sym)));
	$init($ModuleTree$ModuleKind);
	if ($nc(tree)->getModuleType() == $ModuleTree$ModuleKind::OPEN) {
		$init($Symbol$ModuleFlags);
		$nc($nc(this->sym)->flags$)->add($Symbol$ModuleFlags::OPEN);
	}
	$nc(this->sym)->flags_field |= ((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)$Flags::DEPRECATED));
	$set($nc(this->sym), requires, $List::nil());
	$set($nc(this->sym), exports, $List::nil());
	$set($nc(this->sym), opens, $List::nil());
	$nc(tree->directives)->forEach(static_cast<$Consumer*>($$new(Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0, this)));
	$set($nc(this->sym), requires, $nc($nc(this->sym)->requires)->reverse());
	$set($nc(this->sym), exports, $nc($nc(this->sym)->exports)->reverse());
	$set($nc(this->sym), opens, $nc($nc(this->sym)->opens)->reverse());
	ensureJavaBase();
}

void Modules$ModuleVisitor::visitRequires($JCTree$JCRequires* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ModuleSymbol, msym, lookupModule($nc(tree)->moduleName));
	$init($Kinds$Kind);
	if ($nc(msym)->kind != $Kinds$Kind::MDL) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(tree)->moduleName)->pos());
		$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::ModuleNotFound(msym)));
		$nc(this->this$0->warnedMissing)->add(msym);
	} else if ($nc(this->allRequires)->contains(msym)) {
		$var($JCDiagnostic$DiagnosticPosition, var$1, $nc($nc(tree)->moduleName)->pos());
		$nc(this->this$0->log)->error(var$1, $($CompilerProperties$Errors::DuplicateRequires(msym)));
	} else {
		$nc(this->allRequires)->add(msym);
		$load($Directive$RequiresFlag);
		$var($Set, flags, $EnumSet::noneOf($Directive$RequiresFlag::class$));
		if ($nc(tree)->isTransitive$) {
			$init($Source);
			if (msym == $nc(this->this$0->syms)->java_base && this->this$0->source->compareTo(static_cast<$Enum*>($Source::JDK10)) >= 0) {
				$var($JCDiagnostic$DiagnosticPosition, var$2, tree->pos());
				$nc(this->this$0->log)->error(var$2, $($CompilerProperties$Errors::ModifierNotAllowedHere($nc(this->this$0->names)->transitive)));
			} else {
				$init($Directive$RequiresFlag);
				$nc(flags)->add($Directive$RequiresFlag::TRANSITIVE);
			}
		}
		if ($nc(tree)->isStaticPhase) {
			$init($Source);
			if (msym == $nc(this->this$0->syms)->java_base && this->this$0->source->compareTo(static_cast<$Enum*>($Source::JDK10)) >= 0) {
				$var($JCDiagnostic$DiagnosticPosition, var$3, tree->pos());
				$init($Flags$Flag);
				$nc(this->this$0->log)->error(var$3, $($CompilerProperties$Errors::ModNotAllowedHere($($EnumSet::of($Flags$Flag::STATIC)))));
			} else {
				$init($Directive$RequiresFlag);
				$nc(flags)->add($Directive$RequiresFlag::STATIC_PHASE);
			}
		}
		$var($Directive$RequiresDirective, d, $new($Directive$RequiresDirective, msym, flags));
		$set($nc(tree), directive, d);
		$set($nc(this->sym), requires, $nc($nc(this->sym)->requires)->prepend(d));
	}
}

void Modules$ModuleVisitor::visitExports($JCTree$JCExports* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, $TreeInfo::fullName($nc(tree)->qualid));
	$var($Symbol$PackageSymbol, packge, $nc(this->this$0->syms)->enterPackage(this->sym, name));
	$nc(this->this$0->attr)->setPackageSymbols($nc(tree)->qualid, packge);
	$var($List, exportsForPackage, $cast($List, $nc(this->allExports)->computeIfAbsent(packge, static_cast<$Function*>($$new(Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1)))));
	{
		$var($Iterator, i$, $nc(exportsForPackage)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$ExportsDirective, d, $cast($Directive$ExportsDirective, i$->next()));
			{
				reportExportsConflict(tree, packge);
			}
		}
	}
	$var($List, toModules, nullptr);
	if ($nc(tree)->moduleNames != nullptr) {
		$var($Set, to, $new($LinkedHashSet));
		{
			$var($Iterator, i$, $nc(tree->moduleNames)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCExpression, n, $cast($JCTree$JCExpression, i$->next()));
				{
					$var($Symbol$ModuleSymbol, msym, lookupModule(n));
					$nc(this->this$0->chk)->checkModuleExists($($nc(n)->pos()), msym);
					{
						$var($Iterator, i$, exportsForPackage->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Directive$ExportsDirective, d, $cast($Directive$ExportsDirective, i$->next()));
							{
								checkDuplicateExportsToModule(n, msym, d);
							}
						}
					}
					if (!to->add(msym)) {
						reportExportsConflictToModule(n, msym);
					}
				}
			}
		}
		$assign(toModules, $List::from(static_cast<$Iterable*>(to)));
	}
	if (toModules == nullptr || !$nc(toModules)->isEmpty()) {
		$load($Directive$ExportsFlag);
		$var($Set, flags, $EnumSet::noneOf($Directive$ExportsFlag::class$));
		$var($Directive$ExportsDirective, d, $new($Directive$ExportsDirective, packge, toModules, flags));
		$set($nc(this->sym), exports, $nc($nc(this->sym)->exports)->prepend(d));
		$set($nc(tree), directive, d);
		$nc(this->allExports)->put(packge, $(exportsForPackage->prepend(d)));
	}
}

void Modules$ModuleVisitor::reportExportsConflict($JCTree$JCExports* tree, $Symbol$PackageSymbol* packge) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(tree)->qualid)->pos());
	$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::ConflictingExports(packge)));
}

void Modules$ModuleVisitor::checkDuplicateExportsToModule($JCTree$JCExpression* name, $Symbol$ModuleSymbol* msym, $Directive$ExportsDirective* d) {
	$useLocalCurrentObjectStackCache();
	if ($nc(d)->modules != nullptr) {
		{
			$var($Iterator, i$, $nc(d->modules)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$ModuleSymbol, other, $cast($Symbol$ModuleSymbol, i$->next()));
				{
					if (msym == other) {
						reportExportsConflictToModule(name, msym);
					}
				}
			}
		}
	}
}

void Modules$ModuleVisitor::reportExportsConflictToModule($JCTree$JCExpression* name, $Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(name)->pos());
	$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::ConflictingExportsToModule(msym)));
}

void Modules$ModuleVisitor::visitOpens($JCTree$JCOpens* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, $TreeInfo::fullName($nc(tree)->qualid));
	$var($Symbol$PackageSymbol, packge, $nc(this->this$0->syms)->enterPackage(this->sym, name));
	$nc(this->this$0->attr)->setPackageSymbols($nc(tree)->qualid, packge);
	$init($Symbol$ModuleFlags);
	if ($nc($nc(this->sym)->flags$)->contains($Symbol$ModuleFlags::OPEN)) {
		$init($CompilerProperties$Errors);
		$nc(this->this$0->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::NoOpensUnlessStrong);
	}
	$var($List, opensForPackage, $cast($List, $nc(this->allOpens)->computeIfAbsent(packge, static_cast<$Function*>($$new(Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1)))));
	{
		$var($Iterator, i$, $nc(opensForPackage)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$OpensDirective, d, $cast($Directive$OpensDirective, i$->next()));
			{
				reportOpensConflict(tree, packge);
			}
		}
	}
	$var($List, toModules, nullptr);
	if ($nc(tree)->moduleNames != nullptr) {
		$var($Set, to, $new($LinkedHashSet));
		{
			$var($Iterator, i$, $nc(tree->moduleNames)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCExpression, n, $cast($JCTree$JCExpression, i$->next()));
				{
					$var($Symbol$ModuleSymbol, msym, lookupModule(n));
					$nc(this->this$0->chk)->checkModuleExists($($nc(n)->pos()), msym);
					{
						$var($Iterator, i$, opensForPackage->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Directive$OpensDirective, d, $cast($Directive$OpensDirective, i$->next()));
							{
								checkDuplicateOpensToModule(n, msym, d);
							}
						}
					}
					if (!to->add(msym)) {
						reportOpensConflictToModule(n, msym);
					}
				}
			}
		}
		$assign(toModules, $List::from(static_cast<$Iterable*>(to)));
	}
	if (toModules == nullptr || !$nc(toModules)->isEmpty()) {
		$load($Directive$OpensFlag);
		$var($Set, flags, $EnumSet::noneOf($Directive$OpensFlag::class$));
		$var($Directive$OpensDirective, d, $new($Directive$OpensDirective, packge, toModules, flags));
		$set($nc(this->sym), opens, $nc($nc(this->sym)->opens)->prepend(d));
		$set($nc(tree), directive, d);
		$nc(this->allOpens)->put(packge, $(opensForPackage->prepend(d)));
	}
}

void Modules$ModuleVisitor::reportOpensConflict($JCTree$JCOpens* tree, $Symbol$PackageSymbol* packge) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc($nc(tree)->qualid)->pos());
	$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::ConflictingOpens(packge)));
}

void Modules$ModuleVisitor::checkDuplicateOpensToModule($JCTree$JCExpression* name, $Symbol$ModuleSymbol* msym, $Directive$OpensDirective* d) {
	$useLocalCurrentObjectStackCache();
	if ($nc(d)->modules != nullptr) {
		{
			$var($Iterator, i$, $nc(d->modules)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$ModuleSymbol, other, $cast($Symbol$ModuleSymbol, i$->next()));
				{
					if (msym == other) {
						reportOpensConflictToModule(name, msym);
					}
				}
			}
		}
	}
}

void Modules$ModuleVisitor::reportOpensConflictToModule($JCTree$JCExpression* name, $Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(name)->pos());
	$nc(this->this$0->log)->error(var$0, $($CompilerProperties$Errors::ConflictingOpensToModule(msym)));
}

void Modules$ModuleVisitor::visitProvides($JCTree$JCProvides* tree) {
}

void Modules$ModuleVisitor::visitUses($JCTree$JCUses* tree) {
}

void Modules$ModuleVisitor::ensureJavaBase() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->sym)->name == $nc(this->this$0->names)->java_base) {
		return;
	}
	{
		$var($Iterator, i$, $nc($nc(this->sym)->requires)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Directive$RequiresDirective, d, $cast($Directive$RequiresDirective, i$->next()));
			{
				if ($nc($nc(d)->module)->name == $nc(this->this$0->names)->java_base) {
					return;
				}
			}
		}
	}
	$var($Symbol$ModuleSymbol, java_base, $nc(this->this$0->syms)->enterModule($nc(this->this$0->names)->java_base));
	$init($Directive$RequiresFlag);
	$var($Directive$RequiresDirective, d, $new($Directive$RequiresDirective, java_base, $($EnumSet::of($Directive$RequiresFlag::MANDATED))));
	$set($nc(this->sym), requires, $nc($nc(this->sym)->requires)->prepend(d));
}

$Symbol$ModuleSymbol* Modules$ModuleVisitor::lookupModule($JCTree$JCExpression* moduleName) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, $TreeInfo::fullName(moduleName));
	$var($Symbol$ModuleSymbol, msym, $nc(this->this$0->moduleFinder)->findModule(name));
	$TreeInfo::setSymbol(moduleName, msym);
	return msym;
}

$List* Modules$ModuleVisitor::lambda$visitExports$1($Symbol$PackageSymbol* p) {
	$init(Modules$ModuleVisitor);
	return $List::nil();
}

void Modules$ModuleVisitor::lambda$visitModuleDef$0($JCTree$JCDirective* t) {
	$nc(t)->accept(this);
}

Modules$ModuleVisitor::Modules$ModuleVisitor() {
}

$Class* Modules$ModuleVisitor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::classInfo$.name)) {
			return Modules$ModuleVisitor$$Lambda$lambda$visitModuleDef$0::load$(name, initialize);
		}
		if (name->equals(Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1::classInfo$.name)) {
			return Modules$ModuleVisitor$$Lambda$lambda$visitExports$1$1::load$(name, initialize);
		}
	}
	$loadClass(Modules$ModuleVisitor, name, initialize, &_Modules$ModuleVisitor_ClassInfo_, allocate$Modules$ModuleVisitor);
	return class$;
}

$Class* Modules$ModuleVisitor::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com