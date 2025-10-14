#ifndef _com_sun_tools_javac_jvm_Target_h_
#define _com_sun_tools_javac_jvm_Target_h_
//$ class com.sun.tools.javac.jvm.Target
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("JDK1_1")
#undef JDK1_1
#pragma push_macro("JDK1_2")
#undef JDK1_2
#pragma push_macro("JDK1_3")
#undef JDK1_3
#pragma push_macro("JDK1_4")
#undef JDK1_4
#pragma push_macro("JDK1_5")
#undef JDK1_5
#pragma push_macro("JDK1_6")
#undef JDK1_6
#pragma push_macro("JDK1_7")
#undef JDK1_7
#pragma push_macro("JDK1_8")
#undef JDK1_8
#pragma push_macro("JDK1_9")
#undef JDK1_9
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("MIN")
#undef MIN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Key;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import Target : public ::java::lang::Enum {
	$class(Target, 0, ::java::lang::Enum)
public:
	Target();
	static $Array<::com::sun::tools::javac::jvm::Target>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, int32_t majorVersion, int32_t minorVersion);
	virtual bool allApiModulesAreRoots();
	virtual bool hasMethodParameters();
	virtual bool hasNestmateAccess();
	virtual bool hasSealedClasses();
	virtual bool hasStringConcatFactory();
	virtual bool hasVirtualPrivateInvoke();
	static ::com::sun::tools::javac::jvm::Target* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isSupported();
	static ::com::sun::tools::javac::jvm::Target* lookup($String* name);
	virtual $String* multiReleaseValue();
	virtual bool obsoleteAccStrict();
	virtual bool runtimeUseNestAccess();
	virtual char16_t syntheticNameChar();
	static ::com::sun::tools::javac::jvm::Target* valueOf($String* name);
	static $Array<::com::sun::tools::javac::jvm::Target>* values();
	static ::com::sun::tools::javac::jvm::Target* JDK1_1;
	static ::com::sun::tools::javac::jvm::Target* JDK1_2;
	static ::com::sun::tools::javac::jvm::Target* JDK1_3;
	static ::com::sun::tools::javac::jvm::Target* JDK1_4;
	static ::com::sun::tools::javac::jvm::Target* JDK1_5;
	static ::com::sun::tools::javac::jvm::Target* JDK1_6;
	static ::com::sun::tools::javac::jvm::Target* JDK1_7;
	static ::com::sun::tools::javac::jvm::Target* JDK1_8;
	static ::com::sun::tools::javac::jvm::Target* JDK1_9;
	static ::com::sun::tools::javac::jvm::Target* JDK1_10;
	static ::com::sun::tools::javac::jvm::Target* JDK1_11;
	static ::com::sun::tools::javac::jvm::Target* JDK1_12;
	static ::com::sun::tools::javac::jvm::Target* JDK1_13;
	static ::com::sun::tools::javac::jvm::Target* JDK1_14;
	static ::com::sun::tools::javac::jvm::Target* JDK1_15;
	static ::com::sun::tools::javac::jvm::Target* JDK1_16;
	static ::com::sun::tools::javac::jvm::Target* JDK1_17;
	static $Array<::com::sun::tools::javac::jvm::Target>* $VALUES;
	static ::com::sun::tools::javac::util::Context$Key* targetKey;
	static ::com::sun::tools::javac::jvm::Target* MIN;
	static ::com::sun::tools::javac::jvm::Target* MAX;
	static ::java::util::Map* tab;
	$String* name$ = nullptr;
	int32_t majorVersion = 0;
	int32_t minorVersion = 0;
	static ::com::sun::tools::javac::jvm::Target* DEFAULT;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEFAULT")
#pragma pop_macro("JDK1_1")
#pragma pop_macro("JDK1_2")
#pragma pop_macro("JDK1_3")
#pragma pop_macro("JDK1_4")
#pragma pop_macro("JDK1_5")
#pragma pop_macro("JDK1_6")
#pragma pop_macro("JDK1_7")
#pragma pop_macro("JDK1_8")
#pragma pop_macro("JDK1_9")
#pragma pop_macro("MAX")
#pragma pop_macro("MIN")

#endif // _com_sun_tools_javac_jvm_Target_h_