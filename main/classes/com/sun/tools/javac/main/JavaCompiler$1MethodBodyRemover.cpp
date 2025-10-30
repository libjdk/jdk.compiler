#include <com/sun/tools/javac/main/JavaCompiler$1MethodBodyRemover.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/main/JavaCompiler$2.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef FINAL
#undef PRIVATE
#undef PROTECTED
#undef PUBLIC
#undef SYNCHRONIZED

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $JavaCompiler$2 = ::com::sun::tools::javac::main::JavaCompiler$2;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _JavaCompiler$1MethodBodyRemover_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/main/JavaCompiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavaCompiler$1MethodBodyRemover, this$0)},
	{"val$isInterface", "Z", nullptr, $FINAL | $SYNTHETIC, $field(JavaCompiler$1MethodBodyRemover, val$isInterface)},
	{}
};

$MethodInfo _JavaCompiler$1MethodBodyRemover_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/main/JavaCompiler;Z)V", "()V", 0, $method(static_cast<void(JavaCompiler$1MethodBodyRemover::*)($JavaCompiler*,bool)>(&JavaCompiler$1MethodBodyRemover::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavaCompiler$1MethodBodyRemover_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.JavaCompiler",
	"removeMethodBodies",
	"(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;"
};

$InnerClassInfo _JavaCompiler$1MethodBodyRemover_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.JavaCompiler$1MethodBodyRemover", nullptr, "MethodBodyRemover", 0},
	{"com.sun.tools.javac.tree.JCTree$JCClassDecl", "com.sun.tools.javac.tree.JCTree", "JCClassDecl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JavaCompiler$1MethodBodyRemover_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.main.JavaCompiler$1MethodBodyRemover",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_JavaCompiler$1MethodBodyRemover_FieldInfo_,
	_JavaCompiler$1MethodBodyRemover_MethodInfo_,
	nullptr,
	&_JavaCompiler$1MethodBodyRemover_EnclosingMethodInfo_,
	_JavaCompiler$1MethodBodyRemover_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.JavaCompiler"
};

$Object* allocate$JavaCompiler$1MethodBodyRemover($Class* clazz) {
	return $of($alloc(JavaCompiler$1MethodBodyRemover));
}

void JavaCompiler$1MethodBodyRemover::init$($JavaCompiler* this$0, bool val$isInterface) {
	$set(this, this$0, this$0);
	this->val$isInterface = val$isInterface;
	$TreeTranslator::init$();
}

void JavaCompiler$1MethodBodyRemover::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$nc($nc(tree)->mods)->flags &= (uint64_t)~$Flags::SYNCHRONIZED;
	{
		$var($Iterator, i$, $nc(tree->params)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCVariableDecl, vd, $cast($JCTree$JCVariableDecl, i$->next()));
			$nc($nc(vd)->mods)->flags &= (uint64_t)~$Flags::FINAL;
		}
	}
	$set(tree, body, nullptr);
	$TreeTranslator::visitMethodDef(tree);
}

void JavaCompiler$1MethodBodyRemover::visitVarDef($JCTree$JCVariableDecl* tree) {
	if ($nc(tree)->init != nullptr && $nc($nc(tree->init)->type)->constValue() == nullptr) {
		$set(tree, init, nullptr);
	}
	$TreeTranslator::visitVarDef(tree);
}

void JavaCompiler$1MethodBodyRemover::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, newdefs, $new($ListBuffer));
	{
		$var($List, it, $nc(tree)->defs);
		for (; $nc(it)->tail != nullptr; $assign(it, $nc(it)->tail)) {
			$var($JCTree, t, $cast($JCTree, it->head));
			$init($JavaCompiler$2);
			switch ($nc($JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
			case 1:
				{
					if (this->val$isInterface || ((int64_t)($nc($nc(($cast($JCTree$JCClassDecl, t)))->mods)->flags & (uint64_t)(int64_t)($Flags::PROTECTED | $Flags::PUBLIC))) != 0 || ((int64_t)($nc($nc(($cast($JCTree$JCClassDecl, t)))->mods)->flags & (uint64_t)(int64_t)($Flags::PRIVATE))) == 0 && $nc($($nc($nc(($cast($JCTree$JCClassDecl, t)))->sym)->packge()))->getQualifiedName() == $nc(this->this$0->names)->java_lang) {
						newdefs->append(t);
					}
					break;
				}
			case 2:
				{
					if (this->val$isInterface || ((int64_t)($nc($nc(($cast($JCTree$JCMethodDecl, t)))->mods)->flags & (uint64_t)(int64_t)($Flags::PROTECTED | $Flags::PUBLIC))) != 0 || $nc($nc(($cast($JCTree$JCMethodDecl, t)))->sym)->name == $nc(this->this$0->names)->init || ((int64_t)($nc($nc(($cast($JCTree$JCMethodDecl, t)))->mods)->flags & (uint64_t)(int64_t)($Flags::PRIVATE))) == 0 && $nc($($nc($nc(($cast($JCTree$JCMethodDecl, t)))->sym)->packge()))->getQualifiedName() == $nc(this->this$0->names)->java_lang) {
						newdefs->append(t);
					}
					break;
				}
			case 3:
				{
					if (this->val$isInterface || ((int64_t)($nc($nc(($cast($JCTree$JCVariableDecl, t)))->mods)->flags & (uint64_t)(int64_t)($Flags::PROTECTED | $Flags::PUBLIC))) != 0 || ((int64_t)($nc($nc(($cast($JCTree$JCVariableDecl, t)))->mods)->flags & (uint64_t)(int64_t)($Flags::PRIVATE))) == 0 && $nc($($nc($nc(($cast($JCTree$JCVariableDecl, t)))->sym)->packge()))->getQualifiedName() == $nc(this->this$0->names)->java_lang) {
						newdefs->append(t);
					}
					break;
				}
			default:
				{
					break;
				}
			}
		}
	}
	$set(tree, defs, newdefs->toList());
	$TreeTranslator::visitClassDef(tree);
}

JavaCompiler$1MethodBodyRemover::JavaCompiler$1MethodBodyRemover() {
}

$Class* JavaCompiler$1MethodBodyRemover::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$1MethodBodyRemover, name, initialize, &_JavaCompiler$1MethodBodyRemover_ClassInfo_, allocate$JavaCompiler$1MethodBodyRemover);
	return class$;
}

$Class* JavaCompiler$1MethodBodyRemover::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com