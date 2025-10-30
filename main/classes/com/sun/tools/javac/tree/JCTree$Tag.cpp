#include <com/sun/tools/javac/tree/JCTree$Tag.h>

#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef AND
#undef ANNOTATED_TYPE
#undef ANNOTATION
#undef APPLY
#undef ASSERT
#undef ASSIGN
#undef BINDINGPATTERN
#undef BITAND
#undef BITAND_ASG
#undef BITOR
#undef BITOR_ASG
#undef BITXOR
#undef BITXOR_ASG
#undef BLOCK
#undef BREAK
#undef CASE
#undef CATCH
#undef CLASSDEF
#undef COMPL
#undef CONDEXPR
#undef CONTINUE
#undef DEFAULTCASELABEL
#undef DIV
#undef DIV_ASG
#undef DOLOOP
#undef EQ
#undef ERRONEOUS
#undef EXEC
#undef EXPORTS
#undef FOREACHLOOP
#undef FORLOOP
#undef GE
#undef GT
#undef GUARDPATTERN
#undef IDENT
#undef IF
#undef IMPORT
#undef INDEXED
#undef LABELLED
#undef LAMBDA
#undef LE
#undef LETEXPR
#undef LITERAL
#undef LT
#undef METHODDEF
#undef MINUS
#undef MINUS_ASG
#undef MOD
#undef MODIFIERS
#undef MODULEDEF
#undef MOD_ASG
#undef MUL
#undef MUL_ASG
#undef NE
#undef NEG
#undef NEWARRAY
#undef NEWCLASS
#undef NOT
#undef NO_TAG
#undef NULLCHK
#undef OPENS
#undef OR
#undef PACKAGEDEF
#undef PARENS
#undef PARENTHESIZEDPATTERN
#undef PLUS
#undef PLUS_ASG
#undef POS
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef PROVIDES
#undef REFERENCE
#undef REQUIRES
#undef RETURN
#undef SELECT
#undef SKIP
#undef SL
#undef SL_ASG
#undef SR
#undef SR_ASG
#undef SWITCH
#undef SWITCH_EXPRESSION
#undef SYNCHRONIZED
#undef THROW
#undef TOPLEVEL
#undef TRY
#undef TYPEAPPLY
#undef TYPEARRAY
#undef TYPEBOUNDKIND
#undef TYPECAST
#undef TYPEIDENT
#undef TYPEINTERSECTION
#undef TYPEPARAMETER
#undef TYPETEST
#undef TYPEUNION
#undef TYPE_ANNOTATION
#undef USES
#undef USR
#undef USR_ASG
#undef VARDEF
#undef WHILELOOP
#undef WILDCARD
#undef YIELD

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$Tag_FieldInfo_[] = {
	{"NO_TAG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, NO_TAG)},
	{"TOPLEVEL", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TOPLEVEL)},
	{"PACKAGEDEF", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, PACKAGEDEF)},
	{"IMPORT", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, IMPORT)},
	{"CLASSDEF", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, CLASSDEF)},
	{"METHODDEF", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, METHODDEF)},
	{"VARDEF", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, VARDEF)},
	{"SKIP", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SKIP)},
	{"BLOCK", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BLOCK)},
	{"DOLOOP", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, DOLOOP)},
	{"WHILELOOP", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, WHILELOOP)},
	{"FORLOOP", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, FORLOOP)},
	{"FOREACHLOOP", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, FOREACHLOOP)},
	{"LABELLED", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, LABELLED)},
	{"SWITCH", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SWITCH)},
	{"CASE", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, CASE)},
	{"SWITCH_EXPRESSION", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SWITCH_EXPRESSION)},
	{"SYNCHRONIZED", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SYNCHRONIZED)},
	{"TRY", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TRY)},
	{"CATCH", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, CATCH)},
	{"CONDEXPR", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, CONDEXPR)},
	{"IF", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, IF)},
	{"EXEC", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, EXEC)},
	{"BREAK", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BREAK)},
	{"YIELD", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, YIELD)},
	{"CONTINUE", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, CONTINUE)},
	{"RETURN", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, RETURN)},
	{"THROW", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, THROW)},
	{"ASSERT", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, ASSERT)},
	{"APPLY", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, APPLY)},
	{"NEWCLASS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, NEWCLASS)},
	{"NEWARRAY", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, NEWARRAY)},
	{"LAMBDA", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, LAMBDA)},
	{"PARENS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, PARENS)},
	{"ASSIGN", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, ASSIGN)},
	{"TYPECAST", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPECAST)},
	{"TYPETEST", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPETEST)},
	{"BINDINGPATTERN", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BINDINGPATTERN)},
	{"DEFAULTCASELABEL", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, DEFAULTCASELABEL)},
	{"GUARDPATTERN", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, GUARDPATTERN)},
	{"PARENTHESIZEDPATTERN", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, PARENTHESIZEDPATTERN)},
	{"INDEXED", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, INDEXED)},
	{"SELECT", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SELECT)},
	{"REFERENCE", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, REFERENCE)},
	{"IDENT", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, IDENT)},
	{"LITERAL", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, LITERAL)},
	{"TYPEIDENT", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPEIDENT)},
	{"TYPEARRAY", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPEARRAY)},
	{"TYPEAPPLY", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPEAPPLY)},
	{"TYPEUNION", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPEUNION)},
	{"TYPEINTERSECTION", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPEINTERSECTION)},
	{"TYPEPARAMETER", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPEPARAMETER)},
	{"WILDCARD", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, WILDCARD)},
	{"TYPEBOUNDKIND", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPEBOUNDKIND)},
	{"ANNOTATION", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, ANNOTATION)},
	{"TYPE_ANNOTATION", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, TYPE_ANNOTATION)},
	{"MODIFIERS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, MODIFIERS)},
	{"ANNOTATED_TYPE", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, ANNOTATED_TYPE)},
	{"ERRONEOUS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, ERRONEOUS)},
	{"POS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, POS)},
	{"NEG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, NEG)},
	{"NOT", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, NOT)},
	{"COMPL", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, COMPL)},
	{"PREINC", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, PREINC)},
	{"PREDEC", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, PREDEC)},
	{"POSTINC", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, POSTINC)},
	{"POSTDEC", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, POSTDEC)},
	{"NULLCHK", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, NULLCHK)},
	{"OR", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, OR)},
	{"AND", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, AND)},
	{"BITOR", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BITOR)},
	{"BITXOR", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BITXOR)},
	{"BITAND", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BITAND)},
	{"EQ", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, EQ)},
	{"NE", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, NE)},
	{"LT", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, LT)},
	{"GT", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, GT)},
	{"LE", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, LE)},
	{"GE", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, GE)},
	{"SL", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SL)},
	{"SR", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SR)},
	{"USR", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, USR)},
	{"PLUS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, PLUS)},
	{"MINUS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, MINUS)},
	{"MUL", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, MUL)},
	{"DIV", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, DIV)},
	{"MOD", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, MOD)},
	{"BITOR_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BITOR_ASG)},
	{"BITXOR_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BITXOR_ASG)},
	{"BITAND_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, BITAND_ASG)},
	{"SL_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SL_ASG)},
	{"SR_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, SR_ASG)},
	{"USR_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, USR_ASG)},
	{"PLUS_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, PLUS_ASG)},
	{"MINUS_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, MINUS_ASG)},
	{"MUL_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, MUL_ASG)},
	{"DIV_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, DIV_ASG)},
	{"MOD_ASG", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, MOD_ASG)},
	{"MODULEDEF", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, MODULEDEF)},
	{"EXPORTS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, EXPORTS)},
	{"OPENS", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, OPENS)},
	{"PROVIDES", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, PROVIDES)},
	{"REQUIRES", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, REQUIRES)},
	{"USES", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, USES)},
	{"LETEXPR", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCTree$Tag, LETEXPR)},
	{"$VALUES", "[Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JCTree$Tag, $VALUES)},
	{"noAssignTag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PRIVATE | $FINAL, $field(JCTree$Tag, noAssignTag)},
	{"numberOfOperators", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JCTree$Tag, numberOfOperators)},
	{}
};

$MethodInfo _JCTree$Tag_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$TagArray*(*)()>(&JCTree$Tag::$values))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/tree/JCTree$Tag;)V", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)V", $PRIVATE, $method(static_cast<void(JCTree$Tag::*)($String*,int32_t,JCTree$Tag*)>(&JCTree$Tag::init$))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JCTree$Tag::*)($String*,int32_t)>(&JCTree$Tag::init$))},
	{"getNumberOfOperators", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&JCTree$Tag::getNumberOfOperators))},
	{"isAssignop", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(JCTree$Tag::*)()>(&JCTree$Tag::isAssignop))},
	{"isIncOrDecUnaryOp", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(JCTree$Tag::*)()>(&JCTree$Tag::isIncOrDecUnaryOp))},
	{"isPostUnaryOp", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(JCTree$Tag::*)()>(&JCTree$Tag::isPostUnaryOp))},
	{"noAssignOp", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC, $method(static_cast<JCTree$Tag*(JCTree$Tag::*)()>(&JCTree$Tag::noAssignOp))},
	{"operatorIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(JCTree$Tag::*)()>(&JCTree$Tag::operatorIndex))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JCTree$Tag*(*)($String*)>(&JCTree$Tag::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$TagArray*(*)()>(&JCTree$Tag::values))},
	{}
};

