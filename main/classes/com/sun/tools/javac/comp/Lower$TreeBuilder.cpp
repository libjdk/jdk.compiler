#include <com/sun/tools/javac/comp/Lower$TreeBuilder.h>

#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <jcpp.h>

using $Lower = ::com::sun::tools::javac::comp::Lower;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Lower$TreeBuilder_MethodInfo_[] = {
	{"build", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Lower$TreeBuilder_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$TreeBuilder", "com.sun.tools.javac.comp.Lower", "TreeBuilder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Lower$TreeBuilder_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Lower$TreeBuilder",
	nullptr,
	nullptr,
	nullptr,
	_Lower$TreeBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_Lower$TreeBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$TreeBuilder($Class* clazz) {
	return $of($alloc(Lower$TreeBuilder));
}

$Class* Lower$TreeBuilder::load$($String* name, bool initialize) {
	$loadClass(Lower$TreeBuilder, name, initialize, &_Lower$TreeBuilder_ClassInfo_, allocate$Lower$TreeBuilder);
	return class$;
}

$Class* Lower$TreeBuilder::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com