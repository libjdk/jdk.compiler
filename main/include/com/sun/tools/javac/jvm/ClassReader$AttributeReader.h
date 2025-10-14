#ifndef _com_sun_tools_javac_jvm_ClassReader$AttributeReader_h_
#define _com_sun_tools_javac_jvm_ClassReader$AttributeReader_h_
//$ class com.sun.tools.javac.jvm.ClassReader$AttributeReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import ClassReader$AttributeReader : public ::java::lang::Object {
	$class(ClassReader$AttributeReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassReader$AttributeReader();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::jvm::ClassFile$Version* version, ::java::util::Set* kinds);
	virtual bool accepts(::com::sun::tools::javac::jvm::ClassReader$AttributeKind* kind);
	virtual void read(::com::sun::tools::javac::code::Symbol* sym, int32_t attrLen) {}
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::jvm::ClassFile$Version* version = nullptr;
	::java::util::Set* kinds = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$AttributeReader_h_