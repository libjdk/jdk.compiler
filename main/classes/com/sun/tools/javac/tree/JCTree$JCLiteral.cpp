#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>

#include <com/sun/source/tree/LiteralTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree$1.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef LITERAL

using $LiteralTree = ::com::sun::source::tree::LiteralTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$1 = ::com::sun::tools::javac::tree::JCTree$1;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCLiteral_FieldInfo_[] = {
	{"typetag", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC, $field(JCTree$JCLiteral, typetag)},
	{"value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JCTree$JCLiteral, value)},
	{}
};

$MethodInfo _JCTree$JCLiteral_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/code/TypeTag;Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCLiteral::*)($TypeTag*,Object$*)>(&JCTree$JCLiteral::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCLiteral;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCLiteral_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCLiteral", "com.sun.tools.javac.tree.JCTree", "JCLiteral", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCLiteral_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCLiteral",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.LiteralTree",
	_JCTree$JCLiteral_FieldInfo_,
	_JCTree$JCLiteral_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCLiteral_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCLiteral($Class* clazz) {
	return $of($alloc(JCTree$JCLiteral));
}

$String* JCTree$JCLiteral::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCLiteral::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCLiteral::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCLiteral::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCLiteral::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCLiteral::init$($TypeTag* typetag, Object$* value) {
	$JCTree$JCExpression::init$();
	$set(this, typetag, typetag);
	$set(this, value, value);
}

void JCTree$JCLiteral::accept($JCTree$Visitor* v) {
	$nc(v)->visitLiteral(this);
}

$Tree$Kind* JCTree$JCLiteral::getKind() {
	return $nc(this->typetag)->getKindLiteral();
}

$Object* JCTree$JCLiteral::getValue() {
	$init($JCTree$1);
	{
		int32_t bi = 0;
		int32_t ci = 0;
		char16_t c = 0;
		switch ($nc($JCTree$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc((this->typetag))->ordinal())) {
		case 1:
			{
				bi = $nc(($cast($Integer, this->value)))->intValue();
				return $of($Boolean::valueOf((bi != 0)));
			}
		case 2:
			{
				ci = $nc(($cast($Integer, this->value)))->intValue();
				c = (char16_t)ci;
				if (c != ci) {
					$throwNew($AssertionError, $of("bad value for char literal"_s));
				}
				return $of($Character::valueOf(c));
			}
		default:
			{
				return $of(this->value);
			}
		}
	}
}

$Object* JCTree$JCLiteral::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitLiteral(this, d));
}

JCTree$JCLiteral* JCTree$JCLiteral::setType($Type* type) {
	$JCTree$JCExpression::setType(type);
	return this;
}

$JCTree$Tag* JCTree$JCLiteral::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::LITERAL;
}

JCTree$JCLiteral::JCTree$JCLiteral() {
}

$Class* JCTree$JCLiteral::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCLiteral, name, initialize, &_JCTree$JCLiteral_ClassInfo_, allocate$JCTree$JCLiteral);
	return class$;
}

$Class* JCTree$JCLiteral::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com