#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>

#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef POLY
#undef STANDALONE

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPolyExpression$PolyKind = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCPolyExpression_FieldInfo_[] = {
	{"polyKind", "Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PUBLIC, $field(JCTree$JCPolyExpression, polyKind)},
	{}
};

$MethodInfo _JCTree$JCPolyExpression_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCPolyExpression::*)()>(&JCTree$JCPolyExpression::init$))},
	{"isPoly", "()Z", nullptr, $PUBLIC},
	{"isStandalone", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCPolyExpression_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression$PolyKind", "com.sun.tools.javac.tree.JCTree$JCPolyExpression", "PolyKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCPolyExpression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$JCPolyExpression",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	nullptr,
	_JCTree$JCPolyExpression_FieldInfo_,
	_JCTree$JCPolyExpression_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCPolyExpression_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCPolyExpression($Class* clazz) {
	return $of($alloc(JCTree$JCPolyExpression));
}

void JCTree$JCPolyExpression::init$() {
	$JCTree$JCExpression::init$();
}

bool JCTree$JCPolyExpression::isPoly() {
	$init($JCTree$JCPolyExpression$PolyKind);
	return this->polyKind == $JCTree$JCPolyExpression$PolyKind::POLY;
}

bool JCTree$JCPolyExpression::isStandalone() {
	$init($JCTree$JCPolyExpression$PolyKind);
	return this->polyKind == $JCTree$JCPolyExpression$PolyKind::STANDALONE;
}

JCTree$JCPolyExpression::JCTree$JCPolyExpression() {
}

$Class* JCTree$JCPolyExpression::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCPolyExpression, name, initialize, &_JCTree$JCPolyExpression_ClassInfo_, allocate$JCTree$JCPolyExpression);
	return class$;
}

$Class* JCTree$JCPolyExpression::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com