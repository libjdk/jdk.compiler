#ifndef _com_sun_tools_javac_comp_Operators_h_
#define _com_sun_tools_javac_comp_Operators_h_
//$ class com.sun.tools.javac.comp.Operators
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$OperatorSymbol;
					class Symtab;
					class Type;
					class Types;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Operators$BinaryOperatorHelper;
					class Operators$OperatorHelper;
					class Operators$OperatorType;
					class Operators$UnaryOperatorHelper;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$Tag;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Key;
					class JCDiagnostic$DiagnosticPosition;
					class List;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
			class Predicate;
			class Supplier;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Operators : public ::java::lang::Object {
	$class(Operators, 0, ::java::lang::Object)
public:
	Operators();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::code::Type* binaryPromotion(::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2);
	void initBinaryOperators();
	void initOperatorNames();
	void initOperators(::java::util::Map* opsMap, $Array<::com::sun::tools::javac::comp::Operators$OperatorHelper>* ops);
	void initUnaryOperators();
	static ::com::sun::tools::javac::comp::Operators* instance(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol* lambda$lookupBinaryOp$8(::java::util::function::Predicate* applicabilityTest, ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper* helper);
	bool lambda$lookupBinaryOp$9(::com::sun::tools::javac::code::Symbol$OperatorSymbol* sym);
	::com::sun::tools::javac::code::Type* lambda$makeOperator$6(::com::sun::tools::javac::comp::Operators$OperatorType* o);
	static bool lambda$reportErrorIfNeeded$7(::com::sun::tools::javac::code::Type* t);
	static bool lambda$resolveBinary$3(::com::sun::tools::javac::code::Type* op1, ::com::sun::tools::javac::code::Type* op2, ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper* binop);
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol* lambda$resolveBinary$4(::com::sun::tools::javac::code::Type* op1, ::com::sun::tools::javac::code::Type* op2, ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper* binop);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* lambda$resolveBinary$5(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::tree::JCTree$Tag* tag, ::com::sun::tools::javac::code::Type* op1, ::com::sun::tools::javac::code::Type* op2);
	static bool lambda$resolveUnary$0(::com::sun::tools::javac::code::Type* op, ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper* unop);
	static ::com::sun::tools::javac::code::Symbol$OperatorSymbol* lambda$resolveUnary$1(::com::sun::tools::javac::code::Type* op, ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper* unop);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* lambda$resolveUnary$2(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::tree::JCTree$Tag* tag, ::com::sun::tools::javac::code::Type* op);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* lookupBinaryOp(::java::util::function::Predicate* applicabilityTest);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* makeOperator(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* formals, ::com::sun::tools::javac::comp::Operators$OperatorType* res, $ints* opcodes);
	int32_t mergeOpcodes($ints* opcodes);
	virtual ::com::sun::tools::javac::util::Name* operatorName(::com::sun::tools::javac::tree::JCTree$Tag* tag);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* reportErrorIfNeeded(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::tree::JCTree$Tag* tag, $Array<::com::sun::tools::javac::code::Type>* args);
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolve(::com::sun::tools::javac::tree::JCTree$Tag* tag, ::java::util::Map* opMap, ::java::util::function::Predicate* opTestFunc, ::java::util::function::Function* resolveFunc, ::java::util::function::Supplier* noResultFunc);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolveBinary(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::tree::JCTree$Tag* tag, ::com::sun::tools::javac::code::Type* op1, ::com::sun::tools::javac::code::Type* op2);
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* resolveUnary(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::tree::JCTree$Tag* tag, ::com::sun::tools::javac::code::Type* op);
	void setOperatorName(::com::sun::tools::javac::tree::JCTree$Tag* tag, $String* name);
	void setOperatorName(::com::sun::tools::javac::tree::JCTree$Tag* tag, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Type* unaryPromotion(::com::sun::tools::javac::code::Type* t);
	static ::com::sun::tools::javac::util::Context$Key* operatorsKey;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::java::util::Map* unaryOperators = nullptr;
	::java::util::Map* binaryOperators = nullptr;
	$Array<::com::sun::tools::javac::util::Name>* opname = nullptr;
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* noOpSymbol = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Operators_h_