$InnerClassInfo _JCTree$Tag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Tag", "com.sun.tools.javac.tree.JCTree", "Tag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$Tag_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.tree.JCTree$Tag",
	"java.lang.Enum",
	nullptr,
	_JCTree$Tag_FieldInfo_,
	_JCTree$Tag_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/tree/JCTree$Tag;>;",
	nullptr,
	_JCTree$Tag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$Tag($Class* clazz) {
	return $of($alloc(JCTree$Tag));
}

JCTree$Tag* JCTree$Tag::NO_TAG = nullptr;
JCTree$Tag* JCTree$Tag::TOPLEVEL = nullptr;
JCTree$Tag* JCTree$Tag::PACKAGEDEF = nullptr;
JCTree$Tag* JCTree$Tag::IMPORT = nullptr;
JCTree$Tag* JCTree$Tag::CLASSDEF = nullptr;
JCTree$Tag* JCTree$Tag::METHODDEF = nullptr;
JCTree$Tag* JCTree$Tag::VARDEF = nullptr;
JCTree$Tag* JCTree$Tag::SKIP = nullptr;
JCTree$Tag* JCTree$Tag::BLOCK = nullptr;
JCTree$Tag* JCTree$Tag::DOLOOP = nullptr;
JCTree$Tag* JCTree$Tag::WHILELOOP = nullptr;
JCTree$Tag* JCTree$Tag::FORLOOP = nullptr;
JCTree$Tag* JCTree$Tag::FOREACHLOOP = nullptr;
JCTree$Tag* JCTree$Tag::LABELLED = nullptr;
JCTree$Tag* JCTree$Tag::SWITCH = nullptr;
JCTree$Tag* JCTree$Tag::CASE = nullptr;
JCTree$Tag* JCTree$Tag::SWITCH_EXPRESSION = nullptr;
JCTree$Tag* JCTree$Tag::SYNCHRONIZED = nullptr;
JCTree$Tag* JCTree$Tag::TRY = nullptr;
JCTree$Tag* JCTree$Tag::CATCH = nullptr;
JCTree$Tag* JCTree$Tag::CONDEXPR = nullptr;
JCTree$Tag* JCTree$Tag::IF = nullptr;
JCTree$Tag* JCTree$Tag::EXEC = nullptr;
JCTree$Tag* JCTree$Tag::BREAK = nullptr;
JCTree$Tag* JCTree$Tag::YIELD = nullptr;
JCTree$Tag* JCTree$Tag::CONTINUE = nullptr;
JCTree$Tag* JCTree$Tag::RETURN = nullptr;
JCTree$Tag* JCTree$Tag::THROW = nullptr;
JCTree$Tag* JCTree$Tag::ASSERT = nullptr;
JCTree$Tag* JCTree$Tag::APPLY = nullptr;
JCTree$Tag* JCTree$Tag::NEWCLASS = nullptr;
JCTree$Tag* JCTree$Tag::NEWARRAY = nullptr;
JCTree$Tag* JCTree$Tag::LAMBDA = nullptr;
JCTree$Tag* JCTree$Tag::PARENS = nullptr;
JCTree$Tag* JCTree$Tag::ASSIGN = nullptr;
JCTree$Tag* JCTree$Tag::TYPECAST = nullptr;
JCTree$Tag* JCTree$Tag::TYPETEST = nullptr;
JCTree$Tag* JCTree$Tag::BINDINGPATTERN = nullptr;
JCTree$Tag* JCTree$Tag::DEFAULTCASELABEL = nullptr;
JCTree$Tag* JCTree$Tag::GUARDPATTERN = nullptr;
JCTree$Tag* JCTree$Tag::PARENTHESIZEDPATTERN = nullptr;
JCTree$Tag* JCTree$Tag::INDEXED = nullptr;
JCTree$Tag* JCTree$Tag::SELECT = nullptr;
JCTree$Tag* JCTree$Tag::REFERENCE = nullptr;
JCTree$Tag* JCTree$Tag::IDENT = nullptr;
JCTree$Tag* JCTree$Tag::LITERAL = nullptr;
JCTree$Tag* JCTree$Tag::TYPEIDENT = nullptr;
JCTree$Tag* JCTree$Tag::TYPEARRAY = nullptr;
JCTree$Tag* JCTree$Tag::TYPEAPPLY = nullptr;
JCTree$Tag* JCTree$Tag::TYPEUNION = nullptr;
JCTree$Tag* JCTree$Tag::TYPEINTERSECTION = nullptr;
JCTree$Tag* JCTree$Tag::TYPEPARAMETER = nullptr;
JCTree$Tag* JCTree$Tag::WILDCARD = nullptr;
JCTree$Tag* JCTree$Tag::TYPEBOUNDKIND = nullptr;
JCTree$Tag* JCTree$Tag::ANNOTATION = nullptr;
JCTree$Tag* JCTree$Tag::TYPE_ANNOTATION = nullptr;
JCTree$Tag* JCTree$Tag::MODIFIERS = nullptr;
JCTree$Tag* JCTree$Tag::ANNOTATED_TYPE = nullptr;
JCTree$Tag* JCTree$Tag::ERRONEOUS = nullptr;
JCTree$Tag* JCTree$Tag::POS = nullptr;
JCTree$Tag* JCTree$Tag::NEG = nullptr;
JCTree$Tag* JCTree$Tag::NOT = nullptr;
JCTree$Tag* JCTree$Tag::COMPL = nullptr;
JCTree$Tag* JCTree$Tag::PREINC = nullptr;
JCTree$Tag* JCTree$Tag::PREDEC = nullptr;
JCTree$Tag* JCTree$Tag::POSTINC = nullptr;
JCTree$Tag* JCTree$Tag::POSTDEC = nullptr;
JCTree$Tag* JCTree$Tag::NULLCHK = nullptr;
JCTree$Tag* JCTree$Tag::OR = nullptr;
JCTree$Tag* JCTree$Tag::AND = nullptr;
JCTree$Tag* JCTree$Tag::BITOR = nullptr;
JCTree$Tag* JCTree$Tag::BITXOR = nullptr;
JCTree$Tag* JCTree$Tag::BITAND = nullptr;
JCTree$Tag* JCTree$Tag::EQ = nullptr;
JCTree$Tag* JCTree$Tag::NE = nullptr;
JCTree$Tag* JCTree$Tag::LT = nullptr;
JCTree$Tag* JCTree$Tag::GT = nullptr;
JCTree$Tag* JCTree$Tag::LE = nullptr;
JCTree$Tag* JCTree$Tag::GE = nullptr;
JCTree$Tag* JCTree$Tag::SL = nullptr;
JCTree$Tag* JCTree$Tag::SR = nullptr;
JCTree$Tag* JCTree$Tag::USR = nullptr;
JCTree$Tag* JCTree$Tag::PLUS = nullptr;
JCTree$Tag* JCTree$Tag::MINUS = nullptr;
JCTree$Tag* JCTree$Tag::MUL = nullptr;
JCTree$Tag* JCTree$Tag::DIV = nullptr;
JCTree$Tag* JCTree$Tag::MOD = nullptr;
JCTree$Tag* JCTree$Tag::BITOR_ASG = nullptr;
JCTree$Tag* JCTree$Tag::BITXOR_ASG = nullptr;
JCTree$Tag* JCTree$Tag::BITAND_ASG = nullptr;
JCTree$Tag* JCTree$Tag::SL_ASG = nullptr;
JCTree$Tag* JCTree$Tag::SR_ASG = nullptr;
JCTree$Tag* JCTree$Tag::USR_ASG = nullptr;
JCTree$Tag* JCTree$Tag::PLUS_ASG = nullptr;
JCTree$Tag* JCTree$Tag::MINUS_ASG = nullptr;
JCTree$Tag* JCTree$Tag::MUL_ASG = nullptr;
JCTree$Tag* JCTree$Tag::DIV_ASG = nullptr;
JCTree$Tag* JCTree$Tag::MOD_ASG = nullptr;
JCTree$Tag* JCTree$Tag::MODULEDEF = nullptr;
JCTree$Tag* JCTree$Tag::EXPORTS = nullptr;
JCTree$Tag* JCTree$Tag::OPENS = nullptr;
JCTree$Tag* JCTree$Tag::PROVIDES = nullptr;
JCTree$Tag* JCTree$Tag::REQUIRES = nullptr;
JCTree$Tag* JCTree$Tag::USES = nullptr;
JCTree$Tag* JCTree$Tag::LETEXPR = nullptr;
$JCTree$TagArray* JCTree$Tag::$VALUES = nullptr;
int32_t JCTree$Tag::numberOfOperators = 0;

