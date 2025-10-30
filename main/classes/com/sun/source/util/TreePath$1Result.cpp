#include <com/sun/source/util/TreePath$1Result.h>

#include <com/sun/source/util/TreePath.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $TreePath = ::com::sun::source::util::TreePath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _TreePath$1Result_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TreePath$1Result, serialVersionUID)},
	{"path", "Lcom/sun/source/util/TreePath;", nullptr, 0, $field(TreePath$1Result, path)},
	{}
};

$MethodInfo _TreePath$1Result_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/source/util/TreePath;)V", nullptr, 0, $method(static_cast<void(TreePath$1Result::*)($TreePath*)>(&TreePath$1Result::init$))},
	{}
};

$EnclosingMethodInfo _TreePath$1Result_EnclosingMethodInfo_ = {
	"com.sun.source.util.TreePath",
	"getPath",
	"(Lcom/sun/source/util/TreePath;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;"
};

$InnerClassInfo _TreePath$1Result_InnerClassesInfo_[] = {
	{"com.sun.source.util.TreePath$1Result", nullptr, "Result", 0},
	{}
};

$ClassInfo _TreePath$1Result_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.source.util.TreePath$1Result",
	"java.lang.Error",
	nullptr,
	_TreePath$1Result_FieldInfo_,
	_TreePath$1Result_MethodInfo_,
	nullptr,
	&_TreePath$1Result_EnclosingMethodInfo_,
	_TreePath$1Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.util.TreePath"
};

$Object* allocate$TreePath$1Result($Class* clazz) {
	return $of($alloc(TreePath$1Result));
}

void TreePath$1Result::init$($TreePath* path) {
	$Error::init$();
	$set(this, path, path);
}

TreePath$1Result::TreePath$1Result() {
}

TreePath$1Result::TreePath$1Result(const TreePath$1Result& e) : $Error(e) {
}

void TreePath$1Result::throw$() {
	throw *this;
}

$Class* TreePath$1Result::load$($String* name, bool initialize) {
	$loadClass(TreePath$1Result, name, initialize, &_TreePath$1Result_ClassInfo_, allocate$TreePath$1Result);
	return class$;
}

$Class* TreePath$1Result::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com