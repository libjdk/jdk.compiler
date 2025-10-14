#ifndef _com_sun_source_tree_Tree$Kind_h_
#define _com_sun_source_tree_Tree$Kind_h_
//$ class com.sun.source.tree.Tree$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AND")
#undef AND
#pragma push_macro("AND_ASSIGNMENT")
#undef AND_ASSIGNMENT
#pragma push_macro("ANNOTATED_TYPE")
#undef ANNOTATED_TYPE
#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("ANNOTATION_TYPE")
#undef ANNOTATION_TYPE
#pragma push_macro("ARRAY_ACCESS")
#undef ARRAY_ACCESS
#pragma push_macro("ARRAY_TYPE")
#undef ARRAY_TYPE
#pragma push_macro("ASSERT")
#undef ASSERT
#pragma push_macro("ASSIGNMENT")
#undef ASSIGNMENT
#pragma push_macro("BINDING_PATTERN")
#undef BINDING_PATTERN
#pragma push_macro("BITWISE_COMPLEMENT")
#undef BITWISE_COMPLEMENT
#pragma push_macro("BLOCK")
#undef BLOCK
#pragma push_macro("BOOLEAN_LITERAL")
#undef BOOLEAN_LITERAL
#pragma push_macro("BREAK")
#undef BREAK
#pragma push_macro("CASE")
#undef CASE
#pragma push_macro("CATCH")
#undef CATCH
#pragma push_macro("CHAR_LITERAL")
#undef CHAR_LITERAL
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("COMPILATION_UNIT")
#undef COMPILATION_UNIT
#pragma push_macro("CONDITIONAL_AND")
#undef CONDITIONAL_AND
#pragma push_macro("CONDITIONAL_EXPRESSION")
#undef CONDITIONAL_EXPRESSION
#pragma push_macro("CONDITIONAL_OR")
#undef CONDITIONAL_OR
#pragma push_macro("CONTINUE")
#undef CONTINUE
#pragma push_macro("DEFAULT_CASE_LABEL")
#undef DEFAULT_CASE_LABEL
#pragma push_macro("DIVIDE")
#undef DIVIDE
#pragma push_macro("DIVIDE_ASSIGNMENT")
#undef DIVIDE_ASSIGNMENT
#pragma push_macro("DOUBLE_LITERAL")
#undef DOUBLE_LITERAL
#pragma push_macro("DO_WHILE_LOOP")
#undef DO_WHILE_LOOP
#pragma push_macro("EMPTY_STATEMENT")
#undef EMPTY_STATEMENT
#pragma push_macro("ENHANCED_FOR_LOOP")
#undef ENHANCED_FOR_LOOP
#pragma push_macro("ENUM")
#undef ENUM
#pragma push_macro("EQUAL_TO")
#undef EQUAL_TO
#pragma push_macro("ERRONEOUS")
#undef ERRONEOUS
#pragma push_macro("EXPORTS")
#undef EXPORTS
#pragma push_macro("EXPRESSION_STATEMENT")
#undef EXPRESSION_STATEMENT
#pragma push_macro("EXTENDS_WILDCARD")
#undef EXTENDS_WILDCARD
#pragma push_macro("FLOAT_LITERAL")
#undef FLOAT_LITERAL
#pragma push_macro("FOR_LOOP")
#undef FOR_LOOP
#pragma push_macro("GREATER_THAN")
#undef GREATER_THAN
#pragma push_macro("GREATER_THAN_EQUAL")
#undef GREATER_THAN_EQUAL
#pragma push_macro("GUARDED_PATTERN")
#undef GUARDED_PATTERN
#pragma push_macro("IDENTIFIER")
#undef IDENTIFIER
#pragma push_macro("IF")
#undef IF
#pragma push_macro("IMPORT")
#undef IMPORT
#pragma push_macro("INSTANCE_OF")
#undef INSTANCE_OF
#pragma push_macro("INTERFACE")
#undef INTERFACE
#pragma push_macro("INTERSECTION_TYPE")
#undef INTERSECTION_TYPE
#pragma push_macro("INT_LITERAL")
#undef INT_LITERAL
#pragma push_macro("LABELED_STATEMENT")
#undef LABELED_STATEMENT
#pragma push_macro("LAMBDA_EXPRESSION")
#undef LAMBDA_EXPRESSION
#pragma push_macro("LEFT_SHIFT")
#undef LEFT_SHIFT
#pragma push_macro("LEFT_SHIFT_ASSIGNMENT")
#undef LEFT_SHIFT_ASSIGNMENT
#pragma push_macro("LESS_THAN")
#undef LESS_THAN
#pragma push_macro("LESS_THAN_EQUAL")
#undef LESS_THAN_EQUAL
#pragma push_macro("LOGICAL_COMPLEMENT")
#undef LOGICAL_COMPLEMENT
#pragma push_macro("LONG_LITERAL")
#undef LONG_LITERAL
#pragma push_macro("MEMBER_REFERENCE")
#undef MEMBER_REFERENCE
#pragma push_macro("MEMBER_SELECT")
#undef MEMBER_SELECT
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("METHOD_INVOCATION")
#undef METHOD_INVOCATION
#pragma push_macro("MINUS")
#undef MINUS
#pragma push_macro("MINUS_ASSIGNMENT")
#undef MINUS_ASSIGNMENT
#pragma push_macro("MODIFIERS")
#undef MODIFIERS
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("MULTIPLY")
#undef MULTIPLY
#pragma push_macro("MULTIPLY_ASSIGNMENT")
#undef MULTIPLY_ASSIGNMENT
#pragma push_macro("NEW_ARRAY")
#undef NEW_ARRAY
#pragma push_macro("NEW_CLASS")
#undef NEW_CLASS
#pragma push_macro("NOT_EQUAL_TO")
#undef NOT_EQUAL_TO
#pragma push_macro("NULL_LITERAL")
#undef NULL_LITERAL
#pragma push_macro("OPENS")
#undef OPENS
#pragma push_macro("OR")
#undef OR
#pragma push_macro("OR_ASSIGNMENT")
#undef OR_ASSIGNMENT
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("PARAMETERIZED_TYPE")
#undef PARAMETERIZED_TYPE
#pragma push_macro("PARENTHESIZED")
#undef PARENTHESIZED
#pragma push_macro("PARENTHESIZED_PATTERN")
#undef PARENTHESIZED_PATTERN
#pragma push_macro("PLUS")
#undef PLUS
#pragma push_macro("PLUS_ASSIGNMENT")
#undef PLUS_ASSIGNMENT
#pragma push_macro("POSTFIX_DECREMENT")
#undef POSTFIX_DECREMENT
#pragma push_macro("POSTFIX_INCREMENT")
#undef POSTFIX_INCREMENT
#pragma push_macro("PREFIX_DECREMENT")
#undef PREFIX_DECREMENT
#pragma push_macro("PREFIX_INCREMENT")
#undef PREFIX_INCREMENT
#pragma push_macro("PRIMITIVE_TYPE")
#undef PRIMITIVE_TYPE
#pragma push_macro("PROVIDES")
#undef PROVIDES
#pragma push_macro("RECORD")
#undef RECORD
#pragma push_macro("REMAINDER")
#undef REMAINDER
#pragma push_macro("REMAINDER_ASSIGNMENT")
#undef REMAINDER_ASSIGNMENT
#pragma push_macro("REQUIRES")
#undef REQUIRES
#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("RIGHT_SHIFT")
#undef RIGHT_SHIFT
#pragma push_macro("RIGHT_SHIFT_ASSIGNMENT")
#undef RIGHT_SHIFT_ASSIGNMENT
#pragma push_macro("STRING_LITERAL")
#undef STRING_LITERAL
#pragma push_macro("SUPER_WILDCARD")
#undef SUPER_WILDCARD
#pragma push_macro("SWITCH")
#undef SWITCH
#pragma push_macro("SWITCH_EXPRESSION")
#undef SWITCH_EXPRESSION
#pragma push_macro("SYNCHRONIZED")
#undef SYNCHRONIZED
#pragma push_macro("THROW")
#undef THROW
#pragma push_macro("TRY")
#undef TRY
#pragma push_macro("TYPE_ANNOTATION")
#undef TYPE_ANNOTATION
#pragma push_macro("TYPE_CAST")
#undef TYPE_CAST
#pragma push_macro("TYPE_PARAMETER")
#undef TYPE_PARAMETER
#pragma push_macro("UNARY_MINUS")
#undef UNARY_MINUS
#pragma push_macro("UNARY_PLUS")
#undef UNARY_PLUS
#pragma push_macro("UNBOUNDED_WILDCARD")
#undef UNBOUNDED_WILDCARD
#pragma push_macro("UNION_TYPE")
#undef UNION_TYPE
#pragma push_macro("UNSIGNED_RIGHT_SHIFT")
#undef UNSIGNED_RIGHT_SHIFT
#pragma push_macro("UNSIGNED_RIGHT_SHIFT_ASSIGNMENT")
#undef UNSIGNED_RIGHT_SHIFT_ASSIGNMENT
#pragma push_macro("USES")
#undef USES
#pragma push_macro("VARIABLE")
#undef VARIABLE
#pragma push_macro("WHILE_LOOP")
#undef WHILE_LOOP
#pragma push_macro("XOR")
#undef XOR
#pragma push_macro("XOR_ASSIGNMENT")
#undef XOR_ASSIGNMENT
#pragma push_macro("YIELD")
#undef YIELD

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import Tree$Kind : public ::java::lang::Enum {
	$class(Tree$Kind, 0, ::java::lang::Enum)
public:
	Tree$Kind();
	static $Array<::com::sun::source::tree::Tree$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $Class* intf);
	virtual $Class* asInterface();
	static ::com::sun::source::tree::Tree$Kind* valueOf($String* name);
	static $Array<::com::sun::source::tree::Tree$Kind>* values();
	static ::com::sun::source::tree::Tree$Kind* ANNOTATED_TYPE;
	static ::com::sun::source::tree::Tree$Kind* ANNOTATION;
	static ::com::sun::source::tree::Tree$Kind* TYPE_ANNOTATION;
	static ::com::sun::source::tree::Tree$Kind* ARRAY_ACCESS;
	static ::com::sun::source::tree::Tree$Kind* ARRAY_TYPE;
	static ::com::sun::source::tree::Tree$Kind* ASSERT;
	static ::com::sun::source::tree::Tree$Kind* ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* BLOCK;
	static ::com::sun::source::tree::Tree$Kind* BREAK;
	static ::com::sun::source::tree::Tree$Kind* CASE;
	static ::com::sun::source::tree::Tree$Kind* CATCH;
	static ::com::sun::source::tree::Tree$Kind* CLASS;
	static ::com::sun::source::tree::Tree$Kind* COMPILATION_UNIT;
	static ::com::sun::source::tree::Tree$Kind* CONDITIONAL_EXPRESSION;
	static ::com::sun::source::tree::Tree$Kind* CONTINUE;
	static ::com::sun::source::tree::Tree$Kind* DO_WHILE_LOOP;
	static ::com::sun::source::tree::Tree$Kind* ENHANCED_FOR_LOOP;
	static ::com::sun::source::tree::Tree$Kind* EXPRESSION_STATEMENT;
	static ::com::sun::source::tree::Tree$Kind* MEMBER_SELECT;
	static ::com::sun::source::tree::Tree$Kind* MEMBER_REFERENCE;
	static ::com::sun::source::tree::Tree$Kind* FOR_LOOP;
	static ::com::sun::source::tree::Tree$Kind* IDENTIFIER;
	static ::com::sun::source::tree::Tree$Kind* IF;
	static ::com::sun::source::tree::Tree$Kind* IMPORT;
	static ::com::sun::source::tree::Tree$Kind* INSTANCE_OF;
	static ::com::sun::source::tree::Tree$Kind* LABELED_STATEMENT;
	static ::com::sun::source::tree::Tree$Kind* METHOD;
	static ::com::sun::source::tree::Tree$Kind* METHOD_INVOCATION;
	static ::com::sun::source::tree::Tree$Kind* MODIFIERS;
	static ::com::sun::source::tree::Tree$Kind* NEW_ARRAY;
	static ::com::sun::source::tree::Tree$Kind* NEW_CLASS;
	static ::com::sun::source::tree::Tree$Kind* LAMBDA_EXPRESSION;
	static ::com::sun::source::tree::Tree$Kind* PACKAGE;
	static ::com::sun::source::tree::Tree$Kind* PARENTHESIZED;
	static ::com::sun::source::tree::Tree$Kind* BINDING_PATTERN;
	static ::com::sun::source::tree::Tree$Kind* GUARDED_PATTERN;
	static ::com::sun::source::tree::Tree$Kind* PARENTHESIZED_PATTERN;
	static ::com::sun::source::tree::Tree$Kind* DEFAULT_CASE_LABEL;
	static ::com::sun::source::tree::Tree$Kind* PRIMITIVE_TYPE;
	static ::com::sun::source::tree::Tree$Kind* RETURN;
	static ::com::sun::source::tree::Tree$Kind* EMPTY_STATEMENT;
	static ::com::sun::source::tree::Tree$Kind* SWITCH;
	static ::com::sun::source::tree::Tree$Kind* SWITCH_EXPRESSION;
	static ::com::sun::source::tree::Tree$Kind* SYNCHRONIZED;
	static ::com::sun::source::tree::Tree$Kind* THROW;
	static ::com::sun::source::tree::Tree$Kind* TRY;
	static ::com::sun::source::tree::Tree$Kind* PARAMETERIZED_TYPE;
	static ::com::sun::source::tree::Tree$Kind* UNION_TYPE;
	static ::com::sun::source::tree::Tree$Kind* INTERSECTION_TYPE;
	static ::com::sun::source::tree::Tree$Kind* TYPE_CAST;
	static ::com::sun::source::tree::Tree$Kind* TYPE_PARAMETER;
	static ::com::sun::source::tree::Tree$Kind* VARIABLE;
	static ::com::sun::source::tree::Tree$Kind* WHILE_LOOP;
	static ::com::sun::source::tree::Tree$Kind* POSTFIX_INCREMENT;
	static ::com::sun::source::tree::Tree$Kind* POSTFIX_DECREMENT;
	static ::com::sun::source::tree::Tree$Kind* PREFIX_INCREMENT;
	static ::com::sun::source::tree::Tree$Kind* PREFIX_DECREMENT;
	static ::com::sun::source::tree::Tree$Kind* UNARY_PLUS;
	static ::com::sun::source::tree::Tree$Kind* UNARY_MINUS;
	static ::com::sun::source::tree::Tree$Kind* BITWISE_COMPLEMENT;
	static ::com::sun::source::tree::Tree$Kind* LOGICAL_COMPLEMENT;
	static ::com::sun::source::tree::Tree$Kind* MULTIPLY;
	static ::com::sun::source::tree::Tree$Kind* DIVIDE;
	static ::com::sun::source::tree::Tree$Kind* REMAINDER;
	static ::com::sun::source::tree::Tree$Kind* PLUS;
	static ::com::sun::source::tree::Tree$Kind* MINUS;
	static ::com::sun::source::tree::Tree$Kind* LEFT_SHIFT;
	static ::com::sun::source::tree::Tree$Kind* RIGHT_SHIFT;
	static ::com::sun::source::tree::Tree$Kind* UNSIGNED_RIGHT_SHIFT;
	static ::com::sun::source::tree::Tree$Kind* LESS_THAN;
	static ::com::sun::source::tree::Tree$Kind* GREATER_THAN;
	static ::com::sun::source::tree::Tree$Kind* LESS_THAN_EQUAL;
	static ::com::sun::source::tree::Tree$Kind* GREATER_THAN_EQUAL;
	static ::com::sun::source::tree::Tree$Kind* EQUAL_TO;
	static ::com::sun::source::tree::Tree$Kind* NOT_EQUAL_TO;
	static ::com::sun::source::tree::Tree$Kind* AND;
	static ::com::sun::source::tree::Tree$Kind* XOR;
	static ::com::sun::source::tree::Tree$Kind* OR;
	static ::com::sun::source::tree::Tree$Kind* CONDITIONAL_AND;
	static ::com::sun::source::tree::Tree$Kind* CONDITIONAL_OR;
	static ::com::sun::source::tree::Tree$Kind* MULTIPLY_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* DIVIDE_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* REMAINDER_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* PLUS_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* MINUS_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* LEFT_SHIFT_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* RIGHT_SHIFT_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* UNSIGNED_RIGHT_SHIFT_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* AND_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* XOR_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* OR_ASSIGNMENT;
	static ::com::sun::source::tree::Tree$Kind* INT_LITERAL;
	static ::com::sun::source::tree::Tree$Kind* LONG_LITERAL;
	static ::com::sun::source::tree::Tree$Kind* FLOAT_LITERAL;
	static ::com::sun::source::tree::Tree$Kind* DOUBLE_LITERAL;
	static ::com::sun::source::tree::Tree$Kind* BOOLEAN_LITERAL;
	static ::com::sun::source::tree::Tree$Kind* CHAR_LITERAL;
	static ::com::sun::source::tree::Tree$Kind* STRING_LITERAL;
	static ::com::sun::source::tree::Tree$Kind* NULL_LITERAL;
	static ::com::sun::source::tree::Tree$Kind* UNBOUNDED_WILDCARD;
	static ::com::sun::source::tree::Tree$Kind* EXTENDS_WILDCARD;
	static ::com::sun::source::tree::Tree$Kind* SUPER_WILDCARD;
	static ::com::sun::source::tree::Tree$Kind* ERRONEOUS;
	static ::com::sun::source::tree::Tree$Kind* INTERFACE;
	static ::com::sun::source::tree::Tree$Kind* ENUM;
	static ::com::sun::source::tree::Tree$Kind* ANNOTATION_TYPE;
	static ::com::sun::source::tree::Tree$Kind* MODULE;
	static ::com::sun::source::tree::Tree$Kind* EXPORTS;
	static ::com::sun::source::tree::Tree$Kind* OPENS;
	static ::com::sun::source::tree::Tree$Kind* PROVIDES;
	static ::com::sun::source::tree::Tree$Kind* RECORD;
	static ::com::sun::source::tree::Tree$Kind* REQUIRES;
	static ::com::sun::source::tree::Tree$Kind* USES;
	static ::com::sun::source::tree::Tree$Kind* OTHER;
	static ::com::sun::source::tree::Tree$Kind* YIELD;
	static $Array<::com::sun::source::tree::Tree$Kind>* $VALUES;
	$Class* associatedInterface = nullptr;
};

			} // tree
		} // source
	} // sun
} // com