$JCTree$TagArray* JCTree$Tag::$values() {
	$init(JCTree$Tag);
	return $new($JCTree$TagArray, {
		JCTree$Tag::NO_TAG,
		JCTree$Tag::TOPLEVEL,
		JCTree$Tag::PACKAGEDEF,
		JCTree$Tag::IMPORT,
		JCTree$Tag::CLASSDEF,
		JCTree$Tag::METHODDEF,
		JCTree$Tag::VARDEF,
		JCTree$Tag::SKIP,
		JCTree$Tag::BLOCK,
		JCTree$Tag::DOLOOP,
		JCTree$Tag::WHILELOOP,
		JCTree$Tag::FORLOOP,
		JCTree$Tag::FOREACHLOOP,
		JCTree$Tag::LABELLED,
		JCTree$Tag::SWITCH,
		JCTree$Tag::CASE,
		JCTree$Tag::SWITCH_EXPRESSION,
		JCTree$Tag::SYNCHRONIZED,
		JCTree$Tag::TRY,
		JCTree$Tag::CATCH,
		JCTree$Tag::CONDEXPR,
		JCTree$Tag::IF,
		JCTree$Tag::EXEC,
		JCTree$Tag::BREAK,
		JCTree$Tag::YIELD,
		JCTree$Tag::CONTINUE,
		JCTree$Tag::RETURN,
		JCTree$Tag::THROW,
		JCTree$Tag::ASSERT,
		JCTree$Tag::APPLY,
		JCTree$Tag::NEWCLASS,
		JCTree$Tag::NEWARRAY,
		JCTree$Tag::LAMBDA,
		JCTree$Tag::PARENS,
		JCTree$Tag::ASSIGN,
		JCTree$Tag::TYPECAST,
		JCTree$Tag::TYPETEST,
		JCTree$Tag::BINDINGPATTERN,
		JCTree$Tag::DEFAULTCASELABEL,
		JCTree$Tag::GUARDPATTERN,
		JCTree$Tag::PARENTHESIZEDPATTERN,
		JCTree$Tag::INDEXED,
		JCTree$Tag::SELECT,
		JCTree$Tag::REFERENCE,
		JCTree$Tag::IDENT,
		JCTree$Tag::LITERAL,
		JCTree$Tag::TYPEIDENT,
		JCTree$Tag::TYPEARRAY,
		JCTree$Tag::TYPEAPPLY,
		JCTree$Tag::TYPEUNION,
		JCTree$Tag::TYPEINTERSECTION,
		JCTree$Tag::TYPEPARAMETER,
		JCTree$Tag::WILDCARD,
		JCTree$Tag::TYPEBOUNDKIND,
		JCTree$Tag::ANNOTATION,
		JCTree$Tag::TYPE_ANNOTATION,
		JCTree$Tag::MODIFIERS,
		JCTree$Tag::ANNOTATED_TYPE,
		JCTree$Tag::ERRONEOUS,
		JCTree$Tag::POS,
		JCTree$Tag::NEG,
		JCTree$Tag::NOT,
		JCTree$Tag::COMPL,
		JCTree$Tag::PREINC,
		JCTree$Tag::PREDEC,
		JCTree$Tag::POSTINC,
		JCTree$Tag::POSTDEC,
		JCTree$Tag::NULLCHK,
		JCTree$Tag::OR,
		JCTree$Tag::AND,
		JCTree$Tag::BITOR,
		JCTree$Tag::BITXOR,
		JCTree$Tag::BITAND,
		JCTree$Tag::EQ,
		JCTree$Tag::NE,
		JCTree$Tag::LT,
		JCTree$Tag::GT,
		JCTree$Tag::LE,
		JCTree$Tag::GE,
		JCTree$Tag::SL,
		JCTree$Tag::SR,
		JCTree$Tag::USR,
		JCTree$Tag::PLUS,
		JCTree$Tag::MINUS,
		JCTree$Tag::MUL,
		JCTree$Tag::DIV,
		JCTree$Tag::MOD,
		JCTree$Tag::BITOR_ASG,
		JCTree$Tag::BITXOR_ASG,
		JCTree$Tag::BITAND_ASG,
		JCTree$Tag::SL_ASG,
		JCTree$Tag::SR_ASG,
		JCTree$Tag::USR_ASG,
		JCTree$Tag::PLUS_ASG,
		JCTree$Tag::MINUS_ASG,
		JCTree$Tag::MUL_ASG,
		JCTree$Tag::DIV_ASG,
		JCTree$Tag::MOD_ASG,
		JCTree$Tag::MODULEDEF,
		JCTree$Tag::EXPORTS,
		JCTree$Tag::OPENS,
		JCTree$Tag::PROVIDES,
		JCTree$Tag::REQUIRES,
		JCTree$Tag::USES,
		JCTree$Tag::LETEXPR
	});
}

