#include <com/sun/tools/javac/model/JavacElements$2Vis.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef NEWARRAY

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $List = ::com::sun::tools::javac::util::List;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$FieldInfo _JavacElements$2Vis_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/model/JavacElements;", nullptr, $FINAL | $SYNTHETIC, $field(JavacElements$2Vis, this$0)},
	{"val$findme", "Lcom/sun/tools/javac/code/Attribute;", nullptr, $FINAL | $SYNTHETIC, $field(JavacElements$2Vis, val$findme)},
	{"val$tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL | $SYNTHETIC, $field(JavacElements$2Vis, val$tree)},
	{"result", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(JavacElements$2Vis, result)},
	{}
};

$MethodInfo _JavacElements$2Vis_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/model/JavacElements;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Attribute;)V", "()V", 0, $method(static_cast<void(JavacElements$2Vis::*)($JavacElements*,$JCTree*,$Attribute*)>(&JavacElements$2Vis::init$))},
	{"visitArray", "(Lcom/sun/tools/javac/code/Attribute$Array;)V", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/tools/javac/code/Attribute$Class;)V", nullptr, $PUBLIC},
	{"visitCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"visitConstant", "(Lcom/sun/tools/javac/code/Attribute$Constant;)V", nullptr, $PUBLIC},
	{"visitEnum", "(Lcom/sun/tools/javac/code/Attribute$Enum;)V", nullptr, $PUBLIC},
	{"visitError", "(Lcom/sun/tools/javac/code/Attribute$Error;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacElements$2Vis_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.model.JavacElements",
	"matchAttributeToTree",
	"(Lcom/sun/tools/javac/code/Attribute;Lcom/sun/tools/javac/code/Attribute;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;"
};

$InnerClassInfo _JavacElements$2Vis_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.JavacElements$2Vis", nullptr, "Vis", 0},
	{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacElements$2Vis_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.model.JavacElements$2Vis",
	"java.lang.Object",
	"com.sun.tools.javac.code.Attribute$Visitor",
	_JavacElements$2Vis_FieldInfo_,
	_JavacElements$2Vis_MethodInfo_,
	nullptr,
	&_JavacElements$2Vis_EnclosingMethodInfo_,
	_JavacElements$2Vis_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.JavacElements"
};

$Object* allocate$JavacElements$2Vis($Class* clazz) {
	return $of($alloc(JavacElements$2Vis));
}

void JavacElements$2Vis::init$($JavacElements* this$0, $JCTree* val$tree, $Attribute* val$findme) {
	$set(this, this$0, this$0);
	$set(this, val$tree, val$tree);
	$set(this, val$findme, val$findme);
	$set(this, result, nullptr);
}

void JavacElements$2Vis::visitConstant($Attribute$Constant* value) {
}

void JavacElements$2Vis::visitClass($Attribute$Class* clazz) {
}

void JavacElements$2Vis::visitCompound($Attribute$Compound* anno) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(anno)->values)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, pair, $cast($Pair, i$->next()));
			{
				$var($JCTree$JCExpression, expr, this->this$0->scanForAssign($cast($Symbol$MethodSymbol, $nc(pair)->fst), this->val$tree));
				if (expr != nullptr) {
					$var($JCTree, match, this->this$0->matchAttributeToTree(this->val$findme, $cast($Attribute, $nc(pair)->snd), expr));
					if (match != nullptr) {
						$set(this, result, match);
						return;
					}
				}
			}
		}
	}
}

void JavacElements$2Vis::visitArray($Attribute$Array* array) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if ($nc(this->val$tree)->hasTag($JCTree$Tag::NEWARRAY)) {
		$var($List, elems, $nc(($cast($JCTree$JCNewArray, this->val$tree)))->elems);
		{
			$var($AttributeArray, arr$, $nc(array)->values);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, value, arr$->get(i$));
				{
					$var($JCTree, match, this->this$0->matchAttributeToTree(this->val$findme, value, $cast($JCTree, $nc(elems)->head)));
					if (match != nullptr) {
						$set(this, result, match);
						return;
					}
					$assign(elems, $nc(elems)->tail);
				}
			}
		}
	} else if ($nc($nc(array)->values)->length == 1) {
		$set(this, result, this->this$0->matchAttributeToTree(this->val$findme, $nc(array->values)->get(0), this->val$tree));
	}
}

void JavacElements$2Vis::visitEnum($Attribute$Enum* e) {
}

void JavacElements$2Vis::visitError($Attribute$Error* e) {
}

JavacElements$2Vis::JavacElements$2Vis() {
}

$Class* JavacElements$2Vis::load$($String* name, bool initialize) {
	$loadClass(JavacElements$2Vis, name, initialize, &_JavacElements$2Vis_ClassInfo_, allocate$JavacElements$2Vis);
	return class$;
}

$Class* JavacElements$2Vis::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com