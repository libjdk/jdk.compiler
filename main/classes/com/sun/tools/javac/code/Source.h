#ifndef _com_sun_tools_javac_code_Source_h_
#define _com_sun_tools_javac_code_Source_h_
//$ class com.sun.tools.javac.code.Source
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("JDK10")
#undef JDK10
#pragma push_macro("JDK11")
#undef JDK11
#pragma push_macro("JDK12")
#undef JDK12
#pragma push_macro("JDK13")
#undef JDK13
#pragma push_macro("JDK14")
#undef JDK14
#pragma push_macro("JDK15")
#undef JDK15
#pragma push_macro("JDK16")
#undef JDK16
#pragma push_macro("JDK17")
#undef JDK17
#pragma push_macro("JDK1_2")
#undef JDK1_2
#pragma push_macro("JDK1_3")
#undef JDK1_3
#pragma push_macro("JDK1_4")
#undef JDK1_4
#pragma push_macro("JDK5")
#undef JDK5
#pragma push_macro("JDK6")
#undef JDK6
#pragma push_macro("JDK7")
#undef JDK7
#pragma push_macro("JDK8")
#undef JDK8
#pragma push_macro("JDK9")
#undef JDK9
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("MIN")
#undef MIN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Target;
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
namespace javax {
	namespace lang {
		namespace model {
			class SourceVersion;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Source : public ::java::lang::Enum {
	$class(Source, 0, ::java::lang::Enum)
public:
	Source();
	static $Array<::com::sun::tools::javac::code::Source>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name);
	static ::com::sun::tools::javac::code::Source* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isSupported();
	static ::com::sun::tools::javac::code::Source* lookup($String* name);
	virtual ::com::sun::tools::javac::jvm::Target* requiredTarget();
	static ::javax::lang::model::SourceVersion* toSourceVersion(::com::sun::tools::javac::code::Source* source);
	static ::com::sun::tools::javac::code::Source* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Source>* values();
	static ::com::sun::tools::javac::code::Source* JDK1_2;
	static ::com::sun::tools::javac::code::Source* JDK1_3;
	static ::com::sun::tools::javac::code::Source* JDK1_4;
	static ::com::sun::tools::javac::code::Source* JDK5;
	static ::com::sun::tools::javac::code::Source* JDK6;
	static ::com::sun::tools::javac::code::Source* JDK7;
	static ::com::sun::tools::javac::code::Source* JDK8;
	static ::com::sun::tools::javac::code::Source* JDK9;
	static ::com::sun::tools::javac::code::Source* JDK10;
	static ::com::sun::tools::javac::code::Source* JDK11;
	static ::com::sun::tools::javac::code::Source* JDK12;
	static ::com::sun::tools::javac::code::Source* JDK13;
	static ::com::sun::tools::javac::code::Source* JDK14;
	static ::com::sun::tools::javac::code::Source* JDK15;
	static ::com::sun::tools::javac::code::Source* JDK16;
	static ::com::sun::tools::javac::code::Source* JDK17;
	static $Array<::com::sun::tools::javac::code::Source>* $VALUES;
	static ::com::sun::tools::javac::util::Context$Key* sourceKey;
	$String* name$ = nullptr;
	static ::java::util::Map* tab;
	static ::com::sun::tools::javac::code::Source* MIN;
	static ::com::sun::tools::javac::code::Source* MAX;
	static ::com::sun::tools::javac::code::Source* DEFAULT;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEFAULT")
#pragma pop_macro("JDK10")
#pragma pop_macro("JDK11")
#pragma pop_macro("JDK12")
#pragma pop_macro("JDK13")
#pragma pop_macro("JDK14")
#pragma pop_macro("JDK15")
#pragma pop_macro("JDK16")
#pragma pop_macro("JDK17")
#pragma pop_macro("JDK1_2")
#pragma pop_macro("JDK1_3")
#pragma pop_macro("JDK1_4")
#pragma pop_macro("JDK5")
#pragma pop_macro("JDK6")
#pragma pop_macro("JDK7")
#pragma pop_macro("JDK8")
#pragma pop_macro("JDK9")
#pragma pop_macro("MAX")
#pragma pop_macro("MIN")

#endif // _com_sun_tools_javac_code_Source_h_