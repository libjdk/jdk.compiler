#ifndef _com_sun_tools_javac_util_Dependencies$CompletionCause_h_
#define _com_sun_tools_javac_util_Dependencies$CompletionCause_h_
//$ class com.sun.tools.javac.util.Dependencies$CompletionCause
//$ extends java.lang.Enum
//$ implements com.sun.tools.javac.util.GraphUtils$DependencyKind

#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS_READER")
#undef CLASS_READER
#pragma push_macro("HEADER_PHASE")
#undef HEADER_PHASE
#pragma push_macro("HIERARCHY_PHASE")
#undef HIERARCHY_PHASE
#pragma push_macro("IMPORTS_PHASE")
#undef IMPORTS_PHASE
#pragma push_macro("MEMBERS_PHASE")
#undef MEMBERS_PHASE
#pragma push_macro("MEMBER_ENTER")
#undef MEMBER_ENTER
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("PERMITS_PHASE")
#undef PERMITS_PHASE
#pragma push_macro("RECORD_PHASE")
#undef RECORD_PHASE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Dependencies$CompletionCause : public ::java::lang::Enum, public ::com::sun::tools::javac::util::GraphUtils$DependencyKind {
	$class(Dependencies$CompletionCause, 0, ::java::lang::Enum, ::com::sun::tools::javac::util::GraphUtils$DependencyKind)
public:
	Dependencies$CompletionCause();
	static $Array<::com::sun::tools::javac::util::Dependencies$CompletionCause>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::Dependencies$CompletionCause>* values();
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* CLASS_READER;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* HEADER_PHASE;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* HIERARCHY_PHASE;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* IMPORTS_PHASE;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* MEMBER_ENTER;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* RECORD_PHASE;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* MEMBERS_PHASE;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* PERMITS_PHASE;
	static ::com::sun::tools::javac::util::Dependencies$CompletionCause* OTHER;
	static $Array<::com::sun::tools::javac::util::Dependencies$CompletionCause>* $VALUES;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS_READER")
#pragma pop_macro("HEADER_PHASE")
#pragma pop_macro("HIERARCHY_PHASE")
#pragma pop_macro("IMPORTS_PHASE")
#pragma pop_macro("MEMBERS_PHASE")
#pragma pop_macro("MEMBER_ENTER")
#pragma pop_macro("OTHER")
#pragma pop_macro("PERMITS_PHASE")
#pragma pop_macro("RECORD_PHASE")

#endif // _com_sun_tools_javac_util_Dependencies$CompletionCause_h_