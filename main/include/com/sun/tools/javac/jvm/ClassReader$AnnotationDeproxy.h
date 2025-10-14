#ifndef _com_sun_tools_javac_jvm_ClassReader$AnnotationDeproxy_h_
#define _com_sun_tools_javac_jvm_ClassReader$AnnotationDeproxy_h_
//$ class com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy
//$ extends com.sun.tools.javac.jvm.ClassReader$ProxyVisitor

#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Attribute$Array;
					class Attribute$Class;
					class Attribute$Compound;
					class Attribute$Constant;
					class Attribute$Enum;
					class Attribute$Error;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
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
				namespace util {
					class List;
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

class $import ClassReader$AnnotationDeproxy : public ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor {
	$class(ClassReader$AnnotationDeproxy, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor)
public:
	ClassReader$AnnotationDeproxy();
	void init$(::com::sun::tools::javac::jvm::ClassReader* this$0, ::com::sun::tools::javac::code::Symbol$ClassSymbol* owner);
	virtual ::com::sun::tools::javac::code::Attribute* deproxy(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Attribute* a);
	virtual ::com::sun::tools::javac::code::Attribute$Compound* deproxyCompound(::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* a);
	virtual ::com::sun::tools::javac::util::List* deproxyCompoundList(::com::sun::tools::javac::util::List* pl);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* findAccessMethod(::com::sun::tools::javac::code::Type* container, ::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Type* resolvePossibleProxyType(::com::sun::tools::javac::code::Type* t);
	virtual void visitArray(::com::sun::tools::javac::code::Attribute$Array* array) override;
	virtual void visitArrayAttributeProxy(::com::sun::tools::javac::jvm::ClassReader$ArrayAttributeProxy* proxy) override;
	virtual void visitClass(::com::sun::tools::javac::code::Attribute$Class* clazz) override;
	virtual void visitClassAttributeProxy(::com::sun::tools::javac::jvm::ClassReader$ClassAttributeProxy* proxy) override;
	virtual void visitCompound(::com::sun::tools::javac::code::Attribute$Compound* compound) override;
	virtual void visitCompoundAnnotationProxy(::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* proxy) override;
	virtual void visitConstant(::com::sun::tools::javac::code::Attribute$Constant* value) override;
	virtual void visitEnum(::com::sun::tools::javac::code::Attribute$Enum* e) override;
	virtual void visitEnumAttributeProxy(::com::sun::tools::javac::jvm::ClassReader$EnumAttributeProxy* proxy) override;
	virtual void visitError(::com::sun::tools::javac::code::Attribute$Error* e) override;
	::com::sun::tools::javac::jvm::ClassReader* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* requestingOwner = nullptr;
	::com::sun::tools::javac::code::Attribute* result = nullptr;
	::com::sun::tools::javac::code::Type* type = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassReader$AnnotationDeproxy_h_