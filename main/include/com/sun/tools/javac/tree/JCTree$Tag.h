#ifndef _com_sun_tools_javac_tree_JCTree$Tag_h_
#define _com_sun_tools_javac_tree_JCTree$Tag_h_
//$ class com.sun.tools.javac.tree.JCTree$Tag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AND")
#undef AND
#pragma push_macro("ANNOTATED_TYPE")
#undef ANNOTATED_TYPE
#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("APPLY")
#undef APPLY
#pragma push_macro("ASSERT")
#undef ASSERT
#pragma push_macro("ASSIGN")
#undef ASSIGN
#pragma push_macro("BINDINGPATTERN")
#undef BINDINGPATTERN
#pragma push_macro("BITAND")
#undef BITAND
#pragma push_macro("BITAND_ASG")
#undef BITAND_ASG
#pragma push_macro("BITOR")
#undef BITOR
#pragma push_macro("BITOR_ASG")
#undef BITOR_ASG
#pragma push_macro("BITXOR")
#undef BITXOR
#pragma push_macro("BITXOR_ASG")
#undef BITXOR_ASG
#pragma push_macro("BLOCK")
#undef BLOCK
#pragma push_macro("BREAK")
#undef BREAK
#pragma push_macro("CASE")
#undef CASE
#pragma push_macro("CATCH")
#undef CATCH
#pragma push_macro("CLASSDEF")
#undef CLASSDEF
#pragma push_macro("COMPL")
#undef COMPL
#pragma push_macro("CONDEXPR")
#undef CONDEXPR
#pragma push_macro("CONTINUE")
#undef CONTINUE
#pragma push_macro("DEFAULTCASELABEL")
#undef DEFAULTCASELABEL
#pragma push_macro("DIV")
#undef DIV
#pragma push_macro("DIV_ASG")
#undef DIV_ASG
#pragma push_macro("DOLOOP")
#undef DOLOOP
#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("ERRONEOUS")
#undef ERRONEOUS
#pragma push_macro("EXEC")
#undef EXEC
#pragma push_macro("EXPORTS")
#undef EXPORTS
#pragma push_macro("FOREACHLOOP")
#undef FOREACHLOOP
#pragma push_macro("FORLOOP")
#undef FORLOOP
#pragma push_macro("GE")
#undef GE
#pragma push_macro("GT")
#undef GT
#pragma push_macro("GUARDPATTERN")
#undef GUARDPATTERN
#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("IF")
#undef IF
#pragma push_macro("IMPORT")
#undef IMPORT
#pragma push_macro("INDEXED")
#undef INDEXED
#pragma push_macro("LABELLED")
#undef LABELLED
#pragma push_macro("LAMBDA")
#undef LAMBDA
#pragma push_macro("LE")
#undef LE
#pragma push_macro("LETEXPR")
#undef LETEXPR
#pragma push_macro("LITERAL")
#undef LITERAL
#pragma push_macro("LT")
#undef LT
#pragma push_macro("METHODDEF")
#undef METHODDEF
#pragma push_macro("MINUS")
#undef MINUS
#pragma push_macro("MINUS_ASG")
#undef MINUS_ASG
#pragma push_macro("MOD")
#undef MOD
#pragma push_macro("MODIFIERS")
#undef MODIFIERS
#pragma push_macro("MODULEDEF")
#undef MODULEDEF
#pragma push_macro("MOD_ASG")
#undef MOD_ASG
#pragma push_macro("MUL")
#undef MUL
#pragma push_macro("MUL_ASG")
#undef MUL_ASG
#pragma push_macro("NE")
#undef NE
#pragma push_macro("NEG")
#undef NEG
#pragma push_macro("NEWARRAY")
#undef NEWARRAY
#pragma push_macro("NEWCLASS")
#undef NEWCLASS
#pragma push_macro("NOT")
#undef NOT
#pragma push_macro("NO_TAG")
#undef NO_TAG
#pragma push_macro("NULLCHK")
#undef NULLCHK
#pragma push_macro("OPENS")
#undef OPENS
#pragma push_macro("OR")
#undef OR
#pragma push_macro("PACKAGEDEF")
#undef PACKAGEDEF
#pragma push_macro("PARENS")
#undef PARENS
#pragma push_macro("PARENTHESIZEDPATTERN")
#undef PARENTHESIZEDPATTERN
#pragma push_macro("PLUS")
#undef PLUS
#pragma push_macro("PLUS_ASG")
#undef PLUS_ASG
#pragma push_macro("POS")
#undef POS
#pragma push_macro("POSTDEC")
#undef POSTDEC
#pragma push_macro("POSTINC")
#undef POSTINC
#pragma push_macro("PREDEC")
#undef PREDEC
#pragma push_macro("PREINC")
#undef PREINC
#pragma push_macro("PROVIDES")
#undef PROVIDES
#pragma push_macro("REFERENCE")
#undef REFERENCE
#pragma push_macro("REQUIRES")
#undef REQUIRES
#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("SELECT")
#undef SELECT
#pragma push_macro("SKIP")
#undef SKIP
#pragma push_macro("SL")
#undef SL
#pragma push_macro("SL_ASG")
#undef SL_ASG
#pragma push_macro("SR")
#undef SR
#pragma push_macro("SR_ASG")
#undef SR_ASG
#pragma push_macro("SWITCH")
#undef SWITCH
#pragma push_macro("SWITCH_EXPRESSION")
#undef SWITCH_EXPRESSION
#pragma push_macro("SYNCHRONIZED")
#undef SYNCHRONIZED
#pragma push_macro("THROW")
#undef THROW
#pragma push_macro("TOPLEVEL")
#undef TOPLEVEL
#pragma push_macro("TRY")
#undef TRY
#pragma push_macro("TYPEAPPLY")
#undef TYPEAPPLY
#pragma push_macro("TYPEARRAY")
#undef TYPEARRAY
#pragma push_macro("TYPEBOUNDKIND")
#undef TYPEBOUNDKIND
#pragma push_macro("TYPECAST")
#undef TYPECAST
#pragma push_macro("TYPEIDENT")
#undef TYPEIDENT
#pragma push_macro("TYPEINTERSECTION")
#undef TYPEINTERSECTION
#pragma push_macro("TYPEPARAMETER")
#undef TYPEPARAMETER
#pragma push_macro("TYPETEST")
#undef TYPETEST
#pragma push_macro("TYPEUNION")
#undef TYPEUNION
#pragma push_macro("TYPE_ANNOTATION")
#undef TYPE_ANNOTATION
#pragma push_macro("USES")
#undef USES
#pragma push_macro("USR")
#undef USR
#pragma push_macro("USR_ASG")
#undef USR_ASG
#pragma push_macro("VARDEF")
#undef VARDEF
#pragma push_macro("WHILELOOP")
#undef WHILELOOP
#pragma push_macro("WILDCARD")
#undef WILDCARD
#pragma push_macro("YIELD")
#undef YIELD

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$Tag : public ::java::lang::Enum {
	$class(JCTree$Tag, 0, ::java::lang::Enum)
public:
	JCTree$Tag();
	static $Array<::com::sun::tools::javac::tree::JCTree$Tag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::tree::JCTree$Tag* noAssignTag);
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static int32_t getNumberOfOperators();
	virtual bool isAssignop();
	virtual bool isIncOrDecUnaryOp();
	virtual bool isPostUnaryOp();
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* noAssignOp();
	virtual int32_t operatorIndex();
	static ::com::sun::tools::javac::tree::JCTree$Tag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::tree::JCTree$Tag>* values();
	static ::com::sun::tools::javac::tree::JCTree$Tag* NO_TAG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TOPLEVEL;
	static ::com::sun::tools::javac::tree::JCTree$Tag* PACKAGEDEF;
	static ::com::sun::tools::javac::tree::JCTree$Tag* IMPORT;
	static ::com::sun::tools::javac::tree::JCTree$Tag* CLASSDEF;
	static ::com::sun::tools::javac::tree::JCTree$Tag* METHODDEF;
	static ::com::sun::tools::javac::tree::JCTree$Tag* VARDEF;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SKIP;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BLOCK;
	static ::com::sun::tools::javac::tree::JCTree$Tag* DOLOOP;
	static ::com::sun::tools::javac::tree::JCTree$Tag* WHILELOOP;
	static ::com::sun::tools::javac::tree::JCTree$Tag* FORLOOP;
	static ::com::sun::tools::javac::tree::JCTree$Tag* FOREACHLOOP;
	static ::com::sun::tools::javac::tree::JCTree$Tag* LABELLED;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SWITCH;
	static ::com::sun::tools::javac::tree::JCTree$Tag* CASE;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SWITCH_EXPRESSION;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SYNCHRONIZED;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TRY;
	static ::com::sun::tools::javac::tree::JCTree$Tag* CATCH;
	static ::com::sun::tools::javac::tree::JCTree$Tag* CONDEXPR;
	static ::com::sun::tools::javac::tree::JCTree$Tag* IF;
	static ::com::sun::tools::javac::tree::JCTree$Tag* EXEC;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BREAK;
	static ::com::sun::tools::javac::tree::JCTree$Tag* YIELD;
	static ::com::sun::tools::javac::tree::JCTree$Tag* CONTINUE;
	static ::com::sun::tools::javac::tree::JCTree$Tag* RETURN;
	static ::com::sun::tools::javac::tree::JCTree$Tag* THROW;
	static ::com::sun::tools::javac::tree::JCTree$Tag* ASSERT;
	static ::com::sun::tools::javac::tree::JCTree$Tag* APPLY;
	static ::com::sun::tools::javac::tree::JCTree$Tag* NEWCLASS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* NEWARRAY;
	static ::com::sun::tools::javac::tree::JCTree$Tag* LAMBDA;
	static ::com::sun::tools::javac::tree::JCTree$Tag* PARENS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* ASSIGN;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPECAST;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPETEST;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BINDINGPATTERN;
	static ::com::sun::tools::javac::tree::JCTree$Tag* DEFAULTCASELABEL;
	static ::com::sun::tools::javac::tree::JCTree$Tag* GUARDPATTERN;
	static ::com::sun::tools::javac::tree::JCTree$Tag* PARENTHESIZEDPATTERN;
	static ::com::sun::tools::javac::tree::JCTree$Tag* INDEXED;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SELECT;
	static ::com::sun::tools::javac::tree::JCTree$Tag* REFERENCE;
	static ::com::sun::tools::javac::tree::JCTree$Tag* IDENT;
	static ::com::sun::tools::javac::tree::JCTree$Tag* LITERAL;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPEIDENT;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPEARRAY;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPEAPPLY;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPEUNION;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPEINTERSECTION;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPEPARAMETER;
	static ::com::sun::tools::javac::tree::JCTree$Tag* WILDCARD;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPEBOUNDKIND;
	static ::com::sun::tools::javac::tree::JCTree$Tag* ANNOTATION;
	static ::com::sun::tools::javac::tree::JCTree$Tag* TYPE_ANNOTATION;
	static ::com::sun::tools::javac::tree::JCTree$Tag* MODIFIERS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* ANNOTATED_TYPE;
	static ::com::sun::tools::javac::tree::JCTree$Tag* ERRONEOUS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* POS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* NEG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* NOT;
	static ::com::sun::tools::javac::tree::JCTree$Tag* COMPL;
	static ::com::sun::tools::javac::tree::JCTree$Tag* PREINC;
	static ::com::sun::tools::javac::tree::JCTree$Tag* PREDEC;
	static ::com::sun::tools::javac::tree::JCTree$Tag* POSTINC;
	static ::com::sun::tools::javac::tree::JCTree$Tag* POSTDEC;
	static ::com::sun::tools::javac::tree::JCTree$Tag* NULLCHK;
	static ::com::sun::tools::javac::tree::JCTree$Tag* OR;
	static ::com::sun::tools::javac::tree::JCTree$Tag* AND;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BITOR;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BITXOR;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BITAND;
	static ::com::sun::tools::javac::tree::JCTree$Tag* EQ;
	static ::com::sun::tools::javac::tree::JCTree$Tag* NE;
	static ::com::sun::tools::javac::tree::JCTree$Tag* LT;
	static ::com::sun::tools::javac::tree::JCTree$Tag* GT;
	static ::com::sun::tools::javac::tree::JCTree$Tag* LE;
	static ::com::sun::tools::javac::tree::JCTree$Tag* GE;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SL;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SR;
	static ::com::sun::tools::javac::tree::JCTree$Tag* USR;
	static ::com::sun::tools::javac::tree::JCTree$Tag* PLUS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* MINUS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* MUL;
	static ::com::sun::tools::javac::tree::JCTree$Tag* DIV;
	static ::com::sun::tools::javac::tree::JCTree$Tag* MOD;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BITOR_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BITXOR_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* BITAND_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SL_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* SR_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* USR_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* PLUS_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* MINUS_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* MUL_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* DIV_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* MOD_ASG;
	static ::com::sun::tools::javac::tree::JCTree$Tag* MODULEDEF;
	static ::com::sun::tools::javac::tree::JCTree$Tag* EXPORTS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* OPENS;
	static ::com::sun::tools::javac::tree::JCTree$Tag* PROVIDES;
	static ::com::sun::tools::javac::tree::JCTree$Tag* REQUIRES;
	static ::com::sun::tools::javac::tree::JCTree$Tag* USES;
	static ::com::sun::tools::javac::tree::JCTree$Tag* LETEXPR;
	static $Array<::com::sun::tools::javac::tree::JCTree$Tag>* $VALUES;
	::com::sun::tools::javac::tree::JCTree$Tag* noAssignTag = nullptr;
	static int32_t numberOfOperators;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("AND")
