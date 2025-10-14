#ifndef _com_sun_tools_javac_jvm_JNIWriter$TypeSignature$JvmTypeVisitor_h_
#define _com_sun_tools_javac_jvm_JNIWriter$TypeSignature$JvmTypeVisitor_h_
//$ class com.sun.tools.javac.jvm.JNIWriter$TypeSignature$JvmTypeVisitor
//$ extends com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor

#include <com/sun/tools/javac/jvm/JNIWriter$SimpleTypeVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$ClassType;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class JNIWriter$TypeSignature$JvmTypeVisitor : public ::com::sun::tools::javac::jvm::JNIWriter$SimpleTypeVisitor {
	$class(JNIWriter$TypeSignature$JvmTypeVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::JNIWriter$SimpleTypeVisitor)
public:
	JNIWriter$TypeSignature$JvmTypeVisitor();
	void init$(bool useFlatname);
	$String* getJvmPrimitiveSignature(::com::sun::tools::javac::code::Type* t);
	void setDeclaredType(::com::sun::tools::javac::code::Type* t, ::java::lang::StringBuilder* s);
	virtual ::com::sun::tools::javac::code::Type* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::lang::StringBuilder* s);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::StringBuilder* s);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::StringBuilder* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	bool useFlatname = false;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_JNIWriter$TypeSignature$JvmTypeVisitor_h_