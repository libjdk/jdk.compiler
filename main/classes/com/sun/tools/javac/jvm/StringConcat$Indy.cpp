#include <com/sun/tools/javac/jvm/StringConcat$Indy.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/StringConcat.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef DOUBLE
#undef LONG

using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $StringConcat = ::com::sun::tools::javac::jvm::StringConcat;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _StringConcat$Indy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcat$Indy::*)($Context*)>(&StringConcat$Indy::init$))},
	{"emit", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;ZLcom/sun/tools/javac/code/Type;)V", $PROTECTED | $ABSTRACT},
	{"makeConcat", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC},
	{"makeConcat", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC},
	{"split", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;>;", $PROTECTED},
	{}
};

$InnerClassInfo _StringConcat$Indy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.StringConcat$Indy", "com.sun.tools.javac.jvm.StringConcat", "Indy", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StringConcat$Indy_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.jvm.StringConcat$Indy",
	"com.sun.tools.javac.jvm.StringConcat",
	nullptr,
	nullptr,
	_StringConcat$Indy_MethodInfo_,
	nullptr,
	nullptr,
	_StringConcat$Indy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.StringConcat"
};

$Object* allocate$StringConcat$Indy($Class* clazz) {
	return $of($alloc(StringConcat$Indy));
}

void StringConcat$Indy::init$($Context* context) {
	$StringConcat::init$(context);
}

$Items$Item* StringConcat$Indy::makeConcat($JCTree$JCAssignOp* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, args, collectAll($nc(tree)->lhs, tree->rhs));
	$var($Items$Item, l, $nc(this->gen)->genExpr($nc(tree)->lhs, $nc(tree->lhs)->type));
	$nc(l)->duplicate();
	l->load();
	emit($($nc(tree)->pos()), args, false, tree->type);
	return l;
}

$Items$Item* StringConcat$Indy::makeConcat($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, args, collectAll($nc(tree)->lhs, tree->rhs));
	emit($($nc(tree)->pos()), args, true, tree->type);
	return $nc($($nc(this->gen)->getItems()))->makeStackItem($nc(this->syms)->stringType);
}

$List* StringConcat$Indy::split($List* args) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, splits, $new($ListBuffer));
	int32_t slots = 0;
	$var($ListBuffer, cArgs, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, t, $cast($JCTree, i$->next()));
			{
				$init($TypeTag);
				bool var$0 = $nc($nc(t)->type)->getTag() == $TypeTag::LONG;
				int32_t needSlots = (var$0 || $nc($nc(t)->type)->getTag() == $TypeTag::DOUBLE) ? 2 : 1;
				if (slots + needSlots >= 200) {
					splits->add($(cArgs->toList()));
					cArgs->clear();
					slots = 0;
				}
				cArgs->add(t);
				slots += needSlots;
			}
		}
	}
	if (!cArgs->isEmpty()) {
		splits->add($(cArgs->toList()));
	}
	return splits->toList();
}

StringConcat$Indy::StringConcat$Indy() {
}

$Class* StringConcat$Indy::load$($String* name, bool initialize) {
	$loadClass(StringConcat$Indy, name, initialize, &_StringConcat$Indy_ClassInfo_, allocate$StringConcat$Indy);
	return class$;
}

$Class* StringConcat$Indy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com