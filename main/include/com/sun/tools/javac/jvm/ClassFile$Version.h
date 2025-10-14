#ifndef _com_sun_tools_javac_jvm_ClassFile$Version_h_
#define _com_sun_tools_javac_jvm_ClassFile$Version_h_
//$ class com.sun.tools.javac.jvm.ClassFile$Version
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("MIN")
#undef MIN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import ClassFile$Version : public ::java::lang::Enum {
	$class(ClassFile$Version, 0, ::java::lang::Enum)
public:
	ClassFile$Version();
	static $Array<::com::sun::tools::javac::jvm::ClassFile$Version>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t major, int32_t minor);
	static ::com::sun::tools::javac::jvm::ClassFile$Version* MAX();
	static ::com::sun::tools::javac::jvm::ClassFile$Version* MIN();
	static ::com::sun::tools::javac::jvm::ClassFile$Version* valueOf($String* name);
	static $Array<::com::sun::tools::javac::jvm::ClassFile$Version>* values();
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V45_3;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V49;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V50;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V51;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V52;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V53;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V54;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V55;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V56;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V57;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V58;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V59;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V60;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* V61;
	static $Array<::com::sun::tools::javac::jvm::ClassFile$Version>* $VALUES;
	int32_t major = 0;
	int32_t minor = 0;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* MIN$;
	static ::com::sun::tools::javac::jvm::ClassFile$Version* MAX$;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("MAX")
#pragma pop_macro("MIN")

#endif // _com_sun_tools_javac_jvm_ClassFile$Version_h_