#ifndef _com_sun_tools_sjavac_JavacState_h_
#define _com_sun_tools_sjavac_JavacState_h_
//$ class com.sun.tools.sjavac.JavacState
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class BuildState;
				class CompileJavaPackages;
				class Source;
				class Transformer;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					class CompilationService;
				}
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
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class JavacState : public ::java::lang::Object {
	$class(JavacState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavacState();
	void init$(::com::sun::tools::sjavac::options::Options* op, bool removeJavacState);
	void addFileToTransform(::java::util::Map* gs, ::com::sun::tools::sjavac::Transformer* t, ::com::sun::tools::sjavac::Source* s);
	::java::util::Set* calculateAddedSources();
	::java::util::Set* calculateModifiedSources();
	::java::util::Set* calculateRemovedSources();
	virtual void checkSourceStatus(bool check_gensrc);
	virtual void clearTaintedPackages();
	virtual void compareWithMakefileList(::java::io::File* makefileSourceList);
	virtual void deleteClassArtifactsInTaintedPackages();
	void deleteContents(::java::io::File* dir);
	::java::util::Map* fetchPrevArtifacts($String* pkg);
	virtual void findAllArtifacts();
	static ::java::util::Set* findAllFiles(::java::io::File* dir);
	virtual ::java::util::Map* getJavaSuffixRule();
	virtual bool isIncremental();
	static ::com::sun::tools::sjavac::JavacState* load(::com::sun::tools::sjavac::options::Options* options);
	void needsSaving();
	virtual ::com::sun::tools::sjavac::BuildState* now();
	bool perform(::com::sun::tools::sjavac::comp::CompilationService* sjavac, ::java::io::File* outputDir, ::java::util::Map* suffixRules);
	virtual void performCopying(::java::io::File* binDir, ::java::util::Map* suffixRules);
	virtual bool performJavaCompilations(::com::sun::tools::sjavac::comp::CompilationService* sjavac, ::com::sun::tools::sjavac::options::Options* args, ::java::util::Set* recentlyCompiled, $booleans* rcValue);
	virtual void performTranslation(::java::io::File* gensrcDir, ::java::util::Map* suffixRules);
	virtual ::com::sun::tools::sjavac::BuildState* prev();
	static void recurse(::java::io::File* dir, ::java::util::Set* foundFiles);
	static $StringArray* removeArgsNotAffectingState($StringArray* args);
	virtual void removeSuperfluousArtifacts(::java::util::Set* recentlyCompiled);
	virtual void removeUnidentifiedArtifacts();
	virtual void save();
	virtual void setVisibleSources(::java::util::Map* vs);
	virtual void taintPackage($String* name, $String* because);
	virtual void taintPackagesDependingOnChangedClasspathPackages();
	virtual void taintPackagesDependingOnChangedPackages(::java::util::Set* pkgsWithChangedPubApi, ::java::util::Set* recentlyCompiled);
	virtual void taintPackagesThatMissArtifacts();
	virtual ::java::util::Set* taintedPackages();
	$String* theArgs = nullptr;
	int32_t numCores = 0;
	::java::io::File* javacState = nullptr;
	::com::sun::tools::sjavac::BuildState* prev$ = nullptr;
	::com::sun::tools::sjavac::BuildState* now$ = nullptr;
	bool needsSaving$ = false;
	bool newJavacState = false;
	::java::util::Set* taintedPackages$ = nullptr;
	::java::util::Set* packagesWithChangedPublicApis = nullptr;
	::java::util::Set* taintedModules = nullptr;
	::java::util::Set* recompiledPackages = nullptr;
	::java::io::File* binDir = nullptr;
	::java::io::File* gensrcDir = nullptr;
	::java::io::File* headerDir = nullptr;
	::java::io::File* stateDir = nullptr;
	::java::util::Set* binArtifacts = nullptr;
	::java::util::Set* gensrcArtifacts = nullptr;
	::java::util::Set* headerArtifacts = nullptr;
	::java::util::Set* removedSources = nullptr;
	::java::util::Set* addedSources = nullptr;
	::java::util::Set* modifiedSources = nullptr;
	::java::util::Set* visibleSrcs = nullptr;
	::com::sun::tools::sjavac::CompileJavaPackages* compileJavaPackages = nullptr;
	::com::sun::tools::sjavac::options::Options* options = nullptr;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_JavacState_h_