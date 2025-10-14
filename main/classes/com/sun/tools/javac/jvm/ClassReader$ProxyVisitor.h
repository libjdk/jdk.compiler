#ifndef _com_sun_tools_javac_jvm_ClassReader$ProxyVisitor_h_
#define _com_sun_tools_javac_jvm_ClassReader$ProxyVisitor_h_
//$ interface com.sun.tools.javac.jvm.ClassReader$ProxyVisitor
//$ extends com.sun.tools.javac.code.Attribute$Visitor

#include <com/sun/tools/javac/code/Attribute$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class ClassReader$ArrayAttributeProxy;
					class ClassReader$ClassAttributeProxy;
					class ClassReader$CompoundAnnotationProxy;
					class ClassReader$EnumAttributeProxy;
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

class $export ClassReader$ProxyVisitor : public ::com::sun::tools::javac::code::Attribute$Visitor {
	$interface(ClassReader$ProxyVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute$Visitor)
public:
	virtual void visitArrayAttributeProxy(::com::sun::tools::javac::jvm::ClassReader$ArrayAttributeProxy* proxy) {}
	virtual void visitClassAttributeProxy(::com::sun::tools::javac::jvm::ClassReader$ClassAttributeProxy* proxy) {}
	virtual void visitCompoundAnnotationProxy(::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* proxy) {}
	virtual void visitEnumAttributeProxy(::com::sun::tools::javac::jvm::ClassReader$EnumAttributeProxy* proxy) {}
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$ProxyVisitor_h_