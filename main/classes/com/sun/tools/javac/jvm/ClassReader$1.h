#ifndef _com_sun_tools_javac_jvm_ClassReader$1_h_
#define _com_sun_tools_javac_jvm_ClassReader$1_h_
//$ class com.sun.tools.javac.jvm.ClassReader$1
//$ extends com.sun.tools.javac.code.Type$ClassType

#include <com/sun/tools/javac/code/Type$ClassType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
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
					class ClassReader;
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
					class List;
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

class ClassReader$1 : public ::com::sun::tools::javac::code::Type$ClassType {
	$class(ClassReader$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType)
public:
	ClassReader$1();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	virtual ::com::sun::tools::javac::code::Type* getEnclosingType() override;
	virtual void setEnclosingType(::com::sun::tools::javac::code::Type* outer) override;
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
	bool completed = false;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$1_h_