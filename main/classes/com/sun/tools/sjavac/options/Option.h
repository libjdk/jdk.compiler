#ifndef _com_sun_tools_sjavac_options_Option_h_
#define _com_sun_tools_sjavac_options_Option_h_
//$ class com.sun.tools.sjavac.options.Option
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASSPATH")
#undef CLASSPATH
#pragma push_macro("CLASS_PATH")
#undef CLASS_PATH
#pragma push_macro("COMPARE_FOUND_SOURCES")
#undef COMPARE_FOUND_SOURCES
#pragma push_macro("COPY")
#undef COPY
#pragma push_macro("CP")
#undef CP
#pragma push_macro("D")
#undef D
#pragma push_macro("H")
#undef H
#pragma push_macro("I")
#undef I
#pragma push_macro("IMPLICIT")
#undef IMPLICIT
#pragma push_macro("J")
#undef J
#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("MODULE_PATH")
#undef MODULE_PATH
#pragma push_macro("P")
#undef P
#pragma push_macro("PERMIT_ARTIFACT")
#undef PERMIT_ARTIFACT
#pragma push_macro("PERMIT_SOURCES_WITHOUT_PACKAGE")
#undef PERMIT_SOURCES_WITHOUT_PACKAGE
#pragma push_macro("PERMIT_UNIDENTIFIED_ARTIFACTS")
#undef PERMIT_UNIDENTIFIED_ARTIFACTS
#pragma push_macro("S")
#undef S
#pragma push_macro("SERVER")
#undef SERVER
#pragma push_macro("SOURCEPATH")
#undef SOURCEPATH
#pragma push_macro("SOURCE_PATH")
#undef SOURCE_PATH
#pragma push_macro("SRC")
#undef SRC
#pragma push_macro("STARTSERVER")
#undef STARTSERVER
#pragma push_macro("STATE_DIR")
#undef STATE_DIR
#pragma push_macro("TR")
#undef TR
#pragma push_macro("VERBOSE")
#undef VERBOSE
#pragma push_macro("X")
#undef X

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {
					class ArgumentIterator;
					class OptionHelper;
				}
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

class Option : public ::java::lang::Enum {
	$class(Option, 0, ::java::lang::Enum)
public:
	Option();
	static $Array<::com::sun::tools::sjavac::options::Option>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description);
	virtual ::java::nio::file::Path* getFileArg(::com::sun::tools::sjavac::options::ArgumentIterator* iter, ::com::sun::tools::sjavac::options::OptionHelper* helper, bool fileAcceptable, bool dirAcceptable);
	virtual ::java::util::List* getFileListArg(::com::sun::tools::sjavac::options::ArgumentIterator* iter, ::com::sun::tools::sjavac::options::OptionHelper* helper);
	virtual $String* getFilePatternArg(::com::sun::tools::sjavac::options::ArgumentIterator* iter, ::com::sun::tools::sjavac::options::OptionHelper* helper);
	virtual bool hasOption();
	bool processCurrent(::com::sun::tools::sjavac::options::ArgumentIterator* argIter, ::com::sun::tools::sjavac::options::OptionHelper* helper);
	virtual void processMatching(::com::sun::tools::sjavac::options::ArgumentIterator* argIter, ::com::sun::tools::sjavac::options::OptionHelper* helper) {}
	static ::com::sun::tools::sjavac::options::Option* valueOf($String* name);
	static $Array<::com::sun::tools::sjavac::options::Option>* values();
	static ::com::sun::tools::sjavac::options::Option* SRC;
	static ::com::sun::tools::sjavac::options::Option* SOURCE_PATH;
	static ::com::sun::tools::sjavac::options::Option* SOURCEPATH;
	static ::com::sun::tools::sjavac::options::Option* MODULE_PATH;
	static ::com::sun::tools::sjavac::options::Option* P;
	static ::com::sun::tools::sjavac::options::Option* CLASS_PATH;
	static ::com::sun::tools::sjavac::options::Option* CLASSPATH;
	static ::com::sun::tools::sjavac::options::Option* CP;
	static ::com::sun::tools::sjavac::options::Option* X;
	static ::com::sun::tools::sjavac::options::Option* I;
	static ::com::sun::tools::sjavac::options::Option* TR;
	static ::com::sun::tools::sjavac::options::Option* COPY;
	static ::com::sun::tools::sjavac::options::Option* J;
	static ::com::sun::tools::sjavac::options::Option* SERVER;
	static ::com::sun::tools::sjavac::options::Option* STARTSERVER;
	static ::com::sun::tools::sjavac::options::Option* IMPLICIT;
	static ::com::sun::tools::sjavac::options::Option* LOG;
	static ::com::sun::tools::sjavac::options::Option* VERBOSE;
	static ::com::sun::tools::sjavac::options::Option* PERMIT_ARTIFACT;
	static ::com::sun::tools::sjavac::options::Option* PERMIT_UNIDENTIFIED_ARTIFACTS;
	static ::com::sun::tools::sjavac::options::Option* PERMIT_SOURCES_WITHOUT_PACKAGE;
	static ::com::sun::tools::sjavac::options::Option* COMPARE_FOUND_SOURCES;
	static ::com::sun::tools::sjavac::options::Option* D;
	static ::com::sun::tools::sjavac::options::Option* S;
	static ::com::sun::tools::sjavac::options::Option* H;
	static ::com::sun::tools::sjavac::options::Option* STATE_DIR;
	static $Array<::com::sun::tools::sjavac::options::Option>* $VALUES;
	$String* arg = nullptr;
	$String* description = nullptr;
};

				} // options
			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASSPATH")
#pragma pop_macro("CLASS_PATH")
#pragma pop_macro("COMPARE_FOUND_SOURCES")
#pragma pop_macro("COPY")
#pragma pop_macro("CP")
#pragma pop_macro("D")
#pragma pop_macro("H")
#pragma pop_macro("I")
#pragma pop_macro("IMPLICIT")
#pragma pop_macro("J")
#pragma pop_macro("LOG")
#pragma pop_macro("MODULE_PATH")
#pragma pop_macro("P")
#pragma pop_macro("PERMIT_ARTIFACT")
#pragma pop_macro("PERMIT_SOURCES_WITHOUT_PACKAGE")
#pragma pop_macro("PERMIT_UNIDENTIFIED_ARTIFACTS")
#pragma pop_macro("S")
#pragma pop_macro("SERVER")
#pragma pop_macro("SOURCEPATH")
#pragma pop_macro("SOURCE_PATH")
#pragma pop_macro("SRC")
#pragma pop_macro("STARTSERVER")
#pragma pop_macro("STATE_DIR")
#pragma pop_macro("TR")
#pragma pop_macro("VERBOSE")
#pragma pop_macro("X")

#endif // _com_sun_tools_sjavac_options_Option_h_