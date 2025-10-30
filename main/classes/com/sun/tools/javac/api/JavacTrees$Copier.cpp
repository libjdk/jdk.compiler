#include <com/sun/tools/javac/api/JavacTrees$Copier.h>

#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef M

using $ClassTree = ::com::sun::source::tree::ClassTree;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTrees$Copier_FieldInfo_[] = {
	{"leafCopy", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(JavacTrees$Copier, leafCopy)},
	{"copiedClasses", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;>;", $PRIVATE, $field(JavacTrees$Copier, copiedClasses)},
	{}
};

$MethodInfo _JavacTrees$Copier_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/TreeMaker;)V", nullptr, $PROTECTED, $method(static_cast<void(JavacTrees$Copier::*)($TreeMaker*)>(&JavacTrees$Copier::init$))},
	{"copy", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;Lcom/sun/tools/javac/tree/JCTree;)TT;", $PUBLIC},
	{"copy", "(Lcom/sun/tools/javac/tree/JCTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JavacTrees$Copier_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$Copier", "com.sun.tools.javac.api.JavacTrees", "Copier", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _JavacTrees$Copier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees$Copier",
	"com.sun.tools.javac.tree.TreeCopier",
	nullptr,
	_JavacTrees$Copier_FieldInfo_,
	_JavacTrees$Copier_MethodInfo_,
	"Lcom/sun/tools/javac/tree/TreeCopier<Lcom/sun/tools/javac/tree/JCTree;>;",
	nullptr,
	_JavacTrees$Copier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$Copier($Class* clazz) {
	return $of($alloc(JavacTrees$Copier));
}

void JavacTrees$Copier::init$($TreeMaker* M) {
	$TreeCopier::init$(M);
	$set(this, leafCopy, nullptr);
	$set(this, copiedClasses, $new($HashMap));
}

$JCTree* JavacTrees$Copier::copy($JCTree* t, $JCTree* leaf) {
	$var($JCTree, t2, $TreeCopier::copy(t, $of(leaf)));
	if (t == leaf) {
		$set(this, leafCopy, t2);
	}
	return t2;
}

$JCTree* JavacTrees$Copier::visitClass($ClassTree* node, $JCTree* p) {
	$var($JCTree, nue, $cast($JCTree, $TreeCopier::visitClass(node, p)));
	$nc(this->copiedClasses)->put($cast($JCTree$JCClassDecl, nue), $cast($JCTree$JCClassDecl, node));
	return nue;
}

$Object* JavacTrees$Copier::visitClass($ClassTree* node, Object$* p) {
	return $of(this->visitClass(node, $cast($JCTree, p)));
}

$JCTree* JavacTrees$Copier::copy($JCTree* t, Object$* leaf) {
	return this->copy(t, $cast($JCTree, leaf));
}

JavacTrees$Copier::JavacTrees$Copier() {
}

$Class* JavacTrees$Copier::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$Copier, name, initialize, &_JavacTrees$Copier_ClassInfo_, allocate$JavacTrees$Copier);
	return class$;
}

$Class* JavacTrees$Copier::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com