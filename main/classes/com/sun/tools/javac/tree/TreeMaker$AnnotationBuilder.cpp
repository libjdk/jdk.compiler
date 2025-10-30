#include <com/sun/tools/javac/tree/TreeMaker$AnnotationBuilder.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Attribute$UnresolvedClass.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Attribute$UnresolvedClass = ::com::sun::tools::javac::code::Attribute$UnresolvedClass;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeMaker$AnnotationBuilder_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMaker$AnnotationBuilder, this$0)},
	{"result", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0, $field(TreeMaker$AnnotationBuilder, result)},
	{}
};

$MethodInfo _TreeMaker$AnnotationBuilder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/TreeMaker;)V", nullptr, 0, $method(static_cast<void(TreeMaker$AnnotationBuilder::*)($TreeMaker*)>(&TreeMaker$AnnotationBuilder::init$))},
	{"translate", "(Lcom/sun/tools/javac/code/Attribute;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"translate", "(Lcom/sun/tools/javac/code/Attribute$Compound;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", nullptr, 0},
	{"translate", "(Lcom/sun/tools/javac/code/Attribute$TypeCompound;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", nullptr, 0},
	{"visitArray", "(Lcom/sun/tools/javac/code/Attribute$Array;)V", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/tools/javac/code/Attribute$Class;)V", nullptr, $PUBLIC},
	{"visitCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"visitCompoundInternal", "(Lcom/sun/tools/javac/code/Attribute$Compound;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", nullptr, $PUBLIC},
	{"visitConstant", "(Lcom/sun/tools/javac/code/Attribute$Constant;)V", nullptr, $PUBLIC},
	{"visitEnum", "(Lcom/sun/tools/javac/code/Attribute$Enum;)V", nullptr, $PUBLIC},
	{"visitError", "(Lcom/sun/tools/javac/code/Attribute$Error;)V", nullptr, $PUBLIC},
	{"visitTypeCompoundInternal", "(Lcom/sun/tools/javac/code/Attribute$TypeCompound;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeMaker$AnnotationBuilder_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeMaker$AnnotationBuilder", "com.sun.tools.javac.tree.TreeMaker", "AnnotationBuilder", 0},
	{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TreeMaker$AnnotationBuilder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.TreeMaker$AnnotationBuilder",
	"java.lang.Object",
	"com.sun.tools.javac.code.Attribute$Visitor",
	_TreeMaker$AnnotationBuilder_FieldInfo_,
	_TreeMaker$AnnotationBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_TreeMaker$AnnotationBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeMaker"
};

$Object* allocate$TreeMaker$AnnotationBuilder($Class* clazz) {
	return $of($alloc(TreeMaker$AnnotationBuilder));
}

void TreeMaker$AnnotationBuilder::init$($TreeMaker* this$0) {
	$set(this, this$0, this$0);
	$set(this, result, nullptr);
}

void TreeMaker$AnnotationBuilder::visitConstant($Attribute$Constant* v) {
	$set(this, result, this->this$0->Literal($($nc($nc(v)->type)->getTag()), v->value));
}

void TreeMaker$AnnotationBuilder::visitClass($Attribute$Class* clazz) {
	$set(this, result, $nc($(this->this$0->ClassLiteral($nc(clazz)->classType)))->setType($nc(this->this$0->syms)->classType));
}

void TreeMaker$AnnotationBuilder::visitEnum($Attribute$Enum* e) {
	$set(this, result, this->this$0->QualIdent($nc(e)->value));
}

void TreeMaker$AnnotationBuilder::visitError($Attribute$Error* e) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Attribute$UnresolvedClass, unresolvedClass, nullptr);
		bool var$0 = $instanceOf($Attribute$UnresolvedClass, e);
		if (var$0) {
			$assign(unresolvedClass, $cast($Attribute$UnresolvedClass, e));
			var$0 = true;
		}
		if (var$0) {
			$set(this, result, $nc($(this->this$0->ClassLiteral($nc(unresolvedClass)->classType)))->setType($nc(this->this$0->syms)->classType));
		} else {
			$set(this, result, this->this$0->Erroneous());
		}
	}
}

void TreeMaker$AnnotationBuilder::visitCompound($Attribute$Compound* compound) {
	{
		$var($Attribute$TypeCompound, typeCompound, nullptr);
		bool var$0 = $instanceOf($Attribute$TypeCompound, compound);
		if (var$0) {
			$assign(typeCompound, $cast($Attribute$TypeCompound, compound));
			var$0 = true;
		}
		if (var$0) {
			$set(this, result, visitTypeCompoundInternal(typeCompound));
		} else {
			$set(this, result, visitCompoundInternal(compound));
		}
	}
}

$JCTree$JCAnnotation* TreeMaker$AnnotationBuilder::visitCompoundInternal($Attribute$Compound* compound) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, args, $new($ListBuffer));
	{
		$var($List, values, $nc(compound)->values);
		for (; $nc(values)->nonEmpty(); $assign(values, $nc(values)->tail)) {
			$var($Pair, pair, $cast($Pair, values->head));
			$var($JCTree$JCExpression, valueTree, translate($cast($Attribute, $nc(pair)->snd)));
			args->append($($nc($(this->this$0->Assign($(this->this$0->Ident($cast($Symbol, $nc(pair)->fst))), valueTree)))->setType($nc(valueTree)->type)));
		}
	}
	$var($JCTree, var$0, static_cast<$JCTree*>(this->this$0->Type(compound->type)));
	return this->this$0->Annotation(var$0, $(args->toList()));
}

