#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>

#include <com/sun/source/tree/NewArrayTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NEWARRAY
#undef NEW_ARRAY

using $NewArrayTree = ::com::sun::source::tree::NewArrayTree;
using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $1List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCNewArray_FieldInfo_[] = {
	{"elemtype", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCNewArray, elemtype)},
	{"dims", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCNewArray, dims)},
	{"annotations", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $field(JCTree$JCNewArray, annotations)},
	{"dimAnnotations", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;>;", $PUBLIC, $field(JCTree$JCNewArray, dimAnnotations)},
	{"elems", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCNewArray, elems)},
	{}
};

$MethodInfo _JCTree$JCNewArray_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCNewArray::*)($JCTree$JCExpression*,$1List*,$1List*)>(&JCTree$JCNewArray::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC},
	{"getDimAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;>;", $PUBLIC},
	{"getDimensions", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getInitializers", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getType", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCNewArray_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCNewArray", "com.sun.tools.javac.tree.JCTree", "JCNewArray", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCNewArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCNewArray",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.NewArrayTree",
	_JCTree$JCNewArray_FieldInfo_,
	_JCTree$JCNewArray_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCNewArray_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCNewArray($Class* clazz) {
	return $of($alloc(JCTree$JCNewArray));
}

$String* JCTree$JCNewArray::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCNewArray::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCNewArray::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCNewArray::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCNewArray::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCNewArray::init$($JCTree$JCExpression* elemtype, $1List* dims, $1List* elems) {
	$JCTree$JCExpression::init$();
	$set(this, elemtype, elemtype);
	$set(this, dims, dims);
	$set(this, annotations, $1List::nil());
	$set(this, dimAnnotations, $1List::nil());
	$set(this, elems, elems);
}

void JCTree$JCNewArray::accept($JCTree$Visitor* v) {
	$nc(v)->visitNewArray(this);
}

$Tree$Kind* JCTree$JCNewArray::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::NEW_ARRAY;
}

$Tree* JCTree$JCNewArray::getType() {
	return static_cast<$Tree*>(static_cast<$JCTree*>(static_cast<$JCTree$JCCaseLabel*>(this->elemtype)));
}

$List* JCTree$JCNewArray::getDimensions() {
	return this->dims;
}

$List* JCTree$JCNewArray::getInitializers() {
	return this->elems;
}

$Object* JCTree$JCNewArray::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitNewArray(this, d));
}

$JCTree$Tag* JCTree$JCNewArray::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::NEWARRAY;
}

$List* JCTree$JCNewArray::getAnnotations() {
	return this->annotations;
}

$List* JCTree$JCNewArray::getDimAnnotations() {
	return this->dimAnnotations;
}

JCTree$JCNewArray::JCTree$JCNewArray() {
}

$Class* JCTree$JCNewArray::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCNewArray, name, initialize, &_JCTree$JCNewArray_ClassInfo_, allocate$JCTree$JCNewArray);
	return class$;
}

$Class* JCTree$JCNewArray::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com