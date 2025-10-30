#include <com/sun/tools/javac/api/JavacTrees$2.h>

#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <jcpp.h>

using $DocTreeArray = $Array<::com::sun::source::doctree::DocTree>;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTrees$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$2, this$0)},
	{"val$last", "[Lcom/sun/source/doctree/DocTree;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$2, val$last)},
	{}
};

$MethodInfo _JavacTrees$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;[Lcom/sun/source/doctree/DocTree;)V", nullptr, 0, $method(static_cast<void(JavacTrees$2::*)($JavacTrees*,$DocTreeArray*)>(&JavacTrees$2::init$))},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavacTrees$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTrees",
	"getLastChild",
	"(Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/doctree/DocTree;"
};

$InnerClassInfo _JavacTrees$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTrees$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees$2",
	"com.sun.source.util.DocTreeScanner",
	nullptr,
	_JavacTrees$2_FieldInfo_,
	_JavacTrees$2_MethodInfo_,
	"Lcom/sun/source/util/DocTreeScanner<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_JavacTrees$2_EnclosingMethodInfo_,
	_JavacTrees$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$2($Class* clazz) {
	return $of($alloc(JavacTrees$2));
}

void JavacTrees$2::init$($JavacTrees* this$0, $DocTreeArray* val$last) {
	$set(this, this$0, this$0);
	$set(this, val$last, val$last);
	$DocTreeScanner::init$();
}

$Void* JavacTrees$2::scan($DocTree* node, $Void* p) {
	if (node != nullptr) {
		$nc(this->val$last)->set(0, node);
	}
	return nullptr;
}

$Object* JavacTrees$2::scan($DocTree* node, Object$* p) {
	return $of(this->scan(node, $cast($Void, p)));
}

JavacTrees$2::JavacTrees$2() {
}

$Class* JavacTrees$2::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$2, name, initialize, &_JavacTrees$2_ClassInfo_, allocate$JavacTrees$2);
	return class$;
}

$Class* JavacTrees$2::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com