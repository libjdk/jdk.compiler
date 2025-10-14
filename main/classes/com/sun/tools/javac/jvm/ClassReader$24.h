#ifndef _com_sun_tools_javac_jvm_ClassReader$24_h_
#define _com_sun_tools_javac_jvm_ClassReader$24_h_
//$ class com.sun.tools.javac.jvm.ClassReader$24
//$ extends com.sun.tools.javac.jvm.ClassReader$AttributeReader

#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <java/lang/Array.h>

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
					class ClassReader$AttributeKind;
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

class ClassReader$24 : public ::com::sun::tools::javac::jvm::ClassReader$AttributeReader {
	$class(ClassReader$24, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::ClassReader$AttributeReader)
public:
	ClassReader$24();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::jvm::ClassFile$Version* version, ::java::util::Set* kinds);
	virtual bool accepts(::com::sun::tools::javac::jvm::ClassReader$AttributeKind* kind) override;
	::com::sun::tools::javac::util::Name* classNameMapper($bytes* arr, int32_t offset, int32_t length);
	virtual void read(::com::sun::tools::javac::code::Symbol* sym, int32_t attrLen) override;
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$24_h_