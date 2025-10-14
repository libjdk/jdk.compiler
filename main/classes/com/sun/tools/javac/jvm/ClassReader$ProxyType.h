#ifndef _com_sun_tools_javac_jvm_ClassReader$ProxyType_h_
#define _com_sun_tools_javac_jvm_ClassReader$ProxyType_h_
//$ class com.sun.tools.javac.jvm.ClassReader$ProxyType
//$ extends com.sun.tools.javac.code.Type

#include <com/sun/tools/javac/code/Type.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TypeMetadata;
					class TypeTag;
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
					class Name;
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

class ClassReader$ProxyType : public ::com::sun::tools::javac::code::Type {
	$class(ClassReader$ProxyType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type)
public:
	ClassReader$ProxyType();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, int32_t index);
	virtual ::com::sun::tools::javac::code::Type* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* metadata) override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual ::com::sun::tools::javac::code::Type* resolve();
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
	::com::sun::tools::javac::util::Name* name = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$ProxyType_h_