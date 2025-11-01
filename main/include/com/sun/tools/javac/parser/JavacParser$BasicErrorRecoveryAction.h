#ifndef _com_sun_tools_javac_parser_JavacParser$BasicErrorRecoveryAction_h_
#define _com_sun_tools_javac_parser_JavacParser$BasicErrorRecoveryAction_h_
//$ class com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction
//$ extends java.lang.Enum
//$ implements com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction

#include <com/sun/tools/javac/parser/JavacParser$ErrorRecoveryAction.h>
#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BLOCK_STMT")
#undef BLOCK_STMT
#pragma push_macro("CATCH_CLAUSE")
#undef CATCH_CLAUSE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import JavacParser$BasicErrorRecoveryAction : public ::java::lang::Enum, public ::com::sun::tools::javac::parser::JavacParser$ErrorRecoveryAction {
	$class(JavacParser$BasicErrorRecoveryAction, 0, ::java::lang::Enum, ::com::sun::tools::javac::parser::JavacParser$ErrorRecoveryAction)
public:
	JavacParser$BasicErrorRecoveryAction();
	static $Array<::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction* valueOf($String* name);
	static $Array<::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction>* values();
	static ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction* BLOCK_STMT;
	static ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction* CATCH_CLAUSE;
	static $Array<::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction>* $VALUES;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BLOCK_STMT")
#pragma pop_macro("CATCH_CLAUSE")

#endif // _com_sun_tools_javac_parser_JavacParser$BasicErrorRecoveryAction_h_