#ifndef _com_sun_tools_sjavac_BuildState_h_
#define _com_sun_tools_sjavac_BuildState_h_
//$ class com.sun.tools.sjavac.BuildState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Module;
				class Package;
				class Source;
			}
		}
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

class BuildState : public ::java::lang::Object {
	$class(BuildState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BuildState();
	void init$();
	virtual ::java::util::Map* artifacts();
	virtual void calculateDependents();
	virtual void checkInternalState($String* msg, bool linkedOnly, ::java::util::Map* srcs);
	virtual void copyPackagesExcept(::com::sun::tools::sjavac::BuildState* prev, ::java::util::Set* recompiled, ::java::util::Set* removed);
	virtual ::java::util::Map* dependents();
	virtual ::com::sun::tools::sjavac::Module* findModuleFromPackageName($String* pkg);
	virtual void flattenArtifacts(::java::util::Map* m);
	virtual void flattenPackagesSourcesAndArtifacts(::java::util::Map* m);
	virtual ::com::sun::tools::sjavac::Module* loadModule($String* l);
	virtual ::com::sun::tools::sjavac::Package* loadPackage(::com::sun::tools::sjavac::Module* lastModule, $String* l);
	virtual ::com::sun::tools::sjavac::Source* loadSource(::com::sun::tools::sjavac::Package* lastPackage, $String* l, bool is_generated);
	virtual ::com::sun::tools::sjavac::Module* lookupModule($String* mod);
	virtual ::java::util::Map* modules();
	virtual ::java::util::Map* packages();
	virtual ::java::util::Map* sources();
	::java::util::Map* modules$ = nullptr;
	::java::util::Map* packages$ = nullptr;
	::java::util::Map* sources$ = nullptr;
	::java::util::Map* artifacts$ = nullptr;
	::java::util::Map* dependents$ = nullptr;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_BuildState_h_