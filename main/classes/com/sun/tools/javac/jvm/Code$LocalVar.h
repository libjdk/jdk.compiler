#ifndef _com_sun_tools_javac_jvm_Code$LocalVar_h_
#define _com_sun_tools_javac_jvm_Code$LocalVar_h_
//$ class com.sun.tools.javac.jvm.Code$LocalVar
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$VarSymbol;
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
					class Code$LocalVar$Range;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export Code$LocalVar : public ::java::lang::Object {
	$class(Code$LocalVar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Code$LocalVar();
	void init$(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual void closeRange(char16_t length);
	virtual ::com::sun::tools::javac::jvm::Code$LocalVar* dup();
	virtual ::com::sun::tools::javac::jvm::Code$LocalVar$Range* firstRange();
	virtual ::com::sun::tools::javac::jvm::Code$LocalVar$Range* getWidestRange();
	virtual bool hasOpenRange();
	virtual bool isLastRangeInitialized();
	virtual ::com::sun::tools::javac::jvm::Code$LocalVar$Range* lastRange();
	virtual void openRange(char16_t start);
	virtual void removeLastRange();
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol$VarSymbol* sym = nullptr;
	char16_t reg = 0;
	::java::util::List* aliveRanges = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Code$LocalVar_h_