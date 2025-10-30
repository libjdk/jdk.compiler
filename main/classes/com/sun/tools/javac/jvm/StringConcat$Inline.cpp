#include <com/sun/tools/javac/jvm/StringConcat$Inline.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/jvm/StringConcat.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $StringConcat = ::com::sun::tools::javac::jvm::StringConcat;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _StringConcat$Inline_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcat$Inline::*)($Context*)>(&StringConcat$Inline::init$))},
	{"appendString", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(static_cast<void(StringConcat$Inline::*)($JCTree*)>(&StringConcat$Inline::appendString))},
	{"builderToString", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(static_cast<void(StringConcat$Inline::*)($JCDiagnostic$DiagnosticPosition*)>(&StringConcat$Inline::builderToString))},
	{"makeConcat", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC},
	{"makeConcat", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC},
	{"newStringBuilder", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(StringConcat$Inline::*)($JCTree*)>(&StringConcat$Inline::newStringBuilder))},
	{}
};

$InnerClassInfo _StringConcat$Inline_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.StringConcat$Inline", "com.sun.tools.javac.jvm.StringConcat", "Inline", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StringConcat$Inline_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.StringConcat$Inline",
	"com.sun.tools.javac.jvm.StringConcat",
	nullptr,
	nullptr,
	_StringConcat$Inline_MethodInfo_,
	nullptr,
	nullptr,
	_StringConcat$Inline_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.StringConcat"
};

$Object* allocate$StringConcat$Inline($Class* clazz) {
	return $of($alloc(StringConcat$Inline));
}

void StringConcat$Inline::init$($Context* context) {
	$StringConcat::init$(context);
}

$Items$Item* StringConcat$Inline::makeConcat($JCTree$JCAssignOp* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	newStringBuilder(tree);
	$var($Items$Item, l, $nc(this->gen)->genExpr(tree->lhs, $nc(tree->lhs)->type));
	if ($nc(l)->width() > 0) {
		$nc($($nc(this->gen)->getCode()))->emitop0(90 + 3 * (l->width() - 1));
	}
	$nc(l)->load();
	appendString(tree->lhs);
	$var($List, args, collectAll(tree->rhs));
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, t, $cast($JCTree, i$->next()));
			{
				$nc($($nc(this->gen)->genExpr(t, $nc(t)->type)))->load();
				appendString(t);
			}
		}
	}
	builderToString(pos);
	return l;
}

$Items$Item* StringConcat$Inline::makeConcat($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	newStringBuilder(tree);
	$var($List, args, collectAll(tree));
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, t, $cast($JCTree, i$->next()));
			{
				$nc($($nc(this->gen)->genExpr(t, $nc(t)->type)))->load();
				appendString(t);
			}
		}
	}
	builderToString(pos);
	return $nc($($nc(this->gen)->getItems()))->makeStackItem($nc(this->syms)->stringType);
}

$JCDiagnostic$DiagnosticPosition* StringConcat$Inline::newStringBuilder($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	$nc($($nc(this->gen)->getCode()))->emitop2(187, $nc(this->gen)->makeRef(pos, $nc(this->syms)->stringBuilderType), static_cast<$PoolConstant*>($nc(this->syms)->stringBuilderType));
	$nc($($nc(this->gen)->getCode()))->emitop0(89);
	$nc(this->gen)->callMethod(pos, $nc(this->syms)->stringBuilderType, $nc(this->names)->init, $($List::nil()), false);
	return pos;
}

void StringConcat$Inline::appendString($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, $nc($nc(tree)->type)->baseType());
	if (!$nc(t)->isPrimitive() && t->tsym != $nc($nc(this->syms)->stringType)->tsym) {
		$assign(t, $nc(this->syms)->objectType);
	}
	$Assert::checkNull($($nc(t)->constValue()));
	$var($Symbol, method, $cast($Symbol, $nc(this->sbAppends)->get(t)));
	if (method == nullptr) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
		$var($Env, var$1, $nc(this->gen)->getAttrEnv());
		$var($Type, var$2, $nc(this->syms)->stringBuilderType);
		$var($Name, var$3, $nc(this->names)->append);
		$assign(method, $nc(this->rs)->resolveInternalMethod(var$0, var$1, var$2, var$3, $($List::of(t)), nullptr));
		$nc(this->sbAppends)->put(t, method);
	}
	$nc($($nc($($nc(this->gen)->getItems()))->makeMemberItem(method, false)))->invoke();
}

void StringConcat$Inline::builderToString($JCDiagnostic$DiagnosticPosition* pos) {
	$nc(this->gen)->callMethod(pos, $nc(this->syms)->stringBuilderType, $nc(this->names)->toString$, $($List::nil()), false);
}

StringConcat$Inline::StringConcat$Inline() {
}

$Class* StringConcat$Inline::load$($String* name, bool initialize) {
	$loadClass(StringConcat$Inline, name, initialize, &_StringConcat$Inline_ClassInfo_, allocate$StringConcat$Inline);
	return class$;
}

$Class* StringConcat$Inline::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com