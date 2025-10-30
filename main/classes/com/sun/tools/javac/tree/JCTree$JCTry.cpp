#include <com/sun/tools/javac/tree/JCTree$JCTry.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/TryTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TRY

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $TryTree = ::com::sun::source::tree::TryTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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

$FieldInfo _JCTree$JCTry_FieldInfo_[] = {
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC, $field(JCTree$JCTry, body)},
	{"catchers", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;", $PUBLIC, $field(JCTree$JCTry, catchers)},
	{"finalizer", "Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC, $field(JCTree$JCTry, finalizer)},
	{"resources", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC, $field(JCTree$JCTry, resources)},
	{"finallyCanCompleteNormally", "Z", nullptr, $PUBLIC, $field(JCTree$JCTry, finallyCanCompleteNormally)},
	{}
};

$MethodInfo _JCTree$JCTry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", $PROTECTED, $method(static_cast<void(JCTree$JCTry::*)($1List*,$JCTree$JCBlock*,$1List*,$JCTree$JCBlock*)>(&JCTree$JCTry::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBlock", "()Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC},
	{"getCatches", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;", $PUBLIC},
	{"getFinallyBlock", "()Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getResources", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCTry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCTry", "com.sun.tools.javac.tree.JCTree", "JCTry", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCTry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCTry",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.TryTree",
	_JCTree$JCTry_FieldInfo_,
	_JCTree$JCTry_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCTry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCTry($Class* clazz) {
	return $of($alloc(JCTree$JCTry));
}

$String* JCTree$JCTry::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCTry::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCTry::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCTry::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCTry::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCTry::init$($1List* resources, $JCTree$JCBlock* body, $1List* catchers, $JCTree$JCBlock* finalizer) {
	$JCTree$JCStatement::init$();
	$set(this, body, body);
	$set(this, catchers, catchers);
	$set(this, finalizer, finalizer);
	$set(this, resources, resources);
}

void JCTree$JCTry::accept($JCTree$Visitor* v) {
	$nc(v)->visitTry(this);
}

$Tree$Kind* JCTree$JCTry::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::TRY;
}

$BlockTree* JCTree$JCTry::getBlock() {
	return this->body;
}

$List* JCTree$JCTry::getCatches() {
	return this->catchers;
}

$BlockTree* JCTree$JCTry::getFinallyBlock() {
	return this->finalizer;
}

$Object* JCTree$JCTry::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitTry(this, d));
}

$List* JCTree$JCTry::getResources() {
	return this->resources;
}

$JCTree$Tag* JCTree$JCTry::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TRY;
}

JCTree$JCTry::JCTree$JCTry() {
}

$Class* JCTree$JCTry::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCTry, name, initialize, &_JCTree$JCTry_ClassInfo_, allocate$JCTree$JCTry);
	return class$;
}

$Class* JCTree$JCTry::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com