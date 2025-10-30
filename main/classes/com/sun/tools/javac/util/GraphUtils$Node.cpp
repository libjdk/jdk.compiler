#include <com/sun/tools/javac/util/GraphUtils$Node.h>

#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <jcpp.h>

using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _GraphUtils$Node_MethodInfo_[] = {
	{"accept", "(Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor;Ljava/lang/Object;)V", "<A:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor<TD;TN;TA;>;TA;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _GraphUtils$Node_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.GraphUtils$Node", "com.sun.tools.javac.util.GraphUtils", "Node", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphUtils$Node_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.GraphUtils$Node",
	nullptr,
	nullptr,
	nullptr,
	_GraphUtils$Node_MethodInfo_,
	"<D:Ljava/lang/Object;N::Lcom/sun/tools/javac/util/GraphUtils$Node<TD;TN;>;>Ljava/lang/Object;",
	nullptr,
	_GraphUtils$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.GraphUtils"
};

$Object* allocate$GraphUtils$Node($Class* clazz) {
	return $of($alloc(GraphUtils$Node));
}

$Class* GraphUtils$Node::load$($String* name, bool initialize) {
	$loadClass(GraphUtils$Node, name, initialize, &_GraphUtils$Node_ClassInfo_, allocate$GraphUtils$Node);
	return class$;
}

$Class* GraphUtils$Node::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com