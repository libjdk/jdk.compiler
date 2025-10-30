#include <com/sun/source/util/TreePathScanner.h>

#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/util/TreeScanner.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $TreePath = ::com::sun::source::util::TreePath;
using $TreeScanner = ::com::sun::source::util::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _TreePathScanner_FieldInfo_[] = {
	{"path", "Lcom/sun/source/util/TreePath;", nullptr, $PRIVATE, $field(TreePathScanner, path)},
	{}
};

$MethodInfo _TreePathScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreePathScanner::*)()>(&TreePathScanner::init$))},
	{"getCurrentPath", "()Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/source/util/TreePath;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/util/TreePath;TP;)TR;", $PUBLIC},
	{"scan", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/Tree;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _TreePathScanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.source.util.TreePathScanner",
	"com.sun.source.util.TreeScanner",
	nullptr,
	_TreePathScanner_FieldInfo_,
	_TreePathScanner_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Lcom/sun/source/util/TreeScanner<TR;TP;>;"
};

$Object* allocate$TreePathScanner($Class* clazz) {
	return $of($alloc(TreePathScanner));
}

void TreePathScanner::init$() {
	$TreeScanner::init$();
}

$Object* TreePathScanner::scan($TreePath* path, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, path);
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc($($nc(path)->getLeaf()))->accept(this, p));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, path, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Object* TreePathScanner::scan($Tree* tree, Object$* p) {
	$useLocalCurrentObjectStackCache();
	if (tree == nullptr) {
		return $of(nullptr);
	}
	$var($TreePath, prev, this->path);
	$set(this, path, $new($TreePath, this->path, tree));
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(tree)->accept(this, p));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, path, prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$TreePath* TreePathScanner::getCurrentPath() {
	return this->path;
}

TreePathScanner::TreePathScanner() {
}

$Class* TreePathScanner::load$($String* name, bool initialize) {
	$loadClass(TreePathScanner, name, initialize, &_TreePathScanner_ClassInfo_, allocate$TreePathScanner);
	return class$;
}

$Class* TreePathScanner::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com