#pragma pop_macro("ANNOTATED_TYPE")
#pragma pop_macro("ANNOTATION")
#pragma pop_macro("APPLY")
#pragma pop_macro("ASSERT")
#pragma pop_macro("ASSIGN")
#pragma pop_macro("BINDINGPATTERN")
#pragma pop_macro("BITAND")
#pragma pop_macro("BITAND_ASG")
#pragma pop_macro("BITOR")
#pragma pop_macro("BITOR_ASG")
#pragma pop_macro("BITXOR")
#pragma pop_macro("BITXOR_ASG")
#pragma pop_macro("BLOCK")
#pragma pop_macro("BREAK")
#pragma pop_macro("CASE")
#pragma pop_macro("CATCH")
#pragma pop_macro("CLASSDEF")
#pragma pop_macro("COMPL")
#pragma pop_macro("CONDEXPR")
#pragma pop_macro("CONTINUE")
#pragma pop_macro("DEFAULTCASELABEL")
#pragma pop_macro("DIV")
#pragma pop_macro("DIV_ASG")
#pragma pop_macro("DOLOOP")
#pragma pop_macro("EQ")
#pragma pop_macro("ERRONEOUS")
#pragma pop_macro("EXEC")
#pragma pop_macro("EXPORTS")
#pragma pop_macro("FOREACHLOOP")
#pragma pop_macro("FORLOOP")
#pragma pop_macro("GE")
#pragma pop_macro("GT")
#pragma pop_macro("GUARDPATTERN")
#pragma pop_macro("IDENT")
#pragma pop_macro("IF")
#pragma pop_macro("IMPORT")
#pragma pop_macro("INDEXED")
#pragma pop_macro("LABELLED")
#pragma pop_macro("LAMBDA")
#pragma pop_macro("LE")
#pragma pop_macro("LETEXPR")
#pragma pop_macro("LITERAL")
#pragma pop_macro("LT")
#pragma pop_macro("METHODDEF")
#pragma pop_macro("MINUS")
#pragma pop_macro("MINUS_ASG")
#pragma pop_macro("MOD")
#pragma pop_macro("MODIFIERS")
#pragma pop_macro("MODULEDEF")
#pragma pop_macro("MOD_ASG")
#pragma pop_macro("MUL")
#pragma pop_macro("MUL_ASG")
#pragma pop_macro("NE")
#pragma pop_macro("NEG")
#pragma pop_macro("NEWARRAY")
#pragma pop_macro("NEWCLASS")
#pragma pop_macro("NOT")
#pragma pop_macro("NO_TAG")
#pragma pop_macro("NULLCHK")
#pragma pop_macro("OPENS")
#pragma pop_macro("OR")
#pragma pop_macro("PACKAGEDEF")
#pragma pop_macro("PARENS")
#pragma pop_macro("PARENTHESIZEDPATTERN")
#pragma pop_macro("PLUS")
#pragma pop_macro("PLUS_ASG")
#pragma pop_macro("POS")
#pragma pop_macro("POSTDEC")
#pragma pop_macro("POSTINC")
#pragma pop_macro("PREDEC")
#pragma pop_macro("PREINC")
#pragma pop_macro("PROVIDES")
#pragma pop_macro("REFERENCE")
#pragma pop_macro("REQUIRES")
#pragma pop_macro("RETURN")
#pragma pop_macro("SELECT")
#pragma pop_macro("SKIP")
#pragma pop_macro("SL")
#pragma pop_macro("SL_ASG")
#pragma pop_macro("SR")
#pragma pop_macro("SR_ASG")
#pragma pop_macro("SWITCH")
#pragma pop_macro("SWITCH_EXPRESSION")
#pragma pop_macro("SYNCHRONIZED")
#pragma pop_macro("THROW")
#pragma pop_macro("TOPLEVEL")
#pragma pop_macro("TRY")
#pragma pop_macro("TYPEAPPLY")
#pragma pop_macro("TYPEARRAY")
#pragma pop_macro("TYPEBOUNDKIND")
#pragma pop_macro("TYPECAST")
#pragma pop_macro("TYPEIDENT")
#pragma pop_macro("TYPEINTERSECTION")
#pragma pop_macro("TYPEPARAMETER")
#pragma pop_macro("TYPETEST")
#pragma pop_macro("TYPEUNION")
#pragma pop_macro("TYPE_ANNOTATION")
#pragma pop_macro("USES")
#pragma pop_macro("USR")
#pragma pop_macro("USR_ASG")
#pragma pop_macro("VARDEF")
#pragma pop_macro("WHILELOOP")
#pragma pop_macro("WILDCARD")
#pragma pop_macro("YIELD")

#endif // _com_sun_tools_javac_tree_JCTree$Tag_h_