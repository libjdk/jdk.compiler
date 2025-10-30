#include <com/sun/source/doctree/ErroneousTree.h>

#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $TextTree = ::com::sun::source::doctree::TextTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _ErroneousTree_MethodInfo_[] = {
	{"getDiagnostic", "()Ljavax/tools/Diagnostic;", "()Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ErroneousTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.ErroneousTree",
	nullptr,
	"com.sun.source.doctree.TextTree",
	nullptr,
	_ErroneousTree_MethodInfo_
};

$Object* allocate$ErroneousTree($Class* clazz) {
	return $of($alloc(ErroneousTree));
}

$Class* ErroneousTree::load$($String* name, bool initialize) {
	$loadClass(ErroneousTree, name, initialize, &_ErroneousTree_ClassInfo_, allocate$ErroneousTree);
	return class$;
}

$Class* ErroneousTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com