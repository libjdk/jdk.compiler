#ifndef _com_sun_tools_javac_jvm_JNIWriter$TypeSignature_h_
#define _com_sun_tools_javac_jvm_JNIWriter$TypeSignature_h_
//$ class com.sun.tools.javac.jvm.JNIWriter$TypeSignature
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SIG_ARRAY")
#undef SIG_ARRAY
#pragma push_macro("SIG_BOOLEAN")
#undef SIG_BOOLEAN
#pragma push_macro("SIG_BYTE")
#undef SIG_BYTE
#pragma push_macro("SIG_CHAR")
#undef SIG_CHAR
#pragma push_macro("SIG_CLASS")
#undef SIG_CLASS
#pragma push_macro("SIG_DOUBLE")
#undef SIG_DOUBLE
#pragma push_macro("SIG_FLOAT")
#undef SIG_FLOAT
#pragma push_macro("SIG_INT")
#undef SIG_INT
#pragma push_macro("SIG_LONG")
#undef SIG_LONG
#pragma push_macro("SIG_SHORT")
#undef SIG_SHORT
#pragma push_macro("SIG_VOID")
#undef SIG_VOID

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Types;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {
					class JavacElements;
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

class JNIWriter$TypeSignature : public ::java::lang::Object {
	$class(JNIWriter$TypeSignature, 0, ::java::lang::Object)
public:
	JNIWriter$TypeSignature();
	void init$(::com::sun::tools::javac::code::Types* types);
	virtual ::java::lang::StringBuilder* getJvmSignature(::com::sun::tools::javac::code::Type* type, bool useFlatname);
	virtual ::java::lang::StringBuilder* getParameterSignature(::com::sun::tools::javac::code::Type* mType, bool useFlatname);
	virtual ::java::lang::StringBuilder* getReturnSignature(::com::sun::tools::javac::code::Type* mType);
	virtual ::java::lang::StringBuilder* getSignature(::com::sun::tools::javac::code::Type* mType);
	::com::sun::tools::javac::model::JavacElements* elems = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	static $String* SIG_VOID;
	static $String* SIG_BOOLEAN;
	static $String* SIG_BYTE;
	static $String* SIG_CHAR;
	static $String* SIG_SHORT;
	static $String* SIG_INT;
	static $String* SIG_LONG;
	static $String* SIG_FLOAT;
	static $String* SIG_DOUBLE;
	static $String* SIG_ARRAY;
	static $String* SIG_CLASS;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("SIG_ARRAY")
#pragma pop_macro("SIG_BOOLEAN")
#pragma pop_macro("SIG_BYTE")
#pragma pop_macro("SIG_CHAR")
#pragma pop_macro("SIG_CLASS")
#pragma pop_macro("SIG_DOUBLE")
#pragma pop_macro("SIG_FLOAT")
#pragma pop_macro("SIG_INT")
#pragma pop_macro("SIG_LONG")
#pragma pop_macro("SIG_SHORT")
#pragma pop_macro("SIG_VOID")

#endif // _com_sun_tools_javac_jvm_JNIWriter$TypeSignature_h_