#pragma pop_macro("AND")
#pragma pop_macro("AND_ASSIGNMENT")
#pragma pop_macro("ANNOTATED_TYPE")
#pragma pop_macro("ANNOTATION")
#pragma pop_macro("ANNOTATION_TYPE")
#pragma pop_macro("ARRAY_ACCESS")
#pragma pop_macro("ARRAY_TYPE")
#pragma pop_macro("ASSERT")
#pragma pop_macro("ASSIGNMENT")
#pragma pop_macro("BINDING_PATTERN")
#pragma pop_macro("BITWISE_COMPLEMENT")
#pragma pop_macro("BLOCK")
#pragma pop_macro("BOOLEAN_LITERAL")
#pragma pop_macro("BREAK")
#pragma pop_macro("CASE")
#pragma pop_macro("CATCH")
#pragma pop_macro("CHAR_LITERAL")
#pragma pop_macro("CLASS")
#pragma pop_macro("COMPILATION_UNIT")
#pragma pop_macro("CONDITIONAL_AND")
#pragma pop_macro("CONDITIONAL_EXPRESSION")
#pragma pop_macro("CONDITIONAL_OR")
#pragma pop_macro("CONTINUE")
#pragma pop_macro("DEFAULT_CASE_LABEL")
#pragma pop_macro("DIVIDE")
#pragma pop_macro("DIVIDE_ASSIGNMENT")
#pragma pop_macro("DOUBLE_LITERAL")
#pragma pop_macro("DO_WHILE_LOOP")
#pragma pop_macro("EMPTY_STATEMENT")
#pragma pop_macro("ENHANCED_FOR_LOOP")
#pragma pop_macro("ENUM")
#pragma pop_macro("EQUAL_TO")
#pragma pop_macro("ERRONEOUS")
#pragma pop_macro("EXPORTS")
#pragma pop_macro("EXPRESSION_STATEMENT")
#pragma pop_macro("EXTENDS_WILDCARD")
#pragma pop_macro("FLOAT_LITERAL")
#pragma pop_macro("FOR_LOOP")
#pragma pop_macro("GREATER_THAN")
#pragma pop_macro("GREATER_THAN_EQUAL")
#pragma pop_macro("GUARDED_PATTERN")
#pragma pop_macro("IDENTIFIER")
#pragma pop_macro("IF")
#pragma pop_macro("IMPORT")
#pragma pop_macro("INSTANCE_OF")
#pragma pop_macro("INTERFACE")
#pragma pop_macro("INTERSECTION_TYPE")
#pragma pop_macro("INT_LITERAL")
#pragma pop_macro("LABELED_STATEMENT")
#pragma pop_macro("LAMBDA_EXPRESSION")
#pragma pop_macro("LEFT_SHIFT")
#pragma pop_macro("LEFT_SHIFT_ASSIGNMENT")
#pragma pop_macro("LESS_THAN")
#pragma pop_macro("LESS_THAN_EQUAL")
#pragma pop_macro("LOGICAL_COMPLEMENT")
#pragma pop_macro("LONG_LITERAL")
#pragma pop_macro("MEMBER_REFERENCE")
#pragma pop_macro("MEMBER_SELECT")
#pragma pop_macro("METHOD")
#pragma pop_macro("METHOD_INVOCATION")
#pragma pop_macro("MINUS")
#pragma pop_macro("MINUS_ASSIGNMENT")
#pragma pop_macro("MODIFIERS")
#pragma pop_macro("MODULE")
#pragma pop_macro("MULTIPLY")
#pragma pop_macro("MULTIPLY_ASSIGNMENT")
#pragma pop_macro("NEW_ARRAY")
#pragma pop_macro("NEW_CLASS")
#pragma pop_macro("NOT_EQUAL_TO")
#pragma pop_macro("NULL_LITERAL")
#pragma pop_macro("OPENS")
#pragma pop_macro("OR")
#pragma pop_macro("OR_ASSIGNMENT")
#pragma pop_macro("OTHER")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("PARAMETERIZED_TYPE")
#pragma pop_macro("PARENTHESIZED")
#pragma pop_macro("PARENTHESIZED_PATTERN")
#pragma pop_macro("PLUS")
#pragma pop_macro("PLUS_ASSIGNMENT")
#pragma pop_macro("POSTFIX_DECREMENT")
#pragma pop_macro("POSTFIX_INCREMENT")
#pragma pop_macro("PREFIX_DECREMENT")
#pragma pop_macro("PREFIX_INCREMENT")
#pragma pop_macro("PRIMITIVE_TYPE")
#pragma pop_macro("PROVIDES")
#pragma pop_macro("RECORD")
#pragma pop_macro("REMAINDER")
#pragma pop_macro("REMAINDER_ASSIGNMENT")
#pragma pop_macro("REQUIRES")
#pragma pop_macro("RETURN")
#pragma pop_macro("RIGHT_SHIFT")
#pragma pop_macro("RIGHT_SHIFT_ASSIGNMENT")
#pragma pop_macro("STRING_LITERAL")
#pragma pop_macro("SUPER_WILDCARD")
#pragma pop_macro("SWITCH")
#pragma pop_macro("SWITCH_EXPRESSION")
#pragma pop_macro("SYNCHRONIZED")
#pragma pop_macro("THROW")
#pragma pop_macro("TRY")
#pragma pop_macro("TYPE_ANNOTATION")
#pragma pop_macro("TYPE_CAST")
#pragma pop_macro("TYPE_PARAMETER")
#pragma pop_macro("UNARY_MINUS")
#pragma pop_macro("UNARY_PLUS")
#pragma pop_macro("UNBOUNDED_WILDCARD")
#pragma pop_macro("UNION_TYPE")
#pragma pop_macro("UNSIGNED_RIGHT_SHIFT")
#pragma pop_macro("UNSIGNED_RIGHT_SHIFT_ASSIGNMENT")
#pragma pop_macro("USES")
#pragma pop_macro("VARIABLE")
#pragma pop_macro("WHILE_LOOP")
#pragma pop_macro("XOR")
#pragma pop_macro("XOR_ASSIGNMENT")
#pragma pop_macro("YIELD")

#endif // _com_sun_source_tree_Tree$Kind_h_