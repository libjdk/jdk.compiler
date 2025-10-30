#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>

#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MODIFIERS

using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $1List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCModifiers_FieldInfo_[] = {
	{"flags", "J", nullptr, $PUBLIC, $field(JCTree$JCModifiers, flags)},
	{"annotations", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $field(JCTree$JCModifiers, annotations)},
	{}
};

$MethodInfo _JCTree$JCModifiers_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLcom/sun/tools/javac/util/List;)V", "(JLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCModifiers::*)(int64_t,$1List*)>(&JCTree$JCModifiers::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC},
	{"getFlags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCModifiers_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCModifiers", "com.sun.tools.javac.tree.JCTree", "JCModifiers", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$JCModifiers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCModifiers",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.ModifiersTree",
	_JCTree$JCModifiers_FieldInfo_,
	_JCTree$JCModifiers_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCModifiers_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCModifiers($Class* clazz) {
	return $of($alloc(JCTree$JCModifiers));
}

$String* JCTree$JCModifiers::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCModifiers::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCModifiers::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCModifiers::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCModifiers::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCModifiers::init$(int64_t flags, $1List* annotations) {
	$JCTree::init$();
	this->flags = flags;
	$set(this, annotations, annotations);
}

void JCTree$JCModifiers::accept($JCTree$Visitor* v) {
	$nc(v)->visitModifiers(this);
}

$Tree$Kind* JCTree$JCModifiers::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::MODIFIERS;
}

$Set* JCTree$JCModifiers::getFlags() {
	return $Flags::asModifierSet(this->flags);
}

$List* JCTree$JCModifiers::getAnnotations() {
	return this->annotations;
}

$Object* JCTree$JCModifiers::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitModifiers(this, d));
}

$JCTree$Tag* JCTree$JCModifiers::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::MODIFIERS;
}

JCTree$JCModifiers::JCTree$JCModifiers() {
}

$Class* JCTree$JCModifiers::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCModifiers, name, initialize, &_JCTree$JCModifiers_ClassInfo_, allocate$JCTree$JCModifiers);
	return class$;
}

$Class* JCTree$JCModifiers::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com