$JCTree$TagArray* JCTree$Tag::values() {
	$init(JCTree$Tag);
	return $cast($JCTree$TagArray, JCTree$Tag::$VALUES->clone());
}

JCTree$Tag* JCTree$Tag::valueOf($String* name) {
	$init(JCTree$Tag);
	return $cast(JCTree$Tag, $Enum::valueOf(JCTree$Tag::class$, name));
}

void JCTree$Tag::init$($String* $enum$name, int32_t $enum$ordinal, JCTree$Tag* noAssignTag) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, noAssignTag, noAssignTag);
}

void JCTree$Tag::init$($String* $enum$name, int32_t $enum$ordinal) {
	JCTree$Tag::init$($enum$name, $enum$ordinal, nullptr);
}

int32_t JCTree$Tag::getNumberOfOperators() {
	$init(JCTree$Tag);
	return JCTree$Tag::numberOfOperators;
}

JCTree$Tag* JCTree$Tag::noAssignOp() {
	if (this->noAssignTag != nullptr) {
		return this->noAssignTag;
	}
	$throwNew($AssertionError, $of("noAssignOp() method is not available for non assignment tags"_s));
}

bool JCTree$Tag::isPostUnaryOp() {
	return (this == JCTree$Tag::POSTINC || this == JCTree$Tag::POSTDEC);
}

