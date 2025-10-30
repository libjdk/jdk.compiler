#include <com/sun/tools/javac/comp/Env.h>

#include <com/sun/tools/javac/comp/Env$1.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Env$1 = ::com::sun::tools::javac::comp::Env$1;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _Env_FieldInfo_[] = {
	{"next", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<TA;>;", $PUBLIC, $field(Env, next)},
	{"outer", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<TA;>;", $PUBLIC, $field(Env, outer)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(Env, tree)},
	{"toplevel", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC, $field(Env, toplevel)},
	{"enclClass", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PUBLIC, $field(Env, enclClass)},
	{"enclMethod", "Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC, $field(Env, enclMethod)},
	{"info", "Ljava/lang/Object;", "TA;", $PUBLIC, $field(Env, info)},
	{"baseClause", "Z", nullptr, $PUBLIC, $field(Env, baseClause)},
	{}
};

$MethodInfo _Env_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;Ljava/lang/Object;)V", "(Lcom/sun/tools/javac/tree/JCTree;TA;)V", $PUBLIC, $method(static_cast<void(Env::*)($JCTree*,Object$*)>(&Env::init$))},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree;Ljava/lang/Object;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;TA;)Lcom/sun/tools/javac/comp/Env<TA;>;", $PUBLIC},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Env<TA;>;", $PUBLIC},
	{"dupto", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/comp/Env<TA;>;)Lcom/sun/tools/javac/comp/Env<TA;>;", $PUBLIC},
	{"enclosing", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)Lcom/sun/tools/javac/comp/Env<TA;>;", $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/tools/javac/comp/Env<TA;>;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Env_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Env$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Env_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Env",
	"java.lang.Object",
	"java.lang.Iterable",
	_Env_FieldInfo_,
	_Env_MethodInfo_,
	"<A:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Iterable<Lcom/sun/tools/javac/comp/Env<TA;>;>;",
	nullptr,
	_Env_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Env$1"
};

$Object* allocate$Env($Class* clazz) {
	return $of($alloc(Env));
}

void Env::init$($JCTree* tree, Object$* info) {
	this->baseClause = false;
	$set(this, next, nullptr);
	$set(this, outer, nullptr);
	$set(this, tree, tree);
	$set(this, toplevel, nullptr);
	$set(this, enclClass, nullptr);
	$set(this, enclMethod, nullptr);
	$set(this, info, info);
}

Env* Env::dup($JCTree* tree, Object$* info) {
	return dupto($$new(Env, tree, info));
}

Env* Env::dupto(Env* that) {
	$set($nc(that), next, this);
	$set(that, outer, this->outer);
	$set(that, toplevel, this->toplevel);
	$set(that, enclClass, this->enclClass);
	$set(that, enclMethod, this->enclMethod);
	return that;
}

Env* Env::dup($JCTree* tree) {
	return dup(tree, this->info);
}

Env* Env::enclosing($JCTree$Tag* tag) {
	$var(Env, env1, this);
	while (env1 != nullptr && !$nc(env1->tree)->hasTag(tag)) {
		$assign(env1, env1->next);
	}
	return env1;
}

$String* Env::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("Env["_s)->append(this->info);
	if (this->outer != nullptr) {
		sb->append(",outer="_s)->append($of(this->outer));
	}
	sb->append("]"_s);
	return sb->toString();
}

$Iterator* Env::iterator() {
	return $new($Env$1, this);
}

Env::Env() {
}

$Class* Env::load$($String* name, bool initialize) {
	$loadClass(Env, name, initialize, &_Env_ClassInfo_, allocate$Env);
	return class$;
}

$Class* Env::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com