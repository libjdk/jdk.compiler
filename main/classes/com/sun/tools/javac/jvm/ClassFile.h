#ifndef _com_sun_tools_javac_jvm_ClassFile_h_
#define _com_sun_tools_javac_jvm_ClassFile_h_
//$ class com.sun.tools.javac.jvm.ClassFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JAVA_MAGIC")
#undef JAVA_MAGIC
#pragma push_macro("MAX_CODE")
#undef MAX_CODE
#pragma push_macro("MAX_DIMENSIONS")
#undef MAX_DIMENSIONS
#pragma push_macro("MAX_LOCALS")
#undef MAX_LOCALS
#pragma push_macro("MAX_PARAMETERS")
#undef MAX_PARAMETERS
#pragma push_macro("MAX_STACK")
#undef MAX_STACK
#pragma push_macro("PREVIEW_MINOR_VERSION")
#undef PREVIEW_MINOR_VERSION

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

class $export ClassFile : public ::java::lang::Object {
	$class(ClassFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassFile();
	void init$();
	static $bytes* externalize($bytes* buf, int32_t offset, int32_t len);
	static $bytes* externalize(::com::sun::tools::javac::util::Name* name);
	static $bytes* internalize($bytes* buf, int32_t offset, int32_t len);
	static $bytes* internalize(::com::sun::tools::javac::util::Name* name);
	static const int32_t JAVA_MAGIC = 0xCAFEBABE;
	static const int32_t CONSTANT_Utf8 = 1;
	static const int32_t CONSTANT_Unicode = 2;
	static const int32_t CONSTANT_Integer = 3;
	static const int32_t CONSTANT_Float = 4;
	static const int32_t CONSTANT_Long = 5;
	static const int32_t CONSTANT_Double = 6;
	static const int32_t CONSTANT_Class = 7;
	static const int32_t CONSTANT_String = 8;
	static const int32_t CONSTANT_Fieldref = 9;
	static const int32_t CONSTANT_Methodref = 10;
	static const int32_t CONSTANT_InterfaceMethodref = 11;
	static const int32_t CONSTANT_NameandType = 12;
	static const int32_t CONSTANT_MethodHandle = 15;
	static const int32_t CONSTANT_MethodType = 16;
	static const int32_t CONSTANT_Dynamic = 17;
	static const int32_t CONSTANT_InvokeDynamic = 18;
	static const int32_t CONSTANT_Module = 19;
	static const int32_t CONSTANT_Package = 20;
	static const int32_t REF_getField = 1;
	static const int32_t REF_getStatic = 2;
	static const int32_t REF_putField = 3;
	static const int32_t REF_putStatic = 4;
	static const int32_t REF_invokeVirtual = 5;
	static const int32_t REF_invokeStatic = 6;
	static const int32_t REF_invokeSpecial = 7;
	static const int32_t REF_newInvokeSpecial = 8;
	static const int32_t REF_invokeInterface = 9;
	static const int32_t MAX_PARAMETERS = 255;
	static const int32_t MAX_DIMENSIONS = 255;
	static const int32_t MAX_CODE = 0x0000FFFF;
	static const int32_t MAX_LOCALS = 0x0000FFFF;
	static const int32_t MAX_STACK = 0x0000FFFF;
	static const int32_t PREVIEW_MINOR_VERSION = 0x0000FFFF;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("JAVA_MAGIC")
#pragma pop_macro("MAX_CODE")
#pragma pop_macro("MAX_DIMENSIONS")
#pragma pop_macro("MAX_LOCALS")
#pragma pop_macro("MAX_PARAMETERS")
#pragma pop_macro("MAX_STACK")
#pragma pop_macro("PREVIEW_MINOR_VERSION")

#endif // _com_sun_tools_javac_jvm_ClassFile_h_