#ifndef _com_sun_tools_javac_jvm_ClassReader$AnnotationDefaultCompleter_h_
#define _com_sun_tools_javac_jvm_ClassReader$AnnotationDefaultCompleter_h_
//$ class com.sun.tools.javac.jvm.ClassReader$AnnotationDefaultCompleter
//$ extends com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy
//$ implements java.lang.Runnable

#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDeproxy.h>
#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Symbol$MethodSymbol;
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
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import ClassReader$AnnotationDefaultCompleter : public ::com::sun::tools::javac::jvm::ClassReader$AnnotationDeproxy, public ::java::lang::Runnable {
	$class(ClassReader$AnnotationDefaultCompleter, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::ClassReader$AnnotationDeproxy, ::java::lang::Runnable)
public:
	ClassReader$AnnotationDefaultCompleter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::code::Symbol$MethodSymbol* sym, ::com::sun::tools::javac::code::Attribute* value);
	virtual void run() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* sym = nullptr;
	::com::sun::tools::javac::code::Attribute* value = nullptr;
	::javax::tools::JavaFileObject* classFile = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$AnnotationDefaultCompleter_h_