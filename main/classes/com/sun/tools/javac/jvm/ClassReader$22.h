#ifndef _com_sun_tools_javac_jvm_ClassReader$22_h_
#define _com_sun_tools_javac_jvm_ClassReader$22_h_
//$ class com.sun.tools.javac.jvm.ClassReader$22
//$ extends com.sun.tools.javac.jvm.ClassReader$AttributeReader

#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class ClassFile$Version;
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
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$22 : public ::com::sun::tools::javac::jvm::ClassReader$AttributeReader {
	$class(ClassReader$22, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::ClassReader$AttributeReader)
public:
	ClassReader$22();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::jvm::ClassFile$Version* version, ::java::util::Set* kinds);
	virtual void read(::com::sun::tools::javac::code::Symbol* sym, int32_t attrLen) override;
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$22_h_