bool JCTree$Tag::isIncOrDecUnaryOp() {
	return (this == JCTree$Tag::PREINC || this == JCTree$Tag::PREDEC || this == JCTree$Tag::POSTINC || this == JCTree$Tag::POSTDEC);
}

bool JCTree$Tag::isAssignop() {
	return this->noAssignTag != nullptr;
}

int32_t JCTree$Tag::operatorIndex() {
	int32_t var$0 = this->ordinal();
	return (var$0 - JCTree$Tag::POS->ordinal());
}

void clinit$JCTree$Tag($Class* class$) {
	$assignStatic(JCTree$Tag::NO_TAG, $new(JCTree$Tag, "NO_TAG"_s, 0));
	$assignStatic(JCTree$Tag::TOPLEVEL, $new(JCTree$Tag, "TOPLEVEL"_s, 1));
	$assignStatic(JCTree$Tag::PACKAGEDEF, $new(JCTree$Tag, "PACKAGEDEF"_s, 2));
	$assignStatic(JCTree$Tag::IMPORT, $new(JCTree$Tag, "IMPORT"_s, 3));
	$assignStatic(JCTree$Tag::CLASSDEF, $new(JCTree$Tag, "CLASSDEF"_s, 4));
	$assignStatic(JCTree$Tag::METHODDEF, $new(JCTree$Tag, "METHODDEF"_s, 5));
	$assignStatic(JCTree$Tag::VARDEF, $new(JCTree$Tag, "VARDEF"_s, 6));
	$assignStatic(JCTree$Tag::SKIP, $new(JCTree$Tag, "SKIP"_s, 7));
	$assignStatic(JCTree$Tag::BLOCK, $new(JCTree$Tag, "BLOCK"_s, 8));
	$assignStatic(JCTree$Tag::DOLOOP, $new(JCTree$Tag, "DOLOOP"_s, 9));
	$assignStatic(JCTree$Tag::WHILELOOP, $new(JCTree$Tag, "WHILELOOP"_s, 10));
	$assignStatic(JCTree$Tag::FORLOOP, $new(JCTree$Tag, "FORLOOP"_s, 11));
	$assignStatic(JCTree$Tag::FOREACHLOOP, $new(JCTree$Tag, "FOREACHLOOP"_s, 12));
	$assignStatic(JCTree$Tag::LABELLED, $new(JCTree$Tag, "LABELLED"_s, 13));
	$assignStatic(JCTree$Tag::SWITCH, $new(JCTree$Tag, "SWITCH"_s, 14));
	$assignStatic(JCTree$Tag::CASE, $new(JCTree$Tag, "CASE"_s, 15));
	$assignStatic(JCTree$Tag::SWITCH_EXPRESSION, $new(JCTree$Tag, "SWITCH_EXPRESSION"_s, 16));
	$assignStatic(JCTree$Tag::SYNCHRONIZED, $new(JCTree$Tag, "SYNCHRONIZED"_s, 17));
	$assignStatic(JCTree$Tag::TRY, $new(JCTree$Tag, "TRY"_s, 18));
	$assignStatic(JCTree$Tag::CATCH, $new(JCTree$Tag, "CATCH"_s, 19));
	$assignStatic(JCTree$Tag::CONDEXPR, $new(JCTree$Tag, "CONDEXPR"_s, 20));
	$assignStatic(JCTree$Tag::IF, $new(JCTree$Tag, "IF"_s, 21));
	$assignStatic(JCTree$Tag::EXEC, $new(JCTree$Tag, "EXEC"_s, 22));
	$assignStatic(JCTree$Tag::BREAK, $new(JCTree$Tag, "BREAK"_s, 23));
	$assignStatic(JCTree$Tag::YIELD, $new(JCTree$Tag, "YIELD"_s, 24));
	$assignStatic(JCTree$Tag::CONTINUE, $new(JCTree$Tag, "CONTINUE"_s, 25));
	$assignStatic(JCTree$Tag::RETURN, $new(JCTree$Tag, "RETURN"_s, 26));
	$assignStatic(JCTree$Tag::THROW, $new(JCTree$Tag, "THROW"_s, 27));
	$assignStatic(JCTree$Tag::ASSERT, $new(JCTree$Tag, "ASSERT"_s, 28));
	$assignStatic(JCTree$Tag::APPLY, $new(JCTree$Tag, "APPLY"_s, 29));
	$assignStatic(JCTree$Tag::NEWCLASS, $new(JCTree$Tag, "NEWCLASS"_s, 30));
	$assignStatic(JCTree$Tag::NEWARRAY, $new(JCTree$Tag, "NEWARRAY"_s, 31));
	$assignStatic(JCTree$Tag::LAMBDA, $new(JCTree$Tag, "LAMBDA"_s, 32));
	$assignStatic(JCTree$Tag::PARENS, $new(JCTree$Tag, "PARENS"_s, 33));
	$assignStatic(JCTree$Tag::ASSIGN, $new(JCTree$Tag, "ASSIGN"_s, 34));
	$assignStatic(JCTree$Tag::TYPECAST, $new(JCTree$Tag, "TYPECAST"_s, 35));
	$assignStatic(JCTree$Tag::TYPETEST, $new(JCTree$Tag, "TYPETEST"_s, 36));
	$assignStatic(JCTree$Tag::BINDINGPATTERN, $new(JCTree$Tag, "BINDINGPATTERN"_s, 37));
	$assignStatic(JCTree$Tag::DEFAULTCASELABEL, $new(JCTree$Tag, "DEFAULTCASELABEL"_s, 38));
	$assignStatic(JCTree$Tag::GUARDPATTERN, $new(JCTree$Tag, "GUARDPATTERN"_s, 39));
	$assignStatic(JCTree$Tag::PARENTHESIZEDPATTERN, $new(JCTree$Tag, "PARENTHESIZEDPATTERN"_s, 40));
	$assignStatic(JCTree$Tag::INDEXED, $new(JCTree$Tag, "INDEXED"_s, 41));
	$assignStatic(JCTree$Tag::SELECT, $new(JCTree$Tag, "SELECT"_s, 42));
	$assignStatic(JCTree$Tag::REFERENCE, $new(JCTree$Tag, "REFERENCE"_s, 43));
	$assignStatic(JCTree$Tag::IDENT, $new(JCTree$Tag, "IDENT"_s, 44));
	$assignStatic(JCTree$Tag::LITERAL, $new(JCTree$Tag, "LITERAL"_s, 45));
	$assignStatic(JCTree$Tag::TYPEIDENT, $new(JCTree$Tag, "TYPEIDENT"_s, 46));
	$assignStatic(JCTree$Tag::TYPEARRAY, $new(JCTree$Tag, "TYPEARRAY"_s, 47));
	$assignStatic(JCTree$Tag::TYPEAPPLY, $new(JCTree$Tag, "TYPEAPPLY"_s, 48));
	$assignStatic(JCTree$Tag::TYPEUNION, $new(JCTree$Tag, "TYPEUNION"_s, 49));
	$assignStatic(JCTree$Tag::TYPEINTERSECTION, $new(JCTree$Tag, "TYPEINTERSECTION"_s, 50));
	$assignStatic(JCTree$Tag::TYPEPARAMETER, $new(JCTree$Tag, "TYPEPARAMETER"_s, 51));
	$assignStatic(JCTree$Tag::WILDCARD, $new(JCTree$Tag, "WILDCARD"_s, 52));
	$assignStatic(JCTree$Tag::TYPEBOUNDKIND, $new(JCTree$Tag, "TYPEBOUNDKIND"_s, 53));
	$assignStatic(JCTree$Tag::ANNOTATION, $new(JCTree$Tag, "ANNOTATION"_s, 54));
	$assignStatic(JCTree$Tag::TYPE_ANNOTATION, $new(JCTree$Tag, "TYPE_ANNOTATION"_s, 55));
	$assignStatic(JCTree$Tag::MODIFIERS, $new(JCTree$Tag, "MODIFIERS"_s, 56));
	$assignStatic(JCTree$Tag::ANNOTATED_TYPE, $new(JCTree$Tag, "ANNOTATED_TYPE"_s, 57));
	$assignStatic(JCTree$Tag::ERRONEOUS, $new(JCTree$Tag, "ERRONEOUS"_s, 58));
	$assignStatic(JCTree$Tag::POS, $new(JCTree$Tag, "POS"_s, 59));
	$assignStatic(JCTree$Tag::NEG, $new(JCTree$Tag, "NEG"_s, 60));
	$assignStatic(JCTree$Tag::NOT, $new(JCTree$Tag, "NOT"_s, 61));
	$assignStatic(JCTree$Tag::COMPL, $new(JCTree$Tag, "COMPL"_s, 62));
	$assignStatic(JCTree$Tag::PREINC, $new(JCTree$Tag, "PREINC"_s, 63));
	$assignStatic(JCTree$Tag::PREDEC, $new(JCTree$Tag, "PREDEC"_s, 64));
	$assignStatic(JCTree$Tag::POSTINC, $new(JCTree$Tag, "POSTINC"_s, 65));
	$assignStatic(JCTree$Tag::POSTDEC, $new(JCTree$Tag, "POSTDEC"_s, 66));
	$assignStatic(JCTree$Tag::NULLCHK, $new(JCTree$Tag, "NULLCHK"_s, 67));
	$assignStatic(JCTree$Tag::OR, $new(JCTree$Tag, "OR"_s, 68));
	$assignStatic(JCTree$Tag::AND, $new(JCTree$Tag, "AND"_s, 69));
	$assignStatic(JCTree$Tag::BITOR, $new(JCTree$Tag, "BITOR"_s, 70));
	$assignStatic(JCTree$Tag::BITXOR, $new(JCTree$Tag, "BITXOR"_s, 71));
	$assignStatic(JCTree$Tag::BITAND, $new(JCTree$Tag, "BITAND"_s, 72));
	$assignStatic(JCTree$Tag::EQ, $new(JCTree$Tag, "EQ"_s, 73));
	$assignStatic(JCTree$Tag::NE, $new(JCTree$Tag, "NE"_s, 74));
	$assignStatic(JCTree$Tag::LT, $new(JCTree$Tag, "LT"_s, 75));
	$assignStatic(JCTree$Tag::GT, $new(JCTree$Tag, "GT"_s, 76));
	$assignStatic(JCTree$Tag::LE, $new(JCTree$Tag, "LE"_s, 77));
	$assignStatic(JCTree$Tag::GE, $new(JCTree$Tag, "GE"_s, 78));
	$assignStatic(JCTree$Tag::SL, $new(JCTree$Tag, "SL"_s, 79));
	$assignStatic(JCTree$Tag::SR, $new(JCTree$Tag, "SR"_s, 80));
	$assignStatic(JCTree$Tag::USR, $new(JCTree$Tag, "USR"_s, 81));
	$assignStatic(JCTree$Tag::PLUS, $new(JCTree$Tag, "PLUS"_s, 82));
	$assignStatic(JCTree$Tag::MINUS, $new(JCTree$Tag, "MINUS"_s, 83));
	$assignStatic(JCTree$Tag::MUL, $new(JCTree$Tag, "MUL"_s, 84));
	$assignStatic(JCTree$Tag::DIV, $new(JCTree$Tag, "DIV"_s, 85));
	$assignStatic(JCTree$Tag::MOD, $new(JCTree$Tag, "MOD"_s, 86));
	$assignStatic(JCTree$Tag::BITOR_ASG, $new(JCTree$Tag, "BITOR_ASG"_s, 87, JCTree$Tag::BITOR));
	$assignStatic(JCTree$Tag::BITXOR_ASG, $new(JCTree$Tag, "BITXOR_ASG"_s, 88, JCTree$Tag::BITXOR));
	$assignStatic(JCTree$Tag::BITAND_ASG, $new(JCTree$Tag, "BITAND_ASG"_s, 89, JCTree$Tag::BITAND));
	$assignStatic(JCTree$Tag::SL_ASG, $new(JCTree$Tag, "SL_ASG"_s, 90, JCTree$Tag::SL));
	$assignStatic(JCTree$Tag::SR_ASG, $new(JCTree$Tag, "SR_ASG"_s, 91, JCTree$Tag::SR));
	$assignStatic(JCTree$Tag::USR_ASG, $new(JCTree$Tag, "USR_ASG"_s, 92, JCTree$Tag::USR));
	$assignStatic(JCTree$Tag::PLUS_ASG, $new(JCTree$Tag, "PLUS_ASG"_s, 93, JCTree$Tag::PLUS));
	$assignStatic(JCTree$Tag::MINUS_ASG, $new(JCTree$Tag, "MINUS_ASG"_s, 94, JCTree$Tag::MINUS));
	$assignStatic(JCTree$Tag::MUL_ASG, $new(JCTree$Tag, "MUL_ASG"_s, 95, JCTree$Tag::MUL));
	$assignStatic(JCTree$Tag::DIV_ASG, $new(JCTree$Tag, "DIV_ASG"_s, 96, JCTree$Tag::DIV));
	$assignStatic(JCTree$Tag::MOD_ASG, $new(JCTree$Tag, "MOD_ASG"_s, 97, JCTree$Tag::MOD));
	$assignStatic(JCTree$Tag::MODULEDEF, $new(JCTree$Tag, "MODULEDEF"_s, 98));
	$assignStatic(JCTree$Tag::EXPORTS, $new(JCTree$Tag, "EXPORTS"_s, 99));
	$assignStatic(JCTree$Tag::OPENS, $new(JCTree$Tag, "OPENS"_s, 100));
	$assignStatic(JCTree$Tag::PROVIDES, $new(JCTree$Tag, "PROVIDES"_s, 101));
	$assignStatic(JCTree$Tag::REQUIRES, $new(JCTree$Tag, "REQUIRES"_s, 102));
	$assignStatic(JCTree$Tag::USES, $new(JCTree$Tag, "USES"_s, 103));
	$assignStatic(JCTree$Tag::LETEXPR, $new(JCTree$Tag, "LETEXPR"_s, 104));
	$assignStatic(JCTree$Tag::$VALUES, JCTree$Tag::$values());
	int32_t var$0 = JCTree$Tag::MOD->ordinal();
	JCTree$Tag::numberOfOperators = var$0 - JCTree$Tag::POS->ordinal() + 1;
}

JCTree$Tag::JCTree$Tag() {
}

$Class* JCTree$Tag::load$($String* name, bool initialize) {
	$loadClass(JCTree$Tag, name, initialize, &_JCTree$Tag_ClassInfo_, clinit$JCTree$Tag, allocate$JCTree$Tag);
	return class$;
}

$Class* JCTree$Tag::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com