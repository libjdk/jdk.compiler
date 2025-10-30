#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>

#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class DeferredAttr$FilterScanner$$Lambda$lambda$new$0 : public $Predicate {
	$class(DeferredAttr$FilterScanner$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Set* validTags) {
		$set(this, validTags, validTags);
	}
	virtual bool test(Object$* t) override {
		 return DeferredAttr$FilterScanner::lambda$new$0(validTags, $cast($JCTree, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeferredAttr$FilterScanner$$Lambda$lambda$new$0>());
	}
	$Set* validTags = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DeferredAttr$FilterScanner$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"validTags", "Ljava/util/Set;", nullptr, $PUBLIC, $field(DeferredAttr$FilterScanner$$Lambda$lambda$new$0, validTags)},
	{}
};
$MethodInfo DeferredAttr$FilterScanner$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$FilterScanner$$Lambda$lambda$new$0::*)($Set*)>(&DeferredAttr$FilterScanner$$Lambda$lambda$new$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeferredAttr$FilterScanner$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.DeferredAttr$FilterScanner$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* DeferredAttr$FilterScanner$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$FilterScanner$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeferredAttr$FilterScanner$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _DeferredAttr$FilterScanner_FieldInfo_[] = {
	{"treeFilter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/tree/JCTree;>;", $FINAL, $field(DeferredAttr$FilterScanner, treeFilter)},
	{}
};

$MethodInfo _DeferredAttr$FilterScanner_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/tree/JCTree$Tag;>;)V", 0, $method(static_cast<void(DeferredAttr$FilterScanner::*)($Set*)>(&DeferredAttr$FilterScanner::init$))},
	{"lambda$new$0", "(Ljava/util/Set;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Set*,$JCTree*)>(&DeferredAttr$FilterScanner::lambda$new$0))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"skip", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0},
	{}
};

$InnerClassInfo _DeferredAttr$FilterScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$FilterScanner", "com.sun.tools.javac.comp.DeferredAttr", "FilterScanner", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DeferredAttr$FilterScanner_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.DeferredAttr$FilterScanner",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_DeferredAttr$FilterScanner_FieldInfo_,
	_DeferredAttr$FilterScanner_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$FilterScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$FilterScanner($Class* clazz) {
	return $of($alloc(DeferredAttr$FilterScanner));
}

void DeferredAttr$FilterScanner::init$($Set* validTags) {
	$TreeScanner::init$();
	$set(this, treeFilter, static_cast<$Predicate*>($new(DeferredAttr$FilterScanner$$Lambda$lambda$new$0, validTags)));
}

void DeferredAttr$FilterScanner::scan($JCTree* tree) {
	if (tree != nullptr) {
		if ($nc(this->treeFilter)->test(tree)) {
			$TreeScanner::scan(tree);
		} else {
			skip(tree);
		}
	}
}

void DeferredAttr$FilterScanner::skip($JCTree* tree) {
}

bool DeferredAttr$FilterScanner::lambda$new$0($Set* validTags, $JCTree* t) {
	$init(DeferredAttr$FilterScanner);
	return $nc(validTags)->contains($($nc(t)->getTag()));
}

DeferredAttr$FilterScanner::DeferredAttr$FilterScanner() {
}

$Class* DeferredAttr$FilterScanner::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DeferredAttr$FilterScanner$$Lambda$lambda$new$0::classInfo$.name)) {
			return DeferredAttr$FilterScanner$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(DeferredAttr$FilterScanner, name, initialize, &_DeferredAttr$FilterScanner_ClassInfo_, allocate$DeferredAttr$FilterScanner);
	return class$;
}

$Class* DeferredAttr$FilterScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com