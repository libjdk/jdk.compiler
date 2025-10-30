#include <com/sun/tools/javac/tree/EndPosTable.h>

#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _EndPosTable_MethodInfo_[] = {
	{"getEndPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"replaceTree", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"storeEnd", "(Lcom/sun/tools/javac/tree/JCTree;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EndPosTable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.tree.EndPosTable",
	nullptr,
	nullptr,
	nullptr,
	_EndPosTable_MethodInfo_
};

$Object* allocate$EndPosTable($Class* clazz) {
	return $of($alloc(EndPosTable));
}

$Class* EndPosTable::load$($String* name, bool initialize) {
	$loadClass(EndPosTable, name, initialize, &_EndPosTable_ClassInfo_, allocate$EndPosTable);
	return class$;
}

$Class* EndPosTable::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com