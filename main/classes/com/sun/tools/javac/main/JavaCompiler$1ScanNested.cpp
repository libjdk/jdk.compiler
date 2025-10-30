#include <com/sun/tools/javac/main/JavaCompiler$1ScanNested.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef CLASS

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _JavaCompiler$1ScanNested_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/main/JavaCompiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavaCompiler$1ScanNested, this$0)},
	{"val$env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $FINAL | $SYNTHETIC, $field(JavaCompiler$1ScanNested, val$env)},
	{"dependencies", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", 0, $field(JavaCompiler$1ScanNested, dependencies)},
	{"hasLambdas", "Z", nullptr, $PROTECTED, $field(JavaCompiler$1ScanNested, hasLambdas)},
	{}
};

$MethodInfo _JavaCompiler$1ScanNested_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/main/JavaCompiler;Lcom/sun/tools/javac/comp/Env;)V", "()V", 0, $method(static_cast<void(JavaCompiler$1ScanNested::*)($JavaCompiler*,$Env*)>(&JavaCompiler$1ScanNested::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavaCompiler$1ScanNested_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.JavaCompiler",
	"desugar",
	"(Lcom/sun/tools/javac/comp/Env;Ljava/util/Queue;)V"
};

$InnerClassInfo _JavaCompiler$1ScanNested_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.JavaCompiler$1ScanNested", nullptr, "ScanNested", 0},
	{}
};

$ClassInfo _JavaCompiler$1ScanNested_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.main.JavaCompiler$1ScanNested",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_JavaCompiler$1ScanNested_FieldInfo_,
	_JavaCompiler$1ScanNested_MethodInfo_,
	nullptr,
	&_JavaCompiler$1ScanNested_EnclosingMethodInfo_,
	_JavaCompiler$1ScanNested_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.JavaCompiler"
};

$Object* allocate$JavaCompiler$1ScanNested($Class* clazz) {
	return $of($alloc(JavaCompiler$1ScanNested));
}

void JavaCompiler$1ScanNested::init$($JavaCompiler* this$0, $Env* val$env) {
	$set(this, this$0, this$0);
	$set(this, val$env, val$env);
	$TreeScanner::init$();
	$set(this, dependencies, $new($LinkedHashSet));
}

void JavaCompiler$1ScanNested::visitClassDef($JCTree$JCClassDecl* node) {
	$useLocalCurrentObjectStackCache();
	$var($Type, st, $nc(this->this$0->types)->supertype($nc($nc(node)->sym)->type));
	bool envForSuperTypeFound = false;
	$init($TypeTag);
	while (!envForSuperTypeFound && $nc(st)->hasTag($TypeTag::CLASS)) {
		$var($Symbol$ClassSymbol, c, $nc(st->tsym)->outermostClass());
		$var($Env, stEnv, $nc(this->this$0->enter)->getEnv(c));
		if (stEnv != nullptr && this->val$env != stEnv) {
			if ($nc(this->dependencies)->add(stEnv)) {
				bool prevHasLambdas = this->hasLambdas;
				{
					$var($Throwable, var$0, nullptr);
					try {
						scan(stEnv->tree);
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						this->hasLambdas = prevHasLambdas;
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
			envForSuperTypeFound = true;
		}
		$assign(st, $nc(this->this$0->types)->supertype(st));
	}
	$TreeScanner::visitClassDef(node);
}

void JavaCompiler$1ScanNested::visitLambda($JCTree$JCLambda* tree) {
	this->hasLambdas = true;
	$TreeScanner::visitLambda(tree);
}

void JavaCompiler$1ScanNested::visitReference($JCTree$JCMemberReference* tree) {
	this->hasLambdas = true;
	$TreeScanner::visitReference(tree);
}

JavaCompiler$1ScanNested::JavaCompiler$1ScanNested() {
}

$Class* JavaCompiler$1ScanNested::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$1ScanNested, name, initialize, &_JavaCompiler$1ScanNested_ClassInfo_, allocate$JavaCompiler$1ScanNested);
	return class$;
}

$Class* JavaCompiler$1ScanNested::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com