#ifndef _com_sun_tools_javac_jvm_ClassReader$CompleterDeproxy_h_
#define _com_sun_tools_javac_jvm_ClassReader$CompleterDeproxy_h_
//$ class com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy
//$ extends com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter

#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
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
					class ClassReader$CompoundAnnotationProxy;
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
					class JCDiagnostic;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$CompleterDeproxy : public ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter {
	$class(ClassReader$CompleterDeproxy, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter)
public:
	ClassReader$CompleterDeproxy();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* target, ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* repeatable);
	virtual void complete(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym) override;
	::com::sun::tools::javac::util::JCDiagnostic* lambda$complete$0(::java::lang::Exception* e);
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* proxyOn = nullptr;
	::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* target = nullptr;
	::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* repeatable = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$CompleterDeproxy_h_