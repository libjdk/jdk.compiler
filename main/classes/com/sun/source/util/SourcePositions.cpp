#include <com/sun/source/util/SourcePositions.h>

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <jcpp.h>

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _SourcePositions_MethodInfo_[] = {
	{"getEndPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SourcePositions_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.util.SourcePositions",
	nullptr,
	nullptr,
	nullptr,
	_SourcePositions_MethodInfo_
};

$Object* allocate$SourcePositions($Class* clazz) {
	return $of($alloc(SourcePositions));
}

$Class* SourcePositions::load$($String* name, bool initialize) {
	$loadClass(SourcePositions, name, initialize, &_SourcePositions_ClassInfo_, allocate$SourcePositions);
	return class$;
}

$Class* SourcePositions::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com