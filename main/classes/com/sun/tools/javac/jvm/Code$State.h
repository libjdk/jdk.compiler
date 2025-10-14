#ifndef _com_sun_tools_javac_jvm_Code$State_h_
#define _com_sun_tools_javac_jvm_Code$State_h_
//$ class com.sun.tools.javac.jvm.Code$State
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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
					class Code;
					class UninitializedType;
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

class $export Code$State : public ::java::lang::Cloneable {
	$class(Code$State, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	Code$State();
	void init$(::com::sun::tools::javac::jvm::Code* this$0);
	virtual void dump();
	virtual void dump(int32_t pc);
	virtual ::com::sun::tools::javac::jvm::Code$State* dup();
	virtual ::com::sun::tools::javac::code::Type* error();
	virtual void forceStackTop(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::jvm::Code$State* join(::com::sun::tools::javac::jvm::Code$State* other);
	virtual void lock(int32_t register$);
	virtual void markInitialized(::com::sun::tools::javac::jvm::UninitializedType* old);
	virtual ::com::sun::tools::javac::code::Type* peek();
	virtual void pop(int32_t n);
	virtual void pop(::com::sun::tools::javac::code::Type* t);
	virtual ::com::sun::tools::javac::code::Type* pop1();
	virtual ::com::sun::tools::javac::code::Type* pop2();
	virtual void push(::com::sun::tools::javac::code::Type* t);
	virtual void unlock(int32_t register$);
	::com::sun::tools::javac::jvm::Code* this$0 = nullptr;
	::com::sun::tools::javac::util::Bits* defined = nullptr;
	$Array<::com::sun::tools::javac::code::Type>* stack = nullptr;
	int32_t stacksize = 0;
	$ints* locks = nullptr;
	int32_t nlocks = 0;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Code$State_h_