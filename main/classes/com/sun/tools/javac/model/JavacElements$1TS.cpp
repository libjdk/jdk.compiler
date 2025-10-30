#include <com/sun/tools/javac/model/JavacElements$1TS.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef IDENT

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$FieldInfo _JavacElements$1TS_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/model/JavacElements;", nullptr, $FINAL | $SYNTHETIC, $field(JavacElements$1TS, this$0)},
	{"val$sym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(JavacElements$1TS, val$sym)},
	{"val$tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL | $SYNTHETIC, $field(JavacElements$1TS, val$tree)},
	{"result", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0, $field(JavacElements$1TS, result)},
	{}
};

$MethodInfo _JavacElements$1TS_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/model/JavacElements;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", "()V", 0, $method(static_cast<void(JavacElements$1TS::*)($JavacElements*,$JCTree*,$Symbol$MethodSymbol*)>(&JavacElements$1TS::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacElements$1TS_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.model.JavacElements",
	"scanForAssign",
	"(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;"
};

$InnerClassInfo _JavacElements$1TS_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.JavacElements$1TS", nullptr, "TS", 0},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JavacElements$1TS_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.model.JavacElements$1TS",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_JavacElements$1TS_FieldInfo_,
	_JavacElements$1TS_MethodInfo_,
	nullptr,
	&_JavacElements$1TS_EnclosingMethodInfo_,
	_JavacElements$1TS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.JavacElements"
};

$Object* allocate$JavacElements$1TS($Class* clazz) {
	return $of($alloc(JavacElements$1TS));
}

void JavacElements$1TS::init$($JavacElements* this$0, $JCTree* val$tree, $Symbol$MethodSymbol* val$sym) {
	$set(this, this$0, this$0);
	$set(this, val$tree, val$tree);
	$set(this, val$sym, val$sym);
	$TreeScanner::init$();
	$set(this, result, nullptr);
}

void JavacElements$1TS::scan($JCTree* t) {
	if (t != nullptr && this->result == nullptr) {
		t->accept(this);
	}
}

void JavacElements$1TS::visitAnnotation($JCTree$JCAnnotation* t) {
	if ($equals(t, this->val$tree)) {
		scan($nc(t)->args);
	}
}

void JavacElements$1TS::visitAssign($JCTree$JCAssign* t) {
	$init($JCTree$Tag);
	if ($nc($nc(t)->lhs)->hasTag($JCTree$Tag::IDENT)) {
		$var($JCTree$JCIdent, ident, $cast($JCTree$JCIdent, t->lhs));
		if ($equals($nc(ident)->sym, this->val$sym)) {
			$set(this, result, t->rhs);
		}
	}
}

JavacElements$1TS::JavacElements$1TS() {
}

$Class* JavacElements$1TS::load$($String* name, bool initialize) {
	$loadClass(JavacElements$1TS, name, initialize, &_JavacElements$1TS_ClassInfo_, allocate$JavacElements$1TS);
	return class$;
}

$Class* JavacElements$1TS::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com