#ifndef _com_sun_tools_sjavac_options_OptionHelper_h_
#define _com_sun_tools_sjavac_options_OptionHelper_h_
//$ class com.sun.tools.sjavac.options.OptionHelper
//$ extends java.lang.Object

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

class OptionHelper : public ::java::lang::Object {
	$class(OptionHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OptionHelper();
	void init$();
	virtual void addTransformer($String* suffix, ::com::sun::tools::sjavac::Transformer* tr) {}
	virtual void classpath(::java::util::List* path) {}
	virtual void compareFoundSources(::java::nio::file::Path* referenceList) {}
	virtual void destDir(::java::nio::file::Path* dir) {}
	virtual void exclude($String* excl) {}
	virtual void generatedSourcesDir(::java::nio::file::Path* genSrcDir) {}
	virtual void headerDir(::java::nio::file::Path* dir) {}
	virtual void implicit($String* policy) {}
	virtual void include($String* incl) {}
	virtual void javacArg($StringArray* arg) {}
	virtual void logLevel($String* level) {}
	virtual void modulepath(::java::util::List* path) {}
	virtual void numCores(int32_t parseInt) {}
	virtual void permitArtifact($String* f) {}
	virtual void permitDefaultPackage() {}
	virtual void permitUnidentifiedArtifacts() {}
	virtual void reportError($String* msg) {}
	virtual void serverConf($String* serverConf) {}
	virtual void sourceRoots(::java::util::List* path) {}
	virtual void sourcepath(::java::util::List* path) {}
	virtual void startServerConf($String* serverConf) {}
	virtual void stateDir(::java::nio::file::Path* dir) {}
	virtual void traverse($StringArray* args);
	static $String* unescapeCmdArg($String* arg);
};

				} // options
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_options_OptionHelper_h_