#ifndef _com_sun_tools_javac_jvm_JNIWriter$EncoderType_h_
#define _com_sun_tools_javac_jvm_JNIWriter$EncoderType_h_
//$ class com.sun.tools.javac.jvm.JNIWriter$EncoderType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("FIELDSTUB")
#undef FIELDSTUB
#pragma push_macro("JNI")
#undef JNI
#pragma push_macro("SIGNATURE")
#undef SIGNATURE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import JNIWriter$EncoderType : public ::java::lang::Enum {
	$class(JNIWriter$EncoderType, 0, ::java::lang::Enum)
public:
	JNIWriter$EncoderType();
	static $Array<::com::sun::tools::javac::jvm::JNIWriter$EncoderType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::jvm::JNIWriter$EncoderType* valueOf($String* name);
	static $Array<::com::sun::tools::javac::jvm::JNIWriter$EncoderType>* values();
	static ::com::sun::tools::javac::jvm::JNIWriter$EncoderType* CLASS;
	static ::com::sun::tools::javac::jvm::JNIWriter$EncoderType* FIELDSTUB;
	static ::com::sun::tools::javac::jvm::JNIWriter$EncoderType* FIELD;
	static ::com::sun::tools::javac::jvm::JNIWriter$EncoderType* JNI;
	static ::com::sun::tools::javac::jvm::JNIWriter$EncoderType* SIGNATURE;
	static $Array<::com::sun::tools::javac::jvm::JNIWriter$EncoderType>* $VALUES;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS")
#pragma pop_macro("FIELD")
#pragma pop_macro("FIELDSTUB")
#pragma pop_macro("JNI")
#pragma pop_macro("SIGNATURE")

#endif // _com_sun_tools_javac_jvm_JNIWriter$EncoderType_h_