#ifndef _com_sun_tools_javac_comp_Infer$DependencyKind_h_
#define _com_sun_tools_javac_comp_Infer$DependencyKind_h_
//$ class com.sun.tools.javac.comp.Infer$DependencyKind
//$ extends java.lang.Enum
//$ implements com.sun.tools.javac.util.GraphUtils$DependencyKind

#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BOUND")
#undef BOUND
#pragma push_macro("STUCK")
#undef STUCK

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Infer$DependencyKind : public ::java::lang::Enum, public ::com::sun::tools::javac::util::GraphUtils$DependencyKind {
	$class(Infer$DependencyKind, 0, ::java::lang::Enum, ::com::sun::tools::javac::util::GraphUtils$DependencyKind)
public:
	Infer$DependencyKind();
	static $Array<::com::sun::tools::javac::comp::Infer$DependencyKind>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* dotStyle);
	virtual $String* toString() override;
	static ::com::sun::tools::javac::comp::Infer$DependencyKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Infer$DependencyKind>* values();
	static ::com::sun::tools::javac::comp::Infer$DependencyKind* BOUND;
	static ::com::sun::tools::javac::comp::Infer$DependencyKind* STUCK;
	static $Array<::com::sun::tools::javac::comp::Infer$DependencyKind>* $VALUES;
	$String* dotStyle = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BOUND")
#pragma pop_macro("STUCK")

#endif // _com_sun_tools_javac_comp_Infer$DependencyKind_h_