$JCTree$JCAnnotation* TreeMaker$AnnotationBuilder::visitTypeCompoundInternal($Attribute$TypeCompound* compound) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, args, $new($ListBuffer));
	{
		$var($List, values, $nc(compound)->values);
		for (; $nc(values)->nonEmpty(); $assign(values, $nc(values)->tail)) {
			$var($Pair, pair, $cast($Pair, values->head));
			$var($JCTree$JCExpression, valueTree, translate($cast($Attribute, $nc(pair)->snd)));
			args->append($($nc($(this->this$0->Assign($(this->this$0->Ident($cast($Symbol, $nc(pair)->fst))), valueTree)))->setType($nc(valueTree)->type)));
		}
	}
	$var($JCTree, var$0, static_cast<$JCTree*>(this->this$0->Type(compound->type)));
	return this->this$0->TypeAnnotation(var$0, $(args->toList()));
}

void TreeMaker$AnnotationBuilder::visitArray($Attribute$Array* array) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, elems, $new($ListBuffer));
	for (int32_t i = 0; i < $nc($nc(array)->values)->length; ++i) {
		elems->append($(translate($nc(array->values)->get(i))));
	}
	$var($List, var$0, $List::nil());
	$set(this, result, $nc($(this->this$0->NewArray(nullptr, var$0, $(elems->toList()))))->setType($nc(array)->type));
}

$JCTree$JCExpression* TreeMaker$AnnotationBuilder::translate($Attribute* a) {
	$nc(a)->accept(this);
	return this->result;
}

$JCTree$JCAnnotation* TreeMaker$AnnotationBuilder::translate($Attribute$Compound* a) {
	return visitCompoundInternal(a);
}

$JCTree$JCAnnotation* TreeMaker$AnnotationBuilder::translate($Attribute$TypeCompound* a) {
	return visitTypeCompoundInternal(a);
}

TreeMaker$AnnotationBuilder::TreeMaker$AnnotationBuilder() {
}

$Class* TreeMaker$AnnotationBuilder::load$($String* name, bool initialize) {
	$loadClass(TreeMaker$AnnotationBuilder, name, initialize, &_TreeMaker$AnnotationBuilder_ClassInfo_, allocate$TreeMaker$AnnotationBuilder);
	return class$;
}

$Class* TreeMaker$AnnotationBuilder::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com