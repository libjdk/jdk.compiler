#ifndef _com_sun_tools_javac_jvm_Code_h_
#define _com_sun_tools_javac_jvm_Code_h_
//$ class com.sun.tools.javac.jvm.Code
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$DynamicMethodSymbol;
					class Symbol$MethodSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class TypeAnnotationPosition;
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
				namespace jvm {
					class CRTable;
					class ClassWriter$StackMapTableFrame;
					class Code$Chain;
					class Code$LocalVar;
					class Code$LocalVar$Range;
					class Code$StackMapFormat;
					class Code$StackMapFrame;
					class Code$State;
					class PoolConstant;
					class PoolConstant$LoadableConstant;
					class PoolWriter;
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
					class Bits;
					class JCDiagnostic$DiagnosticPosition;
					class List;
					class ListBuffer;
					class Log;
					class Position$LineMap;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class ToIntBiFunction;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export Code : public ::java::lang::Object {
	$class(Code, 0, ::java::lang::Object)
public:
	Code();
	void init$(::com::sun::tools::javac::code::Symbol$MethodSymbol* meth, bool fatcode, ::com::sun::tools::javac::util::Position$LineMap* lineMap, bool varDebugInfo, ::com::sun::tools::javac::jvm::Code$StackMapFormat* stackMap, bool debugCode, ::com::sun::tools::javac::jvm::CRTable* crt, ::com::sun::tools::javac::code::Symtab* syms, ::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::jvm::PoolWriter* poolWriter);
	virtual void addCatch(char16_t startPc, char16_t endPc, char16_t handlerPc, char16_t catchType);
	virtual void addLineNumber(char16_t startPc, char16_t lineNumber);
	void addLocalVar(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual void adjustAliveRanges(int32_t oldCP, int32_t delta);
	virtual void align(int32_t incr);
	$ints* appendArray($ints* source, $ints* append);
	static int32_t arraycode(::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::jvm::Code$Chain* branch(int32_t opcode);
	virtual bool checkLimits(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::Log* log);
	virtual void compressCatchTable();
	virtual int32_t curCP();
	void emit1(int32_t od);
	void emit2(int32_t od);
	virtual void emit4(int32_t od);
	virtual void emitAnewarray(int32_t od, ::com::sun::tools::javac::code::Type* arrayType);
	virtual void emitCLDCStackMap(int32_t pc, int32_t localsSize);
	virtual void emitInvokedynamic(::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol* dynMember, ::com::sun::tools::javac::code::Type* mtype);
	virtual void emitInvokeinterface(::com::sun::tools::javac::code::Symbol* member, ::com::sun::tools::javac::code::Type* mtype);
	virtual void emitInvokespecial(::com::sun::tools::javac::code::Symbol* member, ::com::sun::tools::javac::code::Type* mtype);
	virtual void emitInvokestatic(::com::sun::tools::javac::code::Symbol* member, ::com::sun::tools::javac::code::Type* mtype);
	virtual void emitInvokevirtual(::com::sun::tools::javac::code::Symbol* member, ::com::sun::tools::javac::code::Type* mtype);
	virtual int32_t emitJump(int32_t opcode);
	virtual void emitLdc(::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* constant);
	virtual void emitMultianewarray(int32_t ndims, int32_t type, ::com::sun::tools::javac::code::Type* arrayType);
	virtual void emitNewarray(int32_t elemcode, ::com::sun::tools::javac::code::Type* arrayType);
	virtual void emitStackMap();
	virtual void emitStackMapFrame(int32_t pc, int32_t localsSize);
	void emitop(int32_t op);
	virtual void emitop0(int32_t op);
	virtual void emitop1(int32_t op, int32_t od);
	virtual void emitop1(int32_t op, int32_t od, ::com::sun::tools::javac::jvm::PoolConstant* data);
	virtual void emitop1w(int32_t op, int32_t od);
	virtual void emitop1w(int32_t op, int32_t od1, int32_t od2);
	virtual void emitop2(int32_t op, ::com::sun::tools::javac::jvm::PoolConstant* constant, ::java::util::function::ToIntBiFunction* poolFunc);
	virtual void emitop2(int32_t op, int32_t od);
	virtual void emitop2(int32_t op, int32_t od, ::com::sun::tools::javac::jvm::PoolConstant* data);
	virtual void emitop4(int32_t op, int32_t od);
	void endScope(int32_t adr);
	virtual void endScopes(int32_t first);
	virtual int32_t entryPoint();
	virtual int32_t entryPoint(::com::sun::tools::javac::jvm::Code$State* state);
	virtual int32_t entryPoint(::com::sun::tools::javac::jvm::Code$State* state, ::com::sun::tools::javac::code::Type* pushed);
	virtual void fillExceptionParameterPositions();
	void fillLocalVarPosition(::com::sun::tools::javac::jvm::Code$LocalVar* lv);
	int32_t findExceptionIndex(::com::sun::tools::javac::code::TypeAnnotationPosition* p);
	int32_t get1(int32_t pc);
	int32_t get2(int32_t pc);
	virtual int32_t get4(int32_t pc);
	virtual ::com::sun::tools::javac::jvm::Code$StackMapFrame* getInitialFrame();
	virtual int32_t getLVTSize();
	int32_t getLocalsSize();
	virtual bool isAlive();
	virtual bool isStatementStart();
	static bool lambda$fillLocalVarPosition$0(::com::sun::tools::javac::jvm::Code$LocalVar$Range* r);
	static $Array<::com::sun::tools::javac::jvm::Code$LocalVar$Range>* lambda$fillLocalVarPosition$1(int32_t s);
	static int32_t lambda$fillLocalVarPosition$2(::com::sun::tools::javac::jvm::Code$LocalVar$Range* r);
	static int32_t lambda$fillLocalVarPosition$3(::com::sun::tools::javac::jvm::Code$LocalVar$Range* r);
	static int32_t lambda$fillLocalVarPosition$4(::com::sun::tools::javac::jvm::Code$LocalVar* lv, ::com::sun::tools::javac::jvm::Code$LocalVar$Range* r);
	virtual void markDead();
	virtual void markStatBegin();
	static ::com::sun::tools::javac::jvm::Code$Chain* mergeChains(::com::sun::tools::javac::jvm::Code$Chain* chain1, ::com::sun::tools::javac::jvm::Code$Chain* chain2);
	static $String* mnem(int32_t opcode);
	static int32_t negate(int32_t opcode);
	int32_t newLocal(int32_t typecode);
	int32_t newLocal(::com::sun::tools::javac::code::Type* type);
	virtual int32_t newLocal(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual void newRegSegment();
	virtual void postop();
	void put1(int32_t pc, int32_t op);
	void put2(int32_t pc, int32_t od);
	virtual void put4(int32_t pc, int32_t od);
	virtual void putVar(::com::sun::tools::javac::jvm::Code$LocalVar* var);
	virtual void resolve(::com::sun::tools::javac::jvm::Code$Chain* chain, int32_t target);
	virtual void resolve(::com::sun::tools::javac::jvm::Code$Chain* chain);
	virtual void resolvePending();
	virtual void setDefined(::com::sun::tools::javac::util::Bits* newDefined);
	virtual void setDefined(int32_t adr);
	virtual int32_t setLetExprStackPos(int32_t pos);
	virtual void setUndefined(int32_t adr);
	virtual void statBegin(int32_t pos);
	static int32_t truncate(int32_t tc);
	static int32_t typecode(::com::sun::tools::javac::code::Type* type);
	static int32_t width(int32_t typecode);
	static int32_t width(::com::sun::tools::javac::code::Type* type);
	static int32_t width(::com::sun::tools::javac::util::List* types);
	bool debugCode = false;
	bool needStackMap = false;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::jvm::PoolWriter* poolWriter = nullptr;
	int32_t max_stack = 0;
	int32_t max_locals = 0;
	$bytes* code = nullptr;
	int32_t cp = 0;
	::com::sun::tools::javac::util::ListBuffer* catchInfo = nullptr;
	::com::sun::tools::javac::util::List* lineInfo = nullptr;
	::com::sun::tools::javac::jvm::CRTable* crt = nullptr;
	bool fatcode = false;
	bool alive = false;
	::com::sun::tools::javac::jvm::Code$State* state = nullptr;
	bool fixedPc = false;
	int32_t nextreg = 0;
	::com::sun::tools::javac::jvm::Code$Chain* pendingJumps = nullptr;
	int32_t pendingStatPos = 0;
	bool pendingStackMap = false;
	::com::sun::tools::javac::jvm::Code$StackMapFormat* stackMap = nullptr;
	bool varDebugInfo = false;
	bool lineDebugInfo = false;
	::com::sun::tools::javac::util::Position$LineMap* lineMap = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* meth = nullptr;
	int32_t letExprStackPos = 0;
	$Array<::com::sun::tools::javac::jvm::Code$StackMapFrame>* stackMapBuffer = nullptr;
	$Array<::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame>* stackMapTableBuffer = nullptr;
	int32_t stackMapBufferSize = 0;
	int32_t lastStackMapPC = 0;
	::com::sun::tools::javac::jvm::Code$StackMapFrame* lastFrame = nullptr;
	::com::sun::tools::javac::jvm::Code$StackMapFrame* frameBeforeLast = nullptr;
	static ::com::sun::tools::javac::code::Type* jsrReturnValue;
	$Array<::com::sun::tools::javac::jvm::Code$LocalVar>* lvar = nullptr;
	$Array<::com::sun::tools::javac::jvm::Code$LocalVar>* varBuffer = nullptr;
	int32_t varBufferSize = 0;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Code_h_