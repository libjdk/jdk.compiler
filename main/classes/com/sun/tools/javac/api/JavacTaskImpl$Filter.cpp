#include <com/sun/tools/javac/api/JavacTaskImpl$Filter.h>

#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractQueue.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Queue.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/Element.h>
#include <jcpp.h>

#undef MODULEDEF
#undef PACKAGEDEF

using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractQueue = ::java::util::AbstractQueue;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Queue = ::java::util::Queue;
using $Set = ::java::util::Set;
using $Element = ::javax::lang::model::element::Element;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTaskImpl$Filter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTaskImpl;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTaskImpl$Filter, this$0)},
	{}
};

$MethodInfo _JavacTaskImpl$Filter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTaskImpl;)V", nullptr, 0, $method(static_cast<void(JavacTaskImpl$Filter::*)($JavacTaskImpl*)>(&JavacTaskImpl$Filter::init$))},
	{"process", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $ABSTRACT},
	{"run", "(Ljava/util/Queue;Ljava/lang/Iterable;)V", "(Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)V", 0},
	{}
};

$InnerClassInfo _JavacTaskImpl$Filter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskImpl$Filter", "com.sun.tools.javac.api.JavacTaskImpl", "Filter", $ABSTRACT},
	{}
};

$ClassInfo _JavacTaskImpl$Filter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.api.JavacTaskImpl$Filter",
	"java.lang.Object",
	nullptr,
	_JavacTaskImpl$Filter_FieldInfo_,
	_JavacTaskImpl$Filter_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTaskImpl$Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskImpl"
};

$Object* allocate$JavacTaskImpl$Filter($Class* clazz) {
	return $of($alloc(JavacTaskImpl$Filter));
}

void JavacTaskImpl$Filter::init$($JavacTaskImpl* this$0) {
	$set(this, this$0, this$0);
}

void JavacTaskImpl$Filter::run($Queue* list, $Iterable* elements) {
	$useLocalCurrentObjectStackCache();
	$var($Set, set, $new($HashSet));
	{
		$var($Iterator, i$, $nc(elements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, item, $cast($Element, i$->next()));
			{
				set->add(item);
			}
		}
	}
	$var($ListBuffer, defer, $new($ListBuffer));
	while ($nc(list)->peek() != nullptr) {
		$var($Env, env, $cast($Env, list->remove()));
		$var($Symbol, test, nullptr);
		$init($JCTree$Tag);
		if ($nc($nc(env)->tree)->hasTag($JCTree$Tag::MODULEDEF)) {
			$assign(test, $nc(($cast($JCTree$JCModuleDecl, env->tree)))->sym);
		} else {
			if ($nc(env->tree)->hasTag($JCTree$Tag::PACKAGEDEF)) {
				$assign(test, $nc(env->toplevel)->packge);
			} else {
				$var($Symbol$ClassSymbol, csym, $nc(env->enclClass)->sym);
				if (csym != nullptr) {
					$assign(test, csym->outermostClass());
				}
			}
		}
		if (test != nullptr && set->contains(test)) {
			process(env);
		} else {
			$assign(defer, $nc(defer)->append(env));
		}
	}
	$nc(list)->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(defer))));
}

JavacTaskImpl$Filter::JavacTaskImpl$Filter() {
}

$Class* JavacTaskImpl$Filter::load$($String* name, bool initialize) {
	$loadClass(JavacTaskImpl$Filter, name, initialize, &_JavacTaskImpl$Filter_ClassInfo_, allocate$JavacTaskImpl$Filter);
	return class$;
}

$Class* JavacTaskImpl$Filter::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com