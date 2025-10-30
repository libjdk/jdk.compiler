#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BLOCK
#undef NOPOS
#undef STATIC

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $1List = ::com::sun::tools::javac::util::List;
using $Position = ::com::sun::tools::javac::util::Position;
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

$FieldInfo _JCTree$JCBlock_FieldInfo_[] = {
	{"flags", "J", nullptr, $PUBLIC, $field(JCTree$JCBlock, flags)},
	{"stats", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PUBLIC, $field(JCTree$JCBlock, stats)},
	{"endpos", "I", nullptr, $PUBLIC, $field(JCTree$JCBlock, endpos)},
	{}
};

$MethodInfo _JCTree$JCBlock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLcom/sun/tools/javac/util/List;)V", "(JLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCBlock::*)(int64_t,$1List*)>(&JCTree$JCBlock::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getStatements", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"isStatic", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCBlock_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCBlock", "com.sun.tools.javac.tree.JCTree", "JCBlock", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCBlock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCBlock",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.BlockTree",
	_JCTree$JCBlock_FieldInfo_,
	_JCTree$JCBlock_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCBlock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCBlock($Class* clazz) {
	return $of($alloc(JCTree$JCBlock));
}

$String* JCTree$JCBlock::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCBlock::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCBlock::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCBlock::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCBlock::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCBlock::init$(int64_t flags, $1List* stats) {
	$JCTree$JCStatement::init$();
	this->endpos = $Position::NOPOS;
	$set(this, stats, stats);
	this->flags = flags;
}

void JCTree$JCBlock::accept($JCTree$Visitor* v) {
	$nc(v)->visitBlock(this);
}

$Tree$Kind* JCTree$JCBlock::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::BLOCK;
}

$List* JCTree$JCBlock::getStatements() {
	return this->stats;
}

bool JCTree$JCBlock::isStatic() {
	return ((int64_t)(this->flags & (uint64_t)(int64_t)$Flags::STATIC)) != 0;
}

$Object* JCTree$JCBlock::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitBlock(this, d));
}

$JCTree$Tag* JCTree$JCBlock::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::BLOCK;
}

JCTree$JCBlock::JCTree$JCBlock() {
}

$Class* JCTree$JCBlock::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCBlock, name, initialize, &_JCTree$JCBlock_ClassInfo_, allocate$JCTree$JCBlock);
	return class$;
}

$Class* JCTree$JCBlock::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com