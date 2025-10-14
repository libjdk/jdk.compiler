#ifndef _com_sun_tools_javac_jvm_ClassReader$AttributeKind_h_
#define _com_sun_tools_javac_jvm_ClassReader$AttributeKind_h_
//$ class com.sun.tools.javac.jvm.ClassReader$AttributeKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("MEMBER")
#undef MEMBER

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export ClassReader$AttributeKind : public ::java::lang::Enum {
	$class(ClassReader$AttributeKind, 0, ::java::lang::Enum)
public:
	ClassReader$AttributeKind();
	static $Array<::com::sun::tools::javac::jvm::ClassReader$AttributeKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::jvm::ClassReader$AttributeKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::jvm::ClassReader$AttributeKind>* values();
	static ::com::sun::tools::javac::jvm::ClassReader$AttributeKind* CLASS;
	static ::com::sun::tools::javac::jvm::ClassReader$AttributeKind* MEMBER;
	static $Array<::com::sun::tools::javac::jvm::ClassReader$AttributeKind>* $VALUES;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS")
#pragma pop_macro("MEMBER")

#endif // _com_sun_tools_javac_jvm_ClassReader$AttributeKind_h_