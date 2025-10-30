#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>

#include <com/sun/source/tree/ParenthesizedPatternTree.h>
#include <com/sun/source/tree/PatternTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef PARENTHESIZEDPATTERN
#undef PARENTHESIZED_PATTERN

using $ParenthesizedPatternTree = ::com::sun::source::tree::ParenthesizedPatternTree;
using $PatternTree = ::com::sun::source::tree::PatternTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCParenthesizedPattern_FieldInfo_[] = {
	{"pattern", "Lcom/sun/tools/javac/tree/JCTree$JCPattern;", nullptr, $PUBLIC, $field(JCTree$JCParenthesizedPattern, pattern)},
	{}
};

$MethodInfo _JCTree$JCParenthesizedPattern_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCPattern;)V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCParenthesizedPattern::*)($JCTree$JCPattern*)>(&JCTree$JCParenthesizedPattern::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getPattern", "()Lcom/sun/source/tree/PatternTree;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCParenthesizedPattern_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCParenthesizedPattern", "com.sun.tools.javac.tree.JCTree", "JCParenthesizedPattern", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPattern", "com.sun.tools.javac.tree.JCTree", "JCPattern", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCParenthesizedPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCParenthesizedPattern",
	"com.sun.tools.javac.tree.JCTree$JCPattern",
	"com.sun.source.tree.ParenthesizedPatternTree",
	_JCTree$JCParenthesizedPattern_FieldInfo_,
	_JCTree$JCParenthesizedPattern_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCParenthesizedPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCParenthesizedPattern($Class* clazz) {
	return $of($alloc(JCTree$JCParenthesizedPattern));
}

$String* JCTree$JCParenthesizedPattern::toString() {
	 return this->$JCTree$JCPattern::toString();
}

$Object* JCTree$JCParenthesizedPattern::clone() {
	 return this->$JCTree$JCPattern::clone();
}

int32_t JCTree$JCParenthesizedPattern::hashCode() {
	 return this->$JCTree$JCPattern::hashCode();
}

bool JCTree$JCParenthesizedPattern::equals(Object$* arg0) {
	 return this->$JCTree$JCPattern::equals(arg0);
}

void JCTree$JCParenthesizedPattern::finalize() {
	this->$JCTree$JCPattern::finalize();
}

void JCTree$JCParenthesizedPattern::init$($JCTree$JCPattern* pattern) {
	$JCTree$JCPattern::init$();
	$set(this, pattern, pattern);
}

$PatternTree* JCTree$JCParenthesizedPattern::getPattern() {
	return this->pattern;
}

void JCTree$JCParenthesizedPattern::accept($JCTree$Visitor* v) {
	$nc(v)->visitParenthesizedPattern(this);
}

$Tree$Kind* JCTree$JCParenthesizedPattern::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::PARENTHESIZED_PATTERN;
}

$Object* JCTree$JCParenthesizedPattern::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitParenthesizedPattern(this, d));
}

$JCTree$Tag* JCTree$JCParenthesizedPattern::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::PARENTHESIZEDPATTERN;
}

JCTree$JCParenthesizedPattern::JCTree$JCParenthesizedPattern() {
}

$Class* JCTree$JCParenthesizedPattern::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCParenthesizedPattern, name, initialize, &_JCTree$JCParenthesizedPattern_ClassInfo_, allocate$JCTree$JCParenthesizedPattern);
	return class$;
}

$Class* JCTree$JCParenthesizedPattern::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com