#ifndef _com_sun_tools_sjavac_options_Options$ArgDecoderOptionHelper_h_
#define _com_sun_tools_sjavac_options_Options$ArgDecoderOptionHelper_h_
//$ class com.sun.tools.sjavac.options.Options$ArgDecoderOptionHelper
//$ extends com.sun.tools.sjavac.options.OptionHelper

#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Transformer;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {
					class Options;
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

class Options$ArgDecoderOptionHelper : public ::com::sun::tools::sjavac::options::OptionHelper {
	$class(Options$ArgDecoderOptionHelper, $NO_CLASS_INIT, ::com::sun::tools::sjavac::options::OptionHelper)
public:
	Options$ArgDecoderOptionHelper();
	void init$(::com::sun::tools::sjavac::options::Options* this$0);
	virtual void addTransformer($String* suffix, ::com::sun::tools::sjavac::Transformer* tr) override;
	virtual void classpath(::java::util::List* paths) override;
	virtual void compareFoundSources(::java::nio::file::Path* referenceList) override;
	::java::util::List* createSourceLocations(::java::util::List* paths);
	virtual void destDir(::java::nio::file::Path* dir) override;
	virtual void exclude($String* exclPattern) override;
	virtual void generatedSourcesDir(::java::nio::file::Path* dir) override;
	virtual void headerDir(::java::nio::file::Path* dir) override;
	virtual void implicit($String* policy) override;
	virtual void include($String* inclPattern) override;
	virtual void javacArg($StringArray* arg) override;
	virtual void logLevel($String* level) override;
	virtual void modulepath(::java::util::List* paths) override;
	virtual void numCores(int32_t n) override;
	virtual void permitArtifact($String* f) override;
	virtual void permitDefaultPackage() override;
	virtual void permitUnidentifiedArtifacts() override;
	virtual void reportError($String* msg) override;
	void resetFilters();
	virtual void serverConf($String* conf) override;
	virtual void sourceRoots(::java::util::List* paths) override;
	virtual void sourcepath(::java::util::List* paths) override;
	virtual void startServerConf($String* conf) override;
	virtual void stateDir(::java::nio::file::Path* dir) override;
	::com::sun::tools::sjavac::options::Options* this$0 = nullptr;
	::java::util::List* includes = nullptr;
	::java::util::List* excludes = nullptr;
	::java::util::List* includeFiles = nullptr;
	::java::util::List* excludeFiles = nullptr;
	bool headerProvided = false;
	bool genSrcProvided = false;
	bool stateProvided = false;
};

				} // options
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_options_Options$ArgDecoderOptionHelper_h_