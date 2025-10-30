#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef POLY

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
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

$FieldInfo _JCTree$JCFunctionalExpression_FieldInfo_[] = {
	{"target", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(JCTree$JCFunctionalExpression, target)},
	{}
};

$MethodInfo _JCTree$JCFunctionalExpression_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCFunctionalExpression::*)()>(&JCTree$JCFunctionalExpression::init$))},
	{"getDescriptorType", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCFunctionalExpression_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCFunctionalExpression", "com.sun.tools.javac.tree.JCTree", "JCFunctionalExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCFunctionalExpression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$JCFunctionalExpression",
	"com.sun.tools.javac.tree.JCTree$JCPolyExpression",
	nullptr,
	_JCTree$JCFunctionalExpression_FieldInfo_,
	_JCTree$JCFunctionalExpression_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCFunctionalExpression_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCFunctionalExpression($Class* clazz) {
	return $of($alloc(JCTree$JCFunctionalExpression));
}

void JCTree$JCFunctionalExpression::init$() {
	$JCTree$JCPolyExpression::init$();
	$init($JCTree$JCPolyExpression$PolyKind);
	$set(this, polyKind, $JCTree$JCPolyExpression$PolyKind::POLY);
}

$Type* JCTree$JCFunctionalExpression::getDescriptorType($Types* types) {
	return this->target != nullptr ? $nc(types)->findDescriptorType(this->target) : types->createErrorType(nullptr);
}

JCTree$JCFunctionalExpression::JCTree$JCFunctionalExpression() {
}

$Class* JCTree$JCFunctionalExpression::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCFunctionalExpression, name, initialize, &_JCTree$JCFunctionalExpression_ClassInfo_, allocate$JCTree$JCFunctionalExpression);
	return class$;
}

$Class* JCTree$JCFunctionalExpression::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com