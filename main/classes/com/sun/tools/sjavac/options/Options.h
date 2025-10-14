#ifndef _com_sun_tools_sjavac_options_Options_h_
#define _com_sun_tools_sjavac_options_Options_h_
//$ class com.sun.tools.sjavac.options.Options
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

class Options : public ::java::lang::Object {
	$class(Options, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Options();
	void init$();
	virtual bool areUnidentifiedArtifactsPermitted();
	static $String* concatenateSourceLocations(::java::util::List* locs);
	virtual ::java::util::List* getClassSearchPath();
	virtual ::java::nio::file::Path* getDestDir();
	virtual ::java::nio::file::Path* getGenSrcDir();
	virtual ::java::nio::file::Path* getHeaderDir();
	virtual $String* getImplicitPolicy();
	virtual ::java::util::List* getJavacArgs();
	virtual $String* getLogLevel();
	virtual ::java::util::List* getModuleSearchPaths();
	virtual int32_t getNumCores();
	virtual $String* getServerConf();
	virtual ::java::nio::file::Path* getSourceReferenceList();
	virtual ::java::util::List* getSourceSearchPaths();
	virtual ::java::util::List* getSources();
	virtual $String* getStateArgsString();
	virtual ::java::nio::file::Path* getStateDir();
	virtual ::java::util::Map* getTranslationRules();
	virtual bool isDefaultPackagePermitted();
	virtual bool isJavaFilesAmongJavacArgs();
	virtual bool isUnidentifiedArtifactPermitted($String* f);
	static ::com::sun::tools::sjavac::options::Options* parseArgs($StringArray* args);
	virtual $StringArray* prepJavacArgs();
	virtual bool startServerFlag();
	::java::nio::file::Path* destDir = nullptr;
	::java::nio::file::Path* genSrcDir = nullptr;
	::java::nio::file::Path* headerDir = nullptr;
	::java::nio::file::Path* stateDir = nullptr;
	::java::util::List* sources = nullptr;
	::java::util::List* sourceSearchPaths = nullptr;
	::java::util::List* classSearchPaths = nullptr;
	::java::util::List* moduleSearchPaths = nullptr;
	$String* logLevel = nullptr;
	::java::util::Set* permitted_artifacts = nullptr;
	bool permitUnidentifiedArtifacts = false;
	bool permitSourcesInDefaultPackage = false;
	::java::nio::file::Path* sourceReferenceList = nullptr;
	int32_t numCores = 0;
	$String* implicitPolicy = nullptr;
	::java::util::List* javacArgs = nullptr;
	::java::util::Map* trRules = nullptr;
	bool startServer = false;
	$String* serverConf = nullptr;
};

				} // options
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_options_Options_h_